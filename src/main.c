
#include "platform.h"
#include "7305.h"


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//The whole sound doesn't fit onto the RAM.
//Reading per partes is not possible as this is synchronnous player (there would be silences when reading).
//So I read each page (4KB)of the wav file and try to find it in the flash. 
//Simply finding start of the file is not enough because of fragmentation.

//Search the whole flash, do not assume FS start at 0xA1000000 
//(already tried interval 0xA1000000 - 0xA1FFFFFF, but some parts of the file were outside of this interval)
#define FLASH_START 0xA0000000  
//page has 4 KB (I hope)
#define FLASH_PAGE_SIZE 4096
//8K pages
#define FLASH_PAGE_COUNT (4096*2)

//allocate 128 items for max 128 fragments of the file.
// 640 KB should to be enough for everyone ;-)
#define MAX_FRAGMENTS 128
//descriptor for 1 fragment
typedef struct
{
	short msOffset;//page index (0 ~ 8K)
	short msCount;//count of pages in this fragment
}FileMappingItem;


typedef struct
{
	FileMappingItem mTable[MAX_FRAGMENTS];//table of fragments
	int miItemCount;
	int miTotalLength;//length of the file
	int miCurrentLength;//currently returned length (by GetNextdata() )
	int miCurrentItem;//active fragment (to be returned by GetNextdata() )

}FileMapping;

//reset reading to start
void ResetData(FileMapping *pMap)
{
	pMap->miCurrentItem = 0;
	pMap->miCurrentLength = 0;
}

//get pointer to next fragment of the file
int GetNextData(FileMapping *pMap,int *piLength,unsigned char **ppBuffer)
{
	unsigned char *pFlashFS = (unsigned char *)FLASH_START;
	FileMappingItem *pItem = &(pMap->mTable[pMap->miCurrentItem]);
	if(pMap->miCurrentItem >= pMap->miItemCount)
	{
		//eof ?
		*piLength = 0;
		return -1;
	}
	pMap->miCurrentItem++;
	*ppBuffer = pFlashFS + (((int)pItem->msOffset)*FLASH_PAGE_SIZE);
	*piLength = ((int)pItem->msCount)*FLASH_PAGE_SIZE;
    pMap->miCurrentLength += *piLength;
	if(pMap->miCurrentLength >  pMap->miTotalLength)
	{
		//last page is only partially used
		*piLength -= pMap->miCurrentLength - pMap->miTotalLength;
		pMap->miCurrentLength = pMap->miTotalLength;
	}
	return 0;
}

//I was able to use memcmp(), it compiled but it seems it returned always 0 
// quick fix for now
int Xmemcmp(const char *p1,const char *p2,int len)
{
	while(len)
	{
		if(*p1 != *p2)
		{
			return 1;
		}
		p1++;
		p2++;
		len--;
	}
	return 0;
}


int CreateFileMapping(const unsigned short *pFileName,FileMapping *pMap)
{
	int iResult = 0;
	char cBuffer[FLASH_PAGE_SIZE];
	int hFile = Bfile_OpenFile_OS(pFileName,0);
	int iLength,j;
	char *pFlashFS = (char *)FLASH_START;

	pMap->miItemCount = 0;
	pMap->miTotalLength = 0;
	iLength = Bfile_ReadFile_OS(hFile,cBuffer,FLASH_PAGE_SIZE,-1);
	while(iLength > 0)
	{
		//do not optimize (= do not move these 2 variables before loop)!
		// fx-cg allocates pages for file in <random> order so page from the end of the file 
		//can have lower index than page from the beginning
		const char *pTgt = pFlashFS;
		int iPageIndx = 0;

		for(;iPageIndx < FLASH_PAGE_COUNT;iPageIndx++)
		{
			if(!Xmemcmp(pTgt,cBuffer,iLength))
			{
				break;
			}
			pTgt += FLASH_PAGE_SIZE;
		}
		if(iPageIndx == FLASH_PAGE_COUNT)
		{
			//page not found !
			iResult = -2;
			goto lbExit;
		}
		pMap->miItemCount ++;
		if(pMap->miItemCount >= MAX_FRAGMENTS)
		{
			//file too fragmented !
			iResult = -3;
			goto lbExit;
		}
		pMap->mTable[pMap->miItemCount-1].msOffset = (short)iPageIndx;
		pMap->mTable[pMap->miItemCount-1].msCount = 0;
		//assume fragment has more pages
		for(;;)
		{
			pMap->mTable[pMap->miItemCount-1].msCount++;
			pMap->miTotalLength += iLength;
			iPageIndx++;
			pTgt += FLASH_PAGE_SIZE;

			if(iLength < FLASH_PAGE_SIZE)
			{
				//this was the last page
				iResult = pMap->miTotalLength;
				goto lbExit;
			}
			iLength = Bfile_ReadFile_OS(hFile,cBuffer,FLASH_PAGE_SIZE,-1);
			if(iLength <= 0)
			{
				break;
			}
			if(Xmemcmp(pTgt,cBuffer,iLength))
			{
				break;
			}
		}
	}
	if(iLength < 0)
	{
		iResult = -1;
	}
	else
	{
		iResult = pMap->miTotalLength;
	}

lbExit:
	Bfile_CloseFile_OS(hFile);
	return iResult;

}


