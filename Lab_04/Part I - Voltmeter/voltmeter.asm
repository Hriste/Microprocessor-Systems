;--------------------------------------------------------
; File Created by SDCC : free open source ANSI-C Compiler
; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
; This file was generated Mon Oct 17 16:57:41 2016
;--------------------------------------------------------
	.module voltmeter
	.optsdcc -mmcs51 --model-small
	
;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	.globl _printf_fast_f
	.globl _printf
	.globl _PB
	.globl _P7_7
	.globl _P7_6
	.globl _P7_5
	.globl _P7_4
	.globl _P7_3
	.globl _P7_2
	.globl _P7_1
	.globl _P7_0
	.globl _SPIF
	.globl _WCOL
	.globl _MODF
	.globl _RXOVRN
	.globl _NSSMD1
	.globl _NSSMD0
	.globl _TXBMT
	.globl _SPIEN
	.globl _P6_7
	.globl _P6_6
	.globl _P6_5
	.globl _P6_4
	.globl _P6_3
	.globl _P6_2
	.globl _P6_1
	.globl _P6_0
	.globl _AD2EN
	.globl _AD2TM
	.globl _AD2INT
	.globl _AD2BUSY
	.globl _AD2CM2
	.globl _AD2CM1
	.globl _AD2CM0
	.globl _AD2WINT
	.globl _AD0EN
	.globl _AD0TM
	.globl _AD0INT
	.globl _AD0BUSY
	.globl _AD0CM1
	.globl _AD0CM0
	.globl _AD0WINT
	.globl _AD0LJST
	.globl _P5_7
	.globl _P5_6
	.globl _P5_5
	.globl _P5_4
	.globl _P5_3
	.globl _P5_2
	.globl _P5_1
	.globl _P5_0
	.globl _CF
	.globl _CR
	.globl _CCF5
	.globl _CCF4
	.globl _CCF3
	.globl _CCF2
	.globl _CCF1
	.globl _CCF0
	.globl _CY
	.globl _AC
	.globl _F0
	.globl _RS1
	.globl _RS0
	.globl _OV
	.globl _F1
	.globl _P
	.globl _P4_7
	.globl _P4_6
	.globl _P4_5
	.globl _P4_4
	.globl _P4_3
	.globl _P4_2
	.globl _P4_1
	.globl _P4_0
	.globl _TF4
	.globl _EXF4
	.globl _EXEN4
	.globl _TR4
	.globl _CT4
	.globl _CPRL4
	.globl _TF3
	.globl _EXF3
	.globl _EXEN3
	.globl _TR3
	.globl _CT3
	.globl _CPRL3
	.globl _TF2
	.globl _EXF2
	.globl _EXEN2
	.globl _TR2
	.globl _CT2
	.globl _CPRL2
	.globl _MAC0HO
	.globl _MAC0Z
	.globl _MAC0SO
	.globl _MAC0N
	.globl _BUSY
	.globl _ENSMB
	.globl _STA
	.globl _STO
	.globl _SI
	.globl _AA
	.globl _SMBFTE
	.globl _SMBTOE
	.globl _PT2
	.globl _PS
	.globl _PS0
	.globl _PT1
	.globl _PX1
	.globl _PT0
	.globl _PX0
	.globl _P3_7
	.globl _P3_6
	.globl _P3_5
	.globl _P3_4
	.globl _P3_3
	.globl _P3_2
	.globl _P3_1
	.globl _P3_0
	.globl _EA
	.globl _ET2
	.globl _ES
	.globl _ES0
	.globl _ET1
	.globl _EX1
	.globl _ET0
	.globl _EX0
	.globl _P2_7
	.globl _P2_6
	.globl _P2_5
	.globl _P2_4
	.globl _P2_3
	.globl _P2_2
	.globl _P2_1
	.globl _P2_0
	.globl _S1MODE
	.globl _MCE1
	.globl _REN1
	.globl _TB81
	.globl _RB81
	.globl _TI1
	.globl _RI1
	.globl _SM00
	.globl _SM10
	.globl _SM20
	.globl _REN
	.globl _REN0
	.globl _TB80
	.globl _RB80
	.globl _TI
	.globl _TI0
	.globl _RI
	.globl _RI0
	.globl _P1_7
	.globl _P1_6
	.globl _P1_5
	.globl _P1_4
	.globl _P1_3
	.globl _P1_2
	.globl _P1_1
	.globl _P1_0
	.globl _FLHBUSY
	.globl _CP1EN
	.globl _CP1OUT
	.globl _CP1RIF
	.globl _CP1FIF
	.globl _CP1HYP1
	.globl _CP1HYP0
	.globl _CP1HYN1
	.globl _CP1HYN0
	.globl _CP0EN
	.globl _CP0OUT
	.globl _CP0RIF
	.globl _CP0FIF
	.globl _CP0HYP1
	.globl _CP0HYP0
	.globl _CP0HYN1
	.globl _CP0HYN0
	.globl _TF1
	.globl _TR1
	.globl _TF0
	.globl _TR0
	.globl _IE1
	.globl _IT1
	.globl _IE0
	.globl _IT0
	.globl _P0_7
	.globl _P0_6
	.globl _P0_5
	.globl _P0_4
	.globl _P0_3
	.globl _P0_2
	.globl _P0_1
	.globl _P0_0
	.globl _MAC0RND
	.globl _MAC0ACC
	.globl _MAC0A
	.globl _RCAP4
	.globl _TMR4
	.globl _DAC1
	.globl _RCAP3
	.globl _TMR3
	.globl _PCA0CP5
	.globl _PCA0CP4
	.globl _PCA0CP3
	.globl _PCA0CP2
	.globl _PCA0CP1
	.globl _PCA0CP0
	.globl _PCA0
	.globl _DAC0
	.globl _ADC0LT
	.globl _ADC0GT
	.globl _ADC0
	.globl _RCAP2
	.globl _TMR2
	.globl _TMR1
	.globl _TMR0
	.globl _P7
	.globl _P6
	.globl _XBR2
	.globl _XBR1
	.globl _XBR0
	.globl _P5
	.globl _P4
	.globl _FLACL
	.globl _P1MDIN
	.globl _P3MDOUT
	.globl _P2MDOUT
	.globl _P1MDOUT
	.globl _P0MDOUT
	.globl _CCH0LC
	.globl _CCH0TN
	.globl _CCH0CN
	.globl _P7MDOUT
	.globl _P6MDOUT
	.globl _P5MDOUT
	.globl _P4MDOUT
	.globl _CCH0MA
	.globl _CLKSEL
	.globl _SFRPGCN
	.globl _PLL0FLT
	.globl _PLL0MUL
	.globl _PLL0DIV
	.globl _OSCXCN
	.globl _OSCICL
	.globl _OSCICN
	.globl _PLL0CN
	.globl _FLSTAT
	.globl _MAC0RNDH
	.globl _MAC0RNDL
	.globl _MAC0CF
	.globl _MAC0AH
	.globl _MAC0AL
	.globl _MAC0STA
	.globl _MAC0OVR
	.globl _MAC0ACC3
	.globl _MAC0ACC2
	.globl _MAC0ACC1
	.globl _MAC0ACC0
	.globl _MAC0BH
	.globl _MAC0BL
	.globl _ADC2CN
	.globl _TMR4H
	.globl _TMR4L
	.globl _RCAP4H
	.globl _RCAP4L
	.globl _TMR4CF
	.globl _TMR4CN
	.globl _ADC2LT
	.globl _ADC2GT
	.globl _ADC2
	.globl _ADC2CF
	.globl _AMX2SL
	.globl _AMX2CF
	.globl _CPT1MD
	.globl _CPT1CN
	.globl _DAC1CN
	.globl _DAC1H
	.globl _DAC1L
	.globl _TMR3H
	.globl _TMR3L
	.globl _RCAP3H
	.globl _RCAP3L
	.globl _TMR3CF
	.globl _TMR3CN
	.globl _SBUF1
	.globl _SCON1
	.globl _CPT0MD
	.globl _CPT0CN
	.globl _PCA0CPH1
	.globl _PCA0CPL1
	.globl _PCA0CPH0
	.globl _PCA0CPL0
	.globl _PCA0H
	.globl _PCA0L
	.globl _SPI0CN
	.globl _RSTSRC
	.globl _PCA0CPH4
	.globl _PCA0CPL4
	.globl _PCA0CPH3
	.globl _PCA0CPL3
	.globl _PCA0CPH2
	.globl _PCA0CPL2
	.globl _ADC0CN
	.globl _PCA0CPH5
	.globl _PCA0CPL5
	.globl _PCA0CPM5
	.globl _PCA0CPM4
	.globl _PCA0CPM3
	.globl _PCA0CPM2
	.globl _PCA0CPM1
	.globl _PCA0CPM0
	.globl _PCA0MD
	.globl _PCA0CN
	.globl _DAC0CN
	.globl _DAC0H
	.globl _DAC0L
	.globl _REF0CN
	.globl _SMB0CR
	.globl _TH2
	.globl _TMR2H
	.globl _TL2
	.globl _TMR2L
	.globl _RCAP2H
	.globl _RCAP2L
	.globl _TMR2CF
	.globl _TMR2CN
	.globl _ADC0LTH
	.globl _ADC0LTL
	.globl _ADC0GTH
	.globl _ADC0GTL
	.globl _SMB0ADR
	.globl _SMB0DAT
	.globl _SMB0STA
	.globl _SMB0CN
	.globl _ADC0H
	.globl _ADC0L
	.globl _ADC0CF
	.globl _AMX0SL
	.globl _AMX0CF
	.globl _SADEN0
	.globl _FLSCL
	.globl _SADDR0
	.globl _EMI0CF
	.globl __XPAGE
	.globl _EMI0CN
	.globl _EMI0TC
	.globl _SPI0CKR
	.globl _SPI0DAT
	.globl _SPI0CFG
	.globl _SBUF
	.globl _SBUF0
	.globl _SCON
	.globl _SCON0
	.globl _SSTA0
	.globl _PSCTL
	.globl _CKCON
	.globl _TH1
	.globl _TH0
	.globl _TL1
	.globl _TL0
	.globl _TMOD
	.globl _TCON
	.globl _WDTCN
	.globl _EIP2
	.globl _EIP1
	.globl _B
	.globl _EIE2
	.globl _EIE1
	.globl _ACC
	.globl _PSW
	.globl _IP
	.globl _PSBANK
	.globl _P3
	.globl _IE
	.globl _P2
	.globl _P1
	.globl _PCON
	.globl _SFRLAST
	.globl _SFRNEXT
	.globl _SFRPAGE
	.globl _DPH
	.globl _DPL
	.globl _SP
	.globl _P0
	.globl _trials
	.globl _max
	.globl _min
	.globl _running
	.globl _putchar
	.globl _getchar
	.globl _main
	.globl _ADC_read
	.globl _score
	.globl _SYSCLK_INIT
	.globl _Timer_Init
	.globl _UART_Init
	.globl _Port_IO_Init
	.globl _ADC_INIT
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
G$P0$0$0 == 0x0080
_P0	=	0x0080
G$SP$0$0 == 0x0081
_SP	=	0x0081
G$DPL$0$0 == 0x0082
_DPL	=	0x0082
G$DPH$0$0 == 0x0083
_DPH	=	0x0083
G$SFRPAGE$0$0 == 0x0084
_SFRPAGE	=	0x0084
G$SFRNEXT$0$0 == 0x0085
_SFRNEXT	=	0x0085
G$SFRLAST$0$0 == 0x0086
_SFRLAST	=	0x0086
G$PCON$0$0 == 0x0087
_PCON	=	0x0087
G$P1$0$0 == 0x0090
_P1	=	0x0090
G$P2$0$0 == 0x00a0
_P2	=	0x00a0
G$IE$0$0 == 0x00a8
_IE	=	0x00a8
G$P3$0$0 == 0x00b0
_P3	=	0x00b0
G$PSBANK$0$0 == 0x00b1
_PSBANK	=	0x00b1
G$IP$0$0 == 0x00b8
_IP	=	0x00b8
G$PSW$0$0 == 0x00d0
_PSW	=	0x00d0
G$ACC$0$0 == 0x00e0
_ACC	=	0x00e0
G$EIE1$0$0 == 0x00e6
_EIE1	=	0x00e6
G$EIE2$0$0 == 0x00e7
_EIE2	=	0x00e7
G$B$0$0 == 0x00f0
_B	=	0x00f0
G$EIP1$0$0 == 0x00f6
_EIP1	=	0x00f6
G$EIP2$0$0 == 0x00f7
_EIP2	=	0x00f7
G$WDTCN$0$0 == 0x00ff
_WDTCN	=	0x00ff
G$TCON$0$0 == 0x0088
_TCON	=	0x0088
G$TMOD$0$0 == 0x0089
_TMOD	=	0x0089
G$TL0$0$0 == 0x008a
_TL0	=	0x008a
G$TL1$0$0 == 0x008b
_TL1	=	0x008b
G$TH0$0$0 == 0x008c
_TH0	=	0x008c
G$TH1$0$0 == 0x008d
_TH1	=	0x008d
G$CKCON$0$0 == 0x008e
_CKCON	=	0x008e
G$PSCTL$0$0 == 0x008f
_PSCTL	=	0x008f
G$SSTA0$0$0 == 0x0091
_SSTA0	=	0x0091
G$SCON0$0$0 == 0x0098
_SCON0	=	0x0098
G$SCON$0$0 == 0x0098
_SCON	=	0x0098
G$SBUF0$0$0 == 0x0099
_SBUF0	=	0x0099
G$SBUF$0$0 == 0x0099
_SBUF	=	0x0099
G$SPI0CFG$0$0 == 0x009a
_SPI0CFG	=	0x009a
G$SPI0DAT$0$0 == 0x009b
_SPI0DAT	=	0x009b
G$SPI0CKR$0$0 == 0x009d
_SPI0CKR	=	0x009d
G$EMI0TC$0$0 == 0x00a1
_EMI0TC	=	0x00a1
G$EMI0CN$0$0 == 0x00a2
_EMI0CN	=	0x00a2
G$_XPAGE$0$0 == 0x00a2
__XPAGE	=	0x00a2
G$EMI0CF$0$0 == 0x00a3
_EMI0CF	=	0x00a3
G$SADDR0$0$0 == 0x00a9
_SADDR0	=	0x00a9
G$FLSCL$0$0 == 0x00b7
_FLSCL	=	0x00b7
G$SADEN0$0$0 == 0x00b9
_SADEN0	=	0x00b9
G$AMX0CF$0$0 == 0x00ba
_AMX0CF	=	0x00ba
G$AMX0SL$0$0 == 0x00bb
_AMX0SL	=	0x00bb
G$ADC0CF$0$0 == 0x00bc
_ADC0CF	=	0x00bc
G$ADC0L$0$0 == 0x00be
_ADC0L	=	0x00be
G$ADC0H$0$0 == 0x00bf
_ADC0H	=	0x00bf
G$SMB0CN$0$0 == 0x00c0
_SMB0CN	=	0x00c0
G$SMB0STA$0$0 == 0x00c1
_SMB0STA	=	0x00c1
G$SMB0DAT$0$0 == 0x00c2
_SMB0DAT	=	0x00c2
G$SMB0ADR$0$0 == 0x00c3
_SMB0ADR	=	0x00c3
G$ADC0GTL$0$0 == 0x00c4
_ADC0GTL	=	0x00c4
G$ADC0GTH$0$0 == 0x00c5
_ADC0GTH	=	0x00c5
G$ADC0LTL$0$0 == 0x00c6
_ADC0LTL	=	0x00c6
G$ADC0LTH$0$0 == 0x00c7
_ADC0LTH	=	0x00c7
G$TMR2CN$0$0 == 0x00c8
_TMR2CN	=	0x00c8
G$TMR2CF$0$0 == 0x00c9
_TMR2CF	=	0x00c9
G$RCAP2L$0$0 == 0x00ca
_RCAP2L	=	0x00ca
G$RCAP2H$0$0 == 0x00cb
_RCAP2H	=	0x00cb
G$TMR2L$0$0 == 0x00cc
_TMR2L	=	0x00cc
G$TL2$0$0 == 0x00cc
_TL2	=	0x00cc
G$TMR2H$0$0 == 0x00cd
_TMR2H	=	0x00cd
G$TH2$0$0 == 0x00cd
_TH2	=	0x00cd
G$SMB0CR$0$0 == 0x00cf
_SMB0CR	=	0x00cf
G$REF0CN$0$0 == 0x00d1
_REF0CN	=	0x00d1
G$DAC0L$0$0 == 0x00d2
_DAC0L	=	0x00d2
G$DAC0H$0$0 == 0x00d3
_DAC0H	=	0x00d3
G$DAC0CN$0$0 == 0x00d4
_DAC0CN	=	0x00d4
G$PCA0CN$0$0 == 0x00d8
_PCA0CN	=	0x00d8
G$PCA0MD$0$0 == 0x00d9
_PCA0MD	=	0x00d9
G$PCA0CPM0$0$0 == 0x00da
_PCA0CPM0	=	0x00da
G$PCA0CPM1$0$0 == 0x00db
_PCA0CPM1	=	0x00db
G$PCA0CPM2$0$0 == 0x00dc
_PCA0CPM2	=	0x00dc
G$PCA0CPM3$0$0 == 0x00dd
_PCA0CPM3	=	0x00dd
G$PCA0CPM4$0$0 == 0x00de
_PCA0CPM4	=	0x00de
G$PCA0CPM5$0$0 == 0x00df
_PCA0CPM5	=	0x00df
G$PCA0CPL5$0$0 == 0x00e1
_PCA0CPL5	=	0x00e1
G$PCA0CPH5$0$0 == 0x00e2
_PCA0CPH5	=	0x00e2
G$ADC0CN$0$0 == 0x00e8
_ADC0CN	=	0x00e8
G$PCA0CPL2$0$0 == 0x00e9
_PCA0CPL2	=	0x00e9
G$PCA0CPH2$0$0 == 0x00ea
_PCA0CPH2	=	0x00ea
G$PCA0CPL3$0$0 == 0x00eb
_PCA0CPL3	=	0x00eb
G$PCA0CPH3$0$0 == 0x00ec
_PCA0CPH3	=	0x00ec
G$PCA0CPL4$0$0 == 0x00ed
_PCA0CPL4	=	0x00ed
G$PCA0CPH4$0$0 == 0x00ee
_PCA0CPH4	=	0x00ee
G$RSTSRC$0$0 == 0x00ef
_RSTSRC	=	0x00ef
G$SPI0CN$0$0 == 0x00f8
_SPI0CN	=	0x00f8
G$PCA0L$0$0 == 0x00f9
_PCA0L	=	0x00f9
G$PCA0H$0$0 == 0x00fa
_PCA0H	=	0x00fa
G$PCA0CPL0$0$0 == 0x00fb
_PCA0CPL0	=	0x00fb
G$PCA0CPH0$0$0 == 0x00fc
_PCA0CPH0	=	0x00fc
G$PCA0CPL1$0$0 == 0x00fd
_PCA0CPL1	=	0x00fd
G$PCA0CPH1$0$0 == 0x00fe
_PCA0CPH1	=	0x00fe
G$CPT0CN$0$0 == 0x0088
_CPT0CN	=	0x0088
G$CPT0MD$0$0 == 0x0089
_CPT0MD	=	0x0089
G$SCON1$0$0 == 0x0098
_SCON1	=	0x0098
G$SBUF1$0$0 == 0x0099
_SBUF1	=	0x0099
G$TMR3CN$0$0 == 0x00c8
_TMR3CN	=	0x00c8
G$TMR3CF$0$0 == 0x00c9
_TMR3CF	=	0x00c9
G$RCAP3L$0$0 == 0x00ca
_RCAP3L	=	0x00ca
G$RCAP3H$0$0 == 0x00cb
_RCAP3H	=	0x00cb
G$TMR3L$0$0 == 0x00cc
_TMR3L	=	0x00cc
G$TMR3H$0$0 == 0x00cd
_TMR3H	=	0x00cd
G$DAC1L$0$0 == 0x00d2
_DAC1L	=	0x00d2
G$DAC1H$0$0 == 0x00d3
_DAC1H	=	0x00d3
G$DAC1CN$0$0 == 0x00d4
_DAC1CN	=	0x00d4
G$CPT1CN$0$0 == 0x0088
_CPT1CN	=	0x0088
G$CPT1MD$0$0 == 0x0089
_CPT1MD	=	0x0089
G$AMX2CF$0$0 == 0x00ba
_AMX2CF	=	0x00ba
G$AMX2SL$0$0 == 0x00bb
_AMX2SL	=	0x00bb
G$ADC2CF$0$0 == 0x00bc
_ADC2CF	=	0x00bc
G$ADC2$0$0 == 0x00be
_ADC2	=	0x00be
G$ADC2GT$0$0 == 0x00c4
_ADC2GT	=	0x00c4
G$ADC2LT$0$0 == 0x00c6
_ADC2LT	=	0x00c6
G$TMR4CN$0$0 == 0x00c8
_TMR4CN	=	0x00c8
G$TMR4CF$0$0 == 0x00c9
_TMR4CF	=	0x00c9
G$RCAP4L$0$0 == 0x00ca
_RCAP4L	=	0x00ca
G$RCAP4H$0$0 == 0x00cb
_RCAP4H	=	0x00cb
G$TMR4L$0$0 == 0x00cc
_TMR4L	=	0x00cc
G$TMR4H$0$0 == 0x00cd
_TMR4H	=	0x00cd
G$ADC2CN$0$0 == 0x00e8
_ADC2CN	=	0x00e8
G$MAC0BL$0$0 == 0x0091
_MAC0BL	=	0x0091
G$MAC0BH$0$0 == 0x0092
_MAC0BH	=	0x0092
G$MAC0ACC0$0$0 == 0x0093
_MAC0ACC0	=	0x0093
G$MAC0ACC1$0$0 == 0x0094
_MAC0ACC1	=	0x0094
G$MAC0ACC2$0$0 == 0x0095
_MAC0ACC2	=	0x0095
G$MAC0ACC3$0$0 == 0x0096
_MAC0ACC3	=	0x0096
G$MAC0OVR$0$0 == 0x0097
_MAC0OVR	=	0x0097
G$MAC0STA$0$0 == 0x00c0
_MAC0STA	=	0x00c0
G$MAC0AL$0$0 == 0x00c1
_MAC0AL	=	0x00c1
G$MAC0AH$0$0 == 0x00c2
_MAC0AH	=	0x00c2
G$MAC0CF$0$0 == 0x00c3
_MAC0CF	=	0x00c3
G$MAC0RNDL$0$0 == 0x00ce
_MAC0RNDL	=	0x00ce
G$MAC0RNDH$0$0 == 0x00cf
_MAC0RNDH	=	0x00cf
G$FLSTAT$0$0 == 0x0088
_FLSTAT	=	0x0088
G$PLL0CN$0$0 == 0x0089
_PLL0CN	=	0x0089
G$OSCICN$0$0 == 0x008a
_OSCICN	=	0x008a
G$OSCICL$0$0 == 0x008b
_OSCICL	=	0x008b
G$OSCXCN$0$0 == 0x008c
_OSCXCN	=	0x008c
G$PLL0DIV$0$0 == 0x008d
_PLL0DIV	=	0x008d
G$PLL0MUL$0$0 == 0x008e
_PLL0MUL	=	0x008e
G$PLL0FLT$0$0 == 0x008f
_PLL0FLT	=	0x008f
G$SFRPGCN$0$0 == 0x0096
_SFRPGCN	=	0x0096
G$CLKSEL$0$0 == 0x0097
_CLKSEL	=	0x0097
G$CCH0MA$0$0 == 0x009a
_CCH0MA	=	0x009a
G$P4MDOUT$0$0 == 0x009c
_P4MDOUT	=	0x009c
G$P5MDOUT$0$0 == 0x009d
_P5MDOUT	=	0x009d
G$P6MDOUT$0$0 == 0x009e
_P6MDOUT	=	0x009e
G$P7MDOUT$0$0 == 0x009f
_P7MDOUT	=	0x009f
G$CCH0CN$0$0 == 0x00a1
_CCH0CN	=	0x00a1
G$CCH0TN$0$0 == 0x00a2
_CCH0TN	=	0x00a2
G$CCH0LC$0$0 == 0x00a3
_CCH0LC	=	0x00a3
G$P0MDOUT$0$0 == 0x00a4
_P0MDOUT	=	0x00a4
G$P1MDOUT$0$0 == 0x00a5
_P1MDOUT	=	0x00a5
G$P2MDOUT$0$0 == 0x00a6
_P2MDOUT	=	0x00a6
G$P3MDOUT$0$0 == 0x00a7
_P3MDOUT	=	0x00a7
G$P1MDIN$0$0 == 0x00ad
_P1MDIN	=	0x00ad
G$FLACL$0$0 == 0x00b7
_FLACL	=	0x00b7
G$P4$0$0 == 0x00c8
_P4	=	0x00c8
G$P5$0$0 == 0x00d8
_P5	=	0x00d8
G$XBR0$0$0 == 0x00e1
_XBR0	=	0x00e1
G$XBR1$0$0 == 0x00e2
_XBR1	=	0x00e2
G$XBR2$0$0 == 0x00e3
_XBR2	=	0x00e3
G$P6$0$0 == 0x00e8
_P6	=	0x00e8
G$P7$0$0 == 0x00f8
_P7	=	0x00f8
G$TMR0$0$0 == 0x8c8a
_TMR0	=	0x8c8a
G$TMR1$0$0 == 0x8d8b
_TMR1	=	0x8d8b
G$TMR2$0$0 == 0xcdcc
_TMR2	=	0xcdcc
G$RCAP2$0$0 == 0xcbca
_RCAP2	=	0xcbca
G$ADC0$0$0 == 0xbfbe
_ADC0	=	0xbfbe
G$ADC0GT$0$0 == 0xc5c4
_ADC0GT	=	0xc5c4
G$ADC0LT$0$0 == 0xc7c6
_ADC0LT	=	0xc7c6
G$DAC0$0$0 == 0xd3d2
_DAC0	=	0xd3d2
G$PCA0$0$0 == 0xfaf9
_PCA0	=	0xfaf9
G$PCA0CP0$0$0 == 0xfcfb
_PCA0CP0	=	0xfcfb
G$PCA0CP1$0$0 == 0xfefd
_PCA0CP1	=	0xfefd
G$PCA0CP2$0$0 == 0xeae9
_PCA0CP2	=	0xeae9
G$PCA0CP3$0$0 == 0xeceb
_PCA0CP3	=	0xeceb
G$PCA0CP4$0$0 == 0xeeed
_PCA0CP4	=	0xeeed
G$PCA0CP5$0$0 == 0xe2e1
_PCA0CP5	=	0xe2e1
G$TMR3$0$0 == 0xcdcc
_TMR3	=	0xcdcc
G$RCAP3$0$0 == 0xcbca
_RCAP3	=	0xcbca
G$DAC1$0$0 == 0xd3d2
_DAC1	=	0xd3d2
G$TMR4$0$0 == 0xcdcc
_TMR4	=	0xcdcc
G$RCAP4$0$0 == 0xcbca
_RCAP4	=	0xcbca
G$MAC0A$0$0 == 0xc2c1
_MAC0A	=	0xc2c1
G$MAC0ACC$0$0 == 0x96959493
_MAC0ACC	=	0x96959493
G$MAC0RND$0$0 == 0xcfce
_MAC0RND	=	0xcfce
;--------------------------------------------------------
; special function bits
;--------------------------------------------------------
	.area RSEG    (ABS,DATA)
	.org 0x0000
