
// quick dirty modify to 7305 (SCIF2 only)
/*********************************************************************
*
* Device     : SH-4A/SH7730
*
* File Name  : iodefine.h
*
* Abstract   : Definition of I/O Register.
*
* History    : 1.03  (2008-10-01)  [Hardware Manual Revision : 1.00]
*                                  [Technical Update TN-SH7-A670A/J]
*
* Copyright(c) 2008 Renesas Technology Corp.
*               And Renesas Solutions Corp.,All Rights Reserved. 
*
*********************************************************************/

/***********************************************************************/
/* IO_SH7730 Include File                                    Ver.1.03  */
/***********************************************************************/
struct st_mmu {                                        /* struct MMU   */
       unsigned long PTEH;                             /* PTEH         */
       unsigned long PTEL;                             /* PTEL         */
       unsigned long TTB;                              /* TTB          */
       unsigned long TEA;                              /* TEA          */
       unsigned long MMUCR;                            /* MMUCR        */
       unsigned char wk0[32];                          /*              */
       unsigned long PTEA;                             /* PTEA         */
       unsigned char wk1[56];                          /*              */
       unsigned long PASCR;                            /* PASCR        */
       unsigned char wk2[4];                           /*              */
       unsigned long IRMCR;                            /* IRMCR        */
};                                                     /*              */
struct st_cache {                                      /* struct CACHE */
       union {                                         /* CCR          */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :20;                 /*              */
                    unsigned long ICI:1;               /*   ICI        */
                    unsigned long :2;                  /*              */
                    unsigned long ICE:1;               /*   ICE        */
                    unsigned long :4;                  /*              */
                    unsigned long OCI:1;               /*   OCI        */
                    unsigned long CB:1;                /*   CB         */
                    unsigned long WT:1;                /*   WT         */
                    unsigned long OCE:1;               /*   OCE        */
                    } BIT;                             /*              */
             } CCR;                                    /*              */
       unsigned char wk0[24];                          /*              */
       unsigned long QACR0;                            /* QACR0        */
       unsigned long QACR1;                            /* QACR1        */
       unsigned char wk1[52];                          /*              */
       unsigned long RAMCR;                            /* RAMCR        */
};                                                     /*              */
struct st_intc0 {                                      /* struct INTC  */
       unsigned short IPRA;                            /* IPRA         */
       unsigned char wk0[2];                           /*              */
       unsigned short IPRB;                            /* IPRB         */
       unsigned char wk1[2];                           /*              */
       unsigned short IPRC;                            /* IPRC         */
       unsigned char wk2[2];                           /*              */
       unsigned short IPRD;                            /* IPRD         */
       unsigned char wk3[2];                           /*              */
       unsigned short IPRE;                            /* IPRE         */
       unsigned char wk4[2];                           /*              */
       unsigned short IPRF;                            /* IPRF         */
       unsigned char wk5[2];                           /*              */
       unsigned short IPRG;                            /* IPRG         */
       unsigned char wk6[2];                           /*              */
       unsigned short IPRH;                            /* IPRH         */
       unsigned char wk7[2];                           /*              */
       unsigned short IPRI;                            /* IPRI         */
       unsigned char wk8[2];                           /*              */
       unsigned short IPRJ;                            /* IPRJ         */
       unsigned char wk9[2];                           /*              */
       unsigned short IPRK;                            /* IPRK         */
       unsigned char wk10[86];                         /*              */
       unsigned char IMR0;                             /* IMR0         */
       unsigned char wk11[3];                          /*              */
       union {                                         /* IMR1         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :1;                  /*              */
                    unsigned char _DADERR:1;           /*   _DADERR    */
                    unsigned char _DEI5:1;             /*   _DEI5      */
                    unsigned char _DEI4:1;             /*   _DEI4      */
                    unsigned char _DEI3:1;             /*   _DEI3      */
                    unsigned char _DEI2:1;             /*   _DEI2      */
                    unsigned char _DEI1:1;             /*   _DEI1      */
                    unsigned char _DEI0:1;             /*   _DEI0      */
                    } BIT;                             /*              */
             } IMR1;                                   /*              */
       unsigned char wk12[3];                          /*              */
       union {                                         /* IMR2         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :3;                  /*              */
                    unsigned char _ADI:1;              /*   _ADI       */
                    unsigned char :4;                  /*              */
                    } BIT;                             /*              */
             } IMR2;                                   /*              */
       unsigned char wk13[3];                          /*              */
       union {                                         /* IMR3         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _TEI:1;              /*   _TEI       */
                    unsigned char _TXI:1;              /*   _TXI       */
                    unsigned char _RXI:1;              /*   _RXI       */
                    unsigned char _ERI:1;              /*   _ERI       */
                    unsigned char :2;                  /*              */
                    unsigned char _IRDAI1:1;           /*   _IRDAI1    */
                    unsigned char _IRDAI0:1;           /*   _IRDAI0    */
                    } BIT;                             /*              */
             } IMR3;                                   /*              */
       unsigned char wk14[3];                          /*              */
       union {                                         /* IMR4         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :1;                  /*              */
                    unsigned char _TUNI2:1;            /*   _TUNI2     */
                    unsigned char _TUNI1:1;            /*   _TUNI1     */
                    unsigned char _TUNI0:1;            /*   _TUNI0     */
                    unsigned char :4;                  /*              */
                    } BIT;                             /*              */
             } IMR4;                                   /*              */
       unsigned char wk15[3];                          /*              */
       union {                                         /* IMR5         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :2;                  /*              */
                    unsigned char _SCIF5:1;            /*   _SCIF5     */
                    unsigned char _SCIF4:1;            /*   _SCIF4     */
                    unsigned char _SCIF3:1;            /*   _SCIF3     */
                    unsigned char _SCIF2:1;            /*   _SCIF2     */
                    unsigned char _SCIF1:1;            /*   _SCIF1     */
                    unsigned char _SCIF0:1;            /*   _SCIF0     */
                    } BIT;                             /*              */
             } IMR5;                                   /*              */
       unsigned char wk16[3];                          /*              */
       union {                                         /* IMR6         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :7;                  /*              */
                    unsigned char _SIOFI:1;            /*   _SIOFI     */
                    } BIT;                             /*              */
             } IMR6;                                   /*              */
       unsigned char wk17[3];                          /*              */
       union {                                         /* IMR7         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _IICI0:1;            /*   _IICI0     */
                    unsigned char :7;                  /*              */
                    } BIT;                             /*              */
             } IMR7;                                   /*              */
       unsigned char wk18[3];                          /*              */
       unsigned char IMR8;                             /* IMR8         */
       unsigned char wk19[3];                          /*              */
       union {                                         /* IMR9         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :3;                  /*              */
                    unsigned char _CMTI:1;             /*   _CMTI      */
                    unsigned char :4;                  /*              */
                    } BIT;                             /*              */
             } IMR9;                                   /*              */
       unsigned char wk20[3];                          /*              */
       union {                                         /* IMR10        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :5;                  /*              */
                    unsigned char _CUI:1;              /*   _CUI       */
                    unsigned char _PRI:1;              /*   _PRI       */
                    unsigned char _ATI:1;              /*   _ATI       */
                    } BIT;                             /*              */
             } IMR10;                                  /*              */
       unsigned char wk21[3];                          /*              */
       union {                                         /* IMR11        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _IICI1:1;            /*   _IICI1     */
                    unsigned char :5;                  /*              */
                    unsigned char _PINTBI:1;           /*   _PINTBI    */
                    unsigned char _PINTAI:1;           /*   _PINTAI    */
                    } BIT;                             /*              */
             } IMR11;                                  /*              */
       unsigned char wk22[3];                          /*              */
       union {                                         /* IMR12        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :6;                  /*              */
                    unsigned char _TPUI1:1;            /*   _TPUI1     */
                    unsigned char _TPUI0:1;            /*   _TPUI0     */
                    } BIT;                             /*              */
             } IMR12;                                  /*              */
       unsigned char wk23[15];                         /*              */
       unsigned char IMCR0;                            /* IMCR0        */
       unsigned char wk24[3];                          /*              */
       unsigned char IMCR1;                            /* IMCR1        */
       unsigned char wk25[3];                          /*              */
       unsigned char IMCR2;                            /* IMCR2        */
       unsigned char wk26[3];                          /*              */
       unsigned char IMCR3;                            /* IMCR3        */
       unsigned char wk27[3];                          /*              */
       unsigned char IMCR4;                            /* IMCR4        */
       unsigned char wk28[3];                          /*              */
       unsigned char IMCR5;                            /* IMCR5        */
       unsigned char wk29[3];                          /*              */
       unsigned char IMCR6;                            /* IMCR6        */
       unsigned char wk30[3];                          /*              */
       unsigned char IMCR7;                            /* IMCR7        */
       unsigned char wk31[3];                          /*              */
       unsigned char IMCR8;                            /* IMCR8        */
       unsigned char wk32[3];                          /*              */
       unsigned char IMCR9;                            /* IMCR9        */
       unsigned char wk33[3];                          /*              */
       unsigned char IMCR10;                           /* IMCR10       */
       unsigned char wk34[3];                          /*              */
       unsigned char IMCR11;                           /* IMCR11       */
       unsigned char wk35[3];                          /*              */
       unsigned char IMCR12;                           /* IMCR12       */
};                                                     /*              */
struct st_intc1 {                                      /* struct INTC  */
       union {                                         /* ICR0         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short NMIL:1;             /*   NMIL       */
                    unsigned short MAI:1;              /*   MAI        */
                    unsigned short :4;                 /*              */
                    unsigned short NMIB:1;             /*   NMIB       */
                    unsigned short NMIE:1;             /*   NMIE       */
                    unsigned short IRLM:1;             /*   IRLM       */
                    unsigned short IRLM2:1;            /*   IRLM2      */
                    unsigned short LSH:1;              /*   LSH        */
                    unsigned short :5;                 /*              */
                    } BIT;                             /*              */
             } ICR0;                                   /*              */
       unsigned char wk36[14];                         /*              */
       union {                                         /* INTPRI00     */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long _IRQ0:4;             /*   _IRQ0      */
                    unsigned long _IRQ1:4;             /*   _IRQ1      */
                    unsigned long _IRQ2:4;             /*   _IRQ2      */
                    unsigned long _IRQ3:4;             /*   _IRQ3      */
                    unsigned long _IRQ4:4;             /*   _IRQ4      */
                    unsigned long _IRQ5:4;             /*   _IRQ5      */
                    unsigned long _IRQ6:4;             /*   _IRQ6      */
                    unsigned long _IRQ7:4;             /*   _IRQ7      */
                    } BIT;                             /*              */
             } INTPRI00;                               /*              */
       unsigned char wk37[8];                          /*              */
       union {                                         /* ICR1         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short _IRQ0S:2;           /*   _IRQ0S     */
                    unsigned short _IRQ1S:2;           /*   _IRQ1S     */
                    unsigned short _IRQ2S:2;           /*   _IRQ2S     */
                    unsigned short _IRQ3S:2;           /*   _IRQ3S     */
                    unsigned short _IRQ4S:2;           /*   _IRQ4S     */
                    unsigned short _IRQ5S:2;           /*   _IRQ5S     */
                    unsigned short _IRQ6S:2;           /*   _IRQ6S     */
                    unsigned short _IRQ7S:2;           /*   _IRQ7S     */
                    } BIT;                             /*              */
             } ICR1;                                   /*              */
       unsigned char wk38[6];                          /*              */
       union {                                         /* INTREQ00     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _IRQ0:1;             /*   _IRQ0      */
                    unsigned char _IRQ1:1;             /*   _IRQ1      */
                    unsigned char _IRQ2:1;             /*   _IRQ2      */
                    unsigned char _IRQ3:1;             /*   _IRQ3      */
                    unsigned char _IRQ4:1;             /*   _IRQ4      */
                    unsigned char _IRQ5:1;             /*   _IRQ5      */
                    unsigned char _IRQ6:1;             /*   _IRQ6      */
                    unsigned char _IRQ7:1;             /*   _IRQ7      */
                    } BIT;                             /*              */
             } INTREQ00;                               /*              */
       unsigned char wk39[31];                         /*              */
       union {                                         /* INTMSK00     */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char _IRQ0:1;             /*   _IRQ0      */
                    unsigned char _IRQ1:1;             /*   _IRQ1      */
                    unsigned char _IRQ2:1;             /*   _IRQ2      */
                    unsigned char _IRQ3:1;             /*   _IRQ3      */
                    unsigned char _IRQ4:1;             /*   _IRQ4      */
                    unsigned char _IRQ5:1;             /*   _IRQ5      */
                    unsigned char _IRQ6:1;             /*   _IRQ6      */
                    unsigned char _IRQ7:1;             /*   _IRQ7      */
                    } BIT;                             /*              */
             } INTMSK00;                               /*              */
       unsigned char wk40[31];                         /*              */
       unsigned char INTMSKCLR00;                      /* INTMSKCLR00  */
       unsigned char wk41[91];                         /*              */
       unsigned short NMIFCR;                          /* NMIFCR       */
};                                                     /*              */
struct st_intc2 {                                      /* struct INTC  */
       unsigned long USERIMASK;                        /* USERIMASK    */
};                                                     /*              */
struct st_bsc {                                        /* struct BSC   */
       union {                                         /* CMNCR        */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :6;                  /*              */
                    unsigned long CKOSTP:1;            /*   CKOSTP     */
                    unsigned long CKODRV:1;            /*   CKODRV     */
                    unsigned long :7;                  /*              */
                    unsigned long DMSTP:1;             /*   DMSTP      */
                    unsigned long :1;                  /*              */
                    unsigned long BSD:1;               /*   BSD        */
                    unsigned long MAP:2;               /*   MAP        */
                    unsigned long BLOCK:1;             /*   BLOCK      */
                    unsigned long DPRTY:2;             /*   DPRTY      */
                    unsigned long :5;                  /*              */
                    unsigned long ENDIAN:1;            /*   ENDIAN     */
                    unsigned long :1;                  /*              */
                    unsigned long HIZMEM:1;            /*   HIZMEM     */
                    unsigned long HIZCNT:1;            /*   HIZCNT     */
                    } BIT;                             /*              */
             } CMNCR;                                  /*              */
       union {                                         /* CS0BCR       */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS0BCR;                                 /*              */
       union {                                         /* CS2BCR       */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS2BCR;                                 /*              */
       union {                                         /* CS3BCR       */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS3BCR;                                 /*              */
       union {                                         /* CS4BCR       */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS4BCR;                                 /*              */
       union {                                         /* CS5ABCR      */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS5ABCR;                                /*              */
       union {                                         /* CS5BBCR      */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS5BBCR;                                /*              */
       union {                                         /* CS6ABCR      */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS6ABCR;                                /*              */
       union {                                         /* CS6BBCR      */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :1;                  /*              */
                    unsigned long IWW:3;               /*   IWW        */
                    unsigned long IWRWD:3;             /*   IWRWD      */
                    unsigned long IWRWS:3;             /*   IWRWS      */
                    unsigned long IWRRD:3;             /*   IWRRD      */
                    unsigned long IWRRS:3;             /*   IWRRS      */
                    unsigned long TYPE:4;              /*   TYPE       */
                    unsigned long :1;                  /*              */
                    unsigned long BSZ:2;               /*   BSZ        */
                    unsigned long :9;                  /*              */
                    } BIT;                             /*              */
             } CS6BBCR;                                /*              */
       unsigned long CS0WCR;                           /* CS0WCR       */
       unsigned long CS2WCR;                           /* CS2WCR       */
       unsigned long CS3WCR;                           /* CS3WCR       */
       unsigned long CS4WCR;                           /* CS4WCR       */
       unsigned long CS5AWCR;                          /* CS5AWCR      */
       unsigned long CS5BWCR;                          /* CS5BWCR      */
       unsigned long CS6AWCR;                          /* CS6AWCR      */
       unsigned long CS6BWCR;                          /* CS6BWCR      */
       union {                                         /* SDCR         */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :11;                 /*              */
                    unsigned long A2ROW:2;             /*   A2ROW      */
                    unsigned long :1;                  /*              */
                    unsigned long A2COL:2;             /*   A2COL      */
                    unsigned long :2;                  /*              */
                    unsigned long DEEP:1;              /*   DEEP       */
                    unsigned long :1;                  /*              */
                    unsigned long RFSH:1;              /*   RFSH       */
                    unsigned long RMODE:1;             /*   RMODE      */
                    unsigned long PDOWN:1;             /*   PDOWN      */
                    unsigned long BACTV:1;             /*   BACTV      */
                    unsigned long :3;                  /*              */
                    unsigned long A3ROW:2;             /*   A3ROW      */
                    unsigned long :1;                  /*              */
                    unsigned long A3COL:2;             /*   A3COL      */
                    } BIT;                             /*              */
             } SDCR;                                   /*              */
       unsigned long RTCSR;                            /* RTCSR        */
       unsigned long RTCNT;                            /* RTCNT        */
       unsigned long RTCOR;                            /* RTCOR        */
};                                                     /*              */
struct st_dmac0 {                                      /* struct DMAC0 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
       unsigned long CHCR;                             /* CHCR         */
};                                                     /*              */
struct st_dmac1 {                                      /* struct DMAC1 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
       unsigned long CHCR;                             /* CHCR         */
};                                                     /*              */
struct st_dmac2 {                                      /* struct DMAC2 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
       unsigned long CHCR;                             /* CHCR         */
};                                                     /*              */
struct st_dmac3 {                                      /* struct DMAC3 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
       unsigned long CHCR;                             /* CHCR         */
};                                                     /*              */
struct st_dmac {                                       /* struct DMAC  */
       union {                                         /* DMAOR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CMS:4;              /*   CMS        */
                    unsigned short :2;                 /*              */
                    unsigned short PR:2;               /*   PR         */
                    unsigned short :5;                 /*              */
                    unsigned short AE:1;               /*   AE         */
                    unsigned short NMIF:1;             /*   NMIF       */
                    unsigned short DME:1;              /*   DME        */
                    } BIT;                             /*              */
             } DMAOR;                                  /*              */
};                                                     /*              */
struct st_dmac4 {                                      /* struct DMAC4 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
       unsigned long CHCR;                             /* CHCR         */
};                                                     /*              */
struct st_dmac5 {                                      /* struct DMAC5 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
       unsigned long CHCR;                             /* CHCR         */
};                                                     /*              */
struct st_dmacb0 {                                     /* struct DMACB0 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
};                                                     /*              */
struct st_dmacb1 {                                     /* struct DMACB1 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
};                                                     /*              */
struct st_dmacb2 {                                     /* struct DMACB2 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
};                                                     /*              */
struct st_dmacb3 {                                     /* struct DMACB3 */
       void         *SAR;                              /* SAR          */
       void         *DAR;                              /* DAR          */
       unsigned long TCR;                              /* TCR          */
};                                                     /*              */
struct st_dmacr {                                      /* struct DMACR */
       union {                                         /* DMARS0       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short C1MID:6;            /*   C1MID      */
                    unsigned short C1RID:2;            /*   C1RID      */
                    unsigned short C0MID:6;            /*   C0MID      */
                    unsigned short C0RID:2;            /*   C0RID      */
                    } BIT;                             /*              */
             } DMARS0;                                 /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* DMARS1       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short C3MID:6;            /*   C3MID      */
                    unsigned short C3RID:2;            /*   C3RID      */
                    unsigned short C2MID:6;            /*   C2MID      */
                    unsigned short C2RID:2;            /*   C2RID      */
                    } BIT;                             /*              */
             } DMARS1;                                 /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* DMARS2       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short C5MID:6;            /*   C5MID      */
                    unsigned short C5RID:2;            /*   C5RID      */
                    unsigned short C4MID:6;            /*   C4MID      */
                    unsigned short C4RID:2;            /*   C4RID      */
                    } BIT;                             /*              */
             } DMARS2;                                 /*              */
};                                                     /*              */
struct st_cpg {                                        /* struct CPG   */
       unsigned long FRQCR;                            /* FRQCR        */
       unsigned char wk0[20];                          /*              */
       unsigned long IRDACLKCR;                        /* IRDACLKCR    */
       unsigned char wk1[8];                           /*              */
       unsigned long PLLCR;                            /* PLLCR        */
       unsigned char wk2[28];                          /*              */
       unsigned long OSCWTCR;                          /* OSCWTCR      */
};                                                     /*              */
struct st_lowp {                                       /* struct LOWP  */
       unsigned long STBCR;                            /* STBCR        */
       unsigned char wk0[12];                          /*              */
       unsigned long MSTPCR0;                          /* MSTPCR0      */
       unsigned long MSTPCR1;                          /* MSTPCR1      */
       unsigned long MSTPCR2;                          /* MSTPCR2      */
};                                                     /*              */
struct st_rwdt {                                       /* struct RWDT  */
       union {                                         /* WTCNT        */
             unsigned char  READ;                      /*  Read  Access*/
             unsigned short WRITE;                     /*  Write Access*/
             }           RWTCNT;                       /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* RWTCSR       */
             union {                                   /*  Read  Access*/
                   unsigned char BYTE;                 /*   Byte Access*/
                   struct {                            /*  Bit Access  */
                          unsigned char TME:1;         /*   TME        */
                          unsigned char :1;            /*              */
                          unsigned char WRFLG:1;       /*   WRFLG      */
                          unsigned char WOVF:1;        /*   WOVF       */
                          unsigned char :1;            /*              */
                          unsigned char CKS:3;         /*   CKS        */
                          } BIT;                       /*              */
                  }         READ;                      /*              */
             unsigned short WRITE;                     /*  Write Access*/
             } RWTCSR;                                 /*              */
};                                                     /*              */
struct st_tpu0 {                                       /* struct TPU0  */
       union {                                         /* TSTR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :12;                /*              */
                    unsigned short CST3:1;             /*   CST3       */
                    unsigned short CST2:1;             /*   CST2       */
                    unsigned short CST1:1;             /*   CST1       */
                    unsigned short CST0:1;             /*   CST0       */
                    } BIT;                             /*              */
             } TSTR;                                   /*              */
};                                                     /*              */
struct st_tpu00 {                                      /* struct TPU00 */
       union {                                         /* TCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CCLR:3;             /*   CCLR       */
                    unsigned short CKEG:2;             /*   CKEG       */
                    unsigned short TPSC:3;             /*   TPSC       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* TMDR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short BFWT:1;             /*   BFWT       */
                    unsigned short BFB:1;              /*   BFB        */
                    unsigned short BFA:1;              /*   BFA        */
                    unsigned short :1;                 /*              */
                    unsigned short MD:3;               /*   MD         */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short IOA:3;              /*   IOA        */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk2[2];                           /*              */
       union {                                         /* TIER         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TC1EV:1;            /*   TC1EV      */
                    unsigned short TG1ED:1;            /*   TG1ED      */
                    unsigned short TG1EC:1;            /*   TG1EC      */
                    unsigned short TG1EB:1;            /*   TG1EB      */
                    unsigned short TG1EA:1;            /*   TG1EA      */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       unsigned char wk3[2];                           /*              */
       union {                                         /* TSR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TCFV:1;             /*   TCFV       */
                    unsigned short TGFD:1;             /*   TGFD       */
                    unsigned short TGFC:1;             /*   TGFC       */
                    unsigned short TGFB:1;             /*   TGFB       */
                    unsigned short TGFA:1;             /*   TGFA       */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned char wk4[2];                           /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned char wk5[2];                           /*              */
       unsigned short TGRA;                            /* TGRA         */
       unsigned char wk6[2];                           /*              */
       unsigned short TGRB;                            /* TGRB         */
       unsigned char wk7[2];                           /*              */
       unsigned short TGRC;                            /* TGRC         */
       unsigned char wk8[2];                           /*              */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_tpu01 {                                      /* struct TPU01 */
       union {                                         /* TCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CCLR:3;             /*   CCLR       */
                    unsigned short CKEG:2;             /*   CKEG       */
                    unsigned short TPSC:3;             /*   TPSC       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* TMDR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short BFWT:1;             /*   BFWT       */
                    unsigned short BFB:1;              /*   BFB        */
                    unsigned short BFA:1;              /*   BFA        */
                    unsigned short :1;                 /*              */
                    unsigned short MD:3;               /*   MD         */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short IOA:3;              /*   IOA        */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk2[2];                           /*              */
       union {                                         /* TIER         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TC1EV:1;            /*   TC1EV      */
                    unsigned short TG1ED:1;            /*   TG1ED      */
                    unsigned short TG1EC:1;            /*   TG1EC      */
                    unsigned short TG1EB:1;            /*   TG1EB      */
                    unsigned short TG1EA:1;            /*   TG1EA      */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       unsigned char wk3[2];                           /*              */
       union {                                         /* TSR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TCFV:1;             /*   TCFV       */
                    unsigned short TGFD:1;             /*   TGFD       */
                    unsigned short TGFC:1;             /*   TGFC       */
                    unsigned short TGFB:1;             /*   TGFB       */
                    unsigned short TGFA:1;             /*   TGFA       */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned char wk4[2];                           /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned char wk5[2];                           /*              */
       unsigned short TGRA;                            /* TGRA         */
       unsigned char wk6[2];                           /*              */
       unsigned short TGRB;                            /* TGRB         */
       unsigned char wk7[2];                           /*              */
       unsigned short TGRC;                            /* TGRC         */
       unsigned char wk8[2];                           /*              */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_tpu02 {                                      /* struct TPU02 */
       union {                                         /* TCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CCLR:3;             /*   CCLR       */
                    unsigned short CKEG:2;             /*   CKEG       */
                    unsigned short TPSC:3;             /*   TPSC       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* TMDR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short BFWT:1;             /*   BFWT       */
                    unsigned short BFB:1;              /*   BFB        */
                    unsigned short BFA:1;              /*   BFA        */
                    unsigned short :1;                 /*              */
                    unsigned short MD:3;               /*   MD         */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short IOA:3;              /*   IOA        */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk2[2];                           /*              */
       union {                                         /* TIER         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TC1EV:1;            /*   TC1EV      */
                    unsigned short TG1ED:1;            /*   TG1ED      */
                    unsigned short TG1EC:1;            /*   TG1EC      */
                    unsigned short TG1EB:1;            /*   TG1EB      */
                    unsigned short TG1EA:1;            /*   TG1EA      */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       unsigned char wk3[2];                           /*              */
       union {                                         /* TSR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TCFV:1;             /*   TCFV       */
                    unsigned short TGFD:1;             /*   TGFD       */
                    unsigned short TGFC:1;             /*   TGFC       */
                    unsigned short TGFB:1;             /*   TGFB       */
                    unsigned short TGFA:1;             /*   TGFA       */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned char wk4[2];                           /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned char wk5[2];                           /*              */
       unsigned short TGRA;                            /* TGRA         */
       unsigned char wk6[2];                           /*              */
       unsigned short TGRB;                            /* TGRB         */
       unsigned char wk7[2];                           /*              */
       unsigned short TGRC;                            /* TGRC         */
       unsigned char wk8[2];                           /*              */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_tpu03 {                                      /* struct TPU03 */
       union {                                         /* TCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CCLR:3;             /*   CCLR       */
                    unsigned short CKEG:2;             /*   CKEG       */
                    unsigned short TPSC:3;             /*   TPSC       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* TMDR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short BFWT:1;             /*   BFWT       */
                    unsigned short BFB:1;              /*   BFB        */
                    unsigned short BFA:1;              /*   BFA        */
                    unsigned short :1;                 /*              */
                    unsigned short MD:3;               /*   MD         */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short IOA:3;              /*   IOA        */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk2[2];                           /*              */
       union {                                         /* TIER         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TC1EV:1;            /*   TC1EV      */
                    unsigned short TG1ED:1;            /*   TG1ED      */
                    unsigned short TG1EC:1;            /*   TG1EC      */
                    unsigned short TG1EB:1;            /*   TG1EB      */
                    unsigned short TG1EA:1;            /*   TG1EA      */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       unsigned char wk3[2];                           /*              */
       union {                                         /* TSR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TCFV:1;             /*   TCFV       */
                    unsigned short TGFD:1;             /*   TGFD       */
                    unsigned short TGFC:1;             /*   TGFC       */
                    unsigned short TGFB:1;             /*   TGFB       */
                    unsigned short TGFA:1;             /*   TGFA       */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned char wk4[2];                           /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned char wk5[2];                           /*              */
       unsigned short TGRA;                            /* TGRA         */
       unsigned char wk6[2];                           /*              */
       unsigned short TGRB;                            /* TGRB         */
       unsigned char wk7[2];                           /*              */
       unsigned short TGRC;                            /* TGRC         */
       unsigned char wk8[2];                           /*              */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_tpu1 {                                       /* struct TPU1  */
       union {                                         /* TSTR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :14;                /*              */
                    unsigned short CST1:1;             /*   CST1       */
                    unsigned short CST0:1;             /*   CST0       */
                    } BIT;                             /*              */
             } TSTR;                                   /*              */
};                                                     /*              */
struct st_tpu10 {                                      /* struct TPU10 */
       union {                                         /* TCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CCLR:3;             /*   CCLR       */
                    unsigned short CKEG:2;             /*   CKEG       */
                    unsigned short TPSC:3;             /*   TPSC       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* TMDR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short BFWT:1;             /*   BFWT       */
                    unsigned short BFB:1;              /*   BFB        */
                    unsigned short BFA:1;              /*   BFA        */
                    unsigned short :1;                 /*              */
                    unsigned short MD:3;               /*   MD         */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short IOA:3;              /*   IOA        */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk2[2];                           /*              */
       union {                                         /* TIER         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TC1EV:1;            /*   TC1EV      */
                    unsigned short TG1ED:1;            /*   TG1ED      */
                    unsigned short TG1EC:1;            /*   TG1EC      */
                    unsigned short TG1EB:1;            /*   TG1EB      */
                    unsigned short TG1EA:1;            /*   TG1EA      */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       unsigned char wk3[2];                           /*              */
       union {                                         /* TSR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TCFV:1;             /*   TCFV       */
                    unsigned short TGFD:1;             /*   TGFD       */
                    unsigned short TGFC:1;             /*   TGFC       */
                    unsigned short TGFB:1;             /*   TGFB       */
                    unsigned short TGFA:1;             /*   TGFA       */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned char wk4[2];                           /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned char wk5[2];                           /*              */
       unsigned short TGRA;                            /* TGRA         */
       unsigned char wk6[2];                           /*              */
       unsigned short TGRB;                            /* TGRB         */
       unsigned char wk7[2];                           /*              */
       unsigned short TGRC;                            /* TGRC         */
       unsigned char wk8[2];                           /*              */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_tpu11 {                                      /* struct TPU11 */
       union {                                         /* TCR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CCLR:3;             /*   CCLR       */
                    unsigned short CKEG:2;             /*   CKEG       */
                    unsigned short TPSC:3;             /*   TPSC       */
                    } BIT;                             /*              */
             } TCR;                                    /*              */
       unsigned char wk0[2];                           /*              */
       union {                                         /* TMDR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short BFWT:1;             /*   BFWT       */
                    unsigned short BFB:1;              /*   BFB        */
                    unsigned short BFA:1;              /*   BFA        */
                    unsigned short :1;                 /*              */
                    unsigned short MD:3;               /*   MD         */
                    } BIT;                             /*              */
             } TMDR;                                   /*              */
       unsigned char wk1[2];                           /*              */
       union {                                         /* TIOR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short IOA:3;              /*   IOA        */
                    } BIT;                             /*              */
             } TIOR;                                   /*              */
       unsigned char wk2[2];                           /*              */
       union {                                         /* TIER         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TC1EV:1;            /*   TC1EV      */
                    unsigned short TG1ED:1;            /*   TG1ED      */
                    unsigned short TG1EC:1;            /*   TG1EC      */
                    unsigned short TG1EB:1;            /*   TG1EB      */
                    unsigned short TG1EA:1;            /*   TG1EA      */
                    } BIT;                             /*              */
             } TIER;                                   /*              */
       unsigned char wk3[2];                           /*              */
       union {                                         /* TSR          */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short TCFV:1;             /*   TCFV       */
                    unsigned short TGFD:1;             /*   TGFD       */
                    unsigned short TGFC:1;             /*   TGFC       */
                    unsigned short TGFB:1;             /*   TGFB       */
                    unsigned short TGFA:1;             /*   TGFA       */
                    } BIT;                             /*              */
             } TSR;                                    /*              */
       unsigned char wk4[2];                           /*              */
       unsigned short TCNT;                            /* TCNT         */
       unsigned char wk5[2];                           /*              */
       unsigned short TGRA;                            /* TGRA         */
       unsigned char wk6[2];                           /*              */
       unsigned short TGRB;                            /* TGRB         */
       unsigned char wk7[2];                           /*              */
       unsigned short TGRC;                            /* TGRC         */
       unsigned char wk8[2];                           /*              */
       unsigned short TGRD;                            /* TGRD         */
};                                                     /*              */
struct st_rtc {                                        /* struct RTC   */
       unsigned char R64CNT;                           /* R64CNT       */
       unsigned char wk0[1];                           /*              */
       unsigned char RSECCNT;                          /* RSECCNT      */
       unsigned char wk1[1];                           /*              */
       unsigned char RMINCNT;                          /* RMINCNT      */
       unsigned char wk2[1];                           /*              */
       unsigned char RHRCNT;                           /* RHRCNT       */
       unsigned char wk3[1];                           /*              */
       unsigned char RWKCNT;                           /* RWKCNT       */
       unsigned char wk4[1];                           /*              */
       unsigned char RDAYCNT;                          /* RDAYCNT      */
       unsigned char wk5[1];                           /*              */
       unsigned char RMONCNT;                          /* RMONCNT      */
       unsigned char wk6[1];                           /*              */
       unsigned short RYRCNT;                          /* RYRCNT       */
       unsigned char RSECAR;                           /* RSECAR       */
       unsigned char wk7[1];                           /*              */
       unsigned char RMINAR;                           /* RMINAR       */
       unsigned char wk8[1];                           /*              */
       unsigned char RHRAR;                            /* RHRAR        */
       unsigned char wk9[1];                           /*              */
       unsigned char RWKAR;                            /* RWKAR        */
       unsigned char wk10[1];                          /*              */
       unsigned char RDAYAR;                           /* RDAYAR       */
       unsigned char wk11[1];                          /*              */
       unsigned char RMONAR;                           /* RMONAR       */
       unsigned char wk12[1];                          /*              */
       unsigned char RCR1;                             /* RCR1         */
       unsigned char wk13[1];                          /*              */
       unsigned char RCR2;                             /* RCR2         */
       unsigned char wk14[1];                          /*              */
       unsigned short RYRAR;                           /* RYRAR        */
       unsigned char wk15[2];                          /*              */
       union {                                         /* RCR3         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char ENB:1;               /*   ENB        */
                    unsigned char :7;                  /*              */
                    } BIT;                             /*              */
             } RCR3;                                   /*              */
};                                                     /*              */
struct st_tmu {                                        /* struct TMU   */
       union {                                         /* TSTR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :5;                  /*              */
                    unsigned char STR2:1;              /*   STR2       */
                    unsigned char STR1:1;              /*   STR1       */
                    unsigned char STR0:1;              /*   STR0       */
                    } BIT;                             /*              */
             } TSTR;                                   /*              */
};                                                     /*              */
struct st_tmu0 {                                       /* struct TMU0  */
       unsigned long TCOR;                             /* TCOR         */
       unsigned long TCNT;                             /* TCNT         */
       unsigned short TCR;                             /* TCR          */
};                                                     /*              */
struct st_tmu1 {                                       /* struct TMU1  */
       unsigned long TCOR;                             /* TCOR         */
       unsigned long TCNT;                             /* TCNT         */
       unsigned short TCR;                             /* TCR          */
};                                                     /*              */
struct st_tmu2 {                                       /* struct TMU2  */
       unsigned long TCOR;                             /* TCOR         */
       unsigned long TCNT;                             /* TCNT         */
       unsigned short TCR;                             /* TCR          */
};                                                     /*              */
struct st_cmt {                                        /* struct CMT   */
       union {                                         /* CMSTR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :11;                /*              */
                    unsigned short STR4:1;             /*   STR4       */
                    unsigned short STR3:1;             /*   STR3       */
                    unsigned short STR2:1;             /*   STR2       */
                    unsigned short STR1:1;             /*   STR1       */
                    unsigned short STR0:1;             /*   STR0       */
                    } BIT;                             /*              */
             } CMSTR;                                  /*              */
};                                                     /*              */
struct st_cmt0 {                                       /* struct CMT0  */
       union {                                         /* CMCSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CMF:1;              /*   CMF        */
                    unsigned short OVF:1;              /*   OVF        */
                    unsigned short :4;                 /*              */
                    unsigned short CMS:1;              /*   CMS        */
                    unsigned short CMM:1;              /*   CMM        */
                    unsigned short :2;                 /*              */
                    unsigned short CMR:2;              /*   CMR        */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:3;              /*   CKS        */
                    } BIT;                             /*              */
             } CMCSR;                                  /*              */
       unsigned char wk0[2];                           /*              */
       unsigned long CMCNT;                            /* CMCNT        */
       unsigned long CMCOR;                            /* CMCOR        */
};                                                     /*              */
struct st_cmt1 {                                       /* struct CMT1  */
       union {                                         /* CMCSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CMF:1;              /*   CMF        */
                    unsigned short OVF:1;              /*   OVF        */
                    unsigned short :4;                 /*              */
                    unsigned short CMS:1;              /*   CMS        */
                    unsigned short CMM:1;              /*   CMM        */
                    unsigned short :2;                 /*              */
                    unsigned short CMR:2;              /*   CMR        */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:3;              /*   CKS        */
                    } BIT;                             /*              */
             } CMCSR;                                  /*              */
       unsigned char wk0[2];                           /*              */
       unsigned long CMCNT;                            /* CMCNT        */
       unsigned long CMCOR;                            /* CMCOR        */
};                                                     /*              */
struct st_cmt2 {                                       /* struct CMT2  */
       union {                                         /* CMCSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CMF:1;              /*   CMF        */
                    unsigned short OVF:1;              /*   OVF        */
                    unsigned short :4;                 /*              */
                    unsigned short CMS:1;              /*   CMS        */
                    unsigned short CMM:1;              /*   CMM        */
                    unsigned short :2;                 /*              */
                    unsigned short CMR:2;              /*   CMR        */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:3;              /*   CKS        */
                    } BIT;                             /*              */
             } CMCSR;                                  /*              */
       unsigned char wk0[2];                           /*              */
       unsigned long CMCNT;                            /* CMCNT        */
       unsigned long CMCOR;                            /* CMCOR        */
};                                                     /*              */
struct st_cmt3 {                                       /* struct CMT3  */
       union {                                         /* CMCSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CMF:1;              /*   CMF        */
                    unsigned short OVF:1;              /*   OVF        */
                    unsigned short :4;                 /*              */
                    unsigned short CMS:1;              /*   CMS        */
                    unsigned short CMM:1;              /*   CMM        */
                    unsigned short :2;                 /*              */
                    unsigned short CMR:2;              /*   CMR        */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:3;              /*   CKS        */
                    } BIT;                             /*              */
             } CMCSR;                                  /*              */
       unsigned char wk0[2];                           /*              */
       unsigned long CMCNT;                            /* CMCNT        */
       unsigned long CMCOR;                            /* CMCOR        */
};                                                     /*              */
struct st_cmt4 {                                       /* struct CMT4  */
       union {                                         /* CMCSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CMF:1;              /*   CMF        */
                    unsigned short OVF:1;              /*   OVF        */
                    unsigned short :4;                 /*              */
                    unsigned short CMS:1;              /*   CMS        */
                    unsigned short CMM:1;              /*   CMM        */
                    unsigned short :2;                 /*              */
                    unsigned short CMR:2;              /*   CMR        */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:3;              /*   CKS        */
                    } BIT;                             /*              */
             } CMCSR;                                  /*              */
       unsigned char wk0[2];                           /*              */
       unsigned long CMCNT;                            /* CMCNT        */
       unsigned long CMCOR;                            /* CMCOR        */
};                                                     /*              */
struct st_iic0 {                                       /* struct IIC0  */
       unsigned char ICCR1;                            /* ICCR1        */
       unsigned char ICCR2;                            /* ICCR2        */
       unsigned char ICMR;                             /* ICMR         */
       union {                                         /* ICIER        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TIE:1;               /*   TIE        */
                    unsigned char TEIE:1;              /*   TEIE       */
                    unsigned char RIE:1;               /*   RIE        */
                    unsigned char NAKIE:1;             /*   NAKIE      */
                    unsigned char STIE:1;              /*   STIE       */
                    unsigned char ACKE:1;              /*   ACKE       */
                    unsigned char ACKBR:1;             /*   ACKBR      */
                    unsigned char ACKBT:1;             /*   ACKBT      */
                    } BIT;                             /*              */
             } ICIER;                                  /*              */
       union {                                         /* ICSR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TDRE:1;              /*   TDRE       */
                    unsigned char TEND:1;              /*   TEND       */
                    unsigned char RDRF:1;              /*   RDRF       */
                    unsigned char NACKF:1;             /*   NACKF      */
                    unsigned char STOP:1;              /*   STOP       */
                    unsigned char ALOVE:1;             /*   ALOVE      */
                    unsigned char AAS:1;               /*   AAS        */
                    unsigned char ADZ:1;               /*   ADZ        */
                    } BIT;                             /*              */
             } ICSR;                                   /*              */
       union {                                         /* SAR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char SAV:7;               /*   SAV        */
                    unsigned char :1;                  /*              */
                    } BIT;                             /*              */
             } SAR;                                    /*              */
       unsigned char ICDRT;                            /* ICDRT        */
       unsigned char ICDRR;                            /* ICDRR        */
       union {                                         /* NF2CYC       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :6;                  /*              */
                    unsigned char PRS:1;               /*   PRS        */
                    unsigned char NF2CYC:1;            /*   NF2CYC     */
                    } BIT;                             /*              */
             } NF2CYC;                                 /*              */
};                                                     /*              */
struct st_iic1 {                                       /* struct IIC1  */
       unsigned char ICCR1;                            /* ICCR1        */
       unsigned char ICCR2;                            /* ICCR2        */
       unsigned char ICMR;                             /* ICMR         */
       union {                                         /* ICIER        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TIE:1;               /*   TIE        */
                    unsigned char TEIE:1;              /*   TEIE       */
                    unsigned char RIE:1;               /*   RIE        */
                    unsigned char NAKIE:1;             /*   NAKIE      */
                    unsigned char STIE:1;              /*   STIE       */
                    unsigned char ACKE:1;              /*   ACKE       */
                    unsigned char ACKBR:1;             /*   ACKBR      */
                    unsigned char ACKBT:1;             /*   ACKBT      */
                    } BIT;                             /*              */
             } ICIER;                                  /*              */
       union {                                         /* ICSR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TDRE:1;              /*   TDRE       */
                    unsigned char TEND:1;              /*   TEND       */
                    unsigned char RDRF:1;              /*   RDRF       */
                    unsigned char NACKF:1;             /*   NACKF      */
                    unsigned char STOP:1;              /*   STOP       */
                    unsigned char ALOVE:1;             /*   ALOVE      */
                    unsigned char AAS:1;               /*   AAS        */
                    unsigned char ADZ:1;               /*   ADZ        */
                    } BIT;                             /*              */
             } ICSR;                                   /*              */
       union {                                         /* SAR          */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char SAV:7;               /*   SAV        */
                    unsigned char :1;                  /*              */
                    } BIT;                             /*              */
             } SAR;                                    /*              */
       unsigned char ICDRT;                            /* ICDRT        */
       unsigned char ICDRR;                            /* ICDRR        */
       union {                                         /* NF2CYC       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :6;                  /*              */
                    unsigned char PRS:1;               /*   PRS        */
                    unsigned char NF2CYC:1;            /*   NF2CYC     */
                    } BIT;                             /*              */
             } NF2CYC;                                 /*              */
};                                                     /*              */
struct st_siof {                                       /* struct SIOF  */
       union {                                         /* SIMDR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TRMD:2;             /*   TRMD       */
                    unsigned short SYNCAT:1;           /*   SYNCAT     */
                    unsigned short REDG:1;             /*   REDG       */
                    unsigned short FL:4;               /*   FL         */
                    unsigned short TXDIZ:1;            /*   TXDIZ      */
                    unsigned short RCIM:1;             /*   RCIM       */
                    unsigned short SYNCAC:1;           /*   SYNCAC     */
                    unsigned short SYNCDL:1;           /*   SYNCDL     */
                    unsigned short :4;                 /*              */
                    } BIT;                             /*              */
             } SIMDR;                                  /*              */
       union {                                         /* SISCR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short MSSEL:1;            /*   MSSEL      */
                    unsigned short MSIMM:1;            /*   MSIMM      */
                    unsigned short :1;                 /*              */
                    unsigned short BRPS:5;             /*   BRPS       */
                    unsigned short :5;                 /*              */
                    unsigned short BRDV:3;             /*   BRDV       */
                    } BIT;                             /*              */
             } SISCR;                                  /*              */
       union {                                         /* SITDAR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TDLE:1;             /*   TDLE       */
                    unsigned short :3;                 /*              */
                    unsigned short TDLA:4;             /*   TDLA       */
                    unsigned short TDRE:1;             /*   TDRE       */
                    unsigned short TLREP:1;            /*   TLREP      */
                    unsigned short :2;                 /*              */
                    unsigned short TDRA:4;             /*   TDRA       */
                    } BIT;                             /*              */
             } SITDAR;                                 /*              */
       union {                                         /* SIRDAR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short RDLE:1;             /*   RDLE       */
                    unsigned short :3;                 /*              */
                    unsigned short RDLA:4;             /*   RDLA       */
                    unsigned short RDRE:1;             /*   RDRE       */
                    unsigned short :3;                 /*              */
                    unsigned short RDRA:4;             /*   RDRA       */
                    } BIT;                             /*              */
             } SIRDAR;                                 /*              */
       union {                                         /* SICDAR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short CD0E:1;             /*   CD0E       */
                    unsigned short :3;                 /*              */
                    unsigned short CD0A:4;             /*   CD0A       */
                    unsigned short CD1E:1;             /*   CD1E       */
                    unsigned short :3;                 /*              */
                    unsigned short CD1A:4;             /*   CD1A       */
                    } BIT;                             /*              */
             } SICDAR;                                 /*              */
       unsigned char wk0[2];                           /*              */
       unsigned short SICTR;                           /* SICTR        */
       unsigned char wk1[2];                           /*              */
       union {                                         /* SIFCTR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TFWM:3;             /*   TFWM       */
                    unsigned short TFUA:5;             /*   TFUA       */
                    unsigned short RFWM:3;             /*   RFWM       */
                    unsigned short RFUA:5;             /*   RFUA       */
                    } BIT;                             /*              */
             } SIFCTR;                                 /*              */
       unsigned char wk2[2];                           /*              */
       unsigned short SISTR;                           /* SISTR        */
       union {                                         /* SIIER        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TDMAE:1;            /*   TDMAE      */
                    unsigned short TCRDYE:1;           /*   TCRDYE     */
                    unsigned short TFEMPE:1;           /*   TFEMPE     */
                    unsigned short TDREQE:1;           /*   TDREQE     */
                    unsigned short RDMAE:1;            /*   RDMAE      */
                    unsigned short RCRDYE:1;           /*   RCRDYE     */
                    unsigned short RFFULE:1;           /*   RFFULE     */
                    unsigned short RDREQE:1;           /*   RDREQE     */
                    unsigned short :2;                 /*              */
                    unsigned short SAERRE:1;           /*   SAERRE     */
                    unsigned short FSERRE:1;           /*   FSERRE     */
                    unsigned short TFOVFE:1;           /*   TFOVFE     */
                    unsigned short TFUDFE:1;           /*   TFUDFE     */
                    unsigned short RFUDFE:1;           /*   RFUDFE     */
                    unsigned short RFOVFE:1;           /*   RFOVFE     */
                    } BIT;                             /*              */
             } SIIER;                                  /*              */
       unsigned char wk3[8];                           /*              */
       unsigned long SITDR;                            /* SITDR        */
       unsigned long SIRDR;                            /* SIRDR        */
       unsigned long SITCR;                            /* SITCR        */
       unsigned long SIRCR;                            /* SIRCR        */
};                                                     /*              */
struct st_scif0 {                                      /* struct SCIF0 */
       union {                                         /* SCSMR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short CA:1;               /*   CA         */
                    unsigned short CHR:1;              /*   CHR        */
                    unsigned short PE:1;               /*   PE         */
                    unsigned short OE:1;               /*   OE         */
                    unsigned short STOP:1;             /*   STOP       */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:2;              /*   CKS        */
                    } BIT;                             /*              */
             } SCSMR;                                  /*              */
       unsigned char wk0[2];                           /*              */
       unsigned char SCBRR;                            /* SCBRR        */
       unsigned char wk1[3];                           /*              */
       union {                                         /* SCSCR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short TIE:1;              /*   TIE        */
                    unsigned short RIE:1;              /*   RIE        */
                    unsigned short TE:1;               /*   TE         */
                    unsigned short RE:1;               /*   RE         */
                    unsigned short REIE:1;             /*   REIE       */
                    unsigned short :1;                 /*              */
                    unsigned short CKE:2;              /*   CKE        */
                    } BIT;                             /*              */
             } SCSCR;                                  /*              */
       unsigned char wk2[2];                           /*              */
       unsigned char SCFTDR;                           /* SCFTDR       */
       unsigned char wk3[3];                           /*              */
       union {                                         /* SCFSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PERC:4;             /*   PERC       */
                    unsigned short FERC:4;             /*   FERC       */
                    unsigned short ER:1;               /*   ER         */
                    unsigned short TEND:1;             /*   TEND       */
                    unsigned short TDFE:1;             /*   TDFE       */
                    unsigned short BRK:1;              /*   BRK        */
                    unsigned short FER:1;              /*   FER        */
                    unsigned short PER:1;              /*   PER        */
                    unsigned short RDF:1;              /*   RDF        */
                    unsigned short DR:1;               /*   DR         */
                    } BIT;                             /*              */
             } SCFSR;                                  /*              */
       unsigned char wk4[2];                           /*              */
       unsigned char SCFRDR;                           /* SCFRDR       */
       unsigned char wk5[3];                           /*              */
       union {                                         /* SCFCR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :5;                 /*              */
                    unsigned short RSTRG:3;            /*   RSTRG      */
                    unsigned short RTRG:2;             /*   RTRG       */
                    unsigned short TTRG:2;             /*   TTRG       */
                    unsigned short MCE:1;              /*   MCE        */
                    unsigned short TFRST:1;            /*   TFRST      */
                    unsigned short RFRST:1;            /*   RFRST      */
                    unsigned short LOOP:1;             /*   LOOP       */
                    } BIT;                             /*              */
             } SCFCR;                                  /*              */
       unsigned char wk6[2];                           /*              */
       union {                                         /* SCFDR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :3;                 /*              */
                    unsigned short TFDC:5;             /*   TFDC       */
                    unsigned short :3;                 /*              */
                    unsigned short RFDC:5;             /*   RFDC       */
                    } BIT;                             /*              */
             } SCFDR;                                  /*              */
       unsigned char wk7[6];                           /*              */
       union {                                         /* SCLSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :15;                /*              */
                    unsigned short ORER:1;             /*   ORER       */
                    } BIT;                             /*              */
             } SCLSR;                                  /*              */
};                                                     /*              */
struct st_scifa4 {                                     /* struct SCIFA4 */
       union {                                         /* SCASMR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :5;                 /*              */
                    unsigned short SRC:3;              /*   SRC        */
                    unsigned short CA:1;               /*   CA         */
                    unsigned short CHR:1;              /*   CHR        */
                    unsigned short PE:1;               /*   PE         */
                    unsigned short OE:1;               /*   OE         */
                    unsigned short STOP:1;             /*   STOP       */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:2;              /*   CKS        */
                    } BIT;                             /*              */
             } SCASMR;                                 /*              */
       unsigned char wk0[2];                           /*              */
       unsigned char SCABRR;                           /* SCABRR       */
       unsigned char wk1[3];                           /*              */
       union {                                         /* SCASCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TDRQE:1;            /*   TDRQE      */
                    unsigned short RDRQE:1;            /*   RDRQE      */
                    unsigned short :2;                 /*              */
                    unsigned short TSIE:1;             /*   TSIE       */
                    unsigned short ERIE:1;             /*   ERIE       */
                    unsigned short BRIE:1;             /*   BRIE       */
                    unsigned short DRIE:1;             /*   DRIE       */
                    unsigned short TIE:1;              /*   TIE        */
                    unsigned short RIE:1;              /*   RIE        */
                    unsigned short TE:1;               /*   TE         */
                    unsigned short RE:1;               /*   RE         */
                    unsigned short :2;                 /*              */
                    unsigned short CKE:2;              /*   CKE        */
                    } BIT;                             /*              */
             } SCASCR;                                 /*              */
       unsigned char wk2[2];                           /*              */
       unsigned char SCATDSR;                          /* SCATDSR      */
       unsigned char wk3[3];                           /*              */
       union {                                         /* SCAFER       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :2;                 /*              */
                    unsigned short PER:6;              /*   PER        */
                    unsigned short :2;                 /*              */
                    unsigned short FER:6;              /*   FER        */
                    } BIT;                             /*              */
             } SCAFER;                                 /*              */
       unsigned char wk4[2];                           /*              */
       union {                                         /* SCASSR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :6;                 /*              */
                    unsigned short ORER:1;             /*   ORER       */
                    unsigned short TSF:1;              /*   TSF        */
                    unsigned short ER:1;               /*   ER         */
                    unsigned short TEND:1;             /*   TEND       */
                    unsigned short TDFE:1;             /*   TDFE       */
                    unsigned short BRK:1;              /*   BRK        */
                    unsigned short FER:1;              /*   FER        */
                    unsigned short PER:1;              /*   PER        */
                    unsigned short RDF:1;              /*   RDF        */
                    unsigned short DR:1;               /*   DR         */
                    } BIT;                             /*              */
             } SCASSR;                                 /*              */
       unsigned char wk5[2];                           /*              */
       union {                                         /* SCAFCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TSE:1;              /*   TSE        */
                    unsigned short TCRST:1;            /*   TCRST      */
                    unsigned short :3;                 /*              */
                    unsigned short RSTRG:3;            /*   RSTRG      */
                    unsigned short RTRG:2;             /*   RTRG       */
                    unsigned short TTRG:2;             /*   TTRG       */
                    unsigned short MCE:1;              /*   MCE        */
                    unsigned short TFRST:1;            /*   TFRST      */
                    unsigned short RFRST:1;            /*   RFRST      */
                    unsigned short LOOP:1;             /*   LOOP       */
                    } BIT;                             /*              */
             } SCAFCR;                                 /*              */
       unsigned char wk6[2];                           /*              */
       union {                                         /* SCAFDR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :1;                 /*              */
                    unsigned short T:7;                /*   T          */
                    unsigned short :1;                 /*              */
                    unsigned short R:7;                /*   R          */
                    } BIT;                             /*              */
             } SCAFDR;                                 /*              */
       unsigned char wk7[2];                           /*              */
       unsigned char SCAFTDR;                          /* SCAFTDR      */
       unsigned char wk8[3];                           /*              */
       unsigned char SCAFRDR;                          /* SCAFRDR      */
};                                                     /*              */

