                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Oct 03 20:00:36 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module SPI0
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
                                    396 	.globl _alien_ct
                                    397 	.globl _local_ct
                                    398 	.globl _putchar
                                    399 	.globl _getchar
                                    400 	.globl _main
                                    401 	.globl _local
                                    402 	.globl _foreign
                                    403 	.globl _read
                                    404 	.globl _write
                                    405 	.globl _SYSCLK_INIT
                                    406 	.globl _Timer_Init
                                    407 	.globl _UART_Init
                                    408 	.globl _Port_IO_Init
                                    409 	.globl _SPI0_INIT
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
                           000000  1195 G$local_ct$0$0==.
      000008                       1196 _local_ct::
      000008                       1197 	.ds 2
                           000002  1198 G$alien_ct$0$0==.
      00000A                       1199 _alien_ct::
      00000A                       1200 	.ds 2
                                   1201 ;--------------------------------------------------------
                                   1202 ; overlayable items in internal ram 
                                   1203 ;--------------------------------------------------------
                                   1204 	.area	OSEG    (OVR,DATA)
                                   1205 	.area	OSEG    (OVR,DATA)
                                   1206 	.area	OSEG    (OVR,DATA)
                                   1207 	.area	OSEG    (OVR,DATA)
                                   1208 	.area	OSEG    (OVR,DATA)
                                   1209 ;--------------------------------------------------------
                                   1210 ; Stack segment in internal ram 
                                   1211 ;--------------------------------------------------------
                                   1212 	.area	SSEG
      00003C                       1213 __start__stack:
      00003C                       1214 	.ds	1
                                   1215 
                                   1216 ;--------------------------------------------------------
                                   1217 ; indirectly addressable internal ram data
                                   1218 ;--------------------------------------------------------
                                   1219 	.area ISEG    (DATA)
                                   1220 ;--------------------------------------------------------
                                   1221 ; absolute internal ram data
                                   1222 ;--------------------------------------------------------
                                   1223 	.area IABS    (ABS,DATA)
                                   1224 	.area IABS    (ABS,DATA)
                                   1225 ;--------------------------------------------------------
                                   1226 ; bit data
                                   1227 ;--------------------------------------------------------
                                   1228 	.area BSEG    (BIT)
                                   1229 ;--------------------------------------------------------
                                   1230 ; paged external ram data
                                   1231 ;--------------------------------------------------------
                                   1232 	.area PSEG    (PAG,XDATA)
                                   1233 ;--------------------------------------------------------
                                   1234 ; external ram data
                                   1235 ;--------------------------------------------------------
                                   1236 	.area XSEG    (XDATA)
                                   1237 ;--------------------------------------------------------
                                   1238 ; absolute external ram data
                                   1239 ;--------------------------------------------------------
                                   1240 	.area XABS    (ABS,XDATA)
                                   1241 ;--------------------------------------------------------
                                   1242 ; external initialized ram data
                                   1243 ;--------------------------------------------------------
                                   1244 	.area XISEG   (XDATA)
                                   1245 	.area HOME    (CODE)
                                   1246 	.area GSINIT0 (CODE)
                                   1247 	.area GSINIT1 (CODE)
                                   1248 	.area GSINIT2 (CODE)
                                   1249 	.area GSINIT3 (CODE)
                                   1250 	.area GSINIT4 (CODE)
                                   1251 	.area GSINIT5 (CODE)
                                   1252 	.area GSINIT  (CODE)
                                   1253 	.area GSFINAL (CODE)
                                   1254 	.area CSEG    (CODE)
                                   1255 ;--------------------------------------------------------
                                   1256 ; interrupt vector 
                                   1257 ;--------------------------------------------------------
                                   1258 	.area HOME    (CODE)
      000000                       1259 __interrupt_vect:
      000000 02 00 06         [24] 1260 	ljmp	__sdcc_gsinit_startup
                                   1261 ;--------------------------------------------------------
                                   1262 ; global & static initialisations
                                   1263 ;--------------------------------------------------------
                                   1264 	.area HOME    (CODE)
                                   1265 	.area GSINIT  (CODE)
                                   1266 	.area GSFINAL (CODE)
                                   1267 	.area GSINIT  (CODE)
                                   1268 	.globl __sdcc_gsinit_startup
                                   1269 	.globl __sdcc_program_startup
                                   1270 	.globl __start__stack
                                   1271 	.globl __mcs51_genXINIT
                                   1272 	.globl __mcs51_genXRAMCLEAR
                                   1273 	.globl __mcs51_genRAMCLEAR
                           000000  1274 	C$SPI0.c$34$1$49 ==.
                                   1275 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:34: int local_ct = 1;
      00005F 75 08 01         [24] 1276 	mov	_local_ct,#0x01
      000062 75 09 00         [24] 1277 	mov	(_local_ct + 1),#0x00
                           000006  1278 	C$SPI0.c$35$1$49 ==.
                                   1279 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:35: int alien_ct = 14;
      000065 75 0A 0E         [24] 1280 	mov	_alien_ct,#0x0E
      000068 75 0B 00         [24] 1281 	mov	(_alien_ct + 1),#0x00
                                   1282 	.area GSFINAL (CODE)
      00006B 02 00 03         [24] 1283 	ljmp	__sdcc_program_startup
                                   1284 ;--------------------------------------------------------
                                   1285 ; Home
                                   1286 ;--------------------------------------------------------
                                   1287 	.area HOME    (CODE)
                                   1288 	.area HOME    (CODE)
      000003                       1289 __sdcc_program_startup:
      000003 02 00 83         [24] 1290 	ljmp	_main
                                   1291 ;	return from main will return to caller
                                   1292 ;--------------------------------------------------------
                                   1293 ; code
                                   1294 ;--------------------------------------------------------
                                   1295 	.area CSEG    (CODE)
                                   1296 ;------------------------------------------------------------
                                   1297 ;Allocation info for local variables in function 'putchar'
                                   1298 ;------------------------------------------------------------
                                   1299 ;c                         Allocated to registers r7 
                                   1300 ;------------------------------------------------------------
                           000000  1301 	G$putchar$0$0 ==.
                           000000  1302 	C$putget.h$18$0$0 ==.
                                   1303 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:18: void putchar(char c)
                                   1304 ;	-----------------------------------------
                                   1305 ;	 function putchar
                                   1306 ;	-----------------------------------------
      00006E                       1307 _putchar:
                           000007  1308 	ar7 = 0x07
                           000006  1309 	ar6 = 0x06
                           000005  1310 	ar5 = 0x05
                           000004  1311 	ar4 = 0x04
                           000003  1312 	ar3 = 0x03
                           000002  1313 	ar2 = 0x02
                           000001  1314 	ar1 = 0x01
                           000000  1315 	ar0 = 0x00
      00006E AF 82            [24] 1316 	mov	r7,dpl
                           000002  1317 	C$putget.h$20$1$16 ==.
                                   1318 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:20: while(!TI0); 
      000070                       1319 00101$:
                           000002  1320 	C$putget.h$21$1$16 ==.
                                   1321 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:21: TI0=0;
      000070 10 99 02         [24] 1322 	jbc	_TI0,00112$
      000073 80 FB            [24] 1323 	sjmp	00101$
      000075                       1324 00112$:
                           000007  1325 	C$putget.h$22$1$16 ==.
                                   1326 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:22: SBUF0 = c;
      000075 8F 99            [24] 1327 	mov	_SBUF0,r7
                           000009  1328 	C$putget.h$23$1$16 ==.
                           000009  1329 	XG$putchar$0$0 ==.
      000077 22               [24] 1330 	ret
                                   1331 ;------------------------------------------------------------
                                   1332 ;Allocation info for local variables in function 'getchar'
                                   1333 ;------------------------------------------------------------
                                   1334 ;c                         Allocated to registers 
                                   1335 ;------------------------------------------------------------
                           00000A  1336 	G$getchar$0$0 ==.
                           00000A  1337 	C$putget.h$28$1$16 ==.
                                   1338 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:28: char getchar(void)
                                   1339 ;	-----------------------------------------
                                   1340 ;	 function getchar
                                   1341 ;	-----------------------------------------
      000078                       1342 _getchar:
                           00000A  1343 	C$putget.h$31$1$18 ==.
                                   1344 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:31: while(!RI0);
      000078                       1345 00101$:
                           00000A  1346 	C$putget.h$32$1$18 ==.
                                   1347 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:32: RI0 =0;
      000078 10 98 02         [24] 1348 	jbc	_RI0,00112$
      00007B 80 FB            [24] 1349 	sjmp	00101$
      00007D                       1350 00112$:
                           00000F  1351 	C$putget.h$33$1$18 ==.
                                   1352 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:33: c = SBUF0;
      00007D E5 99            [12] 1353 	mov	a,_SBUF0
                           000011  1354 	C$putget.h$36$1$18 ==.
                                   1355 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0/putget.h:36: return SBUF0;
      00007F 85 99 82         [24] 1356 	mov	dpl,_SBUF0
                           000014  1357 	C$putget.h$37$1$18 ==.
                           000014  1358 	XG$getchar$0$0 ==.
      000082 22               [24] 1359 	ret
                                   1360 ;------------------------------------------------------------
                                   1361 ;Allocation info for local variables in function 'main'
                                   1362 ;------------------------------------------------------------
                                   1363 ;c                         Allocated to registers r7 
                                   1364 ;i                         Allocated to registers 
                                   1365 ;------------------------------------------------------------
                           000015  1366 	G$main$0$0 ==.
                           000015  1367 	C$SPI0.c$37$1$18 ==.
                                   1368 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:37: void main (void)
                                   1369 ;	-----------------------------------------
                                   1370 ;	 function main
                                   1371 ;	-----------------------------------------
      000083                       1372 _main:
                           000015  1373 	C$SPI0.c$42$1$30 ==.
                                   1374 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:42: SFRPAGE = CONFIG_PAGE;
      000083 75 84 0F         [24] 1375 	mov	_SFRPAGE,#0x0F
                           000018  1376 	C$SPI0.c$43$1$30 ==.
                                   1377 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:43: SYSCLK_INIT();
      000086 12 02 1B         [24] 1378 	lcall	_SYSCLK_INIT
                           00001B  1379 	C$SPI0.c$44$1$30 ==.
                                   1380 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:44: Port_IO_Init();
      000089 12 02 7A         [24] 1381 	lcall	_Port_IO_Init
                           00001E  1382 	C$SPI0.c$45$1$30 ==.
                                   1383 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:45: Timer_Init();
      00008C 12 02 3A         [24] 1384 	lcall	_Timer_Init
                           000021  1385 	C$SPI0.c$46$1$30 ==.
                                   1386 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:46: UART_Init();
      00008F 12 02 62         [24] 1387 	lcall	_UART_Init
                           000024  1388 	C$SPI0.c$47$1$30 ==.
                                   1389 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:47: SPI0_INIT();
      000092 12 02 92         [24] 1390 	lcall	_SPI0_INIT
                           000027  1391 	C$SPI0.c$49$1$30 ==.
                                   1392 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:49: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
      000095 75 84 00         [24] 1393 	mov	_SFRPAGE,#0x00
                           00002A  1394 	C$SPI0.c$50$1$30 ==.
                                   1395 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:50: printf("\033[2J");
      000098 74 D9            [12] 1396 	mov	a,#___str_0
      00009A C0 E0            [24] 1397 	push	acc
      00009C 74 08            [12] 1398 	mov	a,#(___str_0 >> 8)
      00009E C0 E0            [24] 1399 	push	acc
      0000A0 74 80            [12] 1400 	mov	a,#0x80
      0000A2 C0 E0            [24] 1401 	push	acc
      0000A4 12 02 C5         [24] 1402 	lcall	_printf
      0000A7 15 81            [12] 1403 	dec	sp
      0000A9 15 81            [12] 1404 	dec	sp
      0000AB 15 81            [12] 1405 	dec	sp
                           00003F  1406 	C$SPI0.c$52$1$30 ==.
                                   1407 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:52: while(1)
      0000AD                       1408 00105$:
                           00003F  1409 	C$SPI0.c$55$2$31 ==.
                                   1410 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:55: if(RI0)
                           00003F  1411 	C$SPI0.c$57$3$32 ==.
                                   1412 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:57: RI0 = 0;
      0000AD 10 98 02         [24] 1413 	jbc	_RI0,00125$
      0000B0 80 FB            [24] 1414 	sjmp	00105$
      0000B2                       1415 00125$:
                           000044  1416 	C$SPI0.c$58$3$32 ==.
                                   1417 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:58: c = SBUF0;
      0000B2 AF 99            [24] 1418 	mov	r7,_SBUF0
                           000046  1419 	C$SPI0.c$59$3$32 ==.
                                   1420 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:59: local(c);
      0000B4 8F 82            [24] 1421 	mov	dpl,r7
      0000B6 C0 07            [24] 1422 	push	ar7
      0000B8 12 00 E4         [24] 1423 	lcall	_local
      0000BB D0 07            [24] 1424 	pop	ar7
                           00004F  1425 	C$SPI0.c$60$3$32 ==.
                                   1426 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:60: write(c);
      0000BD 8F 82            [24] 1427 	mov	dpl,r7
      0000BF 12 01 F6         [24] 1428 	lcall	_write
                           000054  1429 	C$SPI0.c$61$3$32 ==.
                                   1430 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:61: SFRPAGE = UART0_PAGE;
      0000C2 75 84 00         [24] 1431 	mov	_SFRPAGE,#0x00
                           000057  1432 	C$SPI0.c$62$3$32 ==.
                                   1433 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:62: for (i=0;i<101;i++);
      0000C5 7D 65            [12] 1434 	mov	r5,#0x65
      0000C7 7E 00            [12] 1435 	mov	r6,#0x00
      0000C9                       1436 00109$:
      0000C9 1D               [12] 1437 	dec	r5
      0000CA BD FF 01         [24] 1438 	cjne	r5,#0xFF,00126$
      0000CD 1E               [12] 1439 	dec	r6
      0000CE                       1440 00126$:
      0000CE ED               [12] 1441 	mov	a,r5
      0000CF 4E               [12] 1442 	orl	a,r6
      0000D0 70 F7            [24] 1443 	jnz	00109$
                           000064  1444 	C$SPI0.c$63$3$32 ==.
                                   1445 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:63: c = read();
      0000D2 12 01 DD         [24] 1446 	lcall	_read
      0000D5 AF 82            [24] 1447 	mov	r7,dpl
                           000069  1448 	C$SPI0.c$64$3$32 ==.
                                   1449 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:64: SPIF =0;
      0000D7 C2 FF            [12] 1450 	clr	_SPIF
                           00006B  1451 	C$SPI0.c$65$3$32 ==.
                                   1452 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:65: SFRPAGE = UART0_PAGE;
      0000D9 75 84 00         [24] 1453 	mov	_SFRPAGE,#0x00
                           00006E  1454 	C$SPI0.c$66$3$32 ==.
                                   1455 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:66: foreign(c);
      0000DC 8F 82            [24] 1456 	mov	dpl,r7
      0000DE 12 01 56         [24] 1457 	lcall	_foreign
      0000E1 80 CA            [24] 1458 	sjmp	00105$
                           000075  1459 	C$SPI0.c$70$1$30 ==.
                           000075  1460 	XG$main$0$0 ==.
      0000E3 22               [24] 1461 	ret
                                   1462 ;------------------------------------------------------------
                                   1463 ;Allocation info for local variables in function 'local'
                                   1464 ;------------------------------------------------------------
                                   1465 ;c                         Allocated to registers r7 
                                   1466 ;------------------------------------------------------------
                           000076  1467 	G$local$0$0 ==.
                           000076  1468 	C$SPI0.c$71$1$30 ==.
                                   1469 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:71: void local(char c)
                                   1470 ;	-----------------------------------------
                                   1471 ;	 function local
                                   1472 ;	-----------------------------------------
      0000E4                       1473 _local:
      0000E4 AF 82            [24] 1474 	mov	r7,dpl
                           000078  1475 	C$SPI0.c$73$1$34 ==.
                                   1476 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:73: printf("\033[%d;1H",local_ct);
      0000E6 C0 07            [24] 1477 	push	ar7
      0000E8 C0 08            [24] 1478 	push	_local_ct
      0000EA C0 09            [24] 1479 	push	(_local_ct + 1)
      0000EC 74 DE            [12] 1480 	mov	a,#___str_1
      0000EE C0 E0            [24] 1481 	push	acc
      0000F0 74 08            [12] 1482 	mov	a,#(___str_1 >> 8)
      0000F2 C0 E0            [24] 1483 	push	acc
      0000F4 74 80            [12] 1484 	mov	a,#0x80
      0000F6 C0 E0            [24] 1485 	push	acc
      0000F8 12 02 C5         [24] 1486 	lcall	_printf
      0000FB E5 81            [12] 1487 	mov	a,sp
      0000FD 24 FB            [12] 1488 	add	a,#0xfb
      0000FF F5 81            [12] 1489 	mov	sp,a
      000101 D0 07            [24] 1490 	pop	ar7
                           000095  1491 	C$SPI0.c$74$1$34 ==.
                                   1492 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:74: if(local_ct < 13){local_ct++;}
      000103 C3               [12] 1493 	clr	c
      000104 E5 08            [12] 1494 	mov	a,_local_ct
      000106 94 0D            [12] 1495 	subb	a,#0x0D
      000108 E5 09            [12] 1496 	mov	a,(_local_ct + 1)
      00010A 64 80            [12] 1497 	xrl	a,#0x80
      00010C 94 80            [12] 1498 	subb	a,#0x80
      00010E 50 0A            [24] 1499 	jnc	00102$
      000110 05 08            [12] 1500 	inc	_local_ct
      000112 E4               [12] 1501 	clr	a
      000113 B5 08 38         [24] 1502 	cjne	a,_local_ct,00104$
      000116 05 09            [12] 1503 	inc	(_local_ct + 1)
      000118 80 34            [24] 1504 	sjmp	00104$
      00011A                       1505 00102$:
                           0000AC  1506 	C$SPI0.c$75$2$36 ==.
                                   1507 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:75: else{printf("\033[1J");local_ct=2;printf("\033[1;1H");}
      00011A C0 07            [24] 1508 	push	ar7
      00011C 74 E6            [12] 1509 	mov	a,#___str_2
      00011E C0 E0            [24] 1510 	push	acc
      000120 74 08            [12] 1511 	mov	a,#(___str_2 >> 8)
      000122 C0 E0            [24] 1512 	push	acc
      000124 74 80            [12] 1513 	mov	a,#0x80
      000126 C0 E0            [24] 1514 	push	acc
      000128 12 02 C5         [24] 1515 	lcall	_printf
      00012B 15 81            [12] 1516 	dec	sp
      00012D 15 81            [12] 1517 	dec	sp
      00012F 15 81            [12] 1518 	dec	sp
      000131 75 08 02         [24] 1519 	mov	_local_ct,#0x02
      000134 75 09 00         [24] 1520 	mov	(_local_ct + 1),#0x00
      000137 74 EB            [12] 1521 	mov	a,#___str_3
      000139 C0 E0            [24] 1522 	push	acc
      00013B 74 08            [12] 1523 	mov	a,#(___str_3 >> 8)
      00013D C0 E0            [24] 1524 	push	acc
      00013F 74 80            [12] 1525 	mov	a,#0x80
      000141 C0 E0            [24] 1526 	push	acc
      000143 12 02 C5         [24] 1527 	lcall	_printf
      000146 15 81            [12] 1528 	dec	sp
      000148 15 81            [12] 1529 	dec	sp
      00014A 15 81            [12] 1530 	dec	sp
      00014C D0 07            [24] 1531 	pop	ar7
                           0000E0  1532 	C$SPI0.c$76$1$34 ==.
                                   1533 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:76: while(!TI0);
      00014E                       1534 00104$:
                           0000E0  1535 	C$SPI0.c$77$1$34 ==.
                                   1536 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:77: TI0 = 0;
      00014E 10 99 02         [24] 1537 	jbc	_TI0,00120$
      000151 80 FB            [24] 1538 	sjmp	00104$
      000153                       1539 00120$:
                           0000E5  1540 	C$SPI0.c$78$1$34 ==.
                                   1541 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:78: SBUF0 = c;
      000153 8F 99            [24] 1542 	mov	_SBUF0,r7
                           0000E7  1543 	C$SPI0.c$79$1$34 ==.
                           0000E7  1544 	XG$local$0$0 ==.
      000155 22               [24] 1545 	ret
                                   1546 ;------------------------------------------------------------
                                   1547 ;Allocation info for local variables in function 'foreign'
                                   1548 ;------------------------------------------------------------
                                   1549 ;c                         Allocated to registers r7 
                                   1550 ;------------------------------------------------------------
                           0000E8  1551 	G$foreign$0$0 ==.
                           0000E8  1552 	C$SPI0.c$81$1$34 ==.
                                   1553 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:81: void foreign(char c)
                                   1554 ;	-----------------------------------------
                                   1555 ;	 function foreign
                                   1556 ;	-----------------------------------------
      000156                       1557 _foreign:
      000156 AF 82            [24] 1558 	mov	r7,dpl
                           0000EA  1559 	C$SPI0.c$83$1$38 ==.
                                   1560 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:83: printf("\033[%d;1H",alien_ct);
      000158 C0 07            [24] 1561 	push	ar7
      00015A C0 0A            [24] 1562 	push	_alien_ct
      00015C C0 0B            [24] 1563 	push	(_alien_ct + 1)
      00015E 74 DE            [12] 1564 	mov	a,#___str_1
      000160 C0 E0            [24] 1565 	push	acc
      000162 74 08            [12] 1566 	mov	a,#(___str_1 >> 8)
      000164 C0 E0            [24] 1567 	push	acc
      000166 74 80            [12] 1568 	mov	a,#0x80
      000168 C0 E0            [24] 1569 	push	acc
      00016A 12 02 C5         [24] 1570 	lcall	_printf
      00016D E5 81            [12] 1571 	mov	a,sp
      00016F 24 FB            [12] 1572 	add	a,#0xfb
      000171 F5 81            [12] 1573 	mov	sp,a
      000173 D0 07            [24] 1574 	pop	ar7
                           000107  1575 	C$SPI0.c$84$1$38 ==.
                                   1576 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:84: if(alien_ct < 25){alien_ct++;}
      000175 C3               [12] 1577 	clr	c
      000176 E5 0A            [12] 1578 	mov	a,_alien_ct
      000178 94 19            [12] 1579 	subb	a,#0x19
      00017A E5 0B            [12] 1580 	mov	a,(_alien_ct + 1)
      00017C 64 80            [12] 1581 	xrl	a,#0x80
      00017E 94 80            [12] 1582 	subb	a,#0x80
      000180 50 0A            [24] 1583 	jnc	00102$
      000182 05 0A            [12] 1584 	inc	_alien_ct
      000184 E4               [12] 1585 	clr	a
      000185 B5 0A 4D         [24] 1586 	cjne	a,_alien_ct,00104$
      000188 05 0B            [12] 1587 	inc	(_alien_ct + 1)
      00018A 80 49            [24] 1588 	sjmp	00104$
      00018C                       1589 00102$:
                           00011E  1590 	C$SPI0.c$85$2$40 ==.
                                   1591 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:85: else{printf("\033[12;1H");printf("\033[J");alien_ct = 12;printf("\033[12;1H");}
      00018C C0 07            [24] 1592 	push	ar7
      00018E 74 F2            [12] 1593 	mov	a,#___str_4
      000190 C0 E0            [24] 1594 	push	acc
      000192 74 08            [12] 1595 	mov	a,#(___str_4 >> 8)
      000194 C0 E0            [24] 1596 	push	acc
      000196 74 80            [12] 1597 	mov	a,#0x80
      000198 C0 E0            [24] 1598 	push	acc
      00019A 12 02 C5         [24] 1599 	lcall	_printf
      00019D 15 81            [12] 1600 	dec	sp
      00019F 15 81            [12] 1601 	dec	sp
      0001A1 15 81            [12] 1602 	dec	sp
      0001A3 74 FA            [12] 1603 	mov	a,#___str_5
      0001A5 C0 E0            [24] 1604 	push	acc
      0001A7 74 08            [12] 1605 	mov	a,#(___str_5 >> 8)
      0001A9 C0 E0            [24] 1606 	push	acc
      0001AB 74 80            [12] 1607 	mov	a,#0x80
      0001AD C0 E0            [24] 1608 	push	acc
      0001AF 12 02 C5         [24] 1609 	lcall	_printf
      0001B2 15 81            [12] 1610 	dec	sp
      0001B4 15 81            [12] 1611 	dec	sp
      0001B6 15 81            [12] 1612 	dec	sp
      0001B8 75 0A 0C         [24] 1613 	mov	_alien_ct,#0x0C
      0001BB 75 0B 00         [24] 1614 	mov	(_alien_ct + 1),#0x00
      0001BE 74 F2            [12] 1615 	mov	a,#___str_4
      0001C0 C0 E0            [24] 1616 	push	acc
      0001C2 74 08            [12] 1617 	mov	a,#(___str_4 >> 8)
      0001C4 C0 E0            [24] 1618 	push	acc
      0001C6 74 80            [12] 1619 	mov	a,#0x80
      0001C8 C0 E0            [24] 1620 	push	acc
      0001CA 12 02 C5         [24] 1621 	lcall	_printf
      0001CD 15 81            [12] 1622 	dec	sp
      0001CF 15 81            [12] 1623 	dec	sp
      0001D1 15 81            [12] 1624 	dec	sp
      0001D3 D0 07            [24] 1625 	pop	ar7
                           000167  1626 	C$SPI0.c$86$1$38 ==.
                                   1627 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:86: while(!TI0);
      0001D5                       1628 00104$:
                           000167  1629 	C$SPI0.c$87$1$38 ==.
                                   1630 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:87: TI0 = 0;
      0001D5 10 99 02         [24] 1631 	jbc	_TI0,00120$
      0001D8 80 FB            [24] 1632 	sjmp	00104$
      0001DA                       1633 00120$:
                           00016C  1634 	C$SPI0.c$88$1$38 ==.
                                   1635 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:88: SBUF0 = c;
      0001DA 8F 99            [24] 1636 	mov	_SBUF0,r7
                           00016E  1637 	C$SPI0.c$89$1$38 ==.
                           00016E  1638 	XG$foreign$0$0 ==.
      0001DC 22               [24] 1639 	ret
                                   1640 ;------------------------------------------------------------
                                   1641 ;Allocation info for local variables in function 'read'
                                   1642 ;------------------------------------------------------------
                                   1643 ;i                         Allocated to registers 
                                   1644 ;------------------------------------------------------------
                           00016F  1645 	G$read$0$0 ==.
                           00016F  1646 	C$SPI0.c$90$1$38 ==.
                                   1647 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:90: char read ()
                                   1648 ;	-----------------------------------------
                                   1649 ;	 function read
                                   1650 ;	-----------------------------------------
      0001DD                       1651 _read:
                           00016F  1652 	C$SPI0.c$93$1$41 ==.
                                   1653 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:93: SFRPAGE = SPI0_PAGE;
      0001DD 75 84 00         [24] 1654 	mov	_SFRPAGE,#0x00
                           000172  1655 	C$SPI0.c$94$1$41 ==.
                                   1656 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:94: NSSMD0 = 0;
      0001E0 C2 FA            [12] 1657 	clr	_NSSMD0
                           000174  1658 	C$SPI0.c$95$1$41 ==.
                                   1659 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:95: for (i=0;i<101;i++);
      0001E2 7E 65            [12] 1660 	mov	r6,#0x65
      0001E4 7F 00            [12] 1661 	mov	r7,#0x00
      0001E6                       1662 00107$:
      0001E6 1E               [12] 1663 	dec	r6
      0001E7 BE FF 01         [24] 1664 	cjne	r6,#0xFF,00121$
      0001EA 1F               [12] 1665 	dec	r7
      0001EB                       1666 00121$:
      0001EB EE               [12] 1667 	mov	a,r6
      0001EC 4F               [12] 1668 	orl	a,r7
      0001ED 70 F7            [24] 1669 	jnz	00107$
                           000181  1670 	C$SPI0.c$97$1$41 ==.
                                   1671 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:97: while(!SPIF);
      0001EF                       1672 00102$:
      0001EF 30 FF FD         [24] 1673 	jnb	_SPIF,00102$
                           000184  1674 	C$SPI0.c$98$1$41 ==.
                                   1675 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:98: return SPI0DAT;
      0001F2 85 9B 82         [24] 1676 	mov	dpl,_SPI0DAT
                           000187  1677 	C$SPI0.c$99$1$41 ==.
                           000187  1678 	XG$read$0$0 ==.
      0001F5 22               [24] 1679 	ret
                                   1680 ;------------------------------------------------------------
                                   1681 ;Allocation info for local variables in function 'write'
                                   1682 ;------------------------------------------------------------
                                   1683 ;c                         Allocated to registers r7 
                                   1684 ;i                         Allocated to registers 
                                   1685 ;------------------------------------------------------------
                           000188  1686 	G$write$0$0 ==.
                           000188  1687 	C$SPI0.c$101$1$41 ==.
                                   1688 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:101: void write(char c)
                                   1689 ;	-----------------------------------------
                                   1690 ;	 function write
                                   1691 ;	-----------------------------------------
      0001F6                       1692 _write:
      0001F6 AF 82            [24] 1693 	mov	r7,dpl
                           00018A  1694 	C$SPI0.c$104$1$43 ==.
                                   1695 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:104: SFRPAGE = SPI0_PAGE;
      0001F8 75 84 00         [24] 1696 	mov	_SFRPAGE,#0x00
                           00018D  1697 	C$SPI0.c$105$1$43 ==.
                                   1698 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:105: SPIF = 0;
      0001FB C2 FF            [12] 1699 	clr	_SPIF
                           00018F  1700 	C$SPI0.c$106$1$43 ==.
                                   1701 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:106: NSSMD0 = 1;
      0001FD D2 FA            [12] 1702 	setb	_NSSMD0
                           000191  1703 	C$SPI0.c$107$1$43 ==.
                                   1704 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:107: while(SPIF){SPIF=0;}//make sure SPIF is not busy
      0001FF                       1705 00101$:
      0001FF 10 FF 02         [24] 1706 	jbc	_SPIF,00132$
      000202 80 02            [24] 1707 	sjmp	00103$
      000204                       1708 00132$:
      000204 80 F9            [24] 1709 	sjmp	00101$
      000206                       1710 00103$:
                           000198  1711 	C$SPI0.c$108$1$43 ==.
                                   1712 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:108: SPI0DAT = c;
      000206 8F 9B            [24] 1713 	mov	_SPI0DAT,r7
                           00019A  1714 	C$SPI0.c$109$1$43 ==.
                                   1715 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:109: while(!SPIF);
      000208                       1716 00104$:
      000208 30 FF FD         [24] 1717 	jnb	_SPIF,00104$
                           00019D  1718 	C$SPI0.c$110$1$43 ==.
                                   1719 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:110: for (i=0;i<101;i++);
      00020B 7E 65            [12] 1720 	mov	r6,#0x65
      00020D 7F 00            [12] 1721 	mov	r7,#0x00
      00020F                       1722 00110$:
      00020F 1E               [12] 1723 	dec	r6
      000210 BE FF 01         [24] 1724 	cjne	r6,#0xFF,00134$
      000213 1F               [12] 1725 	dec	r7
      000214                       1726 00134$:
      000214 EE               [12] 1727 	mov	a,r6
      000215 4F               [12] 1728 	orl	a,r7
      000216 70 F7            [24] 1729 	jnz	00110$
                           0001AA  1730 	C$SPI0.c$111$1$43 ==.
                                   1731 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:111: NSSMD0 = 0;
      000218 C2 FA            [12] 1732 	clr	_NSSMD0
                           0001AC  1733 	C$SPI0.c$112$1$43 ==.
                           0001AC  1734 	XG$write$0$0 ==.
      00021A 22               [24] 1735 	ret
                                   1736 ;------------------------------------------------------------
                                   1737 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1738 ;------------------------------------------------------------
                                   1739 ;j                         Allocated to registers 
                                   1740 ;------------------------------------------------------------
                           0001AD  1741 	G$SYSCLK_INIT$0$0 ==.
                           0001AD  1742 	C$SPI0.c$114$1$43 ==.
                                   1743 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:114: void SYSCLK_INIT()
                                   1744 ;	-----------------------------------------
                                   1745 ;	 function SYSCLK_INIT
                                   1746 ;	-----------------------------------------
      00021B                       1747 _SYSCLK_INIT:
                           0001AD  1748 	C$SPI0.c$118$1$45 ==.
                                   1749 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:118: SFRPAGE = CONFIG_PAGE;
      00021B 75 84 0F         [24] 1750 	mov	_SFRPAGE,#0x0F
                           0001B0  1751 	C$SPI0.c$119$1$45 ==.
                                   1752 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:119: OSCXCN  = 0x67;             // Start external oscillator
      00021E 75 8C 67         [24] 1753 	mov	_OSCXCN,#0x67
                           0001B3  1754 	C$SPI0.c$120$1$45 ==.
                                   1755 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:120: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      000221 7E 00            [12] 1756 	mov	r6,#0x00
      000223 7F 01            [12] 1757 	mov	r7,#0x01
      000225                       1758 00107$:
      000225 1E               [12] 1759 	dec	r6
      000226 BE FF 01         [24] 1760 	cjne	r6,#0xFF,00121$
      000229 1F               [12] 1761 	dec	r7
      00022A                       1762 00121$:
      00022A EE               [12] 1763 	mov	a,r6
      00022B 4F               [12] 1764 	orl	a,r7
      00022C 70 F7            [24] 1765 	jnz	00107$
                           0001C0  1766 	C$SPI0.c$121$1$45 ==.
                                   1767 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:121: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      00022E                       1768 00102$:
      00022E E5 8C            [12] 1769 	mov	a,_OSCXCN
      000230 30 E7 FB         [24] 1770 	jnb	acc.7,00102$
                           0001C5  1771 	C$SPI0.c$122$1$45 ==.
                                   1772 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:122: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      000233 75 97 01         [24] 1773 	mov	_CLKSEL,#0x01
                           0001C8  1774 	C$SPI0.c$123$1$45 ==.
                                   1775 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:123: OSCICN  = 0x00;             // Disable the internal oscillator.
      000236 75 8A 00         [24] 1776 	mov	_OSCICN,#0x00
                           0001CB  1777 	C$SPI0.c$124$1$45 ==.
                           0001CB  1778 	XG$SYSCLK_INIT$0$0 ==.
      000239 22               [24] 1779 	ret
                                   1780 ;------------------------------------------------------------
                                   1781 ;Allocation info for local variables in function 'Timer_Init'
                                   1782 ;------------------------------------------------------------
                           0001CC  1783 	G$Timer_Init$0$0 ==.
                           0001CC  1784 	C$SPI0.c$126$1$45 ==.
                                   1785 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:126: void Timer_Init()
                                   1786 ;	-----------------------------------------
                                   1787 ;	 function Timer_Init
                                   1788 ;	-----------------------------------------
      00023A                       1789 _Timer_Init:
                           0001CC  1790 	C$SPI0.c$128$1$46 ==.
                                   1791 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:128: SFRPAGE   = TIMER01_PAGE;
      00023A 75 84 00         [24] 1792 	mov	_SFRPAGE,#0x00
                           0001CF  1793 	C$SPI0.c$129$1$46 ==.
                                   1794 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:129: TCON      = 0x40;
      00023D 75 88 40         [24] 1795 	mov	_TCON,#0x40
                           0001D2  1796 	C$SPI0.c$130$1$46 ==.
                                   1797 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:130: TMOD      = 0x20;
      000240 75 89 20         [24] 1798 	mov	_TMOD,#0x20
                           0001D5  1799 	C$SPI0.c$131$1$46 ==.
                                   1800 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:131: CKCON     = 0x10;
      000243 75 8E 10         [24] 1801 	mov	_CKCON,#0x10
                           0001D8  1802 	C$SPI0.c$132$1$46 ==.
                                   1803 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:132: TH1       = 0xA0;
      000246 75 8D A0         [24] 1804 	mov	_TH1,#0xA0
                           0001DB  1805 	C$SPI0.c$133$1$46 ==.
                                   1806 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:133: TL1 = TH1;
      000249 85 8D 8B         [24] 1807 	mov	_TL1,_TH1
                           0001DE  1808 	C$SPI0.c$134$1$46 ==.
                                   1809 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:134: SFRPAGE   = TMR2_PAGE;
      00024C 75 84 00         [24] 1810 	mov	_SFRPAGE,#0x00
                           0001E1  1811 	C$SPI0.c$135$1$46 ==.
                                   1812 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:135: TMR2CN    = 0x04;
      00024F 75 C8 04         [24] 1813 	mov	_TMR2CN,#0x04
                           0001E4  1814 	C$SPI0.c$136$1$46 ==.
                                   1815 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:136: TMR2CF    = 0x08;
      000252 75 C9 08         [24] 1816 	mov	_TMR2CF,#0x08
                           0001E7  1817 	C$SPI0.c$137$1$46 ==.
                                   1818 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:137: TMR2H	  = 0xFF;
      000255 75 CD FF         [24] 1819 	mov	_TMR2H,#0xFF
                           0001EA  1820 	C$SPI0.c$138$1$46 ==.
                                   1821 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:138: TMR2L 	  = 0x70;
      000258 75 CC 70         [24] 1822 	mov	_TMR2L,#0x70
                           0001ED  1823 	C$SPI0.c$139$1$46 ==.
                                   1824 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:139: RCAP2L    = 0x70;
      00025B 75 CA 70         [24] 1825 	mov	_RCAP2L,#0x70
                           0001F0  1826 	C$SPI0.c$140$1$46 ==.
                                   1827 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:140: RCAP2H    = 0xFF;
      00025E 75 CB FF         [24] 1828 	mov	_RCAP2H,#0xFF
                           0001F3  1829 	C$SPI0.c$141$1$46 ==.
                           0001F3  1830 	XG$Timer_Init$0$0 ==.
      000261 22               [24] 1831 	ret
                                   1832 ;------------------------------------------------------------
                                   1833 ;Allocation info for local variables in function 'UART_Init'
                                   1834 ;------------------------------------------------------------
                           0001F4  1835 	G$UART_Init$0$0 ==.
                           0001F4  1836 	C$SPI0.c$142$1$46 ==.
                                   1837 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:142: void UART_Init()
                                   1838 ;	-----------------------------------------
                                   1839 ;	 function UART_Init
                                   1840 ;	-----------------------------------------
      000262                       1841 _UART_Init:
                           0001F4  1842 	C$SPI0.c$144$1$47 ==.
                                   1843 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:144: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      000262 75 84 00         [24] 1844 	mov	_SFRPAGE,#0x00
                           0001F7  1845 	C$SPI0.c$145$1$47 ==.
                                   1846 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:145: TR2		  = 1;//Start Timer 2
      000265 D2 CA            [12] 1847 	setb	_TR2
                           0001F9  1848 	C$SPI0.c$146$1$47 ==.
                                   1849 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:146: SCON0     = 0x50;
      000267 75 98 50         [24] 1850 	mov	_SCON0,#0x50
                           0001FC  1851 	C$SPI0.c$147$1$47 ==.
                                   1852 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:147: SSTA0   = 0x15;
      00026A 75 91 15         [24] 1853 	mov	_SSTA0,#0x15
                           0001FF  1854 	C$SPI0.c$148$1$47 ==.
                                   1855 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:148: TI0		  = 1; // Indicate TX0 is ready
      00026D D2 99            [12] 1856 	setb	_TI0
                           000201  1857 	C$SPI0.c$149$1$47 ==.
                                   1858 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:149: TR1		  = 1; //Start Timer 1
      00026F D2 8E            [12] 1859 	setb	_TR1
                           000203  1860 	C$SPI0.c$150$1$47 ==.
                                   1861 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:150: SFRPAGE   = UART1_PAGE;
      000271 75 84 01         [24] 1862 	mov	_SFRPAGE,#0x01
                           000206  1863 	C$SPI0.c$151$1$47 ==.
                                   1864 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:151: SCON1     = 0x50;
      000274 75 98 50         [24] 1865 	mov	_SCON1,#0x50
                           000209  1866 	C$SPI0.c$152$1$47 ==.
                                   1867 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:152: TI1		  = 1; //Indicatie TX1 is ready
      000277 D2 99            [12] 1868 	setb	_TI1
                           00020B  1869 	C$SPI0.c$153$1$47 ==.
                           00020B  1870 	XG$UART_Init$0$0 ==.
      000279 22               [24] 1871 	ret
                                   1872 ;------------------------------------------------------------
                                   1873 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1874 ;------------------------------------------------------------
                           00020C  1875 	G$Port_IO_Init$0$0 ==.
                           00020C  1876 	C$SPI0.c$154$1$47 ==.
                                   1877 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:154: void Port_IO_Init()
                                   1878 ;	-----------------------------------------
                                   1879 ;	 function Port_IO_Init
                                   1880 ;	-----------------------------------------
      00027A                       1881 _Port_IO_Init:
                           00020C  1882 	C$SPI0.c$156$1$48 ==.
                                   1883 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:156: SFRPAGE   = CONFIG_PAGE;
      00027A 75 84 0F         [24] 1884 	mov	_SFRPAGE,#0x0F
                           00020F  1885 	C$SPI0.c$163$1$48 ==.
                                   1886 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:163: P0MDOUT = 0x75;
      00027D 75 A4 75         [24] 1887 	mov	_P0MDOUT,#0x75
                           000212  1888 	C$SPI0.c$164$1$48 ==.
                                   1889 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:164: P0 = 0xAA;
      000280 75 80 AA         [24] 1890 	mov	_P0,#0xAA
                           000215  1891 	C$SPI0.c$168$1$48 ==.
                                   1892 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:168: WDTCN   = 0xDE;             // Disable watchdog timer.
      000283 75 FF DE         [24] 1893 	mov	_WDTCN,#0xDE
                           000218  1894 	C$SPI0.c$169$1$48 ==.
                                   1895 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:169: WDTCN   = 0xAD;
      000286 75 FF AD         [24] 1896 	mov	_WDTCN,#0xAD
                           00021B  1897 	C$SPI0.c$170$1$48 ==.
                                   1898 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:170: EA 		  = 1; // enable global interrupts
      000289 D2 AF            [12] 1899 	setb	_EA
                           00021D  1900 	C$SPI0.c$171$1$48 ==.
                                   1901 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:171: XBR0      = 0x06;
      00028B 75 E1 06         [24] 1902 	mov	_XBR0,#0x06
                           000220  1903 	C$SPI0.c$172$1$48 ==.
                                   1904 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:172: XBR2      = 0x44;
      00028E 75 E3 44         [24] 1905 	mov	_XBR2,#0x44
                           000223  1906 	C$SPI0.c$173$1$48 ==.
                           000223  1907 	XG$Port_IO_Init$0$0 ==.
      000291 22               [24] 1908 	ret
                                   1909 ;------------------------------------------------------------
                                   1910 ;Allocation info for local variables in function 'SPI0_INIT'
                                   1911 ;------------------------------------------------------------
                           000224  1912 	G$SPI0_INIT$0$0 ==.
                           000224  1913 	C$SPI0.c$174$1$48 ==.
                                   1914 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:174: void SPI0_INIT()
                                   1915 ;	-----------------------------------------
                                   1916 ;	 function SPI0_INIT
                                   1917 ;	-----------------------------------------
      000292                       1918 _SPI0_INIT:
                           000224  1919 	C$SPI0.c$176$1$49 ==.
                                   1920 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:176: SFRPAGE = SPI0_PAGE;
      000292 75 84 00         [24] 1921 	mov	_SFRPAGE,#0x00
                           000227  1922 	C$SPI0.c$177$1$49 ==.
                                   1923 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:177: SPI0CFG = 0x40;
      000295 75 9A 40         [24] 1924 	mov	_SPI0CFG,#0x40
                           00022A  1925 	C$SPI0.c$179$1$49 ==.
                                   1926 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:179: SPI0CN = 0x0D;
      000298 75 F8 0D         [24] 1927 	mov	_SPI0CN,#0x0D
                           00022D  1928 	C$SPI0.c$180$1$49 ==.
                                   1929 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:180: SPI0CKR =  0x0B;
      00029B 75 9D 0B         [24] 1930 	mov	_SPI0CKR,#0x0B
                           000230  1931 	C$SPI0.c$181$1$49 ==.
                                   1932 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0\SPI0.c:181: SPIF = 1;
      00029E D2 FF            [12] 1933 	setb	_SPIF
                           000232  1934 	C$SPI0.c$182$1$49 ==.
                           000232  1935 	XG$SPI0_INIT$0$0 ==.
      0002A0 22               [24] 1936 	ret
                                   1937 	.area CSEG    (CODE)
                                   1938 	.area CONST   (CODE)
                           000000  1939 FSPI0$__str_0$0$0 == .
      0008D9                       1940 ___str_0:
      0008D9 1B                    1941 	.db 0x1B
      0008DA 5B 32 4A              1942 	.ascii "[2J"
      0008DD 00                    1943 	.db 0x00
                           000005  1944 FSPI0$__str_1$0$0 == .
      0008DE                       1945 ___str_1:
      0008DE 1B                    1946 	.db 0x1B
      0008DF 5B 25 64 3B 31 48     1947 	.ascii "[%d;1H"
      0008E5 00                    1948 	.db 0x00
                           00000D  1949 FSPI0$__str_2$0$0 == .
      0008E6                       1950 ___str_2:
      0008E6 1B                    1951 	.db 0x1B
      0008E7 5B 31 4A              1952 	.ascii "[1J"
      0008EA 00                    1953 	.db 0x00
                           000012  1954 FSPI0$__str_3$0$0 == .
      0008EB                       1955 ___str_3:
      0008EB 1B                    1956 	.db 0x1B
      0008EC 5B 31 3B 31 48        1957 	.ascii "[1;1H"
      0008F1 00                    1958 	.db 0x00
                           000019  1959 FSPI0$__str_4$0$0 == .
      0008F2                       1960 ___str_4:
      0008F2 1B                    1961 	.db 0x1B
      0008F3 5B 31 32 3B 31 48     1962 	.ascii "[12;1H"
      0008F9 00                    1963 	.db 0x00
                           000021  1964 FSPI0$__str_5$0$0 == .
      0008FA                       1965 ___str_5:
      0008FA 1B                    1966 	.db 0x1B
      0008FB 5B 4A                 1967 	.ascii "[J"
      0008FD 00                    1968 	.db 0x00
                                   1969 	.area XINIT   (CODE)
                                   1970 	.area CABS    (ABS,CODE)