G$P0_0$0$0 == 0x0080
_P0_0	=	0x0080
G$P0_1$0$0 == 0x0081
_P0_1	=	0x0081
G$P0_2$0$0 == 0x0082
_P0_2	=	0x0082
G$P0_3$0$0 == 0x0083
_P0_3	=	0x0083
G$P0_4$0$0 == 0x0084
_P0_4	=	0x0084
G$P0_5$0$0 == 0x0085
_P0_5	=	0x0085
G$P0_6$0$0 == 0x0086
_P0_6	=	0x0086
G$P0_7$0$0 == 0x0087
_P0_7	=	0x0087
G$IT0$0$0 == 0x0088
_IT0	=	0x0088
G$IE0$0$0 == 0x0089
_IE0	=	0x0089
G$IT1$0$0 == 0x008a
_IT1	=	0x008a
G$IE1$0$0 == 0x008b
_IE1	=	0x008b
G$TR0$0$0 == 0x008c
_TR0	=	0x008c
G$TF0$0$0 == 0x008d
_TF0	=	0x008d
G$TR1$0$0 == 0x008e
_TR1	=	0x008e
G$TF1$0$0 == 0x008f
_TF1	=	0x008f
G$CP0HYN0$0$0 == 0x0088
_CP0HYN0	=	0x0088
G$CP0HYN1$0$0 == 0x0089
_CP0HYN1	=	0x0089
G$CP0HYP0$0$0 == 0x008a
_CP0HYP0	=	0x008a
G$CP0HYP1$0$0 == 0x008b
_CP0HYP1	=	0x008b
G$CP0FIF$0$0 == 0x008c
_CP0FIF	=	0x008c
G$CP0RIF$0$0 == 0x008d
_CP0RIF	=	0x008d
G$CP0OUT$0$0 == 0x008e
_CP0OUT	=	0x008e
G$CP0EN$0$0 == 0x008f
_CP0EN	=	0x008f
G$CP1HYN0$0$0 == 0x0088
_CP1HYN0	=	0x0088
G$CP1HYN1$0$0 == 0x0089
_CP1HYN1	=	0x0089
G$CP1HYP0$0$0 == 0x008a
_CP1HYP0	=	0x008a
G$CP1HYP1$0$0 == 0x008b
_CP1HYP1	=	0x008b
G$CP1FIF$0$0 == 0x008c
_CP1FIF	=	0x008c
G$CP1RIF$0$0 == 0x008d
_CP1RIF	=	0x008d
G$CP1OUT$0$0 == 0x008e
_CP1OUT	=	0x008e
G$CP1EN$0$0 == 0x008f
_CP1EN	=	0x008f
G$FLHBUSY$0$0 == 0x0088
_FLHBUSY	=	0x0088
G$P1_0$0$0 == 0x0090
_P1_0	=	0x0090
G$P1_1$0$0 == 0x0091
_P1_1	=	0x0091
G$P1_2$0$0 == 0x0092
_P1_2	=	0x0092
G$P1_3$0$0 == 0x0093
_P1_3	=	0x0093
G$P1_4$0$0 == 0x0094
_P1_4	=	0x0094
G$P1_5$0$0 == 0x0095
_P1_5	=	0x0095
G$P1_6$0$0 == 0x0096
_P1_6	=	0x0096
G$P1_7$0$0 == 0x0097
_P1_7	=	0x0097
G$RI0$0$0 == 0x0098
_RI0	=	0x0098
G$RI$0$0 == 0x0098
_RI	=	0x0098
G$TI0$0$0 == 0x0099
_TI0	=	0x0099
G$TI$0$0 == 0x0099
_TI	=	0x0099
G$RB80$0$0 == 0x009a
_RB80	=	0x009a
G$TB80$0$0 == 0x009b
_TB80	=	0x009b
G$REN0$0$0 == 0x009c
_REN0	=	0x009c
G$REN$0$0 == 0x009c
_REN	=	0x009c
G$SM20$0$0 == 0x009d
_SM20	=	0x009d
G$SM10$0$0 == 0x009e
_SM10	=	0x009e
G$SM00$0$0 == 0x009f
_SM00	=	0x009f
G$RI1$0$0 == 0x0098
_RI1	=	0x0098
G$TI1$0$0 == 0x0099
_TI1	=	0x0099
G$RB81$0$0 == 0x009a
_RB81	=	0x009a
G$TB81$0$0 == 0x009b
_TB81	=	0x009b
G$REN1$0$0 == 0x009c
_REN1	=	0x009c
G$MCE1$0$0 == 0x009d
_MCE1	=	0x009d
G$S1MODE$0$0 == 0x009f
_S1MODE	=	0x009f
G$P2_0$0$0 == 0x00a0
_P2_0	=	0x00a0
G$P2_1$0$0 == 0x00a1
_P2_1	=	0x00a1
G$P2_2$0$0 == 0x00a2
_P2_2	=	0x00a2
G$P2_3$0$0 == 0x00a3
_P2_3	=	0x00a3
G$P2_4$0$0 == 0x00a4
_P2_4	=	0x00a4
G$P2_5$0$0 == 0x00a5
_P2_5	=	0x00a5
G$P2_6$0$0 == 0x00a6
_P2_6	=	0x00a6
G$P2_7$0$0 == 0x00a7
_P2_7	=	0x00a7
G$EX0$0$0 == 0x00a8
_EX0	=	0x00a8
G$ET0$0$0 == 0x00a9
_ET0	=	0x00a9
G$EX1$0$0 == 0x00aa
_EX1	=	0x00aa
G$ET1$0$0 == 0x00ab
_ET1	=	0x00ab
G$ES0$0$0 == 0x00ac
_ES0	=	0x00ac
G$ES$0$0 == 0x00ac
_ES	=	0x00ac
G$ET2$0$0 == 0x00ad
_ET2	=	0x00ad
G$EA$0$0 == 0x00af
_EA	=	0x00af
G$P3_0$0$0 == 0x00b0
_P3_0	=	0x00b0
G$P3_1$0$0 == 0x00b1
_P3_1	=	0x00b1
G$P3_2$0$0 == 0x00b2
_P3_2	=	0x00b2
G$P3_3$0$0 == 0x00b3
_P3_3	=	0x00b3
G$P3_4$0$0 == 0x00b4
_P3_4	=	0x00b4
G$P3_5$0$0 == 0x00b5
_P3_5	=	0x00b5
G$P3_6$0$0 == 0x00b6
_P3_6	=	0x00b6
G$P3_7$0$0 == 0x00b7
_P3_7	=	0x00b7
G$PX0$0$0 == 0x00b8
_PX0	=	0x00b8
G$PT0$0$0 == 0x00b9
_PT0	=	0x00b9
G$PX1$0$0 == 0x00ba
_PX1	=	0x00ba
G$PT1$0$0 == 0x00bb
_PT1	=	0x00bb
G$PS0$0$0 == 0x00bc
_PS0	=	0x00bc
G$PS$0$0 == 0x00bc
_PS	=	0x00bc
G$PT2$0$0 == 0x00bd
_PT2	=	0x00bd
G$SMBTOE$0$0 == 0x00c0
_SMBTOE	=	0x00c0
G$SMBFTE$0$0 == 0x00c1
_SMBFTE	=	0x00c1
G$AA$0$0 == 0x00c2
_AA	=	0x00c2
G$SI$0$0 == 0x00c3
_SI	=	0x00c3
G$STO$0$0 == 0x00c4
_STO	=	0x00c4
G$STA$0$0 == 0x00c5
_STA	=	0x00c5
G$ENSMB$0$0 == 0x00c6
_ENSMB	=	0x00c6
G$BUSY$0$0 == 0x00c7
_BUSY	=	0x00c7
G$MAC0N$0$0 == 0x00c0
_MAC0N	=	0x00c0
G$MAC0SO$0$0 == 0x00c1
_MAC0SO	=	0x00c1
G$MAC0Z$0$0 == 0x00c2
_MAC0Z	=	0x00c2
G$MAC0HO$0$0 == 0x00c3
_MAC0HO	=	0x00c3
G$CPRL2$0$0 == 0x00c8
_CPRL2	=	0x00c8
G$CT2$0$0 == 0x00c9
_CT2	=	0x00c9
G$TR2$0$0 == 0x00ca
_TR2	=	0x00ca
G$EXEN2$0$0 == 0x00cb
_EXEN2	=	0x00cb
G$EXF2$0$0 == 0x00ce
_EXF2	=	0x00ce
G$TF2$0$0 == 0x00cf
_TF2	=	0x00cf
G$CPRL3$0$0 == 0x00c8
_CPRL3	=	0x00c8
G$CT3$0$0 == 0x00c9
_CT3	=	0x00c9
G$TR3$0$0 == 0x00ca
_TR3	=	0x00ca
G$EXEN3$0$0 == 0x00cb
_EXEN3	=	0x00cb
G$EXF3$0$0 == 0x00ce
_EXF3	=	0x00ce
G$TF3$0$0 == 0x00cf
_TF3	=	0x00cf
G$CPRL4$0$0 == 0x00c8
_CPRL4	=	0x00c8
G$CT4$0$0 == 0x00c9
_CT4	=	0x00c9
G$TR4$0$0 == 0x00ca
_TR4	=	0x00ca
G$EXEN4$0$0 == 0x00cb
_EXEN4	=	0x00cb
G$EXF4$0$0 == 0x00ce
_EXF4	=	0x00ce
G$TF4$0$0 == 0x00cf
_TF4	=	0x00cf
G$P4_0$0$0 == 0x00c8
_P4_0	=	0x00c8
G$P4_1$0$0 == 0x00c9
_P4_1	=	0x00c9
G$P4_2$0$0 == 0x00ca
_P4_2	=	0x00ca
G$P4_3$0$0 == 0x00cb
_P4_3	=	0x00cb
G$P4_4$0$0 == 0x00cc
_P4_4	=	0x00cc
G$P4_5$0$0 == 0x00cd
_P4_5	=	0x00cd
G$P4_6$0$0 == 0x00ce
_P4_6	=	0x00ce
G$P4_7$0$0 == 0x00cf
_P4_7	=	0x00cf
G$P$0$0 == 0x00d0
_P	=	0x00d0
G$F1$0$0 == 0x00d1
_F1	=	0x00d1
G$OV$0$0 == 0x00d2
_OV	=	0x00d2
G$RS0$0$0 == 0x00d3
_RS0	=	0x00d3
G$RS1$0$0 == 0x00d4
_RS1	=	0x00d4
G$F0$0$0 == 0x00d5
_F0	=	0x00d5
G$AC$0$0 == 0x00d6
_AC	=	0x00d6
G$CY$0$0 == 0x00d7
_CY	=	0x00d7
G$CCF0$0$0 == 0x00d8
_CCF0	=	0x00d8
G$CCF1$0$0 == 0x00d9
_CCF1	=	0x00d9
G$CCF2$0$0 == 0x00da
_CCF2	=	0x00da
G$CCF3$0$0 == 0x00db
_CCF3	=	0x00db
G$CCF4$0$0 == 0x00dc
_CCF4	=	0x00dc
G$CCF5$0$0 == 0x00dd
_CCF5	=	0x00dd
G$CR$0$0 == 0x00de
_CR	=	0x00de
G$CF$0$0 == 0x00df
_CF	=	0x00df
G$P5_0$0$0 == 0x00d8
_P5_0	=	0x00d8
G$P5_1$0$0 == 0x00d9
_P5_1	=	0x00d9
G$P5_2$0$0 == 0x00da
_P5_2	=	0x00da
G$P5_3$0$0 == 0x00db
_P5_3	=	0x00db
G$P5_4$0$0 == 0x00dc
_P5_4	=	0x00dc
G$P5_5$0$0 == 0x00dd
_P5_5	=	0x00dd
G$P5_6$0$0 == 0x00de
_P5_6	=	0x00de
G$P5_7$0$0 == 0x00df
_P5_7	=	0x00df
G$AD0LJST$0$0 == 0x00e8
_AD0LJST	=	0x00e8
G$AD0WINT$0$0 == 0x00e9
_AD0WINT	=	0x00e9
G$AD0CM0$0$0 == 0x00ea
_AD0CM0	=	0x00ea
G$AD0CM1$0$0 == 0x00eb
_AD0CM1	=	0x00eb
G$AD0BUSY$0$0 == 0x00ec
_AD0BUSY	=	0x00ec
G$AD0INT$0$0 == 0x00ed
_AD0INT	=	0x00ed
G$AD0TM$0$0 == 0x00ee
_AD0TM	=	0x00ee
G$AD0EN$0$0 == 0x00ef
_AD0EN	=	0x00ef
G$AD2WINT$0$0 == 0x00e8
_AD2WINT	=	0x00e8
G$AD2CM0$0$0 == 0x00e9
_AD2CM0	=	0x00e9
G$AD2CM1$0$0 == 0x00ea
_AD2CM1	=	0x00ea
G$AD2CM2$0$0 == 0x00eb
_AD2CM2	=	0x00eb
G$AD2BUSY$0$0 == 0x00ec
_AD2BUSY	=	0x00ec
G$AD2INT$0$0 == 0x00ed
_AD2INT	=	0x00ed
G$AD2TM$0$0 == 0x00ee
_AD2TM	=	0x00ee
G$AD2EN$0$0 == 0x00ef
_AD2EN	=	0x00ef
G$P6_0$0$0 == 0x00e8
_P6_0	=	0x00e8
G$P6_1$0$0 == 0x00e9
_P6_1	=	0x00e9
G$P6_2$0$0 == 0x00ea
_P6_2	=	0x00ea
G$P6_3$0$0 == 0x00eb
_P6_3	=	0x00eb
G$P6_4$0$0 == 0x00ec
_P6_4	=	0x00ec
G$P6_5$0$0 == 0x00ed
_P6_5	=	0x00ed
G$P6_6$0$0 == 0x00ee
_P6_6	=	0x00ee
G$P6_7$0$0 == 0x00ef
_P6_7	=	0x00ef
G$SPIEN$0$0 == 0x00f8
_SPIEN	=	0x00f8
G$TXBMT$0$0 == 0x00f9
_TXBMT	=	0x00f9
G$NSSMD0$0$0 == 0x00fa
_NSSMD0	=	0x00fa
G$NSSMD1$0$0 == 0x00fb
_NSSMD1	=	0x00fb
G$RXOVRN$0$0 == 0x00fc
_RXOVRN	=	0x00fc
G$MODF$0$0 == 0x00fd
_MODF	=	0x00fd
G$WCOL$0$0 == 0x00fe
_WCOL	=	0x00fe
G$SPIF$0$0 == 0x00ff
_SPIF	=	0x00ff
G$P7_0$0$0 == 0x00f8
_P7_0	=	0x00f8
G$P7_1$0$0 == 0x00f9
_P7_1	=	0x00f9
G$P7_2$0$0 == 0x00fa
_P7_2	=	0x00fa
G$P7_3$0$0 == 0x00fb
_P7_3	=	0x00fb
G$P7_4$0$0 == 0x00fc
_P7_4	=	0x00fc
G$P7_5$0$0 == 0x00fd
_P7_5	=	0x00fd
G$P7_6$0$0 == 0x00fe
_P7_6	=	0x00fe
G$P7_7$0$0 == 0x00ff
_P7_7	=	0x00ff
G$PB$0$0 == 0x0090
_PB	=	0x0090
;--------------------------------------------------------
; overlayable register banks
;--------------------------------------------------------
	.area REG_BANK_0	(REL,OVR,DATA)
	.ds 8