struct st_scif4 {                                     /* struct SCIFA4 */
       union {                                         /* SCASMR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :5;                 /*              */
                    unsigned short SRC:3;              /*   SRC        */
                    unsigned short CA:1;               /*   CA         */
                    unsigned short CHR:1;              /*   CHR        */
                    unsigned short PE:1;               /*   PE         */
                    unsigned short OE:1;               /*   OE         */
                    unsigned short STOP:1;             /*   STOP       */
                    unsigned short :1;                 /*              */
                    unsigned short CKS:2;              /*   CKS        */
                    } BIT;                             /*              */
             } SCSMR;                                 /*              */
       unsigned char wk0[2];                           /*              */
       unsigned char SCBRR;                           /* SCABRR       */
       unsigned char wk1[3];                           /*              */
       union {                                         /* SCASCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TDRQE:1;            /*   TDRQE      */
                    unsigned short RDRQE:1;            /*   RDRQE      */
                    unsigned short :2;                 /*              */
                    unsigned short TSIE:1;             /*   TSIE       */
                    unsigned short ERIE:1;             /*   ERIE       */
                    unsigned short BRIE:1;             /*   BRIE       */
                    unsigned short DRIE:1;             /*   DRIE       */
                    unsigned short TIE:1;              /*   TIE        */
                    unsigned short RIE:1;              /*   RIE        */
                    unsigned short TE:1;               /*   TE         */
                    unsigned short RE:1;               /*   RE         */
                    unsigned short :2;                 /*              */
                    unsigned short CKE:2;              /*   CKE        */
                    } BIT;                             /*              */
             } SCASCR;                                 /*              */
       unsigned char wk2[2];                           /*              */
       unsigned char SCATDSR;                          /* SCATDSR      */
       unsigned char wk3[3];                           /*              */
       union {                                         /* SCAFER       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :2;                 /*              */
                    unsigned short PER:6;              /*   PER        */
                    unsigned short :2;                 /*              */
                    unsigned short FER:6;              /*   FER        */
                    } BIT;                             /*              */
             } SCFER;                                 /*              */
       unsigned char wk4[2];                           /*              */
       union {                                         /* SCASSR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :6;                 /*              */
                    unsigned short ORER:1;             /*   ORER       */
                    unsigned short TSF:1;              /*   TSF        */
                    unsigned short ER:1;               /*   ER         */
                    unsigned short TEND:1;             /*   TEND       */
                    unsigned short TDFE:1;             /*   TDFE       */
                    unsigned short BRK:1;              /*   BRK        */
                    unsigned short FER:1;              /*   FER        */
                    unsigned short PER:1;              /*   PER        */
                    unsigned short RDF:1;              /*   RDF        */
                    unsigned short DR:1;               /*   DR         */
                    } BIT;                             /*              */
             } SCASSR;                                 /*              */
       unsigned char wk5[2];                           /*              */
       union {                                         /* SCAFCR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TSE:1;              /*   TSE        */
                    unsigned short TCRST:1;            /*   TCRST      */
                    unsigned short :3;                 /*              */
                    unsigned short RSTRG:3;            /*   RSTRG      */
                    unsigned short RTRG:2;             /*   RTRG       */
                    unsigned short TTRG:2;             /*   TTRG       */
                    unsigned short MCE:1;              /*   MCE        */
                    unsigned short TFRST:1;            /*   TFRST      */
                    unsigned short RFRST:1;            /*   RFRST      */
                    unsigned short LOOP:1;             /*   LOOP       */
                    } BIT;                             /*              */
             } SCAFCR;                                 /*              */
       unsigned char wk6[2];                           /*              */
       union {                                         /* SCAFDR       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :1;                 /*              */
                    unsigned short T:7;                /*   T          */
                    unsigned short :1;                 /*              */
                    unsigned short R:7;                /*   R          */
                    } BIT;                             /*              */
             } SCFDR;                                 /*              */
       unsigned char wk7[2];                           /*              */
       unsigned char SCFTDR;                          /* SCAFTDR      */
       unsigned char wk8[3];                           /*              */
       unsigned char SCFRDR;                          /* SCAFRDR      */
};                                                     /*              */


