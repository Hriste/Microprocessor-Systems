                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Sep 12 19:19:35 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module given
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _printf
                                     13 	.globl _P7_7
                                     14 	.globl _P7_6
                                     15 	.globl _P7_5
                                     16 	.globl _P7_4
                                     17 	.globl _P7_3
                                     18 	.globl _P7_2
                                     19 	.globl _P7_1
                                     20 	.globl _P7_0
                                     21 	.globl _SPIF
                                     22 	.globl _WCOL
                                     23 	.globl _MODF
                                     24 	.globl _RXOVRN
                                     25 	.globl _NSSMD1
                                     26 	.globl _NSSMD0
                                     27 	.globl _TXBMT
                                     28 	.globl _SPIEN
                                     29 	.globl _P6_7
                                     30 	.globl _P6_6
                                     31 	.globl _P6_5
                                     32 	.globl _P6_4
                                     33 	.globl _P6_3
                                     34 	.globl _P6_2
                                     35 	.globl _P6_1
                                     36 	.globl _P6_0
                                     37 	.globl _AD2EN
                                     38 	.globl _AD2TM
                                     39 	.globl _AD2INT
                                     40 	.globl _AD2BUSY
                                     41 	.globl _AD2CM2
                                     42 	.globl _AD2CM1
                                     43 	.globl _AD2CM0
                                     44 	.globl _AD2WINT
                                     45 	.globl _AD0EN
                                     46 	.globl _AD0TM
                                     47 	.globl _AD0INT
                                     48 	.globl _AD0BUSY
                                     49 	.globl _AD0CM1
                                     50 	.globl _AD0CM0
                                     51 	.globl _AD0WINT
                                     52 	.globl _AD0LJST
                                     53 	.globl _P5_7
                                     54 	.globl _P5_6
                                     55 	.globl _P5_5
                                     56 	.globl _P5_4
                                     57 	.globl _P5_3
                                     58 	.globl _P5_2
                                     59 	.globl _P5_1
                                     60 	.globl _P5_0
                                     61 	.globl _CF
                                     62 	.globl _CR
                                     63 	.globl _CCF5
                                     64 	.globl _CCF4
                                     65 	.globl _CCF3
                                     66 	.globl _CCF2
                                     67 	.globl _CCF1
                                     68 	.globl _CCF0
                                     69 	.globl _CY
                                     70 	.globl _AC
                                     71 	.globl _F0
                                     72 	.globl _RS1
                                     73 	.globl _RS0
                                     74 	.globl _OV
                                     75 	.globl _F1
                                     76 	.globl _P
                                     77 	.globl _P4_7
                                     78 	.globl _P4_6
                                     79 	.globl _P4_5
                                     80 	.globl _P4_4
                                     81 	.globl _P4_3
                                     82 	.globl _P4_2
                                     83 	.globl _P4_1
                                     84 	.globl _P4_0
                                     85 	.globl _TF4
                                     86 	.globl _EXF4
                                     87 	.globl _EXEN4
                                     88 	.globl _TR4
                                     89 	.globl _CT4
                                     90 	.globl _CPRL4
                                     91 	.globl _TF3
                                     92 	.globl _EXF3
                                     93 	.globl _EXEN3
                                     94 	.globl _TR3
                                     95 	.globl _CT3
                                     96 	.globl _CPRL3
                                     97 	.globl _TF2
                                     98 	.globl _EXF2
                                     99 	.globl _EXEN2
                                    100 	.globl _TR2
                                    101 	.globl _CT2
                                    102 	.globl _CPRL2
                                    103 	.globl _MAC0HO
                                    104 	.globl _MAC0Z
                                    105 	.globl _MAC0SO
                                    106 	.globl _MAC0N
                                    107 	.globl _BUSY
                                    108 	.globl _ENSMB
                                    109 	.globl _STA
                                    110 	.globl _STO
                                    111 	.globl _SI
                                    112 	.globl _AA
                                    113 	.globl _SMBFTE
                                    114 	.globl _SMBTOE
                                    115 	.globl _PT2
                                    116 	.globl _PS
                                    117 	.globl _PS0
                                    118 	.globl _PT1
                                    119 	.globl _PX1
                                    120 	.globl _PT0
                                    121 	.globl _PX0
                                    122 	.globl _P3_7
                                    123 	.globl _P3_6
                                    124 	.globl _P3_5
                                    125 	.globl _P3_4
                                    126 	.globl _P3_3
                                    127 	.globl _P3_2
                                    128 	.globl _P3_1
                                    129 	.globl _P3_0
                                    130 	.globl _EA
                                    131 	.globl _ET2
                                    132 	.globl _ES
                                    133 	.globl _ES0
                                    134 	.globl _ET1
                                    135 	.globl _EX1
                                    136 	.globl _ET0
                                    137 	.globl _EX0
                                    138 	.globl _P2_7
                                    139 	.globl _P2_6
                                    140 	.globl _P2_5
                                    141 	.globl _P2_4
                                    142 	.globl _P2_3
                                    143 	.globl _P2_2
                                    144 	.globl _P2_1
                                    145 	.globl _P2_0
                                    146 	.globl _S1MODE
                                    147 	.globl _MCE1
                                    148 	.globl _REN1
                                    149 	.globl _TB81
                                    150 	.globl _RB81
                                    151 	.globl _TI1
                                    152 	.globl _RI1
                                    153 	.globl _SM00
                                    154 	.globl _SM10
                                    155 	.globl _SM20
                                    156 	.globl _REN
                                    157 	.globl _REN0
                                    158 	.globl _TB80
                                    159 	.globl _RB80
                                    160 	.globl _TI
                                    161 	.globl _TI0
                                    162 	.globl _RI
                                    163 	.globl _RI0
                                    164 	.globl _P1_7
                                    165 	.globl _P1_6
                                    166 	.globl _P1_5
                                    167 	.globl _P1_4
                                    168 	.globl _P1_3
                                    169 	.globl _P1_2
                                    170 	.globl _P1_1
                                    171 	.globl _P1_0
                                    172 	.globl _FLHBUSY
                                    173 	.globl _CP1EN
                                    174 	.globl _CP1OUT
                                    175 	.globl _CP1RIF
                                    176 	.globl _CP1FIF
                                    177 	.globl _CP1HYP1
                                    178 	.globl _CP1HYP0
                                    179 	.globl _CP1HYN1
                                    180 	.globl _CP1HYN0
                                    181 	.globl _CP0EN
                                    182 	.globl _CP0OUT
                                    183 	.globl _CP0RIF
                                    184 	.globl _CP0FIF
                                    185 	.globl _CP0HYP1
                                    186 	.globl _CP0HYP0
                                    187 	.globl _CP0HYN1
                                    188 	.globl _CP0HYN0
                                    189 	.globl _TF1
                                    190 	.globl _TR1
                                    191 	.globl _TF0
                                    192 	.globl _TR0
                                    193 	.globl _IE1
                                    194 	.globl _IT1
                                    195 	.globl _IE0
                                    196 	.globl _IT0
                                    197 	.globl _P0_7
                                    198 	.globl _P0_6
                                    199 	.globl _P0_5
                                    200 	.globl _P0_4
                                    201 	.globl _P0_3
                                    202 	.globl _P0_2
                                    203 	.globl _P0_1
                                    204 	.globl _P0_0
                                    205 	.globl _MAC0RND
                                    206 	.globl _MAC0ACC
                                    207 	.globl _MAC0A
                                    208 	.globl _RCAP4
                                    209 	.globl _TMR4
                                    210 	.globl _DAC1
                                    211 	.globl _RCAP3
                                    212 	.globl _TMR3
                                    213 	.globl _PCA0CP5
                                    214 	.globl _PCA0CP4
                                    215 	.globl _PCA0CP3
                                    216 	.globl _PCA0CP2
                                    217 	.globl _PCA0CP1
                                    218 	.globl _PCA0CP0
                                    219 	.globl _PCA0
                                    220 	.globl _DAC0
                                    221 	.globl _ADC0LT
                                    222 	.globl _ADC0GT
                                    223 	.globl _ADC0
                                    224 	.globl _RCAP2
                                    225 	.globl _TMR2
                                    226 	.globl _TMR1
                                    227 	.globl _TMR0
                                    228 	.globl _P7
                                    229 	.globl _P6
                                    230 	.globl _XBR2
                                    231 	.globl _XBR1
                                    232 	.globl _XBR0
                                    233 	.globl _P5
                                    234 	.globl _P4
                                    235 	.globl _FLACL
                                    236 	.globl _P1MDIN
                                    237 	.globl _P3MDOUT
                                    238 	.globl _P2MDOUT
                                    239 	.globl _P1MDOUT
                                    240 	.globl _P0MDOUT
                                    241 	.globl _CCH0LC
                                    242 	.globl _CCH0TN
                                    243 	.globl _CCH0CN
                                    244 	.globl _P7MDOUT
                                    245 	.globl _P6MDOUT
                                    246 	.globl _P5MDOUT
                                    247 	.globl _P4MDOUT
                                    248 	.globl _CCH0MA
                                    249 	.globl _CLKSEL
                                    250 	.globl _SFRPGCN
                                    251 	.globl _PLL0FLT
                                    252 	.globl _PLL0MUL
                                    253 	.globl _PLL0DIV
                                    254 	.globl _OSCXCN
                                    255 	.globl _OSCICL
                                    256 	.globl _OSCICN
                                    257 	.globl _PLL0CN
                                    258 	.globl _FLSTAT
                                    259 	.globl _MAC0RNDH
                                    260 	.globl _MAC0RNDL
                                    261 	.globl _MAC0CF
                                    262 	.globl _MAC0AH
                                    263 	.globl _MAC0AL
                                    264 	.globl _MAC0STA
                                    265 	.globl _MAC0OVR
                                    266 	.globl _MAC0ACC3
                                    267 	.globl _MAC0ACC2
                                    268 	.globl _MAC0ACC1
                                    269 	.globl _MAC0ACC0
                                    270 	.globl _MAC0BH
                                    271 	.globl _MAC0BL
                                    272 	.globl _ADC2CN
                                    273 	.globl _TMR4H
                                    274 	.globl _TMR4L
                                    275 	.globl _RCAP4H
                                    276 	.globl _RCAP4L
                                    277 	.globl _TMR4CF
                                    278 	.globl _TMR4CN
                                    279 	.globl _ADC2LT
                                    280 	.globl _ADC2GT
                                    281 	.globl _ADC2
                                    282 	.globl _ADC2CF
                                    283 	.globl _AMX2SL
                                    284 	.globl _AMX2CF
                                    285 	.globl _CPT1MD
                                    286 	.globl _CPT1CN
                                    287 	.globl _DAC1CN
                                    288 	.globl _DAC1H
                                    289 	.globl _DAC1L
                                    290 	.globl _TMR3H
                                    291 	.globl _TMR3L
                                    292 	.globl _RCAP3H
                                    293 	.globl _RCAP3L
                                    294 	.globl _TMR3CF
                                    295 	.globl _TMR3CN
                                    296 	.globl _SBUF1
                                    297 	.globl _SCON1
                                    298 	.globl _CPT0MD
                                    299 	.globl _CPT0CN
                                    300 	.globl _PCA0CPH1
                                    301 	.globl _PCA0CPL1
                                    302 	.globl _PCA0CPH0
                                    303 	.globl _PCA0CPL0
                                    304 	.globl _PCA0H
                                    305 	.globl _PCA0L
                                    306 	.globl _SPI0CN
                                    307 	.globl _RSTSRC
                                    308 	.globl _PCA0CPH4
                                    309 	.globl _PCA0CPL4
                                    310 	.globl _PCA0CPH3
                                    311 	.globl _PCA0CPL3
                                    312 	.globl _PCA0CPH2
                                    313 	.globl _PCA0CPL2
                                    314 	.globl _ADC0CN
                                    315 	.globl _PCA0CPH5
                                    316 	.globl _PCA0CPL5
                                    317 	.globl _PCA0CPM5
                                    318 	.globl _PCA0CPM4
                                    319 	.globl _PCA0CPM3
                                    320 	.globl _PCA0CPM2
                                    321 	.globl _PCA0CPM1
                                    322 	.globl _PCA0CPM0
                                    323 	.globl _PCA0MD
                                    324 	.globl _PCA0CN
                                    325 	.globl _DAC0CN
                                    326 	.globl _DAC0H
                                    327 	.globl _DAC0L
                                    328 	.globl _REF0CN
                                    329 	.globl _SMB0CR
                                    330 	.globl _TH2
                                    331 	.globl _TMR2H
                                    332 	.globl _TL2
                                    333 	.globl _TMR2L
                                    334 	.globl _RCAP2H
                                    335 	.globl _RCAP2L
                                    336 	.globl _TMR2CF
                                    337 	.globl _TMR2CN
                                    338 	.globl _ADC0LTH
                                    339 	.globl _ADC0LTL
                                    340 	.globl _ADC0GTH
                                    341 	.globl _ADC0GTL
                                    342 	.globl _SMB0ADR
                                    343 	.globl _SMB0DAT
                                    344 	.globl _SMB0STA
                                    345 	.globl _SMB0CN
                                    346 	.globl _ADC0H
                                    347 	.globl _ADC0L
                                    348 	.globl _ADC0CF
                                    349 	.globl _AMX0SL
                                    350 	.globl _AMX0CF
                                    351 	.globl _SADEN0
                                    352 	.globl _FLSCL
                                    353 	.globl _SADDR0
                                    354 	.globl _EMI0CF
                                    355 	.globl __XPAGE
                                    356 	.globl _EMI0CN
                                    357 	.globl _EMI0TC
                                    358 	.globl _SPI0CKR
                                    359 	.globl _SPI0DAT
                                    360 	.globl _SPI0CFG
                                    361 	.globl _SBUF
                                    362 	.globl _SBUF0
                                    363 	.globl _SCON
                                    364 	.globl _SCON0
                                    365 	.globl _SSTA0
                                    366 	.globl _PSCTL
                                    367 	.globl _CKCON
                                    368 	.globl _TH1
                                    369 	.globl _TH0
                                    370 	.globl _TL1
                                    371 	.globl _TL0
                                    372 	.globl _TMOD
                                    373 	.globl _TCON
                                    374 	.globl _WDTCN
                                    375 	.globl _EIP2
                                    376 	.globl _EIP1
                                    377 	.globl _B
                                    378 	.globl _EIE2
                                    379 	.globl _EIE1
                                    380 	.globl _ACC
                                    381 	.globl _PSW
                                    382 	.globl _IP
                                    383 	.globl _PSBANK
                                    384 	.globl _P3
                                    385 	.globl _IE
                                    386 	.globl _P2
                                    387 	.globl _P1
                                    388 	.globl _PCON
                                    389 	.globl _SFRLAST
                                    390 	.globl _SFRNEXT
                                    391 	.globl _SFRPAGE
                                    392 	.globl _DPH
                                    393 	.globl _DPL
                                    394 	.globl _SP
                                    395 	.globl _P0
                                    396 	.globl _SW2press
                                    397 	.globl _putchar
                                    398 	.globl _getchar
                                    399 	.globl _main
                                    400 	.globl _SW2_ISR
                                    401 	.globl _PORT_INIT
                                    402 	.globl _SYSCLK_INIT
                                    403 	.globl _UART0_INIT
                                    404 ;--------------------------------------------------------
                                    405 ; special function registers
                                    406 ;--------------------------------------------------------
                                    407 	.area RSEG    (ABS,DATA)
      000000                        408 	.org 0x0000
                           000080   409 G$P0$0$0 == 0x0080
                           000080   410 _P0	=	0x0080
                           000081   411 G$SP$0$0 == 0x0081
                           000081   412 _SP	=	0x0081
                           000082   413 G$DPL$0$0 == 0x0082
                           000082   414 _DPL	=	0x0082
                           000083   415 G$DPH$0$0 == 0x0083
                           000083   416 _DPH	=	0x0083
                           000084   417 G$SFRPAGE$0$0 == 0x0084
                           000084   418 _SFRPAGE	=	0x0084
                           000085   419 G$SFRNEXT$0$0 == 0x0085
                           000085   420 _SFRNEXT	=	0x0085
                           000086   421 G$SFRLAST$0$0 == 0x0086
                           000086   422 _SFRLAST	=	0x0086
                           000087   423 G$PCON$0$0 == 0x0087
                           000087   424 _PCON	=	0x0087
                           000090   425 G$P1$0$0 == 0x0090
                           000090   426 _P1	=	0x0090
                           0000A0   427 G$P2$0$0 == 0x00a0
                           0000A0   428 _P2	=	0x00a0
                           0000A8   429 G$IE$0$0 == 0x00a8
                           0000A8   430 _IE	=	0x00a8
                           0000B0   431 G$P3$0$0 == 0x00b0
                           0000B0   432 _P3	=	0x00b0
                           0000B1   433 G$PSBANK$0$0 == 0x00b1
                           0000B1   434 _PSBANK	=	0x00b1
                           0000B8   435 G$IP$0$0 == 0x00b8
                           0000B8   436 _IP	=	0x00b8
                           0000D0   437 G$PSW$0$0 == 0x00d0
                           0000D0   438 _PSW	=	0x00d0
                           0000E0   439 G$ACC$0$0 == 0x00e0
                           0000E0   440 _ACC	=	0x00e0
                           0000E6   441 G$EIE1$0$0 == 0x00e6
                           0000E6   442 _EIE1	=	0x00e6
                           0000E7   443 G$EIE2$0$0 == 0x00e7
                           0000E7   444 _EIE2	=	0x00e7
                           0000F0   445 G$B$0$0 == 0x00f0
                           0000F0   446 _B	=	0x00f0
                           0000F6   447 G$EIP1$0$0 == 0x00f6
                           0000F6   448 _EIP1	=	0x00f6
                           0000F7   449 G$EIP2$0$0 == 0x00f7
                           0000F7   450 _EIP2	=	0x00f7
                           0000FF   451 G$WDTCN$0$0 == 0x00ff
                           0000FF   452 _WDTCN	=	0x00ff
                           000088   453 G$TCON$0$0 == 0x0088
                           000088   454 _TCON	=	0x0088
                           000089   455 G$TMOD$0$0 == 0x0089
                           000089   456 _TMOD	=	0x0089
                           00008A   457 G$TL0$0$0 == 0x008a
                           00008A   458 _TL0	=	0x008a
                           00008B   459 G$TL1$0$0 == 0x008b
                           00008B   460 _TL1	=	0x008b
                           00008C   461 G$TH0$0$0 == 0x008c
                           00008C   462 _TH0	=	0x008c
                           00008D   463 G$TH1$0$0 == 0x008d
                           00008D   464 _TH1	=	0x008d
                           00008E   465 G$CKCON$0$0 == 0x008e
                           00008E   466 _CKCON	=	0x008e
                           00008F   467 G$PSCTL$0$0 == 0x008f
                           00008F   468 _PSCTL	=	0x008f
                           000091   469 G$SSTA0$0$0 == 0x0091
                           000091   470 _SSTA0	=	0x0091
                           000098   471 G$SCON0$0$0 == 0x0098
                           000098   472 _SCON0	=	0x0098
                           000098   473 G$SCON$0$0 == 0x0098
                           000098   474 _SCON	=	0x0098
                           000099   475 G$SBUF0$0$0 == 0x0099
                           000099   476 _SBUF0	=	0x0099
                           000099   477 G$SBUF$0$0 == 0x0099
                           000099   478 _SBUF	=	0x0099
                           00009A   479 G$SPI0CFG$0$0 == 0x009a
                           00009A   480 _SPI0CFG	=	0x009a
                           00009B   481 G$SPI0DAT$0$0 == 0x009b
                           00009B   482 _SPI0DAT	=	0x009b
                           00009D   483 G$SPI0CKR$0$0 == 0x009d
                           00009D   484 _SPI0CKR	=	0x009d
                           0000A1   485 G$EMI0TC$0$0 == 0x00a1
                           0000A1   486 _EMI0TC	=	0x00a1
                           0000A2   487 G$EMI0CN$0$0 == 0x00a2
                           0000A2   488 _EMI0CN	=	0x00a2
                           0000A2   489 G$_XPAGE$0$0 == 0x00a2
                           0000A2   490 __XPAGE	=	0x00a2
                           0000A3   491 G$EMI0CF$0$0 == 0x00a3
                           0000A3   492 _EMI0CF	=	0x00a3
                           0000A9   493 G$SADDR0$0$0 == 0x00a9
                           0000A9   494 _SADDR0	=	0x00a9
                           0000B7   495 G$FLSCL$0$0 == 0x00b7
                           0000B7   496 _FLSCL	=	0x00b7
                           0000B9   497 G$SADEN0$0$0 == 0x00b9
                           0000B9   498 _SADEN0	=	0x00b9
                           0000BA   499 G$AMX0CF$0$0 == 0x00ba
                           0000BA   500 _AMX0CF	=	0x00ba
                           0000BB   501 G$AMX0SL$0$0 == 0x00bb
                           0000BB   502 _AMX0SL	=	0x00bb
                           0000BC   503 G$ADC0CF$0$0 == 0x00bc
                           0000BC   504 _ADC0CF	=	0x00bc
                           0000BE   505 G$ADC0L$0$0 == 0x00be
                           0000BE   506 _ADC0L	=	0x00be
                           0000BF   507 G$ADC0H$0$0 == 0x00bf
                           0000BF   508 _ADC0H	=	0x00bf
                           0000C0   509 G$SMB0CN$0$0 == 0x00c0
                           0000C0   510 _SMB0CN	=	0x00c0
                           0000C1   511 G$SMB0STA$0$0 == 0x00c1
                           0000C1   512 _SMB0STA	=	0x00c1
                           0000C2   513 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   514 _SMB0DAT	=	0x00c2
                           0000C3   515 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   516 _SMB0ADR	=	0x00c3
                           0000C4   517 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   518 _ADC0GTL	=	0x00c4
                           0000C5   519 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   520 _ADC0GTH	=	0x00c5
                           0000C6   521 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   522 _ADC0LTL	=	0x00c6
                           0000C7   523 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   524 _ADC0LTH	=	0x00c7
                           0000C8   525 G$TMR2CN$0$0 == 0x00c8
                           0000C8   526 _TMR2CN	=	0x00c8
                           0000C9   527 G$TMR2CF$0$0 == 0x00c9
                           0000C9   528 _TMR2CF	=	0x00c9
                           0000CA   529 G$RCAP2L$0$0 == 0x00ca
                           0000CA   530 _RCAP2L	=	0x00ca
                           0000CB   531 G$RCAP2H$0$0 == 0x00cb
                           0000CB   532 _RCAP2H	=	0x00cb
                           0000CC   533 G$TMR2L$0$0 == 0x00cc
                           0000CC   534 _TMR2L	=	0x00cc
                           0000CC   535 G$TL2$0$0 == 0x00cc
                           0000CC   536 _TL2	=	0x00cc
                           0000CD   537 G$TMR2H$0$0 == 0x00cd
                           0000CD   538 _TMR2H	=	0x00cd
                           0000CD   539 G$TH2$0$0 == 0x00cd
                           0000CD   540 _TH2	=	0x00cd
                           0000CF   541 G$SMB0CR$0$0 == 0x00cf
                           0000CF   542 _SMB0CR	=	0x00cf
                           0000D1   543 G$REF0CN$0$0 == 0x00d1
                           0000D1   544 _REF0CN	=	0x00d1
                           0000D2   545 G$DAC0L$0$0 == 0x00d2
                           0000D2   546 _DAC0L	=	0x00d2
                           0000D3   547 G$DAC0H$0$0 == 0x00d3
                           0000D3   548 _DAC0H	=	0x00d3
                           0000D4   549 G$DAC0CN$0$0 == 0x00d4
                           0000D4   550 _DAC0CN	=	0x00d4
                           0000D8   551 G$PCA0CN$0$0 == 0x00d8
                           0000D8   552 _PCA0CN	=	0x00d8
                           0000D9   553 G$PCA0MD$0$0 == 0x00d9
                           0000D9   554 _PCA0MD	=	0x00d9
                           0000DA   555 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   556 _PCA0CPM0	=	0x00da
                           0000DB   557 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   558 _PCA0CPM1	=	0x00db
                           0000DC   559 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   560 _PCA0CPM2	=	0x00dc
                           0000DD   561 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   562 _PCA0CPM3	=	0x00dd
                           0000DE   563 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   564 _PCA0CPM4	=	0x00de
                           0000DF   565 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   566 _PCA0CPM5	=	0x00df
                           0000E1   567 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   568 _PCA0CPL5	=	0x00e1
                           0000E2   569 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   570 _PCA0CPH5	=	0x00e2
                           0000E8   571 G$ADC0CN$0$0 == 0x00e8
                           0000E8   572 _ADC0CN	=	0x00e8
                           0000E9   573 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   574 _PCA0CPL2	=	0x00e9
                           0000EA   575 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   576 _PCA0CPH2	=	0x00ea
                           0000EB   577 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   578 _PCA0CPL3	=	0x00eb
                           0000EC   579 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   580 _PCA0CPH3	=	0x00ec
                           0000ED   581 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   582 _PCA0CPL4	=	0x00ed
                           0000EE   583 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   584 _PCA0CPH4	=	0x00ee
                           0000EF   585 G$RSTSRC$0$0 == 0x00ef
                           0000EF   586 _RSTSRC	=	0x00ef
                           0000F8   587 G$SPI0CN$0$0 == 0x00f8
                           0000F8   588 _SPI0CN	=	0x00f8
                           0000F9   589 G$PCA0L$0$0 == 0x00f9
                           0000F9   590 _PCA0L	=	0x00f9
                           0000FA   591 G$PCA0H$0$0 == 0x00fa
                           0000FA   592 _PCA0H	=	0x00fa
                           0000FB   593 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   594 _PCA0CPL0	=	0x00fb
                           0000FC   595 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   596 _PCA0CPH0	=	0x00fc
                           0000FD   597 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   598 _PCA0CPL1	=	0x00fd
                           0000FE   599 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   600 _PCA0CPH1	=	0x00fe
                           000088   601 G$CPT0CN$0$0 == 0x0088
                           000088   602 _CPT0CN	=	0x0088
                           000089   603 G$CPT0MD$0$0 == 0x0089
                           000089   604 _CPT0MD	=	0x0089
                           000098   605 G$SCON1$0$0 == 0x0098
                           000098   606 _SCON1	=	0x0098
                           000099   607 G$SBUF1$0$0 == 0x0099
                           000099   608 _SBUF1	=	0x0099
                           0000C8   609 G$TMR3CN$0$0 == 0x00c8
                           0000C8   610 _TMR3CN	=	0x00c8
                           0000C9   611 G$TMR3CF$0$0 == 0x00c9
                           0000C9   612 _TMR3CF	=	0x00c9
                           0000CA   613 G$RCAP3L$0$0 == 0x00ca
                           0000CA   614 _RCAP3L	=	0x00ca
                           0000CB   615 G$RCAP3H$0$0 == 0x00cb
                           0000CB   616 _RCAP3H	=	0x00cb
                           0000CC   617 G$TMR3L$0$0 == 0x00cc
                           0000CC   618 _TMR3L	=	0x00cc
                           0000CD   619 G$TMR3H$0$0 == 0x00cd
                           0000CD   620 _TMR3H	=	0x00cd
                           0000D2   621 G$DAC1L$0$0 == 0x00d2
                           0000D2   622 _DAC1L	=	0x00d2
                           0000D3   623 G$DAC1H$0$0 == 0x00d3
                           0000D3   624 _DAC1H	=	0x00d3
                           0000D4   625 G$DAC1CN$0$0 == 0x00d4
                           0000D4   626 _DAC1CN	=	0x00d4
                           000088   627 G$CPT1CN$0$0 == 0x0088
                           000088   628 _CPT1CN	=	0x0088
                           000089   629 G$CPT1MD$0$0 == 0x0089
                           000089   630 _CPT1MD	=	0x0089
                           0000BA   631 G$AMX2CF$0$0 == 0x00ba
                           0000BA   632 _AMX2CF	=	0x00ba
                           0000BB   633 G$AMX2SL$0$0 == 0x00bb
                           0000BB   634 _AMX2SL	=	0x00bb
                           0000BC   635 G$ADC2CF$0$0 == 0x00bc
                           0000BC   636 _ADC2CF	=	0x00bc
                           0000BE   637 G$ADC2$0$0 == 0x00be
                           0000BE   638 _ADC2	=	0x00be
                           0000C4   639 G$ADC2GT$0$0 == 0x00c4
                           0000C4   640 _ADC2GT	=	0x00c4
                           0000C6   641 G$ADC2LT$0$0 == 0x00c6
                           0000C6   642 _ADC2LT	=	0x00c6
                           0000C8   643 G$TMR4CN$0$0 == 0x00c8
                           0000C8   644 _TMR4CN	=	0x00c8
                           0000C9   645 G$TMR4CF$0$0 == 0x00c9
                           0000C9   646 _TMR4CF	=	0x00c9
                           0000CA   647 G$RCAP4L$0$0 == 0x00ca
                           0000CA   648 _RCAP4L	=	0x00ca
                           0000CB   649 G$RCAP4H$0$0 == 0x00cb
                           0000CB   650 _RCAP4H	=	0x00cb
                           0000CC   651 G$TMR4L$0$0 == 0x00cc
                           0000CC   652 _TMR4L	=	0x00cc
                           0000CD   653 G$TMR4H$0$0 == 0x00cd
                           0000CD   654 _TMR4H	=	0x00cd
                           0000E8   655 G$ADC2CN$0$0 == 0x00e8
                           0000E8   656 _ADC2CN	=	0x00e8
                           000091   657 G$MAC0BL$0$0 == 0x0091
                           000091   658 _MAC0BL	=	0x0091
                           000092   659 G$MAC0BH$0$0 == 0x0092
                           000092   660 _MAC0BH	=	0x0092
                           000093   661 G$MAC0ACC0$0$0 == 0x0093
                           000093   662 _MAC0ACC0	=	0x0093
                           000094   663 G$MAC0ACC1$0$0 == 0x0094
                           000094   664 _MAC0ACC1	=	0x0094
                           000095   665 G$MAC0ACC2$0$0 == 0x0095
                           000095   666 _MAC0ACC2	=	0x0095
                           000096   667 G$MAC0ACC3$0$0 == 0x0096
                           000096   668 _MAC0ACC3	=	0x0096
                           000097   669 G$MAC0OVR$0$0 == 0x0097
                           000097   670 _MAC0OVR	=	0x0097
                           0000C0   671 G$MAC0STA$0$0 == 0x00c0
                           0000C0   672 _MAC0STA	=	0x00c0
                           0000C1   673 G$MAC0AL$0$0 == 0x00c1
                           0000C1   674 _MAC0AL	=	0x00c1
                           0000C2   675 G$MAC0AH$0$0 == 0x00c2
                           0000C2   676 _MAC0AH	=	0x00c2
                           0000C3   677 G$MAC0CF$0$0 == 0x00c3
                           0000C3   678 _MAC0CF	=	0x00c3
                           0000CE   679 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   680 _MAC0RNDL	=	0x00ce
                           0000CF   681 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   682 _MAC0RNDH	=	0x00cf
                           000088   683 G$FLSTAT$0$0 == 0x0088
                           000088   684 _FLSTAT	=	0x0088
                           000089   685 G$PLL0CN$0$0 == 0x0089
                           000089   686 _PLL0CN	=	0x0089
                           00008A   687 G$OSCICN$0$0 == 0x008a
                           00008A   688 _OSCICN	=	0x008a
                           00008B   689 G$OSCICL$0$0 == 0x008b
                           00008B   690 _OSCICL	=	0x008b
                           00008C   691 G$OSCXCN$0$0 == 0x008c
                           00008C   692 _OSCXCN	=	0x008c
                           00008D   693 G$PLL0DIV$0$0 == 0x008d
                           00008D   694 _PLL0DIV	=	0x008d
                           00008E   695 G$PLL0MUL$0$0 == 0x008e
                           00008E   696 _PLL0MUL	=	0x008e
                           00008F   697 G$PLL0FLT$0$0 == 0x008f
                           00008F   698 _PLL0FLT	=	0x008f
                           000096   699 G$SFRPGCN$0$0 == 0x0096
                           000096   700 _SFRPGCN	=	0x0096
                           000097   701 G$CLKSEL$0$0 == 0x0097
                           000097   702 _CLKSEL	=	0x0097
                           00009A   703 G$CCH0MA$0$0 == 0x009a
                           00009A   704 _CCH0MA	=	0x009a
                           00009C   705 G$P4MDOUT$0$0 == 0x009c
                           00009C   706 _P4MDOUT	=	0x009c
                           00009D   707 G$P5MDOUT$0$0 == 0x009d
                           00009D   708 _P5MDOUT	=	0x009d
                           00009E   709 G$P6MDOUT$0$0 == 0x009e
                           00009E   710 _P6MDOUT	=	0x009e
                           00009F   711 G$P7MDOUT$0$0 == 0x009f
                           00009F   712 _P7MDOUT	=	0x009f
                           0000A1   713 G$CCH0CN$0$0 == 0x00a1
                           0000A1   714 _CCH0CN	=	0x00a1
                           0000A2   715 G$CCH0TN$0$0 == 0x00a2
                           0000A2   716 _CCH0TN	=	0x00a2
                           0000A3   717 G$CCH0LC$0$0 == 0x00a3
                           0000A3   718 _CCH0LC	=	0x00a3
                           0000A4   719 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   720 _P0MDOUT	=	0x00a4
                           0000A5   721 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   722 _P1MDOUT	=	0x00a5
                           0000A6   723 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   724 _P2MDOUT	=	0x00a6
                           0000A7   725 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   726 _P3MDOUT	=	0x00a7
                           0000AD   727 G$P1MDIN$0$0 == 0x00ad
                           0000AD   728 _P1MDIN	=	0x00ad
                           0000B7   729 G$FLACL$0$0 == 0x00b7
                           0000B7   730 _FLACL	=	0x00b7
                           0000C8   731 G$P4$0$0 == 0x00c8
                           0000C8   732 _P4	=	0x00c8
                           0000D8   733 G$P5$0$0 == 0x00d8
                           0000D8   734 _P5	=	0x00d8
                           0000E1   735 G$XBR0$0$0 == 0x00e1
                           0000E1   736 _XBR0	=	0x00e1
                           0000E2   737 G$XBR1$0$0 == 0x00e2
                           0000E2   738 _XBR1	=	0x00e2
                           0000E3   739 G$XBR2$0$0 == 0x00e3
                           0000E3   740 _XBR2	=	0x00e3
                           0000E8   741 G$P6$0$0 == 0x00e8
                           0000E8   742 _P6	=	0x00e8
                           0000F8   743 G$P7$0$0 == 0x00f8
                           0000F8   744 _P7	=	0x00f8
                           008C8A   745 G$TMR0$0$0 == 0x8c8a
                           008C8A   746 _TMR0	=	0x8c8a
                           008D8B   747 G$TMR1$0$0 == 0x8d8b
                           008D8B   748 _TMR1	=	0x8d8b
                           00CDCC   749 G$TMR2$0$0 == 0xcdcc
                           00CDCC   750 _TMR2	=	0xcdcc
                           00CBCA   751 G$RCAP2$0$0 == 0xcbca
                           00CBCA   752 _RCAP2	=	0xcbca
                           00BFBE   753 G$ADC0$0$0 == 0xbfbe
                           00BFBE   754 _ADC0	=	0xbfbe
                           00C5C4   755 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   756 _ADC0GT	=	0xc5c4
                           00C7C6   757 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   758 _ADC0LT	=	0xc7c6
                           00D3D2   759 G$DAC0$0$0 == 0xd3d2
                           00D3D2   760 _DAC0	=	0xd3d2
                           00FAF9   761 G$PCA0$0$0 == 0xfaf9
                           00FAF9   762 _PCA0	=	0xfaf9
                           00FCFB   763 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   764 _PCA0CP0	=	0xfcfb
                           00FEFD   765 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   766 _PCA0CP1	=	0xfefd
                           00EAE9   767 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   768 _PCA0CP2	=	0xeae9
                           00ECEB   769 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   770 _PCA0CP3	=	0xeceb
                           00EEED   771 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   772 _PCA0CP4	=	0xeeed
                           00E2E1   773 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   774 _PCA0CP5	=	0xe2e1
                           00CDCC   775 G$TMR3$0$0 == 0xcdcc
                           00CDCC   776 _TMR3	=	0xcdcc
                           00CBCA   777 G$RCAP3$0$0 == 0xcbca
                           00CBCA   778 _RCAP3	=	0xcbca
                           00D3D2   779 G$DAC1$0$0 == 0xd3d2
                           00D3D2   780 _DAC1	=	0xd3d2
                           00CDCC   781 G$TMR4$0$0 == 0xcdcc
                           00CDCC   782 _TMR4	=	0xcdcc
                           00CBCA   783 G$RCAP4$0$0 == 0xcbca
                           00CBCA   784 _RCAP4	=	0xcbca
                           00C2C1   785 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   786 _MAC0A	=	0xc2c1
                           96959493   787 G$MAC0ACC$0$0 == 0x96959493
                           96959493   788 _MAC0ACC	=	0x96959493
                           00CFCE   789 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   790 _MAC0RND	=	0xcfce
                                    791 ;--------------------------------------------------------
                                    792 ; special function bits
                                    793 ;--------------------------------------------------------
                                    794 	.area RSEG    (ABS,DATA)
      000000                        795 	.org 0x0000
                           000080   796 G$P0_0$0$0 == 0x0080
                           000080   797 _P0_0	=	0x0080
                           000081   798 G$P0_1$0$0 == 0x0081
                           000081   799 _P0_1	=	0x0081
                           000082   800 G$P0_2$0$0 == 0x0082
                           000082   801 _P0_2	=	0x0082
                           000083   802 G$P0_3$0$0 == 0x0083
                           000083   803 _P0_3	=	0x0083
                           000084   804 G$P0_4$0$0 == 0x0084
                           000084   805 _P0_4	=	0x0084
                           000085   806 G$P0_5$0$0 == 0x0085
                           000085   807 _P0_5	=	0x0085
                           000086   808 G$P0_6$0$0 == 0x0086
                           000086   809 _P0_6	=	0x0086
                           000087   810 G$P0_7$0$0 == 0x0087
                           000087   811 _P0_7	=	0x0087
                           000088   812 G$IT0$0$0 == 0x0088
                           000088   813 _IT0	=	0x0088
                           000089   814 G$IE0$0$0 == 0x0089
                           000089   815 _IE0	=	0x0089
                           00008A   816 G$IT1$0$0 == 0x008a
                           00008A   817 _IT1	=	0x008a
                           00008B   818 G$IE1$0$0 == 0x008b
                           00008B   819 _IE1	=	0x008b
                           00008C   820 G$TR0$0$0 == 0x008c
                           00008C   821 _TR0	=	0x008c
                           00008D   822 G$TF0$0$0 == 0x008d
                           00008D   823 _TF0	=	0x008d
                           00008E   824 G$TR1$0$0 == 0x008e
                           00008E   825 _TR1	=	0x008e
                           00008F   826 G$TF1$0$0 == 0x008f
                           00008F   827 _TF1	=	0x008f
                           000088   828 G$CP0HYN0$0$0 == 0x0088
                           000088   829 _CP0HYN0	=	0x0088
                           000089   830 G$CP0HYN1$0$0 == 0x0089
                           000089   831 _CP0HYN1	=	0x0089
                           00008A   832 G$CP0HYP0$0$0 == 0x008a
                           00008A   833 _CP0HYP0	=	0x008a
                           00008B   834 G$CP0HYP1$0$0 == 0x008b
                           00008B   835 _CP0HYP1	=	0x008b
                           00008C   836 G$CP0FIF$0$0 == 0x008c
                           00008C   837 _CP0FIF	=	0x008c
                           00008D   838 G$CP0RIF$0$0 == 0x008d
                           00008D   839 _CP0RIF	=	0x008d
                           00008E   840 G$CP0OUT$0$0 == 0x008e
                           00008E   841 _CP0OUT	=	0x008e
                           00008F   842 G$CP0EN$0$0 == 0x008f
                           00008F   843 _CP0EN	=	0x008f
                           000088   844 G$CP1HYN0$0$0 == 0x0088
                           000088   845 _CP1HYN0	=	0x0088
                           000089   846 G$CP1HYN1$0$0 == 0x0089
                           000089   847 _CP1HYN1	=	0x0089
                           00008A   848 G$CP1HYP0$0$0 == 0x008a
                           00008A   849 _CP1HYP0	=	0x008a
                           00008B   850 G$CP1HYP1$0$0 == 0x008b
                           00008B   851 _CP1HYP1	=	0x008b
                           00008C   852 G$CP1FIF$0$0 == 0x008c
                           00008C   853 _CP1FIF	=	0x008c
                           00008D   854 G$CP1RIF$0$0 == 0x008d
                           00008D   855 _CP1RIF	=	0x008d
                           00008E   856 G$CP1OUT$0$0 == 0x008e
                           00008E   857 _CP1OUT	=	0x008e
                           00008F   858 G$CP1EN$0$0 == 0x008f
                           00008F   859 _CP1EN	=	0x008f
                           000088   860 G$FLHBUSY$0$0 == 0x0088
                           000088   861 _FLHBUSY	=	0x0088
                           000090   862 G$P1_0$0$0 == 0x0090
                           000090   863 _P1_0	=	0x0090
                           000091   864 G$P1_1$0$0 == 0x0091
                           000091   865 _P1_1	=	0x0091
                           000092   866 G$P1_2$0$0 == 0x0092
                           000092   867 _P1_2	=	0x0092
                           000093   868 G$P1_3$0$0 == 0x0093
                           000093   869 _P1_3	=	0x0093
                           000094   870 G$P1_4$0$0 == 0x0094
                           000094   871 _P1_4	=	0x0094
                           000095   872 G$P1_5$0$0 == 0x0095
                           000095   873 _P1_5	=	0x0095
                           000096   874 G$P1_6$0$0 == 0x0096
                           000096   875 _P1_6	=	0x0096
                           000097   876 G$P1_7$0$0 == 0x0097
                           000097   877 _P1_7	=	0x0097
                           000098   878 G$RI0$0$0 == 0x0098
                           000098   879 _RI0	=	0x0098
                           000098   880 G$RI$0$0 == 0x0098
                           000098   881 _RI	=	0x0098
                           000099   882 G$TI0$0$0 == 0x0099
                           000099   883 _TI0	=	0x0099
                           000099   884 G$TI$0$0 == 0x0099
                           000099   885 _TI	=	0x0099
                           00009A   886 G$RB80$0$0 == 0x009a
                           00009A   887 _RB80	=	0x009a
                           00009B   888 G$TB80$0$0 == 0x009b
                           00009B   889 _TB80	=	0x009b
                           00009C   890 G$REN0$0$0 == 0x009c
                           00009C   891 _REN0	=	0x009c
                           00009C   892 G$REN$0$0 == 0x009c
                           00009C   893 _REN	=	0x009c
                           00009D   894 G$SM20$0$0 == 0x009d
                           00009D   895 _SM20	=	0x009d
                           00009E   896 G$SM10$0$0 == 0x009e
                           00009E   897 _SM10	=	0x009e
                           00009F   898 G$SM00$0$0 == 0x009f
                           00009F   899 _SM00	=	0x009f
                           000098   900 G$RI1$0$0 == 0x0098
                           000098   901 _RI1	=	0x0098
                           000099   902 G$TI1$0$0 == 0x0099
                           000099   903 _TI1	=	0x0099
                           00009A   904 G$RB81$0$0 == 0x009a
                           00009A   905 _RB81	=	0x009a
                           00009B   906 G$TB81$0$0 == 0x009b
                           00009B   907 _TB81	=	0x009b
                           00009C   908 G$REN1$0$0 == 0x009c
                           00009C   909 _REN1	=	0x009c
                           00009D   910 G$MCE1$0$0 == 0x009d
                           00009D   911 _MCE1	=	0x009d
                           00009F   912 G$S1MODE$0$0 == 0x009f
                           00009F   913 _S1MODE	=	0x009f
                           0000A0   914 G$P2_0$0$0 == 0x00a0
                           0000A0   915 _P2_0	=	0x00a0
                           0000A1   916 G$P2_1$0$0 == 0x00a1
                           0000A1   917 _P2_1	=	0x00a1
                           0000A2   918 G$P2_2$0$0 == 0x00a2
                           0000A2   919 _P2_2	=	0x00a2
                           0000A3   920 G$P2_3$0$0 == 0x00a3
                           0000A3   921 _P2_3	=	0x00a3
                           0000A4   922 G$P2_4$0$0 == 0x00a4
                           0000A4   923 _P2_4	=	0x00a4
                           0000A5   924 G$P2_5$0$0 == 0x00a5
                           0000A5   925 _P2_5	=	0x00a5
                           0000A6   926 G$P2_6$0$0 == 0x00a6
                           0000A6   927 _P2_6	=	0x00a6
                           0000A7   928 G$P2_7$0$0 == 0x00a7
                           0000A7   929 _P2_7	=	0x00a7
                           0000A8   930 G$EX0$0$0 == 0x00a8
                           0000A8   931 _EX0	=	0x00a8
                           0000A9   932 G$ET0$0$0 == 0x00a9
                           0000A9   933 _ET0	=	0x00a9
                           0000AA   934 G$EX1$0$0 == 0x00aa
                           0000AA   935 _EX1	=	0x00aa
                           0000AB   936 G$ET1$0$0 == 0x00ab
                           0000AB   937 _ET1	=	0x00ab
                           0000AC   938 G$ES0$0$0 == 0x00ac
                           0000AC   939 _ES0	=	0x00ac
                           0000AC   940 G$ES$0$0 == 0x00ac
                           0000AC   941 _ES	=	0x00ac
                           0000AD   942 G$ET2$0$0 == 0x00ad
                           0000AD   943 _ET2	=	0x00ad
                           0000AF   944 G$EA$0$0 == 0x00af
                           0000AF   945 _EA	=	0x00af
                           0000B0   946 G$P3_0$0$0 == 0x00b0
                           0000B0   947 _P3_0	=	0x00b0
                           0000B1   948 G$P3_1$0$0 == 0x00b1
                           0000B1   949 _P3_1	=	0x00b1
                           0000B2   950 G$P3_2$0$0 == 0x00b2
                           0000B2   951 _P3_2	=	0x00b2
                           0000B3   952 G$P3_3$0$0 == 0x00b3
                           0000B3   953 _P3_3	=	0x00b3
                           0000B4   954 G$P3_4$0$0 == 0x00b4
                           0000B4   955 _P3_4	=	0x00b4
                           0000B5   956 G$P3_5$0$0 == 0x00b5
                           0000B5   957 _P3_5	=	0x00b5
                           0000B6   958 G$P3_6$0$0 == 0x00b6
                           0000B6   959 _P3_6	=	0x00b6
                           0000B7   960 G$P3_7$0$0 == 0x00b7
                           0000B7   961 _P3_7	=	0x00b7
                           0000B8   962 G$PX0$0$0 == 0x00b8
                           0000B8   963 _PX0	=	0x00b8
                           0000B9   964 G$PT0$0$0 == 0x00b9
                           0000B9   965 _PT0	=	0x00b9
                           0000BA   966 G$PX1$0$0 == 0x00ba
                           0000BA   967 _PX1	=	0x00ba
                           0000BB   968 G$PT1$0$0 == 0x00bb
                           0000BB   969 _PT1	=	0x00bb
                           0000BC   970 G$PS0$0$0 == 0x00bc
                           0000BC   971 _PS0	=	0x00bc
                           0000BC   972 G$PS$0$0 == 0x00bc
                           0000BC   973 _PS	=	0x00bc
                           0000BD   974 G$PT2$0$0 == 0x00bd
                           0000BD   975 _PT2	=	0x00bd
                           0000C0   976 G$SMBTOE$0$0 == 0x00c0
                           0000C0   977 _SMBTOE	=	0x00c0
                           0000C1   978 G$SMBFTE$0$0 == 0x00c1
                           0000C1   979 _SMBFTE	=	0x00c1
                           0000C2   980 G$AA$0$0 == 0x00c2
                           0000C2   981 _AA	=	0x00c2
                           0000C3   982 G$SI$0$0 == 0x00c3
                           0000C3   983 _SI	=	0x00c3
                           0000C4   984 G$STO$0$0 == 0x00c4
                           0000C4   985 _STO	=	0x00c4
                           0000C5   986 G$STA$0$0 == 0x00c5
                           0000C5   987 _STA	=	0x00c5
                           0000C6   988 G$ENSMB$0$0 == 0x00c6
                           0000C6   989 _ENSMB	=	0x00c6
                           0000C7   990 G$BUSY$0$0 == 0x00c7
                           0000C7   991 _BUSY	=	0x00c7
                           0000C0   992 G$MAC0N$0$0 == 0x00c0
                           0000C0   993 _MAC0N	=	0x00c0
                           0000C1   994 G$MAC0SO$0$0 == 0x00c1
                           0000C1   995 _MAC0SO	=	0x00c1
                           0000C2   996 G$MAC0Z$0$0 == 0x00c2
                           0000C2   997 _MAC0Z	=	0x00c2
                           0000C3   998 G$MAC0HO$0$0 == 0x00c3
                           0000C3   999 _MAC0HO	=	0x00c3
                           0000C8  1000 G$CPRL2$0$0 == 0x00c8
                           0000C8  1001 _CPRL2	=	0x00c8
                           0000C9  1002 G$CT2$0$0 == 0x00c9
                           0000C9  1003 _CT2	=	0x00c9
                           0000CA  1004 G$TR2$0$0 == 0x00ca
                           0000CA  1005 _TR2	=	0x00ca
                           0000CB  1006 G$EXEN2$0$0 == 0x00cb
                           0000CB  1007 _EXEN2	=	0x00cb
                           0000CE  1008 G$EXF2$0$0 == 0x00ce
                           0000CE  1009 _EXF2	=	0x00ce
                           0000CF  1010 G$TF2$0$0 == 0x00cf
                           0000CF  1011 _TF2	=	0x00cf
                           0000C8  1012 G$CPRL3$0$0 == 0x00c8
                           0000C8  1013 _CPRL3	=	0x00c8
                           0000C9  1014 G$CT3$0$0 == 0x00c9
                           0000C9  1015 _CT3	=	0x00c9
                           0000CA  1016 G$TR3$0$0 == 0x00ca
                           0000CA  1017 _TR3	=	0x00ca
                           0000CB  1018 G$EXEN3$0$0 == 0x00cb
                           0000CB  1019 _EXEN3	=	0x00cb
                           0000CE  1020 G$EXF3$0$0 == 0x00ce
                           0000CE  1021 _EXF3	=	0x00ce
                           0000CF  1022 G$TF3$0$0 == 0x00cf
                           0000CF  1023 _TF3	=	0x00cf
                           0000C8  1024 G$CPRL4$0$0 == 0x00c8
                           0000C8  1025 _CPRL4	=	0x00c8
                           0000C9  1026 G$CT4$0$0 == 0x00c9
                           0000C9  1027 _CT4	=	0x00c9
                           0000CA  1028 G$TR4$0$0 == 0x00ca
                           0000CA  1029 _TR4	=	0x00ca
                           0000CB  1030 G$EXEN4$0$0 == 0x00cb
                           0000CB  1031 _EXEN4	=	0x00cb
                           0000CE  1032 G$EXF4$0$0 == 0x00ce
                           0000CE  1033 _EXF4	=	0x00ce
                           0000CF  1034 G$TF4$0$0 == 0x00cf
                           0000CF  1035 _TF4	=	0x00cf
                           0000C8  1036 G$P4_0$0$0 == 0x00c8
                           0000C8  1037 _P4_0	=	0x00c8
                           0000C9  1038 G$P4_1$0$0 == 0x00c9
                           0000C9  1039 _P4_1	=	0x00c9
                           0000CA  1040 G$P4_2$0$0 == 0x00ca
                           0000CA  1041 _P4_2	=	0x00ca
                           0000CB  1042 G$P4_3$0$0 == 0x00cb
                           0000CB  1043 _P4_3	=	0x00cb
                           0000CC  1044 G$P4_4$0$0 == 0x00cc
                           0000CC  1045 _P4_4	=	0x00cc
                           0000CD  1046 G$P4_5$0$0 == 0x00cd
                           0000CD  1047 _P4_5	=	0x00cd
                           0000CE  1048 G$P4_6$0$0 == 0x00ce
                           0000CE  1049 _P4_6	=	0x00ce
                           0000CF  1050 G$P4_7$0$0 == 0x00cf
                           0000CF  1051 _P4_7	=	0x00cf
                           0000D0  1052 G$P$0$0 == 0x00d0
                           0000D0  1053 _P	=	0x00d0
                           0000D1  1054 G$F1$0$0 == 0x00d1
                           0000D1  1055 _F1	=	0x00d1
                           0000D2  1056 G$OV$0$0 == 0x00d2
                           0000D2  1057 _OV	=	0x00d2
                           0000D3  1058 G$RS0$0$0 == 0x00d3
                           0000D3  1059 _RS0	=	0x00d3
                           0000D4  1060 G$RS1$0$0 == 0x00d4
                           0000D4  1061 _RS1	=	0x00d4
                           0000D5  1062 G$F0$0$0 == 0x00d5
                           0000D5  1063 _F0	=	0x00d5
                           0000D6  1064 G$AC$0$0 == 0x00d6
                           0000D6  1065 _AC	=	0x00d6
                           0000D7  1066 G$CY$0$0 == 0x00d7
                           0000D7  1067 _CY	=	0x00d7
                           0000D8  1068 G$CCF0$0$0 == 0x00d8
                           0000D8  1069 _CCF0	=	0x00d8
                           0000D9  1070 G$CCF1$0$0 == 0x00d9
                           0000D9  1071 _CCF1	=	0x00d9
                           0000DA  1072 G$CCF2$0$0 == 0x00da
                           0000DA  1073 _CCF2	=	0x00da
                           0000DB  1074 G$CCF3$0$0 == 0x00db
                           0000DB  1075 _CCF3	=	0x00db
                           0000DC  1076 G$CCF4$0$0 == 0x00dc
                           0000DC  1077 _CCF4	=	0x00dc
                           0000DD  1078 G$CCF5$0$0 == 0x00dd
                           0000DD  1079 _CCF5	=	0x00dd
                           0000DE  1080 G$CR$0$0 == 0x00de
                           0000DE  1081 _CR	=	0x00de
                           0000DF  1082 G$CF$0$0 == 0x00df
                           0000DF  1083 _CF	=	0x00df
                           0000D8  1084 G$P5_0$0$0 == 0x00d8
                           0000D8  1085 _P5_0	=	0x00d8
                           0000D9  1086 G$P5_1$0$0 == 0x00d9
                           0000D9  1087 _P5_1	=	0x00d9
                           0000DA  1088 G$P5_2$0$0 == 0x00da
                           0000DA  1089 _P5_2	=	0x00da
                           0000DB  1090 G$P5_3$0$0 == 0x00db
                           0000DB  1091 _P5_3	=	0x00db
                           0000DC  1092 G$P5_4$0$0 == 0x00dc
                           0000DC  1093 _P5_4	=	0x00dc
                           0000DD  1094 G$P5_5$0$0 == 0x00dd
                           0000DD  1095 _P5_5	=	0x00dd
                           0000DE  1096 G$P5_6$0$0 == 0x00de
                           0000DE  1097 _P5_6	=	0x00de
                           0000DF  1098 G$P5_7$0$0 == 0x00df
                           0000DF  1099 _P5_7	=	0x00df
                           0000E8  1100 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1101 _AD0LJST	=	0x00e8
                           0000E9  1102 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1103 _AD0WINT	=	0x00e9
                           0000EA  1104 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1105 _AD0CM0	=	0x00ea
                           0000EB  1106 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1107 _AD0CM1	=	0x00eb
                           0000EC  1108 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1109 _AD0BUSY	=	0x00ec
                           0000ED  1110 G$AD0INT$0$0 == 0x00ed
                           0000ED  1111 _AD0INT	=	0x00ed
                           0000EE  1112 G$AD0TM$0$0 == 0x00ee
                           0000EE  1113 _AD0TM	=	0x00ee
                           0000EF  1114 G$AD0EN$0$0 == 0x00ef
                           0000EF  1115 _AD0EN	=	0x00ef
                           0000E8  1116 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1117 _AD2WINT	=	0x00e8
                           0000E9  1118 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1119 _AD2CM0	=	0x00e9
                           0000EA  1120 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1121 _AD2CM1	=	0x00ea
                           0000EB  1122 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1123 _AD2CM2	=	0x00eb
                           0000EC  1124 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1125 _AD2BUSY	=	0x00ec
                           0000ED  1126 G$AD2INT$0$0 == 0x00ed
                           0000ED  1127 _AD2INT	=	0x00ed
                           0000EE  1128 G$AD2TM$0$0 == 0x00ee
                           0000EE  1129 _AD2TM	=	0x00ee
                           0000EF  1130 G$AD2EN$0$0 == 0x00ef
                           0000EF  1131 _AD2EN	=	0x00ef
                           0000E8  1132 G$P6_0$0$0 == 0x00e8
                           0000E8  1133 _P6_0	=	0x00e8
                           0000E9  1134 G$P6_1$0$0 == 0x00e9
                           0000E9  1135 _P6_1	=	0x00e9
                           0000EA  1136 G$P6_2$0$0 == 0x00ea
                           0000EA  1137 _P6_2	=	0x00ea
                           0000EB  1138 G$P6_3$0$0 == 0x00eb
                           0000EB  1139 _P6_3	=	0x00eb
                           0000EC  1140 G$P6_4$0$0 == 0x00ec
                           0000EC  1141 _P6_4	=	0x00ec
                           0000ED  1142 G$P6_5$0$0 == 0x00ed
                           0000ED  1143 _P6_5	=	0x00ed
                           0000EE  1144 G$P6_6$0$0 == 0x00ee
                           0000EE  1145 _P6_6	=	0x00ee
                           0000EF  1146 G$P6_7$0$0 == 0x00ef
                           0000EF  1147 _P6_7	=	0x00ef
                           0000F8  1148 G$SPIEN$0$0 == 0x00f8
                           0000F8  1149 _SPIEN	=	0x00f8
                           0000F9  1150 G$TXBMT$0$0 == 0x00f9
                           0000F9  1151 _TXBMT	=	0x00f9
                           0000FA  1152 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1153 _NSSMD0	=	0x00fa
                           0000FB  1154 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1155 _NSSMD1	=	0x00fb
                           0000FC  1156 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1157 _RXOVRN	=	0x00fc
                           0000FD  1158 G$MODF$0$0 == 0x00fd
                           0000FD  1159 _MODF	=	0x00fd
                           0000FE  1160 G$WCOL$0$0 == 0x00fe
                           0000FE  1161 _WCOL	=	0x00fe
                           0000FF  1162 G$SPIF$0$0 == 0x00ff
                           0000FF  1163 _SPIF	=	0x00ff
                           0000F8  1164 G$P7_0$0$0 == 0x00f8
                           0000F8  1165 _P7_0	=	0x00f8
                           0000F9  1166 G$P7_1$0$0 == 0x00f9
                           0000F9  1167 _P7_1	=	0x00f9
                           0000FA  1168 G$P7_2$0$0 == 0x00fa
                           0000FA  1169 _P7_2	=	0x00fa
                           0000FB  1170 G$P7_3$0$0 == 0x00fb
                           0000FB  1171 _P7_3	=	0x00fb
                           0000FC  1172 G$P7_4$0$0 == 0x00fc
                           0000FC  1173 _P7_4	=	0x00fc
                           0000FD  1174 G$P7_5$0$0 == 0x00fd
                           0000FD  1175 _P7_5	=	0x00fd
                           0000FE  1176 G$P7_6$0$0 == 0x00fe
                           0000FE  1177 _P7_6	=	0x00fe
                           0000FF  1178 G$P7_7$0$0 == 0x00ff
                           0000FF  1179 _P7_7	=	0x00ff
                                   1180 ;--------------------------------------------------------
                                   1181 ; overlayable register banks
                                   1182 ;--------------------------------------------------------
                                   1183 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1184 	.ds 8
                                   1185 ;--------------------------------------------------------
                                   1186 ; overlayable bit register bank
                                   1187 ;--------------------------------------------------------
                                   1188 	.area BIT_BANK	(REL,OVR,DATA)
      000022                       1189 bits:
      000022                       1190 	.ds 1
                           008000  1191 	b0 = bits[0]
                           008100  1192 	b1 = bits[1]
                           008200  1193 	b2 = bits[2]
                           008300  1194 	b3 = bits[3]
                           008400  1195 	b4 = bits[4]
                           008500  1196 	b5 = bits[5]
                           008600  1197 	b6 = bits[6]
                           008700  1198 	b7 = bits[7]
                                   1199 ;--------------------------------------------------------
                                   1200 ; internal ram data
                                   1201 ;--------------------------------------------------------
                                   1202 	.area DSEG    (DATA)
                                   1203 ;--------------------------------------------------------
                                   1204 ; overlayable items in internal ram 
                                   1205 ;--------------------------------------------------------
                                   1206 	.area	OSEG    (OVR,DATA)
                                   1207 	.area	OSEG    (OVR,DATA)
                                   1208 	.area	OSEG    (OVR,DATA)
                                   1209 	.area	OSEG    (OVR,DATA)
                                   1210 	.area	OSEG    (OVR,DATA)
                                   1211 ;--------------------------------------------------------
                                   1212 ; Stack segment in internal ram 
                                   1213 ;--------------------------------------------------------
                                   1214 	.area	SSEG
      00003D                       1215 __start__stack:
      00003D                       1216 	.ds	1
                                   1217 
                                   1218 ;--------------------------------------------------------
                                   1219 ; indirectly addressable internal ram data
                                   1220 ;--------------------------------------------------------
                                   1221 	.area ISEG    (DATA)
                                   1222 ;--------------------------------------------------------
                                   1223 ; absolute internal ram data
                                   1224 ;--------------------------------------------------------
                                   1225 	.area IABS    (ABS,DATA)
                                   1226 	.area IABS    (ABS,DATA)
                                   1227 ;--------------------------------------------------------
                                   1228 ; bit data
                                   1229 ;--------------------------------------------------------
                                   1230 	.area BSEG    (BIT)
                           000000  1231 G$SW2press$0$0==.
      000000                       1232 _SW2press::
      000000                       1233 	.ds 1
                                   1234 ;--------------------------------------------------------
                                   1235 ; paged external ram data
                                   1236 ;--------------------------------------------------------
                                   1237 	.area PSEG    (PAG,XDATA)
                                   1238 ;--------------------------------------------------------
                                   1239 ; external ram data
                                   1240 ;--------------------------------------------------------
                                   1241 	.area XSEG    (XDATA)
                                   1242 ;--------------------------------------------------------
                                   1243 ; absolute external ram data
                                   1244 ;--------------------------------------------------------
                                   1245 	.area XABS    (ABS,XDATA)
                                   1246 ;--------------------------------------------------------
                                   1247 ; external initialized ram data
                                   1248 ;--------------------------------------------------------
                                   1249 	.area XISEG   (XDATA)
                                   1250 	.area HOME    (CODE)
                                   1251 	.area GSINIT0 (CODE)
                                   1252 	.area GSINIT1 (CODE)
                                   1253 	.area GSINIT2 (CODE)
                                   1254 	.area GSINIT3 (CODE)
                                   1255 	.area GSINIT4 (CODE)
                                   1256 	.area GSINIT5 (CODE)
                                   1257 	.area GSINIT  (CODE)
                                   1258 	.area GSFINAL (CODE)
                                   1259 	.area CSEG    (CODE)
                                   1260 ;--------------------------------------------------------
                                   1261 ; interrupt vector 
                                   1262 ;--------------------------------------------------------
                                   1263 	.area HOME    (CODE)
      000000                       1264 __interrupt_vect:
      000000 02 00 09         [24] 1265 	ljmp	__sdcc_gsinit_startup
      000003 02 00 E9         [24] 1266 	ljmp	_SW2_ISR
                                   1267 ;--------------------------------------------------------
                                   1268 ; global & static initialisations
                                   1269 ;--------------------------------------------------------
                                   1270 	.area HOME    (CODE)
                                   1271 	.area GSINIT  (CODE)
                                   1272 	.area GSFINAL (CODE)
                                   1273 	.area GSINIT  (CODE)
                                   1274 	.globl __sdcc_gsinit_startup
                                   1275 	.globl __sdcc_program_startup
                                   1276 	.globl __start__stack
                                   1277 	.globl __mcs51_genXINIT
                                   1278 	.globl __mcs51_genXRAMCLEAR
                                   1279 	.globl __mcs51_genRAMCLEAR
                           000000  1280 	C$given.c$34$1$34 ==.
                                   1281 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:34: __bit SW2press = 0;
      000062 C2 00            [12] 1282 	clr	_SW2press
                                   1283 	.area GSFINAL (CODE)
      000064 02 00 06         [24] 1284 	ljmp	__sdcc_program_startup
                                   1285 ;--------------------------------------------------------
                                   1286 ; Home
                                   1287 ;--------------------------------------------------------
                                   1288 	.area HOME    (CODE)
                                   1289 	.area HOME    (CODE)
      000006                       1290 __sdcc_program_startup:
      000006 02 00 7C         [24] 1291 	ljmp	_main
                                   1292 ;	return from main will return to caller
                                   1293 ;--------------------------------------------------------
                                   1294 ; code
                                   1295 ;--------------------------------------------------------
                                   1296 	.area CSEG    (CODE)
                                   1297 ;------------------------------------------------------------
                                   1298 ;Allocation info for local variables in function 'putchar'
                                   1299 ;------------------------------------------------------------
                                   1300 ;c                         Allocated to registers r7 
                                   1301 ;------------------------------------------------------------
                           000000  1302 	G$putchar$0$0 ==.
                           000000  1303 	C$putget.h$18$0$0 ==.
                                   1304 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:18: void putchar(char c)
                                   1305 ;	-----------------------------------------
                                   1306 ;	 function putchar
                                   1307 ;	-----------------------------------------
      000067                       1308 _putchar:
                           000007  1309 	ar7 = 0x07
                           000006  1310 	ar6 = 0x06
                           000005  1311 	ar5 = 0x05
                           000004  1312 	ar4 = 0x04
                           000003  1313 	ar3 = 0x03
                           000002  1314 	ar2 = 0x02
                           000001  1315 	ar1 = 0x01
                           000000  1316 	ar0 = 0x00
      000067 AF 82            [24] 1317 	mov	r7,dpl
                           000002  1318 	C$putget.h$20$1$16 ==.
                                   1319 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:20: while(!TI0); 
      000069                       1320 00101$:
                           000002  1321 	C$putget.h$21$1$16 ==.
                                   1322 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:21: TI0=0;
      000069 10 99 02         [24] 1323 	jbc	_TI0,00112$
      00006C 80 FB            [24] 1324 	sjmp	00101$
      00006E                       1325 00112$:
                           000007  1326 	C$putget.h$22$1$16 ==.
                                   1327 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:22: SBUF0 = c;
      00006E 8F 99            [24] 1328 	mov	_SBUF0,r7
                           000009  1329 	C$putget.h$23$1$16 ==.
                           000009  1330 	XG$putchar$0$0 ==.
      000070 22               [24] 1331 	ret
                                   1332 ;------------------------------------------------------------
                                   1333 ;Allocation info for local variables in function 'getchar'
                                   1334 ;------------------------------------------------------------
                                   1335 ;c                         Allocated to registers 
                                   1336 ;------------------------------------------------------------
                           00000A  1337 	G$getchar$0$0 ==.
                           00000A  1338 	C$putget.h$28$1$16 ==.
                                   1339 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:28: char getchar(void)
                                   1340 ;	-----------------------------------------
                                   1341 ;	 function getchar
                                   1342 ;	-----------------------------------------
      000071                       1343 _getchar:
                           00000A  1344 	C$putget.h$31$1$18 ==.
                                   1345 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:31: while(!RI0);
      000071                       1346 00101$:
                           00000A  1347 	C$putget.h$32$1$18 ==.
                                   1348 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:32: RI0 =0;
      000071 10 98 02         [24] 1349 	jbc	_RI0,00112$
      000074 80 FB            [24] 1350 	sjmp	00101$
      000076                       1351 00112$:
                           00000F  1352 	C$putget.h$33$1$18 ==.
                                   1353 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:33: c = SBUF0;
      000076 E5 99            [12] 1354 	mov	a,_SBUF0
                           000011  1355 	C$putget.h$36$1$18 ==.
                                   1356 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\/putget.h:36: return SBUF0;
      000078 85 99 82         [24] 1357 	mov	dpl,_SBUF0
                           000014  1358 	C$putget.h$37$1$18 ==.
                           000014  1359 	XG$getchar$0$0 ==.
      00007B 22               [24] 1360 	ret
                                   1361 ;------------------------------------------------------------
                                   1362 ;Allocation info for local variables in function 'main'
                                   1363 ;------------------------------------------------------------
                           000015  1364 	G$main$0$0 ==.
                           000015  1365 	C$given.c$47$1$18 ==.
                                   1366 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:47: void main (void)
                                   1367 ;	-----------------------------------------
                                   1368 ;	 function main
                                   1369 ;	-----------------------------------------
      00007C                       1370 _main:
                           000015  1371 	C$given.c$55$1$25 ==.
                                   1372 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:55: SFRPAGE = CONFIG_PAGE;
      00007C 75 84 0F         [24] 1373 	mov	_SFRPAGE,#0x0F
                           000018  1374 	C$given.c$57$1$25 ==.
                                   1375 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:57: PORT_INIT();                // Configure the Crossbar and GPIO.
      00007F 12 01 3A         [24] 1376 	lcall	_PORT_INIT
                           00001B  1377 	C$given.c$58$1$25 ==.
                                   1378 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:58: SYSCLK_INIT();              // Initialize the oscillator.
      000082 12 01 59         [24] 1379 	lcall	_SYSCLK_INIT
                           00001E  1380 	C$given.c$59$1$25 ==.
                                   1381 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:59: UART0_INIT();               // Initialize UART0.
      000085 12 01 AF         [24] 1382 	lcall	_UART0_INIT
                           000021  1383 	C$given.c$61$1$25 ==.
                                   1384 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:61: SFRPAGE = LEGACY_PAGE;
      000088 75 84 00         [24] 1385 	mov	_SFRPAGE,#0x00
                           000024  1386 	C$given.c$62$1$25 ==.
                                   1387 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:62: IT0     = 1;                // /INT0 is edge triggered, falling-edge.
      00008B D2 88            [12] 1388 	setb	_IT0
                           000026  1389 	C$given.c$66$1$25 ==.
                                   1390 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:66: printf("\033[2J");          // Erase screen and move cursor to the home position.
      00008D 74 0F            [12] 1391 	mov	a,#___str_0
      00008F C0 E0            [24] 1392 	push	acc
      000091 74 08            [12] 1393 	mov	a,#(___str_0 >> 8)
      000093 C0 E0            [24] 1394 	push	acc
      000095 74 80            [12] 1395 	mov	a,#0x80
      000097 C0 E0            [24] 1396 	push	acc
      000099 12 01 FB         [24] 1397 	lcall	_printf
      00009C 15 81            [12] 1398 	dec	sp
      00009E 15 81            [12] 1399 	dec	sp
      0000A0 15 81            [12] 1400 	dec	sp
                           00003B  1401 	C$given.c$67$1$25 ==.
                                   1402 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:67: printf("MPS Interrupt Switch Test\n\n\r");
      0000A2 74 14            [12] 1403 	mov	a,#___str_1
      0000A4 C0 E0            [24] 1404 	push	acc
      0000A6 74 08            [12] 1405 	mov	a,#(___str_1 >> 8)
      0000A8 C0 E0            [24] 1406 	push	acc
      0000AA 74 80            [12] 1407 	mov	a,#0x80
      0000AC C0 E0            [24] 1408 	push	acc
      0000AE 12 01 FB         [24] 1409 	lcall	_printf
      0000B1 15 81            [12] 1410 	dec	sp
      0000B3 15 81            [12] 1411 	dec	sp
      0000B5 15 81            [12] 1412 	dec	sp
                           000050  1413 	C$given.c$68$1$25 ==.
                                   1414 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:68: printf("Ground /INT0 on P0.2 to generate an interrupt.\n\n\r");
      0000B7 74 31            [12] 1415 	mov	a,#___str_2
      0000B9 C0 E0            [24] 1416 	push	acc
      0000BB 74 08            [12] 1417 	mov	a,#(___str_2 >> 8)
      0000BD C0 E0            [24] 1418 	push	acc
      0000BF 74 80            [12] 1419 	mov	a,#0x80
      0000C1 C0 E0            [24] 1420 	push	acc
      0000C3 12 01 FB         [24] 1421 	lcall	_printf
      0000C6 15 81            [12] 1422 	dec	sp
      0000C8 15 81            [12] 1423 	dec	sp
      0000CA 15 81            [12] 1424 	dec	sp
                           000065  1425 	C$given.c$70$1$25 ==.
                                   1426 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:70: SFRPAGE = CONFIG_PAGE;
      0000CC 75 84 0F         [24] 1427 	mov	_SFRPAGE,#0x0F
                           000068  1428 	C$given.c$71$1$25 ==.
                                   1429 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:71: EX0     = 1;                // Enable Ext Int 0 only after everything is settled.
      0000CF D2 A8            [12] 1430 	setb	_EX0
                           00006A  1431 	C$given.c$74$1$25 ==.
                                   1432 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:74: while (1)                   // No need to set UART0_PAGE
      0000D1                       1433 00102$:
                           00006A  1434 	C$given.c$76$2$26 ==.
                                   1435 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:76: printf("INT0\r");
      0000D1 74 63            [12] 1436 	mov	a,#___str_3
      0000D3 C0 E0            [24] 1437 	push	acc
      0000D5 74 08            [12] 1438 	mov	a,#(___str_3 >> 8)
      0000D7 C0 E0            [24] 1439 	push	acc
      0000D9 74 80            [12] 1440 	mov	a,#0x80
      0000DB C0 E0            [24] 1441 	push	acc
      0000DD 12 01 FB         [24] 1442 	lcall	_printf
      0000E0 15 81            [12] 1443 	dec	sp
      0000E2 15 81            [12] 1444 	dec	sp
      0000E4 15 81            [12] 1445 	dec	sp
      0000E6 80 E9            [24] 1446 	sjmp	00102$
                           000081  1447 	C$given.c$78$1$25 ==.
                           000081  1448 	XG$main$0$0 ==.
      0000E8 22               [24] 1449 	ret
                                   1450 ;------------------------------------------------------------
                                   1451 ;Allocation info for local variables in function 'SW2_ISR'
                                   1452 ;------------------------------------------------------------
                           000082  1453 	G$SW2_ISR$0$0 ==.
                           000082  1454 	C$given.c$87$1$25 ==.
                                   1455 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:87: void SW2_ISR (void) __interrupt 0   // Interrupt 0 corresponds to vector address 0003h.
                                   1456 ;	-----------------------------------------
                                   1457 ;	 function SW2_ISR
                                   1458 ;	-----------------------------------------
      0000E9                       1459 _SW2_ISR:
      0000E9 C0 22            [24] 1460 	push	bits
      0000EB C0 E0            [24] 1461 	push	acc
      0000ED C0 F0            [24] 1462 	push	b
      0000EF C0 82            [24] 1463 	push	dpl
      0000F1 C0 83            [24] 1464 	push	dph
      0000F3 C0 07            [24] 1465 	push	(0+7)
      0000F5 C0 06            [24] 1466 	push	(0+6)
      0000F7 C0 05            [24] 1467 	push	(0+5)
      0000F9 C0 04            [24] 1468 	push	(0+4)
      0000FB C0 03            [24] 1469 	push	(0+3)
      0000FD C0 02            [24] 1470 	push	(0+2)
      0000FF C0 01            [24] 1471 	push	(0+1)
      000101 C0 00            [24] 1472 	push	(0+0)
      000103 C0 D0            [24] 1473 	push	psw
      000105 75 D0 00         [24] 1474 	mov	psw,#0x00
                           0000A1  1475 	C$given.c$91$1$28 ==.
                                   1476 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:91: printf("/INT0 has been grounded!\n\n\r");
      000108 74 69            [12] 1477 	mov	a,#___str_4
      00010A C0 E0            [24] 1478 	push	acc
      00010C 74 08            [12] 1479 	mov	a,#(___str_4 >> 8)
      00010E C0 E0            [24] 1480 	push	acc
      000110 74 80            [12] 1481 	mov	a,#0x80
      000112 C0 E0            [24] 1482 	push	acc
      000114 12 01 FB         [24] 1483 	lcall	_printf
      000117 15 81            [12] 1484 	dec	sp
      000119 15 81            [12] 1485 	dec	sp
      00011B 15 81            [12] 1486 	dec	sp
      00011D D0 D0            [24] 1487 	pop	psw
      00011F D0 00            [24] 1488 	pop	(0+0)
      000121 D0 01            [24] 1489 	pop	(0+1)
      000123 D0 02            [24] 1490 	pop	(0+2)
      000125 D0 03            [24] 1491 	pop	(0+3)
      000127 D0 04            [24] 1492 	pop	(0+4)
      000129 D0 05            [24] 1493 	pop	(0+5)
      00012B D0 06            [24] 1494 	pop	(0+6)
      00012D D0 07            [24] 1495 	pop	(0+7)
      00012F D0 83            [24] 1496 	pop	dph
      000131 D0 82            [24] 1497 	pop	dpl
      000133 D0 F0            [24] 1498 	pop	b
      000135 D0 E0            [24] 1499 	pop	acc
      000137 D0 22            [24] 1500 	pop	bits
                           0000D2  1501 	C$given.c$92$1$28 ==.
                           0000D2  1502 	XG$SW2_ISR$0$0 ==.
      000139 32               [24] 1503 	reti
                                   1504 ;------------------------------------------------------------
                                   1505 ;Allocation info for local variables in function 'PORT_INIT'
                                   1506 ;------------------------------------------------------------
                                   1507 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1508 ;------------------------------------------------------------
                           0000D3  1509 	G$PORT_INIT$0$0 ==.
                           0000D3  1510 	C$given.c$100$1$28 ==.
                                   1511 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:100: void PORT_INIT(void)
                                   1512 ;	-----------------------------------------
                                   1513 ;	 function PORT_INIT
                                   1514 ;	-----------------------------------------
      00013A                       1515 _PORT_INIT:
                           0000D3  1516 	C$given.c$104$1$30 ==.
                                   1517 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:104: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.
      00013A AF 84            [24] 1518 	mov	r7,_SFRPAGE
                           0000D5  1519 	C$given.c$106$1$30 ==.
                                   1520 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:106: SFRPAGE = CONFIG_PAGE;
      00013C 75 84 0F         [24] 1521 	mov	_SFRPAGE,#0x0F
                           0000D8  1522 	C$given.c$107$1$30 ==.
                                   1523 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:107: WDTCN   = 0xDE;             // Disable watchdog timer.
      00013F 75 FF DE         [24] 1524 	mov	_WDTCN,#0xDE
                           0000DB  1525 	C$given.c$108$1$30 ==.
                                   1526 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:108: WDTCN   = 0xAD;
      000142 75 FF AD         [24] 1527 	mov	_WDTCN,#0xAD
                           0000DE  1528 	C$given.c$109$1$30 ==.
                                   1529 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:109: EA      = 1;                // Enable interrupts as selected.
      000145 D2 AF            [12] 1530 	setb	_EA
                           0000E0  1531 	C$given.c$111$1$30 ==.
                                   1532 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:111: XBR0    = 0x04;             // Enable UART0.
      000147 75 E1 04         [24] 1533 	mov	_XBR0,#0x04
                           0000E3  1534 	C$given.c$112$1$30 ==.
                                   1535 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:112: XBR1    = 0x04;             // /INT0 routed to port pin.
      00014A 75 E2 04         [24] 1536 	mov	_XBR1,#0x04
                           0000E6  1537 	C$given.c$113$1$30 ==.
                                   1538 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:113: XBR2    = 0x40;             // Enable Crossbar and weak pull-ups.
      00014D 75 E3 40         [24] 1539 	mov	_XBR2,#0x40
                           0000E9  1540 	C$given.c$115$1$30 ==.
                                   1541 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:115: P0MDOUT = 0x01;             // P0.0 (TX0) is configured as Push-Pull for output.
      000150 75 A4 01         [24] 1542 	mov	_P0MDOUT,#0x01
                           0000EC  1543 	C$given.c$118$1$30 ==.
                                   1544 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:118: P0      = 0x06;             // Additionally, set P0.0=0, P0.1=1, and P0.2=1.
      000153 75 80 06         [24] 1545 	mov	_P0,#0x06
                           0000EF  1546 	C$given.c$120$1$30 ==.
                                   1547 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:120: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
      000156 8F 84            [24] 1548 	mov	_SFRPAGE,r7
                           0000F1  1549 	C$given.c$121$1$30 ==.
                           0000F1  1550 	XG$PORT_INIT$0$0 ==.
      000158 22               [24] 1551 	ret
                                   1552 ;------------------------------------------------------------
                                   1553 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1554 ;------------------------------------------------------------
                                   1555 ;i                         Allocated to registers r5 r6 
                                   1556 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1557 ;------------------------------------------------------------
                           0000F2  1558 	G$SYSCLK_INIT$0$0 ==.
                           0000F2  1559 	C$given.c$129$1$30 ==.
                                   1560 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:129: void SYSCLK_INIT(void)
                                   1561 ;	-----------------------------------------
                                   1562 ;	 function SYSCLK_INIT
                                   1563 ;	-----------------------------------------
      000159                       1564 _SYSCLK_INIT:
                           0000F2  1565 	C$given.c$135$1$32 ==.
                                   1566 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:135: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.
      000159 AF 84            [24] 1567 	mov	r7,_SFRPAGE
                           0000F4  1568 	C$given.c$137$1$32 ==.
                                   1569 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:137: SFRPAGE = CONFIG_PAGE;
      00015B 75 84 0F         [24] 1570 	mov	_SFRPAGE,#0x0F
                           0000F7  1571 	C$given.c$138$1$32 ==.
                                   1572 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:138: OSCXCN  = 0x67;             // Start external oscillator
      00015E 75 8C 67         [24] 1573 	mov	_OSCXCN,#0x67
                           0000FA  1574 	C$given.c$139$1$32 ==.
                                   1575 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:139: for(i=0; i < 256; i++);     // Wait for the oscillator to start up.
      000161 7D 00            [12] 1576 	mov	r5,#0x00
      000163 7E 01            [12] 1577 	mov	r6,#0x01
      000165                       1578 00111$:
      000165 1D               [12] 1579 	dec	r5
      000166 BD FF 01         [24] 1580 	cjne	r5,#0xFF,00141$
      000169 1E               [12] 1581 	dec	r6
      00016A                       1582 00141$:
      00016A ED               [12] 1583 	mov	a,r5
      00016B 4E               [12] 1584 	orl	a,r6
      00016C 70 F7            [24] 1585 	jnz	00111$
                           000107  1586 	C$given.c$140$1$32 ==.
                                   1587 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:140: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      00016E                       1588 00102$:
      00016E E5 8C            [12] 1589 	mov	a,_OSCXCN
      000170 30 E7 FB         [24] 1590 	jnb	acc.7,00102$
                           00010C  1591 	C$given.c$141$1$32 ==.
                                   1592 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:141: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      000173 75 97 01         [24] 1593 	mov	_CLKSEL,#0x01
                           00010F  1594 	C$given.c$142$1$32 ==.
                                   1595 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:142: OSCICN  = 0x00;             // Disable the internal oscillator.
      000176 75 8A 00         [24] 1596 	mov	_OSCICN,#0x00
                           000112  1597 	C$given.c$144$1$32 ==.
                                   1598 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:144: SFRPAGE = CONFIG_PAGE;
      000179 75 84 0F         [24] 1599 	mov	_SFRPAGE,#0x0F
                           000115  1600 	C$given.c$145$1$32 ==.
                                   1601 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:145: PLL0CN  = 0x04;
      00017C 75 89 04         [24] 1602 	mov	_PLL0CN,#0x04
                           000118  1603 	C$given.c$146$1$32 ==.
                                   1604 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:146: SFRPAGE = LEGACY_PAGE;
      00017F 75 84 00         [24] 1605 	mov	_SFRPAGE,#0x00
                           00011B  1606 	C$given.c$147$1$32 ==.
                                   1607 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:147: FLSCL   = 0x10;
      000182 75 B7 10         [24] 1608 	mov	_FLSCL,#0x10
                           00011E  1609 	C$given.c$148$1$32 ==.
                                   1610 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:148: SFRPAGE = CONFIG_PAGE;
      000185 75 84 0F         [24] 1611 	mov	_SFRPAGE,#0x0F
                           000121  1612 	C$given.c$149$1$32 ==.
                                   1613 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:149: PLL0CN |= 0x01;
      000188 43 89 01         [24] 1614 	orl	_PLL0CN,#0x01
                           000124  1615 	C$given.c$150$1$32 ==.
                                   1616 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:150: PLL0DIV = 0x04;
      00018B 75 8D 04         [24] 1617 	mov	_PLL0DIV,#0x04
                           000127  1618 	C$given.c$151$1$32 ==.
                                   1619 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:151: PLL0FLT = 0x01;
      00018E 75 8F 01         [24] 1620 	mov	_PLL0FLT,#0x01
                           00012A  1621 	C$given.c$152$1$32 ==.
                                   1622 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:152: PLL0MUL = 0x09;
      000191 75 8E 09         [24] 1623 	mov	_PLL0MUL,#0x09
                           00012D  1624 	C$given.c$153$1$32 ==.
                                   1625 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:153: for(i=0; i < 256; i++);
      000194 7D 00            [12] 1626 	mov	r5,#0x00
      000196 7E 01            [12] 1627 	mov	r6,#0x01
      000198                       1628 00114$:
      000198 1D               [12] 1629 	dec	r5
      000199 BD FF 01         [24] 1630 	cjne	r5,#0xFF,00144$
      00019C 1E               [12] 1631 	dec	r6
      00019D                       1632 00144$:
      00019D ED               [12] 1633 	mov	a,r5
      00019E 4E               [12] 1634 	orl	a,r6
      00019F 70 F7            [24] 1635 	jnz	00114$
                           00013A  1636 	C$given.c$154$1$32 ==.
                                   1637 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:154: PLL0CN |= 0x02;
      0001A1 43 89 02         [24] 1638 	orl	_PLL0CN,#0x02
                           00013D  1639 	C$given.c$155$1$32 ==.
                                   1640 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:155: while(!(PLL0CN & 0x10));
      0001A4                       1641 00106$:
      0001A4 E5 89            [12] 1642 	mov	a,_PLL0CN
      0001A6 30 E4 FB         [24] 1643 	jnb	acc.4,00106$
                           000142  1644 	C$given.c$156$1$32 ==.
                                   1645 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:156: CLKSEL  = 0x02;             // SYSCLK derived from the PLL.
      0001A9 75 97 02         [24] 1646 	mov	_CLKSEL,#0x02
                           000145  1647 	C$given.c$158$1$32 ==.
                                   1648 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:158: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
      0001AC 8F 84            [24] 1649 	mov	_SFRPAGE,r7
                           000147  1650 	C$given.c$159$1$32 ==.
                           000147  1651 	XG$SYSCLK_INIT$0$0 ==.
      0001AE 22               [24] 1652 	ret
                                   1653 ;------------------------------------------------------------
                                   1654 ;Allocation info for local variables in function 'UART0_INIT'
                                   1655 ;------------------------------------------------------------
                                   1656 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1657 ;------------------------------------------------------------
                           000148  1658 	G$UART0_INIT$0$0 ==.
                           000148  1659 	C$given.c$167$1$32 ==.
                                   1660 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:167: void UART0_INIT(void)
                                   1661 ;	-----------------------------------------
                                   1662 ;	 function UART0_INIT
                                   1663 ;	-----------------------------------------
      0001AF                       1664 _UART0_INIT:
                           000148  1665 	C$given.c$171$1$34 ==.
                                   1666 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:171: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.
      0001AF AF 84            [24] 1667 	mov	r7,_SFRPAGE
                           00014A  1668 	C$given.c$173$1$34 ==.
                                   1669 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:173: SFRPAGE = TIMER01_PAGE;
      0001B1 75 84 00         [24] 1670 	mov	_SFRPAGE,#0x00
                           00014D  1671 	C$given.c$174$1$34 ==.
                                   1672 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:174: TMOD   &= ~0xF0;
      0001B4 AE 89            [24] 1673 	mov	r6,_TMOD
      0001B6 74 0F            [12] 1674 	mov	a,#0x0F
      0001B8 5E               [12] 1675 	anl	a,r6
      0001B9 F5 89            [12] 1676 	mov	_TMOD,a
                           000154  1677 	C$given.c$175$1$34 ==.
                                   1678 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:175: TMOD   |=  0x20;            // Timer1, Mode 2: 8-bit counter/timer with auto-reload.
      0001BB 43 89 20         [24] 1679 	orl	_TMOD,#0x20
                           000157  1680 	C$given.c$176$1$34 ==.
                                   1681 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:176: TH1     = (unsigned char)-(SYSCLK/BAUDRATE/16); // Set Timer1 reload value for baudrate
      0001BE 75 8D E5         [24] 1682 	mov	_TH1,#0xE5
                           00015A  1683 	C$given.c$177$1$34 ==.
                                   1684 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:177: CKCON  |= 0x10;             // Timer1 uses SYSCLK as time base.
      0001C1 43 8E 10         [24] 1685 	orl	_CKCON,#0x10
                           00015D  1686 	C$given.c$178$1$34 ==.
                                   1687 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:178: TL1     = TH1;
      0001C4 85 8D 8B         [24] 1688 	mov	_TL1,_TH1
                           000160  1689 	C$given.c$179$1$34 ==.
                                   1690 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:179: TR1     = 1;                // Start Timer1.
      0001C7 D2 8E            [12] 1691 	setb	_TR1
                           000162  1692 	C$given.c$181$1$34 ==.
                                   1693 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:181: SFRPAGE = UART0_PAGE;
      0001C9 75 84 00         [24] 1694 	mov	_SFRPAGE,#0x00
                           000165  1695 	C$given.c$182$1$34 ==.
                                   1696 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:182: SCON0   = 0x50;             // Set Mode 1: 8-Bit UART
      0001CC 75 98 50         [24] 1697 	mov	_SCON0,#0x50
                           000168  1698 	C$given.c$183$1$34 ==.
                                   1699 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:183: SSTA0   = 0x10;             // UART0 baud rate divide-by-two disabled (SMOD0 = 1).
      0001CF 75 91 10         [24] 1700 	mov	_SSTA0,#0x10
                           00016B  1701 	C$given.c$184$1$34 ==.
                                   1702 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:184: TI0     = 1;                // Indicate TX0 ready.
      0001D2 D2 99            [12] 1703 	setb	_TI0
                           00016D  1704 	C$given.c$186$1$34 ==.
                                   1705 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.1-Interrupt\given.c:186: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
      0001D4 8F 84            [24] 1706 	mov	_SFRPAGE,r7
                           00016F  1707 	C$given.c$187$1$34 ==.
                           00016F  1708 	XG$UART0_INIT$0$0 ==.
      0001D6 22               [24] 1709 	ret
                                   1710 	.area CSEG    (CODE)
                                   1711 	.area CONST   (CODE)
                           000000  1712 Fgiven$__str_0$0$0 == .
      00080F                       1713 ___str_0:
      00080F 1B                    1714 	.db 0x1B
      000810 5B 32 4A              1715 	.ascii "[2J"
      000813 00                    1716 	.db 0x00
                           000005  1717 Fgiven$__str_1$0$0 == .
      000814                       1718 ___str_1:
      000814 4D 50 53 20 49 6E 74  1719 	.ascii "MPS Interrupt Switch Test"
             65 72 72 75 70 74 20
             53 77 69 74 63 68 20
             54 65 73 74
      00082D 0A                    1720 	.db 0x0A
      00082E 0A                    1721 	.db 0x0A
      00082F 0D                    1722 	.db 0x0D
      000830 00                    1723 	.db 0x00
                           000022  1724 Fgiven$__str_2$0$0 == .
      000831                       1725 ___str_2:
      000831 47 72 6F 75 6E 64 20  1726 	.ascii "Ground /INT0 on P0.2 to generate an interrupt."
             2F 49 4E 54 30 20 6F
             6E 20 50 30 2E 32 20
             74 6F 20 67 65 6E 65
             72 61 74 65 20 61 6E
             20 69 6E 74 65 72 72
             75 70 74 2E
      00085F 0A                    1727 	.db 0x0A
      000860 0A                    1728 	.db 0x0A
      000861 0D                    1729 	.db 0x0D
      000862 00                    1730 	.db 0x00
                           000054  1731 Fgiven$__str_3$0$0 == .
      000863                       1732 ___str_3:
      000863 49 4E 54 30           1733 	.ascii "INT0"
      000867 0D                    1734 	.db 0x0D
      000868 00                    1735 	.db 0x00
                           00005A  1736 Fgiven$__str_4$0$0 == .
      000869                       1737 ___str_4:
      000869 2F 49 4E 54 30 20 68  1738 	.ascii "/INT0 has been grounded!"
             61 73 20 62 65 65 6E
             20 67 72 6F 75 6E 64
             65 64 21
      000881 0A                    1739 	.db 0x0A
      000882 0A                    1740 	.db 0x0A
      000883 0D                    1741 	.db 0x0D
      000884 00                    1742 	.db 0x00
                                   1743 	.area XINIT   (CODE)
                                   1744 	.area CABS    (ABS,CODE)