;--------------------------------------------------------
; internal ram data
;--------------------------------------------------------
	.area DSEG    (DATA)
G$running$0$0==.
_running::
	.ds 4
G$min$0$0==.
_min::
	.ds 4
G$max$0$0==.
_max::
	.ds 4
G$trials$0$0==.
_trials::
	.ds 2
Lvoltmeter.score$volts$1$33==.
_score_volts_1_33:
	.ds 4
Lvoltmeter.score$sloc0$1$0==.
_score_sloc0_1_0:
	.ds 4
;--------------------------------------------------------
; overlayable items in internal ram 
;--------------------------------------------------------
	.area	OSEG    (OVR,DATA)
	.area	OSEG    (OVR,DATA)
	.area	OSEG    (OVR,DATA)
;--------------------------------------------------------
; Stack segment in internal ram 
;--------------------------------------------------------
	.area	SSEG
__start__stack:
	.ds	1

;--------------------------------------------------------
; indirectly addressable internal ram data
;--------------------------------------------------------
	.area ISEG    (DATA)
;--------------------------------------------------------
; absolute internal ram data
;--------------------------------------------------------
	.area IABS    (ABS,DATA)
	.area IABS    (ABS,DATA)
;--------------------------------------------------------
; bit data
;--------------------------------------------------------
	.area BSEG    (BIT)