struct st_irda0 {                                      /* struct IRDA0 */
       unsigned short RINTCLR;                         /* RINTCLR      */
       unsigned short TINTCLR;                         /* TINTCLR      */
       unsigned char wk0[6];                           /*              */
       union {                                         /* SIR0         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :14;                /*              */
                    unsigned short IRTPW:1;            /*   IRTPW      */
                    unsigned short IRERRC:1;           /*   IRERRC     */
                    } BIT;                             /*              */
             } SIR0;                                   /*              */
       union {                                         /* SIR1         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short IRBCA:4;            /*   IRBCA      */
                    unsigned short :4;                 /*              */
                    } BIT;                             /*              */
             } SIR1;                                   /*              */
       union {                                         /* SIR2         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :12;                /*              */
                    unsigned short IRBC:4;             /*   IRBC       */
                    } BIT;                             /*              */
             } SIR2;                                   /*              */
       union {                                         /* SIR3         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :15;                /*              */
                    unsigned short IRERR:1;            /*   IRERR      */
                    } BIT;                             /*              */
             } SIR3;                                   /*              */
       union {                                         /* SIR_FRM      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :6;                 /*              */
                    unsigned short EOFD:1;             /*   EOFD       */
                    unsigned short FRER:1;             /*   FRER       */
                    unsigned short :7;                 /*              */
                    unsigned short FRP:1;              /*   FRP        */
                    } BIT;                             /*              */
             } SIR_FRM;                                /*              */
       union {                                         /* SIR_EOF      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short _EOF:8;             /*   EOF        */
                    } BIT;                             /*              */
             } SIR_EOF;                                /*              */
       union {                                         /* SIR_FLG      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } SIR_FLG;                                /*              */
       union {                                         /* SIR_STS2     */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short IRSME:1;            /*   IRSME      */
                    unsigned short IROVE:1;            /*   IROVE      */
                    unsigned short IRFRE:1;            /*   IRFRE      */
                    unsigned short IRPRE:1;            /*   IRPRE      */
                    unsigned short :3;                 /*              */
                    } BIT;                             /*              */
             } SIR_STS2;                               /*              */
       union {                                         /* UART0        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short TBEC:1;             /*   TBEC       */
                    unsigned short RIE:1;              /*   RIE        */
                    unsigned short TIE:1;              /*   TIE        */
                    } BIT;                             /*              */
             } UART0;                                  /*              */
       union {                                         /* UART1        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short URSME:1;            /*   URSME      */
                    unsigned short UROVE:1;            /*   UROVE      */
                    unsigned short URFRE:1;            /*   URFRE      */
                    unsigned short URPRE:1;            /*   URPRE      */
                    unsigned short RBF:1;              /*   RBF        */
                    unsigned short TSBE:1;             /*   TSBE       */
                    unsigned short TBE:1;              /*   TBE        */
                    } BIT;                             /*              */
             } UART1;                                  /*              */
       union {                                         /* UART2        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short BCT:1;              /*   BCT        */
                    unsigned short CHR:1;              /*   CHR        */
                    unsigned short STOP:1;             /*   STOP       */
                    unsigned short PE:1;               /*   PE         */
                    unsigned short OE:1;               /*   OE         */
                    unsigned short :3;                 /*              */
                    } BIT;                             /*              */
             } UART2;                                  /*              */
       union {                                         /* UART3        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } UART3;                                  /*              */
       union {                                         /* UART4        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } UART4;                                  /*              */
       union {                                         /* UART5        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short RSEIM:1;            /*   RSEIM      */
                    unsigned short :3;                 /*              */
                    unsigned short RBFIM:1;            /*   RBFIM      */
                    unsigned short TSBEIM:1;           /*   TSBEIM     */
                    unsigned short TBEIM:1;            /*   TBEIM      */
                    } BIT;                             /*              */
             } UART5;                                  /*              */
       union {                                         /* UART6        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short UABCA:4;            /*   UABCA      */
                    unsigned short :4;                 /*              */
                    } BIT;                             /*              */
             } UART6;                                  /*              */
       union {                                         /* UART7        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } UART7;                                  /*              */
       union {                                         /* CRC0         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short CRC_RST:1;          /*   CRC_RST    */
                    unsigned short :3;                 /*              */
                    unsigned short CRC_CT:12;          /*   CRC_CT     */
                    } BIT;                             /*              */
             } CRC0;                                   /*              */
       union {                                         /* CRC1         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC1;                                   /*              */
       union {                                         /* CRC2         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC2;                                   /*              */
       union {                                         /* CRC3         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC3;                                   /*              */
       union {                                         /* CRC4         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC4;                                   /*              */
};                                                     /*              */
struct st_irda1 {                                      /* struct IRDA1 */
       unsigned short RINTCLR;                         /* RINTCLR      */
       unsigned short TINTCLR;                         /* TINTCLR      */
       unsigned char wk0[6];                           /*              */
       union {                                         /* SIR0         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :14;                /*              */
                    unsigned short IRTPW:1;            /*   IRTPW      */
                    unsigned short IRERRC:1;           /*   IRERRC     */
                    } BIT;                             /*              */
             } SIR0;                                   /*              */
       union {                                         /* SIR1         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short IRBCA:4;            /*   IRBCA      */
                    unsigned short :4;                 /*              */
                    } BIT;                             /*              */
             } SIR1;                                   /*              */
       union {                                         /* SIR2         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :12;                /*              */
                    unsigned short IRBC:4;             /*   IRBC       */
                    } BIT;                             /*              */
             } SIR2;                                   /*              */
       union {                                         /* SIR3         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :15;                /*              */
                    unsigned short IRERR:1;            /*   IRERR      */
                    } BIT;                             /*              */
             } SIR3;                                   /*              */
       union {                                         /* SIR_FRM      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :6;                 /*              */
                    unsigned short EOFD:1;             /*   EOFD       */
                    unsigned short FRER:1;             /*   FRER       */
                    unsigned short :7;                 /*              */
                    unsigned short FRP:1;              /*   FRP        */
                    } BIT;                             /*              */
             } SIR_FRM;                                /*              */
       union {                                         /* SIR_EOF      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short _EOF:8;             /*   EOF        */
                    } BIT;                             /*              */
             } SIR_EOF;                                /*              */
       union {                                         /* SIR_FLG      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } SIR_FLG;                                /*              */
       union {                                         /* SIR_STS2     */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short IRSME:1;            /*   IRSME      */
                    unsigned short IROVE:1;            /*   IROVE      */
                    unsigned short IRFRE:1;            /*   IRFRE      */
                    unsigned short IRPRE:1;            /*   IRPRE      */
                    unsigned short :3;                 /*              */
                    } BIT;                             /*              */
             } SIR_STS2;                               /*              */
       union {                                         /* UART0        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :13;                /*              */
                    unsigned short TBEC:1;             /*   TBEC       */
                    unsigned short RIE:1;              /*   RIE        */
                    unsigned short TIE:1;              /*   TIE        */
                    } BIT;                             /*              */
             } UART0;                                  /*              */
       union {                                         /* UART1        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short URSME:1;            /*   URSME      */
                    unsigned short UROVE:1;            /*   UROVE      */
                    unsigned short URFRE:1;            /*   URFRE      */
                    unsigned short URPRE:1;            /*   URPRE      */
                    unsigned short RBF:1;              /*   RBF        */
                    unsigned short TSBE:1;             /*   TSBE       */
                    unsigned short TBE:1;              /*   TBE        */
                    } BIT;                             /*              */
             } UART1;                                  /*              */
       union {                                         /* UART2        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short BCT:1;              /*   BCT        */
                    unsigned short CHR:1;              /*   CHR        */
                    unsigned short STOP:1;             /*   STOP       */
                    unsigned short PE:1;               /*   PE         */
                    unsigned short OE:1;               /*   OE         */
                    unsigned short :3;                 /*              */
                    } BIT;                             /*              */
             } UART2;                                  /*              */
       union {                                         /* UART3        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } UART3;                                  /*              */
       union {                                         /* UART4        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } UART4;                                  /*              */
       union {                                         /* UART5        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short RSEIM:1;            /*   RSEIM      */
                    unsigned short :3;                 /*              */
                    unsigned short RBFIM:1;            /*   RBFIM      */
                    unsigned short TSBEIM:1;           /*   TSBEIM     */
                    unsigned short TBEIM:1;            /*   TBEIM      */
                    } BIT;                             /*              */
             } UART5;                                  /*              */
       union {                                         /* UART6        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short UABCA:4;            /*   UABCA      */
                    unsigned short :4;                 /*              */
                    } BIT;                             /*              */
             } UART6;                                  /*              */
       union {                                         /* UART7        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } UART7;                                  /*              */
       union {                                         /* CRC0         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             struct {                                  /*  Bit Access  */
                    unsigned short CRC_RST:1;          /*   CRC_RST    */
                    unsigned short :3;                 /*              */
                    unsigned short CRC_CT:12;          /*   CRC_CT     */
                    } BIT;                             /*              */
             } CRC0;                                   /*              */
       union {                                         /* CRC1         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC1;                                   /*              */
       union {                                         /* CRC2         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC2;                                   /*              */
       union {                                         /* CRC3         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC3;                                   /*              */
       union {                                         /* CRC4         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Byte Access */
                    unsigned char H;                   /*   High       */
                    unsigned char L;                   /*   Low        */
                    } BYTE;                            /*              */
             } CRC4;                                   /*              */
};                                                     /*              */
struct st_sim {                                        /* struct SIM   */
       union {                                         /* SCSMR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :3;                  /*              */
                    unsigned char OE:1;                /*   OE         */
                    unsigned char :4;                  /*              */
                    } BIT;                             /*              */
             } SCSMR;                                  /*              */
       unsigned char wk0[1];                           /*              */
       unsigned char SCBRR;                            /* SCBRR        */
       unsigned char wk1[1];                           /*              */
       union {                                         /* SCSCR        */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char TIE:1;               /*   TIE        */
                    unsigned char RIE:1;               /*   RIE        */
                    unsigned char TE:1;                /*   TE         */
                    unsigned char RE:1;                /*   RE         */
                    unsigned char WAIT_IE:1;           /*   WAIT_IE    */
                    unsigned char TEIE:1;              /*   TEIE       */
                    unsigned char CKE:2;               /*   CKE        */
                    } BIT;                             /*              */
             } SCSCR;                                  /*              */
       unsigned char wk2[1];                           /*              */
       unsigned char SCTDR;                            /* SCTDR        */
       unsigned char wk3[1];                           /*              */
       unsigned char SCSSR;                            /* SCSSR        */
       unsigned char wk4[1];                           /*              */
       unsigned char SCRDR;                            /* SCRDR        */
       unsigned char wk5[1];                           /*              */
       union {                                         /* SCSCMR       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char HOEN:1;              /*   HOEN       */
                    unsigned char LCB:1;               /*   LCB        */
                    unsigned char PB:1;                /*   PB         */
                    unsigned char WECC:1;              /*   WECC       */
                    unsigned char SDIR:1;              /*   SDIR       */
                    unsigned char SINV:1;              /*   SINV       */
                    unsigned char RST:1;               /*   RST        */
                    unsigned char SMIF:1;              /*   SMIF       */
                    } BIT;                             /*              */
             } SCSCMR;                                 /*              */
       unsigned char wk6[1];                           /*              */
       union {                                         /* SCSC2R       */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char EIO:1;               /*   EIO        */
                    unsigned char :7;                  /*              */
                    } BIT;                             /*              */
             } SCSC2R;                                 /*              */
       unsigned char wk7[1];                           /*              */
       unsigned short SCWAIT;                          /* SCWAIT       */
       unsigned char SCGRD;                            /* SCGRD        */
       unsigned char wk8[1];                           /*              */
       unsigned short SCSMPL;                          /* SCSMPL       */
       union {                                         /* SCDMAEN      */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char RDMAE:1;             /*   RDMAE      */
                    unsigned char TDMAE:1;             /*   TDMAE      */
                    unsigned char :6;                  /*              */
                    } BIT;                             /*              */
             } SCDMAEN;                                /*              */
};                                                     /*              */
struct st_adc {                                        /* struct ADC   */
       unsigned short ADDRA;                           /* ADDRA        */
       unsigned short ADDRB;                           /* ADDRB        */
       unsigned short ADDRC;                           /* ADDRC        */
       unsigned short ADDRD;                           /* ADDRD        */
       union {                                         /* ADCSR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short ADF:1;              /*   ADF        */
                    unsigned short ADIE:1;             /*   ADIE       */
                    unsigned short ADST:1;             /*   ADST       */
                    unsigned short DMASL:1;            /*   DMASL      */
                    unsigned short TRGE:2;             /*   TRGE       */
                    unsigned short :2;                 /*              */
                    unsigned short CKS:2;              /*   CKS        */
                    unsigned short MULTI:2;            /*   MULTI      */
                    unsigned short :1;                 /*              */
                    unsigned short CH:3;               /*   CH         */
                    } BIT;                             /*              */
             } ADCSR;                                  /*              */
};                                                     /*              */
struct st_dac {                                        /* struct DAC   */
       unsigned short DADR0;                           /* DADR0        */
       unsigned short DADR1;                           /* DADR1        */
       union {                                         /* DACR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short DAOE1:1;            /*   DAOE1      */
                    unsigned short DAOE0:1;            /*   DAOE0      */
                    unsigned short :5;                 /*              */
                    unsigned short DAE:1;              /*   DAE        */
                    } BIT;                             /*              */
             } DACR;                                   /*              */
};                                                     /*              */
struct st_port {                                       /* struct PORT  */
       union {                                         /* PADR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PADR;                                   /*              */
       unsigned char wk0[1];                           /*              */
       union {                                         /* PBDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PBDR;                                   /*              */
       unsigned char wk1[1];                           /*              */
       union {                                         /* PCDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PCDR;                                   /*              */
       unsigned char wk2[1];                           /*              */
       union {                                         /* PDDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PDDR;                                   /*              */
       unsigned char wk3[1];                           /*              */
       union {                                         /* PEDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char :1;                  /*              */
                    } BIT;                             /*              */
             } PEDR;                                   /*              */
       unsigned char wk4[1];                           /*              */
       union {                                         /* PFDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :4;                  /*              */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PFDR;                                   /*              */
       unsigned char wk5[1];                           /*              */
       union {                                         /* PGDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :2;                  /*              */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PGDR;                                   /*              */
       unsigned char wk6[1];                           /*              */
       union {                                         /* PHDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PHDR;                                   /*              */
       unsigned char wk7[1];                           /*              */
       union {                                         /* PJDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PJDR;                                   /*              */
       unsigned char wk8[1];                           /*              */
       union {                                         /* PKDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PKDR;                                   /*              */
       unsigned char wk9[1];                           /*              */
       union {                                         /* PLDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char :2;                  /*              */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PLDR;                                   /*              */
       unsigned char wk10[1];                          /*              */
       union {                                         /* PMDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :4;                  /*              */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char :1;                  /*              */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PMDR;                                   /*              */
       unsigned char wk11[1];                          /*              */
       union {                                         /* PNDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :3;                  /*              */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PNDR;                                   /*              */
       unsigned char wk12[1];                          /*              */
       union {                                         /* PQDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char :4;                  /*              */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PQDR;                                   /*              */
       unsigned char wk13[1];                          /*              */
       union {                                         /* PRDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :5;                  /*              */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PRDR;                                   /*              */
       unsigned char wk14[1];                          /*              */
       union {                                         /* PSDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char :3;                  /*              */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PSDR;                                   /*              */
       unsigned char wk15[1];                          /*              */
       union {                                         /* PTDR         */
             unsigned char BYTE;                       /*  Byte Access */
             struct {                                  /*  Bit Access  */
                    unsigned char B7:1;                /*   B7         */
                    unsigned char B6:1;                /*   B6         */
                    unsigned char B5:1;                /*   B5         */
                    unsigned char B4:1;                /*   B4         */
                    unsigned char B3:1;                /*   B3         */
                    unsigned char B2:1;                /*   B2         */
                    unsigned char B1:1;                /*   B1         */
                    unsigned char B0:1;                /*   B0         */
                    } BIT;                             /*              */
             } PTDR;                                   /*              */
};                                                     /*              */
struct st_pfc {                                        /* struct PFC   */
       union {                                         /* PACR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PA7MD:2;            /*   PA7MD      */
                    unsigned short PA6MD:2;            /*   PA6MD      */
                    unsigned short PA5MD:2;            /*   PA5MD      */
                    unsigned short PA4MD:2;            /*   PA4MD      */
                    unsigned short PA3MD:2;            /*   PA3MD      */
                    unsigned short PA2MD:2;            /*   PA2MD      */
                    unsigned short PA1MD:2;            /*   PA1MD      */
                    unsigned short PA0MD:2;            /*   PA0MD      */
                    } BIT;                             /*              */
             } PACR;                                   /*              */
       union {                                         /* PBCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PB7MD:2;            /*   PB7MD      */
                    unsigned short PB6MD:2;            /*   PB6MD      */
                    unsigned short PB5MD:2;            /*   PB5MD      */
                    unsigned short PB4MD:2;            /*   PB4MD      */
                    unsigned short PB3MD:2;            /*   PB3MD      */
                    unsigned short PB2MD:2;            /*   PB2MD      */
                    unsigned short PB1MD:2;            /*   PB1MD      */
                    unsigned short PB0MD:2;            /*   PB0MD      */
                    } BIT;                             /*              */
             } PBCR;                                   /*              */
       union {                                         /* PCCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PC7MD:2;            /*   PC7MD      */
                    unsigned short PC6MD:2;            /*   PC6MD      */
                    unsigned short PC5MD:2;            /*   PC5MD      */
                    unsigned short PC4MD:2;            /*   PC4MD      */
                    unsigned short PC3MD:2;            /*   PC3MD      */
                    unsigned short PC2MD:2;            /*   PC2MD      */
                    unsigned short PC1MD:2;            /*   PC1MD      */
                    unsigned short PC0MD:2;            /*   PC0MD      */
                    } BIT;                             /*              */
             } PCCR;                                   /*              */
       union {                                         /* PDCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PD7MD:2;            /*   PD7MD      */
                    unsigned short PD6MD:2;            /*   PD6MD      */
                    unsigned short PD5MD:2;            /*   PD5MD      */
                    unsigned short PD4MD:2;            /*   PD4MD      */
                    unsigned short PD3MD:2;            /*   PD3MD      */
                    unsigned short PD2MD:2;            /*   PD2MD      */
                    unsigned short PD1MD:2;            /*   PD1MD      */
                    unsigned short PD0MD:2;            /*   PD0MD      */
                    } BIT;                             /*              */
             } PDCR;                                   /*              */
       union {                                         /* PECR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PE7MD:2;            /*   PE7MD      */
                    unsigned short PE6MD:2;            /*   PE6MD      */
                    unsigned short PE5MD:2;            /*   PE5MD      */
                    unsigned short PE4MD:2;            /*   PE4MD      */
                    unsigned short PE3MD:2;            /*   PE3MD      */
                    unsigned short PE2MD:2;            /*   PE2MD      */
                    unsigned short PE1MD:2;            /*   PE1MD      */
                    unsigned short :2;                 /*              */
                    } BIT;                             /*              */
             } PECR;                                   /*              */
       union {                                         /* PFCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short PF3MD:2;            /*   PF3MD      */
                    unsigned short PF2MD:2;            /*   PF2MD      */
                    unsigned short PF1MD:2;            /*   PF1MD      */
                    unsigned short PF0MD:2;            /*   PF0MD      */
                    } BIT;                             /*              */
             } PFCR;                                   /*              */
       union {                                         /* PGCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :4;                 /*              */
                    unsigned short PG5MD:2;            /*   PG5MD      */
                    unsigned short PG4MD:2;            /*   PG4MD      */
                    unsigned short PG3MD:2;            /*   PG3MD      */
                    unsigned short PG2MD:2;            /*   PG2MD      */
                    unsigned short PG1MD:2;            /*   PG1MD      */
                    unsigned short PG0MD:2;            /*   PG0MD      */
                    } BIT;                             /*              */
             } PGCR;                                   /*              */
       union {                                         /* PHCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PH7MD:2;            /*   PH7MD      */
                    unsigned short PH6MD:2;            /*   PH6MD      */
                    unsigned short PH5MD:2;            /*   PH5MD      */
                    unsigned short PH4MD:2;            /*   PH4MD      */
                    unsigned short PH3MD:2;            /*   PH3MD      */
                    unsigned short PH2MD:2;            /*   PH2MD      */
                    unsigned short PH1MD:2;            /*   PH1MD      */
                    unsigned short PH0MD:2;            /*   PH0MD      */
                    } BIT;                             /*              */
             } PHCR;                                   /*              */
       union {                                         /* PJCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PJ7MD:2;            /*   PJ7MD      */
                    unsigned short PJ6MD:2;            /*   PJ6MD      */
                    unsigned short PJ5MD:2;            /*   PJ5MD      */
                    unsigned short PJ4MD:2;            /*   PJ4MD      */
                    unsigned short PJ3MD:2;            /*   PJ3MD      */
                    unsigned short PJ2MD:2;            /*   PJ2MD      */
                    unsigned short PJ1MD:2;            /*   PJ1MD      */
                    unsigned short PJ0MD:2;            /*   PJ0MD      */
                    } BIT;                             /*              */
             } PJCR;                                   /*              */
       union {                                         /* PKCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PK7MD:2;            /*   PK7MD      */
                    unsigned short PK6MD:2;            /*   PK6MD      */
                    unsigned short PK5MD:2;            /*   PK5MD      */
                    unsigned short PK4MD:2;            /*   PK4MD      */
                    unsigned short PK3MD:2;            /*   PK3MD      */
                    unsigned short PK2MD:2;            /*   PK2MD      */
                    unsigned short PK1MD:2;            /*   PK1MD      */
                    unsigned short PK0MD:2;            /*   PK0MD      */
                    } BIT;                             /*              */
             } PKCR;                                   /*              */
       union {                                         /* PLCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PL7MD:2;            /*   PL7MD      */
                    unsigned short PL6MD:2;            /*   PL6MD      */
                    unsigned short PL5MD:2;            /*   PL5MD      */
                    unsigned short PL4MD:2;            /*   PL4MD      */
                    unsigned short :4;                 /*              */
                    unsigned short PL1MD:2;            /*   PL1MD      */
                    unsigned short PL0MD:2;            /*   PL0MD      */
                    } BIT;                             /*              */
             } PLCR;                                   /*              */
       union {                                         /* PMCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short PM3MD:2;            /*   PM3MD      */
                    unsigned short :2;                 /*              */
                    unsigned short PM1MD:2;            /*   PM1MD      */
                    unsigned short PM0MD:2;            /*   PM0MD      */
                    } BIT;                             /*              */
             } PMCR;                                   /*              */
       union {                                         /* PNCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :6;                 /*              */
                    unsigned short PN4MD:2;            /*   PN4MD      */
                    unsigned short PN3MD:2;            /*   PN3MD      */
                    unsigned short PN2MD:2;            /*   PN2MD      */
                    unsigned short PN1MD:2;            /*   PN1MD      */
                    unsigned short PN0MD:2;            /*   PN0MD      */
                    } BIT;                             /*              */
             } PNCR;                                   /*              */
       union {                                         /* PQCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PQ7MD:2;            /*   PQ7MD      */
                    unsigned short :8;                 /*              */
                    unsigned short PQ2MD:2;            /*   PQ2MD      */
                    unsigned short PQ1MD:2;            /*   PQ1MD      */
                    unsigned short PQ0MD:2;            /*   PQ0MD      */
                    } BIT;                             /*              */
             } PQCR;                                   /*              */
       union {                                         /* PRCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :10;                /*              */
                    unsigned short PR2MD:2;            /*   PR2MD      */
                    unsigned short PR1MD:2;            /*   PR1MD      */
                    unsigned short PR0MD:2;            /*   PR0MD      */
                    } BIT;                             /*              */
             } PRCR;                                   /*              */
       union {                                         /* PSCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :6;                 /*              */
                    unsigned short PS4MD:2;            /*   PS4MD      */
                    unsigned short PS3MD:2;            /*   PS3MD      */
                    unsigned short PS2MD:2;            /*   PS2MD      */
                    unsigned short PS1MD:2;            /*   PS1MD      */
                    unsigned short PS0MD:2;            /*   PS0MD      */
                    } BIT;                             /*              */
             } PSCR;                                   /*              */
       union {                                         /* PTCR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PT7MD:2;            /*   PT7MD      */
                    unsigned short PT6MD:2;            /*   PT6MD      */
                    unsigned short PT5MD:2;            /*   PT5MD      */
                    unsigned short PT4MD:2;            /*   PT4MD      */
                    unsigned short PT3MD:2;            /*   PT3MD      */
                    unsigned short PT2MD:2;            /*   PT2MD      */
                    unsigned short PT1MD:2;            /*   PT1MD      */
                    unsigned short PT0MD:2;            /*   PT0MD      */
                    } BIT;                             /*              */
             } PTCR;                                   /*              */
       unsigned char wk0[30];                          /*              */
       union {                                         /* PINTCRA      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PINTAPEN7:1;        /*   PINTAPEN7  */
                    unsigned short PINTAPUD7:1;        /*   PINTAPUD7  */
                    unsigned short PINTAPEN6:1;        /*   PINTAPEN6  */
                    unsigned short PINTAPUD6:1;        /*   PINTAPUD6  */
                    unsigned short PINTAPEN5:1;        /*   PINTAPEN5  */
                    unsigned short PINTAPUD5:1;        /*   PINTAPUD5  */
                    unsigned short PINTAPEN4:1;        /*   PINTAPEN4  */
                    unsigned short PINTAPUD4:1;        /*   PINTAPUD4  */
                    unsigned short PINTAPEN3:1;        /*   PINTAPEN3  */
                    unsigned short PINTAPUD3:1;        /*   PINTAPUD3  */
                    unsigned short PINTAPEN2:1;        /*   PINTAPEN2  */
                    unsigned short PINTAPUD2:1;        /*   PINTAPUD2  */
                    unsigned short PINTAPEN1:1;        /*   PINTAPEN1  */
                    unsigned short PINTAPUD1:1;        /*   PINTAPUD1  */
                    unsigned short PINTAPEN0:1;        /*   PINTAPEN0  */
                    unsigned short PINTAPUD0:1;        /*   PINTAPUD0  */
                    } BIT;                             /*              */
             } PINTCRA;                                /*              */
       union {                                         /* PINTCRB      */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :8;                 /*              */
                    unsigned short PINTBPEN3:1;        /*   PINTBPEN3  */
                    unsigned short PINTBPUD3:1;        /*   PINTBPUD3  */
                    unsigned short PINTBPEN2:1;        /*   PINTBPEN2  */
                    unsigned short PINTBPUD2:1;        /*   PINTBPUD2  */
                    unsigned short PINTBPEN1:1;        /*   PINTBPEN1  */
                    unsigned short PINTBPUD1:1;        /*   PINTBPUD1  */
                    unsigned short PINTBPEN0:1;        /*   PINTBPEN0  */
                    unsigned short PINTBPUD0:1;        /*   PINTBPUD0  */
                    } BIT;                             /*              */
             } PINTCRB;                                /*              */
       unsigned char wk1[188];                         /*              */
       union {                                         /* PSELA        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PSA15_14:2;         /*   PSA15_14   */
                    unsigned short :2;                 /*              */
                    unsigned short PSA11:1;            /*   PSA11      */
                    unsigned short PSA10:1;            /*   PSA10      */
                    unsigned short PSA9:1;             /*   PSA9       */
                    unsigned short PSA8:1;             /*   PSA8       */
                    unsigned short PSA7:1;             /*   PSA7       */
                    unsigned short PSA6:1;             /*   PSA6       */
                    unsigned short PSA5:1;             /*   PSA5       */
                    unsigned short PSA4:1;             /*   PSA4       */
                    unsigned short PSA3_2:2;           /*   PSA3_2     */
                    unsigned short PSA1:1;             /*   PSA1       */
                    unsigned short :1;                 /*              */
                    } BIT;                             /*              */
             } PSELA;                                  /*              */
       union {                                         /* PSELB        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short PSB15_14:2;         /*   PSB15_14   */
                    unsigned short PSB13:1;            /*   PSB13      */
                    unsigned short PSB12:1;            /*   PSB12      */
                    unsigned short PSB11:1;            /*   PSB11      */
                    unsigned short PSB10:1;            /*   PSB10      */
                    unsigned short PSB9:1;             /*   PSB9       */
                    unsigned short PSB8:1;             /*   PSB8       */
                    unsigned short PSB7:1;             /*   PSB7       */
                    unsigned short PSB6:1;             /*   PSB6       */
                    unsigned short PSB5_4:2;           /*   PSB5_4     */
                    unsigned short PSB3:1;             /*   PSB3       */
                    unsigned short PSB2:1;             /*   PSB2       */
                    unsigned short PSB1:1;             /*   PSB1       */
                    unsigned short :1;                 /*              */
                    } BIT;                             /*              */
             } PSELB;                                  /*              */
       union {                                         /* PSELC        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :4;                 /*              */
                    unsigned short PSC11:1;            /*   PSC11      */
                    unsigned short PSC10:1;            /*   PSC10      */
                    unsigned short PSC9:1;             /*   PSC9       */
                    unsigned short PSC8:1;             /*   PSC8       */
                    unsigned short PSC7:1;             /*   PSC7       */
                    unsigned short PSC6:1;             /*   PSC6       */
                    unsigned short PSC5:1;             /*   PSC5       */
                    unsigned short PSC4:1;             /*   PSC4       */
                    unsigned short PSC3:1;             /*   PSC3       */
                    unsigned short PSC2:1;             /*   PSC2       */
                    unsigned short PSC1:1;             /*   PSC1       */
                    unsigned short PSC0:1;             /*   PSC0       */
                    } BIT;                             /*              */
             } PSELC;                                  /*              */
       unsigned char wk2[26];                          /*              */
       union {                                         /* HIZCRA       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short HIZA15:1;           /*   HIZA15     */
                    unsigned short HIZA14:1;           /*   HIZA14     */
                    unsigned short HIZA13:1;           /*   HIZA13     */
                    unsigned short HIZA12:1;           /*   HIZA12     */
                    unsigned short HIZA11:1;           /*   HIZA11     */
                    unsigned short HIZA10:1;           /*   HIZA10     */
                    unsigned short HIZA9:1;            /*   HIZA9      */
                    unsigned short HIZA8:1;            /*   HIZA8      */
                    unsigned short HIZA7:1;            /*   HIZA7      */
                    unsigned short HIZA6:1;            /*   HIZA6      */
                    unsigned short HIZA5:1;            /*   HIZA5      */
                    unsigned short HIZA4:1;            /*   HIZA4      */
                    unsigned short HIZA3:1;            /*   HIZA3      */
                    unsigned short HIZA2:1;            /*   HIZA2      */
                    unsigned short HIZA1:1;            /*   HIZA1      */
                    unsigned short HIZA0:1;            /*   HIZA0      */
                    } BIT;                             /*              */
             } HIZCRA;                                 /*              */
       union {                                         /* HIZCRB       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :9;                 /*              */
                    unsigned short HIZB6:1;            /*   HIZB6      */
                    unsigned short HIZB5:1;            /*   HIZB5      */
                    unsigned short HIZB4:1;            /*   HIZB4      */
                    unsigned short HIZB3:1;            /*   HIZB3      */
                    unsigned short HIZB2:1;            /*   HIZB2      */
                    unsigned short HIZB1:1;            /*   HIZB1      */
                    unsigned short HIZB0:1;            /*   HIZB0      */
                    } BIT;                             /*              */
             } HIZCRB;                                 /*              */
       union {                                         /* HIZCRC       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :4;                 /*              */
                    unsigned short HIZC11:1;           /*   HIZC11     */
                    unsigned short HIZC10:1;           /*   HIZC10     */
                    unsigned short HIZC9:1;            /*   HIZC9      */
                    unsigned short HIZC8:1;            /*   HIZC8      */
                    unsigned short HIZC7:1;            /*   HIZC7      */
                    unsigned short HIZC6:1;            /*   HIZC6      */
                    unsigned short HIZC5:1;            /*   HIZC5      */
                    unsigned short HIZC4:1;            /*   HIZC4      */
                    unsigned short HIZC3:1;            /*   HIZC3      */
                    unsigned short HIZC2:1;            /*   HIZC2      */
                    unsigned short HIZC1:1;            /*   HIZC1      */
                    unsigned short HIZC0:1;            /*   HIZC0      */
                    } BIT;                             /*              */
             } HIZCRC;                                 /*              */
       union {                                         /* HIZCRD       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :7;                 /*              */
                    unsigned short HIZD8:1;            /*   HIZD8      */
                    unsigned short HIZD7:1;            /*   HIZD7      */
                    unsigned short HIZD6:1;            /*   HIZD6      */
                    unsigned short HIZD5:1;            /*   HIZD5      */
                    unsigned short HIZD4:1;            /*   HIZD4      */
                    unsigned short HIZD3:1;            /*   HIZD3      */
                    unsigned short HIZD2:1;            /*   HIZD2      */
                    unsigned short HIZD1:1;            /*   HIZD1      */
                    unsigned short HIZD0:1;            /*   HIZD0      */
                    } BIT;                             /*              */
             } HIZCRD;                                 /*              */
       union {                                         /* HIZCRE       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short HIZE15:1;           /*   HIZE15     */
                    unsigned short HIZE14:1;           /*   HIZE14     */
                    unsigned short HIZE13:1;           /*   HIZE13     */
                    unsigned short HIZE12:1;           /*   HIZE12     */
                    unsigned short HIZE11:1;           /*   HIZE11     */
                    unsigned short HIZE10:1;           /*   HIZE10     */
                    unsigned short HIZE9:1;            /*   HIZE9      */
                    unsigned short HIZE8:1;            /*   HIZE8      */
                    unsigned short HIZE7:1;            /*   HIZE7      */
                    unsigned short HIZE6:1;            /*   HIZE6      */
                    unsigned short HIZE5:1;            /*   HIZE5      */
                    unsigned short HIZE4:1;            /*   HIZE4      */
                    unsigned short HIZE3:1;            /*   HIZE3      */
                    unsigned short HIZE2:1;            /*   HIZE2      */
                    unsigned short HIZE1:1;            /*   HIZE1      */
                    unsigned short HIZE0:1;            /*   HIZE0      */
                    } BIT;                             /*              */
             } HIZCRE;                                 /*              */
       union {                                         /* HIZCRF       */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :14;                /*              */
                    unsigned short HIZF1:1;            /*   HIZF1      */
                    unsigned short HIZF0:1;            /*   HIZF0      */
                    } BIT;                             /*              */
             } HIZCRF;                                 /*              */
       unsigned char wk3[50];                          /*              */
       union {                                         /* PULCR        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :14;                /*              */
                    unsigned short PUL1:1;             /*   PUL1       */
                    unsigned short PUL0:1;             /*   PUL0       */
                    } BIT;                             /*              */
             } PULCR;                                  /*              */
};                                                     /*              */
struct st_ubc0 {                                       /* struct UBC0  */
       union {                                         /* CBR          */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long MFE:1;               /*   MFE        */
                    unsigned long AIE:1;               /*   AIE        */
                    unsigned long MFI:6;               /*   MFI        */
                    unsigned long AIV:8;               /*   AIV        */
                    unsigned long :1;                  /*              */
                    unsigned long SZ:3;                /*   SZ         */
                    unsigned long :4;                  /*              */
                    unsigned long CD:2;                /*   CD         */
                    unsigned long ID:2;                /*   ID         */
                    unsigned long :1;                  /*              */
                    unsigned long RW:2;                /*   RW         */
                    unsigned long CE:1;                /*   CE         */
                    } BIT;                             /*              */
             } CBR;                                    /*              */
       union {                                         /* CRR          */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :30;                 /*              */
                    unsigned long PCB:1;               /*   PCB        */
                    unsigned long BIE:1;               /*   BIE        */
                    } BIT;                             /*              */
             } CRR;                                    /*              */
       void         *CAR;                              /* CAR          */
       unsigned long CAMR;                             /* CAMR         */
};                                                     /*              */
struct st_ubc1 {                                       /* struct UBC1  */
       union {                                         /* CBR          */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long MFE:1;               /*   MFE        */
                    unsigned long AIE:1;               /*   AIE        */
                    unsigned long MFI:6;               /*   MFI        */
                    unsigned long AIV:8;               /*   AIV        */
                    unsigned long DBE:1;               /*   DBE        */
                    unsigned long SZ:3;                /*   SZ         */
                    unsigned long ETBE:1;              /*   ETBE       */
                    unsigned long :3;                  /*              */
                    unsigned long CD:2;                /*   CD         */
                    unsigned long ID:2;                /*   ID         */
                    unsigned long :1;                  /*              */
                    unsigned long RW:2;                /*   RW         */
                    unsigned long CE:1;                /*   CE         */
                    } BIT;                             /*              */
             } CBR;                                    /*              */
       union {                                         /* CRR          */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :30;                 /*              */
                    unsigned long PCB:1;               /*   PCB        */
                    unsigned long BIE:1;               /*   BIE        */
                    } BIT;                             /*              */
             } CRR;                                    /*              */
       void         *CAR;                              /* CAR          */
       unsigned long CAMR;                             /* CAMR         */
       unsigned long CDR;                              /* CDR          */
       unsigned long CDMR;                             /* CDMR         */
       unsigned long CETR;                             /* CETR         */
};                                                     /*              */
struct st_ubc {                                        /* struct UBC   */
       unsigned long CCMFR;                            /* CCMFR        */
       unsigned char wk0[28];                          /*              */
       union {                                         /* CBCR         */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Bit Access  */
                    unsigned long :31;                 /*              */
                    unsigned long UBDE:1;              /*   UBDE       */
                    } BIT;                             /*              */
             } CBCR;                                   /*              */
};                                                     /*              */
struct st_hudi {                                       /* struct HUDI  */
       union {                                         /* SDIR         */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short TI:8;               /*   TI         */
                    unsigned short :8;                 /*              */
                    } BIT;                             /*              */
             } SDIR;                                   /*              */
       unsigned char wk0[6];                           /*              */
       union {                                         /* SDDR         */
             unsigned long LONG;                       /*  Long Access */
             struct {                                  /*  Word Access */
                    unsigned short H;                  /*   High       */
                    unsigned short L;                  /*   Low        */
                    } WORD;                            /*              */
             } SDDR;                                   /*              */
       unsigned char wk1[12];                          /*              */
       union {                                         /* SDINT        */
             unsigned short WORD;                      /*  Word Access */
             struct {                                  /*  Bit Access  */
                    unsigned short :15;                /*              */
                    unsigned short INTREQ:1;           /*   INTREQ     */
                    } BIT;                             /*              */
             } SDINT;                                  /*              */
};                                                     /*              */
#if 0
#define MMU (*(volatile struct st_mmu *)0xFF000000)    /* MMU Address  */
#define CACHE (*(volatile struct st_cache *)0xFF00001C)/* CACHE Address */
#define INTC0 (*(volatile struct st_intc0 *)0xA4080000)/* INTC Address0 */
#define INTC1 (*(volatile struct st_intc1 *)0xA4140000)/* INTC Address1 */
#define INTC2 (*(volatile struct st_intc2 *)0xA4700000)/* INTC Address2 */
#define BSC (*(volatile struct st_bsc *)0xFEC10000)    /* BSC Address  */
#define DMAC0 (*(volatile struct st_dmac0 *)0xFE008020)/* DMAC0 Address */
#define DMAC1 (*(volatile struct st_dmac1 *)0xFE008030)/* DMAC1 Address */
#define DMAC2 (*(volatile struct st_dmac2 *)0xFE008040)/* DMAC2 Address */
#define DMAC3 (*(volatile struct st_dmac3 *)0xFE008050)/* DMAC3 Address */
#define DMAC (*(volatile struct st_dmac *)0xFE008060)  /* DMAC Address */
#define DMAC4 (*(volatile struct st_dmac4 *)0xFE008070)/* DMAC4 Address */
#define DMAC5 (*(volatile struct st_dmac5 *)0xFE008080)/* DMAC5 Address */
#define DMACB0 (*(volatile struct st_dmacb0 *)0xFE008120)/* DMACB0 Address */
#define DMACB1 (*(volatile struct st_dmacb1 *)0xFE008130)/* DMACB1 Address */
#define DMACB2 (*(volatile struct st_dmacb2 *)0xFE008140)/* DMACB2 Address */
#define DMACB3 (*(volatile struct st_dmacb3 *)0xFE008150)/* DMACB3 Address */
#define DMACR (*(volatile struct st_dmacr *)0xFE009000)/* DMACR Address */
#define CPG (*(volatile struct st_cpg *)0xA4150000)    /* CPG Address  */
#define LOWP (*(volatile struct st_lowp *)0xA4150020)  /* LOWP Address */
#define RWDT (*(volatile struct st_rwdt *)0xA4520000)  /* RWDT Address */
#define TPU0 (*(volatile struct st_tpu0 *)0xA4630000)  /* TPU0 Address */
#define TPU00 (*(volatile struct st_tpu00 *)0xA4630010)/* TPU00 Address */
#define TPU01 (*(volatile struct st_tpu01 *)0xA4630050)/* TPU01 Address */
#define TPU02 (*(volatile struct st_tpu02 *)0xA4630090)/* TPU02 Address */
#define TPU03 (*(volatile struct st_tpu03 *)0xA46300D0)/* TPU03 Address */
#define TPU1 (*(volatile struct st_tpu1 *)0xA44F0000)  /* TPU1 Address */
#define TPU10 (*(volatile struct st_tpu10 *)0xA44F0010)/* TPU10 Address */
#define TPU11 (*(volatile struct st_tpu11 *)0xA44F0050)/* TPU11 Address */
#define RTC (*(volatile struct st_rtc *)0xA465FEC0)    /* RTC Address  */
#define TMU (*(volatile struct st_tmu *)0xFFD80004)    /* TMU Address  */
#define TMU0 (*(volatile struct st_tmu0 *)0xFFD80008)  /* TMU0 Address */
#define TMU1 (*(volatile struct st_tmu1 *)0xFFD80014)  /* TMU1 Address */
#define TMU2 (*(volatile struct st_tmu2 *)0xFFD80020)  /* TMU2 Address */
#define CMT (*(volatile struct st_cmt *)0xA44A0000)    /* CMT Address  */
#define CMT0 (*(volatile struct st_cmt0 *)0xA44A0010)  /* CMT0 Address */
#define CMT1 (*(volatile struct st_cmt1 *)0xA44A0020)  /* CMT1 Address */
#define CMT2 (*(volatile struct st_cmt2 *)0xA44A0030)  /* CMT2 Address */
#define CMT3 (*(volatile struct st_cmt3 *)0xA44A0040)  /* CMT3 Address */
#define CMT4 (*(volatile struct st_cmt4 *)0xA44A0050)  /* CMT4 Address */
#define IIC0 (*(volatile struct st_iic0 *)0xA4470000)  /* IIC0 Address */
#define IIC1 (*(volatile struct st_iic1 *)0xA4750000)  /* IIC1 Address */
#define SIOF (*(volatile struct st_siof *)0xA4410000)  /* SIOF Address */
#define SCIF0 (*(volatile struct st_scif0 *)0xFFE00000)/* SCIF0 Address */
#endif 
//SCIF2 because on 9860G it was also SCIF2 :-)
#define SCIF2 (*(volatile struct st_scif0 *)0xA4410000)/* SCIF0 Address */
//#define SCIF2 (*(volatile struct st_scif4 *)0xA4410000)/* SCIF0 Address */

