                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Nov 17 18:51:58 2016
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
                                    396 	.globl _PRINTED
                                    397 	.globl _tenth
                                    398 	.globl _time
                                    399 	.globl _putchar
                                    400 	.globl _getchar
                                    401 	.globl _main
                                    402 	.globl _Timer0_ISR
                                    403 	.globl _PORT_INIT
                                    404 	.globl _SYSCLK_INIT
                                    405 	.globl _UART0_INIT
                                    406 ;--------------------------------------------------------
                                    407 ; special function registers
                                    408 ;--------------------------------------------------------
                                    409 	.area RSEG    (ABS,DATA)
      000000                        410 	.org 0x0000
                           000080   411 G$P0$0$0 == 0x0080
                           000080   412 _P0	=	0x0080
                           000081   413 G$SP$0$0 == 0x0081
                           000081   414 _SP	=	0x0081
                           000082   415 G$DPL$0$0 == 0x0082
                           000082   416 _DPL	=	0x0082
                           000083   417 G$DPH$0$0 == 0x0083
                           000083   418 _DPH	=	0x0083
                           000084   419 G$SFRPAGE$0$0 == 0x0084
                           000084   420 _SFRPAGE	=	0x0084
                           000085   421 G$SFRNEXT$0$0 == 0x0085
                           000085   422 _SFRNEXT	=	0x0085
                           000086   423 G$SFRLAST$0$0 == 0x0086
                           000086   424 _SFRLAST	=	0x0086
                           000087   425 G$PCON$0$0 == 0x0087
                           000087   426 _PCON	=	0x0087
                           000090   427 G$P1$0$0 == 0x0090
                           000090   428 _P1	=	0x0090
                           0000A0   429 G$P2$0$0 == 0x00a0
                           0000A0   430 _P2	=	0x00a0
                           0000A8   431 G$IE$0$0 == 0x00a8
                           0000A8   432 _IE	=	0x00a8
                           0000B0   433 G$P3$0$0 == 0x00b0
                           0000B0   434 _P3	=	0x00b0
                           0000B1   435 G$PSBANK$0$0 == 0x00b1
                           0000B1   436 _PSBANK	=	0x00b1
                           0000B8   437 G$IP$0$0 == 0x00b8
                           0000B8   438 _IP	=	0x00b8
                           0000D0   439 G$PSW$0$0 == 0x00d0
                           0000D0   440 _PSW	=	0x00d0
                           0000E0   441 G$ACC$0$0 == 0x00e0
                           0000E0   442 _ACC	=	0x00e0
                           0000E6   443 G$EIE1$0$0 == 0x00e6
                           0000E6   444 _EIE1	=	0x00e6
                           0000E7   445 G$EIE2$0$0 == 0x00e7
                           0000E7   446 _EIE2	=	0x00e7
                           0000F0   447 G$B$0$0 == 0x00f0
                           0000F0   448 _B	=	0x00f0
                           0000F6   449 G$EIP1$0$0 == 0x00f6
                           0000F6   450 _EIP1	=	0x00f6
                           0000F7   451 G$EIP2$0$0 == 0x00f7
                           0000F7   452 _EIP2	=	0x00f7
                           0000FF   453 G$WDTCN$0$0 == 0x00ff
                           0000FF   454 _WDTCN	=	0x00ff
                           000088   455 G$TCON$0$0 == 0x0088
                           000088   456 _TCON	=	0x0088
                           000089   457 G$TMOD$0$0 == 0x0089
                           000089   458 _TMOD	=	0x0089
                           00008A   459 G$TL0$0$0 == 0x008a
                           00008A   460 _TL0	=	0x008a
                           00008B   461 G$TL1$0$0 == 0x008b
                           00008B   462 _TL1	=	0x008b
                           00008C   463 G$TH0$0$0 == 0x008c
                           00008C   464 _TH0	=	0x008c
                           00008D   465 G$TH1$0$0 == 0x008d
                           00008D   466 _TH1	=	0x008d
                           00008E   467 G$CKCON$0$0 == 0x008e
                           00008E   468 _CKCON	=	0x008e
                           00008F   469 G$PSCTL$0$0 == 0x008f
                           00008F   470 _PSCTL	=	0x008f
                           000091   471 G$SSTA0$0$0 == 0x0091
                           000091   472 _SSTA0	=	0x0091
                           000098   473 G$SCON0$0$0 == 0x0098
                           000098   474 _SCON0	=	0x0098
                           000098   475 G$SCON$0$0 == 0x0098
                           000098   476 _SCON	=	0x0098
                           000099   477 G$SBUF0$0$0 == 0x0099
                           000099   478 _SBUF0	=	0x0099
                           000099   479 G$SBUF$0$0 == 0x0099
                           000099   480 _SBUF	=	0x0099
                           00009A   481 G$SPI0CFG$0$0 == 0x009a
                           00009A   482 _SPI0CFG	=	0x009a
                           00009B   483 G$SPI0DAT$0$0 == 0x009b
                           00009B   484 _SPI0DAT	=	0x009b
                           00009D   485 G$SPI0CKR$0$0 == 0x009d
                           00009D   486 _SPI0CKR	=	0x009d
                           0000A1   487 G$EMI0TC$0$0 == 0x00a1
                           0000A1   488 _EMI0TC	=	0x00a1
                           0000A2   489 G$EMI0CN$0$0 == 0x00a2
                           0000A2   490 _EMI0CN	=	0x00a2
                           0000A2   491 G$_XPAGE$0$0 == 0x00a2
                           0000A2   492 __XPAGE	=	0x00a2
                           0000A3   493 G$EMI0CF$0$0 == 0x00a3
                           0000A3   494 _EMI0CF	=	0x00a3
                           0000A9   495 G$SADDR0$0$0 == 0x00a9
                           0000A9   496 _SADDR0	=	0x00a9
                           0000B7   497 G$FLSCL$0$0 == 0x00b7
                           0000B7   498 _FLSCL	=	0x00b7
                           0000B9   499 G$SADEN0$0$0 == 0x00b9
                           0000B9   500 _SADEN0	=	0x00b9
                           0000BA   501 G$AMX0CF$0$0 == 0x00ba
                           0000BA   502 _AMX0CF	=	0x00ba
                           0000BB   503 G$AMX0SL$0$0 == 0x00bb
                           0000BB   504 _AMX0SL	=	0x00bb
                           0000BC   505 G$ADC0CF$0$0 == 0x00bc
                           0000BC   506 _ADC0CF	=	0x00bc
                           0000BE   507 G$ADC0L$0$0 == 0x00be
                           0000BE   508 _ADC0L	=	0x00be
                           0000BF   509 G$ADC0H$0$0 == 0x00bf
                           0000BF   510 _ADC0H	=	0x00bf
                           0000C0   511 G$SMB0CN$0$0 == 0x00c0
                           0000C0   512 _SMB0CN	=	0x00c0
                           0000C1   513 G$SMB0STA$0$0 == 0x00c1
                           0000C1   514 _SMB0STA	=	0x00c1
                           0000C2   515 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   516 _SMB0DAT	=	0x00c2
                           0000C3   517 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   518 _SMB0ADR	=	0x00c3
                           0000C4   519 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   520 _ADC0GTL	=	0x00c4
                           0000C5   521 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   522 _ADC0GTH	=	0x00c5
                           0000C6   523 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   524 _ADC0LTL	=	0x00c6
                           0000C7   525 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   526 _ADC0LTH	=	0x00c7
                           0000C8   527 G$TMR2CN$0$0 == 0x00c8
                           0000C8   528 _TMR2CN	=	0x00c8
                           0000C9   529 G$TMR2CF$0$0 == 0x00c9
                           0000C9   530 _TMR2CF	=	0x00c9
                           0000CA   531 G$RCAP2L$0$0 == 0x00ca
                           0000CA   532 _RCAP2L	=	0x00ca
                           0000CB   533 G$RCAP2H$0$0 == 0x00cb
                           0000CB   534 _RCAP2H	=	0x00cb
                           0000CC   535 G$TMR2L$0$0 == 0x00cc
                           0000CC   536 _TMR2L	=	0x00cc
                           0000CC   537 G$TL2$0$0 == 0x00cc
                           0000CC   538 _TL2	=	0x00cc
                           0000CD   539 G$TMR2H$0$0 == 0x00cd
                           0000CD   540 _TMR2H	=	0x00cd
                           0000CD   541 G$TH2$0$0 == 0x00cd
                           0000CD   542 _TH2	=	0x00cd
                           0000CF   543 G$SMB0CR$0$0 == 0x00cf
                           0000CF   544 _SMB0CR	=	0x00cf
                           0000D1   545 G$REF0CN$0$0 == 0x00d1
                           0000D1   546 _REF0CN	=	0x00d1
                           0000D2   547 G$DAC0L$0$0 == 0x00d2
                           0000D2   548 _DAC0L	=	0x00d2
                           0000D3   549 G$DAC0H$0$0 == 0x00d3
                           0000D3   550 _DAC0H	=	0x00d3
                           0000D4   551 G$DAC0CN$0$0 == 0x00d4
                           0000D4   552 _DAC0CN	=	0x00d4
                           0000D8   553 G$PCA0CN$0$0 == 0x00d8
                           0000D8   554 _PCA0CN	=	0x00d8
                           0000D9   555 G$PCA0MD$0$0 == 0x00d9
                           0000D9   556 _PCA0MD	=	0x00d9
                           0000DA   557 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   558 _PCA0CPM0	=	0x00da
                           0000DB   559 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   560 _PCA0CPM1	=	0x00db
                           0000DC   561 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   562 _PCA0CPM2	=	0x00dc
                           0000DD   563 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   564 _PCA0CPM3	=	0x00dd
                           0000DE   565 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   566 _PCA0CPM4	=	0x00de
                           0000DF   567 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   568 _PCA0CPM5	=	0x00df
                           0000E1   569 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   570 _PCA0CPL5	=	0x00e1
                           0000E2   571 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   572 _PCA0CPH5	=	0x00e2
                           0000E8   573 G$ADC0CN$0$0 == 0x00e8
                           0000E8   574 _ADC0CN	=	0x00e8
                           0000E9   575 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   576 _PCA0CPL2	=	0x00e9
                           0000EA   577 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   578 _PCA0CPH2	=	0x00ea
                           0000EB   579 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   580 _PCA0CPL3	=	0x00eb
                           0000EC   581 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   582 _PCA0CPH3	=	0x00ec
                           0000ED   583 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   584 _PCA0CPL4	=	0x00ed
                           0000EE   585 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   586 _PCA0CPH4	=	0x00ee
                           0000EF   587 G$RSTSRC$0$0 == 0x00ef
                           0000EF   588 _RSTSRC	=	0x00ef
                           0000F8   589 G$SPI0CN$0$0 == 0x00f8
                           0000F8   590 _SPI0CN	=	0x00f8
                           0000F9   591 G$PCA0L$0$0 == 0x00f9
                           0000F9   592 _PCA0L	=	0x00f9
                           0000FA   593 G$PCA0H$0$0 == 0x00fa
                           0000FA   594 _PCA0H	=	0x00fa
                           0000FB   595 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   596 _PCA0CPL0	=	0x00fb
                           0000FC   597 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   598 _PCA0CPH0	=	0x00fc
                           0000FD   599 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   600 _PCA0CPL1	=	0x00fd
                           0000FE   601 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   602 _PCA0CPH1	=	0x00fe
                           000088   603 G$CPT0CN$0$0 == 0x0088
                           000088   604 _CPT0CN	=	0x0088
                           000089   605 G$CPT0MD$0$0 == 0x0089
                           000089   606 _CPT0MD	=	0x0089
                           000098   607 G$SCON1$0$0 == 0x0098
                           000098   608 _SCON1	=	0x0098
                           000099   609 G$SBUF1$0$0 == 0x0099
                           000099   610 _SBUF1	=	0x0099
                           0000C8   611 G$TMR3CN$0$0 == 0x00c8
                           0000C8   612 _TMR3CN	=	0x00c8
                           0000C9   613 G$TMR3CF$0$0 == 0x00c9
                           0000C9   614 _TMR3CF	=	0x00c9
                           0000CA   615 G$RCAP3L$0$0 == 0x00ca
                           0000CA   616 _RCAP3L	=	0x00ca
                           0000CB   617 G$RCAP3H$0$0 == 0x00cb
                           0000CB   618 _RCAP3H	=	0x00cb
                           0000CC   619 G$TMR3L$0$0 == 0x00cc
                           0000CC   620 _TMR3L	=	0x00cc
                           0000CD   621 G$TMR3H$0$0 == 0x00cd
                           0000CD   622 _TMR3H	=	0x00cd
                           0000D2   623 G$DAC1L$0$0 == 0x00d2
                           0000D2   624 _DAC1L	=	0x00d2
                           0000D3   625 G$DAC1H$0$0 == 0x00d3
                           0000D3   626 _DAC1H	=	0x00d3
                           0000D4   627 G$DAC1CN$0$0 == 0x00d4
                           0000D4   628 _DAC1CN	=	0x00d4
                           000088   629 G$CPT1CN$0$0 == 0x0088
                           000088   630 _CPT1CN	=	0x0088
                           000089   631 G$CPT1MD$0$0 == 0x0089
                           000089   632 _CPT1MD	=	0x0089
                           0000BA   633 G$AMX2CF$0$0 == 0x00ba
                           0000BA   634 _AMX2CF	=	0x00ba
                           0000BB   635 G$AMX2SL$0$0 == 0x00bb
                           0000BB   636 _AMX2SL	=	0x00bb
                           0000BC   637 G$ADC2CF$0$0 == 0x00bc
                           0000BC   638 _ADC2CF	=	0x00bc
                           0000BE   639 G$ADC2$0$0 == 0x00be
                           0000BE   640 _ADC2	=	0x00be
                           0000C4   641 G$ADC2GT$0$0 == 0x00c4
                           0000C4   642 _ADC2GT	=	0x00c4
                           0000C6   643 G$ADC2LT$0$0 == 0x00c6
                           0000C6   644 _ADC2LT	=	0x00c6
                           0000C8   645 G$TMR4CN$0$0 == 0x00c8
                           0000C8   646 _TMR4CN	=	0x00c8
                           0000C9   647 G$TMR4CF$0$0 == 0x00c9
                           0000C9   648 _TMR4CF	=	0x00c9
                           0000CA   649 G$RCAP4L$0$0 == 0x00ca
                           0000CA   650 _RCAP4L	=	0x00ca
                           0000CB   651 G$RCAP4H$0$0 == 0x00cb
                           0000CB   652 _RCAP4H	=	0x00cb
                           0000CC   653 G$TMR4L$0$0 == 0x00cc
                           0000CC   654 _TMR4L	=	0x00cc
                           0000CD   655 G$TMR4H$0$0 == 0x00cd
                           0000CD   656 _TMR4H	=	0x00cd
                           0000E8   657 G$ADC2CN$0$0 == 0x00e8
                           0000E8   658 _ADC2CN	=	0x00e8
                           000091   659 G$MAC0BL$0$0 == 0x0091
                           000091   660 _MAC0BL	=	0x0091
                           000092   661 G$MAC0BH$0$0 == 0x0092
                           000092   662 _MAC0BH	=	0x0092
                           000093   663 G$MAC0ACC0$0$0 == 0x0093
                           000093   664 _MAC0ACC0	=	0x0093
                           000094   665 G$MAC0ACC1$0$0 == 0x0094
                           000094   666 _MAC0ACC1	=	0x0094
                           000095   667 G$MAC0ACC2$0$0 == 0x0095
                           000095   668 _MAC0ACC2	=	0x0095
                           000096   669 G$MAC0ACC3$0$0 == 0x0096
                           000096   670 _MAC0ACC3	=	0x0096
                           000097   671 G$MAC0OVR$0$0 == 0x0097
                           000097   672 _MAC0OVR	=	0x0097
                           0000C0   673 G$MAC0STA$0$0 == 0x00c0
                           0000C0   674 _MAC0STA	=	0x00c0
                           0000C1   675 G$MAC0AL$0$0 == 0x00c1
                           0000C1   676 _MAC0AL	=	0x00c1
                           0000C2   677 G$MAC0AH$0$0 == 0x00c2
                           0000C2   678 _MAC0AH	=	0x00c2
                           0000C3   679 G$MAC0CF$0$0 == 0x00c3
                           0000C3   680 _MAC0CF	=	0x00c3
                           0000CE   681 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   682 _MAC0RNDL	=	0x00ce
                           0000CF   683 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   684 _MAC0RNDH	=	0x00cf
                           000088   685 G$FLSTAT$0$0 == 0x0088
                           000088   686 _FLSTAT	=	0x0088
                           000089   687 G$PLL0CN$0$0 == 0x0089
                           000089   688 _PLL0CN	=	0x0089
                           00008A   689 G$OSCICN$0$0 == 0x008a
                           00008A   690 _OSCICN	=	0x008a
                           00008B   691 G$OSCICL$0$0 == 0x008b
                           00008B   692 _OSCICL	=	0x008b
                           00008C   693 G$OSCXCN$0$0 == 0x008c
                           00008C   694 _OSCXCN	=	0x008c
                           00008D   695 G$PLL0DIV$0$0 == 0x008d
                           00008D   696 _PLL0DIV	=	0x008d
                           00008E   697 G$PLL0MUL$0$0 == 0x008e
                           00008E   698 _PLL0MUL	=	0x008e
                           00008F   699 G$PLL0FLT$0$0 == 0x008f
                           00008F   700 _PLL0FLT	=	0x008f
                           000096   701 G$SFRPGCN$0$0 == 0x0096
                           000096   702 _SFRPGCN	=	0x0096
                           000097   703 G$CLKSEL$0$0 == 0x0097
                           000097   704 _CLKSEL	=	0x0097
                           00009A   705 G$CCH0MA$0$0 == 0x009a
                           00009A   706 _CCH0MA	=	0x009a
                           00009C   707 G$P4MDOUT$0$0 == 0x009c
                           00009C   708 _P4MDOUT	=	0x009c
                           00009D   709 G$P5MDOUT$0$0 == 0x009d
                           00009D   710 _P5MDOUT	=	0x009d
                           00009E   711 G$P6MDOUT$0$0 == 0x009e
                           00009E   712 _P6MDOUT	=	0x009e
                           00009F   713 G$P7MDOUT$0$0 == 0x009f
                           00009F   714 _P7MDOUT	=	0x009f
                           0000A1   715 G$CCH0CN$0$0 == 0x00a1
                           0000A1   716 _CCH0CN	=	0x00a1
                           0000A2   717 G$CCH0TN$0$0 == 0x00a2
                           0000A2   718 _CCH0TN	=	0x00a2
                           0000A3   719 G$CCH0LC$0$0 == 0x00a3
                           0000A3   720 _CCH0LC	=	0x00a3
                           0000A4   721 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   722 _P0MDOUT	=	0x00a4
                           0000A5   723 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   724 _P1MDOUT	=	0x00a5
                           0000A6   725 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   726 _P2MDOUT	=	0x00a6
                           0000A7   727 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   728 _P3MDOUT	=	0x00a7
                           0000AD   729 G$P1MDIN$0$0 == 0x00ad
                           0000AD   730 _P1MDIN	=	0x00ad
                           0000B7   731 G$FLACL$0$0 == 0x00b7
                           0000B7   732 _FLACL	=	0x00b7
                           0000C8   733 G$P4$0$0 == 0x00c8
                           0000C8   734 _P4	=	0x00c8
                           0000D8   735 G$P5$0$0 == 0x00d8
                           0000D8   736 _P5	=	0x00d8
                           0000E1   737 G$XBR0$0$0 == 0x00e1
                           0000E1   738 _XBR0	=	0x00e1
                           0000E2   739 G$XBR1$0$0 == 0x00e2
                           0000E2   740 _XBR1	=	0x00e2
                           0000E3   741 G$XBR2$0$0 == 0x00e3
                           0000E3   742 _XBR2	=	0x00e3
                           0000E8   743 G$P6$0$0 == 0x00e8
                           0000E8   744 _P6	=	0x00e8
                           0000F8   745 G$P7$0$0 == 0x00f8
                           0000F8   746 _P7	=	0x00f8
                           008C8A   747 G$TMR0$0$0 == 0x8c8a
                           008C8A   748 _TMR0	=	0x8c8a
                           008D8B   749 G$TMR1$0$0 == 0x8d8b
                           008D8B   750 _TMR1	=	0x8d8b
                           00CDCC   751 G$TMR2$0$0 == 0xcdcc
                           00CDCC   752 _TMR2	=	0xcdcc
                           00CBCA   753 G$RCAP2$0$0 == 0xcbca
                           00CBCA   754 _RCAP2	=	0xcbca
                           00BFBE   755 G$ADC0$0$0 == 0xbfbe
                           00BFBE   756 _ADC0	=	0xbfbe
                           00C5C4   757 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   758 _ADC0GT	=	0xc5c4
                           00C7C6   759 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   760 _ADC0LT	=	0xc7c6
                           00D3D2   761 G$DAC0$0$0 == 0xd3d2
                           00D3D2   762 _DAC0	=	0xd3d2
                           00FAF9   763 G$PCA0$0$0 == 0xfaf9
                           00FAF9   764 _PCA0	=	0xfaf9
                           00FCFB   765 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   766 _PCA0CP0	=	0xfcfb
                           00FEFD   767 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   768 _PCA0CP1	=	0xfefd
                           00EAE9   769 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   770 _PCA0CP2	=	0xeae9
                           00ECEB   771 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   772 _PCA0CP3	=	0xeceb
                           00EEED   773 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   774 _PCA0CP4	=	0xeeed
                           00E2E1   775 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   776 _PCA0CP5	=	0xe2e1
                           00CDCC   777 G$TMR3$0$0 == 0xcdcc
                           00CDCC   778 _TMR3	=	0xcdcc
                           00CBCA   779 G$RCAP3$0$0 == 0xcbca
                           00CBCA   780 _RCAP3	=	0xcbca
                           00D3D2   781 G$DAC1$0$0 == 0xd3d2
                           00D3D2   782 _DAC1	=	0xd3d2
                           00CDCC   783 G$TMR4$0$0 == 0xcdcc
                           00CDCC   784 _TMR4	=	0xcdcc
                           00CBCA   785 G$RCAP4$0$0 == 0xcbca
                           00CBCA   786 _RCAP4	=	0xcbca
                           00C2C1   787 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   788 _MAC0A	=	0xc2c1
                           96959493   789 G$MAC0ACC$0$0 == 0x96959493
                           96959493   790 _MAC0ACC	=	0x96959493
                           00CFCE   791 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   792 _MAC0RND	=	0xcfce
                                    793 ;--------------------------------------------------------
                                    794 ; special function bits
                                    795 ;--------------------------------------------------------
                                    796 	.area RSEG    (ABS,DATA)
      000000                        797 	.org 0x0000
                           000080   798 G$P0_0$0$0 == 0x0080
                           000080   799 _P0_0	=	0x0080
                           000081   800 G$P0_1$0$0 == 0x0081
                           000081   801 _P0_1	=	0x0081
                           000082   802 G$P0_2$0$0 == 0x0082
                           000082   803 _P0_2	=	0x0082
                           000083   804 G$P0_3$0$0 == 0x0083
                           000083   805 _P0_3	=	0x0083
                           000084   806 G$P0_4$0$0 == 0x0084
                           000084   807 _P0_4	=	0x0084
                           000085   808 G$P0_5$0$0 == 0x0085
                           000085   809 _P0_5	=	0x0085
                           000086   810 G$P0_6$0$0 == 0x0086
                           000086   811 _P0_6	=	0x0086
                           000087   812 G$P0_7$0$0 == 0x0087
                           000087   813 _P0_7	=	0x0087
                           000088   814 G$IT0$0$0 == 0x0088
                           000088   815 _IT0	=	0x0088
                           000089   816 G$IE0$0$0 == 0x0089
                           000089   817 _IE0	=	0x0089
                           00008A   818 G$IT1$0$0 == 0x008a
                           00008A   819 _IT1	=	0x008a
                           00008B   820 G$IE1$0$0 == 0x008b
                           00008B   821 _IE1	=	0x008b
                           00008C   822 G$TR0$0$0 == 0x008c
                           00008C   823 _TR0	=	0x008c
                           00008D   824 G$TF0$0$0 == 0x008d
                           00008D   825 _TF0	=	0x008d
                           00008E   826 G$TR1$0$0 == 0x008e
                           00008E   827 _TR1	=	0x008e
                           00008F   828 G$TF1$0$0 == 0x008f
                           00008F   829 _TF1	=	0x008f
                           000088   830 G$CP0HYN0$0$0 == 0x0088
                           000088   831 _CP0HYN0	=	0x0088
                           000089   832 G$CP0HYN1$0$0 == 0x0089
                           000089   833 _CP0HYN1	=	0x0089
                           00008A   834 G$CP0HYP0$0$0 == 0x008a
                           00008A   835 _CP0HYP0	=	0x008a
                           00008B   836 G$CP0HYP1$0$0 == 0x008b
                           00008B   837 _CP0HYP1	=	0x008b
                           00008C   838 G$CP0FIF$0$0 == 0x008c
                           00008C   839 _CP0FIF	=	0x008c
                           00008D   840 G$CP0RIF$0$0 == 0x008d
                           00008D   841 _CP0RIF	=	0x008d
                           00008E   842 G$CP0OUT$0$0 == 0x008e
                           00008E   843 _CP0OUT	=	0x008e
                           00008F   844 G$CP0EN$0$0 == 0x008f
                           00008F   845 _CP0EN	=	0x008f
                           000088   846 G$CP1HYN0$0$0 == 0x0088
                           000088   847 _CP1HYN0	=	0x0088
                           000089   848 G$CP1HYN1$0$0 == 0x0089
                           000089   849 _CP1HYN1	=	0x0089
                           00008A   850 G$CP1HYP0$0$0 == 0x008a
                           00008A   851 _CP1HYP0	=	0x008a
                           00008B   852 G$CP1HYP1$0$0 == 0x008b
                           00008B   853 _CP1HYP1	=	0x008b
                           00008C   854 G$CP1FIF$0$0 == 0x008c
                           00008C   855 _CP1FIF	=	0x008c
                           00008D   856 G$CP1RIF$0$0 == 0x008d
                           00008D   857 _CP1RIF	=	0x008d
                           00008E   858 G$CP1OUT$0$0 == 0x008e
                           00008E   859 _CP1OUT	=	0x008e
                           00008F   860 G$CP1EN$0$0 == 0x008f
                           00008F   861 _CP1EN	=	0x008f
                           000088   862 G$FLHBUSY$0$0 == 0x0088
                           000088   863 _FLHBUSY	=	0x0088
                           000090   864 G$P1_0$0$0 == 0x0090
                           000090   865 _P1_0	=	0x0090
                           000091   866 G$P1_1$0$0 == 0x0091
                           000091   867 _P1_1	=	0x0091
                           000092   868 G$P1_2$0$0 == 0x0092
                           000092   869 _P1_2	=	0x0092
                           000093   870 G$P1_3$0$0 == 0x0093
                           000093   871 _P1_3	=	0x0093
                           000094   872 G$P1_4$0$0 == 0x0094
                           000094   873 _P1_4	=	0x0094
                           000095   874 G$P1_5$0$0 == 0x0095
                           000095   875 _P1_5	=	0x0095
                           000096   876 G$P1_6$0$0 == 0x0096
                           000096   877 _P1_6	=	0x0096
                           000097   878 G$P1_7$0$0 == 0x0097
                           000097   879 _P1_7	=	0x0097
                           000098   880 G$RI0$0$0 == 0x0098
                           000098   881 _RI0	=	0x0098
                           000098   882 G$RI$0$0 == 0x0098
                           000098   883 _RI	=	0x0098
                           000099   884 G$TI0$0$0 == 0x0099
                           000099   885 _TI0	=	0x0099
                           000099   886 G$TI$0$0 == 0x0099
                           000099   887 _TI	=	0x0099
                           00009A   888 G$RB80$0$0 == 0x009a
                           00009A   889 _RB80	=	0x009a
                           00009B   890 G$TB80$0$0 == 0x009b
                           00009B   891 _TB80	=	0x009b
                           00009C   892 G$REN0$0$0 == 0x009c
                           00009C   893 _REN0	=	0x009c
                           00009C   894 G$REN$0$0 == 0x009c
                           00009C   895 _REN	=	0x009c
                           00009D   896 G$SM20$0$0 == 0x009d
                           00009D   897 _SM20	=	0x009d
                           00009E   898 G$SM10$0$0 == 0x009e
                           00009E   899 _SM10	=	0x009e
                           00009F   900 G$SM00$0$0 == 0x009f
                           00009F   901 _SM00	=	0x009f
                           000098   902 G$RI1$0$0 == 0x0098
                           000098   903 _RI1	=	0x0098
                           000099   904 G$TI1$0$0 == 0x0099
                           000099   905 _TI1	=	0x0099
                           00009A   906 G$RB81$0$0 == 0x009a
                           00009A   907 _RB81	=	0x009a
                           00009B   908 G$TB81$0$0 == 0x009b
                           00009B   909 _TB81	=	0x009b
                           00009C   910 G$REN1$0$0 == 0x009c
                           00009C   911 _REN1	=	0x009c
                           00009D   912 G$MCE1$0$0 == 0x009d
                           00009D   913 _MCE1	=	0x009d
                           00009F   914 G$S1MODE$0$0 == 0x009f
                           00009F   915 _S1MODE	=	0x009f
                           0000A0   916 G$P2_0$0$0 == 0x00a0
                           0000A0   917 _P2_0	=	0x00a0
                           0000A1   918 G$P2_1$0$0 == 0x00a1
                           0000A1   919 _P2_1	=	0x00a1
                           0000A2   920 G$P2_2$0$0 == 0x00a2
                           0000A2   921 _P2_2	=	0x00a2
                           0000A3   922 G$P2_3$0$0 == 0x00a3
                           0000A3   923 _P2_3	=	0x00a3
                           0000A4   924 G$P2_4$0$0 == 0x00a4
                           0000A4   925 _P2_4	=	0x00a4
                           0000A5   926 G$P2_5$0$0 == 0x00a5
                           0000A5   927 _P2_5	=	0x00a5
                           0000A6   928 G$P2_6$0$0 == 0x00a6
                           0000A6   929 _P2_6	=	0x00a6
                           0000A7   930 G$P2_7$0$0 == 0x00a7
                           0000A7   931 _P2_7	=	0x00a7
                           0000A8   932 G$EX0$0$0 == 0x00a8
                           0000A8   933 _EX0	=	0x00a8
                           0000A9   934 G$ET0$0$0 == 0x00a9
                           0000A9   935 _ET0	=	0x00a9
                           0000AA   936 G$EX1$0$0 == 0x00aa
                           0000AA   937 _EX1	=	0x00aa
                           0000AB   938 G$ET1$0$0 == 0x00ab
                           0000AB   939 _ET1	=	0x00ab
                           0000AC   940 G$ES0$0$0 == 0x00ac
                           0000AC   941 _ES0	=	0x00ac
                           0000AC   942 G$ES$0$0 == 0x00ac
                           0000AC   943 _ES	=	0x00ac
                           0000AD   944 G$ET2$0$0 == 0x00ad
                           0000AD   945 _ET2	=	0x00ad
                           0000AF   946 G$EA$0$0 == 0x00af
                           0000AF   947 _EA	=	0x00af
                           0000B0   948 G$P3_0$0$0 == 0x00b0
                           0000B0   949 _P3_0	=	0x00b0
                           0000B1   950 G$P3_1$0$0 == 0x00b1
                           0000B1   951 _P3_1	=	0x00b1
                           0000B2   952 G$P3_2$0$0 == 0x00b2
                           0000B2   953 _P3_2	=	0x00b2
                           0000B3   954 G$P3_3$0$0 == 0x00b3
                           0000B3   955 _P3_3	=	0x00b3
                           0000B4   956 G$P3_4$0$0 == 0x00b4
                           0000B4   957 _P3_4	=	0x00b4
                           0000B5   958 G$P3_5$0$0 == 0x00b5
                           0000B5   959 _P3_5	=	0x00b5
                           0000B6   960 G$P3_6$0$0 == 0x00b6
                           0000B6   961 _P3_6	=	0x00b6
                           0000B7   962 G$P3_7$0$0 == 0x00b7
                           0000B7   963 _P3_7	=	0x00b7
                           0000B8   964 G$PX0$0$0 == 0x00b8
                           0000B8   965 _PX0	=	0x00b8
                           0000B9   966 G$PT0$0$0 == 0x00b9
                           0000B9   967 _PT0	=	0x00b9
                           0000BA   968 G$PX1$0$0 == 0x00ba
                           0000BA   969 _PX1	=	0x00ba
                           0000BB   970 G$PT1$0$0 == 0x00bb
                           0000BB   971 _PT1	=	0x00bb
                           0000BC   972 G$PS0$0$0 == 0x00bc
                           0000BC   973 _PS0	=	0x00bc
                           0000BC   974 G$PS$0$0 == 0x00bc
                           0000BC   975 _PS	=	0x00bc
                           0000BD   976 G$PT2$0$0 == 0x00bd
                           0000BD   977 _PT2	=	0x00bd
                           0000C0   978 G$SMBTOE$0$0 == 0x00c0
                           0000C0   979 _SMBTOE	=	0x00c0
                           0000C1   980 G$SMBFTE$0$0 == 0x00c1
                           0000C1   981 _SMBFTE	=	0x00c1
                           0000C2   982 G$AA$0$0 == 0x00c2
                           0000C2   983 _AA	=	0x00c2
                           0000C3   984 G$SI$0$0 == 0x00c3
                           0000C3   985 _SI	=	0x00c3
                           0000C4   986 G$STO$0$0 == 0x00c4
                           0000C4   987 _STO	=	0x00c4
                           0000C5   988 G$STA$0$0 == 0x00c5
                           0000C5   989 _STA	=	0x00c5
                           0000C6   990 G$ENSMB$0$0 == 0x00c6
                           0000C6   991 _ENSMB	=	0x00c6
                           0000C7   992 G$BUSY$0$0 == 0x00c7
                           0000C7   993 _BUSY	=	0x00c7
                           0000C0   994 G$MAC0N$0$0 == 0x00c0
                           0000C0   995 _MAC0N	=	0x00c0
                           0000C1   996 G$MAC0SO$0$0 == 0x00c1
                           0000C1   997 _MAC0SO	=	0x00c1
                           0000C2   998 G$MAC0Z$0$0 == 0x00c2
                           0000C2   999 _MAC0Z	=	0x00c2
                           0000C3  1000 G$MAC0HO$0$0 == 0x00c3
                           0000C3  1001 _MAC0HO	=	0x00c3
                           0000C8  1002 G$CPRL2$0$0 == 0x00c8
                           0000C8  1003 _CPRL2	=	0x00c8
                           0000C9  1004 G$CT2$0$0 == 0x00c9
                           0000C9  1005 _CT2	=	0x00c9
                           0000CA  1006 G$TR2$0$0 == 0x00ca
                           0000CA  1007 _TR2	=	0x00ca
                           0000CB  1008 G$EXEN2$0$0 == 0x00cb
                           0000CB  1009 _EXEN2	=	0x00cb
                           0000CE  1010 G$EXF2$0$0 == 0x00ce
                           0000CE  1011 _EXF2	=	0x00ce
                           0000CF  1012 G$TF2$0$0 == 0x00cf
                           0000CF  1013 _TF2	=	0x00cf
                           0000C8  1014 G$CPRL3$0$0 == 0x00c8
                           0000C8  1015 _CPRL3	=	0x00c8
                           0000C9  1016 G$CT3$0$0 == 0x00c9
                           0000C9  1017 _CT3	=	0x00c9
                           0000CA  1018 G$TR3$0$0 == 0x00ca
                           0000CA  1019 _TR3	=	0x00ca
                           0000CB  1020 G$EXEN3$0$0 == 0x00cb
                           0000CB  1021 _EXEN3	=	0x00cb
                           0000CE  1022 G$EXF3$0$0 == 0x00ce
                           0000CE  1023 _EXF3	=	0x00ce
                           0000CF  1024 G$TF3$0$0 == 0x00cf
                           0000CF  1025 _TF3	=	0x00cf
                           0000C8  1026 G$CPRL4$0$0 == 0x00c8
                           0000C8  1027 _CPRL4	=	0x00c8
                           0000C9  1028 G$CT4$0$0 == 0x00c9
                           0000C9  1029 _CT4	=	0x00c9
                           0000CA  1030 G$TR4$0$0 == 0x00ca
                           0000CA  1031 _TR4	=	0x00ca
                           0000CB  1032 G$EXEN4$0$0 == 0x00cb
                           0000CB  1033 _EXEN4	=	0x00cb
                           0000CE  1034 G$EXF4$0$0 == 0x00ce
                           0000CE  1035 _EXF4	=	0x00ce
                           0000CF  1036 G$TF4$0$0 == 0x00cf
                           0000CF  1037 _TF4	=	0x00cf
                           0000C8  1038 G$P4_0$0$0 == 0x00c8
                           0000C8  1039 _P4_0	=	0x00c8
                           0000C9  1040 G$P4_1$0$0 == 0x00c9
                           0000C9  1041 _P4_1	=	0x00c9
                           0000CA  1042 G$P4_2$0$0 == 0x00ca
                           0000CA  1043 _P4_2	=	0x00ca
                           0000CB  1044 G$P4_3$0$0 == 0x00cb
                           0000CB  1045 _P4_3	=	0x00cb
                           0000CC  1046 G$P4_4$0$0 == 0x00cc
                           0000CC  1047 _P4_4	=	0x00cc
                           0000CD  1048 G$P4_5$0$0 == 0x00cd
                           0000CD  1049 _P4_5	=	0x00cd
                           0000CE  1050 G$P4_6$0$0 == 0x00ce
                           0000CE  1051 _P4_6	=	0x00ce
                           0000CF  1052 G$P4_7$0$0 == 0x00cf
                           0000CF  1053 _P4_7	=	0x00cf
                           0000D0  1054 G$P$0$0 == 0x00d0
                           0000D0  1055 _P	=	0x00d0
                           0000D1  1056 G$F1$0$0 == 0x00d1
                           0000D1  1057 _F1	=	0x00d1
                           0000D2  1058 G$OV$0$0 == 0x00d2
                           0000D2  1059 _OV	=	0x00d2
                           0000D3  1060 G$RS0$0$0 == 0x00d3
                           0000D3  1061 _RS0	=	0x00d3
                           0000D4  1062 G$RS1$0$0 == 0x00d4
                           0000D4  1063 _RS1	=	0x00d4
                           0000D5  1064 G$F0$0$0 == 0x00d5
                           0000D5  1065 _F0	=	0x00d5
                           0000D6  1066 G$AC$0$0 == 0x00d6
                           0000D6  1067 _AC	=	0x00d6
                           0000D7  1068 G$CY$0$0 == 0x00d7
                           0000D7  1069 _CY	=	0x00d7
                           0000D8  1070 G$CCF0$0$0 == 0x00d8
                           0000D8  1071 _CCF0	=	0x00d8
                           0000D9  1072 G$CCF1$0$0 == 0x00d9
                           0000D9  1073 _CCF1	=	0x00d9
                           0000DA  1074 G$CCF2$0$0 == 0x00da
                           0000DA  1075 _CCF2	=	0x00da
                           0000DB  1076 G$CCF3$0$0 == 0x00db
                           0000DB  1077 _CCF3	=	0x00db
                           0000DC  1078 G$CCF4$0$0 == 0x00dc
                           0000DC  1079 _CCF4	=	0x00dc
                           0000DD  1080 G$CCF5$0$0 == 0x00dd
                           0000DD  1081 _CCF5	=	0x00dd
                           0000DE  1082 G$CR$0$0 == 0x00de
                           0000DE  1083 _CR	=	0x00de
                           0000DF  1084 G$CF$0$0 == 0x00df
                           0000DF  1085 _CF	=	0x00df
                           0000D8  1086 G$P5_0$0$0 == 0x00d8
                           0000D8  1087 _P5_0	=	0x00d8
                           0000D9  1088 G$P5_1$0$0 == 0x00d9
                           0000D9  1089 _P5_1	=	0x00d9
                           0000DA  1090 G$P5_2$0$0 == 0x00da
                           0000DA  1091 _P5_2	=	0x00da
                           0000DB  1092 G$P5_3$0$0 == 0x00db
                           0000DB  1093 _P5_3	=	0x00db
                           0000DC  1094 G$P5_4$0$0 == 0x00dc
                           0000DC  1095 _P5_4	=	0x00dc
                           0000DD  1096 G$P5_5$0$0 == 0x00dd
                           0000DD  1097 _P5_5	=	0x00dd
                           0000DE  1098 G$P5_6$0$0 == 0x00de
                           0000DE  1099 _P5_6	=	0x00de
                           0000DF  1100 G$P5_7$0$0 == 0x00df
                           0000DF  1101 _P5_7	=	0x00df
                           0000E8  1102 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1103 _AD0LJST	=	0x00e8
                           0000E9  1104 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1105 _AD0WINT	=	0x00e9
                           0000EA  1106 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1107 _AD0CM0	=	0x00ea
                           0000EB  1108 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1109 _AD0CM1	=	0x00eb
                           0000EC  1110 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1111 _AD0BUSY	=	0x00ec
                           0000ED  1112 G$AD0INT$0$0 == 0x00ed
                           0000ED  1113 _AD0INT	=	0x00ed
                           0000EE  1114 G$AD0TM$0$0 == 0x00ee
                           0000EE  1115 _AD0TM	=	0x00ee
                           0000EF  1116 G$AD0EN$0$0 == 0x00ef
                           0000EF  1117 _AD0EN	=	0x00ef
                           0000E8  1118 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1119 _AD2WINT	=	0x00e8
                           0000E9  1120 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1121 _AD2CM0	=	0x00e9
                           0000EA  1122 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1123 _AD2CM1	=	0x00ea
                           0000EB  1124 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1125 _AD2CM2	=	0x00eb
                           0000EC  1126 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1127 _AD2BUSY	=	0x00ec
                           0000ED  1128 G$AD2INT$0$0 == 0x00ed
                           0000ED  1129 _AD2INT	=	0x00ed
                           0000EE  1130 G$AD2TM$0$0 == 0x00ee
                           0000EE  1131 _AD2TM	=	0x00ee
                           0000EF  1132 G$AD2EN$0$0 == 0x00ef
                           0000EF  1133 _AD2EN	=	0x00ef
                           0000E8  1134 G$P6_0$0$0 == 0x00e8
                           0000E8  1135 _P6_0	=	0x00e8
                           0000E9  1136 G$P6_1$0$0 == 0x00e9
                           0000E9  1137 _P6_1	=	0x00e9
                           0000EA  1138 G$P6_2$0$0 == 0x00ea
                           0000EA  1139 _P6_2	=	0x00ea
                           0000EB  1140 G$P6_3$0$0 == 0x00eb
                           0000EB  1141 _P6_3	=	0x00eb
                           0000EC  1142 G$P6_4$0$0 == 0x00ec
                           0000EC  1143 _P6_4	=	0x00ec
                           0000ED  1144 G$P6_5$0$0 == 0x00ed
                           0000ED  1145 _P6_5	=	0x00ed
                           0000EE  1146 G$P6_6$0$0 == 0x00ee
                           0000EE  1147 _P6_6	=	0x00ee
                           0000EF  1148 G$P6_7$0$0 == 0x00ef
                           0000EF  1149 _P6_7	=	0x00ef
                           0000F8  1150 G$SPIEN$0$0 == 0x00f8
                           0000F8  1151 _SPIEN	=	0x00f8
                           0000F9  1152 G$TXBMT$0$0 == 0x00f9
                           0000F9  1153 _TXBMT	=	0x00f9
                           0000FA  1154 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1155 _NSSMD0	=	0x00fa
                           0000FB  1156 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1157 _NSSMD1	=	0x00fb
                           0000FC  1158 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1159 _RXOVRN	=	0x00fc
                           0000FD  1160 G$MODF$0$0 == 0x00fd
                           0000FD  1161 _MODF	=	0x00fd
                           0000FE  1162 G$WCOL$0$0 == 0x00fe
                           0000FE  1163 _WCOL	=	0x00fe
                           0000FF  1164 G$SPIF$0$0 == 0x00ff
                           0000FF  1165 _SPIF	=	0x00ff
                           0000F8  1166 G$P7_0$0$0 == 0x00f8
                           0000F8  1167 _P7_0	=	0x00f8
                           0000F9  1168 G$P7_1$0$0 == 0x00f9
                           0000F9  1169 _P7_1	=	0x00f9
                           0000FA  1170 G$P7_2$0$0 == 0x00fa
                           0000FA  1171 _P7_2	=	0x00fa
                           0000FB  1172 G$P7_3$0$0 == 0x00fb
                           0000FB  1173 _P7_3	=	0x00fb
                           0000FC  1174 G$P7_4$0$0 == 0x00fc
                           0000FC  1175 _P7_4	=	0x00fc
                           0000FD  1176 G$P7_5$0$0 == 0x00fd
                           0000FD  1177 _P7_5	=	0x00fd
                           0000FE  1178 G$P7_6$0$0 == 0x00fe
                           0000FE  1179 _P7_6	=	0x00fe
                           0000FF  1180 G$P7_7$0$0 == 0x00ff
                           0000FF  1181 _P7_7	=	0x00ff
                                   1182 ;--------------------------------------------------------
                                   1183 ; overlayable register banks
                                   1184 ;--------------------------------------------------------
                                   1185 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1186 	.ds 8
                                   1187 ;--------------------------------------------------------
                                   1188 ; internal ram data
                                   1189 ;--------------------------------------------------------
                                   1190 	.area DSEG    (DATA)
                           000000  1191 G$time$0$0==.
      000008                       1192 _time::
      000008                       1193 	.ds 2
                           000002  1194 G$tenth$0$0==.
      00000A                       1195 _tenth::
      00000A                       1196 	.ds 2
                                   1197 ;--------------------------------------------------------
                                   1198 ; overlayable items in internal ram 
                                   1199 ;--------------------------------------------------------
                                   1200 	.area	OSEG    (OVR,DATA)
                                   1201 	.area	OSEG    (OVR,DATA)
                                   1202 	.area	OSEG    (OVR,DATA)
                                   1203 	.area	OSEG    (OVR,DATA)
                                   1204 	.area	OSEG    (OVR,DATA)
                                   1205 ;--------------------------------------------------------
                                   1206 ; Stack segment in internal ram 
                                   1207 ;--------------------------------------------------------
                                   1208 	.area	SSEG
      00003C                       1209 __start__stack:
      00003C                       1210 	.ds	1
                                   1211 
                                   1212 ;--------------------------------------------------------
                                   1213 ; indirectly addressable internal ram data
                                   1214 ;--------------------------------------------------------
                                   1215 	.area ISEG    (DATA)
                                   1216 ;--------------------------------------------------------
                                   1217 ; absolute internal ram data
                                   1218 ;--------------------------------------------------------
                                   1219 	.area IABS    (ABS,DATA)
                                   1220 	.area IABS    (ABS,DATA)
                                   1221 ;--------------------------------------------------------
                                   1222 ; bit data
                                   1223 ;--------------------------------------------------------
                                   1224 	.area BSEG    (BIT)
                           000000  1225 G$PRINTED$0$0==.
      000000                       1226 _PRINTED::
      000000                       1227 	.ds 1
                                   1228 ;--------------------------------------------------------
                                   1229 ; paged external ram data
                                   1230 ;--------------------------------------------------------
                                   1231 	.area PSEG    (PAG,XDATA)
                                   1232 ;--------------------------------------------------------
                                   1233 ; external ram data
                                   1234 ;--------------------------------------------------------
                                   1235 	.area XSEG    (XDATA)
                                   1236 ;--------------------------------------------------------
                                   1237 ; absolute external ram data
                                   1238 ;--------------------------------------------------------
                                   1239 	.area XABS    (ABS,XDATA)
                                   1240 ;--------------------------------------------------------
                                   1241 ; external initialized ram data
                                   1242 ;--------------------------------------------------------
                                   1243 	.area XISEG   (XDATA)
                                   1244 	.area HOME    (CODE)
                                   1245 	.area GSINIT0 (CODE)
                                   1246 	.area GSINIT1 (CODE)
                                   1247 	.area GSINIT2 (CODE)
                                   1248 	.area GSINIT3 (CODE)
                                   1249 	.area GSINIT4 (CODE)
                                   1250 	.area GSINIT5 (CODE)
                                   1251 	.area GSINIT  (CODE)
                                   1252 	.area GSFINAL (CODE)
                                   1253 	.area CSEG    (CODE)
                                   1254 ;--------------------------------------------------------
                                   1255 ; interrupt vector 
                                   1256 ;--------------------------------------------------------
                                   1257 	.area HOME    (CODE)
      000000                       1258 __interrupt_vect:
      000000 02 00 11         [24] 1259 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1260 	reti
      000004                       1261 	.ds	7
      00000B 02 01 25         [24] 1262 	ljmp	_Timer0_ISR
                                   1263 ;--------------------------------------------------------
                                   1264 ; global & static initialisations
                                   1265 ;--------------------------------------------------------
                                   1266 	.area HOME    (CODE)
                                   1267 	.area GSINIT  (CODE)
                                   1268 	.area GSFINAL (CODE)
                                   1269 	.area GSINIT  (CODE)
                                   1270 	.globl __sdcc_gsinit_startup
                                   1271 	.globl __sdcc_program_startup
                                   1272 	.globl __start__stack
                                   1273 	.globl __mcs51_genXINIT
                                   1274 	.globl __mcs51_genXRAMCLEAR
                                   1275 	.globl __mcs51_genRAMCLEAR
                           000000  1276 	C$given.c$34$1$36 ==.
                                   1277 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:34: int time = 0; // increments every tenth of a second to keep track of elasped time
      00006A E4               [12] 1278 	clr	a
      00006B F5 08            [12] 1279 	mov	_time,a
      00006D F5 09            [12] 1280 	mov	(_time + 1),a
                           000005  1281 	C$given.c$35$1$36 ==.
                                   1282 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:35: int tenth = 0; // increments at overflow (.001 seconds)
      00006F F5 0A            [12] 1283 	mov	_tenth,a
      000071 F5 0B            [12] 1284 	mov	(_tenth + 1),a
                           000009  1285 	C$given.c$36$1$36 ==.
                                   1286 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:36: __bit PRINTED = 0;
      000073 C2 00            [12] 1287 	clr	_PRINTED
                                   1288 	.area GSFINAL (CODE)
      000075 02 00 0E         [24] 1289 	ljmp	__sdcc_program_startup
                                   1290 ;--------------------------------------------------------
                                   1291 ; Home
                                   1292 ;--------------------------------------------------------
                                   1293 	.area HOME    (CODE)
                                   1294 	.area HOME    (CODE)
      00000E                       1295 __sdcc_program_startup:
      00000E 02 00 8D         [24] 1296 	ljmp	_main
                                   1297 ;	return from main will return to caller
                                   1298 ;--------------------------------------------------------
                                   1299 ; code
                                   1300 ;--------------------------------------------------------
                                   1301 	.area CSEG    (CODE)
                                   1302 ;------------------------------------------------------------
                                   1303 ;Allocation info for local variables in function 'putchar'
                                   1304 ;------------------------------------------------------------
                                   1305 ;c                         Allocated to registers r7 
                                   1306 ;------------------------------------------------------------
                           000000  1307 	G$putchar$0$0 ==.
                           000000  1308 	C$putget.h$18$0$0 ==.
                                   1309 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:18: void putchar(char c)
                                   1310 ;	-----------------------------------------
                                   1311 ;	 function putchar
                                   1312 ;	-----------------------------------------
      000078                       1313 _putchar:
                           000007  1314 	ar7 = 0x07
                           000006  1315 	ar6 = 0x06
                           000005  1316 	ar5 = 0x05
                           000004  1317 	ar4 = 0x04
                           000003  1318 	ar3 = 0x03
                           000002  1319 	ar2 = 0x02
                           000001  1320 	ar1 = 0x01
                           000000  1321 	ar0 = 0x00
      000078 AF 82            [24] 1322 	mov	r7,dpl
                           000002  1323 	C$putget.h$20$1$16 ==.
                                   1324 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:20: while(!TI0); 
      00007A                       1325 00101$:
                           000002  1326 	C$putget.h$21$1$16 ==.
                                   1327 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:21: TI0=0;
      00007A 10 99 02         [24] 1328 	jbc	_TI0,00112$
      00007D 80 FB            [24] 1329 	sjmp	00101$
      00007F                       1330 00112$:
                           000007  1331 	C$putget.h$22$1$16 ==.
                                   1332 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:22: SBUF0 = c;
      00007F 8F 99            [24] 1333 	mov	_SBUF0,r7
                           000009  1334 	C$putget.h$23$1$16 ==.
                           000009  1335 	XG$putchar$0$0 ==.
      000081 22               [24] 1336 	ret
                                   1337 ;------------------------------------------------------------
                                   1338 ;Allocation info for local variables in function 'getchar'
                                   1339 ;------------------------------------------------------------
                                   1340 ;c                         Allocated to registers 
                                   1341 ;------------------------------------------------------------
                           00000A  1342 	G$getchar$0$0 ==.
                           00000A  1343 	C$putget.h$28$1$16 ==.
                                   1344 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:28: char getchar(void)
                                   1345 ;	-----------------------------------------
                                   1346 ;	 function getchar
                                   1347 ;	-----------------------------------------
      000082                       1348 _getchar:
                           00000A  1349 	C$putget.h$31$1$18 ==.
                                   1350 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:31: while(!RI0);
      000082                       1351 00101$:
                           00000A  1352 	C$putget.h$32$1$18 ==.
                                   1353 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:32: RI0 =0;
      000082 10 98 02         [24] 1354 	jbc	_RI0,00112$
      000085 80 FB            [24] 1355 	sjmp	00101$
      000087                       1356 00112$:
                           00000F  1357 	C$putget.h$33$1$18 ==.
                                   1358 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:33: c = SBUF0;
      000087 E5 99            [12] 1359 	mov	a,_SBUF0
                           000011  1360 	C$putget.h$36$1$18 ==.
                                   1361 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\/putget.h:36: return SBUF0;
      000089 85 99 82         [24] 1362 	mov	dpl,_SBUF0
                           000014  1363 	C$putget.h$37$1$18 ==.
                           000014  1364 	XG$getchar$0$0 ==.
      00008C 22               [24] 1365 	ret
                                   1366 ;------------------------------------------------------------
                                   1367 ;Allocation info for local variables in function 'main'
                                   1368 ;------------------------------------------------------------
                           000015  1369 	G$main$0$0 ==.
                           000015  1370 	C$given.c$48$1$18 ==.
                                   1371 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:48: void main (void)
                                   1372 ;	-----------------------------------------
                                   1373 ;	 function main
                                   1374 ;	-----------------------------------------
      00008D                       1375 _main:
                           000015  1376 	C$given.c$51$1$25 ==.
                                   1377 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:51: SFRPAGE = CONFIG_PAGE;
      00008D 75 84 0F         [24] 1378 	mov	_SFRPAGE,#0x0F
                           000018  1379 	C$given.c$52$1$25 ==.
                                   1380 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:52: IE |=0x02;//enables interrupt 1
      000090 43 A8 02         [24] 1381 	orl	_IE,#0x02
                           00001B  1382 	C$given.c$53$1$25 ==.
                                   1383 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:53: PORT_INIT();                // Configure the Crossbar and GPIO.
      000093 12 01 3E         [24] 1384 	lcall	_PORT_INIT
                           00001E  1385 	C$given.c$54$1$25 ==.
                                   1386 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:54: SYSCLK_INIT();              // Initialize the oscillator.
      000096 12 01 5D         [24] 1387 	lcall	_SYSCLK_INIT
                           000021  1388 	C$given.c$55$1$25 ==.
                                   1389 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:55: UART0_INIT();               // Initialize UART0.
      000099 12 01 B3         [24] 1390 	lcall	_UART0_INIT
                           000024  1391 	C$given.c$57$1$25 ==.
                                   1392 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:57: SFRPAGE = LEGACY_PAGE;
      00009C 75 84 00         [24] 1393 	mov	_SFRPAGE,#0x00
                           000027  1394 	C$given.c$58$1$25 ==.
                                   1395 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:58: IT0     = 1;                // /INT0 is edge triggered, falling-edge.
      00009F D2 88            [12] 1396 	setb	_IT0
                           000029  1397 	C$given.c$60$1$25 ==.
                                   1398 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:60: SFRPAGE = UART0_PAGE;       // Direct the output to UART0
      0000A1 75 84 00         [24] 1399 	mov	_SFRPAGE,#0x00
                           00002C  1400 	C$given.c$62$1$25 ==.
                                   1401 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:62: printf("\033[2J");          // Erase screen and move cursor to the home position.
      0000A4 74 9B            [12] 1402 	mov	a,#___str_0
      0000A6 C0 E0            [24] 1403 	push	acc
      0000A8 74 08            [12] 1404 	mov	a,#(___str_0 >> 8)
      0000AA C0 E0            [24] 1405 	push	acc
      0000AC 74 80            [12] 1406 	mov	a,#0x80
      0000AE C0 E0            [24] 1407 	push	acc
      0000B0 12 02 51         [24] 1408 	lcall	_printf
      0000B3 15 81            [12] 1409 	dec	sp
      0000B5 15 81            [12] 1410 	dec	sp
      0000B7 15 81            [12] 1411 	dec	sp
                           000041  1412 	C$given.c$63$1$25 ==.
                                   1413 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:63: printf("MPS Interrupt Switch Test\n\n\r");
      0000B9 74 A0            [12] 1414 	mov	a,#___str_1
      0000BB C0 E0            [24] 1415 	push	acc
      0000BD 74 08            [12] 1416 	mov	a,#(___str_1 >> 8)
      0000BF C0 E0            [24] 1417 	push	acc
      0000C1 74 80            [12] 1418 	mov	a,#0x80
      0000C3 C0 E0            [24] 1419 	push	acc
      0000C5 12 02 51         [24] 1420 	lcall	_printf
      0000C8 15 81            [12] 1421 	dec	sp
      0000CA 15 81            [12] 1422 	dec	sp
      0000CC 15 81            [12] 1423 	dec	sp
                           000056  1424 	C$given.c$66$1$25 ==.
                                   1425 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:66: SFRPAGE = LEGACY_PAGE;
      0000CE 75 84 00         [24] 1426 	mov	_SFRPAGE,#0x00
                           000059  1427 	C$given.c$67$1$25 ==.
                                   1428 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:67: while (1)                   // No need to set UART0_PAGE
      0000D1                       1429 00107$:
                           000059  1430 	C$given.c$70$2$26 ==.
                                   1431 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:70: if (tenth == 76)
      0000D1 74 4C            [12] 1432 	mov	a,#0x4C
      0000D3 B5 0A 06         [24] 1433 	cjne	a,_tenth,00123$
      0000D6 E4               [12] 1434 	clr	a
      0000D7 B5 0B 02         [24] 1435 	cjne	a,(_tenth + 1),00123$
      0000DA 80 02            [24] 1436 	sjmp	00124$
      0000DC                       1437 00123$:
      0000DC 80 0E            [24] 1438 	sjmp	00102$
      0000DE                       1439 00124$:
                           000066  1440 	C$given.c$73$3$27 ==.
                                   1441 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:73: tenth =0;
      0000DE E4               [12] 1442 	clr	a
      0000DF F5 0A            [12] 1443 	mov	_tenth,a
      0000E1 F5 0B            [12] 1444 	mov	(_tenth + 1),a
                           00006B  1445 	C$given.c$74$3$27 ==.
                                   1446 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:74: time = time+1;
      0000E3 05 08            [12] 1447 	inc	_time
                                   1448 ;	genFromRTrack removed	clr	a
      0000E5 B5 08 02         [24] 1449 	cjne	a,_time,00125$
      0000E8 05 09            [12] 1450 	inc	(_time + 1)
      0000EA                       1451 00125$:
                           000072  1452 	C$given.c$75$3$27 ==.
                                   1453 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:75: PRINTED = 0;
      0000EA C2 00            [12] 1454 	clr	_PRINTED
      0000EC                       1455 00102$:
                           000074  1456 	C$given.c$77$1$25 ==.
                                   1457 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:77: if (time%10==0&& PRINTED==0){printf("%d tenths of a second have passed \n\r",time);PRINTED =1;}
      0000EC 75 0E 0A         [24] 1458 	mov	__modsint_PARM_2,#0x0A
      0000EF 75 0F 00         [24] 1459 	mov	(__modsint_PARM_2 + 1),#0x00
      0000F2 85 08 82         [24] 1460 	mov	dpl,_time
      0000F5 85 09 83         [24] 1461 	mov	dph,(_time + 1)
      0000F8 12 08 61         [24] 1462 	lcall	__modsint
      0000FB E5 82            [12] 1463 	mov	a,dpl
      0000FD 85 83 F0         [24] 1464 	mov	b,dph
      000100 45 F0            [12] 1465 	orl	a,b
      000102 70 CD            [24] 1466 	jnz	00107$
      000104 20 00 CA         [24] 1467 	jb	_PRINTED,00107$
      000107 C0 08            [24] 1468 	push	_time
      000109 C0 09            [24] 1469 	push	(_time + 1)
      00010B 74 BD            [12] 1470 	mov	a,#___str_2
      00010D C0 E0            [24] 1471 	push	acc
      00010F 74 08            [12] 1472 	mov	a,#(___str_2 >> 8)
      000111 C0 E0            [24] 1473 	push	acc
      000113 74 80            [12] 1474 	mov	a,#0x80
      000115 C0 E0            [24] 1475 	push	acc
      000117 12 02 51         [24] 1476 	lcall	_printf
      00011A E5 81            [12] 1477 	mov	a,sp
      00011C 24 FB            [12] 1478 	add	a,#0xfb
      00011E F5 81            [12] 1479 	mov	sp,a
      000120 D2 00            [12] 1480 	setb	_PRINTED
      000122 80 AD            [24] 1481 	sjmp	00107$
                           0000AC  1482 	C$given.c$79$1$25 ==.
                           0000AC  1483 	XG$main$0$0 ==.
      000124 22               [24] 1484 	ret
                                   1485 ;------------------------------------------------------------
                                   1486 ;Allocation info for local variables in function 'Timer0_ISR'
                                   1487 ;------------------------------------------------------------
                           0000AD  1488 	G$Timer0_ISR$0$0 ==.
                           0000AD  1489 	C$given.c$88$1$25 ==.
                                   1490 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:88: void Timer0_ISR(void) __interrupt 1
                                   1491 ;	-----------------------------------------
                                   1492 ;	 function Timer0_ISR
                                   1493 ;	-----------------------------------------
      000125                       1494 _Timer0_ISR:
      000125 C0 E0            [24] 1495 	push	acc
      000127 C0 D0            [24] 1496 	push	psw
                           0000B1  1497 	C$given.c$91$1$30 ==.
                                   1498 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:91: tenth = tenth+1;
      000129 05 0A            [12] 1499 	inc	_tenth
      00012B E4               [12] 1500 	clr	a
      00012C B5 0A 02         [24] 1501 	cjne	a,_tenth,00103$
      00012F 05 0B            [12] 1502 	inc	(_tenth + 1)
      000131                       1503 00103$:
                           0000B9  1504 	C$given.c$93$1$30 ==.
                                   1505 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:93: TL0=0;
      000131 75 8A 00         [24] 1506 	mov	_TL0,#0x00
                           0000BC  1507 	C$given.c$94$1$30 ==.
                                   1508 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:94: TH0=0;
      000134 75 8C 00         [24] 1509 	mov	_TH0,#0x00
                           0000BF  1510 	C$given.c$95$1$30 ==.
                                   1511 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:95: TF0 = 0; //reset the flag
      000137 C2 8D            [12] 1512 	clr	_TF0
      000139 D0 D0            [24] 1513 	pop	psw
      00013B D0 E0            [24] 1514 	pop	acc
                           0000C5  1515 	C$given.c$96$1$30 ==.
                           0000C5  1516 	XG$Timer0_ISR$0$0 ==.
      00013D 32               [24] 1517 	reti
                                   1518 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1519 ;	eliminated unneeded push/pop dpl
                                   1520 ;	eliminated unneeded push/pop dph
                                   1521 ;	eliminated unneeded push/pop b
                                   1522 ;------------------------------------------------------------
                                   1523 ;Allocation info for local variables in function 'PORT_INIT'
                                   1524 ;------------------------------------------------------------
                                   1525 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1526 ;------------------------------------------------------------
                           0000C6  1527 	G$PORT_INIT$0$0 ==.
                           0000C6  1528 	C$given.c$104$1$30 ==.
                                   1529 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:104: void PORT_INIT(void)
                                   1530 ;	-----------------------------------------
                                   1531 ;	 function PORT_INIT
                                   1532 ;	-----------------------------------------
      00013E                       1533 _PORT_INIT:
                           0000C6  1534 	C$given.c$108$1$32 ==.
                                   1535 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:108: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.
      00013E AF 84            [24] 1536 	mov	r7,_SFRPAGE
                           0000C8  1537 	C$given.c$110$1$32 ==.
                                   1538 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:110: SFRPAGE = CONFIG_PAGE;
      000140 75 84 0F         [24] 1539 	mov	_SFRPAGE,#0x0F
                           0000CB  1540 	C$given.c$111$1$32 ==.
                                   1541 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:111: WDTCN   = 0xDE;             // Disable watchdog timer.
      000143 75 FF DE         [24] 1542 	mov	_WDTCN,#0xDE
                           0000CE  1543 	C$given.c$112$1$32 ==.
                                   1544 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:112: WDTCN   = 0xAD;
      000146 75 FF AD         [24] 1545 	mov	_WDTCN,#0xAD
                           0000D1  1546 	C$given.c$113$1$32 ==.
                                   1547 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:113: EA      = 1;                // Enable interrupts as selected.
      000149 D2 AF            [12] 1548 	setb	_EA
                           0000D3  1549 	C$given.c$115$1$32 ==.
                                   1550 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:115: XBR0    = 0x04;             // Enable UART0.
      00014B 75 E1 04         [24] 1551 	mov	_XBR0,#0x04
                           0000D6  1552 	C$given.c$116$1$32 ==.
                                   1553 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:116: XBR1    = 0x00;             // /INT0 routed to port pin.
      00014E 75 E2 00         [24] 1554 	mov	_XBR1,#0x00
                           0000D9  1555 	C$given.c$117$1$32 ==.
                                   1556 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:117: XBR2    = 0x40;             // Enable Crossbar and weak pull-ups.
      000151 75 E3 40         [24] 1557 	mov	_XBR2,#0x40
                           0000DC  1558 	C$given.c$119$1$32 ==.
                                   1559 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:119: P0MDOUT = 0x01;             // P0.0 (TX0) is configured as Push-Pull for output.
      000154 75 A4 01         [24] 1560 	mov	_P0MDOUT,#0x01
                           0000DF  1561 	C$given.c$122$1$32 ==.
                                   1562 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:122: P0      = 0x06;             // Additionally, set P0.0=0, P0.1=1, and P0.2=1.
      000157 75 80 06         [24] 1563 	mov	_P0,#0x06
                           0000E2  1564 	C$given.c$124$1$32 ==.
                                   1565 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:124: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
      00015A 8F 84            [24] 1566 	mov	_SFRPAGE,r7
                           0000E4  1567 	C$given.c$125$1$32 ==.
                           0000E4  1568 	XG$PORT_INIT$0$0 ==.
      00015C 22               [24] 1569 	ret
                                   1570 ;------------------------------------------------------------
                                   1571 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1572 ;------------------------------------------------------------
                                   1573 ;i                         Allocated to registers r5 r6 
                                   1574 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1575 ;------------------------------------------------------------
                           0000E5  1576 	G$SYSCLK_INIT$0$0 ==.
                           0000E5  1577 	C$given.c$133$1$32 ==.
                                   1578 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:133: void SYSCLK_INIT(void)
                                   1579 ;	-----------------------------------------
                                   1580 ;	 function SYSCLK_INIT
                                   1581 ;	-----------------------------------------
      00015D                       1582 _SYSCLK_INIT:
                           0000E5  1583 	C$given.c$139$1$34 ==.
                                   1584 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:139: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.
      00015D AF 84            [24] 1585 	mov	r7,_SFRPAGE
                           0000E7  1586 	C$given.c$141$1$34 ==.
                                   1587 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:141: SFRPAGE = CONFIG_PAGE;
      00015F 75 84 0F         [24] 1588 	mov	_SFRPAGE,#0x0F
                           0000EA  1589 	C$given.c$142$1$34 ==.
                                   1590 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:142: OSCXCN  = 0x67;             // Start external oscillator
      000162 75 8C 67         [24] 1591 	mov	_OSCXCN,#0x67
                           0000ED  1592 	C$given.c$143$1$34 ==.
                                   1593 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:143: for(i=0; i < 256; i++);     // Wait for the oscillator to start up.
      000165 7D 00            [12] 1594 	mov	r5,#0x00
      000167 7E 01            [12] 1595 	mov	r6,#0x01
      000169                       1596 00111$:
      000169 1D               [12] 1597 	dec	r5
      00016A BD FF 01         [24] 1598 	cjne	r5,#0xFF,00141$
      00016D 1E               [12] 1599 	dec	r6
      00016E                       1600 00141$:
      00016E ED               [12] 1601 	mov	a,r5
      00016F 4E               [12] 1602 	orl	a,r6
      000170 70 F7            [24] 1603 	jnz	00111$
                           0000FA  1604 	C$given.c$144$1$34 ==.
                                   1605 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:144: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      000172                       1606 00102$:
      000172 E5 8C            [12] 1607 	mov	a,_OSCXCN
      000174 30 E7 FB         [24] 1608 	jnb	acc.7,00102$
                           0000FF  1609 	C$given.c$145$1$34 ==.
                                   1610 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:145: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      000177 75 97 01         [24] 1611 	mov	_CLKSEL,#0x01
                           000102  1612 	C$given.c$146$1$34 ==.
                                   1613 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:146: OSCICN  = 0x00;             // Disable the internal oscillator.
      00017A 75 8A 00         [24] 1614 	mov	_OSCICN,#0x00
                           000105  1615 	C$given.c$148$1$34 ==.
                                   1616 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:148: SFRPAGE = CONFIG_PAGE;
      00017D 75 84 0F         [24] 1617 	mov	_SFRPAGE,#0x0F
                           000108  1618 	C$given.c$149$1$34 ==.
                                   1619 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:149: PLL0CN  = 0x04;
      000180 75 89 04         [24] 1620 	mov	_PLL0CN,#0x04
                           00010B  1621 	C$given.c$150$1$34 ==.
                                   1622 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:150: SFRPAGE = LEGACY_PAGE;
      000183 75 84 00         [24] 1623 	mov	_SFRPAGE,#0x00
                           00010E  1624 	C$given.c$151$1$34 ==.
                                   1625 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:151: FLSCL   = 0x10;
      000186 75 B7 10         [24] 1626 	mov	_FLSCL,#0x10
                           000111  1627 	C$given.c$152$1$34 ==.
                                   1628 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:152: SFRPAGE = CONFIG_PAGE;
      000189 75 84 0F         [24] 1629 	mov	_SFRPAGE,#0x0F
                           000114  1630 	C$given.c$153$1$34 ==.
                                   1631 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:153: PLL0CN |= 0x01;
      00018C 43 89 01         [24] 1632 	orl	_PLL0CN,#0x01
                           000117  1633 	C$given.c$154$1$34 ==.
                                   1634 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:154: PLL0DIV = 0x04;
      00018F 75 8D 04         [24] 1635 	mov	_PLL0DIV,#0x04
                           00011A  1636 	C$given.c$155$1$34 ==.
                                   1637 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:155: PLL0FLT = 0x01;
      000192 75 8F 01         [24] 1638 	mov	_PLL0FLT,#0x01
                           00011D  1639 	C$given.c$156$1$34 ==.
                                   1640 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:156: PLL0MUL = 0x09;
      000195 75 8E 09         [24] 1641 	mov	_PLL0MUL,#0x09
                           000120  1642 	C$given.c$157$1$34 ==.
                                   1643 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:157: for(i=0; i < 256; i++);
      000198 7D 00            [12] 1644 	mov	r5,#0x00
      00019A 7E 01            [12] 1645 	mov	r6,#0x01
      00019C                       1646 00114$:
      00019C 1D               [12] 1647 	dec	r5
      00019D BD FF 01         [24] 1648 	cjne	r5,#0xFF,00144$
      0001A0 1E               [12] 1649 	dec	r6
      0001A1                       1650 00144$:
      0001A1 ED               [12] 1651 	mov	a,r5
      0001A2 4E               [12] 1652 	orl	a,r6
      0001A3 70 F7            [24] 1653 	jnz	00114$
                           00012D  1654 	C$given.c$158$1$34 ==.
                                   1655 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:158: PLL0CN |= 0x02;
      0001A5 43 89 02         [24] 1656 	orl	_PLL0CN,#0x02
                           000130  1657 	C$given.c$159$1$34 ==.
                                   1658 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:159: while(!(PLL0CN & 0x10));
      0001A8                       1659 00106$:
      0001A8 E5 89            [12] 1660 	mov	a,_PLL0CN
      0001AA 30 E4 FB         [24] 1661 	jnb	acc.4,00106$
                           000135  1662 	C$given.c$160$1$34 ==.
                                   1663 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:160: CLKSEL  = 0x02;             // SYSCLK derived from the PLL.
      0001AD 75 97 02         [24] 1664 	mov	_CLKSEL,#0x02
                           000138  1665 	C$given.c$162$1$34 ==.
                                   1666 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:162: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
      0001B0 8F 84            [24] 1667 	mov	_SFRPAGE,r7
                           00013A  1668 	C$given.c$166$1$34 ==.
                           00013A  1669 	XG$SYSCLK_INIT$0$0 ==.
      0001B2 22               [24] 1670 	ret
                                   1671 ;------------------------------------------------------------
                                   1672 ;Allocation info for local variables in function 'UART0_INIT'
                                   1673 ;------------------------------------------------------------
                                   1674 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1675 ;------------------------------------------------------------
                           00013B  1676 	G$UART0_INIT$0$0 ==.
                           00013B  1677 	C$given.c$173$1$34 ==.
                                   1678 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:173: void UART0_INIT(void)
                                   1679 ;	-----------------------------------------
                                   1680 ;	 function UART0_INIT
                                   1681 ;	-----------------------------------------
      0001B3                       1682 _UART0_INIT:
                           00013B  1683 	C$given.c$177$1$36 ==.
                                   1684 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:177: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page.
      0001B3 AF 84            [24] 1685 	mov	r7,_SFRPAGE
                           00013D  1686 	C$given.c$179$1$36 ==.
                                   1687 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:179: SFRPAGE = TIMER01_PAGE;
      0001B5 75 84 00         [24] 1688 	mov	_SFRPAGE,#0x00
                           000140  1689 	C$given.c$180$1$36 ==.
                                   1690 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:180: TMOD   &= ~0xF0;
      0001B8 AE 89            [24] 1691 	mov	r6,_TMOD
      0001BA 74 0F            [12] 1692 	mov	a,#0x0F
      0001BC 5E               [12] 1693 	anl	a,r6
      0001BD F5 89            [12] 1694 	mov	_TMOD,a
                           000147  1695 	C$given.c$181$1$36 ==.
                                   1696 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:181: TMOD   |=  0x21;            // Timer1, Mode 2: 8-bit counter/timer with auto-reload.
      0001BF 43 89 21         [24] 1697 	orl	_TMOD,#0x21
                           00014A  1698 	C$given.c$182$1$36 ==.
                                   1699 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:182: TH1     = (unsigned char)-(SYSCLK/BAUDRATE/16); // Set Timer1 reload value for baudrate
      0001C2 75 8D E5         [24] 1700 	mov	_TH1,#0xE5
                           00014D  1701 	C$given.c$183$1$36 ==.
                                   1702 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:183: CKCON  |= 0x18;             // Timer1 uses SYSCLK as time base.
      0001C5 43 8E 18         [24] 1703 	orl	_CKCON,#0x18
                           000150  1704 	C$given.c$184$1$36 ==.
                                   1705 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:184: TL1     = TH1;
      0001C8 85 8D 8B         [24] 1706 	mov	_TL1,_TH1
                           000153  1707 	C$given.c$185$1$36 ==.
                                   1708 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:185: TR1     = 1;                // Start Timer1.
      0001CB D2 8E            [12] 1709 	setb	_TR1
                           000155  1710 	C$given.c$186$1$36 ==.
                                   1711 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:186: TL0 = TH0;
      0001CD 85 8C 8A         [24] 1712 	mov	_TL0,_TH0
                           000158  1713 	C$given.c$187$1$36 ==.
                                   1714 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:187: TR0 = 1;
      0001D0 D2 8C            [12] 1715 	setb	_TR0
                           00015A  1716 	C$given.c$188$1$36 ==.
                                   1717 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:188: SFRPAGE = UART0_PAGE;
      0001D2 75 84 00         [24] 1718 	mov	_SFRPAGE,#0x00
                           00015D  1719 	C$given.c$189$1$36 ==.
                                   1720 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:189: SCON0   = 0x50;             // Set Mode 1: 8-Bit UART
      0001D5 75 98 50         [24] 1721 	mov	_SCON0,#0x50
                           000160  1722 	C$given.c$190$1$36 ==.
                                   1723 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:190: SSTA0   = 0x10;             // UART0 baud rate divide-by-two disabled (SMOD0 = 1).
      0001D8 75 91 10         [24] 1724 	mov	_SSTA0,#0x10
                           000163  1725 	C$given.c$191$1$36 ==.
                                   1726 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:191: TI0     = 1;                // Indicate TX0 ready.
      0001DB D2 99            [12] 1727 	setb	_TI0
                           000165  1728 	C$given.c$193$1$36 ==.
                                   1729 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_02\2.2-Silly Time\given.c:193: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page.
      0001DD 8F 84            [24] 1730 	mov	_SFRPAGE,r7
                           000167  1731 	C$given.c$194$1$36 ==.
                           000167  1732 	XG$UART0_INIT$0$0 ==.
      0001DF 22               [24] 1733 	ret
                                   1734 	.area CSEG    (CODE)
                                   1735 	.area CONST   (CODE)
                           000000  1736 Fgiven$__str_0$0$0 == .
      00089B                       1737 ___str_0:
      00089B 1B                    1738 	.db 0x1B
      00089C 5B 32 4A              1739 	.ascii "[2J"
      00089F 00                    1740 	.db 0x00
                           000005  1741 Fgiven$__str_1$0$0 == .
      0008A0                       1742 ___str_1:
      0008A0 4D 50 53 20 49 6E 74  1743 	.ascii "MPS Interrupt Switch Test"
             65 72 72 75 70 74 20
             53 77 69 74 63 68 20
             54 65 73 74
      0008B9 0A                    1744 	.db 0x0A
      0008BA 0A                    1745 	.db 0x0A
      0008BB 0D                    1746 	.db 0x0D
      0008BC 00                    1747 	.db 0x00
                           000022  1748 Fgiven$__str_2$0$0 == .
      0008BD                       1749 ___str_2:
      0008BD 25 64 20 74 65 6E 74  1750 	.ascii "%d tenths of a second have passed "
             68 73 20 6F 66 20 61
             20 73 65 63 6F 6E 64
             20 68 61 76 65 20 70
             61 73 73 65 64 20
      0008DF 0A                    1751 	.db 0x0A
      0008E0 0D                    1752 	.db 0x0D
      0008E1 00                    1753 	.db 0x00
                                   1754 	.area XINIT   (CODE)
                                   1755 	.area CABS    (ABS,CODE)