;--------------------------------------------------------
; paged external ram data
;--------------------------------------------------------
	.area PSEG    (PAG,XDATA)
;--------------------------------------------------------
; external ram data
;--------------------------------------------------------
	.area XSEG    (XDATA)
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	.area XABS    (ABS,XDATA)
;--------------------------------------------------------
; external initialized ram data
;--------------------------------------------------------
	.area XISEG   (XDATA)
	.area HOME    (CODE)
	.area GSINIT0 (CODE)
	.area GSINIT1 (CODE)
	.area GSINIT2 (CODE)
	.area GSINIT3 (CODE)
	.area GSINIT4 (CODE)
	.area GSINIT5 (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area CSEG    (CODE)
;--------------------------------------------------------
; interrupt vector 
;--------------------------------------------------------
	.area HOME    (CODE)
__interrupt_vect:
	ljmp	__sdcc_gsinit_startup
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	.area HOME    (CODE)
	.area GSINIT  (CODE)
	.area GSFINAL (CODE)
	.area GSINIT  (CODE)
	.globl __sdcc_gsinit_startup
	.globl __sdcc_program_startup
	.globl __start__stack
	.globl __mcs51_genXINIT
	.globl __mcs51_genXRAMCLEAR
	.globl __mcs51_genRAMCLEAR
	C$voltmeter.c$19$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:19: float running = 0;
	clr	a
	mov	_running,a
	mov	(_running + 1),a
	mov	(_running + 2),a
	mov	(_running + 3),a
	C$voltmeter.c$20$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:20: float min = 100;
	mov	_min,a
	mov	(_min + 1),a
	mov	(_min + 2),#0xC8
	mov	(_min + 3),#0x42
	C$voltmeter.c$21$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:21: float max = 0;
	mov	_max,a
	mov	(_max + 1),a
	mov	(_max + 2),a
	mov	(_max + 3),a
	C$voltmeter.c$22$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:22: int trials = 1;
	mov	_trials,#0x01
;	1-genFromRTrack replaced	mov	(_trials + 1),#0x00
	mov	(_trials + 1),a
	.area GSFINAL (CODE)
	ljmp	__sdcc_program_startup
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	.area HOME    (CODE)
	.area HOME    (CODE)
__sdcc_program_startup:
	ljmp	_main
;	return from main will return to caller
;--------------------------------------------------------
; code
;--------------------------------------------------------
	.area CSEG    (CODE)
;------------------------------------------------------------
;Allocation info for local variables in function 'putchar'
;------------------------------------------------------------
;c                         Allocated to registers r7 
;------------------------------------------------------------
	G$putchar$0$0 ==.
	C$putget.h$18$0$0 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:18: void putchar(char c)
;	-----------------------------------------
;	 function putchar
;	-----------------------------------------
_putchar:
	ar7 = 0x07
	ar6 = 0x06
	ar5 = 0x05
	ar4 = 0x04
	ar3 = 0x03
	ar2 = 0x02
	ar1 = 0x01
	ar0 = 0x00
	mov	r7,dpl
	C$putget.h$20$1$16 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:20: while(!TI0); 
00101$:
	C$putget.h$21$1$16 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:21: TI0=0;
	jbc	_TI0,00112$
	sjmp	00101$
00112$:
	C$putget.h$22$1$16 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:22: SBUF0 = c;
	mov	_SBUF0,r7
	C$putget.h$23$1$16 ==.
	XG$putchar$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'getchar'
;------------------------------------------------------------
;c                         Allocated to registers 
;------------------------------------------------------------
	G$getchar$0$0 ==.
	C$putget.h$28$1$16 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:28: char getchar(void)
;	-----------------------------------------
;	 function getchar
;	-----------------------------------------
_getchar:
	C$putget.h$31$1$18 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:31: while(!RI0);
00101$:
	C$putget.h$32$1$18 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:32: RI0 =0;
	jbc	_RI0,00112$
	sjmp	00101$
00112$:
	C$putget.h$33$1$18 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:33: c = SBUF0;
	mov	a,_SBUF0
	C$putget.h$36$1$18 ==.
;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:36: return SBUF0;
	mov	dpl,_SBUF0
	C$putget.h$37$1$18 ==.
	XG$getchar$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'main'
;------------------------------------------------------------
	G$main$0$0 ==.
	C$voltmeter.c$35$1$18 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:35: void main (void)
;	-----------------------------------------
;	 function main
;	-----------------------------------------
_main:
	C$voltmeter.c$38$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:38: SFRPAGE = CONFIG_PAGE;
	mov	_SFRPAGE,#0x0F
	C$voltmeter.c$39$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:39: SYSCLK_INIT();
	lcall	_SYSCLK_INIT
	C$voltmeter.c$40$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:40: Port_IO_Init();
	lcall	_Port_IO_Init
	C$voltmeter.c$41$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:41: Timer_Init();
	lcall	_Timer_Init
	C$voltmeter.c$42$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:42: UART_Init();
	lcall	_UART_Init
	C$voltmeter.c$43$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:43: ADC_INIT();
	lcall	_ADC_INIT
	C$voltmeter.c$44$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:44: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
	mov	_SFRPAGE,#0x00
	C$voltmeter.c$45$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:45: printf("\033[2J");
	mov	a,#___str_0
	push	acc
	mov	a,#(___str_0 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
	C$voltmeter.c$46$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:46: printf("UART is working");
	mov	a,#___str_1
	push	acc
	mov	a,#(___str_1 >> 8)
	push	acc
	mov	a,#0x80
	push	acc
	lcall	_printf
	dec	sp
	dec	sp
	dec	sp
	C$voltmeter.c$47$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:47: while(1)
00104$:
	C$voltmeter.c$49$2$29 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:49: SFRPAGE = LEGACY_PAGE;
	mov	_SFRPAGE,#0x00
	C$voltmeter.c$50$2$29 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:50: if(!PB)
	jb	_PB,00104$
	C$voltmeter.c$52$3$30 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:52: score(ADC_read());
	lcall	_ADC_read
	lcall	_score
	sjmp	00104$
	C$voltmeter.c$57$1$28 ==.
	XG$main$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'ADC_read'
;------------------------------------------------------------
	G$ADC_read$0$0 ==.
	C$voltmeter.c$59$1$28 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:59: unsigned int ADC_read()
;	-----------------------------------------
;	 function ADC_read
;	-----------------------------------------
_ADC_read:
	C$voltmeter.c$61$1$31 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:61: AMX0SL = 0;//select pin
	mov	_AMX0SL,#0x00
	C$voltmeter.c$62$1$31 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:62: ADC0CN &= ~(0x20);// reset for reading
	mov	r7,_ADC0CN
	mov	a,#0xDF
	anl	a,r7
	mov	_ADC0CN,a
	C$voltmeter.c$63$1$31 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:63: ADC0CN |= 0x10;
	orl	_ADC0CN,#0x10
	C$voltmeter.c$64$1$31 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:64: while((ADC0CN & 0x20)==0); // wait for conversion to finish
00101$:
	mov	a,_ADC0CN
	jnb	acc.5,00101$
	C$voltmeter.c$65$1$31 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:65: return ADC0;
	mov	dpl,((_ADC0 >> 0) & 0xFF)
	mov	dph,((_ADC0 >> 8) & 0xFF)
	C$voltmeter.c$66$1$31 ==.
	XG$ADC_read$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'score'
;------------------------------------------------------------
;value                     Allocated to registers 
;volts                     Allocated with name '_score_volts_1_33'
;sloc0                     Allocated with name '_score_sloc0_1_0'
;------------------------------------------------------------
	G$score$0$0 ==.
	C$voltmeter.c$67$1$31 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:67: void score(unsigned int value)
;	-----------------------------------------
;	 function score
;	-----------------------------------------
_score:
	C$voltmeter.c$70$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:70: volts = value*.0000366;
	lcall	___uint2fs
	mov	r4,dpl
	mov	r5,dph
	mov	r6,b
	mov	r7,a
	push	ar7
	push	ar6
	push	ar5
	push	ar4
	push	ar4
	push	ar5
	push	ar6
	push	ar7
	mov	dptr,#0x82F3
	mov	b,#0x19
	mov	a,#0x38
	lcall	___fsmul
	mov	_score_volts_1_33,dpl
	mov	(_score_volts_1_33 + 1),dph
	mov	(_score_volts_1_33 + 2),b
	mov	(_score_volts_1_33 + 3),a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	C$voltmeter.c$71$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:71: printf_fast_f("Current Voltage is: %d7.6 , %X \n\r",volts,volts);
	push	_score_volts_1_33
	push	(_score_volts_1_33 + 1)
	push	(_score_volts_1_33 + 2)
	push	(_score_volts_1_33 + 3)
	push	_score_volts_1_33
	push	(_score_volts_1_33 + 1)
	push	(_score_volts_1_33 + 2)
	push	(_score_volts_1_33 + 3)
	mov	a,#___str_2
	push	acc
	mov	a,#(___str_2 >> 8)
	push	acc
	lcall	_printf_fast_f
	mov	a,sp
	add	a,#0xf6
	mov	sp,a
	C$voltmeter.c$72$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:72: running = (running*trials + value)/(trials+1);
	mov	dpl,_trials
	mov	dph,(_trials + 1)
	lcall	___sint2fs
	mov	r0,dpl
	mov	r1,dph
	mov	r2,b
	mov	r3,a
	push	ar0
	push	ar1
	push	ar2
	push	ar3
	mov	dpl,_running
	mov	dph,(_running + 1)
	mov	b,(_running + 2)
	mov	a,(_running + 3)
	lcall	___fsmul
	mov	r0,dpl
	mov	r1,dph
	mov	r2,b
	mov	r3,a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	pop	ar4
	pop	ar5
	pop	ar6
	pop	ar7
	push	ar4
	push	ar5
	push	ar6
	push	ar7
	mov	dpl,r0
	mov	dph,r1
	mov	b,r2
	mov	a,r3
	lcall	___fsadd
	mov	_score_sloc0_1_0,dpl
	mov	(_score_sloc0_1_0 + 1),dph
	mov	(_score_sloc0_1_0 + 2),b
	mov	(_score_sloc0_1_0 + 3),a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	mov	a,#0x01
	add	a,_trials
	mov	r2,a
	clr	a
	addc	a,(_trials + 1)
	mov	r3,a
	mov	dpl,r2
	mov	dph,r3
	push	ar3
	push	ar2
	lcall	___sint2fs
	mov	r0,dpl
	mov	r1,dph
	mov	r6,b
	mov	r7,a
	push	ar0
	push	ar1
	push	ar6
	push	ar7
	mov	dpl,_score_sloc0_1_0
	mov	dph,(_score_sloc0_1_0 + 1)
	mov	b,(_score_sloc0_1_0 + 2)
	mov	a,(_score_sloc0_1_0 + 3)
	lcall	___fsdiv
	mov	_running,dpl
	mov	(_running + 1),dph
	mov	(_running + 2),b
	mov	(_running + 3),a
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	pop	ar2
	pop	ar3
	C$voltmeter.c$73$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:73: trials ++;
	mov	_trials,r2
	mov	(_trials + 1),r3
	C$voltmeter.c$74$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:74: if(volts<min){min = volts;}
	push	_min
	push	(_min + 1)
	push	(_min + 2)
	push	(_min + 3)
	mov	dpl,_score_volts_1_33
	mov	dph,(_score_volts_1_33 + 1)
	mov	b,(_score_volts_1_33 + 2)
	mov	a,(_score_volts_1_33 + 3)
	lcall	___fslt
	mov	r7,dpl
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	mov	a,r7
	jz	00102$
	mov	_min,_score_volts_1_33
	mov	(_min + 1),(_score_volts_1_33 + 1)
	mov	(_min + 2),(_score_volts_1_33 + 2)
	mov	(_min + 3),(_score_volts_1_33 + 3)
00102$:
	C$voltmeter.c$75$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:75: if(volts>max){max = volts;}
	push	_max
	push	(_max + 1)
	push	(_max + 2)
	push	(_max + 3)
	mov	dpl,_score_volts_1_33
	mov	dph,(_score_volts_1_33 + 1)
	mov	b,(_score_volts_1_33 + 2)
	mov	a,(_score_volts_1_33 + 3)
	lcall	___fsgt
	mov	r7,dpl
	mov	a,sp
	add	a,#0xfc
	mov	sp,a
	mov	a,r7
	jz	00104$
	mov	_max,_score_volts_1_33
	mov	(_max + 1),(_score_volts_1_33 + 1)
	mov	(_max + 2),(_score_volts_1_33 + 2)
	mov	(_max + 3),(_score_volts_1_33 + 3)
00104$:
	C$voltmeter.c$76$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:76: printf_fast_f("The Running Average is: %d7.6 , %X \n\r",running, running);
	push	_running
	push	(_running + 1)
	push	(_running + 2)
	push	(_running + 3)
	push	_running
	push	(_running + 1)
	push	(_running + 2)
	push	(_running + 3)
	mov	a,#___str_3
	push	acc
	mov	a,#(___str_3 >> 8)
	push	acc
	lcall	_printf_fast_f
	mov	a,sp
	add	a,#0xf6
	mov	sp,a
	C$voltmeter.c$77$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:77: printf_fast_f("The Overall Minimum is: %d7.6 , %X \n\r",min,min);
	push	_min
	push	(_min + 1)
	push	(_min + 2)
	push	(_min + 3)
	push	_min
	push	(_min + 1)
	push	(_min + 2)
	push	(_min + 3)
	mov	a,#___str_4
	push	acc
	mov	a,#(___str_4 >> 8)
	push	acc
	lcall	_printf_fast_f
	mov	a,sp
	add	a,#0xf6
	mov	sp,a
	C$voltmeter.c$78$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:78: printf_fast_f("The Overall Maximum is: %d7.6 , %X \n\r",max,max);
	push	_max
	push	(_max + 1)
	push	(_max + 2)
	push	(_max + 3)
	push	_max
	push	(_max + 1)
	push	(_max + 2)
	push	(_max + 3)
	mov	a,#___str_5
	push	acc
	mov	a,#(___str_5 >> 8)
	push	acc
	lcall	_printf_fast_f
	mov	a,sp
	add	a,#0xf6
	mov	sp,a
	C$voltmeter.c$80$1$33 ==.
	XG$score$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'SYSCLK_INIT'
;------------------------------------------------------------
;j                         Allocated to registers 
;------------------------------------------------------------
	G$SYSCLK_INIT$0$0 ==.
	C$voltmeter.c$82$1$33 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:82: void SYSCLK_INIT()
;	-----------------------------------------
;	 function SYSCLK_INIT
;	-----------------------------------------
_SYSCLK_INIT:
	C$voltmeter.c$85$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:85: SFRPAGE = CONFIG_PAGE;
	mov	_SFRPAGE,#0x0F
	C$voltmeter.c$86$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:86: OSCXCN  = 0x67;             // Start external oscillator
	mov	_OSCXCN,#0x67
	C$voltmeter.c$87$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:87: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
	mov	r6,#0x00
	mov	r7,#0x01
00107$:
	dec	r6
	cjne	r6,#0xFF,00121$
	dec	r7
00121$:
	mov	a,r6
	orl	a,r7
	jnz	00107$
	C$voltmeter.c$88$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:88: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
00102$:
	mov	a,_OSCXCN
	jnb	acc.7,00102$
	C$voltmeter.c$89$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:89: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
	mov	_CLKSEL,#0x01
	C$voltmeter.c$90$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:90: OSCICN  = 0x00;             // Disable the internal oscillator.
	mov	_OSCICN,#0x00
	C$voltmeter.c$91$1$36 ==.
	XG$SYSCLK_INIT$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'Timer_Init'
;------------------------------------------------------------
	G$Timer_Init$0$0 ==.
	C$voltmeter.c$93$1$36 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:93: void Timer_Init()
;	-----------------------------------------
;	 function Timer_Init
;	-----------------------------------------
_Timer_Init:
	C$voltmeter.c$95$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:95: SFRPAGE   = TMR2_PAGE;
	mov	_SFRPAGE,#0x00
	C$voltmeter.c$96$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:96: TMR2CN    = 0x04;
	mov	_TMR2CN,#0x04
	C$voltmeter.c$97$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:97: TMR2CF    = 0x08;
	mov	_TMR2CF,#0x08
	C$voltmeter.c$98$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:98: TMR2H	  = 0xFF;
	mov	_TMR2H,#0xFF
	C$voltmeter.c$99$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:99: TMR2L 	  = 0x70;
	mov	_TMR2L,#0x70
	C$voltmeter.c$100$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:100: RCAP2L    = 0x70;
	mov	_RCAP2L,#0x70
	C$voltmeter.c$101$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:101: RCAP2H    = 0xFF;
	mov	_RCAP2H,#0xFF
	C$voltmeter.c$102$1$37 ==.
	XG$Timer_Init$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'UART_Init'
;------------------------------------------------------------
	G$UART_Init$0$0 ==.
	C$voltmeter.c$104$1$37 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:104: void UART_Init()
;	-----------------------------------------
;	 function UART_Init
;	-----------------------------------------
_UART_Init:
	C$voltmeter.c$106$1$38 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:106: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
	mov	_SFRPAGE,#0x00
	C$voltmeter.c$107$1$38 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:107: TR2		  = 1;//Start Timer 2
	setb	_TR2
	C$voltmeter.c$108$1$38 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:108: SCON0     = 0x50;
	mov	_SCON0,#0x50
	C$voltmeter.c$109$1$38 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:109: SSTA0   = 0x15;
	mov	_SSTA0,#0x15
	C$voltmeter.c$110$1$38 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:110: TI0		  = 1; // Indicate TX0 is ready
	setb	_TI0
	C$voltmeter.c$111$1$38 ==.
	XG$UART_Init$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'Port_IO_Init'
;------------------------------------------------------------
	G$Port_IO_Init$0$0 ==.
	C$voltmeter.c$113$1$38 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:113: void Port_IO_Init()
;	-----------------------------------------
;	 function Port_IO_Init
;	-----------------------------------------
_Port_IO_Init:
	C$voltmeter.c$115$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:115: SFRPAGE   = CONFIG_PAGE;
	mov	_SFRPAGE,#0x0F
	C$voltmeter.c$116$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:116: WDTCN   = 0xDE;             // Disable watchdog timer.
	mov	_WDTCN,#0xDE
	C$voltmeter.c$117$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:117: WDTCN   = 0xAD;
	mov	_WDTCN,#0xAD
	C$voltmeter.c$118$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:118: XBR0 = 0x04; // enable UART0
	mov	_XBR0,#0x04
	C$voltmeter.c$119$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:119: XBR2 = 0x40;//enable crossbar
	mov	_XBR2,#0x40
	C$voltmeter.c$121$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:121: P0MDOUT = 0x01;
	mov	_P0MDOUT,#0x01
	C$voltmeter.c$123$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:123: P0 = 0x02;
	mov	_P0,#0x02
	C$voltmeter.c$126$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:126: P1MDOUT = 0x00;
	mov	_P1MDOUT,#0x00
	C$voltmeter.c$127$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:127: P1 = 0x01; 
	mov	_P1,#0x01
	C$voltmeter.c$130$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:130: EA = 1; //enable global interrupts
	setb	_EA
	C$voltmeter.c$131$1$39 ==.
	XG$Port_IO_Init$0$0 ==.
	ret
;------------------------------------------------------------
;Allocation info for local variables in function 'ADC_INIT'
;------------------------------------------------------------
	G$ADC_INIT$0$0 ==.
	C$voltmeter.c$132$1$39 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:132: void ADC_INIT()
;	-----------------------------------------
;	 function ADC_INIT
;	-----------------------------------------
_ADC_INIT:
	C$voltmeter.c$134$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:134: SFRPAGE = ADC0_PAGE;
	mov	_SFRPAGE,#0x00
	C$voltmeter.c$135$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:135: REF0CN = 0x03;
	mov	_REF0CN,#0x03
	C$voltmeter.c$136$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:136: AMX0CF = 0x00;
	mov	_AMX0CF,#0x00
	C$voltmeter.c$137$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:137: ADC0CF = 0x40;
	mov	_ADC0CF,#0x40
	C$voltmeter.c$138$1$40 ==.
;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:138: ADC0CN = 0x80; // enable ADC conversion
	mov	_ADC0CN,#0x80
	C$voltmeter.c$139$1$40 ==.
	XG$ADC_INIT$0$0 ==.
	ret
	.area CSEG    (CODE)
	.area CONST   (CODE)
Fvoltmeter$__str_0$0$0 == .
___str_0:
	.db 0x1B
	.ascii "[2J"
	.db 0x00
Fvoltmeter$__str_1$0$0 == .
___str_1:
	.ascii "UART is working"
	.db 0x00
Fvoltmeter$__str_2$0$0 == .
___str_2:
	.ascii "Current Voltage is: %d7.6 , %X "
	.db 0x0A
	.db 0x0D
	.db 0x00
Fvoltmeter$__str_3$0$0 == .
___str_3:
	.ascii "The Running Average is: %d7.6 , %X "
	.db 0x0A
	.db 0x0D
	.db 0x00
Fvoltmeter$__str_4$0$0 == .
___str_4:
	.ascii "The Overall Minimum is: %d7.6 , %X "
	.db 0x0A
	.db 0x0D
	.db 0x00
Fvoltmeter$__str_5$0$0 == .
___str_5:
	.ascii "The Overall Maximum is: %d7.6 , %X "
	.db 0x0A
	.db 0x0D
	.db 0x00
	.area XINIT   (CODE)
	.area CABS    (ABS,CODE)