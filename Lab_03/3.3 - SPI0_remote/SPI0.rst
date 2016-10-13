                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Wed Oct 12 17:26:30 2016
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
      000000 02 00 11         [24] 1267 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1268 	reti
      000004                       1269 	.ds	7
      00000B 02 02 F9         [24] 1270 	ljmp	_Timer1_ISR
                                   1271 ;--------------------------------------------------------
                                   1272 ; global & static initialisations
                                   1273 ;--------------------------------------------------------
                                   1274 	.area HOME    (CODE)
                                   1275 	.area GSINIT  (CODE)
                                   1276 	.area GSFINAL (CODE)
                                   1277 	.area GSINIT  (CODE)
                                   1278 	.globl __sdcc_gsinit_startup
                                   1279 	.globl __sdcc_program_startup
                                   1280 	.globl __start__stack
                                   1281 	.globl __mcs51_genXINIT
                                   1282 	.globl __mcs51_genXRAMCLEAR
                                   1283 	.globl __mcs51_genRAMCLEAR
                           000000  1284 	C$SPI0.c$37$1$59 ==.
                                   1285 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:37: int local_ct = 1;
      00006A 75 08 01         [24] 1286 	mov	_local_ct,#0x01
      00006D 75 09 00         [24] 1287 	mov	(_local_ct + 1),#0x00
                           000006  1288 	C$SPI0.c$38$1$59 ==.
                                   1289 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:38: int alien_ct = 14;
      000070 75 0A 0E         [24] 1290 	mov	_alien_ct,#0x0E
      000073 75 0B 00         [24] 1291 	mov	(_alien_ct + 1),#0x00
                           00000C  1292 	C$SPI0.c$39$1$59 ==.
                                   1293 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:39: int counts = 0;
      000076 E4               [12] 1294 	clr	a
      000077 F5 0C            [12] 1295 	mov	_counts,a
      000079 F5 0D            [12] 1296 	mov	(_counts + 1),a
                                   1297 	.area GSFINAL (CODE)
      00007B 02 00 0E         [24] 1298 	ljmp	__sdcc_program_startup
                                   1299 ;--------------------------------------------------------
                                   1300 ; Home
                                   1301 ;--------------------------------------------------------
                                   1302 	.area HOME    (CODE)
                                   1303 	.area HOME    (CODE)
      00000E                       1304 __sdcc_program_startup:
      00000E 02 00 93         [24] 1305 	ljmp	_main
                                   1306 ;	return from main will return to caller
                                   1307 ;--------------------------------------------------------
                                   1308 ; code
                                   1309 ;--------------------------------------------------------
                                   1310 	.area CSEG    (CODE)
                                   1311 ;------------------------------------------------------------
                                   1312 ;Allocation info for local variables in function 'putchar'
                                   1313 ;------------------------------------------------------------
                                   1314 ;c                         Allocated to registers r7 
                                   1315 ;------------------------------------------------------------
                           000000  1316 	G$putchar$0$0 ==.
                           000000  1317 	C$putget.h$18$0$0 ==.
                                   1318 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:18: void putchar(char c)
                                   1319 ;	-----------------------------------------
                                   1320 ;	 function putchar
                                   1321 ;	-----------------------------------------
      00007E                       1322 _putchar:
                           000007  1323 	ar7 = 0x07
                           000006  1324 	ar6 = 0x06
                           000005  1325 	ar5 = 0x05
                           000004  1326 	ar4 = 0x04
                           000003  1327 	ar3 = 0x03
                           000002  1328 	ar2 = 0x02
                           000001  1329 	ar1 = 0x01
                           000000  1330 	ar0 = 0x00
      00007E AF 82            [24] 1331 	mov	r7,dpl
                           000002  1332 	C$putget.h$20$1$16 ==.
                                   1333 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:20: while(!TI0); 
      000080                       1334 00101$:
                           000002  1335 	C$putget.h$21$1$16 ==.
                                   1336 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:21: TI0=0;
      000080 10 99 02         [24] 1337 	jbc	_TI0,00112$
      000083 80 FB            [24] 1338 	sjmp	00101$
      000085                       1339 00112$:
                           000007  1340 	C$putget.h$22$1$16 ==.
                                   1341 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:22: SBUF0 = c;
      000085 8F 99            [24] 1342 	mov	_SBUF0,r7
                           000009  1343 	C$putget.h$23$1$16 ==.
                           000009  1344 	XG$putchar$0$0 ==.
      000087 22               [24] 1345 	ret
                                   1346 ;------------------------------------------------------------
                                   1347 ;Allocation info for local variables in function 'getchar'
                                   1348 ;------------------------------------------------------------
                                   1349 ;c                         Allocated to registers 
                                   1350 ;------------------------------------------------------------
                           00000A  1351 	G$getchar$0$0 ==.
                           00000A  1352 	C$putget.h$28$1$16 ==.
                                   1353 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:28: char getchar(void)
                                   1354 ;	-----------------------------------------
                                   1355 ;	 function getchar
                                   1356 ;	-----------------------------------------
      000088                       1357 _getchar:
                           00000A  1358 	C$putget.h$31$1$18 ==.
                                   1359 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:31: while(!RI0);
      000088                       1360 00101$:
                           00000A  1361 	C$putget.h$32$1$18 ==.
                                   1362 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:32: RI0 =0;
      000088 10 98 02         [24] 1363 	jbc	_RI0,00112$
      00008B 80 FB            [24] 1364 	sjmp	00101$
      00008D                       1365 00112$:
                           00000F  1366 	C$putget.h$33$1$18 ==.
                                   1367 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:33: c = SBUF0;
      00008D E5 99            [12] 1368 	mov	a,_SBUF0
                           000011  1369 	C$putget.h$36$1$18 ==.
                                   1370 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_03/3.3 - SPI0_remote/putget.h:36: return SBUF0;
      00008F 85 99 82         [24] 1371 	mov	dpl,_SBUF0
                           000014  1372 	C$putget.h$37$1$18 ==.
                           000014  1373 	XG$getchar$0$0 ==.
      000092 22               [24] 1374 	ret
                                   1375 ;------------------------------------------------------------
                                   1376 ;Allocation info for local variables in function 'main'
                                   1377 ;------------------------------------------------------------
                                   1378 ;c                         Allocated to registers r7 
                                   1379 ;i                         Allocated to registers 
                                   1380 ;d                         Allocated to registers r7 
                                   1381 ;------------------------------------------------------------
                           000015  1382 	G$main$0$0 ==.
                           000015  1383 	C$SPI0.c$41$1$18 ==.
                                   1384 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:41: void main (void)
                                   1385 ;	-----------------------------------------
                                   1386 ;	 function main
                                   1387 ;	-----------------------------------------
      000093                       1388 _main:
                           000015  1389 	C$SPI0.c$47$1$33 ==.
                                   1390 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:47: SFRPAGE = CONFIG_PAGE;
      000093 75 84 0F         [24] 1391 	mov	_SFRPAGE,#0x0F
                           000018  1392 	C$SPI0.c$48$1$33 ==.
                                   1393 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:48: SYSCLK_INIT();
      000096 12 03 15         [24] 1394 	lcall	_SYSCLK_INIT
                           00001B  1395 	C$SPI0.c$49$1$33 ==.
                                   1396 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:49: Port_IO_Init();
      000099 12 03 81         [24] 1397 	lcall	_Port_IO_Init
                           00001E  1398 	C$SPI0.c$50$1$33 ==.
                                   1399 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:50: Timer_Init();
      00009C 12 03 34         [24] 1400 	lcall	_Timer_Init
                           000021  1401 	C$SPI0.c$51$1$33 ==.
                                   1402 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:51: UART_Init();
      00009F 12 03 71         [24] 1403 	lcall	_UART_Init
                           000024  1404 	C$SPI0.c$52$1$33 ==.
                                   1405 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:52: SPI0_INIT();
      0000A2 12 03 99         [24] 1406 	lcall	_SPI0_INIT
                           000027  1407 	C$SPI0.c$53$1$33 ==.
                                   1408 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:53: SFRPAGE = LEGACY_PAGE;
      0000A5 75 84 00         [24] 1409 	mov	_SFRPAGE,#0x00
                           00002A  1410 	C$SPI0.c$54$1$33 ==.
                                   1411 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:54: printf("at least i'm here");
      0000A8 74 E0            [12] 1412 	mov	a,#___str_0
      0000AA C0 E0            [24] 1413 	push	acc
      0000AC 74 09            [12] 1414 	mov	a,#(___str_0 >> 8)
      0000AE C0 E0            [24] 1415 	push	acc
      0000B0 74 80            [12] 1416 	mov	a,#0x80
      0000B2 C0 E0            [24] 1417 	push	acc
      0000B4 12 03 CC         [24] 1418 	lcall	_printf
      0000B7 15 81            [12] 1419 	dec	sp
      0000B9 15 81            [12] 1420 	dec	sp
      0000BB 15 81            [12] 1421 	dec	sp
                           00003F  1422 	C$SPI0.c$55$1$33 ==.
                                   1423 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:55: ES0 = 1;
      0000BD D2 AC            [12] 1424 	setb	_ES0
                           000041  1425 	C$SPI0.c$59$1$33 ==.
                                   1426 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:59: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
      0000BF 75 84 00         [24] 1427 	mov	_SFRPAGE,#0x00
                           000044  1428 	C$SPI0.c$60$1$33 ==.
                                   1429 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:60: printf("\033[2J");
      0000C2 74 F2            [12] 1430 	mov	a,#___str_1
      0000C4 C0 E0            [24] 1431 	push	acc
      0000C6 74 09            [12] 1432 	mov	a,#(___str_1 >> 8)
      0000C8 C0 E0            [24] 1433 	push	acc
      0000CA 74 80            [12] 1434 	mov	a,#0x80
      0000CC C0 E0            [24] 1435 	push	acc
      0000CE 12 03 CC         [24] 1436 	lcall	_printf
      0000D1 15 81            [12] 1437 	dec	sp
      0000D3 15 81            [12] 1438 	dec	sp
      0000D5 15 81            [12] 1439 	dec	sp
                           000059  1440 	C$SPI0.c$61$1$33 ==.
                                   1441 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:61: printf("I'm alive");
      0000D7 74 F7            [12] 1442 	mov	a,#___str_2
      0000D9 C0 E0            [24] 1443 	push	acc
      0000DB 74 09            [12] 1444 	mov	a,#(___str_2 >> 8)
      0000DD C0 E0            [24] 1445 	push	acc
      0000DF 74 80            [12] 1446 	mov	a,#0x80
      0000E1 C0 E0            [24] 1447 	push	acc
      0000E3 12 03 CC         [24] 1448 	lcall	_printf
      0000E6 15 81            [12] 1449 	dec	sp
      0000E8 15 81            [12] 1450 	dec	sp
      0000EA 15 81            [12] 1451 	dec	sp
                           00006E  1452 	C$SPI0.c$62$1$33 ==.
                                   1453 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:62: while(1)
      0000EC                       1454 00107$:
                           00006E  1455 	C$SPI0.c$65$2$34 ==.
                                   1456 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:65: if(RI0)
                           00006E  1457 	C$SPI0.c$67$3$35 ==.
                                   1458 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:67: RI0 = 0;
      0000EC 10 98 02         [24] 1459 	jbc	_RI0,00130$
      0000EF 80 FB            [24] 1460 	sjmp	00107$
      0000F1                       1461 00130$:
                           000073  1462 	C$SPI0.c$68$3$35 ==.
                                   1463 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:68: c = SBUF0;
      0000F1 AF 99            [24] 1464 	mov	r7,_SBUF0
                           000075  1465 	C$SPI0.c$69$3$35 ==.
                                   1466 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:69: local(c);
      0000F3 8F 82            [24] 1467 	mov	dpl,r7
      0000F5 C0 07            [24] 1468 	push	ar7
      0000F7 12 01 2F         [24] 1469 	lcall	_local
      0000FA D0 07            [24] 1470 	pop	ar7
                           00007E  1471 	C$SPI0.c$70$3$35 ==.
                                   1472 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:70: write(c);
      0000FC 8F 82            [24] 1473 	mov	dpl,r7
      0000FE 12 02 98         [24] 1474 	lcall	_write
                           000083  1475 	C$SPI0.c$71$3$35 ==.
                                   1476 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:71: SFRPAGE = UART0_PAGE;
      000101 75 84 00         [24] 1477 	mov	_SFRPAGE,#0x00
                           000086  1478 	C$SPI0.c$72$3$35 ==.
                                   1479 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:72: for (i=0;i<101;i++);
      000104 7E 65            [12] 1480 	mov	r6,#0x65
      000106 7F 00            [12] 1481 	mov	r7,#0x00
      000108                       1482 00111$:
      000108 1E               [12] 1483 	dec	r6
      000109 BE FF 01         [24] 1484 	cjne	r6,#0xFF,00131$
      00010C 1F               [12] 1485 	dec	r7
      00010D                       1486 00131$:
      00010D EE               [12] 1487 	mov	a,r6
      00010E 4F               [12] 1488 	orl	a,r7
      00010F 70 F7            [24] 1489 	jnz	00111$
                           000093  1490 	C$SPI0.c$73$3$35 ==.
                                   1491 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:73: d = read();
      000111 12 02 28         [24] 1492 	lcall	_read
      000114 AF 82            [24] 1493 	mov	r7,dpl
                           000098  1494 	C$SPI0.c$74$3$35 ==.
                                   1495 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:74: SPIF =0;
      000116 C2 FF            [12] 1496 	clr	_SPIF
                           00009A  1497 	C$SPI0.c$75$3$35 ==.
                                   1498 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:75: SFRPAGE = UART0_PAGE;
      000118 75 84 00         [24] 1499 	mov	_SFRPAGE,#0x00
                           00009D  1500 	C$SPI0.c$76$3$35 ==.
                                   1501 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:76: foreign(d);
      00011B 8F 82            [24] 1502 	mov	dpl,r7
      00011D C0 07            [24] 1503 	push	ar7
      00011F 12 01 A1         [24] 1504 	lcall	_foreign
      000122 D0 07            [24] 1505 	pop	ar7
                           0000A6  1506 	C$SPI0.c$77$3$35 ==.
                                   1507 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:77: if(d == 0x7F){dummy();}
      000124 BF 7F 03         [24] 1508 	cjne	r7,#0x7F,00103$
      000127 12 02 BD         [24] 1509 	lcall	_dummy
      00012A                       1510 00103$:
                           0000AC  1511 	C$SPI0.c$79$3$35 ==.
                                   1512 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:79: SPIF =0;
      00012A C2 FF            [12] 1513 	clr	_SPIF
      00012C 80 BE            [24] 1514 	sjmp	00107$
                           0000B0  1515 	C$SPI0.c$83$1$33 ==.
                           0000B0  1516 	XG$main$0$0 ==.
      00012E 22               [24] 1517 	ret
                                   1518 ;------------------------------------------------------------
                                   1519 ;Allocation info for local variables in function 'local'
                                   1520 ;------------------------------------------------------------
                                   1521 ;c                         Allocated to registers r7 
                                   1522 ;------------------------------------------------------------
                           0000B1  1523 	G$local$0$0 ==.
                           0000B1  1524 	C$SPI0.c$84$1$33 ==.
                                   1525 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:84: void local(char c)
                                   1526 ;	-----------------------------------------
                                   1527 ;	 function local
                                   1528 ;	-----------------------------------------
      00012F                       1529 _local:
      00012F AF 82            [24] 1530 	mov	r7,dpl
                           0000B3  1531 	C$SPI0.c$87$1$38 ==.
                                   1532 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:87: printf("\033[%d;1H",local_ct);
      000131 C0 07            [24] 1533 	push	ar7
      000133 C0 08            [24] 1534 	push	_local_ct
      000135 C0 09            [24] 1535 	push	(_local_ct + 1)
      000137 74 01            [12] 1536 	mov	a,#___str_3
      000139 C0 E0            [24] 1537 	push	acc
      00013B 74 0A            [12] 1538 	mov	a,#(___str_3 >> 8)
      00013D C0 E0            [24] 1539 	push	acc
      00013F 74 80            [12] 1540 	mov	a,#0x80
      000141 C0 E0            [24] 1541 	push	acc
      000143 12 03 CC         [24] 1542 	lcall	_printf
      000146 E5 81            [12] 1543 	mov	a,sp
      000148 24 FB            [12] 1544 	add	a,#0xfb
      00014A F5 81            [12] 1545 	mov	sp,a
      00014C D0 07            [24] 1546 	pop	ar7
                           0000D0  1547 	C$SPI0.c$88$1$38 ==.
                                   1548 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:88: if(local_ct < 13){local_ct++;}
      00014E C3               [12] 1549 	clr	c
      00014F E5 08            [12] 1550 	mov	a,_local_ct
      000151 94 0D            [12] 1551 	subb	a,#0x0D
      000153 E5 09            [12] 1552 	mov	a,(_local_ct + 1)
      000155 64 80            [12] 1553 	xrl	a,#0x80
      000157 94 80            [12] 1554 	subb	a,#0x80
      000159 50 0A            [24] 1555 	jnc	00102$
      00015B 05 08            [12] 1556 	inc	_local_ct
      00015D E4               [12] 1557 	clr	a
      00015E B5 08 38         [24] 1558 	cjne	a,_local_ct,00104$
      000161 05 09            [12] 1559 	inc	(_local_ct + 1)
      000163 80 34            [24] 1560 	sjmp	00104$
      000165                       1561 00102$:
                           0000E7  1562 	C$SPI0.c$89$2$40 ==.
                                   1563 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:89: else{printf("\033[1J");local_ct=2;printf("\033[1;1H");}
      000165 C0 07            [24] 1564 	push	ar7
      000167 74 09            [12] 1565 	mov	a,#___str_4
      000169 C0 E0            [24] 1566 	push	acc
      00016B 74 0A            [12] 1567 	mov	a,#(___str_4 >> 8)
      00016D C0 E0            [24] 1568 	push	acc
      00016F 74 80            [12] 1569 	mov	a,#0x80
      000171 C0 E0            [24] 1570 	push	acc
      000173 12 03 CC         [24] 1571 	lcall	_printf
      000176 15 81            [12] 1572 	dec	sp
      000178 15 81            [12] 1573 	dec	sp
      00017A 15 81            [12] 1574 	dec	sp
      00017C 75 08 02         [24] 1575 	mov	_local_ct,#0x02
      00017F 75 09 00         [24] 1576 	mov	(_local_ct + 1),#0x00
      000182 74 0E            [12] 1577 	mov	a,#___str_5
      000184 C0 E0            [24] 1578 	push	acc
      000186 74 0A            [12] 1579 	mov	a,#(___str_5 >> 8)
      000188 C0 E0            [24] 1580 	push	acc
      00018A 74 80            [12] 1581 	mov	a,#0x80
      00018C C0 E0            [24] 1582 	push	acc
      00018E 12 03 CC         [24] 1583 	lcall	_printf
      000191 15 81            [12] 1584 	dec	sp
      000193 15 81            [12] 1585 	dec	sp
      000195 15 81            [12] 1586 	dec	sp
      000197 D0 07            [24] 1587 	pop	ar7
                           00011B  1588 	C$SPI0.c$90$1$38 ==.
                                   1589 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:90: while(!TI0);
      000199                       1590 00104$:
                           00011B  1591 	C$SPI0.c$91$1$38 ==.
                                   1592 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:91: TI0 = 0;
      000199 10 99 02         [24] 1593 	jbc	_TI0,00120$
      00019C 80 FB            [24] 1594 	sjmp	00104$
      00019E                       1595 00120$:
                           000120  1596 	C$SPI0.c$92$1$38 ==.
                                   1597 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:92: SBUF0 = c;
      00019E 8F 99            [24] 1598 	mov	_SBUF0,r7
                           000122  1599 	C$SPI0.c$93$1$38 ==.
                           000122  1600 	XG$local$0$0 ==.
      0001A0 22               [24] 1601 	ret
                                   1602 ;------------------------------------------------------------
                                   1603 ;Allocation info for local variables in function 'foreign'
                                   1604 ;------------------------------------------------------------
                                   1605 ;c                         Allocated to registers r7 
                                   1606 ;------------------------------------------------------------
                           000123  1607 	G$foreign$0$0 ==.
                           000123  1608 	C$SPI0.c$95$1$38 ==.
                                   1609 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:95: void foreign(char c)
                                   1610 ;	-----------------------------------------
                                   1611 ;	 function foreign
                                   1612 ;	-----------------------------------------
      0001A1                       1613 _foreign:
      0001A1 AF 82            [24] 1614 	mov	r7,dpl
                           000125  1615 	C$SPI0.c$98$1$42 ==.
                                   1616 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:98: printf("\033[%d;1H",alien_ct);
      0001A3 C0 07            [24] 1617 	push	ar7
      0001A5 C0 0A            [24] 1618 	push	_alien_ct
      0001A7 C0 0B            [24] 1619 	push	(_alien_ct + 1)
      0001A9 74 01            [12] 1620 	mov	a,#___str_3
      0001AB C0 E0            [24] 1621 	push	acc
      0001AD 74 0A            [12] 1622 	mov	a,#(___str_3 >> 8)
      0001AF C0 E0            [24] 1623 	push	acc
      0001B1 74 80            [12] 1624 	mov	a,#0x80
      0001B3 C0 E0            [24] 1625 	push	acc
      0001B5 12 03 CC         [24] 1626 	lcall	_printf
      0001B8 E5 81            [12] 1627 	mov	a,sp
      0001BA 24 FB            [12] 1628 	add	a,#0xfb
      0001BC F5 81            [12] 1629 	mov	sp,a
      0001BE D0 07            [24] 1630 	pop	ar7
                           000142  1631 	C$SPI0.c$99$1$42 ==.
                                   1632 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:99: if(alien_ct < 25){alien_ct++;}
      0001C0 C3               [12] 1633 	clr	c
      0001C1 E5 0A            [12] 1634 	mov	a,_alien_ct
      0001C3 94 19            [12] 1635 	subb	a,#0x19
      0001C5 E5 0B            [12] 1636 	mov	a,(_alien_ct + 1)
      0001C7 64 80            [12] 1637 	xrl	a,#0x80
      0001C9 94 80            [12] 1638 	subb	a,#0x80
      0001CB 50 0A            [24] 1639 	jnc	00102$
      0001CD 05 0A            [12] 1640 	inc	_alien_ct
      0001CF E4               [12] 1641 	clr	a
      0001D0 B5 0A 4D         [24] 1642 	cjne	a,_alien_ct,00104$
      0001D3 05 0B            [12] 1643 	inc	(_alien_ct + 1)
      0001D5 80 49            [24] 1644 	sjmp	00104$
      0001D7                       1645 00102$:
                           000159  1646 	C$SPI0.c$100$2$44 ==.
                                   1647 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:100: else{printf("\033[12;1H");printf("\033[J");alien_ct = 12;printf("\033[12;1H");}
      0001D7 C0 07            [24] 1648 	push	ar7
      0001D9 74 15            [12] 1649 	mov	a,#___str_6
      0001DB C0 E0            [24] 1650 	push	acc
      0001DD 74 0A            [12] 1651 	mov	a,#(___str_6 >> 8)
      0001DF C0 E0            [24] 1652 	push	acc
      0001E1 74 80            [12] 1653 	mov	a,#0x80
      0001E3 C0 E0            [24] 1654 	push	acc
      0001E5 12 03 CC         [24] 1655 	lcall	_printf
      0001E8 15 81            [12] 1656 	dec	sp
      0001EA 15 81            [12] 1657 	dec	sp
      0001EC 15 81            [12] 1658 	dec	sp
      0001EE 74 1D            [12] 1659 	mov	a,#___str_7
      0001F0 C0 E0            [24] 1660 	push	acc
      0001F2 74 0A            [12] 1661 	mov	a,#(___str_7 >> 8)
      0001F4 C0 E0            [24] 1662 	push	acc
      0001F6 74 80            [12] 1663 	mov	a,#0x80
      0001F8 C0 E0            [24] 1664 	push	acc
      0001FA 12 03 CC         [24] 1665 	lcall	_printf
      0001FD 15 81            [12] 1666 	dec	sp
      0001FF 15 81            [12] 1667 	dec	sp
      000201 15 81            [12] 1668 	dec	sp
      000203 75 0A 0C         [24] 1669 	mov	_alien_ct,#0x0C
      000206 75 0B 00         [24] 1670 	mov	(_alien_ct + 1),#0x00
      000209 74 15            [12] 1671 	mov	a,#___str_6
      00020B C0 E0            [24] 1672 	push	acc
      00020D 74 0A            [12] 1673 	mov	a,#(___str_6 >> 8)
      00020F C0 E0            [24] 1674 	push	acc
      000211 74 80            [12] 1675 	mov	a,#0x80
      000213 C0 E0            [24] 1676 	push	acc
      000215 12 03 CC         [24] 1677 	lcall	_printf
      000218 15 81            [12] 1678 	dec	sp
      00021A 15 81            [12] 1679 	dec	sp
      00021C 15 81            [12] 1680 	dec	sp
      00021E D0 07            [24] 1681 	pop	ar7
                           0001A2  1682 	C$SPI0.c$101$1$42 ==.
                                   1683 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:101: while(!TI0);
      000220                       1684 00104$:
                           0001A2  1685 	C$SPI0.c$102$1$42 ==.
                                   1686 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:102: TI0 = 0;
      000220 10 99 02         [24] 1687 	jbc	_TI0,00120$
      000223 80 FB            [24] 1688 	sjmp	00104$
      000225                       1689 00120$:
                           0001A7  1690 	C$SPI0.c$103$1$42 ==.
                                   1691 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:103: SBUF0 = c;
      000225 8F 99            [24] 1692 	mov	_SBUF0,r7
                           0001A9  1693 	C$SPI0.c$104$1$42 ==.
                           0001A9  1694 	XG$foreign$0$0 ==.
      000227 22               [24] 1695 	ret
                                   1696 ;------------------------------------------------------------
                                   1697 ;Allocation info for local variables in function 'read'
                                   1698 ;------------------------------------------------------------
                                   1699 ;i                         Allocated to registers 
                                   1700 ;------------------------------------------------------------
                           0001AA  1701 	G$read$0$0 ==.
                           0001AA  1702 	C$SPI0.c$105$1$42 ==.
                                   1703 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:105: char read ()
                                   1704 ;	-----------------------------------------
                                   1705 ;	 function read
                                   1706 ;	-----------------------------------------
      000228                       1707 _read:
                           0001AA  1708 	C$SPI0.c$108$1$45 ==.
                                   1709 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:108: SFRPAGE = SPI0_PAGE;
      000228 75 84 00         [24] 1710 	mov	_SFRPAGE,#0x00
                           0001AD  1711 	C$SPI0.c$109$1$45 ==.
                                   1712 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:109: NSSMD0 = 0;
      00022B C2 FA            [12] 1713 	clr	_NSSMD0
                           0001AF  1714 	C$SPI0.c$110$1$45 ==.
                                   1715 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:110: for (i=0;i<101;i++);
      00022D 7E 65            [12] 1716 	mov	r6,#0x65
      00022F 7F 00            [12] 1717 	mov	r7,#0x00
      000231                       1718 00107$:
      000231 1E               [12] 1719 	dec	r6
      000232 BE FF 01         [24] 1720 	cjne	r6,#0xFF,00121$
      000235 1F               [12] 1721 	dec	r7
      000236                       1722 00121$:
      000236 EE               [12] 1723 	mov	a,r6
      000237 4F               [12] 1724 	orl	a,r7
      000238 70 F7            [24] 1725 	jnz	00107$
                           0001BC  1726 	C$SPI0.c$111$1$45 ==.
                                   1727 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:111: while(!SPIF);
      00023A                       1728 00102$:
      00023A 30 FF FD         [24] 1729 	jnb	_SPIF,00102$
                           0001BF  1730 	C$SPI0.c$112$1$45 ==.
                                   1731 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:112: return SPI0DAT;
      00023D 85 9B 82         [24] 1732 	mov	dpl,_SPI0DAT
                           0001C2  1733 	C$SPI0.c$113$1$45 ==.
                           0001C2  1734 	XG$read$0$0 ==.
      000240 22               [24] 1735 	ret
                                   1736 ;------------------------------------------------------------
                                   1737 ;Allocation info for local variables in function 'dread'
                                   1738 ;------------------------------------------------------------
                                   1739 ;i                         Allocated to registers r5 r6 
                                   1740 ;dumb                      Allocated to registers r7 
                                   1741 ;------------------------------------------------------------
                           0001C3  1742 	G$dread$0$0 ==.
                           0001C3  1743 	C$SPI0.c$114$1$45 ==.
                                   1744 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:114: unsigned char dread ()
                                   1745 ;	-----------------------------------------
                                   1746 ;	 function dread
                                   1747 ;	-----------------------------------------
      000241                       1748 _dread:
                           0001C3  1749 	C$SPI0.c$117$1$45 ==.
                                   1750 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:117: char dumb = 0x66;
      000241 7F 66            [12] 1751 	mov	r7,#0x66
                           0001C5  1752 	C$SPI0.c$118$1$46 ==.
                                   1753 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:118: SFRPAGE = SPI0_PAGE;
      000243 75 84 00         [24] 1754 	mov	_SFRPAGE,#0x00
                           0001C8  1755 	C$SPI0.c$119$1$46 ==.
                                   1756 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:119: NSSMD0 = 0;
      000246 C2 FA            [12] 1757 	clr	_NSSMD0
                           0001CA  1758 	C$SPI0.c$120$1$46 ==.
                                   1759 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:120: for (i=0;i<101;i++);
      000248 7D 65            [12] 1760 	mov	r5,#0x65
      00024A 7E 00            [12] 1761 	mov	r6,#0x00
      00024C                       1762 00114$:
      00024C 1D               [12] 1763 	dec	r5
      00024D BD FF 01         [24] 1764 	cjne	r5,#0xFF,00150$
      000250 1E               [12] 1765 	dec	r6
      000251                       1766 00150$:
      000251 ED               [12] 1767 	mov	a,r5
      000252 4E               [12] 1768 	orl	a,r6
      000253 70 F7            [24] 1769 	jnz	00114$
                           0001D7  1770 	C$SPI0.c$121$1$46 ==.
                                   1771 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:121: while(SPIF){SPIF=0;}//make sure SPIF is not busy
      000255                       1772 00102$:
      000255 10 FF 02         [24] 1773 	jbc	_SPIF,00152$
      000258 80 02            [24] 1774 	sjmp	00104$
      00025A                       1775 00152$:
      00025A 80 F9            [24] 1776 	sjmp	00102$
      00025C                       1777 00104$:
                           0001DE  1778 	C$SPI0.c$122$1$46 ==.
                                   1779 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:122: SPI0DAT = dumb;
      00025C 8F 9B            [24] 1780 	mov	_SPI0DAT,r7
                           0001E0  1781 	C$SPI0.c$123$1$46 ==.
                                   1782 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:123: while(!SPIF);
      00025E                       1783 00105$:
      00025E 30 FF FD         [24] 1784 	jnb	_SPIF,00105$
                           0001E3  1785 	C$SPI0.c$124$1$46 ==.
                                   1786 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:124: for (i=0;i<101;i++);
      000261 7E 65            [12] 1787 	mov	r6,#0x65
      000263 7F 00            [12] 1788 	mov	r7,#0x00
      000265                       1789 00117$:
      000265 1E               [12] 1790 	dec	r6
      000266 BE FF 01         [24] 1791 	cjne	r6,#0xFF,00154$
      000269 1F               [12] 1792 	dec	r7
      00026A                       1793 00154$:
      00026A EE               [12] 1794 	mov	a,r6
      00026B 4F               [12] 1795 	orl	a,r7
                           0001EE  1796 	C$SPI0.c$125$1$46 ==.
                                   1797 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:125: counts =0 ;
      00026C 70 F7            [24] 1798 	jnz	00117$
      00026E F5 0C            [12] 1799 	mov	_counts,a
      000270 F5 0D            [12] 1800 	mov	(_counts + 1),a
                           0001F4  1801 	C$SPI0.c$126$1$46 ==.
                                   1802 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:126: while(counts < 1);
      000272                       1803 00109$:
      000272 C3               [12] 1804 	clr	c
      000273 E5 0C            [12] 1805 	mov	a,_counts
      000275 94 01            [12] 1806 	subb	a,#0x01
      000277 E5 0D            [12] 1807 	mov	a,(_counts + 1)
      000279 64 80            [12] 1808 	xrl	a,#0x80
      00027B 94 80            [12] 1809 	subb	a,#0x80
      00027D 40 F3            [24] 1810 	jc	00109$
                           000201  1811 	C$SPI0.c$127$1$46 ==.
                                   1812 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:127: printf("I made it \n\r");
      00027F 74 21            [12] 1813 	mov	a,#___str_8
      000281 C0 E0            [24] 1814 	push	acc
      000283 74 0A            [12] 1815 	mov	a,#(___str_8 >> 8)
      000285 C0 E0            [24] 1816 	push	acc
      000287 74 80            [12] 1817 	mov	a,#0x80
      000289 C0 E0            [24] 1818 	push	acc
      00028B 12 03 CC         [24] 1819 	lcall	_printf
      00028E 15 81            [12] 1820 	dec	sp
      000290 15 81            [12] 1821 	dec	sp
      000292 15 81            [12] 1822 	dec	sp
                           000216  1823 	C$SPI0.c$128$1$46 ==.
                                   1824 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:128: return SPI0DAT;
      000294 85 9B 82         [24] 1825 	mov	dpl,_SPI0DAT
                           000219  1826 	C$SPI0.c$129$1$46 ==.
                           000219  1827 	XG$dread$0$0 ==.
      000297 22               [24] 1828 	ret
                                   1829 ;------------------------------------------------------------
                                   1830 ;Allocation info for local variables in function 'write'
                                   1831 ;------------------------------------------------------------
                                   1832 ;c                         Allocated to registers r7 
                                   1833 ;i                         Allocated to registers 
                                   1834 ;------------------------------------------------------------
                           00021A  1835 	G$write$0$0 ==.
                           00021A  1836 	C$SPI0.c$131$1$46 ==.
                                   1837 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:131: void write(char c)
                                   1838 ;	-----------------------------------------
                                   1839 ;	 function write
                                   1840 ;	-----------------------------------------
      000298                       1841 _write:
      000298 AF 82            [24] 1842 	mov	r7,dpl
                           00021C  1843 	C$SPI0.c$134$1$49 ==.
                                   1844 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:134: SFRPAGE = SPI0_PAGE;
      00029A 75 84 00         [24] 1845 	mov	_SFRPAGE,#0x00
                           00021F  1846 	C$SPI0.c$135$1$49 ==.
                                   1847 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:135: SPIF = 0;
      00029D C2 FF            [12] 1848 	clr	_SPIF
                           000221  1849 	C$SPI0.c$136$1$49 ==.
                                   1850 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:136: NSSMD0 = 1;
      00029F D2 FA            [12] 1851 	setb	_NSSMD0
                           000223  1852 	C$SPI0.c$137$1$49 ==.
                                   1853 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:137: while(SPIF){SPIF=0;}//make sure SPIF is not busy
      0002A1                       1854 00101$:
      0002A1 10 FF 02         [24] 1855 	jbc	_SPIF,00132$
      0002A4 80 02            [24] 1856 	sjmp	00103$
      0002A6                       1857 00132$:
      0002A6 80 F9            [24] 1858 	sjmp	00101$
      0002A8                       1859 00103$:
                           00022A  1860 	C$SPI0.c$138$1$49 ==.
                                   1861 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:138: SPI0DAT = c;
      0002A8 8F 9B            [24] 1862 	mov	_SPI0DAT,r7
                           00022C  1863 	C$SPI0.c$139$1$49 ==.
                                   1864 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:139: while(!SPIF);
      0002AA                       1865 00104$:
      0002AA 30 FF FD         [24] 1866 	jnb	_SPIF,00104$
                           00022F  1867 	C$SPI0.c$140$1$49 ==.
                                   1868 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:140: for (i=0;i<101;i++);
      0002AD 7E 65            [12] 1869 	mov	r6,#0x65
      0002AF 7F 00            [12] 1870 	mov	r7,#0x00
      0002B1                       1871 00110$:
      0002B1 1E               [12] 1872 	dec	r6
      0002B2 BE FF 01         [24] 1873 	cjne	r6,#0xFF,00134$
      0002B5 1F               [12] 1874 	dec	r7
      0002B6                       1875 00134$:
      0002B6 EE               [12] 1876 	mov	a,r6
      0002B7 4F               [12] 1877 	orl	a,r7
      0002B8 70 F7            [24] 1878 	jnz	00110$
                           00023C  1879 	C$SPI0.c$141$1$49 ==.
                                   1880 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:141: NSSMD0 = 0;
      0002BA C2 FA            [12] 1881 	clr	_NSSMD0
                           00023E  1882 	C$SPI0.c$142$1$49 ==.
                           00023E  1883 	XG$write$0$0 ==.
      0002BC 22               [24] 1884 	ret
                                   1885 ;------------------------------------------------------------
                                   1886 ;Allocation info for local variables in function 'dummy'
                                   1887 ;------------------------------------------------------------
                                   1888 ;r                         Allocated to registers r7 
                                   1889 ;dumb                      Allocated to registers 
                                   1890 ;i                         Allocated to registers 
                                   1891 ;j                         Allocated with name '_dummy_j_1_51'
                                   1892 ;------------------------------------------------------------
                           00023F  1893 	G$dummy$0$0 ==.
                           00023F  1894 	C$SPI0.c$144$1$49 ==.
                                   1895 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:144: void dummy()
                                   1896 ;	-----------------------------------------
                                   1897 ;	 function dummy
                                   1898 ;	-----------------------------------------
      0002BD                       1899 _dummy:
                           00023F  1900 	C$SPI0.c$150$1$51 ==.
                                   1901 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:150: r = 0x00;
      0002BD 7F 00            [12] 1902 	mov	r7,#0x00
                           000241  1903 	C$SPI0.c$154$1$51 ==.
                                   1904 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:154: printf("   you pressed <DEL>");
      0002BF C0 07            [24] 1905 	push	ar7
      0002C1 74 2E            [12] 1906 	mov	a,#___str_9
      0002C3 C0 E0            [24] 1907 	push	acc
      0002C5 74 0A            [12] 1908 	mov	a,#(___str_9 >> 8)
      0002C7 C0 E0            [24] 1909 	push	acc
      0002C9 74 80            [12] 1910 	mov	a,#0x80
      0002CB C0 E0            [24] 1911 	push	acc
      0002CD 12 03 CC         [24] 1912 	lcall	_printf
      0002D0 15 81            [12] 1913 	dec	sp
      0002D2 15 81            [12] 1914 	dec	sp
      0002D4 15 81            [12] 1915 	dec	sp
      0002D6 D0 07            [24] 1916 	pop	ar7
                           00025A  1917 	C$SPI0.c$155$1$51 ==.
                                   1918 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:155: while(r!=0xFF)//for(j=0;j<100;j++)
      0002D8                       1919 00102$:
      0002D8 BF FF 02         [24] 1920 	cjne	r7,#0xFF,00123$
      0002DB 80 1B            [24] 1921 	sjmp	00108$
      0002DD                       1922 00123$:
                           00025F  1923 	C$SPI0.c$160$2$52 ==.
                                   1924 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:160: r = dread();
      0002DD 12 02 41         [24] 1925 	lcall	_dread
                           000262  1926 	C$SPI0.c$163$2$52 ==.
                                   1927 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:163: foreign(r);
      0002E0 AF 82            [24] 1928 	mov  r7,dpl
      0002E2 C0 07            [24] 1929 	push	ar7
      0002E4 12 01 A1         [24] 1930 	lcall	_foreign
      0002E7 D0 07            [24] 1931 	pop	ar7
                           00026B  1932 	C$SPI0.c$164$2$52 ==.
                                   1933 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:164: for (i=0;i<101;i++);
      0002E9 7D 65            [12] 1934 	mov	r5,#0x65
      0002EB 7E 00            [12] 1935 	mov	r6,#0x00
      0002ED                       1936 00107$:
      0002ED 1D               [12] 1937 	dec	r5
      0002EE BD FF 01         [24] 1938 	cjne	r5,#0xFF,00124$
      0002F1 1E               [12] 1939 	dec	r6
      0002F2                       1940 00124$:
      0002F2 ED               [12] 1941 	mov	a,r5
      0002F3 4E               [12] 1942 	orl	a,r6
      0002F4 70 F7            [24] 1943 	jnz	00107$
      0002F6 80 E0            [24] 1944 	sjmp	00102$
      0002F8                       1945 00108$:
                           00027A  1946 	C$SPI0.c$167$1$51 ==.
                           00027A  1947 	XG$dummy$0$0 ==.
      0002F8 22               [24] 1948 	ret
                                   1949 ;------------------------------------------------------------
                                   1950 ;Allocation info for local variables in function 'Timer1_ISR'
                                   1951 ;------------------------------------------------------------
                           00027B  1952 	G$Timer1_ISR$0$0 ==.
                           00027B  1953 	C$SPI0.c$169$1$51 ==.
                                   1954 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:169: void Timer1_ISR(void) __interrupt 1
                                   1955 ;	-----------------------------------------
                                   1956 ;	 function Timer1_ISR
                                   1957 ;	-----------------------------------------
      0002F9                       1958 _Timer1_ISR:
      0002F9 C0 E0            [24] 1959 	push	acc
      0002FB C0 D0            [24] 1960 	push	psw
                           00027F  1961 	C$SPI0.c$171$1$54 ==.
                                   1962 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:171: SFRPAGE = TIMER01_PAGE;
      0002FD 75 84 00         [24] 1963 	mov	_SFRPAGE,#0x00
                           000282  1964 	C$SPI0.c$172$1$54 ==.
                                   1965 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:172: TF1 = 0;
      000300 C2 8F            [12] 1966 	clr	_TF1
                           000284  1967 	C$SPI0.c$173$1$54 ==.
                                   1968 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:173: counts ++;
      000302 05 0C            [12] 1969 	inc	_counts
      000304 E4               [12] 1970 	clr	a
      000305 B5 0C 02         [24] 1971 	cjne	a,_counts,00103$
      000308 05 0D            [12] 1972 	inc	(_counts + 1)
      00030A                       1973 00103$:
                           00028C  1974 	C$SPI0.c$175$1$54 ==.
                                   1975 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:175: TL1 = 0;
      00030A 75 8B 00         [24] 1976 	mov	_TL1,#0x00
                           00028F  1977 	C$SPI0.c$176$1$54 ==.
                                   1978 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:176: TH1 = 0;
      00030D 75 8D 00         [24] 1979 	mov	_TH1,#0x00
      000310 D0 D0            [24] 1980 	pop	psw
      000312 D0 E0            [24] 1981 	pop	acc
                           000296  1982 	C$SPI0.c$177$1$54 ==.
                           000296  1983 	XG$Timer1_ISR$0$0 ==.
      000314 32               [24] 1984 	reti
                                   1985 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   1986 ;	eliminated unneeded push/pop dpl
                                   1987 ;	eliminated unneeded push/pop dph
                                   1988 ;	eliminated unneeded push/pop b
                                   1989 ;------------------------------------------------------------
                                   1990 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1991 ;------------------------------------------------------------
                                   1992 ;j                         Allocated to registers 
                                   1993 ;------------------------------------------------------------
                           000297  1994 	G$SYSCLK_INIT$0$0 ==.
                           000297  1995 	C$SPI0.c$180$1$54 ==.
                                   1996 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:180: void SYSCLK_INIT()
                                   1997 ;	-----------------------------------------
                                   1998 ;	 function SYSCLK_INIT
                                   1999 ;	-----------------------------------------
      000315                       2000 _SYSCLK_INIT:
                           000297  2001 	C$SPI0.c$184$1$55 ==.
                                   2002 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:184: SFRPAGE = CONFIG_PAGE;
      000315 75 84 0F         [24] 2003 	mov	_SFRPAGE,#0x0F
                           00029A  2004 	C$SPI0.c$185$1$55 ==.
                                   2005 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:185: OSCXCN  = 0x67;             // Start external oscillator
      000318 75 8C 67         [24] 2006 	mov	_OSCXCN,#0x67
                           00029D  2007 	C$SPI0.c$186$1$55 ==.
                                   2008 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:186: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      00031B 7E 00            [12] 2009 	mov	r6,#0x00
      00031D 7F 01            [12] 2010 	mov	r7,#0x01
      00031F                       2011 00107$:
      00031F 1E               [12] 2012 	dec	r6
      000320 BE FF 01         [24] 2013 	cjne	r6,#0xFF,00121$
      000323 1F               [12] 2014 	dec	r7
      000324                       2015 00121$:
      000324 EE               [12] 2016 	mov	a,r6
      000325 4F               [12] 2017 	orl	a,r7
      000326 70 F7            [24] 2018 	jnz	00107$
                           0002AA  2019 	C$SPI0.c$187$1$55 ==.
                                   2020 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:187: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      000328                       2021 00102$:
      000328 E5 8C            [12] 2022 	mov	a,_OSCXCN
      00032A 30 E7 FB         [24] 2023 	jnb	acc.7,00102$
                           0002AF  2024 	C$SPI0.c$188$1$55 ==.
                                   2025 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:188: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      00032D 75 97 01         [24] 2026 	mov	_CLKSEL,#0x01
                           0002B2  2027 	C$SPI0.c$189$1$55 ==.
                                   2028 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:189: OSCICN  = 0x00;             // Disable the internal oscillator.
      000330 75 8A 00         [24] 2029 	mov	_OSCICN,#0x00
                           0002B5  2030 	C$SPI0.c$190$1$55 ==.
                           0002B5  2031 	XG$SYSCLK_INIT$0$0 ==.
      000333 22               [24] 2032 	ret
                                   2033 ;------------------------------------------------------------
                                   2034 ;Allocation info for local variables in function 'Timer_Init'
                                   2035 ;------------------------------------------------------------
                           0002B6  2036 	G$Timer_Init$0$0 ==.
                           0002B6  2037 	C$SPI0.c$192$1$55 ==.
                                   2038 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:192: void Timer_Init()
                                   2039 ;	-----------------------------------------
                                   2040 ;	 function Timer_Init
                                   2041 ;	-----------------------------------------
      000334                       2042 _Timer_Init:
                           0002B6  2043 	C$SPI0.c$194$1$56 ==.
                                   2044 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:194: SFRPAGE   = TIMER01_PAGE;
      000334 75 84 00         [24] 2045 	mov	_SFRPAGE,#0x00
                           0002B9  2046 	C$SPI0.c$195$1$56 ==.
                                   2047 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:195: TCON      = 0x40;
      000337 75 88 40         [24] 2048 	mov	_TCON,#0x40
                           0002BC  2049 	C$SPI0.c$196$1$56 ==.
                                   2050 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:196: TMOD      = 0x20;//timer 1 in 16 bit mode
      00033A 75 89 20         [24] 2051 	mov	_TMOD,#0x20
                           0002BF  2052 	C$SPI0.c$197$1$56 ==.
                                   2053 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:197: CKCON     = 0x10;
      00033D 75 8E 10         [24] 2054 	mov	_CKCON,#0x10
                           0002C2  2055 	C$SPI0.c$198$1$56 ==.
                                   2056 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:198: TH1       = 0xA0;
      000340 75 8D A0         [24] 2057 	mov	_TH1,#0xA0
                           0002C5  2058 	C$SPI0.c$199$1$56 ==.
                                   2059 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:199: TL1 = TH1;
      000343 85 8D 8B         [24] 2060 	mov	_TL1,_TH1
                           0002C8  2061 	C$SPI0.c$201$1$56 ==.
                                   2062 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:201: printf("timer 1 set");
      000346 74 43            [12] 2063 	mov	a,#___str_10
      000348 C0 E0            [24] 2064 	push	acc
      00034A 74 0A            [12] 2065 	mov	a,#(___str_10 >> 8)
      00034C C0 E0            [24] 2066 	push	acc
      00034E 74 80            [12] 2067 	mov	a,#0x80
      000350 C0 E0            [24] 2068 	push	acc
      000352 12 03 CC         [24] 2069 	lcall	_printf
      000355 15 81            [12] 2070 	dec	sp
      000357 15 81            [12] 2071 	dec	sp
      000359 15 81            [12] 2072 	dec	sp
                           0002DD  2073 	C$SPI0.c$202$1$56 ==.
                                   2074 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:202: SFRPAGE   = TMR2_PAGE;
      00035B 75 84 00         [24] 2075 	mov	_SFRPAGE,#0x00
                           0002E0  2076 	C$SPI0.c$203$1$56 ==.
                                   2077 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:203: TMR2CN    = 0x04;
      00035E 75 C8 04         [24] 2078 	mov	_TMR2CN,#0x04
                           0002E3  2079 	C$SPI0.c$204$1$56 ==.
                                   2080 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:204: TMR2CF    = 0x08;
      000361 75 C9 08         [24] 2081 	mov	_TMR2CF,#0x08
                           0002E6  2082 	C$SPI0.c$205$1$56 ==.
                                   2083 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:205: TMR2H	  = 0xFF;
      000364 75 CD FF         [24] 2084 	mov	_TMR2H,#0xFF
                           0002E9  2085 	C$SPI0.c$206$1$56 ==.
                                   2086 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:206: TMR2L 	  = 0x70;
      000367 75 CC 70         [24] 2087 	mov	_TMR2L,#0x70
                           0002EC  2088 	C$SPI0.c$207$1$56 ==.
                                   2089 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:207: RCAP2L    = 0x70;
      00036A 75 CA 70         [24] 2090 	mov	_RCAP2L,#0x70
                           0002EF  2091 	C$SPI0.c$208$1$56 ==.
                                   2092 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:208: RCAP2H    = 0xFF;
      00036D 75 CB FF         [24] 2093 	mov	_RCAP2H,#0xFF
                           0002F2  2094 	C$SPI0.c$209$1$56 ==.
                           0002F2  2095 	XG$Timer_Init$0$0 ==.
      000370 22               [24] 2096 	ret
                                   2097 ;------------------------------------------------------------
                                   2098 ;Allocation info for local variables in function 'UART_Init'
                                   2099 ;------------------------------------------------------------
                           0002F3  2100 	G$UART_Init$0$0 ==.
                           0002F3  2101 	C$SPI0.c$210$1$56 ==.
                                   2102 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:210: void UART_Init()
                                   2103 ;	-----------------------------------------
                                   2104 ;	 function UART_Init
                                   2105 ;	-----------------------------------------
      000371                       2106 _UART_Init:
                           0002F3  2107 	C$SPI0.c$212$1$57 ==.
                                   2108 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:212: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      000371 75 84 00         [24] 2109 	mov	_SFRPAGE,#0x00
                           0002F6  2110 	C$SPI0.c$213$1$57 ==.
                                   2111 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:213: TR2		  = 1;//Start Timer 2
      000374 D2 CA            [12] 2112 	setb	_TR2
                           0002F8  2113 	C$SPI0.c$214$1$57 ==.
                                   2114 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:214: SCON0     = 0x50;
      000376 75 98 50         [24] 2115 	mov	_SCON0,#0x50
                           0002FB  2116 	C$SPI0.c$215$1$57 ==.
                                   2117 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:215: SSTA0   = 0x15;
      000379 75 91 15         [24] 2118 	mov	_SSTA0,#0x15
                           0002FE  2119 	C$SPI0.c$216$1$57 ==.
                                   2120 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:216: TI0		  = 1; // Indicate TX0 is ready
      00037C D2 99            [12] 2121 	setb	_TI0
                           000300  2122 	C$SPI0.c$217$1$57 ==.
                                   2123 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:217: TR1		  = 1; //Start Timer 1
      00037E D2 8E            [12] 2124 	setb	_TR1
                           000302  2125 	C$SPI0.c$221$1$57 ==.
                           000302  2126 	XG$UART_Init$0$0 ==.
      000380 22               [24] 2127 	ret
                                   2128 ;------------------------------------------------------------
                                   2129 ;Allocation info for local variables in function 'Port_IO_Init'
                                   2130 ;------------------------------------------------------------
                           000303  2131 	G$Port_IO_Init$0$0 ==.
                           000303  2132 	C$SPI0.c$222$1$57 ==.
                                   2133 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:222: void Port_IO_Init()
                                   2134 ;	-----------------------------------------
                                   2135 ;	 function Port_IO_Init
                                   2136 ;	-----------------------------------------
      000381                       2137 _Port_IO_Init:
                           000303  2138 	C$SPI0.c$224$1$58 ==.
                                   2139 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:224: SFRPAGE   = CONFIG_PAGE;
      000381 75 84 0F         [24] 2140 	mov	_SFRPAGE,#0x0F
                           000306  2141 	C$SPI0.c$231$1$58 ==.
                                   2142 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:231: P0MDOUT = 0x35;
      000384 75 A4 35         [24] 2143 	mov	_P0MDOUT,#0x35
                           000309  2144 	C$SPI0.c$232$1$58 ==.
                                   2145 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:232: P0 = 0x8A;
      000387 75 80 8A         [24] 2146 	mov	_P0,#0x8A
                           00030C  2147 	C$SPI0.c$236$1$58 ==.
                                   2148 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:236: WDTCN   = 0xDE;             // Disable watchdog timer.
      00038A 75 FF DE         [24] 2149 	mov	_WDTCN,#0xDE
                           00030F  2150 	C$SPI0.c$237$1$58 ==.
                                   2151 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:237: WDTCN   = 0xAD;
      00038D 75 FF AD         [24] 2152 	mov	_WDTCN,#0xAD
                           000312  2153 	C$SPI0.c$238$1$58 ==.
                                   2154 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:238: EA 		  = 1; // enable global interrupts
      000390 D2 AF            [12] 2155 	setb	_EA
                           000314  2156 	C$SPI0.c$239$1$58 ==.
                                   2157 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:239: XBR0      = 0x06;
      000392 75 E1 06         [24] 2158 	mov	_XBR0,#0x06
                           000317  2159 	C$SPI0.c$240$1$58 ==.
                                   2160 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:240: XBR2      = 0x40;
      000395 75 E3 40         [24] 2161 	mov	_XBR2,#0x40
                           00031A  2162 	C$SPI0.c$241$1$58 ==.
                           00031A  2163 	XG$Port_IO_Init$0$0 ==.
      000398 22               [24] 2164 	ret
                                   2165 ;------------------------------------------------------------
                                   2166 ;Allocation info for local variables in function 'SPI0_INIT'
                                   2167 ;------------------------------------------------------------
                           00031B  2168 	G$SPI0_INIT$0$0 ==.
                           00031B  2169 	C$SPI0.c$242$1$58 ==.
                                   2170 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:242: void SPI0_INIT()
                                   2171 ;	-----------------------------------------
                                   2172 ;	 function SPI0_INIT
                                   2173 ;	-----------------------------------------
      000399                       2174 _SPI0_INIT:
                           00031B  2175 	C$SPI0.c$244$1$59 ==.
                                   2176 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:244: SFRPAGE = SPI0_PAGE;
      000399 75 84 00         [24] 2177 	mov	_SFRPAGE,#0x00
                           00031E  2178 	C$SPI0.c$245$1$59 ==.
                                   2179 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:245: SPI0CFG = 0x40;
      00039C 75 9A 40         [24] 2180 	mov	_SPI0CFG,#0x40
                           000321  2181 	C$SPI0.c$247$1$59 ==.
                                   2182 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:247: SPI0CN = 0x0D;
      00039F 75 F8 0D         [24] 2183 	mov	_SPI0CN,#0x0D
                           000324  2184 	C$SPI0.c$248$1$59 ==.
                                   2185 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:248: SPI0CKR =  0x26;
      0003A2 75 9D 26         [24] 2186 	mov	_SPI0CKR,#0x26
                           000327  2187 	C$SPI0.c$249$1$59 ==.
                                   2188 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_03\3.3 - SPI0_remote\SPI0.c:249: SPIF = 1;
      0003A5 D2 FF            [12] 2189 	setb	_SPIF
                           000329  2190 	C$SPI0.c$250$1$59 ==.
                           000329  2191 	XG$SPI0_INIT$0$0 ==.
      0003A7 22               [24] 2192 	ret
                                   2193 	.area CSEG    (CODE)
                                   2194 	.area CONST   (CODE)
                           000000  2195 FSPI0$__str_0$0$0 == .
      0009E0                       2196 ___str_0:
      0009E0 61 74 20 6C 65 61 73  2197 	.ascii "at least i'm here"
             74 20 69 27 6D 20 68
             65 72 65
      0009F1 00                    2198 	.db 0x00
                           000012  2199 FSPI0$__str_1$0$0 == .
      0009F2                       2200 ___str_1:
      0009F2 1B                    2201 	.db 0x1B
      0009F3 5B 32 4A              2202 	.ascii "[2J"
      0009F6 00                    2203 	.db 0x00
                           000017  2204 FSPI0$__str_2$0$0 == .
      0009F7                       2205 ___str_2:
      0009F7 49 27 6D 20 61 6C 69  2206 	.ascii "I'm alive"
             76 65
      000A00 00                    2207 	.db 0x00
                           000021  2208 FSPI0$__str_3$0$0 == .
      000A01                       2209 ___str_3:
      000A01 1B                    2210 	.db 0x1B
      000A02 5B 25 64 3B 31 48     2211 	.ascii "[%d;1H"
      000A08 00                    2212 	.db 0x00
                           000029  2213 FSPI0$__str_4$0$0 == .
      000A09                       2214 ___str_4:
      000A09 1B                    2215 	.db 0x1B
      000A0A 5B 31 4A              2216 	.ascii "[1J"
      000A0D 00                    2217 	.db 0x00
                           00002E  2218 FSPI0$__str_5$0$0 == .
      000A0E                       2219 ___str_5:
      000A0E 1B                    2220 	.db 0x1B
      000A0F 5B 31 3B 31 48        2221 	.ascii "[1;1H"
      000A14 00                    2222 	.db 0x00
                           000035  2223 FSPI0$__str_6$0$0 == .
      000A15                       2224 ___str_6:
      000A15 1B                    2225 	.db 0x1B
      000A16 5B 31 32 3B 31 48     2226 	.ascii "[12;1H"
      000A1C 00                    2227 	.db 0x00
                           00003D  2228 FSPI0$__str_7$0$0 == .
      000A1D                       2229 ___str_7:
      000A1D 1B                    2230 	.db 0x1B
      000A1E 5B 4A                 2231 	.ascii "[J"
      000A20 00                    2232 	.db 0x00
                           000041  2233 FSPI0$__str_8$0$0 == .
      000A21                       2234 ___str_8:
      000A21 49 20 6D 61 64 65 20  2235 	.ascii "I made it "
             69 74 20
      000A2B 0A                    2236 	.db 0x0A
      000A2C 0D                    2237 	.db 0x0D
      000A2D 00                    2238 	.db 0x00
                           00004E  2239 FSPI0$__str_9$0$0 == .
      000A2E                       2240 ___str_9:
      000A2E 20 20 20 79 6F 75 20  2241 	.ascii "   you pressed <DEL>"
             70 72 65 73 73 65 64
             20 3C 44 45 4C 3E
      000A42 00                    2242 	.db 0x00
                           000063  2243 FSPI0$__str_10$0$0 == .
      000A43                       2244 ___str_10:
      000A43 74 69 6D 65 72 20 31  2245 	.ascii "timer 1 set"
             20 73 65 74
      000A4E 00                    2246 	.db 0x00
                                   2247 	.area XINIT   (CODE)
                                   2248 	.area CABS    (ABS,CODE)
