                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Oct 13 17:28:23 2016
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
                                    396 	.globl _counts
                                    397 	.globl _alien_ct
                                    398 	.globl _local_ct
                                    399 	.globl _putchar
                                    400 	.globl _getchar
                                    401 	.globl _main
                                    402 	.globl _local
                                    403 	.globl _foreign
                                    404 	.globl _read
                                    405 	.globl _dread
                                    406 	.globl _write
                                    407 	.globl _dummy
                                    408 	.globl _Timer1_ISR
                                    409 	.globl _SYSCLK_INIT
                                    410 	.globl _Timer_Init
                                    411 	.globl _UART_Init
                                    412 	.globl _Port_IO_Init
                                    413 	.globl _SPI0_INIT
                                    414 ;--------------------------------------------------------
                                    415 ; special function registers
                                    416 ;--------------------------------------------------------
                                    417 	.area RSEG    (ABS,DATA)
      000000                        418 	.org 0x0000
                           000080   419 G$P0$0$0 == 0x0080
                           000080   420 _P0	=	0x0080
                           000081   421 G$SP$0$0 == 0x0081
                           000081   422 _SP	=	0x0081
                           000082   423 G$DPL$0$0 == 0x0082
                           000082   424 _DPL	=	0x0082
                           000083   425 G$DPH$0$0 == 0x0083
                           000083   426 _DPH	=	0x0083
                           000084   427 G$SFRPAGE$0$0 == 0x0084
                           000084   428 _SFRPAGE	=	0x0084
                           000085   429 G$SFRNEXT$0$0 == 0x0085
                           000085   430 _SFRNEXT	=	0x0085
                           000086   431 G$SFRLAST$0$0 == 0x0086
                           000086   432 _SFRLAST	=	0x0086
                           000087   433 G$PCON$0$0 == 0x0087
                           000087   434 _PCON	=	0x0087
                           000090   435 G$P1$0$0 == 0x0090
                           000090   436 _P1	=	0x0090
                           0000A0   437 G$P2$0$0 == 0x00a0
                           0000A0   438 _P2	=	0x00a0
                           0000A8   439 G$IE$0$0 == 0x00a8
                           0000A8   440 _IE	=	0x00a8
                           0000B0   441 G$P3$0$0 == 0x00b0
                           0000B0   442 _P3	=	0x00b0
                           0000B1   443 G$PSBANK$0$0 == 0x00b1
                           0000B1   444 _PSBANK	=	0x00b1
                           0000B8   445 G$IP$0$0 == 0x00b8
                           0000B8   446 _IP	=	0x00b8
                           0000D0   447 G$PSW$0$0 == 0x00d0
                           0000D0   448 _PSW	=	0x00d0
                           0000E0   449 G$ACC$0$0 == 0x00e0
                           0000E0   450 _ACC	=	0x00e0
                           0000E6   451 G$EIE1$0$0 == 0x00e6
                           0000E6   452 _EIE1	=	0x00e6
                           0000E7   453 G$EIE2$0$0 == 0x00e7
                           0000E7   454 _EIE2	=	0x00e7
                           0000F0   455 G$B$0$0 == 0x00f0
                           0000F0   456 _B	=	0x00f0
                           0000F6   457 G$EIP1$0$0 == 0x00f6
                           0000F6   458 _EIP1	=	0x00f6
                           0000F7   459 G$EIP2$0$0 == 0x00f7
                           0000F7   460 _EIP2	=	0x00f7
                           0000FF   461 G$WDTCN$0$0 == 0x00ff
                           0000FF   462 _WDTCN	=	0x00ff
                           000088   463 G$TCON$0$0 == 0x0088
                           000088   464 _TCON	=	0x0088
                           000089   465 G$TMOD$0$0 == 0x0089
                           000089   466 _TMOD	=	0x0089
                           00008A   467 G$TL0$0$0 == 0x008a
                           00008A   468 _TL0	=	0x008a
                           00008B   469 G$TL1$0$0 == 0x008b
                           00008B   470 _TL1	=	0x008b
                           00008C   471 G$TH0$0$0 == 0x008c
                           00008C   472 _TH0	=	0x008c
                           00008D   473 G$TH1$0$0 == 0x008d
                           00008D   474 _TH1	=	0x008d
                           00008E   475 G$CKCON$0$0 == 0x008e
                           00008E   476 _CKCON	=	0x008e
                           00008F   477 G$PSCTL$0$0 == 0x008f
                           00008F   478 _PSCTL	=	0x008f
                           000091   479 G$SSTA0$0$0 == 0x0091
                           000091   480 _SSTA0	=	0x0091
                           000098   481 G$SCON0$0$0 == 0x0098
                           000098   482 _SCON0	=	0x0098
                           000098   483 G$SCON$0$0 == 0x0098
                           000098   484 _SCON	=	0x0098
                           000099   485 G$SBUF0$0$0 == 0x0099
                           000099   486 _SBUF0	=	0x0099
                           000099   487 G$SBUF$0$0 == 0x0099
                           000099   488 _SBUF	=	0x0099
                           00009A   489 G$SPI0CFG$0$0 == 0x009a
                           00009A   490 _SPI0CFG	=	0x009a
                           00009B   491 G$SPI0DAT$0$0 == 0x009b
                           00009B   492 _SPI0DAT	=	0x009b
                           00009D   493 G$SPI0CKR$0$0 == 0x009d
                           00009D   494 _SPI0CKR	=	0x009d
                           0000A1   495 G$EMI0TC$0$0 == 0x00a1
                           0000A1   496 _EMI0TC	=	0x00a1
                           0000A2   497 G$EMI0CN$0$0 == 0x00a2
                           0000A2   498 _EMI0CN	=	0x00a2
                           0000A2   499 G$_XPAGE$0$0 == 0x00a2
                           0000A2   500 __XPAGE	=	0x00a2
                           0000A3   501 G$EMI0CF$0$0 == 0x00a3
                           0000A3   502 _EMI0CF	=	0x00a3
                           0000A9   503 G$SADDR0$0$0 == 0x00a9
                           0000A9   504 _SADDR0	=	0x00a9
                           0000B7   505 G$FLSCL$0$0 == 0x00b7
                           0000B7   506 _FLSCL	=	0x00b7
                           0000B9   507 G$SADEN0$0$0 == 0x00b9
                           0000B9   508 _SADEN0	=	0x00b9
                           0000BA   509 G$AMX0CF$0$0 == 0x00ba
                           0000BA   510 _AMX0CF	=	0x00ba
                           0000BB   511 G$AMX0SL$0$0 == 0x00bb
                           0000BB   512 _AMX0SL	=	0x00bb
                           0000BC   513 G$ADC0CF$0$0 == 0x00bc
                           0000BC   514 _ADC0CF	=	0x00bc
                           0000BE   515 G$ADC0L$0$0 == 0x00be
                           0000BE   516 _ADC0L	=	0x00be
                           0000BF   517 G$ADC0H$0$0 == 0x00bf
                           0000BF   518 _ADC0H	=	0x00bf
                           0000C0   519 G$SMB0CN$0$0 == 0x00c0
                           0000C0   520 _SMB0CN	=	0x00c0
                           0000C1   521 G$SMB0STA$0$0 == 0x00c1
                           0000C1   522 _SMB0STA	=	0x00c1
                           0000C2   523 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   524 _SMB0DAT	=	0x00c2
                           0000C3   525 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   526 _SMB0ADR	=	0x00c3
                           0000C4   527 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   528 _ADC0GTL	=	0x00c4
                           0000C5   529 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   530 _ADC0GTH	=	0x00c5
                           0000C6   531 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   532 _ADC0LTL	=	0x00c6
                           0000C7   533 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   534 _ADC0LTH	=	0x00c7
                           0000C8   535 G$TMR2CN$0$0 == 0x00c8
                           0000C8   536 _TMR2CN	=	0x00c8
                           0000C9   537 G$TMR2CF$0$0 == 0x00c9
                           0000C9   538 _TMR2CF	=	0x00c9
                           0000CA   539 G$RCAP2L$0$0 == 0x00ca
                           0000CA   540 _RCAP2L	=	0x00ca
                           0000CB   541 G$RCAP2H$0$0 == 0x00cb
                           0000CB   542 _RCAP2H	=	0x00cb
                           0000CC   543 G$TMR2L$0$0 == 0x00cc
                           0000CC   544 _TMR2L	=	0x00cc
                           0000CC   545 G$TL2$0$0 == 0x00cc
                           0000CC   546 _TL2	=	0x00cc
                           0000CD   547 G$TMR2H$0$0 == 0x00cd
                           0000CD   548 _TMR2H	=	0x00cd
                           0000CD   549 G$TH2$0$0 == 0x00cd
                           0000CD   550 _TH2	=	0x00cd
                           0000CF   551 G$SMB0CR$0$0 == 0x00cf
                           0000CF   552 _SMB0CR	=	0x00cf
                           0000D1   553 G$REF0CN$0$0 == 0x00d1
                           0000D1   554 _REF0CN	=	0x00d1
                           0000D2   555 G$DAC0L$0$0 == 0x00d2
                           0000D2   556 _DAC0L	=	0x00d2
                           0000D3   557 G$DAC0H$0$0 == 0x00d3
                           0000D3   558 _DAC0H	=	0x00d3
                           0000D4   559 G$DAC0CN$0$0 == 0x00d4
                           0000D4   560 _DAC0CN	=	0x00d4
                           0000D8   561 G$PCA0CN$0$0 == 0x00d8
                           0000D8   562 _PCA0CN	=	0x00d8
                           0000D9   563 G$PCA0MD$0$0 == 0x00d9
                           0000D9   564 _PCA0MD	=	0x00d9
                           0000DA   565 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   566 _PCA0CPM0	=	0x00da
                           0000DB   567 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   568 _PCA0CPM1	=	0x00db
                           0000DC   569 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   570 _PCA0CPM2	=	0x00dc
                           0000DD   571 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   572 _PCA0CPM3	=	0x00dd
                           0000DE   573 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   574 _PCA0CPM4	=	0x00de
                           0000DF   575 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   576 _PCA0CPM5	=	0x00df
                           0000E1   577 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   578 _PCA0CPL5	=	0x00e1
                           0000E2   579 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   580 _PCA0CPH5	=	0x00e2
                           0000E8   581 G$ADC0CN$0$0 == 0x00e8
                           0000E8   582 _ADC0CN	=	0x00e8
                           0000E9   583 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   584 _PCA0CPL2	=	0x00e9
                           0000EA   585 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   586 _PCA0CPH2	=	0x00ea
                           0000EB   587 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   588 _PCA0CPL3	=	0x00eb
                           0000EC   589 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   590 _PCA0CPH3	=	0x00ec
                           0000ED   591 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   592 _PCA0CPL4	=	0x00ed
                           0000EE   593 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   594 _PCA0CPH4	=	0x00ee
                           0000EF   595 G$RSTSRC$0$0 == 0x00ef
                           0000EF   596 _RSTSRC	=	0x00ef
                           0000F8   597 G$SPI0CN$0$0 == 0x00f8
                           0000F8   598 _SPI0CN	=	0x00f8
                           0000F9   599 G$PCA0L$0$0 == 0x00f9
                           0000F9   600 _PCA0L	=	0x00f9
                           0000FA   601 G$PCA0H$0$0 == 0x00fa
                           0000FA   602 _PCA0H	=	0x00fa
                           0000FB   603 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   604 _PCA0CPL0	=	0x00fb
                           0000FC   605 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   606 _PCA0CPH0	=	0x00fc
                           0000FD   607 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   608 _PCA0CPL1	=	0x00fd
                           0000FE   609 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   610 _PCA0CPH1	=	0x00fe
                           000088   611 G$CPT0CN$0$0 == 0x0088
                           000088   612 _CPT0CN	=	0x0088
                           000089   613 G$CPT0MD$0$0 == 0x0089
                           000089   614 _CPT0MD	=	0x0089
                           000098   615 G$SCON1$0$0 == 0x0098
                           000098   616 _SCON1	=	0x0098
                           000099   617 G$SBUF1$0$0 == 0x0099
                           000099   618 _SBUF1	=	0x0099
                           0000C8   619 G$TMR3CN$0$0 == 0x00c8
                           0000C8   620 _TMR3CN	=	0x00c8
                           0000C9   621 G$TMR3CF$0$0 == 0x00c9
                           0000C9   622 _TMR3CF	=	0x00c9
                           0000CA   623 G$RCAP3L$0$0 == 0x00ca
                           0000CA   624 _RCAP3L	=	0x00ca
                           0000CB   625 G$RCAP3H$0$0 == 0x00cb
                           0000CB   626 _RCAP3H	=	0x00cb
                           0000CC   627 G$TMR3L$0$0 == 0x00cc
                           0000CC   628 _TMR3L	=	0x00cc
                           0000CD   629 G$TMR3H$0$0 == 0x00cd
                           0000CD   630 _TMR3H	=	0x00cd
                           0000D2   631 G$DAC1L$0$0 == 0x00d2
                           0000D2   632 _DAC1L	=	0x00d2
                           0000D3   633 G$DAC1H$0$0 == 0x00d3
                           0000D3   634 _DAC1H	=	0x00d3
                           0000D4   635 G$DAC1CN$0$0 == 0x00d4
                           0000D4   636 _DAC1CN	=	0x00d4
                           000088   637 G$CPT1CN$0$0 == 0x0088
                           000088   638 _CPT1CN	=	0x0088
                           000089   639 G$CPT1MD$0$0 == 0x0089
                           000089   640 _CPT1MD	=	0x0089
                           0000BA   641 G$AMX2CF$0$0 == 0x00ba
                           0000BA   642 _AMX2CF	=	0x00ba
                           0000BB   643 G$AMX2SL$0$0 == 0x00bb
                           0000BB   644 _AMX2SL	=	0x00bb
                           0000BC   645 G$ADC2CF$0$0 == 0x00bc
                           0000BC   646 _ADC2CF	=	0x00bc
                           0000BE   647 G$ADC2$0$0 == 0x00be
                           0000BE   648 _ADC2	=	0x00be
                           0000C4   649 G$ADC2GT$0$0 == 0x00c4
                           0000C4   650 _ADC2GT	=	0x00c4
                           0000C6   651 G$ADC2LT$0$0 == 0x00c6
                           0000C6   652 _ADC2LT	=	0x00c6
                           0000C8   653 G$TMR4CN$0$0 == 0x00c8
                           0000C8   654 _TMR4CN	=	0x00c8
                           0000C9   655 G$TMR4CF$0$0 == 0x00c9
                           0000C9   656 _TMR4CF	=	0x00c9
                           0000CA   657 G$RCAP4L$0$0 == 0x00ca
                           0000CA   658 _RCAP4L	=	0x00ca
                           0000CB   659 G$RCAP4H$0$0 == 0x00cb
                           0000CB   660 _RCAP4H	=	0x00cb
                           0000CC   661 G$TMR4L$0$0 == 0x00cc
                           0000CC   662 _TMR4L	=	0x00cc
                           0000CD   663 G$TMR4H$0$0 == 0x00cd
                           0000CD   664 _TMR4H	=	0x00cd
                           0000E8   665 G$ADC2CN$0$0 == 0x00e8
                           0000E8   666 _ADC2CN	=	0x00e8
                           000091   667 G$MAC0BL$0$0 == 0x0091
                           000091   668 _MAC0BL	=	0x0091
                           000092   669 G$MAC0BH$0$0 == 0x0092
                           000092   670 _MAC0BH	=	0x0092
                           000093   671 G$MAC0ACC0$0$0 == 0x0093
                           000093   672 _MAC0ACC0	=	0x0093
                           000094   673 G$MAC0ACC1$0$0 == 0x0094
                           000094   674 _MAC0ACC1	=	0x0094
                           000095   675 G$MAC0ACC2$0$0 == 0x0095
                           000095   676 _MAC0ACC2	=	0x0095
                           000096   677 G$MAC0ACC3$0$0 == 0x0096
                           000096   678 _MAC0ACC3	=	0x0096
                           000097   679 G$MAC0OVR$0$0 == 0x0097
                           000097   680 _MAC0OVR	=	0x0097
                           0000C0   681 G$MAC0STA$0$0 == 0x00c0
                           0000C0   682 _MAC0STA	=	0x00c0
                           0000C1   683 G$MAC0AL$0$0 == 0x00c1
                           0000C1   684 _MAC0AL	=	0x00c1
                           0000C2   685 G$MAC0AH$0$0 == 0x00c2
                           0000C2   686 _MAC0AH	=	0x00c2
                           0000C3   687 G$MAC0CF$0$0 == 0x00c3
                           0000C3   688 _MAC0CF	=	0x00c3
                           0000CE   689 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   690 _MAC0RNDL	=	0x00ce
                           0000CF   691 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   692 _MAC0RNDH	=	0x00cf
                           000088   693 G$FLSTAT$0$0 == 0x0088
                           000088   694 _FLSTAT	=	0x0088
                           000089   695 G$PLL0CN$0$0 == 0x0089
                           000089   696 _PLL0CN	=	0x0089
                           00008A   697 G$OSCICN$0$0 == 0x008a
                           00008A   698 _OSCICN	=	0x008a
                           00008B   699 G$OSCICL$0$0 == 0x008b
                           00008B   700 _OSCICL	=	0x008b
                           00008C   701 G$OSCXCN$0$0 == 0x008c
                           00008C   702 _OSCXCN	=	0x008c
                           00008D   703 G$PLL0DIV$0$0 == 0x008d
                           00008D   704 _PLL0DIV	=	0x008d
                           00008E   705 G$PLL0MUL$0$0 == 0x008e
                           00008E   706 _PLL0MUL	=	0x008e
                           00008F   707 G$PLL0FLT$0$0 == 0x008f
                           00008F   708 _PLL0FLT	=	0x008f
                           000096   709 G$SFRPGCN$0$0 == 0x0096
                           000096   710 _SFRPGCN	=	0x0096
                           000097   711 G$CLKSEL$0$0 == 0x0097
                           000097   712 _CLKSEL	=	0x0097
                           00009A   713 G$CCH0MA$0$0 == 0x009a
                           00009A   714 _CCH0MA	=	0x009a
                           00009C   715 G$P4MDOUT$0$0 == 0x009c
                           00009C   716 _P4MDOUT	=	0x009c
                           00009D   717 G$P5MDOUT$0$0 == 0x009d
                           00009D   718 _P5MDOUT	=	0x009d
                           00009E   719 G$P6MDOUT$0$0 == 0x009e
                           00009E   720 _P6MDOUT	=	0x009e
                           00009F   721 G$P7MDOUT$0$0 == 0x009f
                           00009F   722 _P7MDOUT	=	0x009f
                           0000A1   723 G$CCH0CN$0$0 == 0x00a1
                           0000A1   724 _CCH0CN	=	0x00a1
                           0000A2   725 G$CCH0TN$0$0 == 0x00a2
                           0000A2   726 _CCH0TN	=	0x00a2
                           0000A3   727 G$CCH0LC$0$0 == 0x00a3
                           0000A3   728 _CCH0LC	=	0x00a3
                           0000A4   729 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   730 _P0MDOUT	=	0x00a4
                           0000A5   731 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   732 _P1MDOUT	=	0x00a5
                           0000A6   733 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   734 _P2MDOUT	=	0x00a6
                           0000A7   735 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   736 _P3MDOUT	=	0x00a7
                           0000AD   737 G$P1MDIN$0$0 == 0x00ad
                           0000AD   738 _P1MDIN	=	0x00ad
                           0000B7   739 G$FLACL$0$0 == 0x00b7
                           0000B7   740 _FLACL	=	0x00b7
                           0000C8   741 G$P4$0$0 == 0x00c8
                           0000C8   742 _P4	=	0x00c8
                           0000D8   743 G$P5$0$0 == 0x00d8
                           0000D8   744 _P5	=	0x00d8
                           0000E1   745 G$XBR0$0$0 == 0x00e1
                           0000E1   746 _XBR0	=	0x00e1
                           0000E2   747 G$XBR1$0$0 == 0x00e2
                           0000E2   748 _XBR1	=	0x00e2
                           0000E3   749 G$XBR2$0$0 == 0x00e3
                           0000E3   750 _XBR2	=	0x00e3
                           0000E8   751 G$P6$0$0 == 0x00e8
                           0000E8   752 _P6	=	0x00e8
                           0000F8   753 G$P7$0$0 == 0x00f8
                           0000F8   754 _P7	=	0x00f8
                           008C8A   755 G$TMR0$0$0 == 0x8c8a
                           008C8A   756 _TMR0	=	0x8c8a
                           008D8B   757 G$TMR1$0$0 == 0x8d8b
                           008D8B   758 _TMR1	=	0x8d8b
                           00CDCC   759 G$TMR2$0$0 == 0xcdcc
                           00CDCC   760 _TMR2	=	0xcdcc
                           00CBCA   761 G$RCAP2$0$0 == 0xcbca
                           00CBCA   762 _RCAP2	=	0xcbca
                           00BFBE   763 G$ADC0$0$0 == 0xbfbe
                           00BFBE   764 _ADC0	=	0xbfbe
                           00C5C4   765 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   766 _ADC0GT	=	0xc5c4
                           00C7C6   767 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   768 _ADC0LT	=	0xc7c6
                           00D3D2   769 G$DAC0$0$0 == 0xd3d2
                           00D3D2   770 _DAC0	=	0xd3d2
                           00FAF9   771 G$PCA0$0$0 == 0xfaf9
                           00FAF9   772 _PCA0	=	0xfaf9
                           00FCFB   773 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   774 _PCA0CP0	=	0xfcfb
                           00FEFD   775 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   776 _PCA0CP1	=	0xfefd
                           00EAE9   777 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   778 _PCA0CP2	=	0xeae9
                           00ECEB   779 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   780 _PCA0CP3	=	0xeceb
                           00EEED   781 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   782 _PCA0CP4	=	0xeeed
                           00E2E1   783 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   784 _PCA0CP5	=	0xe2e1
                           00CDCC   785 G$TMR3$0$0 == 0xcdcc
                           00CDCC   786 _TMR3	=	0xcdcc
                           00CBCA   787 G$RCAP3$0$0 == 0xcbca
                           00CBCA   788 _RCAP3	=	0xcbca
                           00D3D2   789 G$DAC1$0$0 == 0xd3d2
                           00D3D2   790 _DAC1	=	0xd3d2
                           00CDCC   791 G$TMR4$0$0 == 0xcdcc
                           00CDCC   792 _TMR4	=	0xcdcc
                           00CBCA   793 G$RCAP4$0$0 == 0xcbca
                           00CBCA   794 _RCAP4	=	0xcbca
                           00C2C1   795 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   796 _MAC0A	=	0xc2c1
                           96959493   797 G$MAC0ACC$0$0 == 0x96959493
                           96959493   798 _MAC0ACC	=	0x96959493
                           00CFCE   799 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   800 _MAC0RND	=	0xcfce
                                    801 ;--------------------------------------------------------
                                    802 ; special function bits
                                    803 ;--------------------------------------------------------
                                    804 	.area RSEG    (ABS,DATA)
      000000                        805 	.org 0x0000
                           000080   806 G$P0_0$0$0 == 0x0080
                           000080   807 _P0_0	=	0x0080
                           000081   808 G$P0_1$0$0 == 0x0081
                           000081   809 _P0_1	=	0x0081
                           000082   810 G$P0_2$0$0 == 0x0082
                           000082   811 _P0_2	=	0x0082
                           000083   812 G$P0_3$0$0 == 0x0083
                           000083   813 _P0_3	=	0x0083
                           000084   814 G$P0_4$0$0 == 0x0084
                           000084   815 _P0_4	=	0x0084
                           000085   816 G$P0_5$0$0 == 0x0085
                           000085   817 _P0_5	=	0x0085
                           000086   818 G$P0_6$0$0 == 0x0086
                           000086   819 _P0_6	=	0x0086
                           000087   820 G$P0_7$0$0 == 0x0087
                           000087   821 _P0_7	=	0x0087
                           000088   822 G$IT0$0$0 == 0x0088
                           000088   823 _IT0	=	0x0088
                           000089   824 G$IE0$0$0 == 0x0089
                           000089   825 _IE0	=	0x0089
                           00008A   826 G$IT1$0$0 == 0x008a
                           00008A   827 _IT1	=	0x008a
                           00008B   828 G$IE1$0$0 == 0x008b
                           00008B   829 _IE1	=	0x008b
                           00008C   830 G$TR0$0$0 == 0x008c
                           00008C   831 _TR0	=	0x008c
                           00008D   832 G$TF0$0$0 == 0x008d
                           00008D   833 _TF0	=	0x008d
                           00008E   834 G$TR1$0$0 == 0x008e
                           00008E   835 _TR1	=	0x008e
                           00008F   836 G$TF1$0$0 == 0x008f
                           00008F   837 _TF1	=	0x008f
                           000088   838 G$CP0HYN0$0$0 == 0x0088
                           000088   839 _CP0HYN0	=	0x0088
                           000089   840 G$CP0HYN1$0$0 == 0x0089
                           000089   841 _CP0HYN1	=	0x0089
                           00008A   842 G$CP0HYP0$0$0 == 0x008a
                           00008A   843 _CP0HYP0	=	0x008a
                           00008B   844 G$CP0HYP1$0$0 == 0x008b
                           00008B   845 _CP0HYP1	=	0x008b
                           00008C   846 G$CP0FIF$0$0 == 0x008c
                           00008C   847 _CP0FIF	=	0x008c
                           00008D   848 G$CP0RIF$0$0 == 0x008d
                           00008D   849 _CP0RIF	=	0x008d
                           00008E   850 G$CP0OUT$0$0 == 0x008e
                           00008E   851 _CP0OUT	=	0x008e
                           00008F   852 G$CP0EN$0$0 == 0x008f
                           00008F   853 _CP0EN	=	0x008f
                           000088   854 G$CP1HYN0$0$0 == 0x0088
                           000088   855 _CP1HYN0	=	0x0088
                           000089   856 G$CP1HYN1$0$0 == 0x0089
                           000089   857 _CP1HYN1	=	0x0089
                           00008A   858 G$CP1HYP0$0$0 == 0x008a
                           00008A   859 _CP1HYP0	=	0x008a
                           00008B   860 G$CP1HYP1$0$0 == 0x008b
                           00008B   861 _CP1HYP1	=	0x008b
                           00008C   862 G$CP1FIF$0$0 == 0x008c
                           00008C   863 _CP1FIF	=	0x008c
                           00008D   864 G$CP1RIF$0$0 == 0x008d
                           00008D   865 _CP1RIF	=	0x008d
                           00008E   866 G$CP1OUT$0$0 == 0x008e
                           00008E   867 _CP1OUT	=	0x008e
                           00008F   868 G$CP1EN$0$0 == 0x008f
                           00008F   869 _CP1EN	=	0x008f
                           000088   870 G$FLHBUSY$0$0 == 0x0088
                           000088   871 _FLHBUSY	=	0x0088
                           000090   872 G$P1_0$0$0 == 0x0090
                           000090   873 _P1_0	=	0x0090
                           000091   874 G$P1_1$0$0 == 0x0091
                           000091   875 _P1_1	=	0x0091
                           000092   876 G$P1_2$0$0 == 0x0092
                           000092   877 _P1_2	=	0x0092
                           000093   878 G$P1_3$0$0 == 0x0093
                           000093   879 _P1_3	=	0x0093
                           000094   880 G$P1_4$0$0 == 0x0094
                           000094   881 _P1_4	=	0x0094
                           000095   882 G$P1_5$0$0 == 0x0095
                           000095   883 _P1_5	=	0x0095
                           000096   884 G$P1_6$0$0 == 0x0096
                           000096   885 _P1_6	=	0x0096
                           000097   886 G$P1_7$0$0 == 0x0097
                           000097   887 _P1_7	=	0x0097
                           000098   888 G$RI0$0$0 == 0x0098
                           000098   889 _RI0	=	0x0098
                           000098   890 G$RI$0$0 == 0x0098
                           000098   891 _RI	=	0x0098
                           000099   892 G$TI0$0$0 == 0x0099
                           000099   893 _TI0	=	0x0099
                           000099   894 G$TI$0$0 == 0x0099
                           000099   895 _TI	=	0x0099
                           00009A   896 G$RB80$0$0 == 0x009a
                           00009A   897 _RB80	=	0x009a
                           00009B   898 G$TB80$0$0 == 0x009b
                           00009B   899 _TB80	=	0x009b
                           00009C   900 G$REN0$0$0 == 0x009c
                           00009C   901 _REN0	=	0x009c
                           00009C   902 G$REN$0$0 == 0x009c
                           00009C   903 _REN	=	0x009c
                           00009D   904 G$SM20$0$0 == 0x009d
                           00009D   905 _SM20	=	0x009d
                           00009E   906 G$SM10$0$0 == 0x009e
                           00009E   907 _SM10	=	0x009e
                           00009F   908 G$SM00$0$0 == 0x009f
                           00009F   909 _SM00	=	0x009f
                           000098   910 G$RI1$0$0 == 0x0098
                           000098   911 _RI1	=	0x0098
                           000099   912 G$TI1$0$0 == 0x0099
                           000099   913 _TI1	=	0x0099
                           00009A   914 G$RB81$0$0 == 0x009a
                           00009A   915 _RB81	=	0x009a
                           00009B   916 G$TB81$0$0 == 0x009b
                           00009B   917 _TB81	=	0x009b
                           00009C   918 G$REN1$0$0 == 0x009c
                           00009C   919 _REN1	=	0x009c
                           00009D   920 G$MCE1$0$0 == 0x009d
                           00009D   921 _MCE1	=	0x009d
                           00009F   922 G$S1MODE$0$0 == 0x009f
                           00009F   923 _S1MODE	=	0x009f
                           0000A0   924 G$P2_0$0$0 == 0x00a0
                           0000A0   925 _P2_0	=	0x00a0
                           0000A1   926 G$P2_1$0$0 == 0x00a1
                           0000A1   927 _P2_1	=	0x00a1
                           0000A2   928 G$P2_2$0$0 == 0x00a2
                           0000A2   929 _P2_2	=	0x00a2
                           0000A3   930 G$P2_3$0$0 == 0x00a3
                           0000A3   931 _P2_3	=	0x00a3
                           0000A4   932 G$P2_4$0$0 == 0x00a4
                           0000A4   933 _P2_4	=	0x00a4
                           0000A5   934 G$P2_5$0$0 == 0x00a5
                           0000A5   935 _P2_5	=	0x00a5
                           0000A6   936 G$P2_6$0$0 == 0x00a6
                           0000A6   937 _P2_6	=	0x00a6
                           0000A7   938 G$P2_7$0$0 == 0x00a7
                           0000A7   939 _P2_7	=	0x00a7
                           0000A8   940 G$EX0$0$0 == 0x00a8
                           0000A8   941 _EX0	=	0x00a8
                           0000A9   942 G$ET0$0$0 == 0x00a9
                           0000A9   943 _ET0	=	0x00a9
                           0000AA   944 G$EX1$0$0 == 0x00aa
                           0000AA   945 _EX1	=	0x00aa
                           0000AB   946 G$ET1$0$0 == 0x00ab
                           0000AB   947 _ET1	=	0x00ab
                           0000AC   948 G$ES0$0$0 == 0x00ac
                           0000AC   949 _ES0	=	0x00ac
                           0000AC   950 G$ES$0$0 == 0x00ac
                           0000AC   951 _ES	=	0x00ac
                           0000AD   952 G$ET2$0$0 == 0x00ad
                           0000AD   953 _ET2	=	0x00ad
                           0000AF   954 G$EA$0$0 == 0x00af
                           0000AF   955 _EA	=	0x00af
                           0000B0   956 G$P3_0$0$0 == 0x00b0
                           0000B0   957 _P3_0	=	0x00b0
                           0000B1   958 G$P3_1$0$0 == 0x00b1
                           0000B1   959 _P3_1	=	0x00b1
                           0000B2   960 G$P3_2$0$0 == 0x00b2
                           0000B2   961 _P3_2	=	0x00b2
                           0000B3   962 G$P3_3$0$0 == 0x00b3
                           0000B3   963 _P3_3	=	0x00b3
                           0000B4   964 G$P3_4$0$0 == 0x00b4
                           0000B4   965 _P3_4	=	0x00b4
                           0000B5   966 G$P3_5$0$0 == 0x00b5
                           0000B5   967 _P3_5	=	0x00b5
                           0000B6   968 G$P3_6$0$0 == 0x00b6
                           0000B6   969 _P3_6	=	0x00b6
                           0000B7   970 G$P3_7$0$0 == 0x00b7
                           0000B7   971 _P3_7	=	0x00b7
                           0000B8   972 G$PX0$0$0 == 0x00b8
                           0000B8   973 _PX0	=	0x00b8
                           0000B9   974 G$PT0$0$0 == 0x00b9
                           0000B9   975 _PT0	=	0x00b9
                           0000BA   976 G$PX1$0$0 == 0x00ba
                           0000BA   977 _PX1	=	0x00ba
                           0000BB   978 G$PT1$0$0 == 0x00bb
                           0000BB   979 _PT1	=	0x00bb
                           0000BC   980 G$PS0$0$0 == 0x00bc
                           0000BC   981 _PS0	=	0x00bc
                           0000BC   982 G$PS$0$0 == 0x00bc
                           0000BC   983 _PS	=	0x00bc
                           0000BD   984 G$PT2$0$0 == 0x00bd
                           0000BD   985 _PT2	=	0x00bd
                           0000C0   986 G$SMBTOE$0$0 == 0x00c0
                           0000C0   987 _SMBTOE	=	0x00c0
                           0000C1   988 G$SMBFTE$0$0 == 0x00c1
                           0000C1   989 _SMBFTE	=	0x00c1
                           0000C2   990 G$AA$0$0 == 0x00c2
                           0000C2   991 _AA	=	0x00c2
                           0000C3   992 G$SI$0$0 == 0x00c3
                           0000C3   993 _SI	=	0x00c3
                           0000C4   994 G$STO$0$0 == 0x00c4
                           0000C4   995 _STO	=	0x00c4
                           0000C5   996 G$STA$0$0 == 0x00c5
                           0000C5   997 _STA	=	0x00c5
                           0000C6   998 G$ENSMB$0$0 == 0x00c6
                           0000C6   999 _ENSMB	=	0x00c6
                           0000C7  1000 G$BUSY$0$0 == 0x00c7
                           0000C7  1001 _BUSY	=	0x00c7
                           0000C0  1002 G$MAC0N$0$0 == 0x00c0
                           0000C0  1003 _MAC0N	=	0x00c0
                           0000C1  1004 G$MAC0SO$0$0 == 0x00c1
                           0000C1  1005 _MAC0SO	=	0x00c1
                           0000C2  1006 G$MAC0Z$0$0 == 0x00c2
                           0000C2  1007 _MAC0Z	=	0x00c2
                           0000C3  1008 G$MAC0HO$0$0 == 0x00c3
                           0000C3  1009 _MAC0HO	=	0x00c3
                           0000C8  1010 G$CPRL2$0$0 == 0x00c8
                           0000C8  1011 _CPRL2	=	0x00c8
                           0000C9  1012 G$CT2$0$0 == 0x00c9
                           0000C9  1013 _CT2	=	0x00c9
                           0000CA  1014 G$TR2$0$0 == 0x00ca
                           0000CA  1015 _TR2	=	0x00ca
                           0000CB  1016 G$EXEN2$0$0 == 0x00cb
                           0000CB  1017 _EXEN2	=	0x00cb
                           0000CE  1018 G$EXF2$0$0 == 0x00ce
                           0000CE  1019 _EXF2	=	0x00ce
                           0000CF  1020 G$TF2$0$0 == 0x00cf
                           0000CF  1021 _TF2	=	0x00cf
                           0000C8  1022 G$CPRL3$0$0 == 0x00c8
                           0000C8  1023 _CPRL3	=	0x00c8
                           0000C9  1024 G$CT3$0$0 == 0x00c9
                           0000C9  1025 _CT3	=	0x00c9
                           0000CA  1026 G$TR3$0$0 == 0x00ca
                           0000CA  1027 _TR3	=	0x00ca
                           0000CB  1028 G$EXEN3$0$0 == 0x00cb
                           0000CB  1029 _EXEN3	=	0x00cb
                           0000CE  1030 G$EXF3$0$0 == 0x00ce
                           0000CE  1031 _EXF3	=	0x00ce
                           0000CF  1032 G$TF3$0$0 == 0x00cf
                           0000CF  1033 _TF3	=	0x00cf
                           0000C8  1034 G$CPRL4$0$0 == 0x00c8
                           0000C8  1035 _CPRL4	=	0x00c8
                           0000C9  1036 G$CT4$0$0 == 0x00c9
                           0000C9  1037 _CT4	=	0x00c9
                           0000CA  1038 G$TR4$0$0 == 0x00ca
                           0000CA  1039 _TR4	=	0x00ca
                           0000CB  1040 G$EXEN4$0$0 == 0x00cb
                           0000CB  1041 _EXEN4	=	0x00cb
                           0000CE  1042 G$EXF4$0$0 == 0x00ce
                           0000CE  1043 _EXF4	=	0x00ce
                           0000CF  1044 G$TF4$0$0 == 0x00cf
                           0000CF  1045 _TF4	=	0x00cf
                           0000C8  1046 G$P4_0$0$0 == 0x00c8
                           0000C8  1047 _P4_0	=	0x00c8
                           0000C9  1048 G$P4_1$0$0 == 0x00c9
                           0000C9  1049 _P4_1	=	0x00c9
                           0000CA  1050 G$P4_2$0$0 == 0x00ca
                           0000CA  1051 _P4_2	=	0x00ca
                           0000CB  1052 G$P4_3$0$0 == 0x00cb
                           0000CB  1053 _P4_3	=	0x00cb
                           0000CC  1054 G$P4_4$0$0 == 0x00cc
                           0000CC  1055 _P4_4	=	0x00cc
                           0000CD  1056 G$P4_5$0$0 == 0x00cd
                           0000CD  1057 _P4_5	=	0x00cd
                           0000CE  1058 G$P4_6$0$0 == 0x00ce
                           0000CE  1059 _P4_6	=	0x00ce
                           0000CF  1060 G$P4_7$0$0 == 0x00cf
                           0000CF  1061 _P4_7	=	0x00cf
                           0000D0  1062 G$P$0$0 == 0x00d0
                           0000D0  1063 _P	=	0x00d0
                           0000D1  1064 G$F1$0$0 == 0x00d1
                           0000D1  1065 _F1	=	0x00d1
                           0000D2  1066 G$OV$0$0 == 0x00d2
                           0000D2  1067 _OV	=	0x00d2
                           0000D3  1068 G$RS0$0$0 == 0x00d3
                           0000D3  1069 _RS0	=	0x00d3
                           0000D4  1070 G$RS1$0$0 == 0x00d4
                           0000D4  1071 _RS1	=	0x00d4
                           0000D5  1072 G$F0$0$0 == 0x00d5
                           0000D5  1073 _F0	=	0x00d5
                           0000D6  1074 G$AC$0$0 == 0x00d6
                           0000D6  1075 _AC	=	0x00d6
                           0000D7  1076 G$CY$0$0 == 0x00d7
                           0000D7  1077 _CY	=	0x00d7
                           0000D8  1078 G$CCF0$0$0 == 0x00d8
                           0000D8  1079 _CCF0	=	0x00d8
                           0000D9  1080 G$CCF1$0$0 == 0x00d9
                           0000D9  1081 _CCF1	=	0x00d9
                           0000DA  1082 G$CCF2$0$0 == 0x00da
                           0000DA  1083 _CCF2	=	0x00da
                           0000DB  1084 G$CCF3$0$0 == 0x00db
                           0000DB  1085 _CCF3	=	0x00db
                           0000DC  1086 G$CCF4$0$0 == 0x00dc
                           0000DC  1087 _CCF4	=	0x00dc
                           0000DD  1088 G$CCF5$0$0 == 0x00dd
                           0000DD  1089 _CCF5	=	0x00dd
                           0000DE  1090 G$CR$0$0 == 0x00de
                           0000DE  1091 _CR	=	0x00de
                           0000DF  1092 G$CF$0$0 == 0x00df
                           0000DF  1093 _CF	=	0x00df
                           0000D8  1094 G$P5_0$0$0 == 0x00d8
                           0000D8  1095 _P5_0	=	0x00d8
                           0000D9  1096 G$P5_1$0$0 == 0x00d9
                           0000D9  1097 _P5_1	=	0x00d9
                           0000DA  1098 G$P5_2$0$0 == 0x00da
                           0000DA  1099 _P5_2	=	0x00da
                           0000DB  1100 G$P5_3$0$0 == 0x00db
                           0000DB  1101 _P5_3	=	0x00db
                           0000DC  1102 G$P5_4$0$0 == 0x00dc
                           0000DC  1103 _P5_4	=	0x00dc
                           0000DD  1104 G$P5_5$0$0 == 0x00dd
                           0000DD  1105 _P5_5	=	0x00dd
                           0000DE  1106 G$P5_6$0$0 == 0x00de
                           0000DE  1107 _P5_6	=	0x00de
                           0000DF  1108 G$P5_7$0$0 == 0x00df
                           0000DF  1109 _P5_7	=	0x00df
                           0000E8  1110 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1111 _AD0LJST	=	0x00e8
                           0000E9  1112 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1113 _AD0WINT	=	0x00e9
                           0000EA  1114 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1115 _AD0CM0	=	0x00ea
                           0000EB  1116 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1117 _AD0CM1	=	0x00eb
                           0000EC  1118 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1119 _AD0BUSY	=	0x00ec
                           0000ED  1120 G$AD0INT$0$0 == 0x00ed
                           0000ED  1121 _AD0INT	=	0x00ed
                           0000EE  1122 G$AD0TM$0$0 == 0x00ee
                           0000EE  1123 _AD0TM	=	0x00ee
                           0000EF  1124 G$AD0EN$0$0 == 0x00ef
                           0000EF  1125 _AD0EN	=	0x00ef
                           0000E8  1126 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1127 _AD2WINT	=	0x00e8
                           0000E9  1128 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1129 _AD2CM0	=	0x00e9
                           0000EA  1130 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1131 _AD2CM1	=	0x00ea
                           0000EB  1132 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1133 _AD2CM2	=	0x00eb
                           0000EC  1134 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1135 _AD2BUSY	=	0x00ec
                           0000ED  1136 G$AD2INT$0$0 == 0x00ed
                           0000ED  1137 _AD2INT	=	0x00ed
                           0000EE  1138 G$AD2TM$0$0 == 0x00ee
                           0000EE  1139 _AD2TM	=	0x00ee
                           0000EF  1140 G$AD2EN$0$0 == 0x00ef
                           0000EF  1141 _AD2EN	=	0x00ef
                           0000E8  1142 G$P6_0$0$0 == 0x00e8
                           0000E8  1143 _P6_0	=	0x00e8
                           0000E9  1144 G$P6_1$0$0 == 0x00e9
                           0000E9  1145 _P6_1	=	0x00e9
                           0000EA  1146 G$P6_2$0$0 == 0x00ea
                           0000EA  1147 _P6_2	=	0x00ea
                           0000EB  1148 G$P6_3$0$0 == 0x00eb
                           0000EB  1149 _P6_3	=	0x00eb
                           0000EC  1150 G$P6_4$0$0 == 0x00ec
                           0000EC  1151 _P6_4	=	0x00ec
                           0000ED  1152 G$P6_5$0$0 == 0x00ed
                           0000ED  1153 _P6_5	=	0x00ed
                           0000EE  1154 G$P6_6$0$0 == 0x00ee
                           0000EE  1155 _P6_6	=	0x00ee
                           0000EF  1156 G$P6_7$0$0 == 0x00ef
                           0000EF  1157 _P6_7	=	0x00ef
                           0000F8  1158 G$SPIEN$0$0 == 0x00f8
                           0000F8  1159 _SPIEN	=	0x00f8
                           0000F9  1160 G$TXBMT$0$0 == 0x00f9
                           0000F9  1161 _TXBMT	=	0x00f9
                           0000FA  1162 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1163 _NSSMD0	=	0x00fa
                           0000FB  1164 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1165 _NSSMD1	=	0x00fb
                           0000FC  1166 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1167 _RXOVRN	=	0x00fc
                           0000FD  1168 G$MODF$0$0 == 0x00fd
                           0000FD  1169 _MODF	=	0x00fd
                           0000FE  1170 G$WCOL$0$0 == 0x00fe
                           0000FE  1171 _WCOL	=	0x00fe
                           0000FF  1172 G$SPIF$0$0 == 0x00ff
                           0000FF  1173 _SPIF	=	0x00ff
                           0000F8  1174 G$P7_0$0$0 == 0x00f8
                           0000F8  1175 _P7_0	=	0x00f8
                           0000F9  1176 G$P7_1$0$0 == 0x00f9
                           0000F9  1177 _P7_1	=	0x00f9
                           0000FA  1178 G$P7_2$0$0 == 0x00fa
                           0000FA  1179 _P7_2	=	0x00fa
                           0000FB  1180 G$P7_3$0$0 == 0x00fb
                           0000FB  1181 _P7_3	=	0x00fb
                           0000FC  1182 G$P7_4$0$0 == 0x00fc
                           0000FC  1183 _P7_4	=	0x00fc
                           0000FD  1184 G$P7_5$0$0 == 0x00fd
                           0000FD  1185 _P7_5	=	0x00fd
                           0000FE  1186 G$P7_6$0$0 == 0x00fe
                           0000FE  1187 _P7_6	=	0x00fe
                           0000FF  1188 G$P7_7$0$0 == 0x00ff
                           0000FF  1189 _P7_7	=	0x00ff
                                   1190 ;--------------------------------------------------------
                                   1191 ; overlayable register banks
                                   1192 ;--------------------------------------------------------
                                   1193 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1194 	.ds 8
                                   1195 ;--------------------------------------------------------
                                   1196 ; internal ram data
                                   1197 ;--------------------------------------------------------
                                   1198 	.area DSEG    (DATA)
                           000000  1199 G$local_ct$0$0==.
      000008                       1200 _local_ct::
      000008                       1201 	.ds 2
                           000002  1202 G$alien_ct$0$0==.
      00000A                       1203 _alien_ct::
      00000A                       1204 	.ds 2
                           000004  1205 G$counts$0$0==.
      00000C                       1206 _counts::
      00000C                       1207 	.ds 2
                                   1208 ;--------------------------------------------------------
                                   1209 ; overlayable items in internal ram 
                                   1210 ;--------------------------------------------------------
                                   1211 	.area	OSEG    (OVR,DATA)
                                   1212 	.area	OSEG    (OVR,DATA)
                                   1213 	.area	OSEG    (OVR,DATA)
                                   1214 	.area	OSEG    (OVR,DATA)
                                   1215 	.area	OSEG    (OVR,DATA)
                                   1216 ;--------------------------------------------------------
                                   1217 ; Stack segment in internal ram 
                                   1218 ;--------------------------------------------------------
                                   1219 	.area	SSEG
      00003C                       1220 __start__stack:
      00003C                       1221 	.ds	1
                                   1222 
                                   1223 ;--------------------------------------------------------
                                   1224 ; indirectly addressable internal ram data
                                   1225 ;--------------------------------------------------------
                                   1226 	.area ISEG    (DATA)
                                   1227 ;--------------------------------------------------------
                                   1228 ; absolute internal ram data
                                   1229 ;--------------------------------------------------------
                                   1230 	.area IABS    (ABS,DATA)
                                   1231 	.area IABS    (ABS,DATA)
                                   1232 ;--------------------------------------------------------
                                   1233 ; bit data
                                   1234 ;--------------------------------------------------------
                                   1235 	.area BSEG    (BIT)
                                   1236 ;--------------------------------------------------------
                                   1237 ; paged external ram data
                                   1238 ;--------------------------------------------------------
                                   1239 	.area PSEG    (PAG,XDATA)
                                   1240 ;--------------------------------------------------------
                                   1241 ; external ram data
                                   1242 ;--------------------------------------------------------
                                   1243 	.area XSEG    (XDATA)
                                   1244 ;--------------------------------------------------------
                                   1245 ; absolute external ram data
                                   1246 ;--------------------------------------------------------
                                   1247 	.area XABS    (ABS,XDATA)
                                   1248 ;--------------------------------------------------------
                                   1249 ; external initialized ram data
                                   1250 ;--------------------------------------------------------
                                   1251 	.area XISEG   (XDATA)
                                   1252 	.area HOME    (CODE)
                                   1253 	.area GSINIT0 (CODE)
                                   1254 	.area GSINIT1 (CODE)
                                   1255 	.area GSINIT2 (CODE)
                                   1256 	.area GSINIT3 (CODE)
                                   1257 	.area GSINIT4 (CODE)
                                   1258 	.area GSINIT5 (CODE)
                                   1259 	.area GSINIT  (CODE)
                                   1260 	.area GSFINAL (CODE)
                                   1261 	.area CSEG    (CODE)
                                   1262 ;--------------------------------------------------------
                                   1263 ; interrupt vector 
                                   1264 ;--------------------------------------------------------
                                   1265 	.area HOME    (CODE)
      000000                       1266 __interrupt_vect:
      000000 02 00 21         [24] 1267 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1268 	reti
      000004                       1269 	.ds	7
      00000B 32               [24] 1270 	reti
      00000C                       1271 	.ds	7
      000013 32               [24] 1272 	reti
      000014                       1273 	.ds	7
      00001B 02 03 28         [24] 1274 	ljmp	_Timer1_ISR
                                   1275 ;--------------------------------------------------------
                                   1276 ; global & static initialisations
                                   1277 ;--------------------------------------------------------
                                   1278 	.area HOME    (CODE)
                                   1279 	.area GSINIT  (CODE)
                                   1280 	.area GSFINAL (CODE)
                                   1281 	.area GSINIT  (CODE)
                                   1282 	.globl __sdcc_gsinit_startup
                                   1283 	.globl __sdcc_program_startup
                                   1284 	.globl __start__stack
                                   1285 	.globl __mcs51_genXINIT
                                   1286 	.globl __mcs51_genXRAMCLEAR
                                   1287 	.globl __mcs51_genRAMCLEAR
                           000000  1288 	C$SPI0.c$39$1$59 ==.
                                   1289 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:39: int local_ct = 1;
      00007A 75 08 01         [24] 1290 	mov	_local_ct,#0x01
      00007D 75 09 00         [24] 1291 	mov	(_local_ct + 1),#0x00
                           000006  1292 	C$SPI0.c$40$1$59 ==.
                                   1293 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:40: int alien_ct = 14;
      000080 75 0A 0E         [24] 1294 	mov	_alien_ct,#0x0E
      000083 75 0B 00         [24] 1295 	mov	(_alien_ct + 1),#0x00
                           00000C  1296 	C$SPI0.c$41$1$59 ==.
                                   1297 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:41: unsigned int counts =0;
      000086 E4               [12] 1298 	clr	a
      000087 F5 0C            [12] 1299 	mov	_counts,a
      000089 F5 0D            [12] 1300 	mov	(_counts + 1),a
                                   1301 	.area GSFINAL (CODE)
      00008B 02 00 1E         [24] 1302 	ljmp	__sdcc_program_startup
                                   1303 ;--------------------------------------------------------
                                   1304 ; Home
                                   1305 ;--------------------------------------------------------
                                   1306 	.area HOME    (CODE)
                                   1307 	.area HOME    (CODE)
      00001E                       1308 __sdcc_program_startup:
      00001E 02 00 A3         [24] 1309 	ljmp	_main
                                   1310 ;	return from main will return to caller
                                   1311 ;--------------------------------------------------------
                                   1312 ; code
                                   1313 ;--------------------------------------------------------
                                   1314 	.area CSEG    (CODE)
                                   1315 ;------------------------------------------------------------
                                   1316 ;Allocation info for local variables in function 'putchar'
                                   1317 ;------------------------------------------------------------
                                   1318 ;c                         Allocated to registers r7 
                                   1319 ;------------------------------------------------------------
                           000000  1320 	G$putchar$0$0 ==.
                           000000  1321 	C$putget.h$18$0$0 ==.
                                   1322 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:18: void putchar(char c)
                                   1323 ;	-----------------------------------------
                                   1324 ;	 function putchar
                                   1325 ;	-----------------------------------------
      00008E                       1326 _putchar:
                           000007  1327 	ar7 = 0x07
                           000006  1328 	ar6 = 0x06
                           000005  1329 	ar5 = 0x05
                           000004  1330 	ar4 = 0x04
                           000003  1331 	ar3 = 0x03
                           000002  1332 	ar2 = 0x02
                           000001  1333 	ar1 = 0x01
                           000000  1334 	ar0 = 0x00
      00008E AF 82            [24] 1335 	mov	r7,dpl
                           000002  1336 	C$putget.h$20$1$16 ==.
                                   1337 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:20: while(!TI0); 
      000090                       1338 00101$:
                           000002  1339 	C$putget.h$21$1$16 ==.
                                   1340 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:21: TI0=0;
      000090 10 99 02         [24] 1341 	jbc	_TI0,00112$
      000093 80 FB            [24] 1342 	sjmp	00101$
      000095                       1343 00112$:
                           000007  1344 	C$putget.h$22$1$16 ==.
                                   1345 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:22: SBUF0 = c;
      000095 8F 99            [24] 1346 	mov	_SBUF0,r7
                           000009  1347 	C$putget.h$23$1$16 ==.
                           000009  1348 	XG$putchar$0$0 ==.
      000097 22               [24] 1349 	ret
                                   1350 ;------------------------------------------------------------
                                   1351 ;Allocation info for local variables in function 'getchar'
                                   1352 ;------------------------------------------------------------
                                   1353 ;c                         Allocated to registers 
                                   1354 ;------------------------------------------------------------
                           00000A  1355 	G$getchar$0$0 ==.
                           00000A  1356 	C$putget.h$28$1$16 ==.
                                   1357 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:28: char getchar(void)
                                   1358 ;	-----------------------------------------
                                   1359 ;	 function getchar
                                   1360 ;	-----------------------------------------
      000098                       1361 _getchar:
                           00000A  1362 	C$putget.h$31$1$18 ==.
                                   1363 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:31: while(!RI0);
      000098                       1364 00101$:
                           00000A  1365 	C$putget.h$32$1$18 ==.
                                   1366 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:32: RI0 =0;
      000098 10 98 02         [24] 1367 	jbc	_RI0,00112$
      00009B 80 FB            [24] 1368 	sjmp	00101$
      00009D                       1369 00112$:
                           00000F  1370 	C$putget.h$33$1$18 ==.
                                   1371 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:33: c = SBUF0;
      00009D E5 99            [12] 1372 	mov	a,_SBUF0
                           000011  1373 	C$putget.h$36$1$18 ==.
                                   1374 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_loop/putget.h:36: return SBUF0;
      00009F 85 99 82         [24] 1375 	mov	dpl,_SBUF0
                           000014  1376 	C$putget.h$37$1$18 ==.
                           000014  1377 	XG$getchar$0$0 ==.
      0000A2 22               [24] 1378 	ret
                                   1379 ;------------------------------------------------------------
                                   1380 ;Allocation info for local variables in function 'main'
                                   1381 ;------------------------------------------------------------
                                   1382 ;c                         Allocated to registers r7 
                                   1383 ;i                         Allocated to registers 
                                   1384 ;d                         Allocated to registers r7 
                                   1385 ;------------------------------------------------------------
                           000015  1386 	G$main$0$0 ==.
                           000015  1387 	C$SPI0.c$43$1$18 ==.
                                   1388 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:43: void main (void)
                                   1389 ;	-----------------------------------------
                                   1390 ;	 function main
                                   1391 ;	-----------------------------------------
      0000A3                       1392 _main:
                           000015  1393 	C$SPI0.c$49$1$33 ==.
                                   1394 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:49: SFRPAGE = CONFIG_PAGE;
      0000A3 75 84 0F         [24] 1395 	mov	_SFRPAGE,#0x0F
                           000018  1396 	C$SPI0.c$50$1$33 ==.
                                   1397 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:50: IE |=0x88;
      0000A6 43 A8 88         [24] 1398 	orl	_IE,#0x88
                           00001B  1399 	C$SPI0.c$51$1$33 ==.
                                   1400 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:51: PT1 = 1;
      0000A9 D2 BB            [12] 1401 	setb	_PT1
                           00001D  1402 	C$SPI0.c$52$1$33 ==.
                                   1403 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:52: SYSCLK_INIT();
      0000AB 12 03 44         [24] 1404 	lcall	_SYSCLK_INIT
                           000020  1405 	C$SPI0.c$53$1$33 ==.
                                   1406 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:53: Port_IO_Init();
      0000AE 12 03 A3         [24] 1407 	lcall	_Port_IO_Init
                           000023  1408 	C$SPI0.c$54$1$33 ==.
                                   1409 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:54: Timer_Init();
      0000B1 12 03 63         [24] 1410 	lcall	_Timer_Init
                           000026  1411 	C$SPI0.c$55$1$33 ==.
                                   1412 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:55: UART_Init();
      0000B4 12 03 8B         [24] 1413 	lcall	_UART_Init
                           000029  1414 	C$SPI0.c$56$1$33 ==.
                                   1415 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:56: SPI0_INIT();
      0000B7 12 03 BB         [24] 1416 	lcall	_SPI0_INIT
                           00002C  1417 	C$SPI0.c$57$1$33 ==.
                                   1418 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:57: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
      0000BA 75 84 00         [24] 1419 	mov	_SFRPAGE,#0x00
                           00002F  1420 	C$SPI0.c$58$1$33 ==.
                                   1421 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:58: printf("\033[2J");
      0000BD 74 02            [12] 1422 	mov	a,#___str_0
      0000BF C0 E0            [24] 1423 	push	acc
      0000C1 74 0A            [12] 1424 	mov	a,#(___str_0 >> 8)
      0000C3 C0 E0            [24] 1425 	push	acc
      0000C5 74 80            [12] 1426 	mov	a,#0x80
      0000C7 C0 E0            [24] 1427 	push	acc
      0000C9 12 03 EE         [24] 1428 	lcall	_printf
      0000CC 15 81            [12] 1429 	dec	sp
      0000CE 15 81            [12] 1430 	dec	sp
      0000D0 15 81            [12] 1431 	dec	sp
                           000044  1432 	C$SPI0.c$59$1$33 ==.
                                   1433 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:59: printf("UART is working");
      0000D2 74 07            [12] 1434 	mov	a,#___str_1
      0000D4 C0 E0            [24] 1435 	push	acc
      0000D6 74 0A            [12] 1436 	mov	a,#(___str_1 >> 8)
      0000D8 C0 E0            [24] 1437 	push	acc
      0000DA 74 80            [12] 1438 	mov	a,#0x80
      0000DC C0 E0            [24] 1439 	push	acc
      0000DE 12 03 EE         [24] 1440 	lcall	_printf
      0000E1 15 81            [12] 1441 	dec	sp
      0000E3 15 81            [12] 1442 	dec	sp
      0000E5 15 81            [12] 1443 	dec	sp
                           000059  1444 	C$SPI0.c$60$1$33 ==.
                                   1445 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:60: while(1)
      0000E7                       1446 00107$:
                           000059  1447 	C$SPI0.c$63$2$34 ==.
                                   1448 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:63: if(RI0)
                           000059  1449 	C$SPI0.c$65$3$35 ==.
                                   1450 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:65: RI0 = 0;
      0000E7 10 98 02         [24] 1451 	jbc	_RI0,00130$
      0000EA 80 FB            [24] 1452 	sjmp	00107$
      0000EC                       1453 00130$:
                           00005E  1454 	C$SPI0.c$66$3$35 ==.
                                   1455 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:66: c = SBUF0;
      0000EC AF 99            [24] 1456 	mov	r7,_SBUF0
                           000060  1457 	C$SPI0.c$67$3$35 ==.
                                   1458 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:67: local(c);
      0000EE 8F 82            [24] 1459 	mov	dpl,r7
      0000F0 C0 07            [24] 1460 	push	ar7
      0000F2 12 01 28         [24] 1461 	lcall	_local
      0000F5 D0 07            [24] 1462 	pop	ar7
                           000069  1463 	C$SPI0.c$68$3$35 ==.
                                   1464 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:68: write(c);
      0000F7 8F 82            [24] 1465 	mov	dpl,r7
      0000F9 12 02 A7         [24] 1466 	lcall	_write
                           00006E  1467 	C$SPI0.c$69$3$35 ==.
                                   1468 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:69: SFRPAGE = UART0_PAGE;
      0000FC 75 84 00         [24] 1469 	mov	_SFRPAGE,#0x00
                           000071  1470 	C$SPI0.c$70$3$35 ==.
                                   1471 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:70: for (i=0;i<101;i++);
      0000FF 7E 65            [12] 1472 	mov	r6,#0x65
      000101 7F 00            [12] 1473 	mov	r7,#0x00
      000103                       1474 00111$:
      000103 1E               [12] 1475 	dec	r6
      000104 BE FF 01         [24] 1476 	cjne	r6,#0xFF,00131$
      000107 1F               [12] 1477 	dec	r7
      000108                       1478 00131$:
      000108 EE               [12] 1479 	mov	a,r6
      000109 4F               [12] 1480 	orl	a,r7
      00010A 70 F7            [24] 1481 	jnz	00111$
                           00007E  1482 	C$SPI0.c$71$3$35 ==.
                                   1483 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:71: d = read();
      00010C 12 02 21         [24] 1484 	lcall	_read
      00010F AF 82            [24] 1485 	mov	r7,dpl
                           000083  1486 	C$SPI0.c$72$3$35 ==.
                                   1487 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:72: SPIF =0;
      000111 C2 FF            [12] 1488 	clr	_SPIF
                           000085  1489 	C$SPI0.c$73$3$35 ==.
                                   1490 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:73: SFRPAGE = UART0_PAGE;
      000113 75 84 00         [24] 1491 	mov	_SFRPAGE,#0x00
                           000088  1492 	C$SPI0.c$74$3$35 ==.
                                   1493 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:74: foreign(d);
      000116 8F 82            [24] 1494 	mov	dpl,r7
      000118 C0 07            [24] 1495 	push	ar7
      00011A 12 01 9A         [24] 1496 	lcall	_foreign
      00011D D0 07            [24] 1497 	pop	ar7
                           000091  1498 	C$SPI0.c$75$3$35 ==.
                                   1499 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:75: if(d == 0x7F){dummy();}
      00011F BF 7F C5         [24] 1500 	cjne	r7,#0x7F,00107$
      000122 12 02 CA         [24] 1501 	lcall	_dummy
      000125 80 C0            [24] 1502 	sjmp	00107$
                           000099  1503 	C$SPI0.c$79$1$33 ==.
                           000099  1504 	XG$main$0$0 ==.
      000127 22               [24] 1505 	ret
                                   1506 ;------------------------------------------------------------
                                   1507 ;Allocation info for local variables in function 'local'
                                   1508 ;------------------------------------------------------------
                                   1509 ;c                         Allocated to registers r7 
                                   1510 ;------------------------------------------------------------
                           00009A  1511 	G$local$0$0 ==.
                           00009A  1512 	C$SPI0.c$80$1$33 ==.
                                   1513 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:80: void local(char c)
                                   1514 ;	-----------------------------------------
                                   1515 ;	 function local
                                   1516 ;	-----------------------------------------
      000128                       1517 _local:
      000128 AF 82            [24] 1518 	mov	r7,dpl
                           00009C  1519 	C$SPI0.c$82$1$38 ==.
                                   1520 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:82: printf("\033[%d;1H",local_ct);
      00012A C0 07            [24] 1521 	push	ar7
      00012C C0 08            [24] 1522 	push	_local_ct
      00012E C0 09            [24] 1523 	push	(_local_ct + 1)
      000130 74 17            [12] 1524 	mov	a,#___str_2
      000132 C0 E0            [24] 1525 	push	acc
      000134 74 0A            [12] 1526 	mov	a,#(___str_2 >> 8)
      000136 C0 E0            [24] 1527 	push	acc
      000138 74 80            [12] 1528 	mov	a,#0x80
      00013A C0 E0            [24] 1529 	push	acc
      00013C 12 03 EE         [24] 1530 	lcall	_printf
      00013F E5 81            [12] 1531 	mov	a,sp
      000141 24 FB            [12] 1532 	add	a,#0xfb
      000143 F5 81            [12] 1533 	mov	sp,a
      000145 D0 07            [24] 1534 	pop	ar7
                           0000B9  1535 	C$SPI0.c$83$1$38 ==.
                                   1536 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:83: if(local_ct < 13){local_ct++;}
      000147 C3               [12] 1537 	clr	c
      000148 E5 08            [12] 1538 	mov	a,_local_ct
      00014A 94 0D            [12] 1539 	subb	a,#0x0D
      00014C E5 09            [12] 1540 	mov	a,(_local_ct + 1)
      00014E 64 80            [12] 1541 	xrl	a,#0x80
      000150 94 80            [12] 1542 	subb	a,#0x80
      000152 50 0A            [24] 1543 	jnc	00102$
      000154 05 08            [12] 1544 	inc	_local_ct
      000156 E4               [12] 1545 	clr	a
      000157 B5 08 38         [24] 1546 	cjne	a,_local_ct,00104$
      00015A 05 09            [12] 1547 	inc	(_local_ct + 1)
      00015C 80 34            [24] 1548 	sjmp	00104$
      00015E                       1549 00102$:
                           0000D0  1550 	C$SPI0.c$84$2$40 ==.
                                   1551 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:84: else{printf("\033[1J");local_ct=2;printf("\033[1;1H");}
      00015E C0 07            [24] 1552 	push	ar7
      000160 74 1F            [12] 1553 	mov	a,#___str_3
      000162 C0 E0            [24] 1554 	push	acc
      000164 74 0A            [12] 1555 	mov	a,#(___str_3 >> 8)
      000166 C0 E0            [24] 1556 	push	acc
      000168 74 80            [12] 1557 	mov	a,#0x80
      00016A C0 E0            [24] 1558 	push	acc
      00016C 12 03 EE         [24] 1559 	lcall	_printf
      00016F 15 81            [12] 1560 	dec	sp
      000171 15 81            [12] 1561 	dec	sp
      000173 15 81            [12] 1562 	dec	sp
      000175 75 08 02         [24] 1563 	mov	_local_ct,#0x02
      000178 75 09 00         [24] 1564 	mov	(_local_ct + 1),#0x00
      00017B 74 24            [12] 1565 	mov	a,#___str_4
      00017D C0 E0            [24] 1566 	push	acc
      00017F 74 0A            [12] 1567 	mov	a,#(___str_4 >> 8)
      000181 C0 E0            [24] 1568 	push	acc
      000183 74 80            [12] 1569 	mov	a,#0x80
      000185 C0 E0            [24] 1570 	push	acc
      000187 12 03 EE         [24] 1571 	lcall	_printf
      00018A 15 81            [12] 1572 	dec	sp
      00018C 15 81            [12] 1573 	dec	sp
      00018E 15 81            [12] 1574 	dec	sp
      000190 D0 07            [24] 1575 	pop	ar7
                           000104  1576 	C$SPI0.c$85$1$38 ==.
                                   1577 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:85: while(!TI0);
      000192                       1578 00104$:
                           000104  1579 	C$SPI0.c$86$1$38 ==.
                                   1580 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:86: TI0 = 0;
      000192 10 99 02         [24] 1581 	jbc	_TI0,00120$
      000195 80 FB            [24] 1582 	sjmp	00104$
      000197                       1583 00120$:
                           000109  1584 	C$SPI0.c$87$1$38 ==.
                                   1585 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:87: SBUF0 = c;
      000197 8F 99            [24] 1586 	mov	_SBUF0,r7
                           00010B  1587 	C$SPI0.c$88$1$38 ==.
                           00010B  1588 	XG$local$0$0 ==.
      000199 22               [24] 1589 	ret
                                   1590 ;------------------------------------------------------------
                                   1591 ;Allocation info for local variables in function 'foreign'
                                   1592 ;------------------------------------------------------------
                                   1593 ;c                         Allocated to registers r7 
                                   1594 ;------------------------------------------------------------
                           00010C  1595 	G$foreign$0$0 ==.
                           00010C  1596 	C$SPI0.c$90$1$38 ==.
                                   1597 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:90: void foreign(char c)
                                   1598 ;	-----------------------------------------
                                   1599 ;	 function foreign
                                   1600 ;	-----------------------------------------
      00019A                       1601 _foreign:
      00019A AF 82            [24] 1602 	mov	r7,dpl
                           00010E  1603 	C$SPI0.c$92$1$42 ==.
                                   1604 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:92: printf("\033[%d;1H",alien_ct);
      00019C C0 07            [24] 1605 	push	ar7
      00019E C0 0A            [24] 1606 	push	_alien_ct
      0001A0 C0 0B            [24] 1607 	push	(_alien_ct + 1)
      0001A2 74 17            [12] 1608 	mov	a,#___str_2
      0001A4 C0 E0            [24] 1609 	push	acc
      0001A6 74 0A            [12] 1610 	mov	a,#(___str_2 >> 8)
      0001A8 C0 E0            [24] 1611 	push	acc
      0001AA 74 80            [12] 1612 	mov	a,#0x80
      0001AC C0 E0            [24] 1613 	push	acc
      0001AE 12 03 EE         [24] 1614 	lcall	_printf
      0001B1 E5 81            [12] 1615 	mov	a,sp
      0001B3 24 FB            [12] 1616 	add	a,#0xfb
      0001B5 F5 81            [12] 1617 	mov	sp,a
      0001B7 D0 07            [24] 1618 	pop	ar7
                           00012B  1619 	C$SPI0.c$93$1$42 ==.
                                   1620 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:93: if(alien_ct < 25){alien_ct++;}
      0001B9 C3               [12] 1621 	clr	c
      0001BA E5 0A            [12] 1622 	mov	a,_alien_ct
      0001BC 94 19            [12] 1623 	subb	a,#0x19
      0001BE E5 0B            [12] 1624 	mov	a,(_alien_ct + 1)
      0001C0 64 80            [12] 1625 	xrl	a,#0x80
      0001C2 94 80            [12] 1626 	subb	a,#0x80
      0001C4 50 0A            [24] 1627 	jnc	00102$
      0001C6 05 0A            [12] 1628 	inc	_alien_ct
      0001C8 E4               [12] 1629 	clr	a
      0001C9 B5 0A 4D         [24] 1630 	cjne	a,_alien_ct,00104$
      0001CC 05 0B            [12] 1631 	inc	(_alien_ct + 1)
      0001CE 80 49            [24] 1632 	sjmp	00104$
      0001D0                       1633 00102$:
                           000142  1634 	C$SPI0.c$94$2$44 ==.
                                   1635 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:94: else{printf("\033[12;1H");printf("\033[J");alien_ct = 12;printf("\033[12;1H");}
      0001D0 C0 07            [24] 1636 	push	ar7
      0001D2 74 2B            [12] 1637 	mov	a,#___str_5
      0001D4 C0 E0            [24] 1638 	push	acc
      0001D6 74 0A            [12] 1639 	mov	a,#(___str_5 >> 8)
      0001D8 C0 E0            [24] 1640 	push	acc
      0001DA 74 80            [12] 1641 	mov	a,#0x80
      0001DC C0 E0            [24] 1642 	push	acc
      0001DE 12 03 EE         [24] 1643 	lcall	_printf
      0001E1 15 81            [12] 1644 	dec	sp
      0001E3 15 81            [12] 1645 	dec	sp
      0001E5 15 81            [12] 1646 	dec	sp
      0001E7 74 33            [12] 1647 	mov	a,#___str_6
      0001E9 C0 E0            [24] 1648 	push	acc
      0001EB 74 0A            [12] 1649 	mov	a,#(___str_6 >> 8)
      0001ED C0 E0            [24] 1650 	push	acc
      0001EF 74 80            [12] 1651 	mov	a,#0x80
      0001F1 C0 E0            [24] 1652 	push	acc
      0001F3 12 03 EE         [24] 1653 	lcall	_printf
      0001F6 15 81            [12] 1654 	dec	sp
      0001F8 15 81            [12] 1655 	dec	sp
      0001FA 15 81            [12] 1656 	dec	sp
      0001FC 75 0A 0C         [24] 1657 	mov	_alien_ct,#0x0C
      0001FF 75 0B 00         [24] 1658 	mov	(_alien_ct + 1),#0x00
      000202 74 2B            [12] 1659 	mov	a,#___str_5
      000204 C0 E0            [24] 1660 	push	acc
      000206 74 0A            [12] 1661 	mov	a,#(___str_5 >> 8)
      000208 C0 E0            [24] 1662 	push	acc
      00020A 74 80            [12] 1663 	mov	a,#0x80
      00020C C0 E0            [24] 1664 	push	acc
      00020E 12 03 EE         [24] 1665 	lcall	_printf
      000211 15 81            [12] 1666 	dec	sp
      000213 15 81            [12] 1667 	dec	sp
      000215 15 81            [12] 1668 	dec	sp
      000217 D0 07            [24] 1669 	pop	ar7
                           00018B  1670 	C$SPI0.c$95$1$42 ==.
                                   1671 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:95: while(!TI0);
      000219                       1672 00104$:
                           00018B  1673 	C$SPI0.c$96$1$42 ==.
                                   1674 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:96: TI0 = 0;
      000219 10 99 02         [24] 1675 	jbc	_TI0,00120$
      00021C 80 FB            [24] 1676 	sjmp	00104$
      00021E                       1677 00120$:
                           000190  1678 	C$SPI0.c$97$1$42 ==.
                                   1679 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:97: SBUF0 = c;
      00021E 8F 99            [24] 1680 	mov	_SBUF0,r7
                           000192  1681 	C$SPI0.c$98$1$42 ==.
                           000192  1682 	XG$foreign$0$0 ==.
      000220 22               [24] 1683 	ret
                                   1684 ;------------------------------------------------------------
                                   1685 ;Allocation info for local variables in function 'read'
                                   1686 ;------------------------------------------------------------
                                   1687 ;i                         Allocated to registers r6 r7 
                                   1688 ;------------------------------------------------------------
                           000193  1689 	G$read$0$0 ==.
                           000193  1690 	C$SPI0.c$99$1$42 ==.
                                   1691 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:99: char read ()
                                   1692 ;	-----------------------------------------
                                   1693 ;	 function read
                                   1694 ;	-----------------------------------------
      000221                       1695 _read:
                           000193  1696 	C$SPI0.c$102$1$45 ==.
                                   1697 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:102: SFRPAGE = SPI0_PAGE;
      000221 75 84 00         [24] 1698 	mov	_SFRPAGE,#0x00
                           000196  1699 	C$SPI0.c$103$1$45 ==.
                                   1700 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:103: NSSMD0 = 0;
      000224 C2 FA            [12] 1701 	clr	_NSSMD0
                           000198  1702 	C$SPI0.c$104$1$45 ==.
                                   1703 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:104: for (i=0;i<101;i++);
      000226 7E 65            [12] 1704 	mov	r6,#0x65
      000228 7F 00            [12] 1705 	mov	r7,#0x00
      00022A                       1706 00111$:
      00022A 1E               [12] 1707 	dec	r6
      00022B BE FF 01         [24] 1708 	cjne	r6,#0xFF,00143$
      00022E 1F               [12] 1709 	dec	r7
      00022F                       1710 00143$:
      00022F EE               [12] 1711 	mov	a,r6
      000230 4F               [12] 1712 	orl	a,r7
      000231 70 F7            [24] 1713 	jnz	00111$
                           0001A5  1714 	C$SPI0.c$105$1$45 ==.
                                   1715 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:105: write(0x64);
      000233 75 82 64         [24] 1716 	mov	dpl,#0x64
      000236 12 02 A7         [24] 1717 	lcall	_write
                           0001AB  1718 	C$SPI0.c$106$1$45 ==.
                                   1719 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:106: while(!SPIF);
      000239                       1720 00102$:
      000239 30 FF FD         [24] 1721 	jnb	_SPIF,00102$
                           0001AE  1722 	C$SPI0.c$107$1$45 ==.
                                   1723 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:107: NSSMD0 = 1;
      00023C D2 FA            [12] 1724 	setb	_NSSMD0
                           0001B0  1725 	C$SPI0.c$108$1$45 ==.
                                   1726 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:108: for (i=0;i<101;i++);
      00023E 7E 65            [12] 1727 	mov	r6,#0x65
      000240 7F 00            [12] 1728 	mov	r7,#0x00
      000242                       1729 00114$:
      000242 1E               [12] 1730 	dec	r6
      000243 BE FF 01         [24] 1731 	cjne	r6,#0xFF,00146$
      000246 1F               [12] 1732 	dec	r7
      000247                       1733 00146$:
      000247 EE               [12] 1734 	mov	a,r6
      000248 4F               [12] 1735 	orl	a,r7
                           0001BB  1736 	C$SPI0.c$109$1$45 ==.
                                   1737 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:109: counts =1 ;
      000249 70 F7            [24] 1738 	jnz	00114$
      00024B 75 0C 01         [24] 1739 	mov	_counts,#0x01
      00024E F5 0D            [12] 1740 	mov	(_counts + 1),a
                           0001C2  1741 	C$SPI0.c$110$1$45 ==.
                                   1742 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:110: while(counts < 2000);
      000250                       1743 00106$:
      000250 C3               [12] 1744 	clr	c
      000251 E5 0C            [12] 1745 	mov	a,_counts
      000253 94 D0            [12] 1746 	subb	a,#0xD0
      000255 E5 0D            [12] 1747 	mov	a,(_counts + 1)
      000257 94 07            [12] 1748 	subb	a,#0x07
      000259 40 F5            [24] 1749 	jc	00106$
                           0001CD  1750 	C$SPI0.c$111$1$45 ==.
                                   1751 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:111: NSSMD0 = 0;
      00025B C2 FA            [12] 1752 	clr	_NSSMD0
                           0001CF  1753 	C$SPI0.c$112$1$45 ==.
                                   1754 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:112: return SPI0DAT;
      00025D 85 9B 82         [24] 1755 	mov	dpl,_SPI0DAT
                           0001D2  1756 	C$SPI0.c$113$1$45 ==.
                           0001D2  1757 	XG$read$0$0 ==.
      000260 22               [24] 1758 	ret
                                   1759 ;------------------------------------------------------------
                                   1760 ;Allocation info for local variables in function 'dread'
                                   1761 ;------------------------------------------------------------
                                   1762 ;i                         Allocated to registers r5 r6 
                                   1763 ;dumb                      Allocated to registers r7 
                                   1764 ;------------------------------------------------------------
                           0001D3  1765 	G$dread$0$0 ==.
                           0001D3  1766 	C$SPI0.c$115$1$45 ==.
                                   1767 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:115: unsigned char dread()
                                   1768 ;	-----------------------------------------
                                   1769 ;	 function dread
                                   1770 ;	-----------------------------------------
      000261                       1771 _dread:
                           0001D3  1772 	C$SPI0.c$118$1$45 ==.
                                   1773 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:118: char dumb = 0x65;
      000261 7F 65            [12] 1774 	mov	r7,#0x65
                           0001D5  1775 	C$SPI0.c$119$1$46 ==.
                                   1776 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:119: SFRPAGE = SPI0_PAGE;
      000263 75 84 00         [24] 1777 	mov	_SFRPAGE,#0x00
                           0001D8  1778 	C$SPI0.c$120$1$46 ==.
                                   1779 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:120: NSSMD0 = 0;
      000266 C2 FA            [12] 1780 	clr	_NSSMD0
                           0001DA  1781 	C$SPI0.c$121$1$46 ==.
                                   1782 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:121: for (i=0;i<101;i++);
      000268 7D 65            [12] 1783 	mov	r5,#0x65
      00026A 7E 00            [12] 1784 	mov	r6,#0x00
      00026C                       1785 00114$:
      00026C 1D               [12] 1786 	dec	r5
      00026D BD FF 01         [24] 1787 	cjne	r5,#0xFF,00150$
      000270 1E               [12] 1788 	dec	r6
      000271                       1789 00150$:
      000271 ED               [12] 1790 	mov	a,r5
      000272 4E               [12] 1791 	orl	a,r6
      000273 70 F7            [24] 1792 	jnz	00114$
                           0001E7  1793 	C$SPI0.c$122$1$46 ==.
                                   1794 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:122: while(SPIF){SPIF=0;}//make sure SPIF is not busy
      000275                       1795 00102$:
      000275 10 FF 02         [24] 1796 	jbc	_SPIF,00152$
      000278 80 02            [24] 1797 	sjmp	00104$
      00027A                       1798 00152$:
      00027A 80 F9            [24] 1799 	sjmp	00102$
      00027C                       1800 00104$:
                           0001EE  1801 	C$SPI0.c$123$1$46 ==.
                                   1802 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:123: SPI0DAT = dumb;
      00027C 8F 9B            [24] 1803 	mov	_SPI0DAT,r7
                           0001F0  1804 	C$SPI0.c$124$1$46 ==.
                                   1805 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:124: while(!SPIF);
      00027E                       1806 00105$:
      00027E 30 FF FD         [24] 1807 	jnb	_SPIF,00105$
                           0001F3  1808 	C$SPI0.c$125$1$46 ==.
                                   1809 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:125: NSSMD0 = 1;
      000281 D2 FA            [12] 1810 	setb	_NSSMD0
                           0001F5  1811 	C$SPI0.c$127$1$46 ==.
                                   1812 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:127: counts =1 ;
      000283 75 0C 01         [24] 1813 	mov	_counts,#0x01
      000286 75 0D 00         [24] 1814 	mov	(_counts + 1),#0x00
                           0001FB  1815 	C$SPI0.c$128$1$46 ==.
                                   1816 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:128: while(counts < 2000);
      000289                       1817 00108$:
      000289 C3               [12] 1818 	clr	c
      00028A E5 0C            [12] 1819 	mov	a,_counts
      00028C 94 D0            [12] 1820 	subb	a,#0xD0
      00028E E5 0D            [12] 1821 	mov	a,(_counts + 1)
      000290 94 07            [12] 1822 	subb	a,#0x07
      000292 40 F5            [24] 1823 	jc	00108$
                           000206  1824 	C$SPI0.c$129$1$46 ==.
                                   1825 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:129: NSSMD0 = 0;
      000294 C2 FA            [12] 1826 	clr	_NSSMD0
                           000208  1827 	C$SPI0.c$130$1$46 ==.
                                   1828 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:130: for (i=0;i<101;i++);
      000296 7E 65            [12] 1829 	mov	r6,#0x65
      000298 7F 00            [12] 1830 	mov	r7,#0x00
      00029A                       1831 00117$:
      00029A 1E               [12] 1832 	dec	r6
      00029B BE FF 01         [24] 1833 	cjne	r6,#0xFF,00155$
      00029E 1F               [12] 1834 	dec	r7
      00029F                       1835 00155$:
      00029F EE               [12] 1836 	mov	a,r6
      0002A0 4F               [12] 1837 	orl	a,r7
      0002A1 70 F7            [24] 1838 	jnz	00117$
                           000215  1839 	C$SPI0.c$131$1$46 ==.
                                   1840 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:131: return SPI0DAT;
      0002A3 85 9B 82         [24] 1841 	mov	dpl,_SPI0DAT
                           000218  1842 	C$SPI0.c$132$1$46 ==.
                           000218  1843 	XG$dread$0$0 ==.
      0002A6 22               [24] 1844 	ret
                                   1845 ;------------------------------------------------------------
                                   1846 ;Allocation info for local variables in function 'write'
                                   1847 ;------------------------------------------------------------
                                   1848 ;c                         Allocated to registers r7 
                                   1849 ;i                         Allocated to registers 
                                   1850 ;------------------------------------------------------------
                           000219  1851 	G$write$0$0 ==.
                           000219  1852 	C$SPI0.c$134$1$46 ==.
                                   1853 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:134: void write(char c)
                                   1854 ;	-----------------------------------------
                                   1855 ;	 function write
                                   1856 ;	-----------------------------------------
      0002A7                       1857 _write:
      0002A7 AF 82            [24] 1858 	mov	r7,dpl
                           00021B  1859 	C$SPI0.c$137$1$49 ==.
                                   1860 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:137: SFRPAGE = SPI0_PAGE;
      0002A9 75 84 00         [24] 1861 	mov	_SFRPAGE,#0x00
                           00021E  1862 	C$SPI0.c$138$1$49 ==.
                                   1863 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:138: SPIF = 0;
      0002AC C2 FF            [12] 1864 	clr	_SPIF
                           000220  1865 	C$SPI0.c$139$1$49 ==.
                                   1866 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:139: NSSMD0 = 0;
      0002AE C2 FA            [12] 1867 	clr	_NSSMD0
                           000222  1868 	C$SPI0.c$140$1$49 ==.
                                   1869 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:140: while(SPIF){SPIF=0;}//make sure SPIF is not busy
      0002B0                       1870 00101$:
      0002B0 10 FF 02         [24] 1871 	jbc	_SPIF,00130$
      0002B3 80 02            [24] 1872 	sjmp	00103$
      0002B5                       1873 00130$:
      0002B5 80 F9            [24] 1874 	sjmp	00101$
      0002B7                       1875 00103$:
                           000229  1876 	C$SPI0.c$141$1$49 ==.
                                   1877 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:141: SPI0DAT = c;
      0002B7 8F 9B            [24] 1878 	mov	_SPI0DAT,r7
                           00022B  1879 	C$SPI0.c$142$1$49 ==.
                                   1880 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:142: while(!SPIF);
      0002B9                       1881 00104$:
      0002B9 30 FF FD         [24] 1882 	jnb	_SPIF,00104$
                           00022E  1883 	C$SPI0.c$143$1$49 ==.
                                   1884 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:143: for (i=0;i<101;i++);
      0002BC 7E 65            [12] 1885 	mov	r6,#0x65
      0002BE 7F 00            [12] 1886 	mov	r7,#0x00
      0002C0                       1887 00110$:
      0002C0 1E               [12] 1888 	dec	r6
      0002C1 BE FF 01         [24] 1889 	cjne	r6,#0xFF,00132$
      0002C4 1F               [12] 1890 	dec	r7
      0002C5                       1891 00132$:
      0002C5 EE               [12] 1892 	mov	a,r6
      0002C6 4F               [12] 1893 	orl	a,r7
      0002C7 70 F7            [24] 1894 	jnz	00110$
                           00023B  1895 	C$SPI0.c$144$1$49 ==.
                           00023B  1896 	XG$write$0$0 ==.
      0002C9 22               [24] 1897 	ret
                                   1898 ;------------------------------------------------------------
                                   1899 ;Allocation info for local variables in function 'dummy'
                                   1900 ;------------------------------------------------------------
                                   1901 ;r                         Allocated to registers r7 
                                   1902 ;i                         Allocated to registers 
                                   1903 ;------------------------------------------------------------
                           00023C  1904 	G$dummy$0$0 ==.
                           00023C  1905 	C$SPI0.c$145$1$49 ==.
                                   1906 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:145: void dummy ()
                                   1907 ;	-----------------------------------------
                                   1908 ;	 function dummy
                                   1909 ;	-----------------------------------------
      0002CA                       1910 _dummy:
                           00023C  1911 	C$SPI0.c$149$1$51 ==.
                                   1912 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:149: r = 0x00;
      0002CA 7F 00            [12] 1913 	mov	r7,#0x00
                           00023E  1914 	C$SPI0.c$152$1$51 ==.
                                   1915 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:152: printf("   you pressed <DEL>");
      0002CC C0 07            [24] 1916 	push	ar7
      0002CE 74 37            [12] 1917 	mov	a,#___str_7
      0002D0 C0 E0            [24] 1918 	push	acc
      0002D2 74 0A            [12] 1919 	mov	a,#(___str_7 >> 8)
      0002D4 C0 E0            [24] 1920 	push	acc
      0002D6 74 80            [12] 1921 	mov	a,#0x80
      0002D8 C0 E0            [24] 1922 	push	acc
      0002DA 12 03 EE         [24] 1923 	lcall	_printf
      0002DD 15 81            [12] 1924 	dec	sp
      0002DF 15 81            [12] 1925 	dec	sp
      0002E1 15 81            [12] 1926 	dec	sp
      0002E3 D0 07            [24] 1927 	pop	ar7
                           000257  1928 	C$SPI0.c$153$1$51 ==.
                                   1929 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:153: while(r!=0xFF)
      0002E5                       1930 00105$:
      0002E5 BF FF 02         [24] 1931 	cjne	r7,#0xFF,00132$
      0002E8 80 3D            [24] 1932 	sjmp	00111$
      0002EA                       1933 00132$:
                           00025C  1934 	C$SPI0.c$155$2$52 ==.
                                   1935 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:155: counts =0 ;
      0002EA E4               [12] 1936 	clr	a
      0002EB F5 0C            [12] 1937 	mov	_counts,a
      0002ED F5 0D            [12] 1938 	mov	(_counts + 1),a
                           000261  1939 	C$SPI0.c$156$2$52 ==.
                                   1940 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:156: while(counts < 49999);
      0002EF                       1941 00101$:
      0002EF AB 0C            [24] 1942 	mov	r3,_counts
      0002F1 AC 0D            [24] 1943 	mov	r4,(_counts + 1)
      0002F3 7D 00            [12] 1944 	mov	r5,#0x00
      0002F5 7E 00            [12] 1945 	mov	r6,#0x00
      0002F7 C3               [12] 1946 	clr	c
      0002F8 EB               [12] 1947 	mov	a,r3
      0002F9 94 4F            [12] 1948 	subb	a,#0x4F
      0002FB EC               [12] 1949 	mov	a,r4
      0002FC 94 C3            [12] 1950 	subb	a,#0xC3
      0002FE ED               [12] 1951 	mov	a,r5
      0002FF 94 00            [12] 1952 	subb	a,#0x00
      000301 EE               [12] 1953 	mov	a,r6
      000302 64 80            [12] 1954 	xrl	a,#0x80
      000304 94 80            [12] 1955 	subb	a,#0x80
      000306 40 E7            [24] 1956 	jc	00101$
                           00027A  1957 	C$SPI0.c$157$2$52 ==.
                                   1958 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:157: r = dread();
      000308 12 02 61         [24] 1959 	lcall	_dread
      00030B AF 82            [24] 1960 	mov	r7,dpl
                           00027F  1961 	C$SPI0.c$158$2$52 ==.
                                   1962 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:158: NSSMD0 = 0;
      00030D C2 FA            [12] 1963 	clr	_NSSMD0
                           000281  1964 	C$SPI0.c$159$2$52 ==.
                                   1965 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:159: foreign(r);
      00030F 8F 82            [24] 1966 	mov	dpl,r7
      000311 C0 07            [24] 1967 	push	ar7
      000313 12 01 9A         [24] 1968 	lcall	_foreign
      000316 D0 07            [24] 1969 	pop	ar7
                           00028A  1970 	C$SPI0.c$160$2$52 ==.
                                   1971 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:160: for (i=0;i<101;i++);
      000318 7D 65            [12] 1972 	mov	r5,#0x65
      00031A 7E 00            [12] 1973 	mov	r6,#0x00
      00031C                       1974 00110$:
      00031C 1D               [12] 1975 	dec	r5
      00031D BD FF 01         [24] 1976 	cjne	r5,#0xFF,00134$
      000320 1E               [12] 1977 	dec	r6
      000321                       1978 00134$:
      000321 ED               [12] 1979 	mov	a,r5
      000322 4E               [12] 1980 	orl	a,r6
      000323 70 F7            [24] 1981 	jnz	00110$
      000325 80 BE            [24] 1982 	sjmp	00105$
      000327                       1983 00111$:
                           000299  1984 	C$SPI0.c$162$1$51 ==.
                           000299  1985 	XG$dummy$0$0 ==.
      000327 22               [24] 1986 	ret
                                   1987 ;------------------------------------------------------------
                                   1988 ;Allocation info for local variables in function 'Timer1_ISR'
                                   1989 ;------------------------------------------------------------
                           00029A  1990 	G$Timer1_ISR$0$0 ==.
                           00029A  1991 	C$SPI0.c$164$1$51 ==.
                                   1992 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:164: void Timer1_ISR(void) __interrupt 3
                                   1993 ;	-----------------------------------------
                                   1994 ;	 function Timer1_ISR
                                   1995 ;	-----------------------------------------
      000328                       1996 _Timer1_ISR:
      000328 C0 E0            [24] 1997 	push	acc
      00032A C0 D0            [24] 1998 	push	psw
                           00029E  1999 	C$SPI0.c$166$1$54 ==.
                                   2000 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:166: SFRPAGE = TIMER01_PAGE;
      00032C 75 84 00         [24] 2001 	mov	_SFRPAGE,#0x00
                           0002A1  2002 	C$SPI0.c$167$1$54 ==.
                                   2003 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:167: TF1 = 0;
      00032F C2 8F            [12] 2004 	clr	_TF1
                           0002A3  2005 	C$SPI0.c$168$1$54 ==.
                                   2006 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:168: counts ++;
      000331 05 0C            [12] 2007 	inc	_counts
      000333 E4               [12] 2008 	clr	a
      000334 B5 0C 02         [24] 2009 	cjne	a,_counts,00103$
      000337 05 0D            [12] 2010 	inc	(_counts + 1)
      000339                       2011 00103$:
                           0002AB  2012 	C$SPI0.c$170$1$54 ==.
                                   2013 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:170: TL1 = 0;
      000339 75 8B 00         [24] 2014 	mov	_TL1,#0x00
                           0002AE  2015 	C$SPI0.c$171$1$54 ==.
                                   2016 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:171: TH1 = 0;	
      00033C 75 8D 00         [24] 2017 	mov	_TH1,#0x00
      00033F D0 D0            [24] 2018 	pop	psw
      000341 D0 E0            [24] 2019 	pop	acc
                           0002B5  2020 	C$SPI0.c$172$1$54 ==.
                           0002B5  2021 	XG$Timer1_ISR$0$0 ==.
      000343 32               [24] 2022 	reti
                                   2023 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   2024 ;	eliminated unneeded push/pop dpl
                                   2025 ;	eliminated unneeded push/pop dph
                                   2026 ;	eliminated unneeded push/pop b
                                   2027 ;------------------------------------------------------------
                                   2028 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   2029 ;------------------------------------------------------------
                                   2030 ;j                         Allocated to registers 
                                   2031 ;------------------------------------------------------------
                           0002B6  2032 	G$SYSCLK_INIT$0$0 ==.
                           0002B6  2033 	C$SPI0.c$174$1$54 ==.
                                   2034 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:174: void SYSCLK_INIT()
                                   2035 ;	-----------------------------------------
                                   2036 ;	 function SYSCLK_INIT
                                   2037 ;	-----------------------------------------
      000344                       2038 _SYSCLK_INIT:
                           0002B6  2039 	C$SPI0.c$178$1$55 ==.
                                   2040 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:178: SFRPAGE = CONFIG_PAGE;
      000344 75 84 0F         [24] 2041 	mov	_SFRPAGE,#0x0F
                           0002B9  2042 	C$SPI0.c$179$1$55 ==.
                                   2043 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:179: OSCXCN  = 0x67;             // Start external oscillator
      000347 75 8C 67         [24] 2044 	mov	_OSCXCN,#0x67
                           0002BC  2045 	C$SPI0.c$180$1$55 ==.
                                   2046 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:180: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      00034A 7E 00            [12] 2047 	mov	r6,#0x00
      00034C 7F 01            [12] 2048 	mov	r7,#0x01
      00034E                       2049 00107$:
      00034E 1E               [12] 2050 	dec	r6
      00034F BE FF 01         [24] 2051 	cjne	r6,#0xFF,00121$
      000352 1F               [12] 2052 	dec	r7
      000353                       2053 00121$:
      000353 EE               [12] 2054 	mov	a,r6
      000354 4F               [12] 2055 	orl	a,r7
      000355 70 F7            [24] 2056 	jnz	00107$
                           0002C9  2057 	C$SPI0.c$181$1$55 ==.
                                   2058 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:181: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      000357                       2059 00102$:
      000357 E5 8C            [12] 2060 	mov	a,_OSCXCN
      000359 30 E7 FB         [24] 2061 	jnb	acc.7,00102$
                           0002CE  2062 	C$SPI0.c$182$1$55 ==.
                                   2063 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:182: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      00035C 75 97 01         [24] 2064 	mov	_CLKSEL,#0x01
                           0002D1  2065 	C$SPI0.c$183$1$55 ==.
                                   2066 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:183: OSCICN  = 0x00;             // Disable the internal oscillator.
      00035F 75 8A 00         [24] 2067 	mov	_OSCICN,#0x00
                           0002D4  2068 	C$SPI0.c$184$1$55 ==.
                           0002D4  2069 	XG$SYSCLK_INIT$0$0 ==.
      000362 22               [24] 2070 	ret
                                   2071 ;------------------------------------------------------------
                                   2072 ;Allocation info for local variables in function 'Timer_Init'
                                   2073 ;------------------------------------------------------------
                           0002D5  2074 	G$Timer_Init$0$0 ==.
                           0002D5  2075 	C$SPI0.c$186$1$55 ==.
                                   2076 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:186: void Timer_Init()
                                   2077 ;	-----------------------------------------
                                   2078 ;	 function Timer_Init
                                   2079 ;	-----------------------------------------
      000363                       2080 _Timer_Init:
                           0002D5  2081 	C$SPI0.c$188$1$56 ==.
                                   2082 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:188: SFRPAGE   = TIMER01_PAGE;
      000363 75 84 00         [24] 2083 	mov	_SFRPAGE,#0x00
                           0002D8  2084 	C$SPI0.c$189$1$56 ==.
                                   2085 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:189: TCON      = 0x40;
      000366 75 88 40         [24] 2086 	mov	_TCON,#0x40
                           0002DB  2087 	C$SPI0.c$190$1$56 ==.
                                   2088 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:190: TMOD      = 0x20;
      000369 75 89 20         [24] 2089 	mov	_TMOD,#0x20
                           0002DE  2090 	C$SPI0.c$191$1$56 ==.
                                   2091 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:191: CKCON     = 0x10;
      00036C 75 8E 10         [24] 2092 	mov	_CKCON,#0x10
                           0002E1  2093 	C$SPI0.c$192$1$56 ==.
                                   2094 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:192: TH1       = 0xA0;
      00036F 75 8D A0         [24] 2095 	mov	_TH1,#0xA0
                           0002E4  2096 	C$SPI0.c$193$1$56 ==.
                                   2097 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:193: TL1 = TH1;
      000372 85 8D 8B         [24] 2098 	mov	_TL1,_TH1
                           0002E7  2099 	C$SPI0.c$194$1$56 ==.
                                   2100 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:194: SFRPAGE   = TMR2_PAGE;
      000375 75 84 00         [24] 2101 	mov	_SFRPAGE,#0x00
                           0002EA  2102 	C$SPI0.c$195$1$56 ==.
                                   2103 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:195: TMR2CN    = 0x04;
      000378 75 C8 04         [24] 2104 	mov	_TMR2CN,#0x04
                           0002ED  2105 	C$SPI0.c$196$1$56 ==.
                                   2106 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:196: TMR2CF    = 0x08;
      00037B 75 C9 08         [24] 2107 	mov	_TMR2CF,#0x08
                           0002F0  2108 	C$SPI0.c$197$1$56 ==.
                                   2109 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:197: TMR2H	  = 0xFF;
      00037E 75 CD FF         [24] 2110 	mov	_TMR2H,#0xFF
                           0002F3  2111 	C$SPI0.c$198$1$56 ==.
                                   2112 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:198: TMR2L 	  = 0x70;
      000381 75 CC 70         [24] 2113 	mov	_TMR2L,#0x70
                           0002F6  2114 	C$SPI0.c$199$1$56 ==.
                                   2115 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:199: RCAP2L    = 0x70;
      000384 75 CA 70         [24] 2116 	mov	_RCAP2L,#0x70
                           0002F9  2117 	C$SPI0.c$200$1$56 ==.
                                   2118 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:200: RCAP2H    = 0xFF;
      000387 75 CB FF         [24] 2119 	mov	_RCAP2H,#0xFF
                           0002FC  2120 	C$SPI0.c$201$1$56 ==.
                           0002FC  2121 	XG$Timer_Init$0$0 ==.
      00038A 22               [24] 2122 	ret
                                   2123 ;------------------------------------------------------------
                                   2124 ;Allocation info for local variables in function 'UART_Init'
                                   2125 ;------------------------------------------------------------
                           0002FD  2126 	G$UART_Init$0$0 ==.
                           0002FD  2127 	C$SPI0.c$202$1$56 ==.
                                   2128 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:202: void UART_Init()
                                   2129 ;	-----------------------------------------
                                   2130 ;	 function UART_Init
                                   2131 ;	-----------------------------------------
      00038B                       2132 _UART_Init:
                           0002FD  2133 	C$SPI0.c$204$1$57 ==.
                                   2134 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:204: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      00038B 75 84 00         [24] 2135 	mov	_SFRPAGE,#0x00
                           000300  2136 	C$SPI0.c$205$1$57 ==.
                                   2137 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:205: TR2		  = 1;//Start Timer 2
      00038E D2 CA            [12] 2138 	setb	_TR2
                           000302  2139 	C$SPI0.c$206$1$57 ==.
                                   2140 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:206: SCON0     = 0x50;
      000390 75 98 50         [24] 2141 	mov	_SCON0,#0x50
                           000305  2142 	C$SPI0.c$207$1$57 ==.
                                   2143 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:207: SSTA0   = 0x15;
      000393 75 91 15         [24] 2144 	mov	_SSTA0,#0x15
                           000308  2145 	C$SPI0.c$208$1$57 ==.
                                   2146 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:208: TI0		  = 1; // Indicate TX0 is ready
      000396 D2 99            [12] 2147 	setb	_TI0
                           00030A  2148 	C$SPI0.c$209$1$57 ==.
                                   2149 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:209: TR1		  = 1; //Start Timer 1
      000398 D2 8E            [12] 2150 	setb	_TR1
                           00030C  2151 	C$SPI0.c$210$1$57 ==.
                                   2152 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:210: SFRPAGE   = UART1_PAGE;
      00039A 75 84 01         [24] 2153 	mov	_SFRPAGE,#0x01
                           00030F  2154 	C$SPI0.c$211$1$57 ==.
                                   2155 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:211: SCON1     = 0x50;
      00039D 75 98 50         [24] 2156 	mov	_SCON1,#0x50
                           000312  2157 	C$SPI0.c$212$1$57 ==.
                                   2158 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:212: TI1		  = 1; //Indicatie TX1 is ready
      0003A0 D2 99            [12] 2159 	setb	_TI1
                           000314  2160 	C$SPI0.c$213$1$57 ==.
                           000314  2161 	XG$UART_Init$0$0 ==.
      0003A2 22               [24] 2162 	ret
                                   2163 ;------------------------------------------------------------
                                   2164 ;Allocation info for local variables in function 'Port_IO_Init'
                                   2165 ;------------------------------------------------------------
                           000315  2166 	G$Port_IO_Init$0$0 ==.
                           000315  2167 	C$SPI0.c$214$1$57 ==.
                                   2168 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:214: void Port_IO_Init()
                                   2169 ;	-----------------------------------------
                                   2170 ;	 function Port_IO_Init
                                   2171 ;	-----------------------------------------
      0003A3                       2172 _Port_IO_Init:
                           000315  2173 	C$SPI0.c$216$1$58 ==.
                                   2174 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:216: SFRPAGE   = CONFIG_PAGE;
      0003A3 75 84 0F         [24] 2175 	mov	_SFRPAGE,#0x0F
                           000318  2176 	C$SPI0.c$223$1$58 ==.
                                   2177 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:223: P0MDOUT = 0x75;
      0003A6 75 A4 75         [24] 2178 	mov	_P0MDOUT,#0x75
                           00031B  2179 	C$SPI0.c$224$1$58 ==.
                                   2180 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:224: P0 = 0xAA;
      0003A9 75 80 AA         [24] 2181 	mov	_P0,#0xAA
                           00031E  2182 	C$SPI0.c$228$1$58 ==.
                                   2183 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:228: WDTCN   = 0xDE;             // Disable watchdog timer.
      0003AC 75 FF DE         [24] 2184 	mov	_WDTCN,#0xDE
                           000321  2185 	C$SPI0.c$229$1$58 ==.
                                   2186 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:229: WDTCN   = 0xAD;
      0003AF 75 FF AD         [24] 2187 	mov	_WDTCN,#0xAD
                           000324  2188 	C$SPI0.c$230$1$58 ==.
                                   2189 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:230: EA 		  = 1; // enable global interrupts
      0003B2 D2 AF            [12] 2190 	setb	_EA
                           000326  2191 	C$SPI0.c$231$1$58 ==.
                                   2192 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:231: XBR0      = 0x06;
      0003B4 75 E1 06         [24] 2193 	mov	_XBR0,#0x06
                           000329  2194 	C$SPI0.c$232$1$58 ==.
                                   2195 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:232: XBR2      = 0x44;
      0003B7 75 E3 44         [24] 2196 	mov	_XBR2,#0x44
                           00032C  2197 	C$SPI0.c$233$1$58 ==.
                           00032C  2198 	XG$Port_IO_Init$0$0 ==.
      0003BA 22               [24] 2199 	ret
                                   2200 ;------------------------------------------------------------
                                   2201 ;Allocation info for local variables in function 'SPI0_INIT'
                                   2202 ;------------------------------------------------------------
                           00032D  2203 	G$SPI0_INIT$0$0 ==.
                           00032D  2204 	C$SPI0.c$234$1$58 ==.
                                   2205 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:234: void SPI0_INIT()
                                   2206 ;	-----------------------------------------
                                   2207 ;	 function SPI0_INIT
                                   2208 ;	-----------------------------------------
      0003BB                       2209 _SPI0_INIT:
                           00032D  2210 	C$SPI0.c$236$1$59 ==.
                                   2211 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:236: SFRPAGE = SPI0_PAGE;
      0003BB 75 84 00         [24] 2212 	mov	_SFRPAGE,#0x00
                           000330  2213 	C$SPI0.c$237$1$59 ==.
                                   2214 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:237: SPI0CFG = 0x40;
      0003BE 75 9A 40         [24] 2215 	mov	_SPI0CFG,#0x40
                           000333  2216 	C$SPI0.c$239$1$59 ==.
                                   2217 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:239: SPI0CN = 0x0D;
      0003C1 75 F8 0D         [24] 2218 	mov	_SPI0CN,#0x0D
                           000336  2219 	C$SPI0.c$240$1$59 ==.
                                   2220 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:240: SPI0CKR =  0x26;
      0003C4 75 9D 26         [24] 2221 	mov	_SPI0CKR,#0x26
                           000339  2222 	C$SPI0.c$241$1$59 ==.
                                   2223 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_loop\SPI0.c:241: SPIF = 1;
      0003C7 D2 FF            [12] 2224 	setb	_SPIF
                           00033B  2225 	C$SPI0.c$242$1$59 ==.
                           00033B  2226 	XG$SPI0_INIT$0$0 ==.
      0003C9 22               [24] 2227 	ret
                                   2228 	.area CSEG    (CODE)
                                   2229 	.area CONST   (CODE)
                           000000  2230 FSPI0$__str_0$0$0 == .
      000A02                       2231 ___str_0:
      000A02 1B                    2232 	.db 0x1B
      000A03 5B 32 4A              2233 	.ascii "[2J"
      000A06 00                    2234 	.db 0x00
                           000005  2235 FSPI0$__str_1$0$0 == .
      000A07                       2236 ___str_1:
      000A07 55 41 52 54 20 69 73  2237 	.ascii "UART is working"
             20 77 6F 72 6B 69 6E
             67
      000A16 00                    2238 	.db 0x00
                           000015  2239 FSPI0$__str_2$0$0 == .
      000A17                       2240 ___str_2:
      000A17 1B                    2241 	.db 0x1B
      000A18 5B 25 64 3B 31 48     2242 	.ascii "[%d;1H"
      000A1E 00                    2243 	.db 0x00
                           00001D  2244 FSPI0$__str_3$0$0 == .
      000A1F                       2245 ___str_3:
      000A1F 1B                    2246 	.db 0x1B
      000A20 5B 31 4A              2247 	.ascii "[1J"
      000A23 00                    2248 	.db 0x00
                           000022  2249 FSPI0$__str_4$0$0 == .
      000A24                       2250 ___str_4:
      000A24 1B                    2251 	.db 0x1B
      000A25 5B 31 3B 31 48        2252 	.ascii "[1;1H"
      000A2A 00                    2253 	.db 0x00
                           000029  2254 FSPI0$__str_5$0$0 == .
      000A2B                       2255 ___str_5:
      000A2B 1B                    2256 	.db 0x1B
      000A2C 5B 31 32 3B 31 48     2257 	.ascii "[12;1H"
      000A32 00                    2258 	.db 0x00
                           000031  2259 FSPI0$__str_6$0$0 == .
      000A33                       2260 ___str_6:
      000A33 1B                    2261 	.db 0x1B
      000A34 5B 4A                 2262 	.ascii "[J"
      000A36 00                    2263 	.db 0x00
                           000035  2264 FSPI0$__str_7$0$0 == .
      000A37                       2265 ___str_7:
      000A37 20 20 20 79 6F 75 20  2266 	.ascii "   you pressed <DEL>"
             70 72 65 73 73 65 64
             20 3C 44 45 4C 3E
      000A4B 00                    2267 	.db 0x00
                                   2268 	.area XINIT   (CODE)
                                   2269 	.area CABS    (ABS,CODE)
