                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Nov 17 17:00:59 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module part_01
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
                                    396 	.globl _External_PARM_2
                                    397 	.globl _putchar
                                    398 	.globl _getchar
                                    399 	.globl __sdcc_external_startup
                                    400 	.globl _main
                                    401 	.globl _On_Board
                                    402 	.globl _External
                                    403 	.globl _SYSCLK_INIT
                                    404 	.globl _PORT_INIT
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
                           000000  1191 Lpart_01.On_Board$ext_ram$1$32==.
      000008                       1192 _On_Board_ext_ram_1_32:
      000008                       1193 	.ds 2
                           000002  1194 Lpart_01.External$num$1$34==.
      00000A                       1195 _External_PARM_2:
      00000A                       1196 	.ds 1
                           000003  1197 Lpart_01.External$a$1$34==.
      00000B                       1198 _External_a_1_34:
      00000B                       1199 	.ds 1
                           000004  1200 Lpart_01.External$ext_ram$1$35==.
      00000C                       1201 _External_ext_ram_1_35:
      00000C                       1202 	.ds 2
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
      00003C                       1215 __start__stack:
      00003C                       1216 	.ds	1
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
                                   1231 ;--------------------------------------------------------
                                   1232 ; paged external ram data
                                   1233 ;--------------------------------------------------------
                                   1234 	.area PSEG    (PAG,XDATA)
                                   1235 ;--------------------------------------------------------
                                   1236 ; external ram data
                                   1237 ;--------------------------------------------------------
                                   1238 	.area XSEG    (XDATA)
                           000000  1239 Fpart_01$count$0$0==.
      000001                       1240 _count:
      000001                       1241 	.ds 1024
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
      000000 02 00 06         [24] 1265 	ljmp	__sdcc_gsinit_startup
                                   1266 ;--------------------------------------------------------
                                   1267 ; global & static initialisations
                                   1268 ;--------------------------------------------------------
                                   1269 	.area HOME    (CODE)
                                   1270 	.area GSINIT  (CODE)
                                   1271 	.area GSFINAL (CODE)
                                   1272 	.area GSINIT  (CODE)
                                   1273 	.globl __sdcc_gsinit_startup
                                   1274 	.globl __sdcc_program_startup
                                   1275 	.globl __start__stack
                                   1276 	.globl __mcs51_genXINIT
                                   1277 	.globl __mcs51_genXRAMCLEAR
                                   1278 	.globl __mcs51_genRAMCLEAR
                                   1279 	.area GSFINAL (CODE)
      00005F 02 00 03         [24] 1280 	ljmp	__sdcc_program_startup
                                   1281 ;--------------------------------------------------------
                                   1282 ; Home
                                   1283 ;--------------------------------------------------------
                                   1284 	.area HOME    (CODE)
                                   1285 	.area HOME    (CODE)
      000003                       1286 __sdcc_program_startup:
      000003 02 00 81         [24] 1287 	ljmp	_main
                                   1288 ;	return from main will return to caller
                                   1289 ;--------------------------------------------------------
                                   1290 ; code
                                   1291 ;--------------------------------------------------------
                                   1292 	.area CSEG    (CODE)
                                   1293 ;------------------------------------------------------------
                                   1294 ;Allocation info for local variables in function 'putchar'
                                   1295 ;------------------------------------------------------------
                                   1296 ;c                         Allocated to registers r7 
                                   1297 ;------------------------------------------------------------
                           000000  1298 	G$putchar$0$0 ==.
                           000000  1299 	C$putget.h$18$0$0 ==.
                                   1300 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:18: void putchar(char c)
                                   1301 ;	-----------------------------------------
                                   1302 ;	 function putchar
                                   1303 ;	-----------------------------------------
      000062                       1304 _putchar:
                           000007  1305 	ar7 = 0x07
                           000006  1306 	ar6 = 0x06
                           000005  1307 	ar5 = 0x05
                           000004  1308 	ar4 = 0x04
                           000003  1309 	ar3 = 0x03
                           000002  1310 	ar2 = 0x02
                           000001  1311 	ar1 = 0x01
                           000000  1312 	ar0 = 0x00
      000062 AF 82            [24] 1313 	mov	r7,dpl
                           000002  1314 	C$putget.h$20$1$16 ==.
                                   1315 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:20: while(!TI0); 
      000064                       1316 00101$:
                           000002  1317 	C$putget.h$21$1$16 ==.
                                   1318 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:21: TI0=0;
      000064 10 99 02         [24] 1319 	jbc	_TI0,00112$
      000067 80 FB            [24] 1320 	sjmp	00101$
      000069                       1321 00112$:
                           000007  1322 	C$putget.h$22$1$16 ==.
                                   1323 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:22: SBUF0 = c;
      000069 8F 99            [24] 1324 	mov	_SBUF0,r7
                           000009  1325 	C$putget.h$23$1$16 ==.
                           000009  1326 	XG$putchar$0$0 ==.
      00006B 22               [24] 1327 	ret
                                   1328 ;------------------------------------------------------------
                                   1329 ;Allocation info for local variables in function 'getchar'
                                   1330 ;------------------------------------------------------------
                                   1331 ;c                         Allocated to registers 
                                   1332 ;------------------------------------------------------------
                           00000A  1333 	G$getchar$0$0 ==.
                           00000A  1334 	C$putget.h$28$1$16 ==.
                                   1335 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:28: char getchar(void)
                                   1336 ;	-----------------------------------------
                                   1337 ;	 function getchar
                                   1338 ;	-----------------------------------------
      00006C                       1339 _getchar:
                           00000A  1340 	C$putget.h$31$1$18 ==.
                                   1341 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:31: while(!RI0);
      00006C                       1342 00101$:
                           00000A  1343 	C$putget.h$32$1$18 ==.
                                   1344 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:32: RI0 =0;
      00006C 10 98 02         [24] 1345 	jbc	_RI0,00112$
      00006F 80 FB            [24] 1346 	sjmp	00101$
      000071                       1347 00112$:
                           00000F  1348 	C$putget.h$33$1$18 ==.
                                   1349 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:33: c = SBUF0;
      000071 E5 99            [12] 1350 	mov	a,_SBUF0
                           000011  1351 	C$putget.h$36$1$18 ==.
                                   1352 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\/putget.h:36: return SBUF0;
      000073 85 99 82         [24] 1353 	mov	dpl,_SBUF0
                           000014  1354 	C$putget.h$37$1$18 ==.
                           000014  1355 	XG$getchar$0$0 ==.
      000076 22               [24] 1356 	ret
                                   1357 ;------------------------------------------------------------
                                   1358 ;Allocation info for local variables in function '_sdcc_external_startup'
                                   1359 ;------------------------------------------------------------
                           000015  1360 	G$_sdcc_external_startup$0$0 ==.
                           000015  1361 	C$part_01.c$48$1$18 ==.
                                   1362 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:48: unsigned char _sdcc_external_startup(void)
                                   1363 ;	-----------------------------------------
                                   1364 ;	 function _sdcc_external_startup
                                   1365 ;	-----------------------------------------
      000077                       1366 __sdcc_external_startup:
                           000015  1367 	C$part_01.c$50$1$27 ==.
                                   1368 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:50: WDTCN = 0xDE;   // Disable the watchdog timer
      000077 75 FF DE         [24] 1369 	mov	_WDTCN,#0xDE
                           000018  1370 	C$part_01.c$51$1$27 ==.
                                   1371 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:51: WDTCN = 0xAD;
      00007A 75 FF AD         [24] 1372 	mov	_WDTCN,#0xAD
                           00001B  1373 	C$part_01.c$53$1$27 ==.
                                   1374 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:53: return 0;       // init everything else normally
      00007D 75 82 00         [24] 1375 	mov	dpl,#0x00
                           00001E  1376 	C$part_01.c$54$1$27 ==.
                           00001E  1377 	XG$_sdcc_external_startup$0$0 ==.
      000080 22               [24] 1378 	ret
                                   1379 ;------------------------------------------------------------
                                   1380 ;Allocation info for local variables in function 'main'
                                   1381 ;------------------------------------------------------------
                                   1382 ;y                         Allocated to registers 
                                   1383 ;num                       Allocated to registers r7 
                                   1384 ;------------------------------------------------------------
                           00001F  1385 	G$main$0$0 ==.
                           00001F  1386 	C$part_01.c$58$1$27 ==.
                                   1387 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:58: void main(void)
                                   1388 ;	-----------------------------------------
                                   1389 ;	 function main
                                   1390 ;	-----------------------------------------
      000081                       1391 _main:
                           00001F  1392 	C$part_01.c$63$1$29 ==.
                                   1393 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:63: SYSCLK_INIT();          // Initialize the oscillator
      000081 12 04 1C         [24] 1394 	lcall	_SYSCLK_INIT
                           000022  1395 	C$part_01.c$64$1$29 ==.
                                   1396 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:64: PORT_INIT();            // Initialize the Crossbar and GPIO
      000084 12 04 3F         [24] 1397 	lcall	_PORT_INIT
                           000025  1398 	C$part_01.c$65$1$29 ==.
                                   1399 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:65: UART0_INIT();           // Initialize UART0
      000087 12 04 71         [24] 1400 	lcall	_UART0_INIT
                           000028  1401 	C$part_01.c$67$1$29 ==.
                                   1402 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:67: SFRPAGE = UART0_PAGE;   // Direct output to UART0
      00008A 75 84 00         [24] 1403 	mov	_SFRPAGE,#0x00
                           00002B  1404 	C$part_01.c$69$1$29 ==.
                                   1405 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:69: printf("\033[2J");     // Erase ANSI terminal & move cursor to home position
      00008D 74 C9            [12] 1406 	mov	a,#___str_0
      00008F C0 E0            [24] 1407 	push	acc
      000091 74 0A            [12] 1408 	mov	a,#(___str_0 >> 8)
      000093 C0 E0            [24] 1409 	push	acc
      000095 74 80            [12] 1410 	mov	a,#0x80
      000097 C0 E0            [24] 1411 	push	acc
      000099 12 04 B9         [24] 1412 	lcall	_printf
      00009C 15 81            [12] 1413 	dec	sp
      00009E 15 81            [12] 1414 	dec	sp
      0000A0 15 81            [12] 1415 	dec	sp
                           000040  1416 	C$part_01.c$70$1$29 ==.
                                   1417 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:70: printf("MPS Lab 5 - Memory\n\n\r");
      0000A2 74 CE            [12] 1418 	mov	a,#___str_1
      0000A4 C0 E0            [24] 1419 	push	acc
      0000A6 74 0A            [12] 1420 	mov	a,#(___str_1 >> 8)
      0000A8 C0 E0            [24] 1421 	push	acc
      0000AA 74 80            [12] 1422 	mov	a,#0x80
      0000AC C0 E0            [24] 1423 	push	acc
      0000AE 12 04 B9         [24] 1424 	lcall	_printf
      0000B1 15 81            [12] 1425 	dec	sp
      0000B3 15 81            [12] 1426 	dec	sp
      0000B5 15 81            [12] 1427 	dec	sp
                           000055  1428 	C$part_01.c$71$1$29 ==.
                                   1429 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:71: while(1)
      0000B7                       1430 00102$:
                           000055  1431 	C$part_01.c$73$2$30 ==.
                                   1432 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:73: y = getchar();// so it dosen't start right away
      0000B7 12 00 6C         [24] 1433 	lcall	_getchar
                           000058  1434 	C$part_01.c$74$2$30 ==.
                                   1435 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:74: printf("\n\rWould you like to talk to external memory 1 or 2?");
      0000BA 74 E4            [12] 1436 	mov	a,#___str_2
      0000BC C0 E0            [24] 1437 	push	acc
      0000BE 74 0A            [12] 1438 	mov	a,#(___str_2 >> 8)
      0000C0 C0 E0            [24] 1439 	push	acc
      0000C2 74 80            [12] 1440 	mov	a,#0x80
      0000C4 C0 E0            [24] 1441 	push	acc
      0000C6 12 04 B9         [24] 1442 	lcall	_printf
      0000C9 15 81            [12] 1443 	dec	sp
      0000CB 15 81            [12] 1444 	dec	sp
      0000CD 15 81            [12] 1445 	dec	sp
                           00006D  1446 	C$part_01.c$75$2$30 ==.
                                   1447 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:75: num = getchar();
      0000CF 12 00 6C         [24] 1448 	lcall	_getchar
      0000D2 AF 82            [24] 1449 	mov	r7,dpl
                           000072  1450 	C$part_01.c$76$2$30 ==.
                                   1451 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:76: printf("\n\rWhat value would you like to write? %x",num);
      0000D4 8F 05            [24] 1452 	mov	ar5,r7
      0000D6 7E 00            [12] 1453 	mov	r6,#0x00
      0000D8 C0 07            [24] 1454 	push	ar7
      0000DA C0 05            [24] 1455 	push	ar5
      0000DC C0 06            [24] 1456 	push	ar6
      0000DE 74 18            [12] 1457 	mov	a,#___str_3
      0000E0 C0 E0            [24] 1458 	push	acc
      0000E2 74 0B            [12] 1459 	mov	a,#(___str_3 >> 8)
      0000E4 C0 E0            [24] 1460 	push	acc
      0000E6 74 80            [12] 1461 	mov	a,#0x80
      0000E8 C0 E0            [24] 1462 	push	acc
      0000EA 12 04 B9         [24] 1463 	lcall	_printf
      0000ED E5 81            [12] 1464 	mov	a,sp
      0000EF 24 FB            [12] 1465 	add	a,#0xfb
      0000F1 F5 81            [12] 1466 	mov	sp,a
                           000091  1467 	C$part_01.c$77$2$30 ==.
                                   1468 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:77: y = getchar();
      0000F3 12 00 6C         [24] 1469 	lcall	_getchar
      0000F6 D0 07            [24] 1470 	pop	ar7
                           000096  1471 	C$part_01.c$78$2$30 ==.
                                   1472 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:78: External(y,num);
      0000F8 8F 0A            [24] 1473 	mov	_External_PARM_2,r7
      0000FA 12 01 C6         [24] 1474 	lcall	_External
                           00009B  1475 	C$part_01.c$79$2$30 ==.
                                   1476 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:79: On_Board();
      0000FD 12 01 51         [24] 1477 	lcall	_On_Board
                           00009E  1478 	C$part_01.c$81$2$30 ==.
                                   1479 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:81: External(0x00, 0x33);
      000100 75 0A 33         [24] 1480 	mov	_External_PARM_2,#0x33
      000103 75 82 00         [24] 1481 	mov	dpl,#0x00
      000106 12 01 C6         [24] 1482 	lcall	_External
                           0000A7  1483 	C$part_01.c$82$2$30 ==.
                                   1484 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:82: External(0xAA,0x31);
      000109 75 0A 31         [24] 1485 	mov	_External_PARM_2,#0x31
      00010C 75 82 AA         [24] 1486 	mov	dpl,#0xAA
      00010F 12 01 C6         [24] 1487 	lcall	_External
                           0000B0  1488 	C$part_01.c$83$2$30 ==.
                                   1489 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:83: External(0xAA,0x32);
      000112 75 0A 32         [24] 1490 	mov	_External_PARM_2,#0x32
      000115 75 82 AA         [24] 1491 	mov	dpl,#0xAA
      000118 12 01 C6         [24] 1492 	lcall	_External
                           0000B9  1493 	C$part_01.c$84$2$30 ==.
                                   1494 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:84: External(0x55,0x31);
      00011B 75 0A 31         [24] 1495 	mov	_External_PARM_2,#0x31
      00011E 75 82 55         [24] 1496 	mov	dpl,#0x55
      000121 12 01 C6         [24] 1497 	lcall	_External
                           0000C2  1498 	C$part_01.c$85$2$30 ==.
                                   1499 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:85: External(0x55,0x32);
      000124 75 0A 32         [24] 1500 	mov	_External_PARM_2,#0x32
      000127 75 82 55         [24] 1501 	mov	dpl,#0x55
      00012A 12 01 C6         [24] 1502 	lcall	_External
                           0000CB  1503 	C$part_01.c$86$2$30 ==.
                                   1504 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:86: printf("\n\r Errors Occured at... %d",count);
      00012D 74 01            [12] 1505 	mov	a,#_count
      00012F C0 E0            [24] 1506 	push	acc
      000131 74 00            [12] 1507 	mov	a,#(_count >> 8)
      000133 C0 E0            [24] 1508 	push	acc
      000135 E4               [12] 1509 	clr	a
      000136 C0 E0            [24] 1510 	push	acc
      000138 74 41            [12] 1511 	mov	a,#___str_4
      00013A C0 E0            [24] 1512 	push	acc
      00013C 74 0B            [12] 1513 	mov	a,#(___str_4 >> 8)
      00013E C0 E0            [24] 1514 	push	acc
      000140 74 80            [12] 1515 	mov	a,#0x80
      000142 C0 E0            [24] 1516 	push	acc
      000144 12 04 B9         [24] 1517 	lcall	_printf
      000147 E5 81            [12] 1518 	mov	a,sp
      000149 24 FA            [12] 1519 	add	a,#0xfa
      00014B F5 81            [12] 1520 	mov	sp,a
      00014D 02 00 B7         [24] 1521 	ljmp	00102$
                           0000EE  1522 	C$part_01.c$88$1$29 ==.
                           0000EE  1523 	XG$main$0$0 ==.
      000150 22               [24] 1524 	ret
                                   1525 ;------------------------------------------------------------
                                   1526 ;Allocation info for local variables in function 'On_Board'
                                   1527 ;------------------------------------------------------------
                                   1528 ;i                         Allocated to registers 
                                   1529 ;ext_ram                   Allocated with name '_On_Board_ext_ram_1_32'
                                   1530 ;------------------------------------------------------------
                           0000EF  1531 	G$On_Board$0$0 ==.
                           0000EF  1532 	C$part_01.c$90$1$29 ==.
                                   1533 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:90: void On_Board(void)
                                   1534 ;	-----------------------------------------
                                   1535 ;	 function On_Board
                                   1536 ;	-----------------------------------------
      000151                       1537 _On_Board:
                           0000EF  1538 	C$part_01.c$94$1$32 ==.
                                   1539 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:94: printf("On Board Data\n\r");
      000151 74 5C            [12] 1540 	mov	a,#___str_5
      000153 C0 E0            [24] 1541 	push	acc
      000155 74 0B            [12] 1542 	mov	a,#(___str_5 >> 8)
      000157 C0 E0            [24] 1543 	push	acc
      000159 74 80            [12] 1544 	mov	a,#0x80
      00015B C0 E0            [24] 1545 	push	acc
      00015D 12 04 B9         [24] 1546 	lcall	_printf
      000160 15 81            [12] 1547 	dec	sp
      000162 15 81            [12] 1548 	dec	sp
      000164 15 81            [12] 1549 	dec	sp
                           000104  1550 	C$part_01.c$95$1$32 ==.
                                   1551 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:95: for (i=0x1FF0;i<0x2000; i++)
      000166 7E F0            [12] 1552 	mov	r6,#0xF0
      000168 7F 1F            [12] 1553 	mov	r7,#0x1F
      00016A                       1554 00102$:
                           000108  1555 	C$part_01.c$97$2$33 ==.
                                   1556 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:97: ext_ram = (__xdata unsigned char*)(i);
      00016A 8E 82            [24] 1557 	mov	dpl,r6
      00016C 8F 83            [24] 1558 	mov	dph,r7
                           00010C  1559 	C$part_01.c$98$2$33 ==.
                                   1560 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:98: printf("\r\nData stored in memory: 0x%X, %c ", *ext_ram, *ext_ram);
      00016E E0               [24] 1561 	movx	a,@dptr
      00016F FD               [12] 1562 	mov	r5,a
      000170 7C 00            [12] 1563 	mov	r4,#0x00
      000172 C0 07            [24] 1564 	push	ar7
      000174 C0 06            [24] 1565 	push	ar6
      000176 C0 05            [24] 1566 	push	ar5
      000178 C0 04            [24] 1567 	push	ar4
      00017A C0 05            [24] 1568 	push	ar5
      00017C C0 04            [24] 1569 	push	ar4
      00017E 74 6C            [12] 1570 	mov	a,#___str_6
      000180 C0 E0            [24] 1571 	push	acc
      000182 74 0B            [12] 1572 	mov	a,#(___str_6 >> 8)
      000184 C0 E0            [24] 1573 	push	acc
      000186 74 80            [12] 1574 	mov	a,#0x80
      000188 C0 E0            [24] 1575 	push	acc
      00018A 12 04 B9         [24] 1576 	lcall	_printf
      00018D E5 81            [12] 1577 	mov	a,sp
      00018F 24 F9            [12] 1578 	add	a,#0xf9
      000191 F5 81            [12] 1579 	mov	sp,a
      000193 D0 06            [24] 1580 	pop	ar6
      000195 D0 07            [24] 1581 	pop	ar7
                           000135  1582 	C$part_01.c$99$2$33 ==.
                                   1583 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:99: printf("   Address: 0x%X\r\n",i);
      000197 C0 07            [24] 1584 	push	ar7
      000199 C0 06            [24] 1585 	push	ar6
      00019B C0 06            [24] 1586 	push	ar6
      00019D C0 07            [24] 1587 	push	ar7
      00019F 74 8F            [12] 1588 	mov	a,#___str_7
      0001A1 C0 E0            [24] 1589 	push	acc
      0001A3 74 0B            [12] 1590 	mov	a,#(___str_7 >> 8)
      0001A5 C0 E0            [24] 1591 	push	acc
      0001A7 74 80            [12] 1592 	mov	a,#0x80
      0001A9 C0 E0            [24] 1593 	push	acc
      0001AB 12 04 B9         [24] 1594 	lcall	_printf
      0001AE E5 81            [12] 1595 	mov	a,sp
      0001B0 24 FB            [12] 1596 	add	a,#0xfb
      0001B2 F5 81            [12] 1597 	mov	sp,a
      0001B4 D0 06            [24] 1598 	pop	ar6
      0001B6 D0 07            [24] 1599 	pop	ar7
                           000156  1600 	C$part_01.c$95$1$32 ==.
                                   1601 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:95: for (i=0x1FF0;i<0x2000; i++)
      0001B8 0E               [12] 1602 	inc	r6
      0001B9 BE 00 01         [24] 1603 	cjne	r6,#0x00,00110$
      0001BC 0F               [12] 1604 	inc	r7
      0001BD                       1605 00110$:
      0001BD C3               [12] 1606 	clr	c
      0001BE EF               [12] 1607 	mov	a,r7
      0001BF 64 80            [12] 1608 	xrl	a,#0x80
      0001C1 94 A0            [12] 1609 	subb	a,#0xa0
      0001C3 40 A5            [24] 1610 	jc	00102$
                           000163  1611 	C$part_01.c$101$1$32 ==.
                           000163  1612 	XG$On_Board$0$0 ==.
      0001C5 22               [24] 1613 	ret
                                   1614 ;------------------------------------------------------------
                                   1615 ;Allocation info for local variables in function 'External'
                                   1616 ;------------------------------------------------------------
                                   1617 ;num                       Allocated with name '_External_PARM_2'
                                   1618 ;a                         Allocated with name '_External_a_1_34'
                                   1619 ;i                         Allocated to registers r5 r6 
                                   1620 ;ext_ram                   Allocated with name '_External_ext_ram_1_35'
                                   1621 ;------------------------------------------------------------
                           000164  1622 	G$External$0$0 ==.
                           000164  1623 	C$part_01.c$102$1$32 ==.
                                   1624 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:102: void External(char a,char num)
                                   1625 ;	-----------------------------------------
                                   1626 ;	 function External
                                   1627 ;	-----------------------------------------
      0001C6                       1628 _External:
      0001C6 85 82 0B         [24] 1629 	mov	_External_a_1_34,dpl
                           000167  1630 	C$part_01.c$106$1$35 ==.
                                   1631 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:106: printf("\n\rOff Board Data\n\r");
      0001C9 74 A2            [12] 1632 	mov	a,#___str_8
      0001CB C0 E0            [24] 1633 	push	acc
      0001CD 74 0B            [12] 1634 	mov	a,#(___str_8 >> 8)
      0001CF C0 E0            [24] 1635 	push	acc
      0001D1 74 80            [12] 1636 	mov	a,#0x80
      0001D3 C0 E0            [24] 1637 	push	acc
      0001D5 12 04 B9         [24] 1638 	lcall	_printf
      0001D8 15 81            [12] 1639 	dec	sp
      0001DA 15 81            [12] 1640 	dec	sp
      0001DC 15 81            [12] 1641 	dec	sp
                           00017C  1642 	C$part_01.c$107$1$35 ==.
                                   1643 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:107: if(num ==0x31){
      0001DE 74 31            [12] 1644 	mov	a,#0x31
      0001E0 B5 0A 02         [24] 1645 	cjne	a,_External_PARM_2,00172$
      0001E3 80 03            [24] 1646 	sjmp	00173$
      0001E5                       1647 00172$:
      0001E5 02 02 8D         [24] 1648 	ljmp	00120$
      0001E8                       1649 00173$:
                           000186  1650 	C$part_01.c$108$2$36 ==.
                                   1651 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:108: for (i=0x2000;i<0x2800; i++)
      0001E8 7D 00            [12] 1652 	mov	r5,#0x00
      0001EA 7E 20            [12] 1653 	mov	r6,#0x20
      0001EC 8D 03            [24] 1654 	mov	ar3,r5
      0001EE 8E 04            [24] 1655 	mov	ar4,r6
      0001F0                       1656 00122$:
                           00018E  1657 	C$part_01.c$110$3$37 ==.
                                   1658 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:110: ext_ram = (__xdata unsigned char*)(i);
      0001F0 8B 0C            [24] 1659 	mov	_External_ext_ram_1_35,r3
      0001F2 8C 0D            [24] 1660 	mov	(_External_ext_ram_1_35 + 1),r4
                           000192  1661 	C$part_01.c$111$3$37 ==.
                                   1662 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:111: *ext_ram = a;
      0001F4 85 0C 82         [24] 1663 	mov	dpl,_External_ext_ram_1_35
      0001F7 85 0D 83         [24] 1664 	mov	dph,(_External_ext_ram_1_35 + 1)
      0001FA E5 0B            [12] 1665 	mov	a,_External_a_1_34
      0001FC F0               [24] 1666 	movx	@dptr,a
                           00019B  1667 	C$part_01.c$112$3$37 ==.
                                   1668 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:112: printf("\r\nData written to memory: 0x%X, %c ", *ext_ram, *ext_ram);
      0001FD 85 0C 82         [24] 1669 	mov	dpl,_External_ext_ram_1_35
      000200 85 0D 83         [24] 1670 	mov	dph,(_External_ext_ram_1_35 + 1)
      000203 E0               [24] 1671 	movx	a,@dptr
      000204 F8               [12] 1672 	mov	r0,a
      000205 7F 00            [12] 1673 	mov	r7,#0x00
      000207 85 0C 82         [24] 1674 	mov	dpl,_External_ext_ram_1_35
      00020A 85 0D 83         [24] 1675 	mov	dph,(_External_ext_ram_1_35 + 1)
      00020D E0               [24] 1676 	movx	a,@dptr
      00020E F9               [12] 1677 	mov	r1,a
      00020F 7A 00            [12] 1678 	mov	r2,#0x00
      000211 C0 04            [24] 1679 	push	ar4
      000213 C0 03            [24] 1680 	push	ar3
      000215 C0 00            [24] 1681 	push	ar0
      000217 C0 07            [24] 1682 	push	ar7
      000219 C0 01            [24] 1683 	push	ar1
      00021B C0 02            [24] 1684 	push	ar2
      00021D 74 B5            [12] 1685 	mov	a,#___str_9
      00021F C0 E0            [24] 1686 	push	acc
      000221 74 0B            [12] 1687 	mov	a,#(___str_9 >> 8)
      000223 C0 E0            [24] 1688 	push	acc
      000225 74 80            [12] 1689 	mov	a,#0x80
      000227 C0 E0            [24] 1690 	push	acc
      000229 12 04 B9         [24] 1691 	lcall	_printf
      00022C E5 81            [12] 1692 	mov	a,sp
      00022E 24 F9            [12] 1693 	add	a,#0xf9
      000230 F5 81            [12] 1694 	mov	sp,a
      000232 D0 03            [24] 1695 	pop	ar3
      000234 D0 04            [24] 1696 	pop	ar4
                           0001D4  1697 	C$part_01.c$113$3$37 ==.
                                   1698 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:113: printf("   Address: 0x%X\r\n",i);
      000236 C0 04            [24] 1699 	push	ar4
      000238 C0 03            [24] 1700 	push	ar3
      00023A C0 03            [24] 1701 	push	ar3
      00023C C0 04            [24] 1702 	push	ar4
      00023E 74 8F            [12] 1703 	mov	a,#___str_7
      000240 C0 E0            [24] 1704 	push	acc
      000242 74 0B            [12] 1705 	mov	a,#(___str_7 >> 8)
      000244 C0 E0            [24] 1706 	push	acc
      000246 74 80            [12] 1707 	mov	a,#0x80
      000248 C0 E0            [24] 1708 	push	acc
      00024A 12 04 B9         [24] 1709 	lcall	_printf
      00024D E5 81            [12] 1710 	mov	a,sp
      00024F 24 FB            [12] 1711 	add	a,#0xfb
      000251 F5 81            [12] 1712 	mov	sp,a
      000253 D0 03            [24] 1713 	pop	ar3
      000255 D0 04            [24] 1714 	pop	ar4
                           0001F5  1715 	C$part_01.c$114$3$37 ==.
                                   1716 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:114: if(*ext_ram != a){count[0] = i;}
      000257 85 0C 82         [24] 1717 	mov	dpl,_External_ext_ram_1_35
      00025A 85 0D 83         [24] 1718 	mov	dph,(_External_ext_ram_1_35 + 1)
      00025D E0               [24] 1719 	movx	a,@dptr
      00025E FF               [12] 1720 	mov	r7,a
      00025F 7A 00            [12] 1721 	mov	r2,#0x00
      000261 E5 0B            [12] 1722 	mov	a,_External_a_1_34
      000263 F8               [12] 1723 	mov	r0,a
      000264 33               [12] 1724 	rlc	a
      000265 95 E0            [12] 1725 	subb	a,acc
      000267 F9               [12] 1726 	mov	r1,a
      000268 EF               [12] 1727 	mov	a,r7
      000269 B5 00 06         [24] 1728 	cjne	a,ar0,00174$
      00026C EA               [12] 1729 	mov	a,r2
      00026D B5 01 02         [24] 1730 	cjne	a,ar1,00174$
      000270 80 08            [24] 1731 	sjmp	00123$
      000272                       1732 00174$:
      000272 90 00 01         [24] 1733 	mov	dptr,#_count
      000275 EB               [12] 1734 	mov	a,r3
      000276 F0               [24] 1735 	movx	@dptr,a
      000277 EC               [12] 1736 	mov	a,r4
      000278 A3               [24] 1737 	inc	dptr
      000279 F0               [24] 1738 	movx	@dptr,a
      00027A                       1739 00123$:
                           000218  1740 	C$part_01.c$108$2$36 ==.
                                   1741 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:108: for (i=0x2000;i<0x2800; i++)
      00027A 0B               [12] 1742 	inc	r3
      00027B BB 00 01         [24] 1743 	cjne	r3,#0x00,00175$
      00027E 0C               [12] 1744 	inc	r4
      00027F                       1745 00175$:
      00027F C3               [12] 1746 	clr	c
      000280 EC               [12] 1747 	mov	a,r4
      000281 64 80            [12] 1748 	xrl	a,#0x80
      000283 94 A8            [12] 1749 	subb	a,#0xa8
      000285 50 03            [24] 1750 	jnc	00176$
      000287 02 01 F0         [24] 1751 	ljmp	00122$
      00028A                       1752 00176$:
      00028A 02 04 1B         [24] 1753 	ljmp	00128$
      00028D                       1754 00120$:
                           00022B  1755 	C$part_01.c$117$1$35 ==.
                                   1756 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:117: else if(num ==0x32)
      00028D 74 32            [12] 1757 	mov	a,#0x32
      00028F B5 0A 02         [24] 1758 	cjne	a,_External_PARM_2,00177$
      000292 80 03            [24] 1759 	sjmp	00178$
      000294                       1760 00177$:
      000294 02 03 3A         [24] 1761 	ljmp	00117$
      000297                       1762 00178$:
                           000235  1763 	C$part_01.c$119$2$39 ==.
                                   1764 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:119: for (i=0x2800;i<0x3000; i++)
      000297 7D 00            [12] 1765 	mov	r5,#0x00
      000299 7E 28            [12] 1766 	mov	r6,#0x28
      00029B 8D 07            [24] 1767 	mov	ar7,r5
      00029D                       1768 00124$:
                           00023B  1769 	C$part_01.c$121$3$40 ==.
                                   1770 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:121: ext_ram = (__xdata unsigned char*)(i);
      00029D 8F 0C            [24] 1771 	mov	_External_ext_ram_1_35,r7
      00029F 8E 0D            [24] 1772 	mov	(_External_ext_ram_1_35 + 1),r6
                           00023F  1773 	C$part_01.c$122$3$40 ==.
                                   1774 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:122: *ext_ram = a;
      0002A1 85 0C 82         [24] 1775 	mov	dpl,_External_ext_ram_1_35
      0002A4 85 0D 83         [24] 1776 	mov	dph,(_External_ext_ram_1_35 + 1)
      0002A7 E5 0B            [12] 1777 	mov	a,_External_a_1_34
      0002A9 F0               [24] 1778 	movx	@dptr,a
                           000248  1779 	C$part_01.c$123$3$40 ==.
                                   1780 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:123: printf("\r\nData written to memory: 0x%X, %c ", *ext_ram, *ext_ram);
      0002AA 85 0C 82         [24] 1781 	mov	dpl,_External_ext_ram_1_35
      0002AD 85 0D 83         [24] 1782 	mov	dph,(_External_ext_ram_1_35 + 1)
      0002B0 E0               [24] 1783 	movx	a,@dptr
      0002B1 FD               [12] 1784 	mov	r5,a
      0002B2 7C 00            [12] 1785 	mov	r4,#0x00
      0002B4 85 0C 82         [24] 1786 	mov	dpl,_External_ext_ram_1_35
      0002B7 85 0D 83         [24] 1787 	mov	dph,(_External_ext_ram_1_35 + 1)
      0002BA E0               [24] 1788 	movx	a,@dptr
      0002BB FB               [12] 1789 	mov	r3,a
      0002BC 7A 00            [12] 1790 	mov	r2,#0x00
      0002BE C0 07            [24] 1791 	push	ar7
      0002C0 C0 06            [24] 1792 	push	ar6
      0002C2 C0 05            [24] 1793 	push	ar5
      0002C4 C0 04            [24] 1794 	push	ar4
      0002C6 C0 03            [24] 1795 	push	ar3
      0002C8 C0 02            [24] 1796 	push	ar2
      0002CA 74 B5            [12] 1797 	mov	a,#___str_9
      0002CC C0 E0            [24] 1798 	push	acc
      0002CE 74 0B            [12] 1799 	mov	a,#(___str_9 >> 8)
      0002D0 C0 E0            [24] 1800 	push	acc
      0002D2 74 80            [12] 1801 	mov	a,#0x80
      0002D4 C0 E0            [24] 1802 	push	acc
      0002D6 12 04 B9         [24] 1803 	lcall	_printf
      0002D9 E5 81            [12] 1804 	mov	a,sp
      0002DB 24 F9            [12] 1805 	add	a,#0xf9
      0002DD F5 81            [12] 1806 	mov	sp,a
      0002DF D0 06            [24] 1807 	pop	ar6
      0002E1 D0 07            [24] 1808 	pop	ar7
                           000281  1809 	C$part_01.c$124$3$40 ==.
                                   1810 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:124: printf("   Address: 0x%X\r\n",i);
      0002E3 C0 07            [24] 1811 	push	ar7
      0002E5 C0 06            [24] 1812 	push	ar6
      0002E7 C0 07            [24] 1813 	push	ar7
      0002E9 C0 06            [24] 1814 	push	ar6
      0002EB 74 8F            [12] 1815 	mov	a,#___str_7
      0002ED C0 E0            [24] 1816 	push	acc
      0002EF 74 0B            [12] 1817 	mov	a,#(___str_7 >> 8)
      0002F1 C0 E0            [24] 1818 	push	acc
      0002F3 74 80            [12] 1819 	mov	a,#0x80
      0002F5 C0 E0            [24] 1820 	push	acc
      0002F7 12 04 B9         [24] 1821 	lcall	_printf
      0002FA E5 81            [12] 1822 	mov	a,sp
      0002FC 24 FB            [12] 1823 	add	a,#0xfb
      0002FE F5 81            [12] 1824 	mov	sp,a
      000300 D0 06            [24] 1825 	pop	ar6
      000302 D0 07            [24] 1826 	pop	ar7
                           0002A2  1827 	C$part_01.c$125$3$40 ==.
                                   1828 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:125: if(*ext_ram != a){count[0] = i;}
      000304 85 0C 82         [24] 1829 	mov	dpl,_External_ext_ram_1_35
      000307 85 0D 83         [24] 1830 	mov	dph,(_External_ext_ram_1_35 + 1)
      00030A E0               [24] 1831 	movx	a,@dptr
      00030B FD               [12] 1832 	mov	r5,a
      00030C 7C 00            [12] 1833 	mov	r4,#0x00
      00030E E5 0B            [12] 1834 	mov	a,_External_a_1_34
      000310 FA               [12] 1835 	mov	r2,a
      000311 33               [12] 1836 	rlc	a
      000312 95 E0            [12] 1837 	subb	a,acc
      000314 FB               [12] 1838 	mov	r3,a
      000315 ED               [12] 1839 	mov	a,r5
      000316 B5 02 06         [24] 1840 	cjne	a,ar2,00179$
      000319 EC               [12] 1841 	mov	a,r4
      00031A B5 03 02         [24] 1842 	cjne	a,ar3,00179$
      00031D 80 08            [24] 1843 	sjmp	00125$
      00031F                       1844 00179$:
      00031F 90 00 01         [24] 1845 	mov	dptr,#_count
      000322 EF               [12] 1846 	mov	a,r7
      000323 F0               [24] 1847 	movx	@dptr,a
      000324 EE               [12] 1848 	mov	a,r6
      000325 A3               [24] 1849 	inc	dptr
      000326 F0               [24] 1850 	movx	@dptr,a
      000327                       1851 00125$:
                           0002C5  1852 	C$part_01.c$119$2$39 ==.
                                   1853 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:119: for (i=0x2800;i<0x3000; i++)
      000327 0F               [12] 1854 	inc	r7
      000328 BF 00 01         [24] 1855 	cjne	r7,#0x00,00180$
      00032B 0E               [12] 1856 	inc	r6
      00032C                       1857 00180$:
      00032C C3               [12] 1858 	clr	c
      00032D EE               [12] 1859 	mov	a,r6
      00032E 64 80            [12] 1860 	xrl	a,#0x80
      000330 94 B0            [12] 1861 	subb	a,#0xb0
      000332 50 03            [24] 1862 	jnc	00181$
      000334 02 02 9D         [24] 1863 	ljmp	00124$
      000337                       1864 00181$:
      000337 02 04 1B         [24] 1865 	ljmp	00128$
      00033A                       1866 00117$:
                           0002D8  1867 	C$part_01.c$128$1$35 ==.
                                   1868 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:128: else if (num == 0x33)
      00033A 74 33            [12] 1869 	mov	a,#0x33
      00033C B5 0A 02         [24] 1870 	cjne	a,_External_PARM_2,00182$
      00033F 80 03            [24] 1871 	sjmp	00183$
      000341                       1872 00182$:
      000341 02 04 06         [24] 1873 	ljmp	00114$
      000344                       1874 00183$:
                           0002E2  1875 	C$part_01.c$130$2$42 ==.
                                   1876 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:130: for (i=0x4000;i<0x4300; i++)
      000344 7E 00            [12] 1877 	mov	r6,#0x00
      000346 7F 40            [12] 1878 	mov	r7,#0x40
      000348                       1879 00126$:
                           0002E6  1880 	C$part_01.c$132$3$43 ==.
                                   1881 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:132: ext_ram = (__xdata unsigned char*)(i);
      000348 8E 0C            [24] 1882 	mov	_External_ext_ram_1_35,r6
      00034A 8F 0D            [24] 1883 	mov	(_External_ext_ram_1_35 + 1),r7
                           0002EA  1884 	C$part_01.c$133$3$43 ==.
                                   1885 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:133: *ext_ram = a;
      00034C 85 0C 82         [24] 1886 	mov	dpl,_External_ext_ram_1_35
      00034F 85 0D 83         [24] 1887 	mov	dph,(_External_ext_ram_1_35 + 1)
      000352 E5 0B            [12] 1888 	mov	a,_External_a_1_34
      000354 F0               [24] 1889 	movx	@dptr,a
                           0002F3  1890 	C$part_01.c$134$3$43 ==.
                                   1891 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:134: printf("\r\nData written: 0x%X ", *ext_ram);
      000355 85 0C 82         [24] 1892 	mov	dpl,_External_ext_ram_1_35
      000358 85 0D 83         [24] 1893 	mov	dph,(_External_ext_ram_1_35 + 1)
      00035B E0               [24] 1894 	movx	a,@dptr
      00035C FD               [12] 1895 	mov	r5,a
      00035D 7C 00            [12] 1896 	mov	r4,#0x00
      00035F C0 07            [24] 1897 	push	ar7
      000361 C0 06            [24] 1898 	push	ar6
      000363 C0 05            [24] 1899 	push	ar5
      000365 C0 04            [24] 1900 	push	ar4
      000367 74 D9            [12] 1901 	mov	a,#___str_10
      000369 C0 E0            [24] 1902 	push	acc
      00036B 74 0B            [12] 1903 	mov	a,#(___str_10 >> 8)
      00036D C0 E0            [24] 1904 	push	acc
      00036F 74 80            [12] 1905 	mov	a,#0x80
      000371 C0 E0            [24] 1906 	push	acc
      000373 12 04 B9         [24] 1907 	lcall	_printf
      000376 E5 81            [12] 1908 	mov	a,sp
      000378 24 FB            [12] 1909 	add	a,#0xfb
      00037A F5 81            [12] 1910 	mov	sp,a
      00037C D0 06            [24] 1911 	pop	ar6
      00037E D0 07            [24] 1912 	pop	ar7
                           00031E  1913 	C$part_01.c$135$3$43 ==.
                                   1914 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:135: printf("   Address: 0x%X",i);
      000380 C0 07            [24] 1915 	push	ar7
      000382 C0 06            [24] 1916 	push	ar6
      000384 C0 06            [24] 1917 	push	ar6
      000386 C0 07            [24] 1918 	push	ar7
      000388 74 EF            [12] 1919 	mov	a,#___str_11
      00038A C0 E0            [24] 1920 	push	acc
      00038C 74 0B            [12] 1921 	mov	a,#(___str_11 >> 8)
      00038E C0 E0            [24] 1922 	push	acc
      000390 74 80            [12] 1923 	mov	a,#0x80
      000392 C0 E0            [24] 1924 	push	acc
      000394 12 04 B9         [24] 1925 	lcall	_printf
      000397 E5 81            [12] 1926 	mov	a,sp
      000399 24 FB            [12] 1927 	add	a,#0xfb
      00039B F5 81            [12] 1928 	mov	sp,a
                           00033B  1929 	C$part_01.c$136$3$43 ==.
                                   1930 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:136: printf("   Data intended: 0x%X \n\r", a);
      00039D E5 0B            [12] 1931 	mov	a,_External_a_1_34
      00039F FC               [12] 1932 	mov	r4,a
      0003A0 33               [12] 1933 	rlc	a
      0003A1 95 E0            [12] 1934 	subb	a,acc
      0003A3 FD               [12] 1935 	mov	r5,a
      0003A4 C0 05            [24] 1936 	push	ar5
      0003A6 C0 04            [24] 1937 	push	ar4
      0003A8 C0 04            [24] 1938 	push	ar4
      0003AA C0 05            [24] 1939 	push	ar5
      0003AC 74 00            [12] 1940 	mov	a,#___str_12
      0003AE C0 E0            [24] 1941 	push	acc
      0003B0 74 0C            [12] 1942 	mov	a,#(___str_12 >> 8)
      0003B2 C0 E0            [24] 1943 	push	acc
      0003B4 74 80            [12] 1944 	mov	a,#0x80
      0003B6 C0 E0            [24] 1945 	push	acc
      0003B8 12 04 B9         [24] 1946 	lcall	_printf
      0003BB E5 81            [12] 1947 	mov	a,sp
      0003BD 24 FB            [12] 1948 	add	a,#0xfb
      0003BF F5 81            [12] 1949 	mov	sp,a
      0003C1 D0 04            [24] 1950 	pop	ar4
      0003C3 D0 05            [24] 1951 	pop	ar5
      0003C5 D0 06            [24] 1952 	pop	ar6
      0003C7 D0 07            [24] 1953 	pop	ar7
                           000367  1954 	C$part_01.c$137$3$43 ==.
                                   1955 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:137: if(*ext_ram != a){count[0] = i;}
      0003C9 85 0C 82         [24] 1956 	mov	dpl,_External_ext_ram_1_35
      0003CC 85 0D 83         [24] 1957 	mov	dph,(_External_ext_ram_1_35 + 1)
      0003CF E0               [24] 1958 	movx	a,@dptr
      0003D0 FB               [12] 1959 	mov	r3,a
      0003D1 7A 00            [12] 1960 	mov	r2,#0x00
      0003D3 B5 04 06         [24] 1961 	cjne	a,ar4,00184$
      0003D6 EA               [12] 1962 	mov	a,r2
      0003D7 B5 05 02         [24] 1963 	cjne	a,ar5,00184$
      0003DA 80 08            [24] 1964 	sjmp	00108$
      0003DC                       1965 00184$:
      0003DC 90 00 01         [24] 1966 	mov	dptr,#_count
      0003DF EE               [12] 1967 	mov	a,r6
      0003E0 F0               [24] 1968 	movx	@dptr,a
      0003E1 EF               [12] 1969 	mov	a,r7
      0003E2 A3               [24] 1970 	inc	dptr
      0003E3 F0               [24] 1971 	movx	@dptr,a
      0003E4                       1972 00108$:
                           000382  1973 	C$part_01.c$138$3$43 ==.
                                   1974 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:138: if(a < 0x0F){a++;}
      0003E4 C3               [12] 1975 	clr	c
      0003E5 E5 0B            [12] 1976 	mov	a,_External_a_1_34
      0003E7 64 80            [12] 1977 	xrl	a,#0x80
      0003E9 94 8F            [12] 1978 	subb	a,#0x8f
      0003EB 50 04            [24] 1979 	jnc	00110$
      0003ED 05 0B            [12] 1980 	inc	_External_a_1_34
      0003EF 80 03            [24] 1981 	sjmp	00127$
      0003F1                       1982 00110$:
                           00038F  1983 	C$part_01.c$139$4$46 ==.
                                   1984 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:139: else{a = 0x00;}
      0003F1 75 0B 00         [24] 1985 	mov	_External_a_1_34,#0x00
      0003F4                       1986 00127$:
                           000392  1987 	C$part_01.c$130$2$42 ==.
                                   1988 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:130: for (i=0x4000;i<0x4300; i++)
      0003F4 0E               [12] 1989 	inc	r6
      0003F5 BE 00 01         [24] 1990 	cjne	r6,#0x00,00186$
      0003F8 0F               [12] 1991 	inc	r7
      0003F9                       1992 00186$:
      0003F9 C3               [12] 1993 	clr	c
      0003FA EF               [12] 1994 	mov	a,r7
      0003FB 64 80            [12] 1995 	xrl	a,#0x80
      0003FD 94 C3            [12] 1996 	subb	a,#0xc3
      0003FF 50 03            [24] 1997 	jnc	00187$
      000401 02 03 48         [24] 1998 	ljmp	00126$
      000404                       1999 00187$:
      000404 80 15            [24] 2000 	sjmp	00128$
      000406                       2001 00114$:
                           0003A4  2002 	C$part_01.c$142$2$47 ==.
                                   2003 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:142: else{printf("\n\r That external memory location does not exits ");}
      000406 74 1A            [12] 2004 	mov	a,#___str_13
      000408 C0 E0            [24] 2005 	push	acc
      00040A 74 0C            [12] 2006 	mov	a,#(___str_13 >> 8)
      00040C C0 E0            [24] 2007 	push	acc
      00040E 74 80            [12] 2008 	mov	a,#0x80
      000410 C0 E0            [24] 2009 	push	acc
      000412 12 04 B9         [24] 2010 	lcall	_printf
      000415 15 81            [12] 2011 	dec	sp
      000417 15 81            [12] 2012 	dec	sp
      000419 15 81            [12] 2013 	dec	sp
      00041B                       2014 00128$:
                           0003B9  2015 	C$part_01.c$143$1$35 ==.
                           0003B9  2016 	XG$External$0$0 ==.
      00041B 22               [24] 2017 	ret
                                   2018 ;------------------------------------------------------------
                                   2019 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   2020 ;------------------------------------------------------------
                                   2021 ;i                         Allocated to registers 
                                   2022 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   2023 ;------------------------------------------------------------
                           0003BA  2024 	G$SYSCLK_INIT$0$0 ==.
                           0003BA  2025 	C$part_01.c$150$1$35 ==.
                                   2026 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:150: void SYSCLK_INIT(void)
                                   2027 ;	-----------------------------------------
                                   2028 ;	 function SYSCLK_INIT
                                   2029 ;	-----------------------------------------
      00041C                       2030 _SYSCLK_INIT:
                           0003BA  2031 	C$part_01.c$155$1$49 ==.
                                   2032 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:155: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page SFRPAGE = CONFIG_PAGE;
      00041C AF 84            [24] 2033 	mov	r7,_SFRPAGE
                           0003BC  2034 	C$part_01.c$156$1$49 ==.
                                   2035 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:156: SFRPAGE = CONFIG_PAGE;
      00041E 75 84 0F         [24] 2036 	mov	_SFRPAGE,#0x0F
                           0003BF  2037 	C$part_01.c$158$1$49 ==.
                                   2038 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:158: OSCXCN = 0x67;              // Start ext osc with 22.1184MHz crystal
      000421 75 8C 67         [24] 2039 	mov	_OSCXCN,#0x67
                           0003C2  2040 	C$part_01.c$159$1$49 ==.
                                   2041 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:159: for(i=0; i < 3000; i++);    // Wait for the oscillator to start up
      000424 7D B8            [12] 2042 	mov	r5,#0xB8
      000426 7E 0B            [12] 2043 	mov	r6,#0x0B
      000428                       2044 00107$:
      000428 1D               [12] 2045 	dec	r5
      000429 BD FF 01         [24] 2046 	cjne	r5,#0xFF,00121$
      00042C 1E               [12] 2047 	dec	r6
      00042D                       2048 00121$:
      00042D ED               [12] 2049 	mov	a,r5
      00042E 4E               [12] 2050 	orl	a,r6
      00042F 70 F7            [24] 2051 	jnz	00107$
                           0003CF  2052 	C$part_01.c$160$1$49 ==.
                                   2053 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:160: while(!(OSCXCN & 0x80));
      000431                       2054 00102$:
      000431 E5 8C            [12] 2055 	mov	a,_OSCXCN
      000433 30 E7 FB         [24] 2056 	jnb	acc.7,00102$
                           0003D4  2057 	C$part_01.c$161$1$49 ==.
                                   2058 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:161: CLKSEL = 0x01;              // Switch to the external crystal oscillator
      000436 75 97 01         [24] 2059 	mov	_CLKSEL,#0x01
                           0003D7  2060 	C$part_01.c$162$1$49 ==.
                                   2061 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:162: OSCICN = 0x00	;              // Disable the internal oscillator
      000439 75 8A 00         [24] 2062 	mov	_OSCICN,#0x00
                           0003DA  2063 	C$part_01.c$164$1$49 ==.
                                   2064 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:164: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
      00043C 8F 84            [24] 2065 	mov	_SFRPAGE,r7
                           0003DC  2066 	C$part_01.c$165$1$49 ==.
                           0003DC  2067 	XG$SYSCLK_INIT$0$0 ==.
      00043E 22               [24] 2068 	ret
                                   2069 ;------------------------------------------------------------
                                   2070 ;Allocation info for local variables in function 'PORT_INIT'
                                   2071 ;------------------------------------------------------------
                                   2072 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   2073 ;------------------------------------------------------------
                           0003DD  2074 	G$PORT_INIT$0$0 ==.
                           0003DD  2075 	C$part_01.c$173$1$49 ==.
                                   2076 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:173: void PORT_INIT(void)
                                   2077 ;	-----------------------------------------
                                   2078 ;	 function PORT_INIT
                                   2079 ;	-----------------------------------------
      00043F                       2080 _PORT_INIT:
                           0003DD  2081 	C$part_01.c$175$1$49 ==.
                                   2082 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:175: char SFRPAGE_SAVE = SFRPAGE;    // Save Current SFR page
      00043F AF 84            [24] 2083 	mov	r7,_SFRPAGE
                           0003DF  2084 	C$part_01.c$176$1$51 ==.
                                   2085 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:176: SFRPAGE = CONFIG_PAGE;
      000441 75 84 0F         [24] 2086 	mov	_SFRPAGE,#0x0F
                           0003E2  2087 	C$part_01.c$178$1$51 ==.
                                   2088 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:178: XBR0 = 0x04;        // Enable UART0
      000444 75 E1 04         [24] 2089 	mov	_XBR0,#0x04
                           0003E5  2090 	C$part_01.c$179$1$51 ==.
                                   2091 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:179: XBR1 = 0x00;
      000447 75 E2 00         [24] 2092 	mov	_XBR1,#0x00
                           0003E8  2093 	C$part_01.c$180$1$51 ==.
                                   2094 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:180: XBR2 = 0x40;        // Enable Crossbar and weak pull-up
      00044A 75 E3 40         [24] 2095 	mov	_XBR2,#0x40
                           0003EB  2096 	C$part_01.c$182$1$51 ==.
                                   2097 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:182: P0MDOUT |= 0x01;    // Set TX0 pin to push-pull
      00044D 43 A4 01         [24] 2098 	orl	_P0MDOUT,#0x01
                           0003EE  2099 	C$part_01.c$183$1$51 ==.
                                   2100 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:183: P4MDOUT = 0xFF;     // Output configuration for P4 all pushpull
      000450 75 9C FF         [24] 2101 	mov	_P4MDOUT,#0xFF
                           0003F1  2102 	C$part_01.c$184$1$51 ==.
                                   2103 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:184: P5MDOUT = 0xFF;     // Output configuration for P5 pushpull EM addr
      000453 75 9D FF         [24] 2104 	mov	_P5MDOUT,#0xFF
                           0003F4  2105 	C$part_01.c$185$1$51 ==.
                                   2106 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:185: P6MDOUT = 0xFF;     // Output configuration for P6 pushpull EM addr
      000456 75 9E FF         [24] 2107 	mov	_P6MDOUT,#0xFF
                           0003F7  2108 	C$part_01.c$186$1$51 ==.
                                   2109 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:186: P7MDOUT = 0xFF;     // Output configuration for P7 pushpull EM data
      000459 75 9F FF         [24] 2110 	mov	_P7MDOUT,#0xFF
                           0003FA  2111 	C$part_01.c$188$1$51 ==.
                                   2112 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:188: P5 = 0xFF;
      00045C 75 D8 FF         [24] 2113 	mov	_P5,#0xFF
                           0003FD  2114 	C$part_01.c$189$1$51 ==.
                                   2115 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:189: P6 = 0xFF;
      00045F 75 E8 FF         [24] 2116 	mov	_P6,#0xFF
                           000400  2117 	C$part_01.c$190$1$51 ==.
                                   2118 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:190: P7 = 0xFF;
      000462 75 F8 FF         [24] 2119 	mov	_P7,#0xFF
                           000403  2120 	C$part_01.c$194$1$51 ==.
                                   2121 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:194: SFRPAGE = EMI0_PAGE;
      000465 75 84 00         [24] 2122 	mov	_SFRPAGE,#0x00
                           000406  2123 	C$part_01.c$195$1$51 ==.
                                   2124 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:195: EMI0CF = 0x3b;              //34
      000468 75 A3 3B         [24] 2125 	mov	_EMI0CF,#0x3B
                           000409  2126 	C$part_01.c$196$1$51 ==.
                                   2127 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:196: EMI0TC = 0xFF;
      00046B 75 A1 FF         [24] 2128 	mov	_EMI0TC,#0xFF
                           00040C  2129 	C$part_01.c$198$1$51 ==.
                                   2130 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:198: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
      00046E 8F 84            [24] 2131 	mov	_SFRPAGE,r7
                           00040E  2132 	C$part_01.c$199$1$51 ==.
                           00040E  2133 	XG$PORT_INIT$0$0 ==.
      000470 22               [24] 2134 	ret
                                   2135 ;------------------------------------------------------------
                                   2136 ;Allocation info for local variables in function 'UART0_INIT'
                                   2137 ;------------------------------------------------------------
                                   2138 ;SFRPAGE_SAVE              Allocated to registers r7 
                                   2139 ;------------------------------------------------------------
                           00040F  2140 	G$UART0_INIT$0$0 ==.
                           00040F  2141 	C$part_01.c$207$1$51 ==.
                                   2142 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:207: void UART0_INIT(void)
                                   2143 ;	-----------------------------------------
                                   2144 ;	 function UART0_INIT
                                   2145 ;	-----------------------------------------
      000471                       2146 _UART0_INIT:
                           00040F  2147 	C$part_01.c$211$1$53 ==.
                                   2148 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:211: SFRPAGE_SAVE = SFRPAGE;     // Save Current SFR page
      000471 AF 84            [24] 2149 	mov	r7,_SFRPAGE
                           000411  2150 	C$part_01.c$212$1$53 ==.
                                   2151 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:212: SFRPAGE = TIMER01_PAGE;
      000473 75 84 00         [24] 2152 	mov	_SFRPAGE,#0x00
                           000414  2153 	C$part_01.c$214$1$53 ==.
                                   2154 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:214: TCON = 0x40;
      000476 75 88 40         [24] 2155 	mov	_TCON,#0x40
                           000417  2156 	C$part_01.c$215$1$53 ==.
                                   2157 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:215: TMOD &= 0x0F;
      000479 53 89 0F         [24] 2158 	anl	_TMOD,#0x0F
                           00041A  2159 	C$part_01.c$216$1$53 ==.
                                   2160 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:216: TMOD |= 0x20;               // Timer1, Mode 2, 8-bit reload
      00047C 43 89 20         [24] 2161 	orl	_TMOD,#0x20
                           00041D  2162 	C$part_01.c$217$1$53 ==.
                                   2163 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:217: CKCON |= 0x10;              // Timer1 uses SYSCLK as time base
      00047F 43 8E 10         [24] 2164 	orl	_CKCON,#0x10
                           000420  2165 	C$part_01.c$219$1$53 ==.
                                   2166 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:219: TH1 = 0xE8;                 // 0xE8 = 232
      000482 75 8D E8         [24] 2167 	mov	_TH1,#0xE8
                           000423  2168 	C$part_01.c$220$1$53 ==.
                                   2169 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:220: TR1 = 1;                    // Start Timer1
      000485 D2 8E            [12] 2170 	setb	_TR1
                           000425  2171 	C$part_01.c$222$1$53 ==.
                                   2172 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:222: SFRPAGE = UART0_PAGE;
      000487 75 84 00         [24] 2173 	mov	_SFRPAGE,#0x00
                           000428  2174 	C$part_01.c$223$1$53 ==.
                                   2175 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:223: SCON0 = 0x50;               // Mode 1, 8-bit UART, enable RX
      00048A 75 98 50         [24] 2176 	mov	_SCON0,#0x50
                           00042B  2177 	C$part_01.c$224$1$53 ==.
                                   2178 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:224: SSTA0 = 0x00;               // SMOD0 = 0, in this mode
      00048D 75 91 00         [24] 2179 	mov	_SSTA0,#0x00
                           00042E  2180 	C$part_01.c$227$1$53 ==.
                                   2181 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:227: TI0 = 1;                    // Indicate TX0 ready
      000490 D2 99            [12] 2182 	setb	_TI0
                           000430  2183 	C$part_01.c$229$1$53 ==.
                                   2184 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_05\part_01.c:229: SFRPAGE = SFRPAGE_SAVE;     // Restore SFR page
      000492 8F 84            [24] 2185 	mov	_SFRPAGE,r7
                           000432  2186 	C$part_01.c$230$1$53 ==.
                           000432  2187 	XG$UART0_INIT$0$0 ==.
      000494 22               [24] 2188 	ret
                                   2189 	.area CSEG    (CODE)
                                   2190 	.area CONST   (CODE)
                           000000  2191 Fpart_01$__str_0$0$0 == .
      000AC9                       2192 ___str_0:
      000AC9 1B                    2193 	.db 0x1B
      000ACA 5B 32 4A              2194 	.ascii "[2J"
      000ACD 00                    2195 	.db 0x00
                           000005  2196 Fpart_01$__str_1$0$0 == .
      000ACE                       2197 ___str_1:
      000ACE 4D 50 53 20 4C 61 62  2198 	.ascii "MPS Lab 5 - Memory"
             20 35 20 2D 20 4D 65
             6D 6F 72 79
      000AE0 0A                    2199 	.db 0x0A
      000AE1 0A                    2200 	.db 0x0A
      000AE2 0D                    2201 	.db 0x0D
      000AE3 00                    2202 	.db 0x00
                           00001B  2203 Fpart_01$__str_2$0$0 == .
      000AE4                       2204 ___str_2:
      000AE4 0A                    2205 	.db 0x0A
      000AE5 0D                    2206 	.db 0x0D
      000AE6 57 6F 75 6C 64 20 79  2207 	.ascii "Would you like to talk to external memory 1 or 2?"
             6F 75 20 6C 69 6B 65
             20 74 6F 20 74 61 6C
             6B 20 74 6F 20 65 78
             74 65 72 6E 61 6C 20
             6D 65 6D 6F 72 79 20
             31 20 6F 72 20 32 3F
      000B17 00                    2208 	.db 0x00
                           00004F  2209 Fpart_01$__str_3$0$0 == .
      000B18                       2210 ___str_3:
      000B18 0A                    2211 	.db 0x0A
      000B19 0D                    2212 	.db 0x0D
      000B1A 57 68 61 74 20 76 61  2213 	.ascii "What value would you like to write? %x"
             6C 75 65 20 77 6F 75
             6C 64 20 79 6F 75 20
             6C 69 6B 65 20 74 6F
             20 77 72 69 74 65 3F
             20 25 78
      000B40 00                    2214 	.db 0x00
                           000078  2215 Fpart_01$__str_4$0$0 == .
      000B41                       2216 ___str_4:
      000B41 0A                    2217 	.db 0x0A
      000B42 0D                    2218 	.db 0x0D
      000B43 20 45 72 72 6F 72 73  2219 	.ascii " Errors Occured at... %d"
             20 4F 63 63 75 72 65
             64 20 61 74 2E 2E 2E
             20 25 64
      000B5B 00                    2220 	.db 0x00
                           000093  2221 Fpart_01$__str_5$0$0 == .
      000B5C                       2222 ___str_5:
      000B5C 4F 6E 20 42 6F 61 72  2223 	.ascii "On Board Data"
             64 20 44 61 74 61
      000B69 0A                    2224 	.db 0x0A
      000B6A 0D                    2225 	.db 0x0D
      000B6B 00                    2226 	.db 0x00
                           0000A3  2227 Fpart_01$__str_6$0$0 == .
      000B6C                       2228 ___str_6:
      000B6C 0D                    2229 	.db 0x0D
      000B6D 0A                    2230 	.db 0x0A
      000B6E 44 61 74 61 20 73 74  2231 	.ascii "Data stored in memory: 0x%X, %c "
             6F 72 65 64 20 69 6E
             20 6D 65 6D 6F 72 79
             3A 20 30 78 25 58 2C
             20 25 63 20
      000B8E 00                    2232 	.db 0x00
                           0000C6  2233 Fpart_01$__str_7$0$0 == .
      000B8F                       2234 ___str_7:
      000B8F 20 20 20 41 64 64 72  2235 	.ascii "   Address: 0x%X"
             65 73 73 3A 20 30 78
             25 58
      000B9F 0D                    2236 	.db 0x0D
      000BA0 0A                    2237 	.db 0x0A
      000BA1 00                    2238 	.db 0x00
                           0000D9  2239 Fpart_01$__str_8$0$0 == .
      000BA2                       2240 ___str_8:
      000BA2 0A                    2241 	.db 0x0A
      000BA3 0D                    2242 	.db 0x0D
      000BA4 4F 66 66 20 42 6F 61  2243 	.ascii "Off Board Data"
             72 64 20 44 61 74 61
      000BB2 0A                    2244 	.db 0x0A
      000BB3 0D                    2245 	.db 0x0D
      000BB4 00                    2246 	.db 0x00
                           0000EC  2247 Fpart_01$__str_9$0$0 == .
      000BB5                       2248 ___str_9:
      000BB5 0D                    2249 	.db 0x0D
      000BB6 0A                    2250 	.db 0x0A
      000BB7 44 61 74 61 20 77 72  2251 	.ascii "Data written to memory: 0x%X, %c "
             69 74 74 65 6E 20 74
             6F 20 6D 65 6D 6F 72
             79 3A 20 30 78 25 58
             2C 20 25 63 20
      000BD8 00                    2252 	.db 0x00
                           000110  2253 Fpart_01$__str_10$0$0 == .
      000BD9                       2254 ___str_10:
      000BD9 0D                    2255 	.db 0x0D
      000BDA 0A                    2256 	.db 0x0A
      000BDB 44 61 74 61 20 77 72  2257 	.ascii "Data written: 0x%X "
             69 74 74 65 6E 3A 20
             30 78 25 58 20
      000BEE 00                    2258 	.db 0x00
                           000126  2259 Fpart_01$__str_11$0$0 == .
      000BEF                       2260 ___str_11:
      000BEF 20 20 20 41 64 64 72  2261 	.ascii "   Address: 0x%X"
             65 73 73 3A 20 30 78
             25 58
      000BFF 00                    2262 	.db 0x00
                           000137  2263 Fpart_01$__str_12$0$0 == .
      000C00                       2264 ___str_12:
      000C00 20 20 20 44 61 74 61  2265 	.ascii "   Data intended: 0x%X "
             20 69 6E 74 65 6E 64
             65 64 3A 20 30 78 25
             58 20
      000C17 0A                    2266 	.db 0x0A
      000C18 0D                    2267 	.db 0x0D
      000C19 00                    2268 	.db 0x00
                           000151  2269 Fpart_01$__str_13$0$0 == .
      000C1A                       2270 ___str_13:
      000C1A 0A                    2271 	.db 0x0A
      000C1B 0D                    2272 	.db 0x0D
      000C1C 20 54 68 61 74 20 65  2273 	.ascii " That external memory location does not exits "
             78 74 65 72 6E 61 6C
             20 6D 65 6D 6F 72 79
             20 6C 6F 63 61 74 69
             6F 6E 20 64 6F 65 73
             20 6E 6F 74 20 65 78
             69 74 73 20
      000C4A 00                    2274 	.db 0x00
                                   2275 	.area XINIT   (CODE)
                                   2276 	.area CABS    (ABS,CODE)
