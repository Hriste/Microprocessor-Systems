                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Thu Oct 20 17:45:59 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module voltmeter
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _printf_fast_f
                                     13 	.globl _printf
                                     14 	.globl _P7_7
                                     15 	.globl _P7_6
                                     16 	.globl _P7_5
                                     17 	.globl _P7_4
                                     18 	.globl _P7_3
                                     19 	.globl _P7_2
                                     20 	.globl _P7_1
                                     21 	.globl _P7_0
                                     22 	.globl _SPIF
                                     23 	.globl _WCOL
                                     24 	.globl _MODF
                                     25 	.globl _RXOVRN
                                     26 	.globl _NSSMD1
                                     27 	.globl _NSSMD0
                                     28 	.globl _TXBMT
                                     29 	.globl _SPIEN
                                     30 	.globl _P6_7
                                     31 	.globl _P6_6
                                     32 	.globl _P6_5
                                     33 	.globl _P6_4
                                     34 	.globl _P6_3
                                     35 	.globl _P6_2
                                     36 	.globl _P6_1
                                     37 	.globl _P6_0
                                     38 	.globl _AD2EN
                                     39 	.globl _AD2TM
                                     40 	.globl _AD2INT
                                     41 	.globl _AD2BUSY
                                     42 	.globl _AD2CM2
                                     43 	.globl _AD2CM1
                                     44 	.globl _AD2CM0
                                     45 	.globl _AD2WINT
                                     46 	.globl _AD0EN
                                     47 	.globl _AD0TM
                                     48 	.globl _AD0INT
                                     49 	.globl _AD0BUSY
                                     50 	.globl _AD0CM1
                                     51 	.globl _AD0CM0
                                     52 	.globl _AD0WINT
                                     53 	.globl _AD0LJST
                                     54 	.globl _P5_7
                                     55 	.globl _P5_6
                                     56 	.globl _P5_5
                                     57 	.globl _P5_4
                                     58 	.globl _P5_3
                                     59 	.globl _P5_2
                                     60 	.globl _P5_1
                                     61 	.globl _P5_0
                                     62 	.globl _CF
                                     63 	.globl _CR
                                     64 	.globl _CCF5
                                     65 	.globl _CCF4
                                     66 	.globl _CCF3
                                     67 	.globl _CCF2
                                     68 	.globl _CCF1
                                     69 	.globl _CCF0
                                     70 	.globl _CY
                                     71 	.globl _AC
                                     72 	.globl _F0
                                     73 	.globl _RS1
                                     74 	.globl _RS0
                                     75 	.globl _OV
                                     76 	.globl _F1
                                     77 	.globl _P
                                     78 	.globl _P4_7
                                     79 	.globl _P4_6
                                     80 	.globl _P4_5
                                     81 	.globl _P4_4
                                     82 	.globl _P4_3
                                     83 	.globl _P4_2
                                     84 	.globl _P4_1
                                     85 	.globl _P4_0
                                     86 	.globl _TF4
                                     87 	.globl _EXF4
                                     88 	.globl _EXEN4
                                     89 	.globl _TR4
                                     90 	.globl _CT4
                                     91 	.globl _CPRL4
                                     92 	.globl _TF3
                                     93 	.globl _EXF3
                                     94 	.globl _EXEN3
                                     95 	.globl _TR3
                                     96 	.globl _CT3
                                     97 	.globl _CPRL3
                                     98 	.globl _TF2
                                     99 	.globl _EXF2
                                    100 	.globl _EXEN2
                                    101 	.globl _TR2
                                    102 	.globl _CT2
                                    103 	.globl _CPRL2
                                    104 	.globl _MAC0HO
                                    105 	.globl _MAC0Z
                                    106 	.globl _MAC0SO
                                    107 	.globl _MAC0N
                                    108 	.globl _BUSY
                                    109 	.globl _ENSMB
                                    110 	.globl _STA
                                    111 	.globl _STO
                                    112 	.globl _SI
                                    113 	.globl _AA
                                    114 	.globl _SMBFTE
                                    115 	.globl _SMBTOE
                                    116 	.globl _PT2
                                    117 	.globl _PS
                                    118 	.globl _PS0
                                    119 	.globl _PT1
                                    120 	.globl _PX1
                                    121 	.globl _PT0
                                    122 	.globl _PX0
                                    123 	.globl _P3_7
                                    124 	.globl _P3_6
                                    125 	.globl _P3_5
                                    126 	.globl _P3_4
                                    127 	.globl _P3_3
                                    128 	.globl _P3_2
                                    129 	.globl _P3_1
                                    130 	.globl _P3_0
                                    131 	.globl _EA
                                    132 	.globl _ET2
                                    133 	.globl _ES
                                    134 	.globl _ES0
                                    135 	.globl _ET1
                                    136 	.globl _EX1
                                    137 	.globl _ET0
                                    138 	.globl _EX0
                                    139 	.globl _P2_7
                                    140 	.globl _P2_6
                                    141 	.globl _P2_5
                                    142 	.globl _P2_4
                                    143 	.globl _P2_3
                                    144 	.globl _P2_2
                                    145 	.globl _P2_1
                                    146 	.globl _P2_0
                                    147 	.globl _S1MODE
                                    148 	.globl _MCE1
                                    149 	.globl _REN1
                                    150 	.globl _TB81
                                    151 	.globl _RB81
                                    152 	.globl _TI1
                                    153 	.globl _RI1
                                    154 	.globl _SM00
                                    155 	.globl _SM10
                                    156 	.globl _SM20
                                    157 	.globl _REN
                                    158 	.globl _REN0
                                    159 	.globl _TB80
                                    160 	.globl _RB80
                                    161 	.globl _TI
                                    162 	.globl _TI0
                                    163 	.globl _RI
                                    164 	.globl _RI0
                                    165 	.globl _P1_7
                                    166 	.globl _P1_6
                                    167 	.globl _P1_5
                                    168 	.globl _P1_4
                                    169 	.globl _P1_3
                                    170 	.globl _P1_2
                                    171 	.globl _P1_1
                                    172 	.globl _P1_0
                                    173 	.globl _FLHBUSY
                                    174 	.globl _CP1EN
                                    175 	.globl _CP1OUT
                                    176 	.globl _CP1RIF
                                    177 	.globl _CP1FIF
                                    178 	.globl _CP1HYP1
                                    179 	.globl _CP1HYP0
                                    180 	.globl _CP1HYN1
                                    181 	.globl _CP1HYN0
                                    182 	.globl _CP0EN
                                    183 	.globl _CP0OUT
                                    184 	.globl _CP0RIF
                                    185 	.globl _CP0FIF
                                    186 	.globl _CP0HYP1
                                    187 	.globl _CP0HYP0
                                    188 	.globl _CP0HYN1
                                    189 	.globl _CP0HYN0
                                    190 	.globl _TF1
                                    191 	.globl _TR1
                                    192 	.globl _TF0
                                    193 	.globl _TR0
                                    194 	.globl _IE1
                                    195 	.globl _IT1
                                    196 	.globl _IE0
                                    197 	.globl _IT0
                                    198 	.globl _P0_7
                                    199 	.globl _P0_6
                                    200 	.globl _P0_5
                                    201 	.globl _P0_4
                                    202 	.globl _P0_3
                                    203 	.globl _P0_2
                                    204 	.globl _P0_1
                                    205 	.globl _P0_0
                                    206 	.globl _MAC0RND
                                    207 	.globl _MAC0ACC
                                    208 	.globl _MAC0A
                                    209 	.globl _RCAP4
                                    210 	.globl _TMR4
                                    211 	.globl _DAC1
                                    212 	.globl _RCAP3
                                    213 	.globl _TMR3
                                    214 	.globl _PCA0CP5
                                    215 	.globl _PCA0CP4
                                    216 	.globl _PCA0CP3
                                    217 	.globl _PCA0CP2
                                    218 	.globl _PCA0CP1
                                    219 	.globl _PCA0CP0
                                    220 	.globl _PCA0
                                    221 	.globl _DAC0
                                    222 	.globl _ADC0LT
                                    223 	.globl _ADC0GT
                                    224 	.globl _ADC0
                                    225 	.globl _RCAP2
                                    226 	.globl _TMR2
                                    227 	.globl _TMR1
                                    228 	.globl _TMR0
                                    229 	.globl _P7
                                    230 	.globl _P6
                                    231 	.globl _XBR2
                                    232 	.globl _XBR1
                                    233 	.globl _XBR0
                                    234 	.globl _P5
                                    235 	.globl _P4
                                    236 	.globl _FLACL
                                    237 	.globl _P1MDIN
                                    238 	.globl _P3MDOUT
                                    239 	.globl _P2MDOUT
                                    240 	.globl _P1MDOUT
                                    241 	.globl _P0MDOUT
                                    242 	.globl _CCH0LC
                                    243 	.globl _CCH0TN
                                    244 	.globl _CCH0CN
                                    245 	.globl _P7MDOUT
                                    246 	.globl _P6MDOUT
                                    247 	.globl _P5MDOUT
                                    248 	.globl _P4MDOUT
                                    249 	.globl _CCH0MA
                                    250 	.globl _CLKSEL
                                    251 	.globl _SFRPGCN
                                    252 	.globl _PLL0FLT
                                    253 	.globl _PLL0MUL
                                    254 	.globl _PLL0DIV
                                    255 	.globl _OSCXCN
                                    256 	.globl _OSCICL
                                    257 	.globl _OSCICN
                                    258 	.globl _PLL0CN
                                    259 	.globl _FLSTAT
                                    260 	.globl _MAC0RNDH
                                    261 	.globl _MAC0RNDL
                                    262 	.globl _MAC0CF
                                    263 	.globl _MAC0AH
                                    264 	.globl _MAC0AL
                                    265 	.globl _MAC0STA
                                    266 	.globl _MAC0OVR
                                    267 	.globl _MAC0ACC3
                                    268 	.globl _MAC0ACC2
                                    269 	.globl _MAC0ACC1
                                    270 	.globl _MAC0ACC0
                                    271 	.globl _MAC0BH
                                    272 	.globl _MAC0BL
                                    273 	.globl _ADC2CN
                                    274 	.globl _TMR4H
                                    275 	.globl _TMR4L
                                    276 	.globl _RCAP4H
                                    277 	.globl _RCAP4L
                                    278 	.globl _TMR4CF
                                    279 	.globl _TMR4CN
                                    280 	.globl _ADC2LT
                                    281 	.globl _ADC2GT
                                    282 	.globl _ADC2
                                    283 	.globl _ADC2CF
                                    284 	.globl _AMX2SL
                                    285 	.globl _AMX2CF
                                    286 	.globl _CPT1MD
                                    287 	.globl _CPT1CN
                                    288 	.globl _DAC1CN
                                    289 	.globl _DAC1H
                                    290 	.globl _DAC1L
                                    291 	.globl _TMR3H
                                    292 	.globl _TMR3L
                                    293 	.globl _RCAP3H
                                    294 	.globl _RCAP3L
                                    295 	.globl _TMR3CF
                                    296 	.globl _TMR3CN
                                    297 	.globl _SBUF1
                                    298 	.globl _SCON1
                                    299 	.globl _CPT0MD
                                    300 	.globl _CPT0CN
                                    301 	.globl _PCA0CPH1
                                    302 	.globl _PCA0CPL1
                                    303 	.globl _PCA0CPH0
                                    304 	.globl _PCA0CPL0
                                    305 	.globl _PCA0H
                                    306 	.globl _PCA0L
                                    307 	.globl _SPI0CN
                                    308 	.globl _RSTSRC
                                    309 	.globl _PCA0CPH4
                                    310 	.globl _PCA0CPL4
                                    311 	.globl _PCA0CPH3
                                    312 	.globl _PCA0CPL3
                                    313 	.globl _PCA0CPH2
                                    314 	.globl _PCA0CPL2
                                    315 	.globl _ADC0CN
                                    316 	.globl _PCA0CPH5
                                    317 	.globl _PCA0CPL5
                                    318 	.globl _PCA0CPM5
                                    319 	.globl _PCA0CPM4
                                    320 	.globl _PCA0CPM3
                                    321 	.globl _PCA0CPM2
                                    322 	.globl _PCA0CPM1
                                    323 	.globl _PCA0CPM0
                                    324 	.globl _PCA0MD
                                    325 	.globl _PCA0CN
                                    326 	.globl _DAC0CN
                                    327 	.globl _DAC0H
                                    328 	.globl _DAC0L
                                    329 	.globl _REF0CN
                                    330 	.globl _SMB0CR
                                    331 	.globl _TH2
                                    332 	.globl _TMR2H
                                    333 	.globl _TL2
                                    334 	.globl _TMR2L
                                    335 	.globl _RCAP2H
                                    336 	.globl _RCAP2L
                                    337 	.globl _TMR2CF
                                    338 	.globl _TMR2CN
                                    339 	.globl _ADC0LTH
                                    340 	.globl _ADC0LTL
                                    341 	.globl _ADC0GTH
                                    342 	.globl _ADC0GTL
                                    343 	.globl _SMB0ADR
                                    344 	.globl _SMB0DAT
                                    345 	.globl _SMB0STA
                                    346 	.globl _SMB0CN
                                    347 	.globl _ADC0H
                                    348 	.globl _ADC0L
                                    349 	.globl _ADC0CF
                                    350 	.globl _AMX0SL
                                    351 	.globl _AMX0CF
                                    352 	.globl _SADEN0
                                    353 	.globl _FLSCL
                                    354 	.globl _SADDR0
                                    355 	.globl _EMI0CF
                                    356 	.globl __XPAGE
                                    357 	.globl _EMI0CN
                                    358 	.globl _EMI0TC
                                    359 	.globl _SPI0CKR
                                    360 	.globl _SPI0DAT
                                    361 	.globl _SPI0CFG
                                    362 	.globl _SBUF
                                    363 	.globl _SBUF0
                                    364 	.globl _SCON
                                    365 	.globl _SCON0
                                    366 	.globl _SSTA0
                                    367 	.globl _PSCTL
                                    368 	.globl _CKCON
                                    369 	.globl _TH1
                                    370 	.globl _TH0
                                    371 	.globl _TL1
                                    372 	.globl _TL0
                                    373 	.globl _TMOD
                                    374 	.globl _TCON
                                    375 	.globl _WDTCN
                                    376 	.globl _EIP2
                                    377 	.globl _EIP1
                                    378 	.globl _B
                                    379 	.globl _EIE2
                                    380 	.globl _EIE1
                                    381 	.globl _ACC
                                    382 	.globl _PSW
                                    383 	.globl _IP
                                    384 	.globl _PSBANK
                                    385 	.globl _P3
                                    386 	.globl _IE
                                    387 	.globl _P2
                                    388 	.globl _P1
                                    389 	.globl _PCON
                                    390 	.globl _SFRLAST
                                    391 	.globl _SFRNEXT
                                    392 	.globl _SFRPAGE
                                    393 	.globl _DPH
                                    394 	.globl _DPL
                                    395 	.globl _SP
                                    396 	.globl _P0
                                    397 	.globl _trials
                                    398 	.globl _hmax
                                    399 	.globl _max
                                    400 	.globl _hmin
                                    401 	.globl _min
                                    402 	.globl _run
                                    403 	.globl _running
                                    404 	.globl _putchar
                                    405 	.globl _getchar
                                    406 	.globl _main
                                    407 	.globl _ADC_read
                                    408 	.globl _score
                                    409 	.globl _SYSCLK_INIT
                                    410 	.globl _Timer_Init
                                    411 	.globl _UART_Init
                                    412 	.globl _Port_IO_Init
                                    413 	.globl _ADC_INIT
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
                           000000  1199 G$running$0$0==.
      000023                       1200 _running::
      000023                       1201 	.ds 4
                           000004  1202 G$run$0$0==.
      000027                       1203 _run::
      000027                       1204 	.ds 2
                           000006  1205 G$min$0$0==.
      000029                       1206 _min::
      000029                       1207 	.ds 4
                           00000A  1208 G$hmin$0$0==.
      00002D                       1209 _hmin::
      00002D                       1210 	.ds 2
                           00000C  1211 G$max$0$0==.
      00002F                       1212 _max::
      00002F                       1213 	.ds 4
                           000010  1214 G$hmax$0$0==.
      000033                       1215 _hmax::
      000033                       1216 	.ds 2
                           000012  1217 G$trials$0$0==.
      000035                       1218 _trials::
      000035                       1219 	.ds 4
                           000016  1220 Lvoltmeter.score$volts$1$55==.
      000039                       1221 _score_volts_1_55:
      000039                       1222 	.ds 4
                           00001A  1223 Lvoltmeter.score$hvolts$1$55==.
      00003D                       1224 _score_hvolts_1_55:
      00003D                       1225 	.ds 2
                           00001C  1226 Lvoltmeter.score$sloc0$1$0==.
      00003F                       1227 _score_sloc0_1_0:
      00003F                       1228 	.ds 4
                                   1229 ;--------------------------------------------------------
                                   1230 ; overlayable items in internal ram 
                                   1231 ;--------------------------------------------------------
                                   1232 	.area	OSEG    (OVR,DATA)
                                   1233 	.area	OSEG    (OVR,DATA)
                                   1234 	.area	OSEG    (OVR,DATA)
                                   1235 ;--------------------------------------------------------
                                   1236 ; Stack segment in internal ram 
                                   1237 ;--------------------------------------------------------
                                   1238 	.area	SSEG
      00005D                       1239 __start__stack:
      00005D                       1240 	.ds	1
                                   1241 
                                   1242 ;--------------------------------------------------------
                                   1243 ; indirectly addressable internal ram data
                                   1244 ;--------------------------------------------------------
                                   1245 	.area ISEG    (DATA)
                                   1246 ;--------------------------------------------------------
                                   1247 ; absolute internal ram data
                                   1248 ;--------------------------------------------------------
                                   1249 	.area IABS    (ABS,DATA)
                                   1250 	.area IABS    (ABS,DATA)
                                   1251 ;--------------------------------------------------------
                                   1252 ; bit data
                                   1253 ;--------------------------------------------------------
                                   1254 	.area BSEG    (BIT)
                                   1255 ;--------------------------------------------------------
                                   1256 ; paged external ram data
                                   1257 ;--------------------------------------------------------
                                   1258 	.area PSEG    (PAG,XDATA)
                                   1259 ;--------------------------------------------------------
                                   1260 ; external ram data
                                   1261 ;--------------------------------------------------------
                                   1262 	.area XSEG    (XDATA)
                                   1263 ;--------------------------------------------------------
                                   1264 ; absolute external ram data
                                   1265 ;--------------------------------------------------------
                                   1266 	.area XABS    (ABS,XDATA)
                                   1267 ;--------------------------------------------------------
                                   1268 ; external initialized ram data
                                   1269 ;--------------------------------------------------------
                                   1270 	.area XISEG   (XDATA)
                                   1271 	.area HOME    (CODE)
                                   1272 	.area GSINIT0 (CODE)
                                   1273 	.area GSINIT1 (CODE)
                                   1274 	.area GSINIT2 (CODE)
                                   1275 	.area GSINIT3 (CODE)
                                   1276 	.area GSINIT4 (CODE)
                                   1277 	.area GSINIT5 (CODE)
                                   1278 	.area GSINIT  (CODE)
                                   1279 	.area GSFINAL (CODE)
                                   1280 	.area CSEG    (CODE)
                                   1281 ;--------------------------------------------------------
                                   1282 ; interrupt vector 
                                   1283 ;--------------------------------------------------------
                                   1284 	.area HOME    (CODE)
      000000                       1285 __interrupt_vect:
      000000 02 00 06         [24] 1286 	ljmp	__sdcc_gsinit_startup
                                   1287 ;--------------------------------------------------------
                                   1288 ; global & static initialisations
                                   1289 ;--------------------------------------------------------
                                   1290 	.area HOME    (CODE)
                                   1291 	.area GSINIT  (CODE)
                                   1292 	.area GSFINAL (CODE)
                                   1293 	.area GSINIT  (CODE)
                                   1294 	.globl __sdcc_gsinit_startup
                                   1295 	.globl __sdcc_program_startup
                                   1296 	.globl __start__stack
                                   1297 	.globl __mcs51_genXINIT
                                   1298 	.globl __mcs51_genXRAMCLEAR
                                   1299 	.globl __mcs51_genRAMCLEAR
                           000000  1300 	C$voltmeter.c$19$1$66 ==.
                                   1301 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:19: float running = 0;
      00005F E4               [12] 1302 	clr	a
      000060 F5 23            [12] 1303 	mov	_running,a
      000062 F5 24            [12] 1304 	mov	(_running + 1),a
      000064 F5 25            [12] 1305 	mov	(_running + 2),a
      000066 F5 26            [12] 1306 	mov	(_running + 3),a
                           000009  1307 	C$voltmeter.c$20$1$66 ==.
                                   1308 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:20: int run = 0x00;
      000068 F5 27            [12] 1309 	mov	_run,a
      00006A F5 28            [12] 1310 	mov	(_run + 1),a
                           00000D  1311 	C$voltmeter.c$21$1$66 ==.
                                   1312 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:21: float min = 100;
      00006C F5 29            [12] 1313 	mov	_min,a
      00006E F5 2A            [12] 1314 	mov	(_min + 1),a
      000070 75 2B C8         [24] 1315 	mov	(_min + 2),#0xC8
      000073 75 2C 42         [24] 1316 	mov	(_min + 3),#0x42
                           000017  1317 	C$voltmeter.c$22$1$66 ==.
                                   1318 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:22: int hmin = 0xFF;
      000076 75 2D FF         [24] 1319 	mov	_hmin,#0xFF
                                   1320 ;	1-genFromRTrack replaced	mov	(_hmin + 1),#0x00
      000079 F5 2E            [12] 1321 	mov	(_hmin + 1),a
                           00001C  1322 	C$voltmeter.c$23$1$66 ==.
                                   1323 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:23: float max = 0;
      00007B F5 2F            [12] 1324 	mov	_max,a
      00007D F5 30            [12] 1325 	mov	(_max + 1),a
      00007F F5 31            [12] 1326 	mov	(_max + 2),a
      000081 F5 32            [12] 1327 	mov	(_max + 3),a
                           000024  1328 	C$voltmeter.c$24$1$66 ==.
                                   1329 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:24: int hmax = 0x00;
      000083 F5 33            [12] 1330 	mov	_hmax,a
      000085 F5 34            [12] 1331 	mov	(_hmax + 1),a
                           000028  1332 	C$voltmeter.c$25$1$66 ==.
                                   1333 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:25: float trials = 0.0;
      000087 F5 35            [12] 1334 	mov	_trials,a
      000089 F5 36            [12] 1335 	mov	(_trials + 1),a
      00008B F5 37            [12] 1336 	mov	(_trials + 2),a
      00008D F5 38            [12] 1337 	mov	(_trials + 3),a
                                   1338 	.area GSFINAL (CODE)
      00008F 02 00 03         [24] 1339 	ljmp	__sdcc_program_startup
                                   1340 ;--------------------------------------------------------
                                   1341 ; Home
                                   1342 ;--------------------------------------------------------
                                   1343 	.area HOME    (CODE)
                                   1344 	.area HOME    (CODE)
      000003                       1345 __sdcc_program_startup:
      000003 02 00 A7         [24] 1346 	ljmp	_main
                                   1347 ;	return from main will return to caller
                                   1348 ;--------------------------------------------------------
                                   1349 ; code
                                   1350 ;--------------------------------------------------------
                                   1351 	.area CSEG    (CODE)
                                   1352 ;------------------------------------------------------------
                                   1353 ;Allocation info for local variables in function 'putchar'
                                   1354 ;------------------------------------------------------------
                                   1355 ;c                         Allocated to registers r7 
                                   1356 ;------------------------------------------------------------
                           000000  1357 	G$putchar$0$0 ==.
                           000000  1358 	C$putget.h$18$0$0 ==.
                                   1359 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:18: void putchar(char c)
                                   1360 ;	-----------------------------------------
                                   1361 ;	 function putchar
                                   1362 ;	-----------------------------------------
      000092                       1363 _putchar:
                           000007  1364 	ar7 = 0x07
                           000006  1365 	ar6 = 0x06
                           000005  1366 	ar5 = 0x05
                           000004  1367 	ar4 = 0x04
                           000003  1368 	ar3 = 0x03
                           000002  1369 	ar2 = 0x02
                           000001  1370 	ar1 = 0x01
                           000000  1371 	ar0 = 0x00
      000092 AF 82            [24] 1372 	mov	r7,dpl
                           000002  1373 	C$putget.h$20$1$16 ==.
                                   1374 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:20: while(!TI0); 
      000094                       1375 00101$:
                           000002  1376 	C$putget.h$21$1$16 ==.
                                   1377 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:21: TI0=0;
      000094 10 99 02         [24] 1378 	jbc	_TI0,00112$
      000097 80 FB            [24] 1379 	sjmp	00101$
      000099                       1380 00112$:
                           000007  1381 	C$putget.h$22$1$16 ==.
                                   1382 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:22: SBUF0 = c;
      000099 8F 99            [24] 1383 	mov	_SBUF0,r7
                           000009  1384 	C$putget.h$23$1$16 ==.
                           000009  1385 	XG$putchar$0$0 ==.
      00009B 22               [24] 1386 	ret
                                   1387 ;------------------------------------------------------------
                                   1388 ;Allocation info for local variables in function 'getchar'
                                   1389 ;------------------------------------------------------------
                                   1390 ;c                         Allocated to registers 
                                   1391 ;------------------------------------------------------------
                           00000A  1392 	G$getchar$0$0 ==.
                           00000A  1393 	C$putget.h$28$1$16 ==.
                                   1394 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:28: char getchar(void)
                                   1395 ;	-----------------------------------------
                                   1396 ;	 function getchar
                                   1397 ;	-----------------------------------------
      00009C                       1398 _getchar:
                           00000A  1399 	C$putget.h$31$1$18 ==.
                                   1400 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:31: while(!RI0);
      00009C                       1401 00101$:
                           00000A  1402 	C$putget.h$32$1$18 ==.
                                   1403 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:32: RI0 =0;
      00009C 10 98 02         [24] 1404 	jbc	_RI0,00112$
      00009F 80 FB            [24] 1405 	sjmp	00101$
      0000A1                       1406 00112$:
                           00000F  1407 	C$putget.h$33$1$18 ==.
                                   1408 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:33: c = SBUF0;
      0000A1 E5 99            [12] 1409 	mov	a,_SBUF0
                           000011  1410 	C$putget.h$36$1$18 ==.
                                   1411 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:36: return SBUF0;
      0000A3 85 99 82         [24] 1412 	mov	dpl,_SBUF0
                           000014  1413 	C$putget.h$37$1$18 ==.
                           000014  1414 	XG$getchar$0$0 ==.
      0000A6 22               [24] 1415 	ret
                                   1416 ;------------------------------------------------------------
                                   1417 ;Allocation info for local variables in function 'main'
                                   1418 ;------------------------------------------------------------
                           000015  1419 	G$main$0$0 ==.
                           000015  1420 	C$voltmeter.c$38$1$18 ==.
                                   1421 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:38: void main (void)
                                   1422 ;	-----------------------------------------
                                   1423 ;	 function main
                                   1424 ;	-----------------------------------------
      0000A7                       1425 _main:
                           000015  1426 	C$voltmeter.c$41$1$50 ==.
                                   1427 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:41: SFRPAGE = CONFIG_PAGE;
      0000A7 75 84 0F         [24] 1428 	mov	_SFRPAGE,#0x0F
                           000018  1429 	C$voltmeter.c$42$1$50 ==.
                                   1430 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:42: SYSCLK_INIT();
      0000AA 12 05 11         [24] 1431 	lcall	_SYSCLK_INIT
                           00001B  1432 	C$voltmeter.c$43$1$50 ==.
                                   1433 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:43: Port_IO_Init();
      0000AD 12 05 54         [24] 1434 	lcall	_Port_IO_Init
                           00001E  1435 	C$voltmeter.c$44$1$50 ==.
                                   1436 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:44: Timer_Init();
      0000B0 12 05 30         [24] 1437 	lcall	_Timer_Init
                           000021  1438 	C$voltmeter.c$45$1$50 ==.
                                   1439 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:45: UART_Init();
      0000B3 12 05 46         [24] 1440 	lcall	_UART_Init
                           000024  1441 	C$voltmeter.c$46$1$50 ==.
                                   1442 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:46: ADC_INIT();
      0000B6 12 05 72         [24] 1443 	lcall	_ADC_INIT
                           000027  1444 	C$voltmeter.c$47$1$50 ==.
                                   1445 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:47: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
      0000B9 75 84 00         [24] 1446 	mov	_SFRPAGE,#0x00
                           00002A  1447 	C$voltmeter.c$48$1$50 ==.
                                   1448 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:48: printf("\033[2J");
      0000BC 74 AA            [12] 1449 	mov	a,#___str_0
      0000BE C0 E0            [24] 1450 	push	acc
      0000C0 74 14            [12] 1451 	mov	a,#(___str_0 >> 8)
      0000C2 C0 E0            [24] 1452 	push	acc
      0000C4 74 80            [12] 1453 	mov	a,#0x80
      0000C6 C0 E0            [24] 1454 	push	acc
      0000C8 12 0D 0C         [24] 1455 	lcall	_printf
      0000CB 15 81            [12] 1456 	dec	sp
      0000CD 15 81            [12] 1457 	dec	sp
      0000CF 15 81            [12] 1458 	dec	sp
                           00003F  1459 	C$voltmeter.c$50$1$50 ==.
                                   1460 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:50: printf("Current: \n\rAverage: \n\rMin: \n\rMax:\n\r");
      0000D1 74 AF            [12] 1461 	mov	a,#___str_1
      0000D3 C0 E0            [24] 1462 	push	acc
      0000D5 74 14            [12] 1463 	mov	a,#(___str_1 >> 8)
      0000D7 C0 E0            [24] 1464 	push	acc
      0000D9 74 80            [12] 1465 	mov	a,#0x80
      0000DB C0 E0            [24] 1466 	push	acc
      0000DD 12 0D 0C         [24] 1467 	lcall	_printf
      0000E0 15 81            [12] 1468 	dec	sp
      0000E2 15 81            [12] 1469 	dec	sp
      0000E4 15 81            [12] 1470 	dec	sp
                           000054  1471 	C$voltmeter.c$51$1$50 ==.
                                   1472 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:51: while(1)
      0000E6                       1473 00104$:
                           000054  1474 	C$voltmeter.c$53$2$51 ==.
                                   1475 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:53: SFRPAGE = LEGACY_PAGE;
      0000E6 75 84 00         [24] 1476 	mov	_SFRPAGE,#0x00
                           000057  1477 	C$voltmeter.c$55$2$51 ==.
                                   1478 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:55: if(P1 == 0x00)
      0000E9 E5 90            [12] 1479 	mov	a,_P1
      0000EB 70 F9            [24] 1480 	jnz	00104$
                           00005B  1481 	C$voltmeter.c$57$3$52 ==.
                                   1482 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:57: score(ADC_read());
      0000ED 12 00 F6         [24] 1483 	lcall	_ADC_read
      0000F0 12 01 0F         [24] 1484 	lcall	_score
      0000F3 80 F1            [24] 1485 	sjmp	00104$
                           000063  1486 	C$voltmeter.c$62$1$50 ==.
                           000063  1487 	XG$main$0$0 ==.
      0000F5 22               [24] 1488 	ret
                                   1489 ;------------------------------------------------------------
                                   1490 ;Allocation info for local variables in function 'ADC_read'
                                   1491 ;------------------------------------------------------------
                           000064  1492 	G$ADC_read$0$0 ==.
                           000064  1493 	C$voltmeter.c$64$1$50 ==.
                                   1494 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:64: unsigned int ADC_read()
                                   1495 ;	-----------------------------------------
                                   1496 ;	 function ADC_read
                                   1497 ;	-----------------------------------------
      0000F6                       1498 _ADC_read:
                           000064  1499 	C$voltmeter.c$66$1$53 ==.
                                   1500 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:66: AMX0SL = 0;//select pin
      0000F6 75 BB 00         [24] 1501 	mov	_AMX0SL,#0x00
                           000067  1502 	C$voltmeter.c$67$1$53 ==.
                                   1503 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:67: ADC0CN &= ~(0x20);// reset for reading
      0000F9 AF E8            [24] 1504 	mov	r7,_ADC0CN
      0000FB 74 DF            [12] 1505 	mov	a,#0xDF
      0000FD 5F               [12] 1506 	anl	a,r7
      0000FE F5 E8            [12] 1507 	mov	_ADC0CN,a
                           00006E  1508 	C$voltmeter.c$68$1$53 ==.
                                   1509 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:68: ADC0CN |= 0x10;
      000100 43 E8 10         [24] 1510 	orl	_ADC0CN,#0x10
                           000071  1511 	C$voltmeter.c$69$1$53 ==.
                                   1512 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:69: while((ADC0CN & 0x20)==0); // wait for conversion to finish
      000103                       1513 00101$:
      000103 E5 E8            [12] 1514 	mov	a,_ADC0CN
      000105 30 E5 FB         [24] 1515 	jnb	acc.5,00101$
                           000076  1516 	C$voltmeter.c$70$1$53 ==.
                                   1517 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:70: return ADC0;
      000108 85 BE 82         [24] 1518 	mov	dpl,((_ADC0 >> 0) & 0xFF)
      00010B 85 BF 83         [24] 1519 	mov	dph,((_ADC0 >> 8) & 0xFF)
                           00007C  1520 	C$voltmeter.c$71$1$53 ==.
                           00007C  1521 	XG$ADC_read$0$0 ==.
      00010E 22               [24] 1522 	ret
                                   1523 ;------------------------------------------------------------
                                   1524 ;Allocation info for local variables in function 'score'
                                   1525 ;------------------------------------------------------------
                                   1526 ;value                     Allocated to registers 
                                   1527 ;volts                     Allocated with name '_score_volts_1_55'
                                   1528 ;hvolts                    Allocated with name '_score_hvolts_1_55'
                                   1529 ;sloc0                     Allocated with name '_score_sloc0_1_0'
                                   1530 ;------------------------------------------------------------
                           00007D  1531 	G$score$0$0 ==.
                           00007D  1532 	C$voltmeter.c$72$1$53 ==.
                                   1533 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:72: void score(unsigned int value)
                                   1534 ;	-----------------------------------------
                                   1535 ;	 function score
                                   1536 ;	-----------------------------------------
      00010F                       1537 _score:
                           00007D  1538 	C$voltmeter.c$77$1$55 ==.
                                   1539 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:77: volts = (value/1000.0);
      00010F 12 0C 8D         [24] 1540 	lcall	___uint2fs
      000112 AC 82            [24] 1541 	mov	r4,dpl
      000114 AD 83            [24] 1542 	mov	r5,dph
      000116 AE F0            [24] 1543 	mov	r6,b
      000118 FF               [12] 1544 	mov	r7,a
      000119 C0 07            [24] 1545 	push	ar7
      00011B C0 06            [24] 1546 	push	ar6
      00011D C0 05            [24] 1547 	push	ar5
      00011F C0 04            [24] 1548 	push	ar4
      000121 E4               [12] 1549 	clr	a
      000122 C0 E0            [24] 1550 	push	acc
      000124 C0 E0            [24] 1551 	push	acc
      000126 74 7A            [12] 1552 	mov	a,#0x7A
      000128 C0 E0            [24] 1553 	push	acc
      00012A 74 44            [12] 1554 	mov	a,#0x44
      00012C C0 E0            [24] 1555 	push	acc
      00012E 8C 82            [24] 1556 	mov	dpl,r4
      000130 8D 83            [24] 1557 	mov	dph,r5
      000132 8E F0            [24] 1558 	mov	b,r6
      000134 EF               [12] 1559 	mov	a,r7
      000135 12 13 1A         [24] 1560 	lcall	___fsdiv
      000138 85 82 39         [24] 1561 	mov	_score_volts_1_55,dpl
      00013B 85 83 3A         [24] 1562 	mov	(_score_volts_1_55 + 1),dph
      00013E 85 F0 3B         [24] 1563 	mov	(_score_volts_1_55 + 2),b
      000141 F5 3C            [12] 1564 	mov	(_score_volts_1_55 + 3),a
      000143 E5 81            [12] 1565 	mov	a,sp
      000145 24 FC            [12] 1566 	add	a,#0xfc
      000147 F5 81            [12] 1567 	mov	sp,a
                           0000B7  1568 	C$voltmeter.c$78$1$55 ==.
                                   1569 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:78: volts = .5860806*volts;
      000149 C0 39            [24] 1570 	push	_score_volts_1_55
      00014B C0 3A            [24] 1571 	push	(_score_volts_1_55 + 1)
      00014D C0 3B            [24] 1572 	push	(_score_volts_1_55 + 2)
      00014F C0 3C            [24] 1573 	push	(_score_volts_1_55 + 3)
      000151 90 09 61         [24] 1574 	mov	dptr,#0x0961
      000154 75 F0 16         [24] 1575 	mov	b,#0x16
      000157 74 3F            [12] 1576 	mov	a,#0x3F
      000159 12 0A 03         [24] 1577 	lcall	___fsmul
      00015C 85 82 39         [24] 1578 	mov	_score_volts_1_55,dpl
      00015F 85 83 3A         [24] 1579 	mov	(_score_volts_1_55 + 1),dph
      000162 85 F0 3B         [24] 1580 	mov	(_score_volts_1_55 + 2),b
      000165 F5 3C            [12] 1581 	mov	(_score_volts_1_55 + 3),a
      000167 E5 81            [12] 1582 	mov	a,sp
      000169 24 FC            [12] 1583 	add	a,#0xfc
      00016B F5 81            [12] 1584 	mov	sp,a
                           0000DB  1585 	C$voltmeter.c$79$1$55 ==.
                                   1586 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:79: printf("\033[1;10H");
      00016D 74 D3            [12] 1587 	mov	a,#___str_2
      00016F C0 E0            [24] 1588 	push	acc
      000171 74 14            [12] 1589 	mov	a,#(___str_2 >> 8)
      000173 C0 E0            [24] 1590 	push	acc
      000175 74 80            [12] 1591 	mov	a,#0x80
      000177 C0 E0            [24] 1592 	push	acc
      000179 12 0D 0C         [24] 1593 	lcall	_printf
      00017C 15 81            [12] 1594 	dec	sp
      00017E 15 81            [12] 1595 	dec	sp
      000180 15 81            [12] 1596 	dec	sp
                           0000F0  1597 	C$voltmeter.c$80$1$55 ==.
                                   1598 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:80: printf_fast_f("%7.6f, 0x",volts);
      000182 C0 39            [24] 1599 	push	_score_volts_1_55
      000184 C0 3A            [24] 1600 	push	(_score_volts_1_55 + 1)
      000186 C0 3B            [24] 1601 	push	(_score_volts_1_55 + 2)
      000188 C0 3C            [24] 1602 	push	(_score_volts_1_55 + 3)
      00018A 74 DB            [12] 1603 	mov	a,#___str_3
      00018C C0 E0            [24] 1604 	push	acc
      00018E 74 14            [12] 1605 	mov	a,#(___str_3 >> 8)
      000190 C0 E0            [24] 1606 	push	acc
      000192 12 05 82         [24] 1607 	lcall	_printf_fast_f
      000195 E5 81            [12] 1608 	mov	a,sp
      000197 24 FA            [12] 1609 	add	a,#0xfa
      000199 F5 81            [12] 1610 	mov	sp,a
      00019B D0 04            [24] 1611 	pop	ar4
      00019D D0 05            [24] 1612 	pop	ar5
      00019F D0 06            [24] 1613 	pop	ar6
      0001A1 D0 07            [24] 1614 	pop	ar7
                           000111  1615 	C$voltmeter.c$81$1$55 ==.
                                   1616 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:81: hvolts = value/15.9961;//9375;
      0001A3 74 07            [12] 1617 	mov	a,#0x07
      0001A5 C0 E0            [24] 1618 	push	acc
      0001A7 74 F0            [12] 1619 	mov	a,#0xF0
      0001A9 C0 E0            [24] 1620 	push	acc
      0001AB 74 7F            [12] 1621 	mov	a,#0x7F
      0001AD C0 E0            [24] 1622 	push	acc
      0001AF 74 41            [12] 1623 	mov	a,#0x41
      0001B1 C0 E0            [24] 1624 	push	acc
      0001B3 8C 82            [24] 1625 	mov	dpl,r4
      0001B5 8D 83            [24] 1626 	mov	dph,r5
      0001B7 8E F0            [24] 1627 	mov	b,r6
      0001B9 EF               [12] 1628 	mov	a,r7
      0001BA 12 13 1A         [24] 1629 	lcall	___fsdiv
      0001BD AC 82            [24] 1630 	mov	r4,dpl
      0001BF AD 83            [24] 1631 	mov	r5,dph
      0001C1 AE F0            [24] 1632 	mov	r6,b
      0001C3 FF               [12] 1633 	mov	r7,a
      0001C4 E5 81            [12] 1634 	mov	a,sp
      0001C6 24 FC            [12] 1635 	add	a,#0xfc
      0001C8 F5 81            [12] 1636 	mov	sp,a
      0001CA 8C 82            [24] 1637 	mov	dpl,r4
      0001CC 8D 83            [24] 1638 	mov	dph,r5
      0001CE 8E F0            [24] 1639 	mov	b,r6
      0001D0 EF               [12] 1640 	mov	a,r7
      0001D1 12 0C 4C         [24] 1641 	lcall	___fs2sint
      0001D4 85 82 3D         [24] 1642 	mov	_score_hvolts_1_55,dpl
      0001D7 85 83 3E         [24] 1643 	mov	(_score_hvolts_1_55 + 1),dph
                           000148  1644 	C$voltmeter.c$82$1$55 ==.
                                   1645 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:82: if (hvolts<0x10){printf("0");}
      0001DA C3               [12] 1646 	clr	c
      0001DB E5 3D            [12] 1647 	mov	a,_score_hvolts_1_55
      0001DD 94 10            [12] 1648 	subb	a,#0x10
      0001DF E5 3E            [12] 1649 	mov	a,(_score_hvolts_1_55 + 1)
      0001E1 64 80            [12] 1650 	xrl	a,#0x80
      0001E3 94 80            [12] 1651 	subb	a,#0x80
      0001E5 50 15            [24] 1652 	jnc	00102$
      0001E7 74 E5            [12] 1653 	mov	a,#___str_4
      0001E9 C0 E0            [24] 1654 	push	acc
      0001EB 74 14            [12] 1655 	mov	a,#(___str_4 >> 8)
      0001ED C0 E0            [24] 1656 	push	acc
      0001EF 74 80            [12] 1657 	mov	a,#0x80
      0001F1 C0 E0            [24] 1658 	push	acc
      0001F3 12 0D 0C         [24] 1659 	lcall	_printf
      0001F6 15 81            [12] 1660 	dec	sp
      0001F8 15 81            [12] 1661 	dec	sp
      0001FA 15 81            [12] 1662 	dec	sp
      0001FC                       1663 00102$:
                           00016A  1664 	C$voltmeter.c$83$1$55 ==.
                                   1665 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:83: printf("%X", hvolts);
      0001FC C0 3D            [24] 1666 	push	_score_hvolts_1_55
      0001FE C0 3E            [24] 1667 	push	(_score_hvolts_1_55 + 1)
      000200 74 E7            [12] 1668 	mov	a,#___str_5
      000202 C0 E0            [24] 1669 	push	acc
      000204 74 14            [12] 1670 	mov	a,#(___str_5 >> 8)
      000206 C0 E0            [24] 1671 	push	acc
      000208 74 80            [12] 1672 	mov	a,#0x80
      00020A C0 E0            [24] 1673 	push	acc
      00020C 12 0D 0C         [24] 1674 	lcall	_printf
      00020F E5 81            [12] 1675 	mov	a,sp
      000211 24 FB            [12] 1676 	add	a,#0xfb
      000213 F5 81            [12] 1677 	mov	sp,a
                           000183  1678 	C$voltmeter.c$84$1$55 ==.
                                   1679 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:84: printf("\033[2;9H");
      000215 74 EA            [12] 1680 	mov	a,#___str_6
      000217 C0 E0            [24] 1681 	push	acc
      000219 74 14            [12] 1682 	mov	a,#(___str_6 >> 8)
      00021B C0 E0            [24] 1683 	push	acc
      00021D 74 80            [12] 1684 	mov	a,#0x80
      00021F C0 E0            [24] 1685 	push	acc
      000221 12 0D 0C         [24] 1686 	lcall	_printf
      000224 15 81            [12] 1687 	dec	sp
      000226 15 81            [12] 1688 	dec	sp
      000228 15 81            [12] 1689 	dec	sp
                           000198  1690 	C$voltmeter.c$85$1$55 ==.
                                   1691 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:85: running = (running*trials + volts)/(trials+1);
      00022A C0 35            [24] 1692 	push	_trials
      00022C C0 36            [24] 1693 	push	(_trials + 1)
      00022E C0 37            [24] 1694 	push	(_trials + 2)
      000230 C0 38            [24] 1695 	push	(_trials + 3)
      000232 85 23 82         [24] 1696 	mov	dpl,_running
      000235 85 24 83         [24] 1697 	mov	dph,(_running + 1)
      000238 85 25 F0         [24] 1698 	mov	b,(_running + 2)
      00023B E5 26            [12] 1699 	mov	a,(_running + 3)
      00023D 12 0A 03         [24] 1700 	lcall	___fsmul
      000240 AC 82            [24] 1701 	mov	r4,dpl
      000242 AD 83            [24] 1702 	mov	r5,dph
      000244 AE F0            [24] 1703 	mov	r6,b
      000246 FF               [12] 1704 	mov	r7,a
      000247 E5 81            [12] 1705 	mov	a,sp
      000249 24 FC            [12] 1706 	add	a,#0xfc
      00024B F5 81            [12] 1707 	mov	sp,a
      00024D C0 39            [24] 1708 	push	_score_volts_1_55
      00024F C0 3A            [24] 1709 	push	(_score_volts_1_55 + 1)
      000251 C0 3B            [24] 1710 	push	(_score_volts_1_55 + 2)
      000253 C0 3C            [24] 1711 	push	(_score_volts_1_55 + 3)
      000255 8C 82            [24] 1712 	mov	dpl,r4
      000257 8D 83            [24] 1713 	mov	dph,r5
      000259 8E F0            [24] 1714 	mov	b,r6
      00025B EF               [12] 1715 	mov	a,r7
      00025C 12 0B AA         [24] 1716 	lcall	___fsadd
      00025F AC 82            [24] 1717 	mov	r4,dpl
      000261 AD 83            [24] 1718 	mov	r5,dph
      000263 AE F0            [24] 1719 	mov	r6,b
      000265 FF               [12] 1720 	mov	r7,a
      000266 E5 81            [12] 1721 	mov	a,sp
      000268 24 FC            [12] 1722 	add	a,#0xfc
      00026A F5 81            [12] 1723 	mov	sp,a
      00026C C0 07            [24] 1724 	push	ar7
      00026E C0 06            [24] 1725 	push	ar6
      000270 C0 05            [24] 1726 	push	ar5
      000272 C0 04            [24] 1727 	push	ar4
      000274 E4               [12] 1728 	clr	a
      000275 C0 E0            [24] 1729 	push	acc
      000277 C0 E0            [24] 1730 	push	acc
      000279 74 80            [12] 1731 	mov	a,#0x80
      00027B C0 E0            [24] 1732 	push	acc
      00027D 74 3F            [12] 1733 	mov	a,#0x3F
      00027F C0 E0            [24] 1734 	push	acc
      000281 85 35 82         [24] 1735 	mov	dpl,_trials
      000284 85 36 83         [24] 1736 	mov	dph,(_trials + 1)
      000287 85 37 F0         [24] 1737 	mov	b,(_trials + 2)
      00028A E5 38            [12] 1738 	mov	a,(_trials + 3)
      00028C 12 0B AA         [24] 1739 	lcall	___fsadd
      00028F A8 82            [24] 1740 	mov	r0,dpl
      000291 A9 83            [24] 1741 	mov	r1,dph
      000293 AA F0            [24] 1742 	mov	r2,b
      000295 FB               [12] 1743 	mov	r3,a
      000296 E5 81            [12] 1744 	mov	a,sp
      000298 24 FC            [12] 1745 	add	a,#0xfc
      00029A F5 81            [12] 1746 	mov	sp,a
      00029C D0 04            [24] 1747 	pop	ar4
      00029E D0 05            [24] 1748 	pop	ar5
      0002A0 D0 06            [24] 1749 	pop	ar6
      0002A2 D0 07            [24] 1750 	pop	ar7
      0002A4 C0 03            [24] 1751 	push	ar3
      0002A6 C0 02            [24] 1752 	push	ar2
      0002A8 C0 01            [24] 1753 	push	ar1
      0002AA C0 00            [24] 1754 	push	ar0
      0002AC C0 00            [24] 1755 	push	ar0
      0002AE C0 01            [24] 1756 	push	ar1
      0002B0 C0 02            [24] 1757 	push	ar2
      0002B2 C0 03            [24] 1758 	push	ar3
      0002B4 8C 82            [24] 1759 	mov	dpl,r4
      0002B6 8D 83            [24] 1760 	mov	dph,r5
      0002B8 8E F0            [24] 1761 	mov	b,r6
      0002BA EF               [12] 1762 	mov	a,r7
      0002BB 12 13 1A         [24] 1763 	lcall	___fsdiv
      0002BE 85 82 23         [24] 1764 	mov	_running,dpl
      0002C1 85 83 24         [24] 1765 	mov	(_running + 1),dph
      0002C4 85 F0 25         [24] 1766 	mov	(_running + 2),b
      0002C7 F5 26            [12] 1767 	mov	(_running + 3),a
      0002C9 E5 81            [12] 1768 	mov	a,sp
      0002CB 24 FC            [12] 1769 	add	a,#0xfc
      0002CD F5 81            [12] 1770 	mov	sp,a
                           00023D  1771 	C$voltmeter.c$86$1$55 ==.
                                   1772 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:86: run  = (run*trials + hvolts)/(trials+1);
      0002CF 85 27 82         [24] 1773 	mov	dpl,_run
      0002D2 85 28 83         [24] 1774 	mov	dph,(_run + 1)
      0002D5 12 0C 80         [24] 1775 	lcall	___sint2fs
      0002D8 AC 82            [24] 1776 	mov	r4,dpl
      0002DA AD 83            [24] 1777 	mov	r5,dph
      0002DC AE F0            [24] 1778 	mov	r6,b
      0002DE FF               [12] 1779 	mov	r7,a
      0002DF C0 35            [24] 1780 	push	_trials
      0002E1 C0 36            [24] 1781 	push	(_trials + 1)
      0002E3 C0 37            [24] 1782 	push	(_trials + 2)
      0002E5 C0 38            [24] 1783 	push	(_trials + 3)
      0002E7 8C 82            [24] 1784 	mov	dpl,r4
      0002E9 8D 83            [24] 1785 	mov	dph,r5
      0002EB 8E F0            [24] 1786 	mov	b,r6
      0002ED EF               [12] 1787 	mov	a,r7
      0002EE 12 0A 03         [24] 1788 	lcall	___fsmul
      0002F1 85 82 3F         [24] 1789 	mov	_score_sloc0_1_0,dpl
      0002F4 85 83 40         [24] 1790 	mov	(_score_sloc0_1_0 + 1),dph
      0002F7 85 F0 41         [24] 1791 	mov	(_score_sloc0_1_0 + 2),b
      0002FA F5 42            [12] 1792 	mov	(_score_sloc0_1_0 + 3),a
      0002FC E5 81            [12] 1793 	mov	a,sp
      0002FE 24 FC            [12] 1794 	add	a,#0xfc
      000300 F5 81            [12] 1795 	mov	sp,a
      000302 85 3D 82         [24] 1796 	mov	dpl,_score_hvolts_1_55
      000305 85 3E 83         [24] 1797 	mov	dph,(_score_hvolts_1_55 + 1)
      000308 12 0C 80         [24] 1798 	lcall	___sint2fs
      00030B AC 82            [24] 1799 	mov	r4,dpl
      00030D AD 83            [24] 1800 	mov	r5,dph
      00030F AE F0            [24] 1801 	mov	r6,b
      000311 FF               [12] 1802 	mov	r7,a
      000312 C0 04            [24] 1803 	push	ar4
      000314 C0 05            [24] 1804 	push	ar5
      000316 C0 06            [24] 1805 	push	ar6
      000318 C0 07            [24] 1806 	push	ar7
      00031A 85 3F 82         [24] 1807 	mov	dpl,_score_sloc0_1_0
      00031D 85 40 83         [24] 1808 	mov	dph,(_score_sloc0_1_0 + 1)
      000320 85 41 F0         [24] 1809 	mov	b,(_score_sloc0_1_0 + 2)
      000323 E5 42            [12] 1810 	mov	a,(_score_sloc0_1_0 + 3)
      000325 12 0B AA         [24] 1811 	lcall	___fsadd
      000328 AC 82            [24] 1812 	mov	r4,dpl
      00032A AD 83            [24] 1813 	mov	r5,dph
      00032C AE F0            [24] 1814 	mov	r6,b
      00032E FF               [12] 1815 	mov	r7,a
      00032F E5 81            [12] 1816 	mov	a,sp
      000331 24 FC            [12] 1817 	add	a,#0xfc
      000333 F5 81            [12] 1818 	mov	sp,a
      000335 D0 00            [24] 1819 	pop	ar0
      000337 D0 01            [24] 1820 	pop	ar1
      000339 D0 02            [24] 1821 	pop	ar2
      00033B D0 03            [24] 1822 	pop	ar3
      00033D C0 03            [24] 1823 	push	ar3
      00033F C0 02            [24] 1824 	push	ar2
      000341 C0 01            [24] 1825 	push	ar1
      000343 C0 00            [24] 1826 	push	ar0
      000345 C0 00            [24] 1827 	push	ar0
      000347 C0 01            [24] 1828 	push	ar1
      000349 C0 02            [24] 1829 	push	ar2
      00034B C0 03            [24] 1830 	push	ar3
      00034D 8C 82            [24] 1831 	mov	dpl,r4
      00034F 8D 83            [24] 1832 	mov	dph,r5
      000351 8E F0            [24] 1833 	mov	b,r6
      000353 EF               [12] 1834 	mov	a,r7
      000354 12 13 1A         [24] 1835 	lcall	___fsdiv
      000357 AC 82            [24] 1836 	mov	r4,dpl
      000359 AD 83            [24] 1837 	mov	r5,dph
      00035B AE F0            [24] 1838 	mov	r6,b
      00035D FF               [12] 1839 	mov	r7,a
      00035E E5 81            [12] 1840 	mov	a,sp
      000360 24 FC            [12] 1841 	add	a,#0xfc
      000362 F5 81            [12] 1842 	mov	sp,a
      000364 8C 82            [24] 1843 	mov	dpl,r4
      000366 8D 83            [24] 1844 	mov	dph,r5
      000368 8E F0            [24] 1845 	mov	b,r6
      00036A EF               [12] 1846 	mov	a,r7
      00036B 12 0C 4C         [24] 1847 	lcall	___fs2sint
      00036E 85 82 27         [24] 1848 	mov	_run,dpl
      000371 85 83 28         [24] 1849 	mov	(_run + 1),dph
      000374 D0 00            [24] 1850 	pop	ar0
      000376 D0 01            [24] 1851 	pop	ar1
      000378 D0 02            [24] 1852 	pop	ar2
      00037A D0 03            [24] 1853 	pop	ar3
                           0002EA  1854 	C$voltmeter.c$87$1$55 ==.
                                   1855 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:87: trials ++;
      00037C 88 35            [24] 1856 	mov	_trials,r0
      00037E 89 36            [24] 1857 	mov	(_trials + 1),r1
      000380 8A 37            [24] 1858 	mov	(_trials + 2),r2
      000382 8B 38            [24] 1859 	mov	(_trials + 3),r3
                           0002F2  1860 	C$voltmeter.c$88$1$55 ==.
                                   1861 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:88: if(volts<min){min = volts;hmin=hvolts;}
      000384 C0 29            [24] 1862 	push	_min
      000386 C0 2A            [24] 1863 	push	(_min + 1)
      000388 C0 2B            [24] 1864 	push	(_min + 2)
      00038A C0 2C            [24] 1865 	push	(_min + 3)
      00038C 85 39 82         [24] 1866 	mov	dpl,_score_volts_1_55
      00038F 85 3A 83         [24] 1867 	mov	dph,(_score_volts_1_55 + 1)
      000392 85 3B F0         [24] 1868 	mov	b,(_score_volts_1_55 + 2)
      000395 E5 3C            [12] 1869 	mov	a,(_score_volts_1_55 + 3)
      000397 12 0B 7A         [24] 1870 	lcall	___fslt
      00039A AF 82            [24] 1871 	mov	r7,dpl
      00039C E5 81            [12] 1872 	mov	a,sp
      00039E 24 FC            [12] 1873 	add	a,#0xfc
      0003A0 F5 81            [12] 1874 	mov	sp,a
      0003A2 EF               [12] 1875 	mov	a,r7
      0003A3 60 12            [24] 1876 	jz	00104$
      0003A5 85 39 29         [24] 1877 	mov	_min,_score_volts_1_55
      0003A8 85 3A 2A         [24] 1878 	mov	(_min + 1),(_score_volts_1_55 + 1)
      0003AB 85 3B 2B         [24] 1879 	mov	(_min + 2),(_score_volts_1_55 + 2)
      0003AE 85 3C 2C         [24] 1880 	mov	(_min + 3),(_score_volts_1_55 + 3)
      0003B1 85 3D 2D         [24] 1881 	mov	_hmin,_score_hvolts_1_55
      0003B4 85 3E 2E         [24] 1882 	mov	(_hmin + 1),(_score_hvolts_1_55 + 1)
      0003B7                       1883 00104$:
                           000325  1884 	C$voltmeter.c$89$1$55 ==.
                                   1885 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:89: if(volts>max){max = volts;hmax=hvolts;}
      0003B7 C0 2F            [24] 1886 	push	_max
      0003B9 C0 30            [24] 1887 	push	(_max + 1)
      0003BB C0 31            [24] 1888 	push	(_max + 2)
      0003BD C0 32            [24] 1889 	push	(_max + 3)
      0003BF 85 39 82         [24] 1890 	mov	dpl,_score_volts_1_55
      0003C2 85 3A 83         [24] 1891 	mov	dph,(_score_volts_1_55 + 1)
      0003C5 85 3B F0         [24] 1892 	mov	b,(_score_volts_1_55 + 2)
      0003C8 E5 3C            [12] 1893 	mov	a,(_score_volts_1_55 + 3)
      0003CA 12 0B 4A         [24] 1894 	lcall	___fsgt
      0003CD AF 82            [24] 1895 	mov	r7,dpl
      0003CF E5 81            [12] 1896 	mov	a,sp
      0003D1 24 FC            [12] 1897 	add	a,#0xfc
      0003D3 F5 81            [12] 1898 	mov	sp,a
      0003D5 EF               [12] 1899 	mov	a,r7
      0003D6 60 12            [24] 1900 	jz	00106$
      0003D8 85 39 2F         [24] 1901 	mov	_max,_score_volts_1_55
      0003DB 85 3A 30         [24] 1902 	mov	(_max + 1),(_score_volts_1_55 + 1)
      0003DE 85 3B 31         [24] 1903 	mov	(_max + 2),(_score_volts_1_55 + 2)
      0003E1 85 3C 32         [24] 1904 	mov	(_max + 3),(_score_volts_1_55 + 3)
      0003E4 85 3D 33         [24] 1905 	mov	_hmax,_score_hvolts_1_55
      0003E7 85 3E 34         [24] 1906 	mov	(_hmax + 1),(_score_hvolts_1_55 + 1)
      0003EA                       1907 00106$:
                           000358  1908 	C$voltmeter.c$90$1$55 ==.
                                   1909 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:90: printf_fast_f("%7.6f, 0x",running);
      0003EA C0 23            [24] 1910 	push	_running
      0003EC C0 24            [24] 1911 	push	(_running + 1)
      0003EE C0 25            [24] 1912 	push	(_running + 2)
      0003F0 C0 26            [24] 1913 	push	(_running + 3)
      0003F2 74 DB            [12] 1914 	mov	a,#___str_3
      0003F4 C0 E0            [24] 1915 	push	acc
      0003F6 74 14            [12] 1916 	mov	a,#(___str_3 >> 8)
      0003F8 C0 E0            [24] 1917 	push	acc
      0003FA 12 05 82         [24] 1918 	lcall	_printf_fast_f
      0003FD E5 81            [12] 1919 	mov	a,sp
      0003FF 24 FA            [12] 1920 	add	a,#0xfa
      000401 F5 81            [12] 1921 	mov	sp,a
                           000371  1922 	C$voltmeter.c$91$1$55 ==.
                                   1923 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:91: if (run<0x10){printf("0");}
      000403 C3               [12] 1924 	clr	c
      000404 E5 27            [12] 1925 	mov	a,_run
      000406 94 10            [12] 1926 	subb	a,#0x10
      000408 E5 28            [12] 1927 	mov	a,(_run + 1)
      00040A 64 80            [12] 1928 	xrl	a,#0x80
      00040C 94 80            [12] 1929 	subb	a,#0x80
      00040E 50 15            [24] 1930 	jnc	00108$
      000410 74 E5            [12] 1931 	mov	a,#___str_4
      000412 C0 E0            [24] 1932 	push	acc
      000414 74 14            [12] 1933 	mov	a,#(___str_4 >> 8)
      000416 C0 E0            [24] 1934 	push	acc
      000418 74 80            [12] 1935 	mov	a,#0x80
      00041A C0 E0            [24] 1936 	push	acc
      00041C 12 0D 0C         [24] 1937 	lcall	_printf
      00041F 15 81            [12] 1938 	dec	sp
      000421 15 81            [12] 1939 	dec	sp
      000423 15 81            [12] 1940 	dec	sp
      000425                       1941 00108$:
                           000393  1942 	C$voltmeter.c$92$1$55 ==.
                                   1943 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:92: printf("%X \n\r",run);
      000425 C0 27            [24] 1944 	push	_run
      000427 C0 28            [24] 1945 	push	(_run + 1)
      000429 74 F1            [12] 1946 	mov	a,#___str_7
      00042B C0 E0            [24] 1947 	push	acc
      00042D 74 14            [12] 1948 	mov	a,#(___str_7 >> 8)
      00042F C0 E0            [24] 1949 	push	acc
      000431 74 80            [12] 1950 	mov	a,#0x80
      000433 C0 E0            [24] 1951 	push	acc
      000435 12 0D 0C         [24] 1952 	lcall	_printf
      000438 E5 81            [12] 1953 	mov	a,sp
      00043A 24 FB            [12] 1954 	add	a,#0xfb
      00043C F5 81            [12] 1955 	mov	sp,a
                           0003AC  1956 	C$voltmeter.c$93$1$55 ==.
                                   1957 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:93: printf("\033[3;5H");
      00043E 74 F7            [12] 1958 	mov	a,#___str_8
      000440 C0 E0            [24] 1959 	push	acc
      000442 74 14            [12] 1960 	mov	a,#(___str_8 >> 8)
      000444 C0 E0            [24] 1961 	push	acc
      000446 74 80            [12] 1962 	mov	a,#0x80
      000448 C0 E0            [24] 1963 	push	acc
      00044A 12 0D 0C         [24] 1964 	lcall	_printf
      00044D 15 81            [12] 1965 	dec	sp
      00044F 15 81            [12] 1966 	dec	sp
      000451 15 81            [12] 1967 	dec	sp
                           0003C1  1968 	C$voltmeter.c$94$1$55 ==.
                                   1969 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:94: printf_fast_f("%7.6f, 0x",min);
      000453 C0 29            [24] 1970 	push	_min
      000455 C0 2A            [24] 1971 	push	(_min + 1)
      000457 C0 2B            [24] 1972 	push	(_min + 2)
      000459 C0 2C            [24] 1973 	push	(_min + 3)
      00045B 74 DB            [12] 1974 	mov	a,#___str_3
      00045D C0 E0            [24] 1975 	push	acc
      00045F 74 14            [12] 1976 	mov	a,#(___str_3 >> 8)
      000461 C0 E0            [24] 1977 	push	acc
      000463 12 05 82         [24] 1978 	lcall	_printf_fast_f
      000466 E5 81            [12] 1979 	mov	a,sp
      000468 24 FA            [12] 1980 	add	a,#0xfa
      00046A F5 81            [12] 1981 	mov	sp,a
                           0003DA  1982 	C$voltmeter.c$95$1$55 ==.
                                   1983 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:95: if (hmin<0x10){printf("0");}
      00046C C3               [12] 1984 	clr	c
      00046D E5 2D            [12] 1985 	mov	a,_hmin
      00046F 94 10            [12] 1986 	subb	a,#0x10
      000471 E5 2E            [12] 1987 	mov	a,(_hmin + 1)
      000473 64 80            [12] 1988 	xrl	a,#0x80
      000475 94 80            [12] 1989 	subb	a,#0x80
      000477 50 15            [24] 1990 	jnc	00110$
      000479 74 E5            [12] 1991 	mov	a,#___str_4
      00047B C0 E0            [24] 1992 	push	acc
      00047D 74 14            [12] 1993 	mov	a,#(___str_4 >> 8)
      00047F C0 E0            [24] 1994 	push	acc
      000481 74 80            [12] 1995 	mov	a,#0x80
      000483 C0 E0            [24] 1996 	push	acc
      000485 12 0D 0C         [24] 1997 	lcall	_printf
      000488 15 81            [12] 1998 	dec	sp
      00048A 15 81            [12] 1999 	dec	sp
      00048C 15 81            [12] 2000 	dec	sp
      00048E                       2001 00110$:
                           0003FC  2002 	C$voltmeter.c$96$1$55 ==.
                                   2003 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:96: printf("%X",hmin);
      00048E C0 2D            [24] 2004 	push	_hmin
      000490 C0 2E            [24] 2005 	push	(_hmin + 1)
      000492 74 E7            [12] 2006 	mov	a,#___str_5
      000494 C0 E0            [24] 2007 	push	acc
      000496 74 14            [12] 2008 	mov	a,#(___str_5 >> 8)
      000498 C0 E0            [24] 2009 	push	acc
      00049A 74 80            [12] 2010 	mov	a,#0x80
      00049C C0 E0            [24] 2011 	push	acc
      00049E 12 0D 0C         [24] 2012 	lcall	_printf
      0004A1 E5 81            [12] 2013 	mov	a,sp
      0004A3 24 FB            [12] 2014 	add	a,#0xfb
      0004A5 F5 81            [12] 2015 	mov	sp,a
                           000415  2016 	C$voltmeter.c$97$1$55 ==.
                                   2017 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:97: printf("\033[4;5H");
      0004A7 74 FE            [12] 2018 	mov	a,#___str_9
      0004A9 C0 E0            [24] 2019 	push	acc
      0004AB 74 14            [12] 2020 	mov	a,#(___str_9 >> 8)
      0004AD C0 E0            [24] 2021 	push	acc
      0004AF 74 80            [12] 2022 	mov	a,#0x80
      0004B1 C0 E0            [24] 2023 	push	acc
      0004B3 12 0D 0C         [24] 2024 	lcall	_printf
      0004B6 15 81            [12] 2025 	dec	sp
      0004B8 15 81            [12] 2026 	dec	sp
      0004BA 15 81            [12] 2027 	dec	sp
                           00042A  2028 	C$voltmeter.c$98$1$55 ==.
                                   2029 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:98: printf_fast_f("%7.6f,0x",max);
      0004BC C0 2F            [24] 2030 	push	_max
      0004BE C0 30            [24] 2031 	push	(_max + 1)
      0004C0 C0 31            [24] 2032 	push	(_max + 2)
      0004C2 C0 32            [24] 2033 	push	(_max + 3)
      0004C4 74 05            [12] 2034 	mov	a,#___str_10
      0004C6 C0 E0            [24] 2035 	push	acc
      0004C8 74 15            [12] 2036 	mov	a,#(___str_10 >> 8)
      0004CA C0 E0            [24] 2037 	push	acc
      0004CC 12 05 82         [24] 2038 	lcall	_printf_fast_f
      0004CF E5 81            [12] 2039 	mov	a,sp
      0004D1 24 FA            [12] 2040 	add	a,#0xfa
      0004D3 F5 81            [12] 2041 	mov	sp,a
                           000443  2042 	C$voltmeter.c$99$1$55 ==.
                                   2043 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:99: if (hmax<0x10){printf("0");}
      0004D5 C3               [12] 2044 	clr	c
      0004D6 E5 33            [12] 2045 	mov	a,_hmax
      0004D8 94 10            [12] 2046 	subb	a,#0x10
      0004DA E5 34            [12] 2047 	mov	a,(_hmax + 1)
      0004DC 64 80            [12] 2048 	xrl	a,#0x80
      0004DE 94 80            [12] 2049 	subb	a,#0x80
      0004E0 50 15            [24] 2050 	jnc	00112$
      0004E2 74 E5            [12] 2051 	mov	a,#___str_4
      0004E4 C0 E0            [24] 2052 	push	acc
      0004E6 74 14            [12] 2053 	mov	a,#(___str_4 >> 8)
      0004E8 C0 E0            [24] 2054 	push	acc
      0004EA 74 80            [12] 2055 	mov	a,#0x80
      0004EC C0 E0            [24] 2056 	push	acc
      0004EE 12 0D 0C         [24] 2057 	lcall	_printf
      0004F1 15 81            [12] 2058 	dec	sp
      0004F3 15 81            [12] 2059 	dec	sp
      0004F5 15 81            [12] 2060 	dec	sp
      0004F7                       2061 00112$:
                           000465  2062 	C$voltmeter.c$100$1$55 ==.
                                   2063 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:100: printf("%X",hmax);
      0004F7 C0 33            [24] 2064 	push	_hmax
      0004F9 C0 34            [24] 2065 	push	(_hmax + 1)
      0004FB 74 E7            [12] 2066 	mov	a,#___str_5
      0004FD C0 E0            [24] 2067 	push	acc
      0004FF 74 14            [12] 2068 	mov	a,#(___str_5 >> 8)
      000501 C0 E0            [24] 2069 	push	acc
      000503 74 80            [12] 2070 	mov	a,#0x80
      000505 C0 E0            [24] 2071 	push	acc
      000507 12 0D 0C         [24] 2072 	lcall	_printf
      00050A E5 81            [12] 2073 	mov	a,sp
      00050C 24 FB            [12] 2074 	add	a,#0xfb
      00050E F5 81            [12] 2075 	mov	sp,a
                           00047E  2076 	C$voltmeter.c$102$1$55 ==.
                           00047E  2077 	XG$score$0$0 ==.
      000510 22               [24] 2078 	ret
                                   2079 ;------------------------------------------------------------
                                   2080 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   2081 ;------------------------------------------------------------
                                   2082 ;j                         Allocated to registers 
                                   2083 ;------------------------------------------------------------
                           00047F  2084 	G$SYSCLK_INIT$0$0 ==.
                           00047F  2085 	C$voltmeter.c$104$1$55 ==.
                                   2086 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:104: void SYSCLK_INIT()
                                   2087 ;	-----------------------------------------
                                   2088 ;	 function SYSCLK_INIT
                                   2089 ;	-----------------------------------------
      000511                       2090 _SYSCLK_INIT:
                           00047F  2091 	C$voltmeter.c$107$1$62 ==.
                                   2092 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:107: SFRPAGE = CONFIG_PAGE;
      000511 75 84 0F         [24] 2093 	mov	_SFRPAGE,#0x0F
                           000482  2094 	C$voltmeter.c$108$1$62 ==.
                                   2095 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:108: OSCXCN  = 0x67;             // Start external oscillator
      000514 75 8C 67         [24] 2096 	mov	_OSCXCN,#0x67
                           000485  2097 	C$voltmeter.c$109$1$62 ==.
                                   2098 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:109: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      000517 7E 00            [12] 2099 	mov	r6,#0x00
      000519 7F 01            [12] 2100 	mov	r7,#0x01
      00051B                       2101 00107$:
      00051B 1E               [12] 2102 	dec	r6
      00051C BE FF 01         [24] 2103 	cjne	r6,#0xFF,00121$
      00051F 1F               [12] 2104 	dec	r7
      000520                       2105 00121$:
      000520 EE               [12] 2106 	mov	a,r6
      000521 4F               [12] 2107 	orl	a,r7
      000522 70 F7            [24] 2108 	jnz	00107$
                           000492  2109 	C$voltmeter.c$110$1$62 ==.
                                   2110 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:110: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      000524                       2111 00102$:
      000524 E5 8C            [12] 2112 	mov	a,_OSCXCN
      000526 30 E7 FB         [24] 2113 	jnb	acc.7,00102$
                           000497  2114 	C$voltmeter.c$111$1$62 ==.
                                   2115 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:111: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      000529 75 97 01         [24] 2116 	mov	_CLKSEL,#0x01
                           00049A  2117 	C$voltmeter.c$112$1$62 ==.
                                   2118 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:112: OSCICN  = 0x00;             // Disable the internal oscillator.
      00052C 75 8A 00         [24] 2119 	mov	_OSCICN,#0x00
                           00049D  2120 	C$voltmeter.c$113$1$62 ==.
                           00049D  2121 	XG$SYSCLK_INIT$0$0 ==.
      00052F 22               [24] 2122 	ret
                                   2123 ;------------------------------------------------------------
                                   2124 ;Allocation info for local variables in function 'Timer_Init'
                                   2125 ;------------------------------------------------------------
                           00049E  2126 	G$Timer_Init$0$0 ==.
                           00049E  2127 	C$voltmeter.c$115$1$62 ==.
                                   2128 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:115: void Timer_Init()
                                   2129 ;	-----------------------------------------
                                   2130 ;	 function Timer_Init
                                   2131 ;	-----------------------------------------
      000530                       2132 _Timer_Init:
                           00049E  2133 	C$voltmeter.c$117$1$63 ==.
                                   2134 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:117: SFRPAGE   = TMR2_PAGE;
      000530 75 84 00         [24] 2135 	mov	_SFRPAGE,#0x00
                           0004A1  2136 	C$voltmeter.c$118$1$63 ==.
                                   2137 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:118: TMR2CN    = 0x04;
      000533 75 C8 04         [24] 2138 	mov	_TMR2CN,#0x04
                           0004A4  2139 	C$voltmeter.c$119$1$63 ==.
                                   2140 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:119: TMR2CF    = 0x08;
      000536 75 C9 08         [24] 2141 	mov	_TMR2CF,#0x08
                           0004A7  2142 	C$voltmeter.c$120$1$63 ==.
                                   2143 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:120: TMR2H	  = 0xFF;
      000539 75 CD FF         [24] 2144 	mov	_TMR2H,#0xFF
                           0004AA  2145 	C$voltmeter.c$121$1$63 ==.
                                   2146 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:121: TMR2L 	  = 0x70;
      00053C 75 CC 70         [24] 2147 	mov	_TMR2L,#0x70
                           0004AD  2148 	C$voltmeter.c$122$1$63 ==.
                                   2149 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:122: RCAP2L    = 0x70;
      00053F 75 CA 70         [24] 2150 	mov	_RCAP2L,#0x70
                           0004B0  2151 	C$voltmeter.c$123$1$63 ==.
                                   2152 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:123: RCAP2H    = 0xFF;
      000542 75 CB FF         [24] 2153 	mov	_RCAP2H,#0xFF
                           0004B3  2154 	C$voltmeter.c$124$1$63 ==.
                           0004B3  2155 	XG$Timer_Init$0$0 ==.
      000545 22               [24] 2156 	ret
                                   2157 ;------------------------------------------------------------
                                   2158 ;Allocation info for local variables in function 'UART_Init'
                                   2159 ;------------------------------------------------------------
                           0004B4  2160 	G$UART_Init$0$0 ==.
                           0004B4  2161 	C$voltmeter.c$126$1$63 ==.
                                   2162 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:126: void UART_Init()
                                   2163 ;	-----------------------------------------
                                   2164 ;	 function UART_Init
                                   2165 ;	-----------------------------------------
      000546                       2166 _UART_Init:
                           0004B4  2167 	C$voltmeter.c$128$1$64 ==.
                                   2168 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:128: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      000546 75 84 00         [24] 2169 	mov	_SFRPAGE,#0x00
                           0004B7  2170 	C$voltmeter.c$129$1$64 ==.
                                   2171 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:129: TR2		  = 1;//Start Timer 2
      000549 D2 CA            [12] 2172 	setb	_TR2
                           0004B9  2173 	C$voltmeter.c$130$1$64 ==.
                                   2174 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:130: SCON0     = 0x50;
      00054B 75 98 50         [24] 2175 	mov	_SCON0,#0x50
                           0004BC  2176 	C$voltmeter.c$131$1$64 ==.
                                   2177 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:131: SSTA0   = 0x15;
      00054E 75 91 15         [24] 2178 	mov	_SSTA0,#0x15
                           0004BF  2179 	C$voltmeter.c$132$1$64 ==.
                                   2180 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:132: TI0		  = 1; // Indicate TX0 is ready
      000551 D2 99            [12] 2181 	setb	_TI0
                           0004C1  2182 	C$voltmeter.c$133$1$64 ==.
                           0004C1  2183 	XG$UART_Init$0$0 ==.
      000553 22               [24] 2184 	ret
                                   2185 ;------------------------------------------------------------
                                   2186 ;Allocation info for local variables in function 'Port_IO_Init'
                                   2187 ;------------------------------------------------------------
                           0004C2  2188 	G$Port_IO_Init$0$0 ==.
                           0004C2  2189 	C$voltmeter.c$135$1$64 ==.
                                   2190 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:135: void Port_IO_Init()
                                   2191 ;	-----------------------------------------
                                   2192 ;	 function Port_IO_Init
                                   2193 ;	-----------------------------------------
      000554                       2194 _Port_IO_Init:
                           0004C2  2195 	C$voltmeter.c$137$1$65 ==.
                                   2196 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:137: SFRPAGE   = CONFIG_PAGE;
      000554 75 84 0F         [24] 2197 	mov	_SFRPAGE,#0x0F
                           0004C5  2198 	C$voltmeter.c$138$1$65 ==.
                                   2199 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:138: WDTCN   = 0xDE;             // Disable watchdog timer.
      000557 75 FF DE         [24] 2200 	mov	_WDTCN,#0xDE
                           0004C8  2201 	C$voltmeter.c$139$1$65 ==.
                                   2202 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:139: WDTCN   = 0xAD;
      00055A 75 FF AD         [24] 2203 	mov	_WDTCN,#0xAD
                           0004CB  2204 	C$voltmeter.c$140$1$65 ==.
                                   2205 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:140: XBR0 = 0x04; // enable UART0
      00055D 75 E1 04         [24] 2206 	mov	_XBR0,#0x04
                           0004CE  2207 	C$voltmeter.c$141$1$65 ==.
                                   2208 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:141: XBR2 = 0x40;//enable crossbar
      000560 75 E3 40         [24] 2209 	mov	_XBR2,#0x40
                           0004D1  2210 	C$voltmeter.c$143$1$65 ==.
                                   2211 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:143: P0MDOUT = 0x01;
      000563 75 A4 01         [24] 2212 	mov	_P0MDOUT,#0x01
                           0004D4  2213 	C$voltmeter.c$145$1$65 ==.
                                   2214 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:145: P0 = 0x02;
      000566 75 80 02         [24] 2215 	mov	_P0,#0x02
                           0004D7  2216 	C$voltmeter.c$148$1$65 ==.
                                   2217 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:148: P1MDOUT = 0x00;
      000569 75 A5 00         [24] 2218 	mov	_P1MDOUT,#0x00
                           0004DA  2219 	C$voltmeter.c$149$1$65 ==.
                                   2220 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:149: P1 = 0x01; 
      00056C 75 90 01         [24] 2221 	mov	_P1,#0x01
                           0004DD  2222 	C$voltmeter.c$152$1$65 ==.
                                   2223 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:152: EA = 1; //enable global interrupts
      00056F D2 AF            [12] 2224 	setb	_EA
                           0004DF  2225 	C$voltmeter.c$153$1$65 ==.
                           0004DF  2226 	XG$Port_IO_Init$0$0 ==.
      000571 22               [24] 2227 	ret
                                   2228 ;------------------------------------------------------------
                                   2229 ;Allocation info for local variables in function 'ADC_INIT'
                                   2230 ;------------------------------------------------------------
                           0004E0  2231 	G$ADC_INIT$0$0 ==.
                           0004E0  2232 	C$voltmeter.c$154$1$65 ==.
                                   2233 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:154: void ADC_INIT()
                                   2234 ;	-----------------------------------------
                                   2235 ;	 function ADC_INIT
                                   2236 ;	-----------------------------------------
      000572                       2237 _ADC_INIT:
                           0004E0  2238 	C$voltmeter.c$156$1$66 ==.
                                   2239 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:156: SFRPAGE = ADC0_PAGE;
      000572 75 84 00         [24] 2240 	mov	_SFRPAGE,#0x00
                           0004E3  2241 	C$voltmeter.c$157$1$66 ==.
                                   2242 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:157: REF0CN = 0x03;
      000575 75 D1 03         [24] 2243 	mov	_REF0CN,#0x03
                           0004E6  2244 	C$voltmeter.c$158$1$66 ==.
                                   2245 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:158: AMX0CF = 0x00;
      000578 75 BA 00         [24] 2246 	mov	_AMX0CF,#0x00
                           0004E9  2247 	C$voltmeter.c$159$1$66 ==.
                                   2248 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:159: ADC0CF = 0x40;
      00057B 75 BC 40         [24] 2249 	mov	_ADC0CF,#0x40
                           0004EC  2250 	C$voltmeter.c$160$1$66 ==.
                                   2251 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:160: ADC0CN = 0x80; // enable ADC conversion
      00057E 75 E8 80         [24] 2252 	mov	_ADC0CN,#0x80
                           0004EF  2253 	C$voltmeter.c$161$1$66 ==.
                           0004EF  2254 	XG$ADC_INIT$0$0 ==.
      000581 22               [24] 2255 	ret
                                   2256 	.area CSEG    (CODE)
                                   2257 	.area CONST   (CODE)
                           000000  2258 Fvoltmeter$__str_0$0$0 == .
      0014AA                       2259 ___str_0:
      0014AA 1B                    2260 	.db 0x1B
      0014AB 5B 32 4A              2261 	.ascii "[2J"
      0014AE 00                    2262 	.db 0x00
                           000005  2263 Fvoltmeter$__str_1$0$0 == .
      0014AF                       2264 ___str_1:
      0014AF 43 75 72 72 65 6E 74  2265 	.ascii "Current: "
             3A 20
      0014B8 0A                    2266 	.db 0x0A
      0014B9 0D                    2267 	.db 0x0D
      0014BA 41 76 65 72 61 67 65  2268 	.ascii "Average: "
             3A 20
      0014C3 0A                    2269 	.db 0x0A
      0014C4 0D                    2270 	.db 0x0D
      0014C5 4D 69 6E 3A 20        2271 	.ascii "Min: "
      0014CA 0A                    2272 	.db 0x0A
      0014CB 0D                    2273 	.db 0x0D
      0014CC 4D 61 78 3A           2274 	.ascii "Max:"
      0014D0 0A                    2275 	.db 0x0A
      0014D1 0D                    2276 	.db 0x0D
      0014D2 00                    2277 	.db 0x00
                           000029  2278 Fvoltmeter$__str_2$0$0 == .
      0014D3                       2279 ___str_2:
      0014D3 1B                    2280 	.db 0x1B
      0014D4 5B 31 3B 31 30 48     2281 	.ascii "[1;10H"
      0014DA 00                    2282 	.db 0x00
                           000031  2283 Fvoltmeter$__str_3$0$0 == .
      0014DB                       2284 ___str_3:
      0014DB 25 37 2E 36 66 2C 20  2285 	.ascii "%7.6f, 0x"
             30 78
      0014E4 00                    2286 	.db 0x00
                           00003B  2287 Fvoltmeter$__str_4$0$0 == .
      0014E5                       2288 ___str_4:
      0014E5 30                    2289 	.ascii "0"
      0014E6 00                    2290 	.db 0x00
                           00003D  2291 Fvoltmeter$__str_5$0$0 == .
      0014E7                       2292 ___str_5:
      0014E7 25 58                 2293 	.ascii "%X"
      0014E9 00                    2294 	.db 0x00
                           000040  2295 Fvoltmeter$__str_6$0$0 == .
      0014EA                       2296 ___str_6:
      0014EA 1B                    2297 	.db 0x1B
      0014EB 5B 32 3B 39 48        2298 	.ascii "[2;9H"
      0014F0 00                    2299 	.db 0x00
                           000047  2300 Fvoltmeter$__str_7$0$0 == .
      0014F1                       2301 ___str_7:
      0014F1 25 58 20              2302 	.ascii "%X "
      0014F4 0A                    2303 	.db 0x0A
      0014F5 0D                    2304 	.db 0x0D
      0014F6 00                    2305 	.db 0x00
                           00004D  2306 Fvoltmeter$__str_8$0$0 == .
      0014F7                       2307 ___str_8:
      0014F7 1B                    2308 	.db 0x1B
      0014F8 5B 33 3B 35 48        2309 	.ascii "[3;5H"
      0014FD 00                    2310 	.db 0x00
                           000054  2311 Fvoltmeter$__str_9$0$0 == .
      0014FE                       2312 ___str_9:
      0014FE 1B                    2313 	.db 0x1B
      0014FF 5B 34 3B 35 48        2314 	.ascii "[4;5H"
      001504 00                    2315 	.db 0x00
                           00005B  2316 Fvoltmeter$__str_10$0$0 == .
      001505                       2317 ___str_10:
      001505 25 37 2E 36 66 2C 30  2318 	.ascii "%7.6f,0x"
             78
      00150D 00                    2319 	.db 0x00
                                   2320 	.area XINIT   (CODE)
                                   2321 	.area CABS    (ABS,CODE)
