                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Nov 07 18:49:21 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module memory
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
                                    396 	.globl _putchar
                                    397 	.globl _getchar
                                    398 	.globl __sdcc_external_startup
                                    399 	.globl _main
                                    400 	.globl _SYSCLK_INIT
                                    401 	.globl _PORT_INIT
                                    402 	.globl _UART0_INIT
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
                                   1195 	.area	OSEG    (OVR,DATA)
                                   1196 ;--------------------------------------------------------
                                   1197 ; Stack segment in internal ram 
                                   1198 ;--------------------------------------------------------
                                   1199 	.area	SSEG
      00003C                       1200 __start__stack:
      00003C                       1201 	.ds	1
                                   1202 
                                   1203 ;--------------------------------------------------------
                                   1204 ; indirectly addressable internal ram data
                                   1205 ;--------------------------------------------------------
                                   1206 	.area ISEG    (DATA)
                                   1207 ;--------------------------------------------------------
                                   1208 ; absolute internal ram data
                                   1209 ;--------------------------------------------------------
                                   1210 	.area IABS    (ABS,DATA)
                                   1211 	.area IABS    (ABS,DATA)
                                   1212 ;--------------------------------------------------------
                                   1213 ; bit data
                                   1214 ;--------------------------------------------------------
                                   1215 	.area BSEG    (BIT)
                                   1216 ;--------------------------------------------------------
                                   1217 ; paged external ram data
                                   1218 ;--------------------------------------------------------
                                   1219 	.area PSEG    (PAG,XDATA)
                                   1220 ;--------------------------------------------------------
                                   1221 ; external ram data
                                   1222 ;--------------------------------------------------------
                                   1223 	.area XSEG    (XDATA)
                           002002  1224 Lmemory.main$p$1$27 == 0x2002
                           002002  1225 _main_p_1_27	=	0x2002
                                   1226 ;--------------------------------------------------------
                                   1227 ; absolute external ram data
                                   1228 ;--------------------------------------------------------
                                   1229 	.area XABS    (ABS,XDATA)
                                   1230 ;--------------------------------------------------------
                                   1231 ; external initialized ram data
                                   1232 ;--------------------------------------------------------
                                   1233 	.area XISEG   (XDATA)
                                   1234 	.area HOME    (CODE)
                                   1235 	.area GSINIT0 (CODE)
                                   1236 	.area GSINIT1 (CODE)
                                   1237 	.area GSINIT2 (CODE)
                                   1238 	.area GSINIT3 (CODE)
                                   1239 	.area GSINIT4 (CODE)
                                   1240 	.area GSINIT5 (CODE)
                                   1241 	.area GSINIT  (CODE)
                                   1242 	.area GSFINAL (CODE)
                                   1243 	.area CSEG    (CODE)
                                   1244 ;--------------------------------------------------------
                                   1245 ; interrupt vector 
                                   1246 ;--------------------------------------------------------
                                   1247 	.area HOME    (CODE)
      000000                       1248 __interrupt_vect:
      000000 02 00 06         [24] 1249 	ljmp	__sdcc_gsinit_startup
                                   1250 ;--------------------------------------------------------
                                   1251 ; global & static initialisations
                                   1252 ;--------------------------------------------------------
                                   1253 	.area HOME    (CODE)
                                   1254 	.area GSINIT  (CODE)
                                   1255 	.area GSFINAL (CODE)
                                   1256 	.area GSINIT  (CODE)
                                   1257 	.globl __sdcc_gsinit_startup
                                   1258 	.globl __sdcc_program_startup
                                   1259 	.globl __start__stack
                                   1260 	.globl __mcs51_genXINIT
                                   1261 	.globl __mcs51_genXRAMCLEAR
                                   1262 	.globl __mcs51_genRAMCLEAR
                                   1263 	.area GSFINAL (CODE)
      00005F 02 00 03         [24] 1264 	ljmp	__sdcc_program_startup
                                   1265 ;--------------------------------------------------------
                                   1266 ; Home
                                   1267 ;--------------------------------------------------------
                                   1268 	.area HOME    (CODE)
                                   1269 	.area HOME    (CODE)
      000003                       1270 __sdcc_program_startup:
      000003 02 00 81         [24] 1271 	ljmp	_main
                                   1272 ;	return from main will return to caller
                                   1273 ;--------------------------------------------------------
                                   1274 ; code
                                   1275 ;--------------------------------------------------------
                                   1276 	.area CSEG    (CODE)
                                   1277 ;------------------------------------------------------------
                                   1278 ;Allocation info for local variables in function 'putchar'
                                   1279 ;------------------------------------------------------------
                                   1280 ;c                         Allocated to registers r7 
                                   1281 ;------------------------------------------------------------
                           000000  1282 	G$putchar$0$0 ==.
                           000000  1283 	C$putget.h$18$0$0 ==.
                                   1284 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:18: void putchar(char c)
                                   1285 ;	-----------------------------------------
                                   1286 ;	 function putchar
                                   1287 ;	-----------------------------------------
      000062                       1288 _putchar:
                           000007  1289 	ar7 = 0x07
                           000006  1290 	ar6 = 0x06
                           000005  1291 	ar5 = 0x05
                           000004  1292 	ar4 = 0x04
                           000003  1293 	ar3 = 0x03
                           000002  1294 	ar2 = 0x02
                           000001  1295 	ar1 = 0x01
                           000000  1296 	ar0 = 0x00
      000062 AF 82            [24] 1297 	mov	r7,dpl
                           000002  1298 	C$putget.h$20$1$16 ==.
                                   1299 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:20: while(!TI0); 
      000064                       1300 00101$:
                           000002  1301 	C$putget.h$21$1$16 ==.
                                   1302 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:21: TI0=0;
      000064 10 99 02         [24] 1303 	jbc	_TI0,00112$
      000067 80 FB            [24] 1304 	sjmp	00101$
      000069                       1305 00112$:
                           000007  1306 	C$putget.h$22$1$16 ==.
                                   1307 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:22: SBUF0 = c;
      000069 8F 99            [24] 1308 	mov	_SBUF0,r7
                           000009  1309 	C$putget.h$23$1$16 ==.
                           000009  1310 	XG$putchar$0$0 ==.
      00006B 22               [24] 1311 	ret
                                   1312 ;------------------------------------------------------------
                                   1313 ;Allocation info for local variables in function 'getchar'
                                   1314 ;------------------------------------------------------------
                                   1315 ;c                         Allocated to registers 
                                   1316 ;------------------------------------------------------------
                           00000A  1317 	G$getchar$0$0 ==.
                           00000A  1318 	C$putget.h$28$1$16 ==.
                                   1319 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:28: char getchar(void)
                                   1320 ;	-----------------------------------------
                                   1321 ;	 function getchar
                                   1322 ;	-----------------------------------------
      00006C                       1323 _getchar:
                           00000A  1324 	C$putget.h$31$1$18 ==.
                                   1325 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:31: while(!RI0);
      00006C                       1326 00101$:
                           00000A  1327 	C$putget.h$32$1$18 ==.
                                   1328 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:32: RI0 =0;
      00006C 10 98 02         [24] 1329 	jbc	_RI0,00112$
      00006F 80 FB            [24] 1330 	sjmp	00101$
      000071                       1331 00112$:
                           00000F  1332 	C$putget.h$33$1$18 ==.
                                   1333 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:33: c = SBUF0;
      000071 E5 99            [12] 1334 	mov	a,_SBUF0
                           000011  1335 	C$putget.h$36$1$18 ==.
                                   1336 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:36: return SBUF0;
      000073 85 99 82         [24] 1337 	mov	dpl,_SBUF0
                           000014  1338 	C$putget.h$37$1$18 ==.
                           000014  1339 	XG$getchar$0$0 ==.
      000076 22               [24] 1340 	ret
                                   1341 ;------------------------------------------------------------
                                   1342 ;Allocation info for local variables in function '_sdcc_external_startup'
                                   1343 ;------------------------------------------------------------
                           000015  1344 	G$_sdcc_external_startup$0$0 ==.
                           000015  1345 	C$memory.c$42$1$18 ==.
                                   1346 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:42: unsigned char _sdcc_external_startup(void)
                                   1347 ;	-----------------------------------------
                                   1348 ;	 function _sdcc_external_startup
                                   1349 ;	-----------------------------------------
      000077                       1350 __sdcc_external_startup:
                           000015  1351 	C$memory.c$44$1$25 ==.
                                   1352 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:44: WDTCN = 0xDE;   // Disable the watchdog timer
      000077 75 FF DE         [24] 1353 	mov	_WDTCN,#0xDE
                           000018  1354 	C$memory.c$45$1$25 ==.
                                   1355 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:45: WDTCN = 0xAD;
      00007A 75 FF AD         [24] 1356 	mov	_WDTCN,#0xAD
                           00001B  1357 	C$memory.c$47$1$25 ==.
                                   1358 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:47: return 0;       // init everything else normally
      00007D 75 82 00         [24] 1359 	mov	dpl,#0x00
                           00001E  1360 	C$memory.c$48$1$25 ==.
                           00001E  1361 	XG$_sdcc_external_startup$0$0 ==.
      000080 22               [24] 1362 	ret
                                   1363 ;------------------------------------------------------------
                                   1364 ;Allocation info for local variables in function 'main'
                                   1365 ;------------------------------------------------------------
                                   1366 ;p                         Allocated with name '_main_p_1_27'
                                   1367 ;------------------------------------------------------------
                           00001F  1368 	G$main$0$0 ==.
                           00001F  1369 	C$memory.c$52$1$25 ==.
                                   1370 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:52: void main(void)
                                   1371 ;	-----------------------------------------
                                   1372 ;	 function main
                                   1373 ;	-----------------------------------------
      000081                       1374 _main:
                           00001F  1375 	C$memory.c$56$1$27 ==.
                                   1376 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:56: SYSCLK_INIT();          // Initialize the oscillator
      000081 12 01 06         [24] 1377 	lcall	_SYSCLK_INIT
                           000022  1378 	C$memory.c$57$1$27 ==.
                                   1379 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:57: PORT_INIT();            // Initialize the Crossbar and GPIO
      000084 12 01 29         [24] 1380 	lcall	_PORT_INIT
                           000025  1381 	C$memory.c$58$1$27 ==.
                                   1382 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:58: UART0_INIT();           // Initialize UART0
      000087 12 01 5B         [24] 1383 	lcall	_UART0_INIT
                           000028  1384 	C$memory.c$60$1$27 ==.
                                   1385 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:60: SFRPAGE = UART0_PAGE;   // Direct output to UART0
      00008A 75 84 00         [24] 1386 	mov	_SFRPAGE,#0x00
                           00002B  1387 	C$memory.c$62$1$27 ==.
                                   1388 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:62: printf("\033[2J");     // Erase ANSI terminal & move cursor to home position
      00008D 74 B3            [12] 1389 	mov	a,#___str_0
      00008F C0 E0            [24] 1390 	push	acc
      000091 74 07            [12] 1391 	mov	a,#(___str_0 >> 8)
      000093 C0 E0            [24] 1392 	push	acc
      000095 74 80            [12] 1393 	mov	a,#0x80
      000097 C0 E0            [24] 1394 	push	acc
      000099 12 01 A3         [24] 1395 	lcall	_printf
      00009C 15 81            [12] 1396 	dec	sp
      00009E 15 81            [12] 1397 	dec	sp
      0000A0 15 81            [12] 1398 	dec	sp
                           000040  1399 	C$memory.c$63$1$27 ==.
                                   1400 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:63: printf("Memory test\n\n\r");
      0000A2 74 B8            [12] 1401 	mov	a,#___str_1
      0000A4 C0 E0            [24] 1402 	push	acc
      0000A6 74 07            [12] 1403 	mov	a,#(___str_1 >> 8)
      0000A8 C0 E0            [24] 1404 	push	acc
      0000AA 74 80            [12] 1405 	mov	a,#0x80
      0000AC C0 E0            [24] 1406 	push	acc
      0000AE 12 01 A3         [24] 1407 	lcall	_printf
      0000B1 15 81            [12] 1408 	dec	sp
      0000B3 15 81            [12] 1409 	dec	sp
      0000B5 15 81            [12] 1410 	dec	sp
                           000055  1411 	C$memory.c$64$1$27 ==.
                                   1412 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:64: p = 'a';
      0000B7 90 20 02         [24] 1413 	mov	dptr,#_main_p_1_27
      0000BA 74 61            [12] 1414 	mov	a,#0x61
      0000BC F0               [24] 1415 	movx	@dptr,a
                           00005B  1416 	C$memory.c$65$1$27 ==.
                                   1417 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:65: while(1)
      0000BD                       1418 00102$:
                           00005B  1419 	C$memory.c$67$2$28 ==.
                                   1420 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:67: printf("Enter a character to write to memory address 0x2002:", p);
      0000BD 90 20 02         [24] 1421 	mov	dptr,#_main_p_1_27
      0000C0 E0               [24] 1422 	movx	a,@dptr
      0000C1 FF               [12] 1423 	mov	r7,a
      0000C2 7E 00            [12] 1424 	mov	r6,#0x00
      0000C4 C0 07            [24] 1425 	push	ar7
      0000C6 C0 06            [24] 1426 	push	ar6
      0000C8 74 C7            [12] 1427 	mov	a,#___str_2
      0000CA C0 E0            [24] 1428 	push	acc
      0000CC 74 07            [12] 1429 	mov	a,#(___str_2 >> 8)
      0000CE C0 E0            [24] 1430 	push	acc
      0000D0 74 80            [12] 1431 	mov	a,#0x80
      0000D2 C0 E0            [24] 1432 	push	acc
      0000D4 12 01 A3         [24] 1433 	lcall	_printf
      0000D7 E5 81            [12] 1434 	mov	a,sp
      0000D9 24 FB            [12] 1435 	add	a,#0xfb
      0000DB F5 81            [12] 1436 	mov	sp,a
                           00007B  1437 	C$memory.c$68$2$28 ==.
                                   1438 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:68: p=getchar();
      0000DD 12 00 6C         [24] 1439 	lcall	_getchar
      0000E0 E5 82            [12] 1440 	mov	a,dpl
      0000E2 90 20 02         [24] 1441 	mov	dptr,#_main_p_1_27
      0000E5 F0               [24] 1442 	movx	@dptr,a
                           000084  1443 	C$memory.c$69$2$28 ==.
                                   1444 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:69: printf("\r\nCharacter stored in memory: %c\r\n", p);	
      0000E6 E0               [24] 1445 	movx	a,@dptr
      0000E7 FF               [12] 1446 	mov	r7,a
      0000E8 7E 00            [12] 1447 	mov	r6,#0x00
      0000EA C0 07            [24] 1448 	push	ar7
      0000EC C0 06            [24] 1449 	push	ar6
      0000EE 74 FC            [12] 1450 	mov	a,#___str_3
      0000F0 C0 E0            [24] 1451 	push	acc
      0000F2 74 07            [12] 1452 	mov	a,#(___str_3 >> 8)
      0000F4 C0 E0            [24] 1453 	push	acc
      0000F6 74 80            [12] 1454 	mov	a,#0x80
      0000F8 C0 E0            [24] 1455 	push	acc
      0000FA 12 01 A3         [24] 1456 	lcall	_printf
      0000FD E5 81            [12] 1457 	mov	a,sp
      0000FF 24 FB            [12] 1458 	add	a,#0xfb
      000101 F5 81            [12] 1459 	mov	sp,a
      000103 80 B8            [24] 1460 	sjmp	00102$
                           0000A3  1461 	C$memory.c$71$1$27 ==.
                           0000A3  1462 	XG$main$0$0 ==.
      000105 22               [24] 1463 	ret
                                   1464 ;------------------------------------------------------------
                                   1465 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1466 ;------------------------------------------------------------
                                   1467 ;i                         Allocated to registers 
                                   1468 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1469 ;------------------------------------------------------------
                           0000A4  1470 	G$SYSCLK_INIT$0$0 ==.
                           0000A4  1471 	C$memory.c$79$1$27 ==.
                                   1472 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:79: void SYSCLK_INIT(void)
                                   1473 ;	-----------------------------------------
                                   1474 ;	 function SYSCLK_INIT
                                   1475 ;	-----------------------------------------
      000106                       1476 _SYSCLK_INIT:
                           0000A4  1477 	C$memory.c$84$1$30 ==.
                                   1478 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:84: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page SFRPAGE = CONFIG_PAGE;
      000106 AF 84            [24] 1479 	mov	r7,_SFRPAGE
                           0000A6  1480 	C$memory.c$85$1$30 ==.
                                   1481 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:85: SFRPAGE = CONFIG_PAGE;
      000108 75 84 0F         [24] 1482 	mov	_SFRPAGE,#0x0F
                           0000A9  1483 	C$memory.c$87$1$30 ==.
                                   1484 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:87: OSCXCN = 0x67;              // Start ext osc with 22.1184MHz crystal
      00010B 75 8C 67         [24] 1485 	mov	_OSCXCN,#0x67
                           0000AC  1486 	C$memory.c$88$1$30 ==.
                                   1487 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:88: for(i=0; i < 3000; i++);    // Wait for the oscillator to start up
      00010E 7D B8            [12] 1488 	mov	r5,#0xB8
      000110 7E 0B            [12] 1489 	mov	r6,#0x0B
      000112                       1490 00107$:
      000112 1D               [12] 1491 	dec	r5
      000113 BD FF 01         [24] 1492 	cjne	r5,#0xFF,00121$
      000116 1E               [12] 1493 	dec	r6
      000117                       1494 00121$:
      000117 ED               [12] 1495 	mov	a,r5
      000118 4E               [12] 1496 	orl	a,r6
      000119 70 F7            [24] 1497 	jnz	00107$
                           0000B9  1498 	C$memory.c$89$1$30 ==.
                                   1499 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:89: while(!(OSCXCN & 0x80));
      00011B                       1500 00102$:
      00011B E5 8C            [12] 1501 	mov	a,_OSCXCN
      00011D 30 E7 FB         [24] 1502 	jnb	acc.7,00102$
                           0000BE  1503 	C$memory.c$90$1$30 ==.
                                   1504 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:90: CLKSEL = 0x01;              // Switch to the external crystal oscillator
      000120 75 97 01         [24] 1505 	mov	_CLKSEL,#0x01
                           0000C1  1506 	C$memory.c$91$1$30 ==.
                                   1507 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:91: OSCICN = 0x00	;              // Disable the internal oscillator
      000123 75 8A 00         [24] 1508 	mov	_OSCICN,#0x00
                           0000C4  1509 	C$memory.c$93$1$30 ==.
                                   1510 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:93: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
      000126 8F 84            [24] 1511 	mov	_SFRPAGE,r7
                           0000C6  1512 	C$memory.c$94$1$30 ==.
                           0000C6  1513 	XG$SYSCLK_INIT$0$0 ==.
      000128 22               [24] 1514 	ret
                                   1515 ;------------------------------------------------------------
                                   1516 ;Allocation info for local variables in function 'PORT_INIT'
                                   1517 ;------------------------------------------------------------
                                   1518 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1519 ;------------------------------------------------------------
                           0000C7  1520 	G$PORT_INIT$0$0 ==.
                           0000C7  1521 	C$memory.c$102$1$30 ==.
                                   1522 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:102: void PORT_INIT(void)
                                   1523 ;	-----------------------------------------
                                   1524 ;	 function PORT_INIT
                                   1525 ;	-----------------------------------------
      000129                       1526 _PORT_INIT:
                           0000C7  1527 	C$memory.c$104$1$30 ==.
                                   1528 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:104: char SFRPAGE_SAVE = SFRPAGE;    // Save Current SFR page
      000129 AF 84            [24] 1529 	mov	r7,_SFRPAGE
                           0000C9  1530 	C$memory.c$105$1$32 ==.
                                   1531 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:105: SFRPAGE = CONFIG_PAGE;
      00012B 75 84 0F         [24] 1532 	mov	_SFRPAGE,#0x0F
                           0000CC  1533 	C$memory.c$107$1$32 ==.
                                   1534 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:107: XBR0 = 0x04;        // Enable UART0
      00012E 75 E1 04         [24] 1535 	mov	_XBR0,#0x04
                           0000CF  1536 	C$memory.c$108$1$32 ==.
                                   1537 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:108: XBR1 = 0x00;
      000131 75 E2 00         [24] 1538 	mov	_XBR1,#0x00
                           0000D2  1539 	C$memory.c$109$1$32 ==.
                                   1540 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:109: XBR2 = 0x40;        // Enable Crossbar and weak pull-up
      000134 75 E3 40         [24] 1541 	mov	_XBR2,#0x40
                           0000D5  1542 	C$memory.c$111$1$32 ==.
                                   1543 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:111: P0MDOUT |= 0x01;    // Set TX0 pin to push-pull
      000137 43 A4 01         [24] 1544 	orl	_P0MDOUT,#0x01
                           0000D8  1545 	C$memory.c$112$1$32 ==.
                                   1546 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:112: P4MDOUT = 0xFF;     // Output configuration for P4 all pushpull
      00013A 75 9C FF         [24] 1547 	mov	_P4MDOUT,#0xFF
                           0000DB  1548 	C$memory.c$113$1$32 ==.
                                   1549 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:113: P5MDOUT = 0xFF;     // Output configuration for P5 pushpull EM addr
      00013D 75 9D FF         [24] 1550 	mov	_P5MDOUT,#0xFF
                           0000DE  1551 	C$memory.c$114$1$32 ==.
                                   1552 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:114: P6MDOUT = 0xFF;     // Output configuration for P6 pushpull EM addr
      000140 75 9E FF         [24] 1553 	mov	_P6MDOUT,#0xFF
                           0000E1  1554 	C$memory.c$115$1$32 ==.
                                   1555 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:115: P7MDOUT = 0xFF;     // Output configuration for P7 pushpull EM data
      000143 75 9F FF         [24] 1556 	mov	_P7MDOUT,#0xFF
                           0000E4  1557 	C$memory.c$117$1$32 ==.
                                   1558 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:117: P5 = 0xFF;
      000146 75 D8 FF         [24] 1559 	mov	_P5,#0xFF
                           0000E7  1560 	C$memory.c$118$1$32 ==.
                                   1561 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:118: P6 = 0xFF;
      000149 75 E8 FF         [24] 1562 	mov	_P6,#0xFF
                           0000EA  1563 	C$memory.c$119$1$32 ==.
                                   1564 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:119: P7 = 0xFF;
      00014C 75 F8 FF         [24] 1565 	mov	_P7,#0xFF
                           0000ED  1566 	C$memory.c$123$1$32 ==.
                                   1567 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:123: SFRPAGE = EMI0_PAGE;
      00014F 75 84 00         [24] 1568 	mov	_SFRPAGE,#0x00
                           0000F0  1569 	C$memory.c$124$1$32 ==.
                                   1570 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:124: EMI0CF = 0x3b;              //34
      000152 75 A3 3B         [24] 1571 	mov	_EMI0CF,#0x3B
                           0000F3  1572 	C$memory.c$125$1$32 ==.
                                   1573 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:125: EMI0TC = 0xFF;
      000155 75 A1 FF         [24] 1574 	mov	_EMI0TC,#0xFF
                           0000F6  1575 	C$memory.c$127$1$32 ==.
                                   1576 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:127: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
      000158 8F 84            [24] 1577 	mov	_SFRPAGE,r7
                           0000F8  1578 	C$memory.c$128$1$32 ==.
                           0000F8  1579 	XG$PORT_INIT$0$0 ==.
      00015A 22               [24] 1580 	ret
                                   1581 ;------------------------------------------------------------
                                   1582 ;Allocation info for local variables in function 'UART0_INIT'
                                   1583 ;------------------------------------------------------------
                                   1584 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   1585 ;------------------------------------------------------------
                           0000F9  1586 	G$UART0_INIT$0$0 ==.
                           0000F9  1587 	C$memory.c$136$1$32 ==.
                                   1588 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:136: void UART0_INIT(void)
                                   1589 ;	-----------------------------------------
                                   1590 ;	 function UART0_INIT
                                   1591 ;	-----------------------------------------
      00015B                       1592 _UART0_INIT:
                           0000F9  1593 	C$memory.c$140$1$34 ==.
                                   1594 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:140: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page
      00015B AF 84            [24] 1595 	mov	r7,_SFRPAGE
                           0000FB  1596 	C$memory.c$141$1$34 ==.
                                   1597 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:141: SFRPAGE = TIMER01_PAGE;
      00015D 75 84 00         [24] 1598 	mov	_SFRPAGE,#0x00
                           0000FE  1599 	C$memory.c$143$1$34 ==.
                                   1600 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:143: TCON = 0x40;
      000160 75 88 40         [24] 1601 	mov	_TCON,#0x40
                           000101  1602 	C$memory.c$144$1$34 ==.
                                   1603 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:144: TMOD &= 0x0F;
      000163 53 89 0F         [24] 1604 	anl	_TMOD,#0x0F
                           000104  1605 	C$memory.c$145$1$34 ==.
                                   1606 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:145: TMOD |= 0x20;               // Timer1, Mode 2, 8-bit reload
      000166 43 89 20         [24] 1607 	orl	_TMOD,#0x20
                           000107  1608 	C$memory.c$146$1$34 ==.
                                   1609 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:146: CKCON |= 0x10;              // Timer1 uses SYSCLK as time base
      000169 43 8E 10         [24] 1610 	orl	_CKCON,#0x10
                           00010A  1611 	C$memory.c$148$1$34 ==.
                                   1612 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:148: TH1 = 0xE8;                 // 0xE8 = 232
      00016C 75 8D E8         [24] 1613 	mov	_TH1,#0xE8
                           00010D  1614 	C$memory.c$149$1$34 ==.
                                   1615 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:149: TR1 = 1;                    // Start Timer1
      00016F D2 8E            [12] 1616 	setb	_TR1
                           00010F  1617 	C$memory.c$151$1$34 ==.
                                   1618 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:151: SFRPAGE = UART0_PAGE;
      000171 75 84 00         [24] 1619 	mov	_SFRPAGE,#0x00
                           000112  1620 	C$memory.c$152$1$34 ==.
                                   1621 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:152: SCON0 = 0x50;               // Mode 1, 8-bit UART, enable RX
      000174 75 98 50         [24] 1622 	mov	_SCON0,#0x50
                           000115  1623 	C$memory.c$153$1$34 ==.
                                   1624 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:153: SSTA0 = 0x00;               // SMOD0 = 0, in this mode
      000177 75 91 00         [24] 1625 	mov	_SSTA0,#0x00
                           000118  1626 	C$memory.c$156$1$34 ==.
                                   1627 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:156: TI0 = 1;                    // Indicate TX0 ready
      00017A D2 99            [12] 1628 	setb	_TI0
                           00011A  1629 	C$memory.c$158$1$34 ==.
                                   1630 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\memory.c:158: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
      00017C 8F 84            [24] 1631 	mov	_SFRPAGE,r7
                           00011C  1632 	C$memory.c$159$1$34 ==.
                           00011C  1633 	XG$UART0_INIT$0$0 ==.
      00017E 22               [24] 1634 	ret
                                   1635 	.area CSEG    (CODE)
                                   1636 	.area CONST   (CODE)
                           000000  1637 Fmemory$__str_0$0$0 == .
      0007B3                       1638 ___str_0:
      0007B3 1B                    1639 	.db 0x1B
      0007B4 5B 32 4A              1640 	.ascii "[2J"
      0007B7 00                    1641 	.db 0x00
                           000005  1642 Fmemory$__str_1$0$0 == .
      0007B8                       1643 ___str_1:
      0007B8 4D 65 6D 6F 72 79 20  1644 	.ascii "Memory test"
             74 65 73 74
      0007C3 0A                    1645 	.db 0x0A
      0007C4 0A                    1646 	.db 0x0A
      0007C5 0D                    1647 	.db 0x0D
      0007C6 00                    1648 	.db 0x00
                           000014  1649 Fmemory$__str_2$0$0 == .
      0007C7                       1650 ___str_2:
      0007C7 45 6E 74 65 72 20 61  1651 	.ascii "Enter a character to write to memory address 0x2002:"
             20 63 68 61 72 61 63
             74 65 72 20 74 6F 20
             77 72 69 74 65 20 74
             6F 20 6D 65 6D 6F 72
             79 20 61 64 64 72 65
             73 73 20 30 78 32 30
             30 32 3A
      0007FB 00                    1652 	.db 0x00
                           000049  1653 Fmemory$__str_3$0$0 == .
      0007FC                       1654 ___str_3:
      0007FC 0D                    1655 	.db 0x0D
      0007FD 0A                    1656 	.db 0x0A
      0007FE 43 68 61 72 61 63 74  1657 	.ascii "Character stored in memory: %c"
             65 72 20 73 74 6F 72
             65 64 20 69 6E 20 6D
             65 6D 6F 72 79 3A 20
             25 63
      00081C 0D                    1658 	.db 0x0D
      00081D 0A                    1659 	.db 0x0A
      00081E 00                    1660 	.db 0x00
                                   1661 	.area XINIT   (CODE)
                                   1662 	.area CABS    (ABS,CODE)