#if 0
#define SCIF1 (*(volatile struct st_scif0 *)0xFFE10000)/* SCIF1 Address */
#define SCIF2 (*(volatile struct st_scif0 *)0xFFE20000)/* SCIF2 Address */
#define SCIF3 (*(volatile struct st_scif0 *)0xFFE30000)/* SCIF3 Address */
#define SCIFA4 (*(volatile struct st_scifa4 *)0xFFE40000)/* SCIFA4 Address */
#define SCIFA5 (*(volatile struct st_scifa4 *)0xFFE50000)/* SCIFA5 Address */
#define IRDA0 (*(volatile struct st_irda0 *)0xA45D0016)/* IRDA0 Address */
#define IRDA1 (*(volatile struct st_irda1 *)0xA45E0016)/* IRDA1 Address */
#define SIM (*(volatile struct st_sim *)0xA4490000)    /* SIM Address  */
#define ADC (*(volatile struct st_adc *)0xA4610000)    /* ADC Address  */
#define DAC (*(volatile struct st_dac *)0xA4620000)    /* DAC Address  */
#define PORT (*(volatile struct st_port *)0xA4050080)  /* PORT Address */
#define PFC (*(volatile struct st_pfc *)0xA4050000)    /* PFC Address  */
#define UBC0 (*(volatile struct st_ubc0 *)0xFF200000)  /* UBC0 Address */
#define UBC1 (*(volatile struct st_ubc1 *)0xFF200020)  /* UBC1 Address */
#define UBC (*(volatile struct st_ubc *)0xFF200600)    /* UBC Address  */
#define HUDI (*(volatile struct st_hudi *)0xFC110000)  /* HUDI Address */
#endif 