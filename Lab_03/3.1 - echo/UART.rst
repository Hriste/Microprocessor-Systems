                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Oct 06 19:58:22 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module UART
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _P7_7
                                     13 	.globl _P7_6
                                     14 	.globl _P7_5
                                     15 	.globl _P7_4
                                     16 	.globl _P7_3
                                     17 	.globl _P7_2
                                     18 	.globl _P7_1
                                     19 	.globl _P7_0
                                     20 	.globl _SPIF
                                     21 	.globl _WCOL
                                     22 	.globl _MODF
                                     23 	.globl _RXOVRN
                                     24 	.globl _NSSMD1
                                     25 	.globl _NSSMD0
                                     26 	.globl _TXBMT
                                     27 	.globl _SPIEN
                                     28 	.globl _P6_7
                                     29 	.globl _P6_6
                                     30 	.globl _P6_5
                                     31 	.globl _P6_4
                                     32 	.globl _P6_3
                                     33 	.globl _P6_2
                                     34 	.globl _P6_1
                                     35 	.globl _P6_0
                                     36 	.globl _AD2EN
                                     37 	.globl _AD2TM
                                     38 	.globl _AD2INT
                                     39 	.globl _AD2BUSY
                                     40 	.globl _AD2CM2
                                     41 	.globl _AD2CM1
                                     42 	.globl _AD2CM0
                                     43 	.globl _AD2WINT
                                     44 	.globl _AD0EN
                                     45 	.globl _AD0TM
                                     46 	.globl _AD0INT
                                     47 	.globl _AD0BUSY
                                     48 	.globl _AD0CM1
                                     49 	.globl _AD0CM0
                                     50 	.globl _AD0WINT
                                     51 	.globl _AD0LJST
                                     52 	.globl _P5_7
                                     53 	.globl _P5_6
                                     54 	.globl _P5_5
                                     55 	.globl _P5_4
                                     56 	.globl _P5_3
                                     57 	.globl _P5_2
                                     58 	.globl _P5_1
                                     59 	.globl _P5_0
                                     60 	.globl _CF
                                     61 	.globl _CR
                                     62 	.globl _CCF5
                                     63 	.globl _CCF4
                                     64 	.globl _CCF3
                                     65 	.globl _CCF2
                                     66 	.globl _CCF1
                                     67 	.globl _CCF0
                                     68 	.globl _CY
                                     69 	.globl _AC
                                     70 	.globl _F0
                                     71 	.globl _RS1
                                     72 	.globl _RS0
                                     73 	.globl _OV
                                     74 	.globl _F1
                                     75 	.globl _P
                                     76 	.globl _P4_7
                                     77 	.globl _P4_6
                                     78 	.globl _P4_5
                                     79 	.globl _P4_4
                                     80 	.globl _P4_3
                                     81 	.globl _P4_2
                                     82 	.globl _P4_1
                                     83 	.globl _P4_0
                                     84 	.globl _TF4
                                     85 	.globl _EXF4
                                     86 	.globl _EXEN4
                                     87 	.globl _TR4
                                     88 	.globl _CT4
                                     89 	.globl _CPRL4
                                     90 	.globl _TF3
                                     91 	.globl _EXF3
                                     92 	.globl _EXEN3
                                     93 	.globl _TR3
                                     94 	.globl _CT3
                                     95 	.globl _CPRL3
                                     96 	.globl _TF2
                                     97 	.globl _EXF2
                                     98 	.globl _EXEN2
                                     99 	.globl _TR2
                                    100 	.globl _CT2
                                    101 	.globl _CPRL2
                                    102 	.globl _MAC0HO
                                    103 	.globl _MAC0Z
                                    104 	.globl _MAC0SO
                                    105 	.globl _MAC0N
                                    106 	.globl _BUSY
                                    107 	.globl _ENSMB
                                    108 	.globl _STA
                                    109 	.globl _STO
                                    110 	.globl _SI
                                    111 	.globl _AA
                                    112 	.globl _SMBFTE
                                    113 	.globl _SMBTOE
                                    114 	.globl _PT2
                                    115 	.globl _PS
                                    116 	.globl _PS0
                                    117 	.globl _PT1
                                    118 	.globl _PX1
                                    119 	.globl _PT0
                                    120 	.globl _PX0
                                    121 	.globl _P3_7
                                    122 	.globl _P3_6
                                    123 	.globl _P3_5
                                    124 	.globl _P3_4
                                    125 	.globl _P3_3
                                    126 	.globl _P3_2
                                    127 	.globl _P3_1
                                    128 	.globl _P3_0
                                    129 	.globl _EA
                                    130 	.globl _ET2
                                    131 	.globl _ES
                                    132 	.globl _ES0
                                    133 	.globl _ET1
                                    134 	.globl _EX1
                                    135 	.globl _ET0
                                    136 	.globl _EX0
                                    137 	.globl _P2_7
                                    138 	.globl _P2_6
                                    139 	.globl _P2_5
                                    140 	.globl _P2_4
                                    141 	.globl _P2_3
                                    142 	.globl _P2_2
                                    143 	.globl _P2_1
                                    144 	.globl _P2_0
                                    145 	.globl _S1MODE
                                    146 	.globl _MCE1
                                    147 	.globl _REN1
                                    148 	.globl _TB81
                                    149 	.globl _RB81
                                    150 	.globl _TI1
                                    151 	.globl _RI1
                                    152 	.globl _SM00
                                    153 	.globl _SM10
                                    154 	.globl _SM20
                                    155 	.globl _REN
                                    156 	.globl _REN0
                                    157 	.globl _TB80
                                    158 	.globl _RB80
                                    159 	.globl _TI
                                    160 	.globl _TI0
                                    161 	.globl _RI
                                    162 	.globl _RI0
                                    163 	.globl _P1_7
                                    164 	.globl _P1_6
                                    165 	.globl _P1_5
                                    166 	.globl _P1_4
                                    167 	.globl _P1_3
                                    168 	.globl _P1_2
                                    169 	.globl _P1_1
                                    170 	.globl _P1_0
                                    171 	.globl _FLHBUSY
                                    172 	.globl _CP1EN
                                    173 	.globl _CP1OUT
                                    174 	.globl _CP1RIF
                                    175 	.globl _CP1FIF
                                    176 	.globl _CP1HYP1
                                    177 	.globl _CP1HYP0
                                    178 	.globl _CP1HYN1
                                    179 	.globl _CP1HYN0
                                    180 	.globl _CP0EN
                                    181 	.globl _CP0OUT
                                    182 	.globl _CP0RIF
                                    183 	.globl _CP0FIF
                                    184 	.globl _CP0HYP1
                                    185 	.globl _CP0HYP0
                                    186 	.globl _CP0HYN1
                                    187 	.globl _CP0HYN0
                                    188 	.globl _TF1
                                    189 	.globl _TR1
                                    190 	.globl _TF0
                                    191 	.globl _TR0
                                    192 	.globl _IE1
                                    193 	.globl _IT1
                                    194 	.globl _IE0
                                    195 	.globl _IT0
                                    196 	.globl _P0_7
                                    197 	.globl _P0_6
                                    198 	.globl _P0_5
                                    199 	.globl _P0_4
                                    200 	.globl _P0_3
                                    201 	.globl _P0_2
                                    202 	.globl _P0_1
                                    203 	.globl _P0_0
                                    204 	.globl _MAC0RND
                                    205 	.globl _MAC0ACC
                                    206 	.globl _MAC0A
                                    207 	.globl _RCAP4
                                    208 	.globl _TMR4
                                    209 	.globl _DAC1
                                    210 	.globl _RCAP3
                                    211 	.globl _TMR3
                                    212 	.globl _PCA0CP5
                                    213 	.globl _PCA0CP4
                                    214 	.globl _PCA0CP3
                                    215 	.globl _PCA0CP2
                                    216 	.globl _PCA0CP1
                                    217 	.globl _PCA0CP0
                                    218 	.globl _PCA0
                                    219 	.globl _DAC0
                                    220 	.globl _ADC0LT
                                    221 	.globl _ADC0GT
                                    222 	.globl _ADC0
                                    223 	.globl _RCAP2
                                    224 	.globl _TMR2
                                    225 	.globl _TMR1
                                    226 	.globl _TMR0
                                    227 	.globl _P7
                                    228 	.globl _P6
                                    229 	.globl _XBR2
                                    230 	.globl _XBR1
                                    231 	.globl _XBR0
                                    232 	.globl _P5
                                    233 	.globl _P4
                                    234 	.globl _FLACL
                                    235 	.globl _P1MDIN
                                    236 	.globl _P3MDOUT
                                    237 	.globl _P2MDOUT
                                    238 	.globl _P1MDOUT
                                    239 	.globl _P0MDOUT
                                    240 	.globl _CCH0LC
                                    241 	.globl _CCH0TN
                                    242 	.globl _CCH0CN
                                    243 	.globl _P7MDOUT
                                    244 	.globl _P6MDOUT
                                    245 	.globl _P5MDOUT
                                    246 	.globl _P4MDOUT
                                    247 	.globl _CCH0MA
                                    248 	.globl _CLKSEL
                                    249 	.globl _SFRPGCN
                                    250 	.globl _PLL0FLT
                                    251 	.globl _PLL0MUL
                                    252 	.globl _PLL0DIV
                                    253 	.globl _OSCXCN
                                    254 	.globl _OSCICL
                                    255 	.globl _OSCICN
                                    256 	.globl _PLL0CN
                                    257 	.globl _FLSTAT
                                    258 	.globl _MAC0RNDH
                                    259 	.globl _MAC0RNDL
                                    260 	.globl _MAC0CF
                                    261 	.globl _MAC0AH
                                    262 	.globl _MAC0AL
                                    263 	.globl _MAC0STA
                                    264 	.globl _MAC0OVR
                                    265 	.globl _MAC0ACC3
                                    266 	.globl _MAC0ACC2
                                    267 	.globl _MAC0ACC1
                                    268 	.globl _MAC0ACC0
                                    269 	.globl _MAC0BH
                                    270 	.globl _MAC0BL
                                    271 	.globl _ADC2CN
                                    272 	.globl _TMR4H
                                    273 	.globl _TMR4L
                                    274 	.globl _RCAP4H
                                    275 	.globl _RCAP4L
                                    276 	.globl _TMR4CF
                                    277 	.globl _TMR4CN
                                    278 	.globl _ADC2LT
                                    279 	.globl _ADC2GT
                                    280 	.globl _ADC2
                                    281 	.globl _ADC2CF
                                    282 	.globl _AMX2SL
                                    283 	.globl _AMX2CF
                                    284 	.globl _CPT1MD
                                    285 	.globl _CPT1CN
                                    286 	.globl _DAC1CN
                                    287 	.globl _DAC1H
                                    288 	.globl _DAC1L
                                    289 	.globl _TMR3H
                                    290 	.globl _TMR3L
                                    291 	.globl _RCAP3H
                                    292 	.globl _RCAP3L
                                    293 	.globl _TMR3CF
                                    294 	.globl _TMR3CN
                                    295 	.globl _SBUF1
                                    296 	.globl _SCON1
                                    297 	.globl _CPT0MD
                                    298 	.globl _CPT0CN
                                    299 	.globl _PCA0CPH1
                                    300 	.globl _PCA0CPL1
                                    301 	.globl _PCA0CPH0
                                    302 	.globl _PCA0CPL0
                                    303 	.globl _PCA0H
                                    304 	.globl _PCA0L
                                    305 	.globl _SPI0CN
                                    306 	.globl _RSTSRC
                                    307 	.globl _PCA0CPH4
                                    308 	.globl _PCA0CPL4
                                    309 	.globl _PCA0CPH3
                                    310 	.globl _PCA0CPL3
                                    311 	.globl _PCA0CPH2
                                    312 	.globl _PCA0CPL2
                                    313 	.globl _ADC0CN
                                    314 	.globl _PCA0CPH5
                                    315 	.globl _PCA0CPL5
                                    316 	.globl _PCA0CPM5
                                    317 	.globl _PCA0CPM4
                                    318 	.globl _PCA0CPM3
                                    319 	.globl _PCA0CPM2
                                    320 	.globl _PCA0CPM1
                                    321 	.globl _PCA0CPM0
                                    322 	.globl _PCA0MD
                                    323 	.globl _PCA0CN
                                    324 	.globl _DAC0CN
                                    325 	.globl _DAC0H
                                    326 	.globl _DAC0L
                                    327 	.globl _REF0CN
                                    328 	.globl _SMB0CR
                                    329 	.globl _TH2
                                    330 	.globl _TMR2H
                                    331 	.globl _TL2
                                    332 	.globl _TMR2L
                                    333 	.globl _RCAP2H
                                    334 	.globl _RCAP2L
                                    335 	.globl _TMR2CF
                                    336 	.globl _TMR2CN
                                    337 	.globl _ADC0LTH
                                    338 	.globl _ADC0LTL
                                    339 	.globl _ADC0GTH
                                    340 	.globl _ADC0GTL
                                    341 	.globl _SMB0ADR
                                    342 	.globl _SMB0DAT
                                    343 	.globl _SMB0STA
                                    344 	.globl _SMB0CN
                                    345 	.globl _ADC0H
                                    346 	.globl _ADC0L
                                    347 	.globl _ADC0CF
                                    348 	.globl _AMX0SL
                                    349 	.globl _AMX0CF
                                    350 	.globl _SADEN0
                                    351 	.globl _FLSCL
                                    352 	.globl _SADDR0
                                    353 	.globl _EMI0CF
                                    354 	.globl __XPAGE
                                    355 	.globl _EMI0CN
                                    356 	.globl _EMI0TC
                                    357 	.globl _SPI0CKR
                                    358 	.globl _SPI0DAT
                                    359 	.globl _SPI0CFG
                                    360 	.globl _SBUF
                                    361 	.globl _SBUF0
                                    362 	.globl _SCON
                                    363 	.globl _SCON0
                                    364 	.globl _SSTA0
                                    365 	.globl _PSCTL
                                    366 	.globl _CKCON
                                    367 	.globl _TH1
                                    368 	.globl _TH0
                                    369 	.globl _TL1
                                    370 	.globl _TL0
                                    371 	.globl _TMOD
                                    372 	.globl _TCON
                                    373 	.globl _WDTCN
                                    374 	.globl _EIP2
                                    375 	.globl _EIP1
                                    376 	.globl _B
                                    377 	.globl _EIE2
                                    378 	.globl _EIE1
                                    379 	.globl _ACC
                                    380 	.globl _PSW
                                    381 	.globl _IP
                                    382 	.globl _PSBANK
                                    383 	.globl _P3
                                    384 	.globl _IE
                                    385 	.globl _P2
                                    386 	.globl _P1
                                    387 	.globl _PCON
                                    388 	.globl _SFRLAST
                                    389 	.globl _SFRNEXT
                                    390 	.globl _SFRPAGE
                                    391 	.globl _DPH
                                    392 	.globl _DPL
                                    393 	.globl _SP
                                    394 	.globl _P0
                                    395 	.globl _putchar
                                    396 	.globl _getchar
                                    397 	.globl _main
                                    398 	.globl _echo
                                    399 	.globl _SYSCLK_INIT
                                    400 	.globl _Timer_Init
                                    401 	.globl _UART_Init
                                    402 	.globl _Port_IO_Init
                                    403 ;--------------------------------------------------------
                                    404 ; special function registers
                                    405 ;--------------------------------------------------------
                                    406 	.area RSEG    (ABS,DATA)
      000000                        407 	.org 0x0000
                           000080   408 G$P0$0$0 == 0x0080
                           000080   409 _P0	=	0x0080
                           000081   410 G$SP$0$0 == 0x0081
                           000081   411 _SP	=	0x0081
                           000082   412 G$DPL$0$0 == 0x0082
                           000082   413 _DPL	=	0x0082
                           000083   414 G$DPH$0$0 == 0x0083
                           000083   415 _DPH	=	0x0083
                           000084   416 G$SFRPAGE$0$0 == 0x0084
                           000084   417 _SFRPAGE	=	0x0084
                           000085   418 G$SFRNEXT$0$0 == 0x0085
                           000085   419 _SFRNEXT	=	0x0085
                           000086   420 G$SFRLAST$0$0 == 0x0086
                           000086   421 _SFRLAST	=	0x0086
                           000087   422 G$PCON$0$0 == 0x0087
                           000087   423 _PCON	=	0x0087
                           000090   424 G$P1$0$0 == 0x0090
                           000090   425 _P1	=	0x0090
                           0000A0   426 G$P2$0$0 == 0x00a0
                           0000A0   427 _P2	=	0x00a0
                           0000A8   428 G$IE$0$0 == 0x00a8
                           0000A8   429 _IE	=	0x00a8
                           0000B0   430 G$P3$0$0 == 0x00b0
                           0000B0   431 _P3	=	0x00b0
                           0000B1   432 G$PSBANK$0$0 == 0x00b1
                           0000B1   433 _PSBANK	=	0x00b1
                           0000B8   434 G$IP$0$0 == 0x00b8
                           0000B8   435 _IP	=	0x00b8
                           0000D0   436 G$PSW$0$0 == 0x00d0
                           0000D0   437 _PSW	=	0x00d0
                           0000E0   438 G$ACC$0$0 == 0x00e0
                           0000E0   439 _ACC	=	0x00e0
                           0000E6   440 G$EIE1$0$0 == 0x00e6
                           0000E6   441 _EIE1	=	0x00e6
                           0000E7   442 G$EIE2$0$0 == 0x00e7
                           0000E7   443 _EIE2	=	0x00e7
                           0000F0   444 G$B$0$0 == 0x00f0
                           0000F0   445 _B	=	0x00f0
                           0000F6   446 G$EIP1$0$0 == 0x00f6
                           0000F6   447 _EIP1	=	0x00f6
                           0000F7   448 G$EIP2$0$0 == 0x00f7
                           0000F7   449 _EIP2	=	0x00f7
                           0000FF   450 G$WDTCN$0$0 == 0x00ff
                           0000FF   451 _WDTCN	=	0x00ff
                           000088   452 G$TCON$0$0 == 0x0088
                           000088   453 _TCON	=	0x0088
                           000089   454 G$TMOD$0$0 == 0x0089
                           000089   455 _TMOD	=	0x0089
                           00008A   456 G$TL0$0$0 == 0x008a
                           00008A   457 _TL0	=	0x008a
                           00008B   458 G$TL1$0$0 == 0x008b
                           00008B   459 _TL1	=	0x008b
                           00008C   460 G$TH0$0$0 == 0x008c
                           00008C   461 _TH0	=	0x008c
                           00008D   462 G$TH1$0$0 == 0x008d
                           00008D   463 _TH1	=	0x008d
                           00008E   464 G$CKCON$0$0 == 0x008e
                           00008E   465 _CKCON	=	0x008e
                           00008F   466 G$PSCTL$0$0 == 0x008f
                           00008F   467 _PSCTL	=	0x008f
                           000091   468 G$SSTA0$0$0 == 0x0091
                           000091   469 _SSTA0	=	0x0091
                           000098   470 G$SCON0$0$0 == 0x0098
                           000098   471 _SCON0	=	0x0098
                           000098   472 G$SCON$0$0 == 0x0098
                           000098   473 _SCON	=	0x0098
                           000099   474 G$SBUF0$0$0 == 0x0099
                           000099   475 _SBUF0	=	0x0099
                           000099   476 G$SBUF$0$0 == 0x0099
                           000099   477 _SBUF	=	0x0099
                           00009A   478 G$SPI0CFG$0$0 == 0x009a
                           00009A   479 _SPI0CFG	=	0x009a
                           00009B   480 G$SPI0DAT$0$0 == 0x009b
                           00009B   481 _SPI0DAT	=	0x009b
                           00009D   482 G$SPI0CKR$0$0 == 0x009d
                           00009D   483 _SPI0CKR	=	0x009d
                           0000A1   484 G$EMI0TC$0$0 == 0x00a1
                           0000A1   485 _EMI0TC	=	0x00a1
                           0000A2   486 G$EMI0CN$0$0 == 0x00a2
                           0000A2   487 _EMI0CN	=	0x00a2
                           0000A2   488 G$_XPAGE$0$0 == 0x00a2
                           0000A2   489 __XPAGE	=	0x00a2
                           0000A3   490 G$EMI0CF$0$0 == 0x00a3
                           0000A3   491 _EMI0CF	=	0x00a3
                           0000A9   492 G$SADDR0$0$0 == 0x00a9
                           0000A9   493 _SADDR0	=	0x00a9
                           0000B7   494 G$FLSCL$0$0 == 0x00b7
                           0000B7   495 _FLSCL	=	0x00b7
                           0000B9   496 G$SADEN0$0$0 == 0x00b9
                           0000B9   497 _SADEN0	=	0x00b9
                           0000BA   498 G$AMX0CF$0$0 == 0x00ba
                           0000BA   499 _AMX0CF	=	0x00ba
                           0000BB   500 G$AMX0SL$0$0 == 0x00bb
                           0000BB   501 _AMX0SL	=	0x00bb
                           0000BC   502 G$ADC0CF$0$0 == 0x00bc
                           0000BC   503 _ADC0CF	=	0x00bc
                           0000BE   504 G$ADC0L$0$0 == 0x00be
                           0000BE   505 _ADC0L	=	0x00be
                           0000BF   506 G$ADC0H$0$0 == 0x00bf
                           0000BF   507 _ADC0H	=	0x00bf
                           0000C0   508 G$SMB0CN$0$0 == 0x00c0
                           0000C0   509 _SMB0CN	=	0x00c0
                           0000C1   510 G$SMB0STA$0$0 == 0x00c1
                           0000C1   511 _SMB0STA	=	0x00c1
                           0000C2   512 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   513 _SMB0DAT	=	0x00c2
                           0000C3   514 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   515 _SMB0ADR	=	0x00c3
                           0000C4   516 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   517 _ADC0GTL	=	0x00c4
                           0000C5   518 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   519 _ADC0GTH	=	0x00c5
                           0000C6   520 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   521 _ADC0LTL	=	0x00c6
                           0000C7   522 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   523 _ADC0LTH	=	0x00c7
                           0000C8   524 G$TMR2CN$0$0 == 0x00c8
                           0000C8   525 _TMR2CN	=	0x00c8
                           0000C9   526 G$TMR2CF$0$0 == 0x00c9
                           0000C9   527 _TMR2CF	=	0x00c9
                           0000CA   528 G$RCAP2L$0$0 == 0x00ca
                           0000CA   529 _RCAP2L	=	0x00ca
                           0000CB   530 G$RCAP2H$0$0 == 0x00cb
                           0000CB   531 _RCAP2H	=	0x00cb
                           0000CC   532 G$TMR2L$0$0 == 0x00cc
                           0000CC   533 _TMR2L	=	0x00cc
                           0000CC   534 G$TL2$0$0 == 0x00cc
                           0000CC   535 _TL2	=	0x00cc
                           0000CD   536 G$TMR2H$0$0 == 0x00cd
                           0000CD   537 _TMR2H	=	0x00cd
                           0000CD   538 G$TH2$0$0 == 0x00cd
                           0000CD   539 _TH2	=	0x00cd
                           0000CF   540 G$SMB0CR$0$0 == 0x00cf
                           0000CF   541 _SMB0CR	=	0x00cf
                           0000D1   542 G$REF0CN$0$0 == 0x00d1
                           0000D1   543 _REF0CN	=	0x00d1
                           0000D2   544 G$DAC0L$0$0 == 0x00d2
                           0000D2   545 _DAC0L	=	0x00d2
                           0000D3   546 G$DAC0H$0$0 == 0x00d3
                           0000D3   547 _DAC0H	=	0x00d3
                           0000D4   548 G$DAC0CN$0$0 == 0x00d4
                           0000D4   549 _DAC0CN	=	0x00d4
                           0000D8   550 G$PCA0CN$0$0 == 0x00d8
                           0000D8   551 _PCA0CN	=	0x00d8
                           0000D9   552 G$PCA0MD$0$0 == 0x00d9
                           0000D9   553 _PCA0MD	=	0x00d9
                           0000DA   554 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   555 _PCA0CPM0	=	0x00da
                           0000DB   556 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   557 _PCA0CPM1	=	0x00db
                           0000DC   558 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   559 _PCA0CPM2	=	0x00dc
                           0000DD   560 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   561 _PCA0CPM3	=	0x00dd
                           0000DE   562 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   563 _PCA0CPM4	=	0x00de
                           0000DF   564 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   565 _PCA0CPM5	=	0x00df
                           0000E1   566 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   567 _PCA0CPL5	=	0x00e1
                           0000E2   568 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   569 _PCA0CPH5	=	0x00e2
                           0000E8   570 G$ADC0CN$0$0 == 0x00e8
                           0000E8   571 _ADC0CN	=	0x00e8
                           0000E9   572 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   573 _PCA0CPL2	=	0x00e9
                           0000EA   574 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   575 _PCA0CPH2	=	0x00ea
                           0000EB   576 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   577 _PCA0CPL3	=	0x00eb
                           0000EC   578 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   579 _PCA0CPH3	=	0x00ec
                           0000ED   580 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   581 _PCA0CPL4	=	0x00ed
                           0000EE   582 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   583 _PCA0CPH4	=	0x00ee
                           0000EF   584 G$RSTSRC$0$0 == 0x00ef
                           0000EF   585 _RSTSRC	=	0x00ef
                           0000F8   586 G$SPI0CN$0$0 == 0x00f8
                           0000F8   587 _SPI0CN	=	0x00f8
                           0000F9   588 G$PCA0L$0$0 == 0x00f9
                           0000F9   589 _PCA0L	=	0x00f9
                           0000FA   590 G$PCA0H$0$0 == 0x00fa
                           0000FA   591 _PCA0H	=	0x00fa
                           0000FB   592 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   593 _PCA0CPL0	=	0x00fb
                           0000FC   594 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   595 _PCA0CPH0	=	0x00fc
                           0000FD   596 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   597 _PCA0CPL1	=	0x00fd
                           0000FE   598 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   599 _PCA0CPH1	=	0x00fe
                           000088   600 G$CPT0CN$0$0 == 0x0088
                           000088   601 _CPT0CN	=	0x0088
                           000089   602 G$CPT0MD$0$0 == 0x0089
                           000089   603 _CPT0MD	=	0x0089
                           000098   604 G$SCON1$0$0 == 0x0098
                           000098   605 _SCON1	=	0x0098
                           000099   606 G$SBUF1$0$0 == 0x0099
                           000099   607 _SBUF1	=	0x0099
                           0000C8   608 G$TMR3CN$0$0 == 0x00c8
                           0000C8   609 _TMR3CN	=	0x00c8
                           0000C9   610 G$TMR3CF$0$0 == 0x00c9
                           0000C9   611 _TMR3CF	=	0x00c9
                           0000CA   612 G$RCAP3L$0$0 == 0x00ca
                           0000CA   613 _RCAP3L	=	0x00ca
                           0000CB   614 G$RCAP3H$0$0 == 0x00cb
                           0000CB   615 _RCAP3H	=	0x00cb
                           0000CC   616 G$TMR3L$0$0 == 0x00cc
                           0000CC   617 _TMR3L	=	0x00cc
                           0000CD   618 G$TMR3H$0$0 == 0x00cd
                           0000CD   619 _TMR3H	=	0x00cd
                           0000D2   620 G$DAC1L$0$0 == 0x00d2
                           0000D2   621 _DAC1L	=	0x00d2
                           0000D3   622 G$DAC1H$0$0 == 0x00d3
                           0000D3   623 _DAC1H	=	0x00d3
                           0000D4   624 G$DAC1CN$0$0 == 0x00d4
                           0000D4   625 _DAC1CN	=	0x00d4
                           000088   626 G$CPT1CN$0$0 == 0x0088
                           000088   627 _CPT1CN	=	0x0088
                           000089   628 G$CPT1MD$0$0 == 0x0089
                           000089   629 _CPT1MD	=	0x0089
                           0000BA   630 G$AMX2CF$0$0 == 0x00ba
                           0000BA   631 _AMX2CF	=	0x00ba
                           0000BB   632 G$AMX2SL$0$0 == 0x00bb
                           0000BB   633 _AMX2SL	=	0x00bb
                           0000BC   634 G$ADC2CF$0$0 == 0x00bc
                           0000BC   635 _ADC2CF	=	0x00bc
                           0000BE   636 G$ADC2$0$0 == 0x00be
                           0000BE   637 _ADC2	=	0x00be
                           0000C4   638 G$ADC2GT$0$0 == 0x00c4
                           0000C4   639 _ADC2GT	=	0x00c4
                           0000C6   640 G$ADC2LT$0$0 == 0x00c6
                           0000C6   641 _ADC2LT	=	0x00c6
                           0000C8   642 G$TMR4CN$0$0 == 0x00c8
                           0000C8   643 _TMR4CN	=	0x00c8
                           0000C9   644 G$TMR4CF$0$0 == 0x00c9
                           0000C9   645 _TMR4CF	=	0x00c9
                           0000CA   646 G$RCAP4L$0$0 == 0x00ca
                           0000CA   647 _RCAP4L	=	0x00ca
                           0000CB   648 G$RCAP4H$0$0 == 0x00cb
                           0000CB   649 _RCAP4H	=	0x00cb
                           0000CC   650 G$TMR4L$0$0 == 0x00cc
                           0000CC   651 _TMR4L	=	0x00cc
                           0000CD   652 G$TMR4H$0$0 == 0x00cd
                           0000CD   653 _TMR4H	=	0x00cd
                           0000E8   654 G$ADC2CN$0$0 == 0x00e8
                           0000E8   655 _ADC2CN	=	0x00e8
                           000091   656 G$MAC0BL$0$0 == 0x0091
                           000091   657 _MAC0BL	=	0x0091
                           000092   658 G$MAC0BH$0$0 == 0x0092
                           000092   659 _MAC0BH	=	0x0092
                           000093   660 G$MAC0ACC0$0$0 == 0x0093
                           000093   661 _MAC0ACC0	=	0x0093
                           000094   662 G$MAC0ACC1$0$0 == 0x0094
                           000094   663 _MAC0ACC1	=	0x0094
                           000095   664 G$MAC0ACC2$0$0 == 0x0095
                           000095   665 _MAC0ACC2	=	0x0095
                           000096   666 G$MAC0ACC3$0$0 == 0x0096
                           000096   667 _MAC0ACC3	=	0x0096
                           000097   668 G$MAC0OVR$0$0 == 0x0097
                           000097   669 _MAC0OVR	=	0x0097
                           0000C0   670 G$MAC0STA$0$0 == 0x00c0
                           0000C0   671 _MAC0STA	=	0x00c0
                           0000C1   672 G$MAC0AL$0$0 == 0x00c1
                           0000C1   673 _MAC0AL	=	0x00c1
                           0000C2   674 G$MAC0AH$0$0 == 0x00c2
                           0000C2   675 _MAC0AH	=	0x00c2
                           0000C3   676 G$MAC0CF$0$0 == 0x00c3
                           0000C3   677 _MAC0CF	=	0x00c3
                           0000CE   678 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   679 _MAC0RNDL	=	0x00ce
                           0000CF   680 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   681 _MAC0RNDH	=	0x00cf
                           000088   682 G$FLSTAT$0$0 == 0x0088
                           000088   683 _FLSTAT	=	0x0088
                           000089   684 G$PLL0CN$0$0 == 0x0089
                           000089   685 _PLL0CN	=	0x0089
                           00008A   686 G$OSCICN$0$0 == 0x008a
                           00008A   687 _OSCICN	=	0x008a
                           00008B   688 G$OSCICL$0$0 == 0x008b
                           00008B   689 _OSCICL	=	0x008b
                           00008C   690 G$OSCXCN$0$0 == 0x008c
                           00008C   691 _OSCXCN	=	0x008c
                           00008D   692 G$PLL0DIV$0$0 == 0x008d
                           00008D   693 _PLL0DIV	=	0x008d
                           00008E   694 G$PLL0MUL$0$0 == 0x008e
                           00008E   695 _PLL0MUL	=	0x008e
                           00008F   696 G$PLL0FLT$0$0 == 0x008f
                           00008F   697 _PLL0FLT	=	0x008f
                           000096   698 G$SFRPGCN$0$0 == 0x0096
                           000096   699 _SFRPGCN	=	0x0096
                           000097   700 G$CLKSEL$0$0 == 0x0097
                           000097   701 _CLKSEL	=	0x0097
                           00009A   702 G$CCH0MA$0$0 == 0x009a
                           00009A   703 _CCH0MA	=	0x009a
                           00009C   704 G$P4MDOUT$0$0 == 0x009c
                           00009C   705 _P4MDOUT	=	0x009c
                           00009D   706 G$P5MDOUT$0$0 == 0x009d
                           00009D   707 _P5MDOUT	=	0x009d
                           00009E   708 G$P6MDOUT$0$0 == 0x009e
                           00009E   709 _P6MDOUT	=	0x009e
                           00009F   710 G$P7MDOUT$0$0 == 0x009f
                           00009F   711 _P7MDOUT	=	0x009f
                           0000A1   712 G$CCH0CN$0$0 == 0x00a1
                           0000A1   713 _CCH0CN	=	0x00a1
                           0000A2   714 G$CCH0TN$0$0 == 0x00a2
                           0000A2   715 _CCH0TN	=	0x00a2
                           0000A3   716 G$CCH0LC$0$0 == 0x00a3
                           0000A3   717 _CCH0LC	=	0x00a3
                           0000A4   718 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   719 _P0MDOUT	=	0x00a4
                           0000A5   720 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   721 _P1MDOUT	=	0x00a5
                           0000A6   722 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   723 _P2MDOUT	=	0x00a6
                           0000A7   724 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   725 _P3MDOUT	=	0x00a7
                           0000AD   726 G$P1MDIN$0$0 == 0x00ad
                           0000AD   727 _P1MDIN	=	0x00ad
                           0000B7   728 G$FLACL$0$0 == 0x00b7
                           0000B7   729 _FLACL	=	0x00b7
                           0000C8   730 G$P4$0$0 == 0x00c8
                           0000C8   731 _P4	=	0x00c8
                           0000D8   732 G$P5$0$0 == 0x00d8
                           0000D8   733 _P5	=	0x00d8
                           0000E1   734 G$XBR0$0$0 == 0x00e1
                           0000E1   735 _XBR0	=	0x00e1
                           0000E2   736 G$XBR1$0$0 == 0x00e2
                           0000E2   737 _XBR1	=	0x00e2
                           0000E3   738 G$XBR2$0$0 == 0x00e3
                           0000E3   739 _XBR2	=	0x00e3
                           0000E8   740 G$P6$0$0 == 0x00e8
                           0000E8   741 _P6	=	0x00e8
                           0000F8   742 G$P7$0$0 == 0x00f8
                           0000F8   743 _P7	=	0x00f8
                           008C8A   744 G$TMR0$0$0 == 0x8c8a
                           008C8A   745 _TMR0	=	0x8c8a
                           008D8B   746 G$TMR1$0$0 == 0x8d8b
                           008D8B   747 _TMR1	=	0x8d8b
                           00CDCC   748 G$TMR2$0$0 == 0xcdcc
                           00CDCC   749 _TMR2	=	0xcdcc
                           00CBCA   750 G$RCAP2$0$0 == 0xcbca
                           00CBCA   751 _RCAP2	=	0xcbca
                           00BFBE   752 G$ADC0$0$0 == 0xbfbe
                           00BFBE   753 _ADC0	=	0xbfbe
                           00C5C4   754 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   755 _ADC0GT	=	0xc5c4
                           00C7C6   756 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   757 _ADC0LT	=	0xc7c6
                           00D3D2   758 G$DAC0$0$0 == 0xd3d2
                           00D3D2   759 _DAC0	=	0xd3d2
                           00FAF9   760 G$PCA0$0$0 == 0xfaf9
                           00FAF9   761 _PCA0	=	0xfaf9
                           00FCFB   762 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   763 _PCA0CP0	=	0xfcfb
                           00FEFD   764 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   765 _PCA0CP1	=	0xfefd
                           00EAE9   766 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   767 _PCA0CP2	=	0xeae9
                           00ECEB   768 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   769 _PCA0CP3	=	0xeceb
                           00EEED   770 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   771 _PCA0CP4	=	0xeeed
                           00E2E1   772 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   773 _PCA0CP5	=	0xe2e1
                           00CDCC   774 G$TMR3$0$0 == 0xcdcc
                           00CDCC   775 _TMR3	=	0xcdcc
                           00CBCA   776 G$RCAP3$0$0 == 0xcbca
                           00CBCA   777 _RCAP3	=	0xcbca
                           00D3D2   778 G$DAC1$0$0 == 0xd3d2
                           00D3D2   779 _DAC1	=	0xd3d2
                           00CDCC   780 G$TMR4$0$0 == 0xcdcc
                           00CDCC   781 _TMR4	=	0xcdcc
                           00CBCA   782 G$RCAP4$0$0 == 0xcbca
                           00CBCA   783 _RCAP4	=	0xcbca
                           00C2C1   784 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   785 _MAC0A	=	0xc2c1
                           96959493   786 G$MAC0ACC$0$0 == 0x96959493
                           96959493   787 _MAC0ACC	=	0x96959493
                           00CFCE   788 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   789 _MAC0RND	=	0xcfce
                                    790 ;--------------------------------------------------------
                                    791 ; special function bits
                                    792 ;--------------------------------------------------------
                                    793 	.area RSEG    (ABS,DATA)
      000000                        794 	.org 0x0000
                           000080   795 G$P0_0$0$0 == 0x0080
                           000080   796 _P0_0	=	0x0080
                           000081   797 G$P0_1$0$0 == 0x0081
                           000081   798 _P0_1	=	0x0081
                           000082   799 G$P0_2$0$0 == 0x0082
                           000082   800 _P0_2	=	0x0082
                           000083   801 G$P0_3$0$0 == 0x0083
                           000083   802 _P0_3	=	0x0083
                           000084   803 G$P0_4$0$0 == 0x0084
                           000084   804 _P0_4	=	0x0084
                           000085   805 G$P0_5$0$0 == 0x0085
                           000085   806 _P0_5	=	0x0085
                           000086   807 G$P0_6$0$0 == 0x0086
                           000086   808 _P0_6	=	0x0086
                           000087   809 G$P0_7$0$0 == 0x0087
                           000087   810 _P0_7	=	0x0087
                           000088   811 G$IT0$0$0 == 0x0088
                           000088   812 _IT0	=	0x0088
                           000089   813 G$IE0$0$0 == 0x0089
                           000089   814 _IE0	=	0x0089
                           00008A   815 G$IT1$0$0 == 0x008a
                           00008A   816 _IT1	=	0x008a
                           00008B   817 G$IE1$0$0 == 0x008b
                           00008B   818 _IE1	=	0x008b
                           00008C   819 G$TR0$0$0 == 0x008c
                           00008C   820 _TR0	=	0x008c
                           00008D   821 G$TF0$0$0 == 0x008d
                           00008D   822 _TF0	=	0x008d
                           00008E   823 G$TR1$0$0 == 0x008e
                           00008E   824 _TR1	=	0x008e
                           00008F   825 G$TF1$0$0 == 0x008f
                           00008F   826 _TF1	=	0x008f
                           000088   827 G$CP0HYN0$0$0 == 0x0088
                           000088   828 _CP0HYN0	=	0x0088
                           000089   829 G$CP0HYN1$0$0 == 0x0089
                           000089   830 _CP0HYN1	=	0x0089
                           00008A   831 G$CP0HYP0$0$0 == 0x008a
                           00008A   832 _CP0HYP0	=	0x008a
                           00008B   833 G$CP0HYP1$0$0 == 0x008b
                           00008B   834 _CP0HYP1	=	0x008b
                           00008C   835 G$CP0FIF$0$0 == 0x008c
                           00008C   836 _CP0FIF	=	0x008c
                           00008D   837 G$CP0RIF$0$0 == 0x008d
                           00008D   838 _CP0RIF	=	0x008d
                           00008E   839 G$CP0OUT$0$0 == 0x008e
                           00008E   840 _CP0OUT	=	0x008e
                           00008F   841 G$CP0EN$0$0 == 0x008f
                           00008F   842 _CP0EN	=	0x008f
                           000088   843 G$CP1HYN0$0$0 == 0x0088
                           000088   844 _CP1HYN0	=	0x0088
                           000089   845 G$CP1HYN1$0$0 == 0x0089
                           000089   846 _CP1HYN1	=	0x0089
                           00008A   847 G$CP1HYP0$0$0 == 0x008a
                           00008A   848 _CP1HYP0	=	0x008a
                           00008B   849 G$CP1HYP1$0$0 == 0x008b
                           00008B   850 _CP1HYP1	=	0x008b
                           00008C   851 G$CP1FIF$0$0 == 0x008c
                           00008C   852 _CP1FIF	=	0x008c
                           00008D   853 G$CP1RIF$0$0 == 0x008d
                           00008D   854 _CP1RIF	=	0x008d
                           00008E   855 G$CP1OUT$0$0 == 0x008e
                           00008E   856 _CP1OUT	=	0x008e
                           00008F   857 G$CP1EN$0$0 == 0x008f
                           00008F   858 _CP1EN	=	0x008f
                           000088   859 G$FLHBUSY$0$0 == 0x0088
                           000088   860 _FLHBUSY	=	0x0088
                           000090   861 G$P1_0$0$0 == 0x0090
                           000090   862 _P1_0	=	0x0090
                           000091   863 G$P1_1$0$0 == 0x0091
                           000091   864 _P1_1	=	0x0091
                           000092   865 G$P1_2$0$0 == 0x0092
                           000092   866 _P1_2	=	0x0092
                           000093   867 G$P1_3$0$0 == 0x0093
                           000093   868 _P1_3	=	0x0093
                           000094   869 G$P1_4$0$0 == 0x0094
                           000094   870 _P1_4	=	0x0094
                           000095   871 G$P1_5$0$0 == 0x0095
                           000095   872 _P1_5	=	0x0095
                           000096   873 G$P1_6$0$0 == 0x0096
                           000096   874 _P1_6	=	0x0096
                           000097   875 G$P1_7$0$0 == 0x0097
                           000097   876 _P1_7	=	0x0097
                           000098   877 G$RI0$0$0 == 0x0098
                           000098   878 _RI0	=	0x0098
                           000098   879 G$RI$0$0 == 0x0098
                           000098   880 _RI	=	0x0098
                           000099   881 G$TI0$0$0 == 0x0099
                           000099   882 _TI0	=	0x0099
                           000099   883 G$TI$0$0 == 0x0099
                           000099   884 _TI	=	0x0099
                           00009A   885 G$RB80$0$0 == 0x009a
                           00009A   886 _RB80	=	0x009a
                           00009B   887 G$TB80$0$0 == 0x009b
                           00009B   888 _TB80	=	0x009b
                           00009C   889 G$REN0$0$0 == 0x009c
                           00009C   890 _REN0	=	0x009c
                           00009C   891 G$REN$0$0 == 0x009c
                           00009C   892 _REN	=	0x009c
                           00009D   893 G$SM20$0$0 == 0x009d
                           00009D   894 _SM20	=	0x009d
                           00009E   895 G$SM10$0$0 == 0x009e
                           00009E   896 _SM10	=	0x009e
                           00009F   897 G$SM00$0$0 == 0x009f
                           00009F   898 _SM00	=	0x009f
                           000098   899 G$RI1$0$0 == 0x0098
                           000098   900 _RI1	=	0x0098
                           000099   901 G$TI1$0$0 == 0x0099
                           000099   902 _TI1	=	0x0099
                           00009A   903 G$RB81$0$0 == 0x009a
                           00009A   904 _RB81	=	0x009a
                           00009B   905 G$TB81$0$0 == 0x009b
                           00009B   906 _TB81	=	0x009b
                           00009C   907 G$REN1$0$0 == 0x009c
                           00009C   908 _REN1	=	0x009c
                           00009D   909 G$MCE1$0$0 == 0x009d
                           00009D   910 _MCE1	=	0x009d
                           00009F   911 G$S1MODE$0$0 == 0x009f
                           00009F   912 _S1MODE	=	0x009f
                           0000A0   913 G$P2_0$0$0 == 0x00a0
                           0000A0   914 _P2_0	=	0x00a0
                           0000A1   915 G$P2_1$0$0 == 0x00a1
                           0000A1   916 _P2_1	=	0x00a1
                           0000A2   917 G$P2_2$0$0 == 0x00a2
                           0000A2   918 _P2_2	=	0x00a2
                           0000A3   919 G$P2_3$0$0 == 0x00a3
                           0000A3   920 _P2_3	=	0x00a3
                           0000A4   921 G$P2_4$0$0 == 0x00a4
                           0000A4   922 _P2_4	=	0x00a4
                           0000A5   923 G$P2_5$0$0 == 0x00a5
                           0000A5   924 _P2_5	=	0x00a5
                           0000A6   925 G$P2_6$0$0 == 0x00a6
                           0000A6   926 _P2_6	=	0x00a6
                           0000A7   927 G$P2_7$0$0 == 0x00a7
                           0000A7   928 _P2_7	=	0x00a7
                           0000A8   929 G$EX0$0$0 == 0x00a8
                           0000A8   930 _EX0	=	0x00a8
                           0000A9   931 G$ET0$0$0 == 0x00a9
                           0000A9   932 _ET0	=	0x00a9
                           0000AA   933 G$EX1$0$0 == 0x00aa
                           0000AA   934 _EX1	=	0x00aa
                           0000AB   935 G$ET1$0$0 == 0x00ab
                           0000AB   936 _ET1	=	0x00ab
                           0000AC   937 G$ES0$0$0 == 0x00ac
                           0000AC   938 _ES0	=	0x00ac
                           0000AC   939 G$ES$0$0 == 0x00ac
                           0000AC   940 _ES	=	0x00ac
                           0000AD   941 G$ET2$0$0 == 0x00ad
                           0000AD   942 _ET2	=	0x00ad
                           0000AF   943 G$EA$0$0 == 0x00af
                           0000AF   944 _EA	=	0x00af
                           0000B0   945 G$P3_0$0$0 == 0x00b0
                           0000B0   946 _P3_0	=	0x00b0
                           0000B1   947 G$P3_1$0$0 == 0x00b1
                           0000B1   948 _P3_1	=	0x00b1
                           0000B2   949 G$P3_2$0$0 == 0x00b2
                           0000B2   950 _P3_2	=	0x00b2
                           0000B3   951 G$P3_3$0$0 == 0x00b3
                           0000B3   952 _P3_3	=	0x00b3
                           0000B4   953 G$P3_4$0$0 == 0x00b4
                           0000B4   954 _P3_4	=	0x00b4
                           0000B5   955 G$P3_5$0$0 == 0x00b5
                           0000B5   956 _P3_5	=	0x00b5
                           0000B6   957 G$P3_6$0$0 == 0x00b6
                           0000B6   958 _P3_6	=	0x00b6
                           0000B7   959 G$P3_7$0$0 == 0x00b7
                           0000B7   960 _P3_7	=	0x00b7
                           0000B8   961 G$PX0$0$0 == 0x00b8
                           0000B8   962 _PX0	=	0x00b8
                           0000B9   963 G$PT0$0$0 == 0x00b9
                           0000B9   964 _PT0	=	0x00b9
                           0000BA   965 G$PX1$0$0 == 0x00ba
                           0000BA   966 _PX1	=	0x00ba
                           0000BB   967 G$PT1$0$0 == 0x00bb
                           0000BB   968 _PT1	=	0x00bb
                           0000BC   969 G$PS0$0$0 == 0x00bc
                           0000BC   970 _PS0	=	0x00bc
                           0000BC   971 G$PS$0$0 == 0x00bc
                           0000BC   972 _PS	=	0x00bc
                           0000BD   973 G$PT2$0$0 == 0x00bd
                           0000BD   974 _PT2	=	0x00bd
                           0000C0   975 G$SMBTOE$0$0 == 0x00c0
                           0000C0   976 _SMBTOE	=	0x00c0
                           0000C1   977 G$SMBFTE$0$0 == 0x00c1
                           0000C1   978 _SMBFTE	=	0x00c1
                           0000C2   979 G$AA$0$0 == 0x00c2
                           0000C2   980 _AA	=	0x00c2
                           0000C3   981 G$SI$0$0 == 0x00c3
                           0000C3   982 _SI	=	0x00c3
                           0000C4   983 G$STO$0$0 == 0x00c4
                           0000C4   984 _STO	=	0x00c4
                           0000C5   985 G$STA$0$0 == 0x00c5
                           0000C5   986 _STA	=	0x00c5
                           0000C6   987 G$ENSMB$0$0 == 0x00c6
                           0000C6   988 _ENSMB	=	0x00c6
                           0000C7   989 G$BUSY$0$0 == 0x00c7
                           0000C7   990 _BUSY	=	0x00c7
                           0000C0   991 G$MAC0N$0$0 == 0x00c0
                           0000C0   992 _MAC0N	=	0x00c0
                           0000C1   993 G$MAC0SO$0$0 == 0x00c1
                           0000C1   994 _MAC0SO	=	0x00c1
                           0000C2   995 G$MAC0Z$0$0 == 0x00c2
                           0000C2   996 _MAC0Z	=	0x00c2
                           0000C3   997 G$MAC0HO$0$0 == 0x00c3
                           0000C3   998 _MAC0HO	=	0x00c3
                           0000C8   999 G$CPRL2$0$0 == 0x00c8
                           0000C8  1000 _CPRL2	=	0x00c8
                           0000C9  1001 G$CT2$0$0 == 0x00c9
                           0000C9  1002 _CT2	=	0x00c9
                           0000CA  1003 G$TR2$0$0 == 0x00ca
                           0000CA  1004 _TR2	=	0x00ca
                           0000CB  1005 G$EXEN2$0$0 == 0x00cb
                           0000CB  1006 _EXEN2	=	0x00cb
                           0000CE  1007 G$EXF2$0$0 == 0x00ce
                           0000CE  1008 _EXF2	=	0x00ce
                           0000CF  1009 G$TF2$0$0 == 0x00cf
                           0000CF  1010 _TF2	=	0x00cf
                           0000C8  1011 G$CPRL3$0$0 == 0x00c8
                           0000C8  1012 _CPRL3	=	0x00c8
                           0000C9  1013 G$CT3$0$0 == 0x00c9
                           0000C9  1014 _CT3	=	0x00c9
                           0000CA  1015 G$TR3$0$0 == 0x00ca
                           0000CA  1016 _TR3	=	0x00ca
                           0000CB  1017 G$EXEN3$0$0 == 0x00cb
                           0000CB  1018 _EXEN3	=	0x00cb
                           0000CE  1019 G$EXF3$0$0 == 0x00ce
                           0000CE  1020 _EXF3	=	0x00ce
                           0000CF  1021 G$TF3$0$0 == 0x00cf
                           0000CF  1022 _TF3	=	0x00cf
                           0000C8  1023 G$CPRL4$0$0 == 0x00c8
                           0000C8  1024 _CPRL4	=	0x00c8
                           0000C9  1025 G$CT4$0$0 == 0x00c9
                           0000C9  1026 _CT4	=	0x00c9
                           0000CA  1027 G$TR4$0$0 == 0x00ca
                           0000CA  1028 _TR4	=	0x00ca
                           0000CB  1029 G$EXEN4$0$0 == 0x00cb
                           0000CB  1030 _EXEN4	=	0x00cb
                           0000CE  1031 G$EXF4$0$0 == 0x00ce
                           0000CE  1032 _EXF4	=	0x00ce
                           0000CF  1033 G$TF4$0$0 == 0x00cf
                           0000CF  1034 _TF4	=	0x00cf
                           0000C8  1035 G$P4_0$0$0 == 0x00c8
                           0000C8  1036 _P4_0	=	0x00c8
                           0000C9  1037 G$P4_1$0$0 == 0x00c9
                           0000C9  1038 _P4_1	=	0x00c9
                           0000CA  1039 G$P4_2$0$0 == 0x00ca
                           0000CA  1040 _P4_2	=	0x00ca
                           0000CB  1041 G$P4_3$0$0 == 0x00cb
                           0000CB  1042 _P4_3	=	0x00cb
                           0000CC  1043 G$P4_4$0$0 == 0x00cc
                           0000CC  1044 _P4_4	=	0x00cc
                           0000CD  1045 G$P4_5$0$0 == 0x00cd
                           0000CD  1046 _P4_5	=	0x00cd
                           0000CE  1047 G$P4_6$0$0 == 0x00ce
                           0000CE  1048 _P4_6	=	0x00ce
                           0000CF  1049 G$P4_7$0$0 == 0x00cf
                           0000CF  1050 _P4_7	=	0x00cf
                           0000D0  1051 G$P$0$0 == 0x00d0
                           0000D0  1052 _P	=	0x00d0
                           0000D1  1053 G$F1$0$0 == 0x00d1
                           0000D1  1054 _F1	=	0x00d1
                           0000D2  1055 G$OV$0$0 == 0x00d2
                           0000D2  1056 _OV	=	0x00d2
                           0000D3  1057 G$RS0$0$0 == 0x00d3
                           0000D3  1058 _RS0	=	0x00d3
                           0000D4  1059 G$RS1$0$0 == 0x00d4
                           0000D4  1060 _RS1	=	0x00d4
                           0000D5  1061 G$F0$0$0 == 0x00d5
                           0000D5  1062 _F0	=	0x00d5
                           0000D6  1063 G$AC$0$0 == 0x00d6
                           0000D6  1064 _AC	=	0x00d6
                           0000D7  1065 G$CY$0$0 == 0x00d7
                           0000D7  1066 _CY	=	0x00d7
                           0000D8  1067 G$CCF0$0$0 == 0x00d8
                           0000D8  1068 _CCF0	=	0x00d8
                           0000D9  1069 G$CCF1$0$0 == 0x00d9
                           0000D9  1070 _CCF1	=	0x00d9
                           0000DA  1071 G$CCF2$0$0 == 0x00da
                           0000DA  1072 _CCF2	=	0x00da
                           0000DB  1073 G$CCF3$0$0 == 0x00db
                           0000DB  1074 _CCF3	=	0x00db
                           0000DC  1075 G$CCF4$0$0 == 0x00dc
                           0000DC  1076 _CCF4	=	0x00dc
                           0000DD  1077 G$CCF5$0$0 == 0x00dd
                           0000DD  1078 _CCF5	=	0x00dd
                           0000DE  1079 G$CR$0$0 == 0x00de
                           0000DE  1080 _CR	=	0x00de
                           0000DF  1081 G$CF$0$0 == 0x00df
                           0000DF  1082 _CF	=	0x00df
                           0000D8  1083 G$P5_0$0$0 == 0x00d8
                           0000D8  1084 _P5_0	=	0x00d8
                           0000D9  1085 G$P5_1$0$0 == 0x00d9
                           0000D9  1086 _P5_1	=	0x00d9
                           0000DA  1087 G$P5_2$0$0 == 0x00da
                           0000DA  1088 _P5_2	=	0x00da
                           0000DB  1089 G$P5_3$0$0 == 0x00db
                           0000DB  1090 _P5_3	=	0x00db
                           0000DC  1091 G$P5_4$0$0 == 0x00dc
                           0000DC  1092 _P5_4	=	0x00dc
                           0000DD  1093 G$P5_5$0$0 == 0x00dd
                           0000DD  1094 _P5_5	=	0x00dd
                           0000DE  1095 G$P5_6$0$0 == 0x00de
                           0000DE  1096 _P5_6	=	0x00de
                           0000DF  1097 G$P5_7$0$0 == 0x00df
                           0000DF  1098 _P5_7	=	0x00df
                           0000E8  1099 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1100 _AD0LJST	=	0x00e8
                           0000E9  1101 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1102 _AD0WINT	=	0x00e9
                           0000EA  1103 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1104 _AD0CM0	=	0x00ea
                           0000EB  1105 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1106 _AD0CM1	=	0x00eb
                           0000EC  1107 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1108 _AD0BUSY	=	0x00ec
                           0000ED  1109 G$AD0INT$0$0 == 0x00ed
                           0000ED  1110 _AD0INT	=	0x00ed
                           0000EE  1111 G$AD0TM$0$0 == 0x00ee
                           0000EE  1112 _AD0TM	=	0x00ee
                           0000EF  1113 G$AD0EN$0$0 == 0x00ef
                           0000EF  1114 _AD0EN	=	0x00ef
                           0000E8  1115 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1116 _AD2WINT	=	0x00e8
                           0000E9  1117 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1118 _AD2CM0	=	0x00e9
                           0000EA  1119 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1120 _AD2CM1	=	0x00ea
                           0000EB  1121 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1122 _AD2CM2	=	0x00eb
                           0000EC  1123 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1124 _AD2BUSY	=	0x00ec
                           0000ED  1125 G$AD2INT$0$0 == 0x00ed
                           0000ED  1126 _AD2INT	=	0x00ed
                           0000EE  1127 G$AD2TM$0$0 == 0x00ee
                           0000EE  1128 _AD2TM	=	0x00ee
                           0000EF  1129 G$AD2EN$0$0 == 0x00ef
                           0000EF  1130 _AD2EN	=	0x00ef
                           0000E8  1131 G$P6_0$0$0 == 0x00e8
                           0000E8  1132 _P6_0	=	0x00e8
                           0000E9  1133 G$P6_1$0$0 == 0x00e9
                           0000E9  1134 _P6_1	=	0x00e9
                           0000EA  1135 G$P6_2$0$0 == 0x00ea
                           0000EA  1136 _P6_2	=	0x00ea
                           0000EB  1137 G$P6_3$0$0 == 0x00eb
                           0000EB  1138 _P6_3	=	0x00eb
                           0000EC  1139 G$P6_4$0$0 == 0x00ec
                           0000EC  1140 _P6_4	=	0x00ec
                           0000ED  1141 G$P6_5$0$0 == 0x00ed
                           0000ED  1142 _P6_5	=	0x00ed
                           0000EE  1143 G$P6_6$0$0 == 0x00ee
                           0000EE  1144 _P6_6	=	0x00ee
                           0000EF  1145 G$P6_7$0$0 == 0x00ef
                           0000EF  1146 _P6_7	=	0x00ef
                           0000F8  1147 G$SPIEN$0$0 == 0x00f8
                           0000F8  1148 _SPIEN	=	0x00f8
                           0000F9  1149 G$TXBMT$0$0 == 0x00f9
                           0000F9  1150 _TXBMT	=	0x00f9
                           0000FA  1151 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1152 _NSSMD0	=	0x00fa
                           0000FB  1153 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1154 _NSSMD1	=	0x00fb
                           0000FC  1155 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1156 _RXOVRN	=	0x00fc
                           0000FD  1157 G$MODF$0$0 == 0x00fd
                           0000FD  1158 _MODF	=	0x00fd
                           0000FE  1159 G$WCOL$0$0 == 0x00fe
                           0000FE  1160 _WCOL	=	0x00fe
                           0000FF  1161 G$SPIF$0$0 == 0x00ff
                           0000FF  1162 _SPIF	=	0x00ff
                           0000F8  1163 G$P7_0$0$0 == 0x00f8
                           0000F8  1164 _P7_0	=	0x00f8
                           0000F9  1165 G$P7_1$0$0 == 0x00f9
                           0000F9  1166 _P7_1	=	0x00f9
                           0000FA  1167 G$P7_2$0$0 == 0x00fa
                           0000FA  1168 _P7_2	=	0x00fa
                           0000FB  1169 G$P7_3$0$0 == 0x00fb
                           0000FB  1170 _P7_3	=	0x00fb
                           0000FC  1171 G$P7_4$0$0 == 0x00fc
                           0000FC  1172 _P7_4	=	0x00fc
                           0000FD  1173 G$P7_5$0$0 == 0x00fd
                           0000FD  1174 _P7_5	=	0x00fd
                           0000FE  1175 G$P7_6$0$0 == 0x00fe
                           0000FE  1176 _P7_6	=	0x00fe
                           0000FF  1177 G$P7_7$0$0 == 0x00ff
                           0000FF  1178 _P7_7	=	0x00ff
                                   1179 ;--------------------------------------------------------
                                   1180 ; overlayable register banks
                                   1181 ;--------------------------------------------------------
                                   1182 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1183 	.ds 8
                                   1184 ;--------------------------------------------------------
                                   1185 ; internal ram data
                                   1186 ;--------------------------------------------------------
                                   1187 	.area DSEG    (DATA)
                                   1188 ;--------------------------------------------------------
                                   1189 ; overlayable items in internal ram 
                                   1190 ;--------------------------------------------------------
                                   1191 	.area	OSEG    (OVR,DATA)
                                   1192 	.area	OSEG    (OVR,DATA)
                                   1193 	.area	OSEG    (OVR,DATA)
                                   1194 	.area	OSEG    (OVR,DATA)
                                   1195 ;--------------------------------------------------------
                                   1196 ; Stack segment in internal ram 
                                   1197 ;--------------------------------------------------------
                                   1198 	.area	SSEG
      000008                       1199 __start__stack:
      000008                       1200 	.ds	1
                                   1201 
                                   1202 ;--------------------------------------------------------
                                   1203 ; indirectly addressable internal ram data
                                   1204 ;--------------------------------------------------------
                                   1205 	.area ISEG    (DATA)
                                   1206 ;--------------------------------------------------------
                                   1207 ; absolute internal ram data
                                   1208 ;--------------------------------------------------------
                                   1209 	.area IABS    (ABS,DATA)
                                   1210 	.area IABS    (ABS,DATA)
                                   1211 ;--------------------------------------------------------
                                   1212 ; bit data
                                   1213 ;--------------------------------------------------------
                                   1214 	.area BSEG    (BIT)
                                   1215 ;--------------------------------------------------------
                                   1216 ; paged external ram data
                                   1217 ;--------------------------------------------------------
                                   1218 	.area PSEG    (PAG,XDATA)
                                   1219 ;--------------------------------------------------------
                                   1220 ; external ram data
                                   1221 ;--------------------------------------------------------
                                   1222 	.area XSEG    (XDATA)
                                   1223 ;--------------------------------------------------------
                                   1224 ; absolute external ram data
                                   1225 ;--------------------------------------------------------
                                   1226 	.area XABS    (ABS,XDATA)
                                   1227 ;--------------------------------------------------------
                                   1228 ; external initialized ram data
                                   1229 ;--------------------------------------------------------
                                   1230 	.area XISEG   (XDATA)
                                   1231 	.area HOME    (CODE)
                                   1232 	.area GSINIT0 (CODE)
                                   1233 	.area GSINIT1 (CODE)
                                   1234 	.area GSINIT2 (CODE)
                                   1235 	.area GSINIT3 (CODE)
                                   1236 	.area GSINIT4 (CODE)
                                   1237 	.area GSINIT5 (CODE)
                                   1238 	.area GSINIT  (CODE)
                                   1239 	.area GSFINAL (CODE)
                                   1240 	.area CSEG    (CODE)
                                   1241 ;--------------------------------------------------------
                                   1242 ; interrupt vector 
                                   1243 ;--------------------------------------------------------
                                   1244 	.area HOME    (CODE)
      000000                       1245 __interrupt_vect:
      000000 02 00 06         [24] 1246 	ljmp	__sdcc_gsinit_startup
                                   1247 ;--------------------------------------------------------
                                   1248 ; global & static initialisations
                                   1249 ;--------------------------------------------------------
                                   1250 	.area HOME    (CODE)
                                   1251 	.area GSINIT  (CODE)
                                   1252 	.area GSFINAL (CODE)
                                   1253 	.area GSINIT  (CODE)
                                   1254 	.globl __sdcc_gsinit_startup
                                   1255 	.globl __sdcc_program_startup
                                   1256 	.globl __start__stack
                                   1257 	.globl __mcs51_genXINIT
                                   1258 	.globl __mcs51_genXRAMCLEAR
                                   1259 	.globl __mcs51_genRAMCLEAR
                                   1260 	.area GSFINAL (CODE)
      00005F 02 00 03         [24] 1261 	ljmp	__sdcc_program_startup
                                   1262 ;--------------------------------------------------------
                                   1263 ; Home
                                   1264 ;--------------------------------------------------------
                                   1265 	.area HOME    (CODE)
                                   1266 	.area HOME    (CODE)
      000003                       1267 __sdcc_program_startup:
      000003 02 00 77         [24] 1268 	ljmp	_main
                                   1269 ;	return from main will return to caller
                                   1270 ;--------------------------------------------------------
                                   1271 ; code
                                   1272 ;--------------------------------------------------------
                                   1273 	.area CSEG    (CODE)
                                   1274 ;------------------------------------------------------------
                                   1275 ;Allocation info for local variables in function 'putchar'
                                   1276 ;------------------------------------------------------------
                                   1277 ;c                         Allocated to registers r7 
                                   1278 ;------------------------------------------------------------
                           000000  1279 	G$putchar$0$0 ==.
                           000000  1280 	C$putget.h$18$0$0 ==.
                                   1281 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:18: void putchar(char c)
                                   1282 ;	-----------------------------------------
                                   1283 ;	 function putchar
                                   1284 ;	-----------------------------------------
      000062                       1285 _putchar:
                           000007  1286 	ar7 = 0x07
                           000006  1287 	ar6 = 0x06
                           000005  1288 	ar5 = 0x05
                           000004  1289 	ar4 = 0x04
                           000003  1290 	ar3 = 0x03
                           000002  1291 	ar2 = 0x02
                           000001  1292 	ar1 = 0x01
                           000000  1293 	ar0 = 0x00
      000062 AF 82            [24] 1294 	mov	r7,dpl
                           000002  1295 	C$putget.h$20$1$16 ==.
                                   1296 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:20: while(!TI0); 
      000064                       1297 00101$:
                           000002  1298 	C$putget.h$21$1$16 ==.
                                   1299 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:21: TI0=0;
      000064 10 99 02         [24] 1300 	jbc	_TI0,00112$
      000067 80 FB            [24] 1301 	sjmp	00101$
      000069                       1302 00112$:
                           000007  1303 	C$putget.h$22$1$16 ==.
                                   1304 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:22: SBUF0 = c;
      000069 8F 99            [24] 1305 	mov	_SBUF0,r7
                           000009  1306 	C$putget.h$23$1$16 ==.
                           000009  1307 	XG$putchar$0$0 ==.
      00006B 22               [24] 1308 	ret
                                   1309 ;------------------------------------------------------------
                                   1310 ;Allocation info for local variables in function 'getchar'
                                   1311 ;------------------------------------------------------------
                                   1312 ;c                         Allocated to registers 
                                   1313 ;------------------------------------------------------------
                           00000A  1314 	G$getchar$0$0 ==.
                           00000A  1315 	C$putget.h$28$1$16 ==.
                                   1316 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:28: char getchar(void)
                                   1317 ;	-----------------------------------------
                                   1318 ;	 function getchar
                                   1319 ;	-----------------------------------------
      00006C                       1320 _getchar:
                           00000A  1321 	C$putget.h$31$1$18 ==.
                                   1322 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:31: while(!RI0);
      00006C                       1323 00101$:
                           00000A  1324 	C$putget.h$32$1$18 ==.
                                   1325 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:32: RI0 =0;
      00006C 10 98 02         [24] 1326 	jbc	_RI0,00112$
      00006F 80 FB            [24] 1327 	sjmp	00101$
      000071                       1328 00112$:
                           00000F  1329 	C$putget.h$33$1$18 ==.
                                   1330 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:33: c = SBUF0;
      000071 E5 99            [12] 1331 	mov	a,_SBUF0
                           000011  1332 	C$putget.h$36$1$18 ==.
                                   1333 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.1 - echo/putget.h:36: return SBUF0;
      000073 85 99 82         [24] 1334 	mov	dpl,_SBUF0
                           000014  1335 	C$putget.h$37$1$18 ==.
                           000014  1336 	XG$getchar$0$0 ==.
      000076 22               [24] 1337 	ret
                                   1338 ;------------------------------------------------------------
                                   1339 ;Allocation info for local variables in function 'main'
                                   1340 ;------------------------------------------------------------
                                   1341 ;c                         Allocated to registers r7 
                                   1342 ;------------------------------------------------------------
                           000015  1343 	G$main$0$0 ==.
                           000015  1344 	C$UART.c$28$1$18 ==.
                                   1345 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:28: void main (void)
                                   1346 ;	-----------------------------------------
                                   1347 ;	 function main
                                   1348 ;	-----------------------------------------
      000077                       1349 _main:
                           000015  1350 	C$UART.c$33$1$26 ==.
                                   1351 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:33: SFRPAGE = CONFIG_PAGE;
      000077 75 84 0F         [24] 1352 	mov	_SFRPAGE,#0x0F
                           000018  1353 	C$UART.c$34$1$26 ==.
                                   1354 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:34: SYSCLK_INIT();
      00007A 12 00 C1         [24] 1355 	lcall	_SYSCLK_INIT
                           00001B  1356 	C$UART.c$35$1$26 ==.
                                   1357 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:35: Port_IO_Init();
      00007D 12 01 20         [24] 1358 	lcall	_Port_IO_Init
                           00001E  1359 	C$UART.c$36$1$26 ==.
                                   1360 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:36: Timer_Init();
      000080 12 00 E0         [24] 1361 	lcall	_Timer_Init
                           000021  1362 	C$UART.c$37$1$26 ==.
                                   1363 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:37: UART_Init();
      000083 12 01 08         [24] 1364 	lcall	_UART_Init
                           000024  1365 	C$UART.c$39$1$26 ==.
                                   1366 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:39: SFRPAGE = LEGACY_PAGE;//same ass UART0_PAGE
      000086 75 84 00         [24] 1367 	mov	_SFRPAGE,#0x00
                           000027  1368 	C$UART.c$41$1$26 ==.
                                   1369 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:41: while(1)
      000089                       1370 00106$:
                           000027  1371 	C$UART.c$43$2$27 ==.
                                   1372 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:43: SFRPAGE   = UART1_PAGE;
      000089 75 84 01         [24] 1373 	mov	_SFRPAGE,#0x01
                           00002A  1374 	C$UART.c$44$2$27 ==.
                                   1375 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:44: if (RI1)
                           00002A  1376 	C$UART.c$46$3$28 ==.
                                   1377 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:46: RI1 = 0;
      00008C 10 98 02         [24] 1378 	jbc	_RI1,00119$
      00008F 80 07            [24] 1379 	sjmp	00102$
      000091                       1380 00119$:
                           00002F  1381 	C$UART.c$47$3$28 ==.
                                   1382 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:47: c = SBUF1;
      000091 AF 99            [24] 1383 	mov	r7,_SBUF1
                           000031  1384 	C$UART.c$48$3$28 ==.
                                   1385 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:48: echo(c);
      000093 8F 82            [24] 1386 	mov	dpl,r7
      000095 12 00 AA         [24] 1387 	lcall	_echo
      000098                       1388 00102$:
                           000036  1389 	C$UART.c$51$2$27 ==.
                                   1390 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:51: SFRPAGE   = UART0_PAGE;
      000098 75 84 00         [24] 1391 	mov	_SFRPAGE,#0x00
                           000039  1392 	C$UART.c$52$2$27 ==.
                                   1393 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:52: if(RI0)
                           000039  1394 	C$UART.c$54$3$29 ==.
                                   1395 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:54: RI0 = 0;
      00009B 10 98 02         [24] 1396 	jbc	_RI0,00120$
      00009E 80 E9            [24] 1397 	sjmp	00106$
      0000A0                       1398 00120$:
                           00003E  1399 	C$UART.c$55$3$29 ==.
                                   1400 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:55: c = SBUF0;
      0000A0 AF 99            [24] 1401 	mov	r7,_SBUF0
                           000040  1402 	C$UART.c$56$3$29 ==.
                                   1403 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:56: echo(c);
      0000A2 8F 82            [24] 1404 	mov	dpl,r7
      0000A4 12 00 AA         [24] 1405 	lcall	_echo
      0000A7 80 E0            [24] 1406 	sjmp	00106$
                           000047  1407 	C$UART.c$62$1$26 ==.
                           000047  1408 	XG$main$0$0 ==.
      0000A9 22               [24] 1409 	ret
                                   1410 ;------------------------------------------------------------
                                   1411 ;Allocation info for local variables in function 'echo'
                                   1412 ;------------------------------------------------------------
                                   1413 ;c                         Allocated to registers r7 
                                   1414 ;------------------------------------------------------------
                           000048  1415 	G$echo$0$0 ==.
                           000048  1416 	C$UART.c$64$1$26 ==.
                                   1417 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:64: void echo(char c)
                                   1418 ;	-----------------------------------------
                                   1419 ;	 function echo
                                   1420 ;	-----------------------------------------
      0000AA                       1421 _echo:
      0000AA AF 82            [24] 1422 	mov	r7,dpl
                           00004A  1423 	C$UART.c$66$1$31 ==.
                                   1424 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:66: SFRPAGE   = UART1_PAGE;
      0000AC 75 84 01         [24] 1425 	mov	_SFRPAGE,#0x01
                           00004D  1426 	C$UART.c$67$1$31 ==.
                                   1427 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:67: while(!TI1);
      0000AF                       1428 00101$:
                           00004D  1429 	C$UART.c$68$1$31 ==.
                                   1430 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:68: TI1 = 0;
      0000AF 10 99 02         [24] 1431 	jbc	_TI1,00121$
      0000B2 80 FB            [24] 1432 	sjmp	00101$
      0000B4                       1433 00121$:
                           000052  1434 	C$UART.c$69$1$31 ==.
                                   1435 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:69: SBUF1=c;
      0000B4 8F 99            [24] 1436 	mov	_SBUF1,r7
                           000054  1437 	C$UART.c$70$1$31 ==.
                                   1438 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:70: SFRPAGE   = UART0_PAGE;
      0000B6 75 84 00         [24] 1439 	mov	_SFRPAGE,#0x00
                           000057  1440 	C$UART.c$71$1$31 ==.
                                   1441 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:71: while(!TI0);
      0000B9                       1442 00104$:
                           000057  1443 	C$UART.c$72$1$31 ==.
                                   1444 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:72: TI0 =0; 
      0000B9 10 99 02         [24] 1445 	jbc	_TI0,00122$
      0000BC 80 FB            [24] 1446 	sjmp	00104$
      0000BE                       1447 00122$:
                           00005C  1448 	C$UART.c$73$1$31 ==.
                                   1449 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:73: SBUF0 =c;
      0000BE 8F 99            [24] 1450 	mov	_SBUF0,r7
                           00005E  1451 	C$UART.c$75$1$31 ==.
                           00005E  1452 	XG$echo$0$0 ==.
      0000C0 22               [24] 1453 	ret
                                   1454 ;------------------------------------------------------------
                                   1455 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1456 ;------------------------------------------------------------
                                   1457 ;j                         Allocated to registers 
                                   1458 ;------------------------------------------------------------
                           00005F  1459 	G$SYSCLK_INIT$0$0 ==.
                           00005F  1460 	C$UART.c$79$1$31 ==.
                                   1461 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:79: void SYSCLK_INIT()
                                   1462 ;	-----------------------------------------
                                   1463 ;	 function SYSCLK_INIT
                                   1464 ;	-----------------------------------------
      0000C1                       1465 _SYSCLK_INIT:
                           00005F  1466 	C$UART.c$83$1$32 ==.
                                   1467 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:83: SFRPAGE = CONFIG_PAGE;
      0000C1 75 84 0F         [24] 1468 	mov	_SFRPAGE,#0x0F
                           000062  1469 	C$UART.c$84$1$32 ==.
                                   1470 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:84: OSCXCN  = 0x67;             // Start external oscillator
      0000C4 75 8C 67         [24] 1471 	mov	_OSCXCN,#0x67
                           000065  1472 	C$UART.c$85$1$32 ==.
                                   1473 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:85: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      0000C7 7E 00            [12] 1474 	mov	r6,#0x00
      0000C9 7F 01            [12] 1475 	mov	r7,#0x01
      0000CB                       1476 00107$:
      0000CB 1E               [12] 1477 	dec	r6
      0000CC BE FF 01         [24] 1478 	cjne	r6,#0xFF,00121$
      0000CF 1F               [12] 1479 	dec	r7
      0000D0                       1480 00121$:
      0000D0 EE               [12] 1481 	mov	a,r6
      0000D1 4F               [12] 1482 	orl	a,r7
      0000D2 70 F7            [24] 1483 	jnz	00107$
                           000072  1484 	C$UART.c$86$1$32 ==.
                                   1485 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:86: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      0000D4                       1486 00102$:
      0000D4 E5 8C            [12] 1487 	mov	a,_OSCXCN
      0000D6 30 E7 FB         [24] 1488 	jnb	acc.7,00102$
                           000077  1489 	C$UART.c$87$1$32 ==.
                                   1490 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:87: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      0000D9 75 97 01         [24] 1491 	mov	_CLKSEL,#0x01
                           00007A  1492 	C$UART.c$88$1$32 ==.
                                   1493 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:88: OSCICN  = 0x00;             // Disable the internal oscillator.
      0000DC 75 8A 00         [24] 1494 	mov	_OSCICN,#0x00
                           00007D  1495 	C$UART.c$89$1$32 ==.
                           00007D  1496 	XG$SYSCLK_INIT$0$0 ==.
      0000DF 22               [24] 1497 	ret
                                   1498 ;------------------------------------------------------------
                                   1499 ;Allocation info for local variables in function 'Timer_Init'
                                   1500 ;------------------------------------------------------------
                           00007E  1501 	G$Timer_Init$0$0 ==.
                           00007E  1502 	C$UART.c$91$1$32 ==.
                                   1503 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:91: void Timer_Init()
                                   1504 ;	-----------------------------------------
                                   1505 ;	 function Timer_Init
                                   1506 ;	-----------------------------------------
      0000E0                       1507 _Timer_Init:
                           00007E  1508 	C$UART.c$93$1$33 ==.
                                   1509 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:93: SFRPAGE   = TIMER01_PAGE;
      0000E0 75 84 00         [24] 1510 	mov	_SFRPAGE,#0x00
                           000081  1511 	C$UART.c$94$1$33 ==.
                                   1512 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:94: TCON      = 0x40;
      0000E3 75 88 40         [24] 1513 	mov	_TCON,#0x40
                           000084  1514 	C$UART.c$95$1$33 ==.
                                   1515 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:95: TMOD      = 0x20;
      0000E6 75 89 20         [24] 1516 	mov	_TMOD,#0x20
                           000087  1517 	C$UART.c$96$1$33 ==.
                                   1518 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:96: CKCON     = 0x10;
      0000E9 75 8E 10         [24] 1519 	mov	_CKCON,#0x10
                           00008A  1520 	C$UART.c$97$1$33 ==.
                                   1521 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:97: TH1       = 0xA0;
      0000EC 75 8D A0         [24] 1522 	mov	_TH1,#0xA0
                           00008D  1523 	C$UART.c$98$1$33 ==.
                                   1524 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:98: TL1 = TH1;
      0000EF 85 8D 8B         [24] 1525 	mov	_TL1,_TH1
                           000090  1526 	C$UART.c$99$1$33 ==.
                                   1527 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:99: SFRPAGE   = TMR2_PAGE;
      0000F2 75 84 00         [24] 1528 	mov	_SFRPAGE,#0x00
                           000093  1529 	C$UART.c$100$1$33 ==.
                                   1530 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:100: TMR2CN    = 0x04;
      0000F5 75 C8 04         [24] 1531 	mov	_TMR2CN,#0x04
                           000096  1532 	C$UART.c$101$1$33 ==.
                                   1533 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:101: TMR2CF    = 0x08;
      0000F8 75 C9 08         [24] 1534 	mov	_TMR2CF,#0x08
                           000099  1535 	C$UART.c$102$1$33 ==.
                                   1536 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:102: TMR2H	  = 0xFF;//(unsigned char) -(EXTCLK/BAUDRATE0/16);
      0000FB 75 CD FF         [24] 1537 	mov	_TMR2H,#0xFF
                           00009C  1538 	C$UART.c$103$1$33 ==.
                                   1539 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:103: TMR2L = 0x70;//TMR2H;
      0000FE 75 CC 70         [24] 1540 	mov	_TMR2L,#0x70
                           00009F  1541 	C$UART.c$104$1$33 ==.
                                   1542 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:104: RCAP2L    = 0x70;
      000101 75 CA 70         [24] 1543 	mov	_RCAP2L,#0x70
                           0000A2  1544 	C$UART.c$105$1$33 ==.
                                   1545 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:105: RCAP2H    = 0xFF;
      000104 75 CB FF         [24] 1546 	mov	_RCAP2H,#0xFF
                           0000A5  1547 	C$UART.c$106$1$33 ==.
                           0000A5  1548 	XG$Timer_Init$0$0 ==.
      000107 22               [24] 1549 	ret
                                   1550 ;------------------------------------------------------------
                                   1551 ;Allocation info for local variables in function 'UART_Init'
                                   1552 ;------------------------------------------------------------
                           0000A6  1553 	G$UART_Init$0$0 ==.
                           0000A6  1554 	C$UART.c$107$1$33 ==.
                                   1555 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:107: void UART_Init()
                                   1556 ;	-----------------------------------------
                                   1557 ;	 function UART_Init
                                   1558 ;	-----------------------------------------
      000108                       1559 _UART_Init:
                           0000A6  1560 	C$UART.c$109$1$34 ==.
                                   1561 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:109: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      000108 75 84 00         [24] 1562 	mov	_SFRPAGE,#0x00
                           0000A9  1563 	C$UART.c$110$1$34 ==.
                                   1564 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:110: TR2		  = 1;//Start Timer 2
      00010B D2 CA            [12] 1565 	setb	_TR2
                           0000AB  1566 	C$UART.c$111$1$34 ==.
                                   1567 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:111: SCON0     = 0x50;
      00010D 75 98 50         [24] 1568 	mov	_SCON0,#0x50
                           0000AE  1569 	C$UART.c$112$1$34 ==.
                                   1570 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:112: SSTA0   = 0x15;
      000110 75 91 15         [24] 1571 	mov	_SSTA0,#0x15
                           0000B1  1572 	C$UART.c$113$1$34 ==.
                                   1573 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:113: TI0		  = 1; // Indicate TX0 is ready
      000113 D2 99            [12] 1574 	setb	_TI0
                           0000B3  1575 	C$UART.c$114$1$34 ==.
                                   1576 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:114: TR1		  = 1; //Start Timer 1
      000115 D2 8E            [12] 1577 	setb	_TR1
                           0000B5  1578 	C$UART.c$115$1$34 ==.
                                   1579 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:115: SFRPAGE   = UART1_PAGE;
      000117 75 84 01         [24] 1580 	mov	_SFRPAGE,#0x01
                           0000B8  1581 	C$UART.c$116$1$34 ==.
                                   1582 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:116: SCON1     = 0x50;
      00011A 75 98 50         [24] 1583 	mov	_SCON1,#0x50
                           0000BB  1584 	C$UART.c$117$1$34 ==.
                                   1585 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:117: TI1		  = 1; //Indicatie TX1 is ready
      00011D D2 99            [12] 1586 	setb	_TI1
                           0000BD  1587 	C$UART.c$118$1$34 ==.
                           0000BD  1588 	XG$UART_Init$0$0 ==.
      00011F 22               [24] 1589 	ret
                                   1590 ;------------------------------------------------------------
                                   1591 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1592 ;------------------------------------------------------------
                           0000BE  1593 	G$Port_IO_Init$0$0 ==.
                           0000BE  1594 	C$UART.c$119$1$34 ==.
                                   1595 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:119: void Port_IO_Init()
                                   1596 ;	-----------------------------------------
                                   1597 ;	 function Port_IO_Init
                                   1598 ;	-----------------------------------------
      000120                       1599 _Port_IO_Init:
                           0000BE  1600 	C$UART.c$121$1$35 ==.
                                   1601 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:121: SFRPAGE   = CONFIG_PAGE;
      000120 75 84 0F         [24] 1602 	mov	_SFRPAGE,#0x0F
                           0000C1  1603 	C$UART.c$124$1$35 ==.
                                   1604 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:124: P0MDOUT = 0x05;
      000123 75 A4 05         [24] 1605 	mov	_P0MDOUT,#0x05
                           0000C4  1606 	C$UART.c$125$1$35 ==.
                                   1607 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:125: P0 = 0x0A;
      000126 75 80 0A         [24] 1608 	mov	_P0,#0x0A
                           0000C7  1609 	C$UART.c$129$1$35 ==.
                                   1610 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:129: WDTCN   = 0xDE;             // Disable watchdog timer.
      000129 75 FF DE         [24] 1611 	mov	_WDTCN,#0xDE
                           0000CA  1612 	C$UART.c$130$1$35 ==.
                                   1613 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:130: WDTCN   = 0xAD;
      00012C 75 FF AD         [24] 1614 	mov	_WDTCN,#0xAD
                           0000CD  1615 	C$UART.c$131$1$35 ==.
                                   1616 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:131: EA 		  = 1; // enable global interrupts
      00012F D2 AF            [12] 1617 	setb	_EA
                           0000CF  1618 	C$UART.c$132$1$35 ==.
                                   1619 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:132: XBR0      = 0x04;
      000131 75 E1 04         [24] 1620 	mov	_XBR0,#0x04
                           0000D2  1621 	C$UART.c$133$1$35 ==.
                                   1622 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.1 - echo\UART.c:133: XBR2      = 0x44;
      000134 75 E3 44         [24] 1623 	mov	_XBR2,#0x44
                           0000D5  1624 	C$UART.c$134$1$35 ==.
                           0000D5  1625 	XG$Port_IO_Init$0$0 ==.
      000137 22               [24] 1626 	ret
                                   1627 	.area CSEG    (CODE)
                                   1628 	.area CONST   (CODE)
                                   1629 	.area XINIT   (CODE)
                                   1630 	.area CABS    (ABS,CODE)