////////////////////////////////////////////////////////////////////////////////////////////////////////////
//demo.wav
const unsigned short NAME[] = {'\\','\\','f','l','s','0','\\','D','e','m','o','.','w','a','v',0};

int giWavMode = 0;//xFF;

static unsigned char *gpBuffer;
static int giLength;
static int giBufIndex = 0;
static int giTableIndex = 0;
static int giFromHighTab = 0;
static const unsigned char ptab[]={0,1,3,7,15,31,63,127};
static void AudioSender(void)
{
	for(;;){
		//it has only 16 B fifo :-(
		unsigned samp=gpBuffer[giBufIndex++]>>3;
		if(giBufIndex>=giLength)
			return;
		unsigned x;
		for(x=0;x<4;++x){
			if(samp>7){
				SCIF2.SCFTDR=255;
				samp-=8;
			}else{
				SCIF2.SCFTDR=ptab[samp];
				samp=0;
			}
			while((SCIF2.SCFDR.WORD >> 8)>=15);
		}
	}
}


static int ComOpen()
{
	unsigned char settings[5]={0,9,0,0,0};//115200,1xstop bits
	if(Serial_Open(&settings))
	{
		return 1;
	}
		//SCIF2.SCSMR.BIT.SRC = 1;//1/5 (for 9860)

	//it has no SRC register (comparing to fx9860G), so actual speed is only ~ 460800
	//SCIF2.SCSMR.BIT.SRC = 0;//1/16 (for 9860)
	SCIF2.SCSMR.BIT.CKS = 0;//1/1 
		//SCIF2.SCBRR = 2;//!override speed to 1959390 bps (for 9860)
	SCIF2.SCBRR = 0;//!override speed to 1836000 bps (for 9860)
	return  0;
}
static int keyPressed(int basic_keycode){
	const unsigned short* keyboard_register = (unsigned short*)0xA44B0000;
	int row, col, word, bit;
	row = basic_keycode%10;
	col = basic_keycode/10-1;
	word = row>>1;
	bit = col + ((row&1)<<3);
	return (0 != (keyboard_register[word] & 1<<bit));
}
void main(void){
	char *pszMsg;
	FileMapping aMap = {0};
	int iRes = CreateFileMapping(NAME,&aMap);
	switch(iRes)
	{
	case -1:
		pszMsg = "File read error";
		goto lbExit;
		break;
	case -2:
		pszMsg = "Page not found";
		goto lbExit;
		break;
	case -3:
		pszMsg = "File too fragmented";
		goto lbExit;
		break;
	default:
		break;
	}
	ResetData(&aMap);

	iRes = GetNextData(&aMap,&giLength,&gpBuffer);
	if(iRes)
	{

		pszMsg = "Get data failed";
		goto lbExit;
	}
	
	//skip wav header
	giBufIndex += 44;
	
	locate_OS( 1, 1 );
	PrintLine( "Playing...", 21 );

	if(ComOpen())
	{
		pszMsg = "COM open error";
		goto lbExit;
	}

	Bdisp_PutDisp_DD();

	while(giLength > 0)
	{
		AudioSender();

		iRes = GetNextData(&aMap,&giLength,&gpBuffer);

		giBufIndex = 0;
		if(keyPressed(KEY_PRGM_EXE))
			break;
	}
	Serial_Close(1); 
	pszMsg = "Done";

lbExit:
	locate_OS( 1, 2 );
	PrintLine( (unsigned char *)pszMsg, 21 );
	Bdisp_PutDisp_DD();
	GetKey( &giBufIndex);//just some variable
}
