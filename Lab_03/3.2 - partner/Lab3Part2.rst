                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Oct 13 19:10:27 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module Lab3Part2
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
                                    396 	.globl _FLAG
                                    397 	.globl _U0F
                                    398 	.globl _U1F
                                    399 	.globl _q
                                    400 	.globl _C
                                    401 	.globl _putchar
                                    402 	.globl _getchar
                                    403 	.globl _main
                                    404 	.globl _UART0_ISR
                                    405 	.globl _UART1_ISR
                                    406 	.globl _PORT_INIT
                                    407 	.globl _UART0_INIT
                                    408 	.globl _SYSCLK_INIT
                                    409 	.globl _Interrupt_INIT
                                    410 ;--------------------------------------------------------
                                    411 ; special function registers
                                    412 ;--------------------------------------------------------
                                    413 	.area RSEG    (ABS,DATA)
      000000                        414 	.org 0x0000
                           000080   415 G$P0$0$0 == 0x0080
                           000080   416 _P0	=	0x0080
                           000081   417 G$SP$0$0 == 0x0081
                           000081   418 _SP	=	0x0081
                           000082   419 G$DPL$0$0 == 0x0082
                           000082   420 _DPL	=	0x0082
                           000083   421 G$DPH$0$0 == 0x0083
                           000083   422 _DPH	=	0x0083
                           000084   423 G$SFRPAGE$0$0 == 0x0084
                           000084   424 _SFRPAGE	=	0x0084
                           000085   425 G$SFRNEXT$0$0 == 0x0085
                           000085   426 _SFRNEXT	=	0x0085
                           000086   427 G$SFRLAST$0$0 == 0x0086
                           000086   428 _SFRLAST	=	0x0086
                           000087   429 G$PCON$0$0 == 0x0087
                           000087   430 _PCON	=	0x0087
                           000090   431 G$P1$0$0 == 0x0090
                           000090   432 _P1	=	0x0090
                           0000A0   433 G$P2$0$0 == 0x00a0
                           0000A0   434 _P2	=	0x00a0
                           0000A8   435 G$IE$0$0 == 0x00a8
                           0000A8   436 _IE	=	0x00a8
                           0000B0   437 G$P3$0$0 == 0x00b0
                           0000B0   438 _P3	=	0x00b0
                           0000B1   439 G$PSBANK$0$0 == 0x00b1
                           0000B1   440 _PSBANK	=	0x00b1
                           0000B8   441 G$IP$0$0 == 0x00b8
                           0000B8   442 _IP	=	0x00b8
                           0000D0   443 G$PSW$0$0 == 0x00d0
                           0000D0   444 _PSW	=	0x00d0
                           0000E0   445 G$ACC$0$0 == 0x00e0
                           0000E0   446 _ACC	=	0x00e0
                           0000E6   447 G$EIE1$0$0 == 0x00e6
                           0000E6   448 _EIE1	=	0x00e6
                           0000E7   449 G$EIE2$0$0 == 0x00e7
                           0000E7   450 _EIE2	=	0x00e7
                           0000F0   451 G$B$0$0 == 0x00f0
                           0000F0   452 _B	=	0x00f0
                           0000F6   453 G$EIP1$0$0 == 0x00f6
                           0000F6   454 _EIP1	=	0x00f6
                           0000F7   455 G$EIP2$0$0 == 0x00f7
                           0000F7   456 _EIP2	=	0x00f7
                           0000FF   457 G$WDTCN$0$0 == 0x00ff
                           0000FF   458 _WDTCN	=	0x00ff
                           000088   459 G$TCON$0$0 == 0x0088
                           000088   460 _TCON	=	0x0088
                           000089   461 G$TMOD$0$0 == 0x0089
                           000089   462 _TMOD	=	0x0089
                           00008A   463 G$TL0$0$0 == 0x008a
                           00008A   464 _TL0	=	0x008a
                           00008B   465 G$TL1$0$0 == 0x008b
                           00008B   466 _TL1	=	0x008b
                           00008C   467 G$TH0$0$0 == 0x008c
                           00008C   468 _TH0	=	0x008c
                           00008D   469 G$TH1$0$0 == 0x008d
                           00008D   470 _TH1	=	0x008d
                           00008E   471 G$CKCON$0$0 == 0x008e
                           00008E   472 _CKCON	=	0x008e
                           00008F   473 G$PSCTL$0$0 == 0x008f
                           00008F   474 _PSCTL	=	0x008f
                           000091   475 G$SSTA0$0$0 == 0x0091
                           000091   476 _SSTA0	=	0x0091
                           000098   477 G$SCON0$0$0 == 0x0098
                           000098   478 _SCON0	=	0x0098
                           000098   479 G$SCON$0$0 == 0x0098
                           000098   480 _SCON	=	0x0098
                           000099   481 G$SBUF0$0$0 == 0x0099
                           000099   482 _SBUF0	=	0x0099
                           000099   483 G$SBUF$0$0 == 0x0099
                           000099   484 _SBUF	=	0x0099
                           00009A   485 G$SPI0CFG$0$0 == 0x009a
                           00009A   486 _SPI0CFG	=	0x009a
                           00009B   487 G$SPI0DAT$0$0 == 0x009b
                           00009B   488 _SPI0DAT	=	0x009b
                           00009D   489 G$SPI0CKR$0$0 == 0x009d
                           00009D   490 _SPI0CKR	=	0x009d
                           0000A1   491 G$EMI0TC$0$0 == 0x00a1
                           0000A1   492 _EMI0TC	=	0x00a1
                           0000A2   493 G$EMI0CN$0$0 == 0x00a2
                           0000A2   494 _EMI0CN	=	0x00a2
                           0000A2   495 G$_XPAGE$0$0 == 0x00a2
                           0000A2   496 __XPAGE	=	0x00a2
                           0000A3   497 G$EMI0CF$0$0 == 0x00a3
                           0000A3   498 _EMI0CF	=	0x00a3
                           0000A9   499 G$SADDR0$0$0 == 0x00a9
                           0000A9   500 _SADDR0	=	0x00a9
                           0000B7   501 G$FLSCL$0$0 == 0x00b7
                           0000B7   502 _FLSCL	=	0x00b7
                           0000B9   503 G$SADEN0$0$0 == 0x00b9
                           0000B9   504 _SADEN0	=	0x00b9
                           0000BA   505 G$AMX0CF$0$0 == 0x00ba
                           0000BA   506 _AMX0CF	=	0x00ba
                           0000BB   507 G$AMX0SL$0$0 == 0x00bb
                           0000BB   508 _AMX0SL	=	0x00bb
                           0000BC   509 G$ADC0CF$0$0 == 0x00bc
                           0000BC   510 _ADC0CF	=	0x00bc
                           0000BE   511 G$ADC0L$0$0 == 0x00be
                           0000BE   512 _ADC0L	=	0x00be
                           0000BF   513 G$ADC0H$0$0 == 0x00bf
                           0000BF   514 _ADC0H	=	0x00bf
                           0000C0   515 G$SMB0CN$0$0 == 0x00c0
                           0000C0   516 _SMB0CN	=	0x00c0
                           0000C1   517 G$SMB0STA$0$0 == 0x00c1
                           0000C1   518 _SMB0STA	=	0x00c1
                           0000C2   519 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   520 _SMB0DAT	=	0x00c2
                           0000C3   521 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   522 _SMB0ADR	=	0x00c3
                           0000C4   523 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   524 _ADC0GTL	=	0x00c4
                           0000C5   525 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   526 _ADC0GTH	=	0x00c5
                           0000C6   527 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   528 _ADC0LTL	=	0x00c6
                           0000C7   529 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   530 _ADC0LTH	=	0x00c7
                           0000C8   531 G$TMR2CN$0$0 == 0x00c8
                           0000C8   532 _TMR2CN	=	0x00c8
                           0000C9   533 G$TMR2CF$0$0 == 0x00c9
                           0000C9   534 _TMR2CF	=	0x00c9
                           0000CA   535 G$RCAP2L$0$0 == 0x00ca
                           0000CA   536 _RCAP2L	=	0x00ca
                           0000CB   537 G$RCAP2H$0$0 == 0x00cb
                           0000CB   538 _RCAP2H	=	0x00cb
                           0000CC   539 G$TMR2L$0$0 == 0x00cc
                           0000CC   540 _TMR2L	=	0x00cc
                           0000CC   541 G$TL2$0$0 == 0x00cc
                           0000CC   542 _TL2	=	0x00cc
                           0000CD   543 G$TMR2H$0$0 == 0x00cd
                           0000CD   544 _TMR2H	=	0x00cd
                           0000CD   545 G$TH2$0$0 == 0x00cd
                           0000CD   546 _TH2	=	0x00cd
                           0000CF   547 G$SMB0CR$0$0 == 0x00cf
                           0000CF   548 _SMB0CR	=	0x00cf
                           0000D1   549 G$REF0CN$0$0 == 0x00d1
                           0000D1   550 _REF0CN	=	0x00d1
                           0000D2   551 G$DAC0L$0$0 == 0x00d2
                           0000D2   552 _DAC0L	=	0x00d2
                           0000D3   553 G$DAC0H$0$0 == 0x00d3
                           0000D3   554 _DAC0H	=	0x00d3
                           0000D4   555 G$DAC0CN$0$0 == 0x00d4
                           0000D4   556 _DAC0CN	=	0x00d4
                           0000D8   557 G$PCA0CN$0$0 == 0x00d8
                           0000D8   558 _PCA0CN	=	0x00d8
                           0000D9   559 G$PCA0MD$0$0 == 0x00d9
                           0000D9   560 _PCA0MD	=	0x00d9
                           0000DA   561 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   562 _PCA0CPM0	=	0x00da
                           0000DB   563 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   564 _PCA0CPM1	=	0x00db
                           0000DC   565 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   566 _PCA0CPM2	=	0x00dc
                           0000DD   567 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   568 _PCA0CPM3	=	0x00dd
                           0000DE   569 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   570 _PCA0CPM4	=	0x00de
                           0000DF   571 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   572 _PCA0CPM5	=	0x00df
                           0000E1   573 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   574 _PCA0CPL5	=	0x00e1
                           0000E2   575 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   576 _PCA0CPH5	=	0x00e2
                           0000E8   577 G$ADC0CN$0$0 == 0x00e8
                           0000E8   578 _ADC0CN	=	0x00e8
                           0000E9   579 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   580 _PCA0CPL2	=	0x00e9
                           0000EA   581 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   582 _PCA0CPH2	=	0x00ea
                           0000EB   583 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   584 _PCA0CPL3	=	0x00eb
                           0000EC   585 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   586 _PCA0CPH3	=	0x00ec
                           0000ED   587 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   588 _PCA0CPL4	=	0x00ed
                           0000EE   589 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   590 _PCA0CPH4	=	0x00ee
                           0000EF   591 G$RSTSRC$0$0 == 0x00ef
                           0000EF   592 _RSTSRC	=	0x00ef
                           0000F8   593 G$SPI0CN$0$0 == 0x00f8
                           0000F8   594 _SPI0CN	=	0x00f8
                           0000F9   595 G$PCA0L$0$0 == 0x00f9
                           0000F9   596 _PCA0L	=	0x00f9
                           0000FA   597 G$PCA0H$0$0 == 0x00fa
                           0000FA   598 _PCA0H	=	0x00fa
                           0000FB   599 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   600 _PCA0CPL0	=	0x00fb
                           0000FC   601 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   602 _PCA0CPH0	=	0x00fc
                           0000FD   603 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   604 _PCA0CPL1	=	0x00fd
                           0000FE   605 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   606 _PCA0CPH1	=	0x00fe
                           000088   607 G$CPT0CN$0$0 == 0x0088
                           000088   608 _CPT0CN	=	0x0088
                           000089   609 G$CPT0MD$0$0 == 0x0089
                           000089   610 _CPT0MD	=	0x0089
                           000098   611 G$SCON1$0$0 == 0x0098
                           000098   612 _SCON1	=	0x0098
                           000099   613 G$SBUF1$0$0 == 0x0099
                           000099   614 _SBUF1	=	0x0099
                           0000C8   615 G$TMR3CN$0$0 == 0x00c8
                           0000C8   616 _TMR3CN	=	0x00c8
                           0000C9   617 G$TMR3CF$0$0 == 0x00c9
                           0000C9   618 _TMR3CF	=	0x00c9
                           0000CA   619 G$RCAP3L$0$0 == 0x00ca
                           0000CA   620 _RCAP3L	=	0x00ca
                           0000CB   621 G$RCAP3H$0$0 == 0x00cb
                           0000CB   622 _RCAP3H	=	0x00cb
                           0000CC   623 G$TMR3L$0$0 == 0x00cc
                           0000CC   624 _TMR3L	=	0x00cc
                           0000CD   625 G$TMR3H$0$0 == 0x00cd
                           0000CD   626 _TMR3H	=	0x00cd
                           0000D2   627 G$DAC1L$0$0 == 0x00d2
                           0000D2   628 _DAC1L	=	0x00d2
                           0000D3   629 G$DAC1H$0$0 == 0x00d3
                           0000D3   630 _DAC1H	=	0x00d3
                           0000D4   631 G$DAC1CN$0$0 == 0x00d4
                           0000D4   632 _DAC1CN	=	0x00d4
                           000088   633 G$CPT1CN$0$0 == 0x0088
                           000088   634 _CPT1CN	=	0x0088
                           000089   635 G$CPT1MD$0$0 == 0x0089
                           000089   636 _CPT1MD	=	0x0089
                           0000BA   637 G$AMX2CF$0$0 == 0x00ba
                           0000BA   638 _AMX2CF	=	0x00ba
                           0000BB   639 G$AMX2SL$0$0 == 0x00bb
                           0000BB   640 _AMX2SL	=	0x00bb
                           0000BC   641 G$ADC2CF$0$0 == 0x00bc
                           0000BC   642 _ADC2CF	=	0x00bc
                           0000BE   643 G$ADC2$0$0 == 0x00be
                           0000BE   644 _ADC2	=	0x00be
                           0000C4   645 G$ADC2GT$0$0 == 0x00c4
                           0000C4   646 _ADC2GT	=	0x00c4
                           0000C6   647 G$ADC2LT$0$0 == 0x00c6
                           0000C6   648 _ADC2LT	=	0x00c6
                           0000C8   649 G$TMR4CN$0$0 == 0x00c8
                           0000C8   650 _TMR4CN	=	0x00c8
                           0000C9   651 G$TMR4CF$0$0 == 0x00c9
                           0000C9   652 _TMR4CF	=	0x00c9
                           0000CA   653 G$RCAP4L$0$0 == 0x00ca
                           0000CA   654 _RCAP4L	=	0x00ca
                           0000CB   655 G$RCAP4H$0$0 == 0x00cb
                           0000CB   656 _RCAP4H	=	0x00cb
                           0000CC   657 G$TMR4L$0$0 == 0x00cc
                           0000CC   658 _TMR4L	=	0x00cc
                           0000CD   659 G$TMR4H$0$0 == 0x00cd
                           0000CD   660 _TMR4H	=	0x00cd
                           0000E8   661 G$ADC2CN$0$0 == 0x00e8
                           0000E8   662 _ADC2CN	=	0x00e8
                           000091   663 G$MAC0BL$0$0 == 0x0091
                           000091   664 _MAC0BL	=	0x0091
                           000092   665 G$MAC0BH$0$0 == 0x0092
                           000092   666 _MAC0BH	=	0x0092
                           000093   667 G$MAC0ACC0$0$0 == 0x0093
                           000093   668 _MAC0ACC0	=	0x0093
                           000094   669 G$MAC0ACC1$0$0 == 0x0094
                           000094   670 _MAC0ACC1	=	0x0094
                           000095   671 G$MAC0ACC2$0$0 == 0x0095
                           000095   672 _MAC0ACC2	=	0x0095
                           000096   673 G$MAC0ACC3$0$0 == 0x0096
                           000096   674 _MAC0ACC3	=	0x0096
                           000097   675 G$MAC0OVR$0$0 == 0x0097
                           000097   676 _MAC0OVR	=	0x0097
                           0000C0   677 G$MAC0STA$0$0 == 0x00c0
                           0000C0   678 _MAC0STA	=	0x00c0
                           0000C1   679 G$MAC0AL$0$0 == 0x00c1
                           0000C1   680 _MAC0AL	=	0x00c1
                           0000C2   681 G$MAC0AH$0$0 == 0x00c2
                           0000C2   682 _MAC0AH	=	0x00c2
                           0000C3   683 G$MAC0CF$0$0 == 0x00c3
                           0000C3   684 _MAC0CF	=	0x00c3
                           0000CE   685 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   686 _MAC0RNDL	=	0x00ce
                           0000CF   687 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   688 _MAC0RNDH	=	0x00cf
                           000088   689 G$FLSTAT$0$0 == 0x0088
                           000088   690 _FLSTAT	=	0x0088
                           000089   691 G$PLL0CN$0$0 == 0x0089
                           000089   692 _PLL0CN	=	0x0089
                           00008A   693 G$OSCICN$0$0 == 0x008a
                           00008A   694 _OSCICN	=	0x008a
                           00008B   695 G$OSCICL$0$0 == 0x008b
                           00008B   696 _OSCICL	=	0x008b
                           00008C   697 G$OSCXCN$0$0 == 0x008c
                           00008C   698 _OSCXCN	=	0x008c
                           00008D   699 G$PLL0DIV$0$0 == 0x008d
                           00008D   700 _PLL0DIV	=	0x008d
                           00008E   701 G$PLL0MUL$0$0 == 0x008e
                           00008E   702 _PLL0MUL	=	0x008e
                           00008F   703 G$PLL0FLT$0$0 == 0x008f
                           00008F   704 _PLL0FLT	=	0x008f
                           000096   705 G$SFRPGCN$0$0 == 0x0096
                           000096   706 _SFRPGCN	=	0x0096
                           000097   707 G$CLKSEL$0$0 == 0x0097
                           000097   708 _CLKSEL	=	0x0097
                           00009A   709 G$CCH0MA$0$0 == 0x009a
                           00009A   710 _CCH0MA	=	0x009a
                           00009C   711 G$P4MDOUT$0$0 == 0x009c
                           00009C   712 _P4MDOUT	=	0x009c
                           00009D   713 G$P5MDOUT$0$0 == 0x009d
                           00009D   714 _P5MDOUT	=	0x009d
                           00009E   715 G$P6MDOUT$0$0 == 0x009e
                           00009E   716 _P6MDOUT	=	0x009e
                           00009F   717 G$P7MDOUT$0$0 == 0x009f
                           00009F   718 _P7MDOUT	=	0x009f
                           0000A1   719 G$CCH0CN$0$0 == 0x00a1
                           0000A1   720 _CCH0CN	=	0x00a1
                           0000A2   721 G$CCH0TN$0$0 == 0x00a2
                           0000A2   722 _CCH0TN	=	0x00a2
                           0000A3   723 G$CCH0LC$0$0 == 0x00a3
                           0000A3   724 _CCH0LC	=	0x00a3
                           0000A4   725 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   726 _P0MDOUT	=	0x00a4
                           0000A5   727 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   728 _P1MDOUT	=	0x00a5
                           0000A6   729 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   730 _P2MDOUT	=	0x00a6
                           0000A7   731 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   732 _P3MDOUT	=	0x00a7
                           0000AD   733 G$P1MDIN$0$0 == 0x00ad
                           0000AD   734 _P1MDIN	=	0x00ad
                           0000B7   735 G$FLACL$0$0 == 0x00b7
                           0000B7   736 _FLACL	=	0x00b7
                           0000C8   737 G$P4$0$0 == 0x00c8
                           0000C8   738 _P4	=	0x00c8
                           0000D8   739 G$P5$0$0 == 0x00d8
                           0000D8   740 _P5	=	0x00d8
                           0000E1   741 G$XBR0$0$0 == 0x00e1
                           0000E1   742 _XBR0	=	0x00e1
                           0000E2   743 G$XBR1$0$0 == 0x00e2
                           0000E2   744 _XBR1	=	0x00e2
                           0000E3   745 G$XBR2$0$0 == 0x00e3
                           0000E3   746 _XBR2	=	0x00e3
                           0000E8   747 G$P6$0$0 == 0x00e8
                           0000E8   748 _P6	=	0x00e8
                           0000F8   749 G$P7$0$0 == 0x00f8
                           0000F8   750 _P7	=	0x00f8
                           008C8A   751 G$TMR0$0$0 == 0x8c8a
                           008C8A   752 _TMR0	=	0x8c8a
                           008D8B   753 G$TMR1$0$0 == 0x8d8b
                           008D8B   754 _TMR1	=	0x8d8b
                           00CDCC   755 G$TMR2$0$0 == 0xcdcc
                           00CDCC   756 _TMR2	=	0xcdcc
                           00CBCA   757 G$RCAP2$0$0 == 0xcbca
                           00CBCA   758 _RCAP2	=	0xcbca
                           00BFBE   759 G$ADC0$0$0 == 0xbfbe
                           00BFBE   760 _ADC0	=	0xbfbe
                           00C5C4   761 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   762 _ADC0GT	=	0xc5c4
                           00C7C6   763 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   764 _ADC0LT	=	0xc7c6
                           00D3D2   765 G$DAC0$0$0 == 0xd3d2
                           00D3D2   766 _DAC0	=	0xd3d2
                           00FAF9   767 G$PCA0$0$0 == 0xfaf9
                           00FAF9   768 _PCA0	=	0xfaf9
                           00FCFB   769 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   770 _PCA0CP0	=	0xfcfb
                           00FEFD   771 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   772 _PCA0CP1	=	0xfefd
                           00EAE9   773 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   774 _PCA0CP2	=	0xeae9
                           00ECEB   775 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   776 _PCA0CP3	=	0xeceb
                           00EEED   777 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   778 _PCA0CP4	=	0xeeed
                           00E2E1   779 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   780 _PCA0CP5	=	0xe2e1
                           00CDCC   781 G$TMR3$0$0 == 0xcdcc
                           00CDCC   782 _TMR3	=	0xcdcc
                           00CBCA   783 G$RCAP3$0$0 == 0xcbca
                           00CBCA   784 _RCAP3	=	0xcbca
                           00D3D2   785 G$DAC1$0$0 == 0xd3d2
                           00D3D2   786 _DAC1	=	0xd3d2
                           00CDCC   787 G$TMR4$0$0 == 0xcdcc
                           00CDCC   788 _TMR4	=	0xcdcc
                           00CBCA   789 G$RCAP4$0$0 == 0xcbca
                           00CBCA   790 _RCAP4	=	0xcbca
                           00C2C1   791 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   792 _MAC0A	=	0xc2c1
                           96959493   793 G$MAC0ACC$0$0 == 0x96959493
                           96959493   794 _MAC0ACC	=	0x96959493
                           00CFCE   795 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   796 _MAC0RND	=	0xcfce
                                    797 ;--------------------------------------------------------
                                    798 ; special function bits
                                    799 ;--------------------------------------------------------
                                    800 	.area RSEG    (ABS,DATA)
      000000                        801 	.org 0x0000
                           000080   802 G$P0_0$0$0 == 0x0080
                           000080   803 _P0_0	=	0x0080
                           000081   804 G$P0_1$0$0 == 0x0081
                           000081   805 _P0_1	=	0x0081
                           000082   806 G$P0_2$0$0 == 0x0082
                           000082   807 _P0_2	=	0x0082
                           000083   808 G$P0_3$0$0 == 0x0083
                           000083   809 _P0_3	=	0x0083
                           000084   810 G$P0_4$0$0 == 0x0084
                           000084   811 _P0_4	=	0x0084
                           000085   812 G$P0_5$0$0 == 0x0085
                           000085   813 _P0_5	=	0x0085
                           000086   814 G$P0_6$0$0 == 0x0086
                           000086   815 _P0_6	=	0x0086
                           000087   816 G$P0_7$0$0 == 0x0087
                           000087   817 _P0_7	=	0x0087
                           000088   818 G$IT0$0$0 == 0x0088
                           000088   819 _IT0	=	0x0088
                           000089   820 G$IE0$0$0 == 0x0089
                           000089   821 _IE0	=	0x0089
                           00008A   822 G$IT1$0$0 == 0x008a
                           00008A   823 _IT1	=	0x008a
                           00008B   824 G$IE1$0$0 == 0x008b
                           00008B   825 _IE1	=	0x008b
                           00008C   826 G$TR0$0$0 == 0x008c
                           00008C   827 _TR0	=	0x008c
                           00008D   828 G$TF0$0$0 == 0x008d
                           00008D   829 _TF0	=	0x008d
                           00008E   830 G$TR1$0$0 == 0x008e
                           00008E   831 _TR1	=	0x008e
                           00008F   832 G$TF1$0$0 == 0x008f
                           00008F   833 _TF1	=	0x008f
                           000088   834 G$CP0HYN0$0$0 == 0x0088
                           000088   835 _CP0HYN0	=	0x0088
                           000089   836 G$CP0HYN1$0$0 == 0x0089
                           000089   837 _CP0HYN1	=	0x0089
                           00008A   838 G$CP0HYP0$0$0 == 0x008a
                           00008A   839 _CP0HYP0	=	0x008a
                           00008B   840 G$CP0HYP1$0$0 == 0x008b
                           00008B   841 _CP0HYP1	=	0x008b
                           00008C   842 G$CP0FIF$0$0 == 0x008c
                           00008C   843 _CP0FIF	=	0x008c
                           00008D   844 G$CP0RIF$0$0 == 0x008d
                           00008D   845 _CP0RIF	=	0x008d
                           00008E   846 G$CP0OUT$0$0 == 0x008e
                           00008E   847 _CP0OUT	=	0x008e
                           00008F   848 G$CP0EN$0$0 == 0x008f
                           00008F   849 _CP0EN	=	0x008f
                           000088   850 G$CP1HYN0$0$0 == 0x0088
                           000088   851 _CP1HYN0	=	0x0088
                           000089   852 G$CP1HYN1$0$0 == 0x0089
                           000089   853 _CP1HYN1	=	0x0089
                           00008A   854 G$CP1HYP0$0$0 == 0x008a
                           00008A   855 _CP1HYP0	=	0x008a
                           00008B   856 G$CP1HYP1$0$0 == 0x008b
                           00008B   857 _CP1HYP1	=	0x008b
                           00008C   858 G$CP1FIF$0$0 == 0x008c
                           00008C   859 _CP1FIF	=	0x008c
                           00008D   860 G$CP1RIF$0$0 == 0x008d
                           00008D   861 _CP1RIF	=	0x008d
                           00008E   862 G$CP1OUT$0$0 == 0x008e
                           00008E   863 _CP1OUT	=	0x008e
                           00008F   864 G$CP1EN$0$0 == 0x008f
                           00008F   865 _CP1EN	=	0x008f
                           000088   866 G$FLHBUSY$0$0 == 0x0088
                           000088   867 _FLHBUSY	=	0x0088
                           000090   868 G$P1_0$0$0 == 0x0090
                           000090   869 _P1_0	=	0x0090
                           000091   870 G$P1_1$0$0 == 0x0091
                           000091   871 _P1_1	=	0x0091
                           000092   872 G$P1_2$0$0 == 0x0092
                           000092   873 _P1_2	=	0x0092
                           000093   874 G$P1_3$0$0 == 0x0093
                           000093   875 _P1_3	=	0x0093
                           000094   876 G$P1_4$0$0 == 0x0094
                           000094   877 _P1_4	=	0x0094
                           000095   878 G$P1_5$0$0 == 0x0095
                           000095   879 _P1_5	=	0x0095
                           000096   880 G$P1_6$0$0 == 0x0096
                           000096   881 _P1_6	=	0x0096
                           000097   882 G$P1_7$0$0 == 0x0097
                           000097   883 _P1_7	=	0x0097
                           000098   884 G$RI0$0$0 == 0x0098
                           000098   885 _RI0	=	0x0098
                           000098   886 G$RI$0$0 == 0x0098
                           000098   887 _RI	=	0x0098
                           000099   888 G$TI0$0$0 == 0x0099
                           000099   889 _TI0	=	0x0099
                           000099   890 G$TI$0$0 == 0x0099
                           000099   891 _TI	=	0x0099
                           00009A   892 G$RB80$0$0 == 0x009a
                           00009A   893 _RB80	=	0x009a
                           00009B   894 G$TB80$0$0 == 0x009b
                           00009B   895 _TB80	=	0x009b
                           00009C   896 G$REN0$0$0 == 0x009c
                           00009C   897 _REN0	=	0x009c
                           00009C   898 G$REN$0$0 == 0x009c
                           00009C   899 _REN	=	0x009c
                           00009D   900 G$SM20$0$0 == 0x009d
                           00009D   901 _SM20	=	0x009d
                           00009E   902 G$SM10$0$0 == 0x009e
                           00009E   903 _SM10	=	0x009e
                           00009F   904 G$SM00$0$0 == 0x009f
                           00009F   905 _SM00	=	0x009f
                           000098   906 G$RI1$0$0 == 0x0098
                           000098   907 _RI1	=	0x0098
                           000099   908 G$TI1$0$0 == 0x0099
                           000099   909 _TI1	=	0x0099
                           00009A   910 G$RB81$0$0 == 0x009a
                           00009A   911 _RB81	=	0x009a
                           00009B   912 G$TB81$0$0 == 0x009b
                           00009B   913 _TB81	=	0x009b
                           00009C   914 G$REN1$0$0 == 0x009c
                           00009C   915 _REN1	=	0x009c
                           00009D   916 G$MCE1$0$0 == 0x009d
                           00009D   917 _MCE1	=	0x009d
                           00009F   918 G$S1MODE$0$0 == 0x009f
                           00009F   919 _S1MODE	=	0x009f
                           0000A0   920 G$P2_0$0$0 == 0x00a0
                           0000A0   921 _P2_0	=	0x00a0
                           0000A1   922 G$P2_1$0$0 == 0x00a1
                           0000A1   923 _P2_1	=	0x00a1
                           0000A2   924 G$P2_2$0$0 == 0x00a2
                           0000A2   925 _P2_2	=	0x00a2
                           0000A3   926 G$P2_3$0$0 == 0x00a3
                           0000A3   927 _P2_3	=	0x00a3
                           0000A4   928 G$P2_4$0$0 == 0x00a4
                           0000A4   929 _P2_4	=	0x00a4
                           0000A5   930 G$P2_5$0$0 == 0x00a5
                           0000A5   931 _P2_5	=	0x00a5
                           0000A6   932 G$P2_6$0$0 == 0x00a6
                           0000A6   933 _P2_6	=	0x00a6
                           0000A7   934 G$P2_7$0$0 == 0x00a7
                           0000A7   935 _P2_7	=	0x00a7
                           0000A8   936 G$EX0$0$0 == 0x00a8
                           0000A8   937 _EX0	=	0x00a8
                           0000A9   938 G$ET0$0$0 == 0x00a9
                           0000A9   939 _ET0	=	0x00a9
                           0000AA   940 G$EX1$0$0 == 0x00aa
                           0000AA   941 _EX1	=	0x00aa
                           0000AB   942 G$ET1$0$0 == 0x00ab
                           0000AB   943 _ET1	=	0x00ab
                           0000AC   944 G$ES0$0$0 == 0x00ac
                           0000AC   945 _ES0	=	0x00ac
                           0000AC   946 G$ES$0$0 == 0x00ac
                           0000AC   947 _ES	=	0x00ac
                           0000AD   948 G$ET2$0$0 == 0x00ad
                           0000AD   949 _ET2	=	0x00ad
                           0000AF   950 G$EA$0$0 == 0x00af
                           0000AF   951 _EA	=	0x00af
                           0000B0   952 G$P3_0$0$0 == 0x00b0
                           0000B0   953 _P3_0	=	0x00b0
                           0000B1   954 G$P3_1$0$0 == 0x00b1
                           0000B1   955 _P3_1	=	0x00b1
                           0000B2   956 G$P3_2$0$0 == 0x00b2
                           0000B2   957 _P3_2	=	0x00b2
                           0000B3   958 G$P3_3$0$0 == 0x00b3
                           0000B3   959 _P3_3	=	0x00b3
                           0000B4   960 G$P3_4$0$0 == 0x00b4
                           0000B4   961 _P3_4	=	0x00b4
                           0000B5   962 G$P3_5$0$0 == 0x00b5
                           0000B5   963 _P3_5	=	0x00b5
                           0000B6   964 G$P3_6$0$0 == 0x00b6
                           0000B6   965 _P3_6	=	0x00b6
                           0000B7   966 G$P3_7$0$0 == 0x00b7
                           0000B7   967 _P3_7	=	0x00b7
                           0000B8   968 G$PX0$0$0 == 0x00b8
                           0000B8   969 _PX0	=	0x00b8
                           0000B9   970 G$PT0$0$0 == 0x00b9
                           0000B9   971 _PT0	=	0x00b9
                           0000BA   972 G$PX1$0$0 == 0x00ba
                           0000BA   973 _PX1	=	0x00ba
                           0000BB   974 G$PT1$0$0 == 0x00bb
                           0000BB   975 _PT1	=	0x00bb
                           0000BC   976 G$PS0$0$0 == 0x00bc
                           0000BC   977 _PS0	=	0x00bc
                           0000BC   978 G$PS$0$0 == 0x00bc
                           0000BC   979 _PS	=	0x00bc
                           0000BD   980 G$PT2$0$0 == 0x00bd
                           0000BD   981 _PT2	=	0x00bd
                           0000C0   982 G$SMBTOE$0$0 == 0x00c0
                           0000C0   983 _SMBTOE	=	0x00c0
                           0000C1   984 G$SMBFTE$0$0 == 0x00c1
                           0000C1   985 _SMBFTE	=	0x00c1
                           0000C2   986 G$AA$0$0 == 0x00c2
                           0000C2   987 _AA	=	0x00c2
                           0000C3   988 G$SI$0$0 == 0x00c3
                           0000C3   989 _SI	=	0x00c3
                           0000C4   990 G$STO$0$0 == 0x00c4
                           0000C4   991 _STO	=	0x00c4
                           0000C5   992 G$STA$0$0 == 0x00c5
                           0000C5   993 _STA	=	0x00c5
                           0000C6   994 G$ENSMB$0$0 == 0x00c6
                           0000C6   995 _ENSMB	=	0x00c6
                           0000C7   996 G$BUSY$0$0 == 0x00c7
                           0000C7   997 _BUSY	=	0x00c7
                           0000C0   998 G$MAC0N$0$0 == 0x00c0
                           0000C0   999 _MAC0N	=	0x00c0
                           0000C1  1000 G$MAC0SO$0$0 == 0x00c1
                           0000C1  1001 _MAC0SO	=	0x00c1
                           0000C2  1002 G$MAC0Z$0$0 == 0x00c2
                           0000C2  1003 _MAC0Z	=	0x00c2
                           0000C3  1004 G$MAC0HO$0$0 == 0x00c3
                           0000C3  1005 _MAC0HO	=	0x00c3
                           0000C8  1006 G$CPRL2$0$0 == 0x00c8
                           0000C8  1007 _CPRL2	=	0x00c8
                           0000C9  1008 G$CT2$0$0 == 0x00c9
                           0000C9  1009 _CT2	=	0x00c9
                           0000CA  1010 G$TR2$0$0 == 0x00ca
                           0000CA  1011 _TR2	=	0x00ca
                           0000CB  1012 G$EXEN2$0$0 == 0x00cb
                           0000CB  1013 _EXEN2	=	0x00cb
                           0000CE  1014 G$EXF2$0$0 == 0x00ce
                           0000CE  1015 _EXF2	=	0x00ce
                           0000CF  1016 G$TF2$0$0 == 0x00cf
                           0000CF  1017 _TF2	=	0x00cf
                           0000C8  1018 G$CPRL3$0$0 == 0x00c8
                           0000C8  1019 _CPRL3	=	0x00c8
                           0000C9  1020 G$CT3$0$0 == 0x00c9
                           0000C9  1021 _CT3	=	0x00c9
                           0000CA  1022 G$TR3$0$0 == 0x00ca
                           0000CA  1023 _TR3	=	0x00ca
                           0000CB  1024 G$EXEN3$0$0 == 0x00cb
                           0000CB  1025 _EXEN3	=	0x00cb
                           0000CE  1026 G$EXF3$0$0 == 0x00ce
                           0000CE  1027 _EXF3	=	0x00ce
                           0000CF  1028 G$TF3$0$0 == 0x00cf
                           0000CF  1029 _TF3	=	0x00cf
                           0000C8  1030 G$CPRL4$0$0 == 0x00c8
                           0000C8  1031 _CPRL4	=	0x00c8
                           0000C9  1032 G$CT4$0$0 == 0x00c9
                           0000C9  1033 _CT4	=	0x00c9
                           0000CA  1034 G$TR4$0$0 == 0x00ca
                           0000CA  1035 _TR4	=	0x00ca
                           0000CB  1036 G$EXEN4$0$0 == 0x00cb
                           0000CB  1037 _EXEN4	=	0x00cb
                           0000CE  1038 G$EXF4$0$0 == 0x00ce
                           0000CE  1039 _EXF4	=	0x00ce
                           0000CF  1040 G$TF4$0$0 == 0x00cf
                           0000CF  1041 _TF4	=	0x00cf
                           0000C8  1042 G$P4_0$0$0 == 0x00c8
                           0000C8  1043 _P4_0	=	0x00c8
                           0000C9  1044 G$P4_1$0$0 == 0x00c9
                           0000C9  1045 _P4_1	=	0x00c9
                           0000CA  1046 G$P4_2$0$0 == 0x00ca
                           0000CA  1047 _P4_2	=	0x00ca
                           0000CB  1048 G$P4_3$0$0 == 0x00cb
                           0000CB  1049 _P4_3	=	0x00cb
                           0000CC  1050 G$P4_4$0$0 == 0x00cc
                           0000CC  1051 _P4_4	=	0x00cc
                           0000CD  1052 G$P4_5$0$0 == 0x00cd
                           0000CD  1053 _P4_5	=	0x00cd
                           0000CE  1054 G$P4_6$0$0 == 0x00ce
                           0000CE  1055 _P4_6	=	0x00ce
                           0000CF  1056 G$P4_7$0$0 == 0x00cf
                           0000CF  1057 _P4_7	=	0x00cf
                           0000D0  1058 G$P$0$0 == 0x00d0
                           0000D0  1059 _P	=	0x00d0
                           0000D1  1060 G$F1$0$0 == 0x00d1
                           0000D1  1061 _F1	=	0x00d1
                           0000D2  1062 G$OV$0$0 == 0x00d2
                           0000D2  1063 _OV	=	0x00d2
                           0000D3  1064 G$RS0$0$0 == 0x00d3
                           0000D3  1065 _RS0	=	0x00d3
                           0000D4  1066 G$RS1$0$0 == 0x00d4
                           0000D4  1067 _RS1	=	0x00d4
                           0000D5  1068 G$F0$0$0 == 0x00d5
                           0000D5  1069 _F0	=	0x00d5
                           0000D6  1070 G$AC$0$0 == 0x00d6
                           0000D6  1071 _AC	=	0x00d6
                           0000D7  1072 G$CY$0$0 == 0x00d7
                           0000D7  1073 _CY	=	0x00d7
                           0000D8  1074 G$CCF0$0$0 == 0x00d8
                           0000D8  1075 _CCF0	=	0x00d8
                           0000D9  1076 G$CCF1$0$0 == 0x00d9
                           0000D9  1077 _CCF1	=	0x00d9
                           0000DA  1078 G$CCF2$0$0 == 0x00da
                           0000DA  1079 _CCF2	=	0x00da
                           0000DB  1080 G$CCF3$0$0 == 0x00db
                           0000DB  1081 _CCF3	=	0x00db
                           0000DC  1082 G$CCF4$0$0 == 0x00dc
                           0000DC  1083 _CCF4	=	0x00dc
                           0000DD  1084 G$CCF5$0$0 == 0x00dd
                           0000DD  1085 _CCF5	=	0x00dd
                           0000DE  1086 G$CR$0$0 == 0x00de
                           0000DE  1087 _CR	=	0x00de
                           0000DF  1088 G$CF$0$0 == 0x00df
                           0000DF  1089 _CF	=	0x00df
                           0000D8  1090 G$P5_0$0$0 == 0x00d8
                           0000D8  1091 _P5_0	=	0x00d8
                           0000D9  1092 G$P5_1$0$0 == 0x00d9
                           0000D9  1093 _P5_1	=	0x00d9
                           0000DA  1094 G$P5_2$0$0 == 0x00da
                           0000DA  1095 _P5_2	=	0x00da
                           0000DB  1096 G$P5_3$0$0 == 0x00db
                           0000DB  1097 _P5_3	=	0x00db
                           0000DC  1098 G$P5_4$0$0 == 0x00dc
                           0000DC  1099 _P5_4	=	0x00dc
                           0000DD  1100 G$P5_5$0$0 == 0x00dd
                           0000DD  1101 _P5_5	=	0x00dd
                           0000DE  1102 G$P5_6$0$0 == 0x00de
                           0000DE  1103 _P5_6	=	0x00de
                           0000DF  1104 G$P5_7$0$0 == 0x00df
                           0000DF  1105 _P5_7	=	0x00df
                           0000E8  1106 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1107 _AD0LJST	=	0x00e8
                           0000E9  1108 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1109 _AD0WINT	=	0x00e9
                           0000EA  1110 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1111 _AD0CM0	=	0x00ea
                           0000EB  1112 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1113 _AD0CM1	=	0x00eb
                           0000EC  1114 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1115 _AD0BUSY	=	0x00ec
                           0000ED  1116 G$AD0INT$0$0 == 0x00ed
                           0000ED  1117 _AD0INT	=	0x00ed
                           0000EE  1118 G$AD0TM$0$0 == 0x00ee
                           0000EE  1119 _AD0TM	=	0x00ee
                           0000EF  1120 G$AD0EN$0$0 == 0x00ef
                           0000EF  1121 _AD0EN	=	0x00ef
                           0000E8  1122 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1123 _AD2WINT	=	0x00e8
                           0000E9  1124 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1125 _AD2CM0	=	0x00e9
                           0000EA  1126 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1127 _AD2CM1	=	0x00ea
                           0000EB  1128 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1129 _AD2CM2	=	0x00eb
                           0000EC  1130 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1131 _AD2BUSY	=	0x00ec
                           0000ED  1132 G$AD2INT$0$0 == 0x00ed
                           0000ED  1133 _AD2INT	=	0x00ed
                           0000EE  1134 G$AD2TM$0$0 == 0x00ee
                           0000EE  1135 _AD2TM	=	0x00ee
                           0000EF  1136 G$AD2EN$0$0 == 0x00ef
                           0000EF  1137 _AD2EN	=	0x00ef
                           0000E8  1138 G$P6_0$0$0 == 0x00e8
                           0000E8  1139 _P6_0	=	0x00e8
                           0000E9  1140 G$P6_1$0$0 == 0x00e9
                           0000E9  1141 _P6_1	=	0x00e9
                           0000EA  1142 G$P6_2$0$0 == 0x00ea
                           0000EA  1143 _P6_2	=	0x00ea
                           0000EB  1144 G$P6_3$0$0 == 0x00eb
                           0000EB  1145 _P6_3	=	0x00eb
                           0000EC  1146 G$P6_4$0$0 == 0x00ec
                           0000EC  1147 _P6_4	=	0x00ec
                           0000ED  1148 G$P6_5$0$0 == 0x00ed
                           0000ED  1149 _P6_5	=	0x00ed
                           0000EE  1150 G$P6_6$0$0 == 0x00ee
                           0000EE  1151 _P6_6	=	0x00ee
                           0000EF  1152 G$P6_7$0$0 == 0x00ef
                           0000EF  1153 _P6_7	=	0x00ef
                           0000F8  1154 G$SPIEN$0$0 == 0x00f8
                           0000F8  1155 _SPIEN	=	0x00f8
                           0000F9  1156 G$TXBMT$0$0 == 0x00f9
                           0000F9  1157 _TXBMT	=	0x00f9
                           0000FA  1158 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1159 _NSSMD0	=	0x00fa
                           0000FB  1160 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1161 _NSSMD1	=	0x00fb
                           0000FC  1162 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1163 _RXOVRN	=	0x00fc
                           0000FD  1164 G$MODF$0$0 == 0x00fd
                           0000FD  1165 _MODF	=	0x00fd
                           0000FE  1166 G$WCOL$0$0 == 0x00fe
                           0000FE  1167 _WCOL	=	0x00fe
                           0000FF  1168 G$SPIF$0$0 == 0x00ff
                           0000FF  1169 _SPIF	=	0x00ff
                           0000F8  1170 G$P7_0$0$0 == 0x00f8
                           0000F8  1171 _P7_0	=	0x00f8
                           0000F9  1172 G$P7_1$0$0 == 0x00f9
                           0000F9  1173 _P7_1	=	0x00f9
                           0000FA  1174 G$P7_2$0$0 == 0x00fa
                           0000FA  1175 _P7_2	=	0x00fa
                           0000FB  1176 G$P7_3$0$0 == 0x00fb
                           0000FB  1177 _P7_3	=	0x00fb
                           0000FC  1178 G$P7_4$0$0 == 0x00fc
                           0000FC  1179 _P7_4	=	0x00fc
                           0000FD  1180 G$P7_5$0$0 == 0x00fd
                           0000FD  1181 _P7_5	=	0x00fd
                           0000FE  1182 G$P7_6$0$0 == 0x00fe
                           0000FE  1183 _P7_6	=	0x00fe
                           0000FF  1184 G$P7_7$0$0 == 0x00ff
                           0000FF  1185 _P7_7	=	0x00ff
                                   1186 ;--------------------------------------------------------
                                   1187 ; overlayable register banks
                                   1188 ;--------------------------------------------------------
                                   1189 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1190 	.ds 8
                                   1191 ;--------------------------------------------------------
                                   1192 ; internal ram data
                                   1193 ;--------------------------------------------------------
                                   1194 	.area DSEG    (DATA)
                           000000  1195 G$C$0$0==.
      000008                       1196 _C::
      000008                       1197 	.ds 1
                           000001  1198 G$q$0$0==.
      000009                       1199 _q::
      000009                       1200 	.ds 2
                           000003  1201 G$U1F$0$0==.
      00000B                       1202 _U1F::
      00000B                       1203 	.ds 2
                           000005  1204 G$U0F$0$0==.
      00000D                       1205 _U0F::
      00000D                       1206 	.ds 2
                           000007  1207 G$FLAG$0$0==.
      00000F                       1208 _FLAG::
      00000F                       1209 	.ds 2
                                   1210 ;--------------------------------------------------------
                                   1211 ; overlayable items in internal ram 
                                   1212 ;--------------------------------------------------------
                                   1213 	.area	OSEG    (OVR,DATA)
                                   1214 	.area	OSEG    (OVR,DATA)
                                   1215 	.area	OSEG    (OVR,DATA)
                                   1216 	.area	OSEG    (OVR,DATA)
                                   1217 	.area	OSEG    (OVR,DATA)
                                   1218 ;--------------------------------------------------------
                                   1219 ; Stack segment in internal ram 
                                   1220 ;--------------------------------------------------------
                                   1221 	.area	SSEG
      00003C                       1222 __start__stack:
      00003C                       1223 	.ds	1
                                   1224 
                                   1225 ;--------------------------------------------------------
                                   1226 ; indirectly addressable internal ram data
                                   1227 ;--------------------------------------------------------
                                   1228 	.area ISEG    (DATA)
                                   1229 ;--------------------------------------------------------
                                   1230 ; absolute internal ram data
                                   1231 ;--------------------------------------------------------
                                   1232 	.area IABS    (ABS,DATA)
                                   1233 	.area IABS    (ABS,DATA)
                                   1234 ;--------------------------------------------------------
                                   1235 ; bit data
                                   1236 ;--------------------------------------------------------
                                   1237 	.area BSEG    (BIT)
                                   1238 ;--------------------------------------------------------
                                   1239 ; paged external ram data
                                   1240 ;--------------------------------------------------------
                                   1241 	.area PSEG    (PAG,XDATA)
                                   1242 ;--------------------------------------------------------
                                   1243 ; external ram data
                                   1244 ;--------------------------------------------------------
                                   1245 	.area XSEG    (XDATA)
                                   1246 ;--------------------------------------------------------
                                   1247 ; absolute external ram data
                                   1248 ;--------------------------------------------------------
                                   1249 	.area XABS    (ABS,XDATA)
                                   1250 ;--------------------------------------------------------
                                   1251 ; external initialized ram data
                                   1252 ;--------------------------------------------------------
                                   1253 	.area XISEG   (XDATA)
                                   1254 	.area HOME    (CODE)
                                   1255 	.area GSINIT0 (CODE)
                                   1256 	.area GSINIT1 (CODE)
                                   1257 	.area GSINIT2 (CODE)
                                   1258 	.area GSINIT3 (CODE)
                                   1259 	.area GSINIT4 (CODE)
                                   1260 	.area GSINIT5 (CODE)
                                   1261 	.area GSINIT  (CODE)
                                   1262 	.area GSFINAL (CODE)
                                   1263 	.area CSEG    (CODE)
                                   1264 ;--------------------------------------------------------
                                   1265 ; interrupt vector 
                                   1266 ;--------------------------------------------------------
                                   1267 	.area HOME    (CODE)
      000000                       1268 __interrupt_vect:
      000000 02 00 A9         [24] 1269 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1270 	reti
      000004                       1271 	.ds	7
      00000B 32               [24] 1272 	reti
      00000C                       1273 	.ds	7
      000013 32               [24] 1274 	reti
      000014                       1275 	.ds	7
      00001B 32               [24] 1276 	reti
      00001C                       1277 	.ds	7
      000023 02 02 01         [24] 1278 	ljmp	_UART0_ISR
      000026                       1279 	.ds	5
      00002B 32               [24] 1280 	reti
      00002C                       1281 	.ds	7
      000033 32               [24] 1282 	reti
      000034                       1283 	.ds	7
      00003B 32               [24] 1284 	reti
      00003C                       1285 	.ds	7
      000043 32               [24] 1286 	reti
      000044                       1287 	.ds	7
      00004B 32               [24] 1288 	reti
      00004C                       1289 	.ds	7
      000053 32               [24] 1290 	reti
      000054                       1291 	.ds	7
      00005B 32               [24] 1292 	reti
      00005C                       1293 	.ds	7
      000063 32               [24] 1294 	reti
      000064                       1295 	.ds	7
      00006B 32               [24] 1296 	reti
      00006C                       1297 	.ds	7
      000073 32               [24] 1298 	reti
      000074                       1299 	.ds	7
      00007B 32               [24] 1300 	reti
      00007C                       1301 	.ds	7
      000083 32               [24] 1302 	reti
      000084                       1303 	.ds	7
      00008B 32               [24] 1304 	reti
      00008C                       1305 	.ds	7
      000093 32               [24] 1306 	reti
      000094                       1307 	.ds	7
      00009B 32               [24] 1308 	reti
      00009C                       1309 	.ds	7
      0000A3 02 02 10         [24] 1310 	ljmp	_UART1_ISR
                                   1311 ;--------------------------------------------------------
                                   1312 ; global & static initialisations
                                   1313 ;--------------------------------------------------------
                                   1314 	.area HOME    (CODE)
                                   1315 	.area GSINIT  (CODE)
                                   1316 	.area GSFINAL (CODE)
                                   1317 	.area GSINIT  (CODE)
                                   1318 	.globl __sdcc_gsinit_startup
                                   1319 	.globl __sdcc_program_startup
                                   1320 	.globl __start__stack
                                   1321 	.globl __mcs51_genXINIT
                                   1322 	.globl __mcs51_genXRAMCLEAR
                                   1323 	.globl __mcs51_genRAMCLEAR
                                   1324 	.area GSFINAL (CODE)
      000102 02 00 A6         [24] 1325 	ljmp	__sdcc_program_startup
                                   1326 ;--------------------------------------------------------
                                   1327 ; Home
                                   1328 ;--------------------------------------------------------
                                   1329 	.area HOME    (CODE)
                                   1330 	.area HOME    (CODE)
      0000A6                       1331 __sdcc_program_startup:
      0000A6 02 01 1A         [24] 1332 	ljmp	_main
                                   1333 ;	return from main will return to caller
                                   1334 ;--------------------------------------------------------
                                   1335 ; code
                                   1336 ;--------------------------------------------------------
                                   1337 	.area CSEG    (CODE)
                                   1338 ;------------------------------------------------------------
                                   1339 ;Allocation info for local variables in function 'putchar'
                                   1340 ;------------------------------------------------------------
                                   1341 ;c                         Allocated to registers r7 
                                   1342 ;------------------------------------------------------------
                           000000  1343 	G$putchar$0$0 ==.
                           000000  1344 	C$putget.h$18$0$0 ==.
                                   1345 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:18: void putchar(char c)
                                   1346 ;	-----------------------------------------
                                   1347 ;	 function putchar
                                   1348 ;	-----------------------------------------
      000105                       1349 _putchar:
                           000007  1350 	ar7 = 0x07
                           000006  1351 	ar6 = 0x06
                           000005  1352 	ar5 = 0x05
                           000004  1353 	ar4 = 0x04
                           000003  1354 	ar3 = 0x03
                           000002  1355 	ar2 = 0x02
                           000001  1356 	ar1 = 0x01
                           000000  1357 	ar0 = 0x00
      000105 AF 82            [24] 1358 	mov	r7,dpl
                           000002  1359 	C$putget.h$20$1$16 ==.
                                   1360 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:20: while(!TI0); 
      000107                       1361 00101$:
                           000002  1362 	C$putget.h$21$1$16 ==.
                                   1363 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:21: TI0=0;
      000107 10 99 02         [24] 1364 	jbc	_TI0,00112$
      00010A 80 FB            [24] 1365 	sjmp	00101$
      00010C                       1366 00112$:
                           000007  1367 	C$putget.h$22$1$16 ==.
                                   1368 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:22: SBUF0 = c;
      00010C 8F 99            [24] 1369 	mov	_SBUF0,r7
                           000009  1370 	C$putget.h$23$1$16 ==.
                           000009  1371 	XG$putchar$0$0 ==.
      00010E 22               [24] 1372 	ret
                                   1373 ;------------------------------------------------------------
                                   1374 ;Allocation info for local variables in function 'getchar'
                                   1375 ;------------------------------------------------------------
                                   1376 ;c                         Allocated to registers 
                                   1377 ;------------------------------------------------------------
                           00000A  1378 	G$getchar$0$0 ==.
                           00000A  1379 	C$putget.h$28$1$16 ==.
                                   1380 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:28: char getchar(void)
                                   1381 ;	-----------------------------------------
                                   1382 ;	 function getchar
                                   1383 ;	-----------------------------------------
      00010F                       1384 _getchar:
                           00000A  1385 	C$putget.h$31$1$18 ==.
                                   1386 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:31: while(!RI0);
      00010F                       1387 00101$:
                           00000A  1388 	C$putget.h$32$1$18 ==.
                                   1389 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:32: RI0 =0;
      00010F 10 98 02         [24] 1390 	jbc	_RI0,00112$
      000112 80 FB            [24] 1391 	sjmp	00101$
      000114                       1392 00112$:
                           00000F  1393 	C$putget.h$33$1$18 ==.
                                   1394 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:33: c = SBUF0;
      000114 E5 99            [12] 1395 	mov	a,_SBUF0
                           000011  1396 	C$putget.h$36$1$18 ==.
                                   1397 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.2 - partner/putget.h:36: return SBUF0;
      000116 85 99 82         [24] 1398 	mov	dpl,_SBUF0
                           000014  1399 	C$putget.h$37$1$18 ==.
                           000014  1400 	XG$getchar$0$0 ==.
      000119 22               [24] 1401 	ret
                                   1402 ;------------------------------------------------------------
                                   1403 ;Allocation info for local variables in function 'main'
                                   1404 ;------------------------------------------------------------
                           000015  1405 	G$main$0$0 ==.
                           000015  1406 	C$Lab3Part2.c$29$1$18 ==.
                                   1407 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:29: void main(void)
                                   1408 ;	-----------------------------------------
                                   1409 ;	 function main
                                   1410 ;	-----------------------------------------
      00011A                       1411 _main:
                           000015  1412 	C$Lab3Part2.c$31$1$23 ==.
                                   1413 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:31: WDTCN = 0xDE;                       // Disable the watchdog timer
      00011A 75 FF DE         [24] 1414 	mov	_WDTCN,#0xDE
                           000018  1415 	C$Lab3Part2.c$32$1$23 ==.
                                   1416 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:32: WDTCN = 0xAD;
      00011D 75 FF AD         [24] 1417 	mov	_WDTCN,#0xAD
                           00001B  1418 	C$Lab3Part2.c$34$1$23 ==.
                                   1419 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:34: PORT_INIT();                        // Initialize the Crossbar and GPIO
      000120 12 02 1F         [24] 1420 	lcall	_PORT_INIT
                           00001E  1421 	C$Lab3Part2.c$35$1$23 ==.
                                   1422 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:35: SYSCLK_INIT();                      // Initialize the oscillator
      000123 12 02 6D         [24] 1423 	lcall	_SYSCLK_INIT
                           000021  1424 	C$Lab3Part2.c$36$1$23 ==.
                                   1425 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:36: UART0_INIT();                       // Initialize UART0
      000126 12 02 33         [24] 1426 	lcall	_UART0_INIT
                           000024  1427 	C$Lab3Part2.c$37$1$23 ==.
                                   1428 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:37: Interrupt_INIT();
      000129 12 02 C3         [24] 1429 	lcall	_Interrupt_INIT
                           000027  1430 	C$Lab3Part2.c$38$1$23 ==.
                                   1431 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:38: SFRPAGE   = UART0_PAGE;
      00012C 75 84 00         [24] 1432 	mov	_SFRPAGE,#0x00
                           00002A  1433 	C$Lab3Part2.c$39$1$23 ==.
                                   1434 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:39: while(1)
      00012F                       1435 00109$:
                           00002A  1436 	C$Lab3Part2.c$48$2$24 ==.
                                   1437 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:48: if(U0F == 1)
      00012F 74 01            [12] 1438 	mov	a,#0x01
      000131 B5 0D 06         [24] 1439 	cjne	a,_U0F,00125$
      000134 E4               [12] 1440 	clr	a
      000135 B5 0E 02         [24] 1441 	cjne	a,(_U0F + 1),00125$
      000138 80 02            [24] 1442 	sjmp	00126$
      00013A                       1443 00125$:
      00013A 80 4E            [24] 1444 	sjmp	00102$
      00013C                       1445 00126$:
                           000037  1446 	C$Lab3Part2.c$50$3$25 ==.
                                   1447 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:50: SFRPAGE = UART0_PAGE;
      00013C 75 84 00         [24] 1448 	mov	_SFRPAGE,#0x00
                           00003A  1449 	C$Lab3Part2.c$51$3$25 ==.
                                   1450 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:51: C = SBUF0;
      00013F 85 99 08         [24] 1451 	mov	_C,_SBUF0
                           00003D  1452 	C$Lab3Part2.c$52$3$25 ==.
                                   1453 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:52: printf("%c",C);
      000142 E5 08            [12] 1454 	mov	a,_C
      000144 FE               [12] 1455 	mov	r6,a
      000145 33               [12] 1456 	rlc	a
      000146 95 E0            [12] 1457 	subb	a,acc
      000148 FF               [12] 1458 	mov	r7,a
      000149 C0 06            [24] 1459 	push	ar6
      00014B C0 07            [24] 1460 	push	ar7
      00014D 74 03            [12] 1461 	mov	a,#___str_0
      00014F C0 E0            [24] 1462 	push	acc
      000151 74 09            [12] 1463 	mov	a,#(___str_0 >> 8)
      000153 C0 E0            [24] 1464 	push	acc
      000155 74 80            [12] 1465 	mov	a,#0x80
      000157 C0 E0            [24] 1466 	push	acc
      000159 12 02 EF         [24] 1467 	lcall	_printf
      00015C E5 81            [12] 1468 	mov	a,sp
      00015E 24 FB            [12] 1469 	add	a,#0xfb
      000160 F5 81            [12] 1470 	mov	sp,a
                           00005D  1471 	C$Lab3Part2.c$53$3$25 ==.
                                   1472 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:53: SFRPAGE = UART1_PAGE;
      000162 75 84 01         [24] 1473 	mov	_SFRPAGE,#0x01
                           000060  1474 	C$Lab3Part2.c$54$3$25 ==.
                                   1475 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:54: printf("%c",C);
      000165 E5 08            [12] 1476 	mov	a,_C
      000167 FE               [12] 1477 	mov	r6,a
      000168 33               [12] 1478 	rlc	a
      000169 95 E0            [12] 1479 	subb	a,acc
      00016B FF               [12] 1480 	mov	r7,a
      00016C C0 06            [24] 1481 	push	ar6
      00016E C0 07            [24] 1482 	push	ar7
      000170 74 03            [12] 1483 	mov	a,#___str_0
      000172 C0 E0            [24] 1484 	push	acc
      000174 74 09            [12] 1485 	mov	a,#(___str_0 >> 8)
      000176 C0 E0            [24] 1486 	push	acc
      000178 74 80            [12] 1487 	mov	a,#0x80
      00017A C0 E0            [24] 1488 	push	acc
      00017C 12 02 EF         [24] 1489 	lcall	_printf
      00017F E5 81            [12] 1490 	mov	a,sp
      000181 24 FB            [12] 1491 	add	a,#0xfb
      000183 F5 81            [12] 1492 	mov	sp,a
                           000080  1493 	C$Lab3Part2.c$55$3$25 ==.
                                   1494 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:55: U0F = 0;
      000185 E4               [12] 1495 	clr	a
      000186 F5 0D            [12] 1496 	mov	_U0F,a
      000188 F5 0E            [12] 1497 	mov	(_U0F + 1),a
      00018A                       1498 00102$:
                           000085  1499 	C$Lab3Part2.c$57$2$24 ==.
                                   1500 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:57: if(U1F == 1)
      00018A 74 01            [12] 1501 	mov	a,#0x01
      00018C B5 0B 06         [24] 1502 	cjne	a,_U1F,00127$
      00018F E4               [12] 1503 	clr	a
      000190 B5 0C 02         [24] 1504 	cjne	a,(_U1F + 1),00127$
      000193 80 02            [24] 1505 	sjmp	00128$
      000195                       1506 00127$:
      000195 80 4E            [24] 1507 	sjmp	00104$
      000197                       1508 00128$:
                           000092  1509 	C$Lab3Part2.c$59$3$26 ==.
                                   1510 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:59: SFRPAGE = UART1_PAGE;
      000197 75 84 01         [24] 1511 	mov	_SFRPAGE,#0x01
                           000095  1512 	C$Lab3Part2.c$60$3$26 ==.
                                   1513 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:60: C = SBUF1;
      00019A 85 99 08         [24] 1514 	mov	_C,_SBUF1
                           000098  1515 	C$Lab3Part2.c$61$3$26 ==.
                                   1516 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:61: printf("%c",C);
      00019D E5 08            [12] 1517 	mov	a,_C
      00019F FE               [12] 1518 	mov	r6,a
      0001A0 33               [12] 1519 	rlc	a
      0001A1 95 E0            [12] 1520 	subb	a,acc
      0001A3 FF               [12] 1521 	mov	r7,a
      0001A4 C0 06            [24] 1522 	push	ar6
      0001A6 C0 07            [24] 1523 	push	ar7
      0001A8 74 03            [12] 1524 	mov	a,#___str_0
      0001AA C0 E0            [24] 1525 	push	acc
      0001AC 74 09            [12] 1526 	mov	a,#(___str_0 >> 8)
      0001AE C0 E0            [24] 1527 	push	acc
      0001B0 74 80            [12] 1528 	mov	a,#0x80
      0001B2 C0 E0            [24] 1529 	push	acc
      0001B4 12 02 EF         [24] 1530 	lcall	_printf
      0001B7 E5 81            [12] 1531 	mov	a,sp
      0001B9 24 FB            [12] 1532 	add	a,#0xfb
      0001BB F5 81            [12] 1533 	mov	sp,a
                           0000B8  1534 	C$Lab3Part2.c$62$3$26 ==.
                                   1535 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:62: SFRPAGE = UART0_PAGE;
      0001BD 75 84 00         [24] 1536 	mov	_SFRPAGE,#0x00
                           0000BB  1537 	C$Lab3Part2.c$63$3$26 ==.
                                   1538 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:63: printf("%c",C);
      0001C0 E5 08            [12] 1539 	mov	a,_C
      0001C2 FE               [12] 1540 	mov	r6,a
      0001C3 33               [12] 1541 	rlc	a
      0001C4 95 E0            [12] 1542 	subb	a,acc
      0001C6 FF               [12] 1543 	mov	r7,a
      0001C7 C0 06            [24] 1544 	push	ar6
      0001C9 C0 07            [24] 1545 	push	ar7
      0001CB 74 03            [12] 1546 	mov	a,#___str_0
      0001CD C0 E0            [24] 1547 	push	acc
      0001CF 74 09            [12] 1548 	mov	a,#(___str_0 >> 8)
      0001D1 C0 E0            [24] 1549 	push	acc
      0001D3 74 80            [12] 1550 	mov	a,#0x80
      0001D5 C0 E0            [24] 1551 	push	acc
      0001D7 12 02 EF         [24] 1552 	lcall	_printf
      0001DA E5 81            [12] 1553 	mov	a,sp
      0001DC 24 FB            [12] 1554 	add	a,#0xfb
      0001DE F5 81            [12] 1555 	mov	sp,a
                           0000DB  1556 	C$Lab3Part2.c$64$3$26 ==.
                                   1557 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:64: U1F = 0;
      0001E0 E4               [12] 1558 	clr	a
      0001E1 F5 0B            [12] 1559 	mov	_U1F,a
      0001E3 F5 0C            [12] 1560 	mov	(_U1F + 1),a
      0001E5                       1561 00104$:
                           0000E0  1562 	C$Lab3Part2.c$66$2$24 ==.
                                   1563 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:66: if(q)
      0001E5 E5 09            [12] 1564 	mov	a,_q
      0001E7 45 0A            [12] 1565 	orl	a,(_q + 1)
      0001E9 60 0A            [24] 1566 	jz	00106$
                           0000E6  1567 	C$Lab3Part2.c$68$3$27 ==.
                                   1568 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:68: ES0 = 1;
      0001EB D2 AC            [12] 1569 	setb	_ES0
                           0000E8  1570 	C$Lab3Part2.c$69$3$27 ==.
                                   1571 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:69: q = 0;
      0001ED E4               [12] 1572 	clr	a
      0001EE F5 09            [12] 1573 	mov	_q,a
      0001F0 F5 0A            [12] 1574 	mov	(_q + 1),a
      0001F2 02 01 2F         [24] 1575 	ljmp	00109$
      0001F5                       1576 00106$:
                           0000F0  1577 	C$Lab3Part2.c$74$3$28 ==.
                                   1578 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:74: ES0 = 0;
      0001F5 C2 AC            [12] 1579 	clr	_ES0
                           0000F2  1580 	C$Lab3Part2.c$75$3$28 ==.
                                   1581 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:75: q = 1;
      0001F7 75 09 01         [24] 1582 	mov	_q,#0x01
      0001FA 75 0A 00         [24] 1583 	mov	(_q + 1),#0x00
      0001FD 02 01 2F         [24] 1584 	ljmp	00109$
                           0000FB  1585 	C$Lab3Part2.c$79$1$23 ==.
                           0000FB  1586 	XG$main$0$0 ==.
      000200 22               [24] 1587 	ret
                                   1588 ;------------------------------------------------------------
                                   1589 ;Allocation info for local variables in function 'UART0_ISR'
                                   1590 ;------------------------------------------------------------
                           0000FC  1591 	G$UART0_ISR$0$0 ==.
                           0000FC  1592 	C$Lab3Part2.c$81$1$23 ==.
                                   1593 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:81: void UART0_ISR (void) __interrupt 4
                                   1594 ;	-----------------------------------------
                                   1595 ;	 function UART0_ISR
                                   1596 ;	-----------------------------------------
      000201                       1597 _UART0_ISR:
                           0000FC  1598 	C$Lab3Part2.c$83$1$30 ==.
                                   1599 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:83: SFRPAGE = UART0_PAGE;
      000201 75 84 00         [24] 1600 	mov	_SFRPAGE,#0x00
                           0000FF  1601 	C$Lab3Part2.c$84$1$30 ==.
                                   1602 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:84: if(RI0)
      000204 30 98 08         [24] 1603 	jnb	_RI0,00103$
                           000102  1604 	C$Lab3Part2.c$86$2$31 ==.
                                   1605 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:86: U0F = 1;
      000207 75 0D 01         [24] 1606 	mov	_U0F,#0x01
      00020A 75 0E 00         [24] 1607 	mov	(_U0F + 1),#0x00
                           000108  1608 	C$Lab3Part2.c$87$2$31 ==.
                                   1609 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:87: RI0 = 0;
      00020D C2 98            [12] 1610 	clr	_RI0
      00020F                       1611 00103$:
                           00010A  1612 	C$Lab3Part2.c$90$1$30 ==.
                           00010A  1613 	XG$UART0_ISR$0$0 ==.
      00020F 32               [24] 1614 	reti
                                   1615 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1616 ;	eliminated unneeded push/pop psw
                                   1617 ;	eliminated unneeded push/pop dpl
                                   1618 ;	eliminated unneeded push/pop dph
                                   1619 ;	eliminated unneeded push/pop b
                                   1620 ;	eliminated unneeded push/pop acc
                                   1621 ;------------------------------------------------------------
                                   1622 ;Allocation info for local variables in function 'UART1_ISR'
                                   1623 ;------------------------------------------------------------
                           00010B  1624 	G$UART1_ISR$0$0 ==.
                           00010B  1625 	C$Lab3Part2.c$92$1$30 ==.
                                   1626 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:92: void UART1_ISR (void) __interrupt 20
                                   1627 ;	-----------------------------------------
                                   1628 ;	 function UART1_ISR
                                   1629 ;	-----------------------------------------
      000210                       1630 _UART1_ISR:
                           00010B  1631 	C$Lab3Part2.c$95$1$33 ==.
                                   1632 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:95: SFRPAGE = UART1_PAGE;
      000210 75 84 01         [24] 1633 	mov	_SFRPAGE,#0x01
                           00010E  1634 	C$Lab3Part2.c$96$1$33 ==.
                                   1635 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:96: if(RI1)
      000213 30 98 08         [24] 1636 	jnb	_RI1,00103$
                           000111  1637 	C$Lab3Part2.c$98$2$34 ==.
                                   1638 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:98: U1F = 1;
      000216 75 0B 01         [24] 1639 	mov	_U1F,#0x01
      000219 75 0C 00         [24] 1640 	mov	(_U1F + 1),#0x00
                           000117  1641 	C$Lab3Part2.c$99$2$34 ==.
                                   1642 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:99: RI1 = 0;
      00021C C2 98            [12] 1643 	clr	_RI1
      00021E                       1644 00103$:
                           000119  1645 	C$Lab3Part2.c$102$1$33 ==.
                           000119  1646 	XG$UART1_ISR$0$0 ==.
      00021E 32               [24] 1647 	reti
                                   1648 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1649 ;	eliminated unneeded push/pop psw
                                   1650 ;	eliminated unneeded push/pop dpl
                                   1651 ;	eliminated unneeded push/pop dph
                                   1652 ;	eliminated unneeded push/pop b
                                   1653 ;	eliminated unneeded push/pop acc
                                   1654 ;------------------------------------------------------------
                                   1655 ;Allocation info for local variables in function 'PORT_INIT'
                                   1656 ;------------------------------------------------------------
                                   1657 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1658 ;------------------------------------------------------------
                           00011A  1659 	G$PORT_INIT$0$0 ==.
                           00011A  1660 	C$Lab3Part2.c$104$1$33 ==.
                                   1661 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:104: void PORT_INIT(void)
                                   1662 ;	-----------------------------------------
                                   1663 ;	 function PORT_INIT
                                   1664 ;	-----------------------------------------
      00021F                       1665 _PORT_INIT:
                           00011A  1666 	C$Lab3Part2.c$108$1$36 ==.
                                   1667 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:108: SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page
      00021F AF 84            [24] 1668 	mov	r7,_SFRPAGE
                           00011C  1669 	C$Lab3Part2.c$110$1$36 ==.
                                   1670 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:110: SFRPAGE  = CONFIG_PAGE;
      000221 75 84 0F         [24] 1671 	mov	_SFRPAGE,#0x0F
                           00011F  1672 	C$Lab3Part2.c$112$1$36 ==.
                                   1673 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:112: P0MDOUT   = 0x05;
      000224 75 A4 05         [24] 1674 	mov	_P0MDOUT,#0x05
                           000122  1675 	C$Lab3Part2.c$113$1$36 ==.
                                   1676 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:113: P0 = ~ 0x05;
      000227 75 80 FA         [24] 1677 	mov	_P0,#0xFA
                           000125  1678 	C$Lab3Part2.c$114$1$36 ==.
                                   1679 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:114: XBR0      = 0x04;
      00022A 75 E1 04         [24] 1680 	mov	_XBR0,#0x04
                           000128  1681 	C$Lab3Part2.c$115$1$36 ==.
                                   1682 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:115: XBR2      = 0x44;
      00022D 75 E3 44         [24] 1683 	mov	_XBR2,#0x44
                           00012B  1684 	C$Lab3Part2.c$117$1$36 ==.
                                   1685 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:117: SFRPAGE  = SFRPAGE_SAVE;            // Restore SFR page
      000230 8F 84            [24] 1686 	mov	_SFRPAGE,r7
                           00012D  1687 	C$Lab3Part2.c$118$1$36 ==.
                           00012D  1688 	XG$PORT_INIT$0$0 ==.
      000232 22               [24] 1689 	ret
                                   1690 ;------------------------------------------------------------
                                   1691 ;Allocation info for local variables in function 'UART0_INIT'
                                   1692 ;------------------------------------------------------------
                                   1693 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1694 ;------------------------------------------------------------
                           00012E  1695 	G$UART0_INIT$0$0 ==.
                           00012E  1696 	C$Lab3Part2.c$123$1$36 ==.
                                   1697 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:123: void UART0_INIT(void)
                                   1698 ;	-----------------------------------------
                                   1699 ;	 function UART0_INIT
                                   1700 ;	-----------------------------------------
      000233                       1701 _UART0_INIT:
                           00012E  1702 	C$Lab3Part2.c$127$1$38 ==.
                                   1703 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:127: SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page
      000233 AF 84            [24] 1704 	mov	r7,_SFRPAGE
                           000130  1705 	C$Lab3Part2.c$129$1$38 ==.
                                   1706 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:129: SFRPAGE = TIMER01_PAGE;
      000235 75 84 00         [24] 1707 	mov	_SFRPAGE,#0x00
                           000133  1708 	C$Lab3Part2.c$139$1$38 ==.
                                   1709 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:139: TH1 =           0xA0;
      000238 75 8D A0         [24] 1710 	mov	_TH1,#0xA0
                           000136  1711 	C$Lab3Part2.c$140$1$38 ==.
                                   1712 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:140: TL1 = TH1;
      00023B 85 8D 8B         [24] 1713 	mov	_TL1,_TH1
                           000139  1714 	C$Lab3Part2.c$141$1$38 ==.
                                   1715 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:141: TMOD =          0x20;
      00023E 75 89 20         [24] 1716 	mov	_TMOD,#0x20
                           00013C  1717 	C$Lab3Part2.c$142$1$38 ==.
                                   1718 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:142: CKCON =         0x10;
      000241 75 8E 10         [24] 1719 	mov	_CKCON,#0x10
                           00013F  1720 	C$Lab3Part2.c$143$1$38 ==.
                                   1721 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:143: TR1     = 1;                        // Start Timer1
      000244 D2 8E            [12] 1722 	setb	_TR1
                           000141  1723 	C$Lab3Part2.c$145$1$38 ==.
                                   1724 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:145: SFRPAGE = UART0_PAGE;
      000246 75 84 00         [24] 1725 	mov	_SFRPAGE,#0x00
                           000144  1726 	C$Lab3Part2.c$146$1$38 ==.
                                   1727 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:146: SCON0   = 0x70;                     // Mode 1, 8-bit UART, enable RX
      000249 75 98 70         [24] 1728 	mov	_SCON0,#0x70
                           000147  1729 	C$Lab3Part2.c$147$1$38 ==.
                                   1730 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:147: SSTA0   = 0x15;                     // SMOD0 = 1
      00024C 75 91 15         [24] 1731 	mov	_SSTA0,#0x15
                           00014A  1732 	C$Lab3Part2.c$148$1$38 ==.
                                   1733 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:148: TI0     = 1;                        // Indicate TX0 ready
      00024F D2 99            [12] 1734 	setb	_TI0
                           00014C  1735 	C$Lab3Part2.c$150$1$38 ==.
                                   1736 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:150: SFRPAGE = UART1_PAGE;
      000251 75 84 01         [24] 1737 	mov	_SFRPAGE,#0x01
                           00014F  1738 	C$Lab3Part2.c$151$1$38 ==.
                                   1739 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:151: SCON1 =   0x10;
      000254 75 98 10         [24] 1740 	mov	_SCON1,#0x10
                           000152  1741 	C$Lab3Part2.c$152$1$38 ==.
                                   1742 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:152: TI1 = 1;
      000257 D2 99            [12] 1743 	setb	_TI1
                           000154  1744 	C$Lab3Part2.c$154$1$38 ==.
                                   1745 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:154: SFRPAGE = TMR2_PAGE;
      000259 75 84 00         [24] 1746 	mov	_SFRPAGE,#0x00
                           000157  1747 	C$Lab3Part2.c$156$1$38 ==.
                                   1748 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:156: RCAP2H =    0xFF;
      00025C 75 CB FF         [24] 1749 	mov	_RCAP2H,#0xFF
                           00015A  1750 	C$Lab3Part2.c$157$1$38 ==.
                                   1751 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:157: RCAP2L =    0x70;
      00025F 75 CA 70         [24] 1752 	mov	_RCAP2L,#0x70
                           00015D  1753 	C$Lab3Part2.c$159$1$38 ==.
                                   1754 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:159: TMR2CF = 	0x08;
      000262 75 C9 08         [24] 1755 	mov	_TMR2CF,#0x08
                           000160  1756 	C$Lab3Part2.c$160$1$38 ==.
                                   1757 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:160: TMR2CN = 	0x04;
      000265 75 C8 04         [24] 1758 	mov	_TMR2CN,#0x04
                           000163  1759 	C$Lab3Part2.c$161$1$38 ==.
                                   1760 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:161: TR2 = 1;
      000268 D2 CA            [12] 1761 	setb	_TR2
                           000165  1762 	C$Lab3Part2.c$163$1$38 ==.
                                   1763 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:163: SFRPAGE = SFRPAGE_SAVE; 
      00026A 8F 84            [24] 1764 	mov	_SFRPAGE,r7
                           000167  1765 	C$Lab3Part2.c$164$1$38 ==.
                           000167  1766 	XG$UART0_INIT$0$0 ==.
      00026C 22               [24] 1767 	ret
                                   1768 ;------------------------------------------------------------
                                   1769 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1770 ;------------------------------------------------------------
                                   1771 ;i                         Allocated to registers r5 r6 
                                   1772 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1773 ;------------------------------------------------------------
                           000168  1774 	G$SYSCLK_INIT$0$0 ==.
                           000168  1775 	C$Lab3Part2.c$167$1$38 ==.
                                   1776 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:167: void SYSCLK_INIT(void)
                                   1777 ;	-----------------------------------------
                                   1778 ;	 function SYSCLK_INIT
                                   1779 ;	-----------------------------------------
      00026D                       1780 _SYSCLK_INIT:
                           000168  1781 	C$Lab3Part2.c$172$1$40 ==.
                                   1782 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:172: SFRPAGE_SAVE = SFRPAGE;             // Save Current SFR page
      00026D AF 84            [24] 1783 	mov	r7,_SFRPAGE
                           00016A  1784 	C$Lab3Part2.c$174$1$40 ==.
                                   1785 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:174: SFRPAGE = CONFIG_PAGE;
      00026F 75 84 0F         [24] 1786 	mov	_SFRPAGE,#0x0F
                           00016D  1787 	C$Lab3Part2.c$175$1$40 ==.
                                   1788 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:175: OSCXCN  = 0x67;                     // Start ext osc with 22.1184MHz crystal
      000272 75 8C 67         [24] 1789 	mov	_OSCXCN,#0x67
                           000170  1790 	C$Lab3Part2.c$176$1$40 ==.
                                   1791 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:176: for(i=0; i < 256; i++);             // Wait for the oscillator to start up
      000275 7D 00            [12] 1792 	mov	r5,#0x00
      000277 7E 01            [12] 1793 	mov	r6,#0x01
      000279                       1794 00111$:
      000279 1D               [12] 1795 	dec	r5
      00027A BD FF 01         [24] 1796 	cjne	r5,#0xFF,00141$
      00027D 1E               [12] 1797 	dec	r6
      00027E                       1798 00141$:
      00027E ED               [12] 1799 	mov	a,r5
      00027F 4E               [12] 1800 	orl	a,r6
      000280 70 F7            [24] 1801 	jnz	00111$
                           00017D  1802 	C$Lab3Part2.c$177$1$40 ==.
                                   1803 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:177: while(!(OSCXCN & 0x80));
      000282                       1804 00102$:
      000282 E5 8C            [12] 1805 	mov	a,_OSCXCN
      000284 30 E7 FB         [24] 1806 	jnb	acc.7,00102$
                           000182  1807 	C$Lab3Part2.c$178$1$40 ==.
                                   1808 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:178: CLKSEL  = 0x01;
      000287 75 97 01         [24] 1809 	mov	_CLKSEL,#0x01
                           000185  1810 	C$Lab3Part2.c$179$1$40 ==.
                                   1811 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:179: OSCICN  = 0x00;
      00028A 75 8A 00         [24] 1812 	mov	_OSCICN,#0x00
                           000188  1813 	C$Lab3Part2.c$181$1$40 ==.
                                   1814 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:181: SFRPAGE = CONFIG_PAGE;
      00028D 75 84 0F         [24] 1815 	mov	_SFRPAGE,#0x0F
                           00018B  1816 	C$Lab3Part2.c$182$1$40 ==.
                                   1817 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:182: PLL0CN  = 0x04;
      000290 75 89 04         [24] 1818 	mov	_PLL0CN,#0x04
                           00018E  1819 	C$Lab3Part2.c$183$1$40 ==.
                                   1820 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:183: SFRPAGE = LEGACY_PAGE;
      000293 75 84 00         [24] 1821 	mov	_SFRPAGE,#0x00
                           000191  1822 	C$Lab3Part2.c$184$1$40 ==.
                                   1823 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:184: FLSCL   = 0x10;
      000296 75 B7 10         [24] 1824 	mov	_FLSCL,#0x10
                           000194  1825 	C$Lab3Part2.c$185$1$40 ==.
                                   1826 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:185: SFRPAGE = CONFIG_PAGE;
      000299 75 84 0F         [24] 1827 	mov	_SFRPAGE,#0x0F
                           000197  1828 	C$Lab3Part2.c$186$1$40 ==.
                                   1829 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:186: PLL0CN |= 0x01;
      00029C 43 89 01         [24] 1830 	orl	_PLL0CN,#0x01
                           00019A  1831 	C$Lab3Part2.c$187$1$40 ==.
                                   1832 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:187: PLL0DIV = 0x01;
      00029F 75 8D 01         [24] 1833 	mov	_PLL0DIV,#0x01
                           00019D  1834 	C$Lab3Part2.c$188$1$40 ==.
                                   1835 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:188: PLL0FLT = 0x01;
      0002A2 75 8F 01         [24] 1836 	mov	_PLL0FLT,#0x01
                           0001A0  1837 	C$Lab3Part2.c$189$1$40 ==.
                                   1838 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:189: PLL0MUL = 0x01;
      0002A5 75 8E 01         [24] 1839 	mov	_PLL0MUL,#0x01
                           0001A3  1840 	C$Lab3Part2.c$190$1$40 ==.
                                   1841 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:190: for(i=0; i < 256; i++);
      0002A8 7D 00            [12] 1842 	mov	r5,#0x00
      0002AA 7E 01            [12] 1843 	mov	r6,#0x01
      0002AC                       1844 00114$:
      0002AC 1D               [12] 1845 	dec	r5
      0002AD BD FF 01         [24] 1846 	cjne	r5,#0xFF,00144$
      0002B0 1E               [12] 1847 	dec	r6
      0002B1                       1848 00144$:
      0002B1 ED               [12] 1849 	mov	a,r5
      0002B2 4E               [12] 1850 	orl	a,r6
      0002B3 70 F7            [24] 1851 	jnz	00114$
                           0001B0  1852 	C$Lab3Part2.c$191$1$40 ==.
                                   1853 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:191: PLL0CN |= 0x02;
      0002B5 43 89 02         [24] 1854 	orl	_PLL0CN,#0x02
                           0001B3  1855 	C$Lab3Part2.c$192$1$40 ==.
                                   1856 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:192: while(!(PLL0CN & 0x10));
      0002B8                       1857 00106$:
      0002B8 E5 89            [12] 1858 	mov	a,_PLL0CN
      0002BA 30 E4 FB         [24] 1859 	jnb	acc.4,00106$
                           0001B8  1860 	C$Lab3Part2.c$193$1$40 ==.
                                   1861 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:193: CLKSEL  = 0x02;
      0002BD 75 97 02         [24] 1862 	mov	_CLKSEL,#0x02
                           0001BB  1863 	C$Lab3Part2.c$195$1$40 ==.
                                   1864 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:195: SFRPAGE = SFRPAGE_SAVE;             // Restore SFR page
      0002C0 8F 84            [24] 1865 	mov	_SFRPAGE,r7
                           0001BD  1866 	C$Lab3Part2.c$196$1$40 ==.
                           0001BD  1867 	XG$SYSCLK_INIT$0$0 ==.
      0002C2 22               [24] 1868 	ret
                                   1869 ;------------------------------------------------------------
                                   1870 ;Allocation info for local variables in function 'Interrupt_INIT'
                                   1871 ;------------------------------------------------------------
                           0001BE  1872 	G$Interrupt_INIT$0$0 ==.
                           0001BE  1873 	C$Lab3Part2.c$197$1$40 ==.
                                   1874 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:197: void Interrupt_INIT()
                                   1875 ;	-----------------------------------------
                                   1876 ;	 function Interrupt_INIT
                                   1877 ;	-----------------------------------------
      0002C3                       1878 _Interrupt_INIT:
                           0001BE  1879 	C$Lab3Part2.c$200$1$41 ==.
                                   1880 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:200: EA = 1;
      0002C3 D2 AF            [12] 1881 	setb	_EA
                           0001C0  1882 	C$Lab3Part2.c$201$1$41 ==.
                                   1883 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:201: ES0 = 1;
      0002C5 D2 AC            [12] 1884 	setb	_ES0
                           0001C2  1885 	C$Lab3Part2.c$202$1$41 ==.
                                   1886 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.2 - partner\Lab3Part2.c:202: EIE2 = 0x40;
      0002C7 75 E7 40         [24] 1887 	mov	_EIE2,#0x40
                           0001C5  1888 	C$Lab3Part2.c$203$1$41 ==.
                           0001C5  1889 	XG$Interrupt_INIT$0$0 ==.
      0002CA 22               [24] 1890 	ret
                                   1891 	.area CSEG    (CODE)
                                   1892 	.area CONST   (CODE)
                           000000  1893 FLab3Part2$__str_0$0$0 == .
      000903                       1894 ___str_0:
      000903 25 63                 1895 	.ascii "%c"
      000905 00                    1896 	.db 0x00
                                   1897 	.area XINIT   (CODE)
                                   1898 	.area CABS    (ABS,CODE)
