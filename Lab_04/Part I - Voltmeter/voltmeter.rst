                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Oct 17 16:57:41 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module voltmeter
                                      7 	.optsdcc -mmcs51 --model-small
                                      8 	
                                      9 ;--------------------------------------------------------
                                     10 ; Public variables in this module
                                     11 ;--------------------------------------------------------
                                     12 	.globl _printf_fast_f
                                     13 	.globl _printf
                                     14 	.globl _PB
                                     15 	.globl _P7_7
                                     16 	.globl _P7_6
                                     17 	.globl _P7_5
                                     18 	.globl _P7_4
                                     19 	.globl _P7_3
                                     20 	.globl _P7_2
                                     21 	.globl _P7_1
                                     22 	.globl _P7_0
                                     23 	.globl _SPIF
                                     24 	.globl _WCOL
                                     25 	.globl _MODF
                                     26 	.globl _RXOVRN
                                     27 	.globl _NSSMD1
                                     28 	.globl _NSSMD0
                                     29 	.globl _TXBMT
                                     30 	.globl _SPIEN
                                     31 	.globl _P6_7
                                     32 	.globl _P6_6
                                     33 	.globl _P6_5
                                     34 	.globl _P6_4
                                     35 	.globl _P6_3
                                     36 	.globl _P6_2
                                     37 	.globl _P6_1
                                     38 	.globl _P6_0
                                     39 	.globl _AD2EN
                                     40 	.globl _AD2TM
                                     41 	.globl _AD2INT
                                     42 	.globl _AD2BUSY
                                     43 	.globl _AD2CM2
                                     44 	.globl _AD2CM1
                                     45 	.globl _AD2CM0
                                     46 	.globl _AD2WINT
                                     47 	.globl _AD0EN
                                     48 	.globl _AD0TM
                                     49 	.globl _AD0INT
                                     50 	.globl _AD0BUSY
                                     51 	.globl _AD0CM1
                                     52 	.globl _AD0CM0
                                     53 	.globl _AD0WINT
                                     54 	.globl _AD0LJST
                                     55 	.globl _P5_7
                                     56 	.globl _P5_6
                                     57 	.globl _P5_5
                                     58 	.globl _P5_4
                                     59 	.globl _P5_3
                                     60 	.globl _P5_2
                                     61 	.globl _P5_1
                                     62 	.globl _P5_0
                                     63 	.globl _CF
                                     64 	.globl _CR
                                     65 	.globl _CCF5
                                     66 	.globl _CCF4
                                     67 	.globl _CCF3
                                     68 	.globl _CCF2
                                     69 	.globl _CCF1
                                     70 	.globl _CCF0
                                     71 	.globl _CY
                                     72 	.globl _AC
                                     73 	.globl _F0
                                     74 	.globl _RS1
                                     75 	.globl _RS0
                                     76 	.globl _OV
                                     77 	.globl _F1
                                     78 	.globl _P
                                     79 	.globl _P4_7
                                     80 	.globl _P4_6
                                     81 	.globl _P4_5
                                     82 	.globl _P4_4
                                     83 	.globl _P4_3
                                     84 	.globl _P4_2
                                     85 	.globl _P4_1
                                     86 	.globl _P4_0
                                     87 	.globl _TF4
                                     88 	.globl _EXF4
                                     89 	.globl _EXEN4
                                     90 	.globl _TR4
                                     91 	.globl _CT4
                                     92 	.globl _CPRL4
                                     93 	.globl _TF3
                                     94 	.globl _EXF3
                                     95 	.globl _EXEN3
                                     96 	.globl _TR3
                                     97 	.globl _CT3
                                     98 	.globl _CPRL3
                                     99 	.globl _TF2
                                    100 	.globl _EXF2
                                    101 	.globl _EXEN2
                                    102 	.globl _TR2
                                    103 	.globl _CT2
                                    104 	.globl _CPRL2
                                    105 	.globl _MAC0HO
                                    106 	.globl _MAC0Z
                                    107 	.globl _MAC0SO
                                    108 	.globl _MAC0N
                                    109 	.globl _BUSY
                                    110 	.globl _ENSMB
                                    111 	.globl _STA
                                    112 	.globl _STO
                                    113 	.globl _SI
                                    114 	.globl _AA
                                    115 	.globl _SMBFTE
                                    116 	.globl _SMBTOE
                                    117 	.globl _PT2
                                    118 	.globl _PS
                                    119 	.globl _PS0
                                    120 	.globl _PT1
                                    121 	.globl _PX1
                                    122 	.globl _PT0
                                    123 	.globl _PX0
                                    124 	.globl _P3_7
                                    125 	.globl _P3_6
                                    126 	.globl _P3_5
                                    127 	.globl _P3_4
                                    128 	.globl _P3_3
                                    129 	.globl _P3_2
                                    130 	.globl _P3_1
                                    131 	.globl _P3_0
                                    132 	.globl _EA
                                    133 	.globl _ET2
                                    134 	.globl _ES
                                    135 	.globl _ES0
                                    136 	.globl _ET1
                                    137 	.globl _EX1
                                    138 	.globl _ET0
                                    139 	.globl _EX0
                                    140 	.globl _P2_7
                                    141 	.globl _P2_6
                                    142 	.globl _P2_5
                                    143 	.globl _P2_4
                                    144 	.globl _P2_3
                                    145 	.globl _P2_2
                                    146 	.globl _P2_1
                                    147 	.globl _P2_0
                                    148 	.globl _S1MODE
                                    149 	.globl _MCE1
                                    150 	.globl _REN1
                                    151 	.globl _TB81
                                    152 	.globl _RB81
                                    153 	.globl _TI1
                                    154 	.globl _RI1
                                    155 	.globl _SM00
                                    156 	.globl _SM10
                                    157 	.globl _SM20
                                    158 	.globl _REN
                                    159 	.globl _REN0
                                    160 	.globl _TB80
                                    161 	.globl _RB80
                                    162 	.globl _TI
                                    163 	.globl _TI0
                                    164 	.globl _RI
                                    165 	.globl _RI0
                                    166 	.globl _P1_7
                                    167 	.globl _P1_6
                                    168 	.globl _P1_5
                                    169 	.globl _P1_4
                                    170 	.globl _P1_3
                                    171 	.globl _P1_2
                                    172 	.globl _P1_1
                                    173 	.globl _P1_0
                                    174 	.globl _FLHBUSY
                                    175 	.globl _CP1EN
                                    176 	.globl _CP1OUT
                                    177 	.globl _CP1RIF
                                    178 	.globl _CP1FIF
                                    179 	.globl _CP1HYP1
                                    180 	.globl _CP1HYP0
                                    181 	.globl _CP1HYN1
                                    182 	.globl _CP1HYN0
                                    183 	.globl _CP0EN
                                    184 	.globl _CP0OUT
                                    185 	.globl _CP0RIF
                                    186 	.globl _CP0FIF
                                    187 	.globl _CP0HYP1
                                    188 	.globl _CP0HYP0
                                    189 	.globl _CP0HYN1
                                    190 	.globl _CP0HYN0
                                    191 	.globl _TF1
                                    192 	.globl _TR1
                                    193 	.globl _TF0
                                    194 	.globl _TR0
                                    195 	.globl _IE1
                                    196 	.globl _IT1
                                    197 	.globl _IE0
                                    198 	.globl _IT0
                                    199 	.globl _P0_7
                                    200 	.globl _P0_6
                                    201 	.globl _P0_5
                                    202 	.globl _P0_4
                                    203 	.globl _P0_3
                                    204 	.globl _P0_2
                                    205 	.globl _P0_1
                                    206 	.globl _P0_0
                                    207 	.globl _MAC0RND
                                    208 	.globl _MAC0ACC
                                    209 	.globl _MAC0A
                                    210 	.globl _RCAP4
                                    211 	.globl _TMR4
                                    212 	.globl _DAC1
                                    213 	.globl _RCAP3
                                    214 	.globl _TMR3
                                    215 	.globl _PCA0CP5
                                    216 	.globl _PCA0CP4
                                    217 	.globl _PCA0CP3
                                    218 	.globl _PCA0CP2
                                    219 	.globl _PCA0CP1
                                    220 	.globl _PCA0CP0
                                    221 	.globl _PCA0
                                    222 	.globl _DAC0
                                    223 	.globl _ADC0LT
                                    224 	.globl _ADC0GT
                                    225 	.globl _ADC0
                                    226 	.globl _RCAP2
                                    227 	.globl _TMR2
                                    228 	.globl _TMR1
                                    229 	.globl _TMR0
                                    230 	.globl _P7
                                    231 	.globl _P6
                                    232 	.globl _XBR2
                                    233 	.globl _XBR1
                                    234 	.globl _XBR0
                                    235 	.globl _P5
                                    236 	.globl _P4
                                    237 	.globl _FLACL
                                    238 	.globl _P1MDIN
                                    239 	.globl _P3MDOUT
                                    240 	.globl _P2MDOUT
                                    241 	.globl _P1MDOUT
                                    242 	.globl _P0MDOUT
                                    243 	.globl _CCH0LC
                                    244 	.globl _CCH0TN
                                    245 	.globl _CCH0CN
                                    246 	.globl _P7MDOUT
                                    247 	.globl _P6MDOUT
                                    248 	.globl _P5MDOUT
                                    249 	.globl _P4MDOUT
                                    250 	.globl _CCH0MA
                                    251 	.globl _CLKSEL
                                    252 	.globl _SFRPGCN
                                    253 	.globl _PLL0FLT
                                    254 	.globl _PLL0MUL
                                    255 	.globl _PLL0DIV
                                    256 	.globl _OSCXCN
                                    257 	.globl _OSCICL
                                    258 	.globl _OSCICN
                                    259 	.globl _PLL0CN
                                    260 	.globl _FLSTAT
                                    261 	.globl _MAC0RNDH
                                    262 	.globl _MAC0RNDL
                                    263 	.globl _MAC0CF
                                    264 	.globl _MAC0AH
                                    265 	.globl _MAC0AL
                                    266 	.globl _MAC0STA
                                    267 	.globl _MAC0OVR
                                    268 	.globl _MAC0ACC3
                                    269 	.globl _MAC0ACC2
                                    270 	.globl _MAC0ACC1
                                    271 	.globl _MAC0ACC0
                                    272 	.globl _MAC0BH
                                    273 	.globl _MAC0BL
                                    274 	.globl _ADC2CN
                                    275 	.globl _TMR4H
                                    276 	.globl _TMR4L
                                    277 	.globl _RCAP4H
                                    278 	.globl _RCAP4L
                                    279 	.globl _TMR4CF
                                    280 	.globl _TMR4CN
                                    281 	.globl _ADC2LT
                                    282 	.globl _ADC2GT
                                    283 	.globl _ADC2
                                    284 	.globl _ADC2CF
                                    285 	.globl _AMX2SL
                                    286 	.globl _AMX2CF
                                    287 	.globl _CPT1MD
                                    288 	.globl _CPT1CN
                                    289 	.globl _DAC1CN
                                    290 	.globl _DAC1H
                                    291 	.globl _DAC1L
                                    292 	.globl _TMR3H
                                    293 	.globl _TMR3L
                                    294 	.globl _RCAP3H
                                    295 	.globl _RCAP3L
                                    296 	.globl _TMR3CF
                                    297 	.globl _TMR3CN
                                    298 	.globl _SBUF1
                                    299 	.globl _SCON1
                                    300 	.globl _CPT0MD
                                    301 	.globl _CPT0CN
                                    302 	.globl _PCA0CPH1
                                    303 	.globl _PCA0CPL1
                                    304 	.globl _PCA0CPH0
                                    305 	.globl _PCA0CPL0
                                    306 	.globl _PCA0H
                                    307 	.globl _PCA0L
                                    308 	.globl _SPI0CN
                                    309 	.globl _RSTSRC
                                    310 	.globl _PCA0CPH4
                                    311 	.globl _PCA0CPL4
                                    312 	.globl _PCA0CPH3
                                    313 	.globl _PCA0CPL3
                                    314 	.globl _PCA0CPH2
                                    315 	.globl _PCA0CPL2
                                    316 	.globl _ADC0CN
                                    317 	.globl _PCA0CPH5
                                    318 	.globl _PCA0CPL5
                                    319 	.globl _PCA0CPM5
                                    320 	.globl _PCA0CPM4
                                    321 	.globl _PCA0CPM3
                                    322 	.globl _PCA0CPM2
                                    323 	.globl _PCA0CPM1
                                    324 	.globl _PCA0CPM0
                                    325 	.globl _PCA0MD
                                    326 	.globl _PCA0CN
                                    327 	.globl _DAC0CN
                                    328 	.globl _DAC0H
                                    329 	.globl _DAC0L
                                    330 	.globl _REF0CN
                                    331 	.globl _SMB0CR
                                    332 	.globl _TH2
                                    333 	.globl _TMR2H
                                    334 	.globl _TL2
                                    335 	.globl _TMR2L
                                    336 	.globl _RCAP2H
                                    337 	.globl _RCAP2L
                                    338 	.globl _TMR2CF
                                    339 	.globl _TMR2CN
                                    340 	.globl _ADC0LTH
                                    341 	.globl _ADC0LTL
                                    342 	.globl _ADC0GTH
                                    343 	.globl _ADC0GTL
                                    344 	.globl _SMB0ADR
                                    345 	.globl _SMB0DAT
                                    346 	.globl _SMB0STA
                                    347 	.globl _SMB0CN
                                    348 	.globl _ADC0H
                                    349 	.globl _ADC0L
                                    350 	.globl _ADC0CF
                                    351 	.globl _AMX0SL
                                    352 	.globl _AMX0CF
                                    353 	.globl _SADEN0
                                    354 	.globl _FLSCL
                                    355 	.globl _SADDR0
                                    356 	.globl _EMI0CF
                                    357 	.globl __XPAGE
                                    358 	.globl _EMI0CN
                                    359 	.globl _EMI0TC
                                    360 	.globl _SPI0CKR
                                    361 	.globl _SPI0DAT
                                    362 	.globl _SPI0CFG
                                    363 	.globl _SBUF
                                    364 	.globl _SBUF0
                                    365 	.globl _SCON
                                    366 	.globl _SCON0
                                    367 	.globl _SSTA0
                                    368 	.globl _PSCTL
                                    369 	.globl _CKCON
                                    370 	.globl _TH1
                                    371 	.globl _TH0
                                    372 	.globl _TL1
                                    373 	.globl _TL0
                                    374 	.globl _TMOD
                                    375 	.globl _TCON
                                    376 	.globl _WDTCN
                                    377 	.globl _EIP2
                                    378 	.globl _EIP1
                                    379 	.globl _B
                                    380 	.globl _EIE2
                                    381 	.globl _EIE1
                                    382 	.globl _ACC
                                    383 	.globl _PSW
                                    384 	.globl _IP
                                    385 	.globl _PSBANK
                                    386 	.globl _P3
                                    387 	.globl _IE
                                    388 	.globl _P2
                                    389 	.globl _P1
                                    390 	.globl _PCON
                                    391 	.globl _SFRLAST
                                    392 	.globl _SFRNEXT
                                    393 	.globl _SFRPAGE
                                    394 	.globl _DPH
                                    395 	.globl _DPL
                                    396 	.globl _SP
                                    397 	.globl _P0
                                    398 	.globl _trials
                                    399 	.globl _max
                                    400 	.globl _min
                                    401 	.globl _running
                                    402 	.globl _putchar
                                    403 	.globl _getchar
                                    404 	.globl _main
                                    405 	.globl _ADC_read
                                    406 	.globl _score
                                    407 	.globl _SYSCLK_INIT
                                    408 	.globl _Timer_Init
                                    409 	.globl _UART_Init
                                    410 	.globl _Port_IO_Init
                                    411 	.globl _ADC_INIT
                                    412 ;--------------------------------------------------------
                                    413 ; special function registers
                                    414 ;--------------------------------------------------------
                                    415 	.area RSEG    (ABS,DATA)
      000000                        416 	.org 0x0000
                           000080   417 G$P0$0$0 == 0x0080
                           000080   418 _P0	=	0x0080
                           000081   419 G$SP$0$0 == 0x0081
                           000081   420 _SP	=	0x0081
                           000082   421 G$DPL$0$0 == 0x0082
                           000082   422 _DPL	=	0x0082
                           000083   423 G$DPH$0$0 == 0x0083
                           000083   424 _DPH	=	0x0083
                           000084   425 G$SFRPAGE$0$0 == 0x0084
                           000084   426 _SFRPAGE	=	0x0084
                           000085   427 G$SFRNEXT$0$0 == 0x0085
                           000085   428 _SFRNEXT	=	0x0085
                           000086   429 G$SFRLAST$0$0 == 0x0086
                           000086   430 _SFRLAST	=	0x0086
                           000087   431 G$PCON$0$0 == 0x0087
                           000087   432 _PCON	=	0x0087
                           000090   433 G$P1$0$0 == 0x0090
                           000090   434 _P1	=	0x0090
                           0000A0   435 G$P2$0$0 == 0x00a0
                           0000A0   436 _P2	=	0x00a0
                           0000A8   437 G$IE$0$0 == 0x00a8
                           0000A8   438 _IE	=	0x00a8
                           0000B0   439 G$P3$0$0 == 0x00b0
                           0000B0   440 _P3	=	0x00b0
                           0000B1   441 G$PSBANK$0$0 == 0x00b1
                           0000B1   442 _PSBANK	=	0x00b1
                           0000B8   443 G$IP$0$0 == 0x00b8
                           0000B8   444 _IP	=	0x00b8
                           0000D0   445 G$PSW$0$0 == 0x00d0
                           0000D0   446 _PSW	=	0x00d0
                           0000E0   447 G$ACC$0$0 == 0x00e0
                           0000E0   448 _ACC	=	0x00e0
                           0000E6   449 G$EIE1$0$0 == 0x00e6
                           0000E6   450 _EIE1	=	0x00e6
                           0000E7   451 G$EIE2$0$0 == 0x00e7
                           0000E7   452 _EIE2	=	0x00e7
                           0000F0   453 G$B$0$0 == 0x00f0
                           0000F0   454 _B	=	0x00f0
                           0000F6   455 G$EIP1$0$0 == 0x00f6
                           0000F6   456 _EIP1	=	0x00f6
                           0000F7   457 G$EIP2$0$0 == 0x00f7
                           0000F7   458 _EIP2	=	0x00f7
                           0000FF   459 G$WDTCN$0$0 == 0x00ff
                           0000FF   460 _WDTCN	=	0x00ff
                           000088   461 G$TCON$0$0 == 0x0088
                           000088   462 _TCON	=	0x0088
                           000089   463 G$TMOD$0$0 == 0x0089
                           000089   464 _TMOD	=	0x0089
                           00008A   465 G$TL0$0$0 == 0x008a
                           00008A   466 _TL0	=	0x008a
                           00008B   467 G$TL1$0$0 == 0x008b
                           00008B   468 _TL1	=	0x008b
                           00008C   469 G$TH0$0$0 == 0x008c
                           00008C   470 _TH0	=	0x008c
                           00008D   471 G$TH1$0$0 == 0x008d
                           00008D   472 _TH1	=	0x008d
                           00008E   473 G$CKCON$0$0 == 0x008e
                           00008E   474 _CKCON	=	0x008e
                           00008F   475 G$PSCTL$0$0 == 0x008f
                           00008F   476 _PSCTL	=	0x008f
                           000091   477 G$SSTA0$0$0 == 0x0091
                           000091   478 _SSTA0	=	0x0091
                           000098   479 G$SCON0$0$0 == 0x0098
                           000098   480 _SCON0	=	0x0098
                           000098   481 G$SCON$0$0 == 0x0098
                           000098   482 _SCON	=	0x0098
                           000099   483 G$SBUF0$0$0 == 0x0099
                           000099   484 _SBUF0	=	0x0099
                           000099   485 G$SBUF$0$0 == 0x0099
                           000099   486 _SBUF	=	0x0099
                           00009A   487 G$SPI0CFG$0$0 == 0x009a
                           00009A   488 _SPI0CFG	=	0x009a
                           00009B   489 G$SPI0DAT$0$0 == 0x009b
                           00009B   490 _SPI0DAT	=	0x009b
                           00009D   491 G$SPI0CKR$0$0 == 0x009d
                           00009D   492 _SPI0CKR	=	0x009d
                           0000A1   493 G$EMI0TC$0$0 == 0x00a1
                           0000A1   494 _EMI0TC	=	0x00a1
                           0000A2   495 G$EMI0CN$0$0 == 0x00a2
                           0000A2   496 _EMI0CN	=	0x00a2
                           0000A2   497 G$_XPAGE$0$0 == 0x00a2
                           0000A2   498 __XPAGE	=	0x00a2
                           0000A3   499 G$EMI0CF$0$0 == 0x00a3
                           0000A3   500 _EMI0CF	=	0x00a3
                           0000A9   501 G$SADDR0$0$0 == 0x00a9
                           0000A9   502 _SADDR0	=	0x00a9
                           0000B7   503 G$FLSCL$0$0 == 0x00b7
                           0000B7   504 _FLSCL	=	0x00b7
                           0000B9   505 G$SADEN0$0$0 == 0x00b9
                           0000B9   506 _SADEN0	=	0x00b9
                           0000BA   507 G$AMX0CF$0$0 == 0x00ba
                           0000BA   508 _AMX0CF	=	0x00ba
                           0000BB   509 G$AMX0SL$0$0 == 0x00bb
                           0000BB   510 _AMX0SL	=	0x00bb
                           0000BC   511 G$ADC0CF$0$0 == 0x00bc
                           0000BC   512 _ADC0CF	=	0x00bc
                           0000BE   513 G$ADC0L$0$0 == 0x00be
                           0000BE   514 _ADC0L	=	0x00be
                           0000BF   515 G$ADC0H$0$0 == 0x00bf
                           0000BF   516 _ADC0H	=	0x00bf
                           0000C0   517 G$SMB0CN$0$0 == 0x00c0
                           0000C0   518 _SMB0CN	=	0x00c0
                           0000C1   519 G$SMB0STA$0$0 == 0x00c1
                           0000C1   520 _SMB0STA	=	0x00c1
                           0000C2   521 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   522 _SMB0DAT	=	0x00c2
                           0000C3   523 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   524 _SMB0ADR	=	0x00c3
                           0000C4   525 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   526 _ADC0GTL	=	0x00c4
                           0000C5   527 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   528 _ADC0GTH	=	0x00c5
                           0000C6   529 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   530 _ADC0LTL	=	0x00c6
                           0000C7   531 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   532 _ADC0LTH	=	0x00c7
                           0000C8   533 G$TMR2CN$0$0 == 0x00c8
                           0000C8   534 _TMR2CN	=	0x00c8
                           0000C9   535 G$TMR2CF$0$0 == 0x00c9
                           0000C9   536 _TMR2CF	=	0x00c9
                           0000CA   537 G$RCAP2L$0$0 == 0x00ca
                           0000CA   538 _RCAP2L	=	0x00ca
                           0000CB   539 G$RCAP2H$0$0 == 0x00cb
                           0000CB   540 _RCAP2H	=	0x00cb
                           0000CC   541 G$TMR2L$0$0 == 0x00cc
                           0000CC   542 _TMR2L	=	0x00cc
                           0000CC   543 G$TL2$0$0 == 0x00cc
                           0000CC   544 _TL2	=	0x00cc
                           0000CD   545 G$TMR2H$0$0 == 0x00cd
                           0000CD   546 _TMR2H	=	0x00cd
                           0000CD   547 G$TH2$0$0 == 0x00cd
                           0000CD   548 _TH2	=	0x00cd
                           0000CF   549 G$SMB0CR$0$0 == 0x00cf
                           0000CF   550 _SMB0CR	=	0x00cf
                           0000D1   551 G$REF0CN$0$0 == 0x00d1
                           0000D1   552 _REF0CN	=	0x00d1
                           0000D2   553 G$DAC0L$0$0 == 0x00d2
                           0000D2   554 _DAC0L	=	0x00d2
                           0000D3   555 G$DAC0H$0$0 == 0x00d3
                           0000D3   556 _DAC0H	=	0x00d3
                           0000D4   557 G$DAC0CN$0$0 == 0x00d4
                           0000D4   558 _DAC0CN	=	0x00d4
                           0000D8   559 G$PCA0CN$0$0 == 0x00d8
                           0000D8   560 _PCA0CN	=	0x00d8
                           0000D9   561 G$PCA0MD$0$0 == 0x00d9
                           0000D9   562 _PCA0MD	=	0x00d9
                           0000DA   563 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   564 _PCA0CPM0	=	0x00da
                           0000DB   565 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   566 _PCA0CPM1	=	0x00db
                           0000DC   567 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   568 _PCA0CPM2	=	0x00dc
                           0000DD   569 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   570 _PCA0CPM3	=	0x00dd
                           0000DE   571 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   572 _PCA0CPM4	=	0x00de
                           0000DF   573 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   574 _PCA0CPM5	=	0x00df
                           0000E1   575 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   576 _PCA0CPL5	=	0x00e1
                           0000E2   577 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   578 _PCA0CPH5	=	0x00e2
                           0000E8   579 G$ADC0CN$0$0 == 0x00e8
                           0000E8   580 _ADC0CN	=	0x00e8
                           0000E9   581 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   582 _PCA0CPL2	=	0x00e9
                           0000EA   583 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   584 _PCA0CPH2	=	0x00ea
                           0000EB   585 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   586 _PCA0CPL3	=	0x00eb
                           0000EC   587 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   588 _PCA0CPH3	=	0x00ec
                           0000ED   589 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   590 _PCA0CPL4	=	0x00ed
                           0000EE   591 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   592 _PCA0CPH4	=	0x00ee
                           0000EF   593 G$RSTSRC$0$0 == 0x00ef
                           0000EF   594 _RSTSRC	=	0x00ef
                           0000F8   595 G$SPI0CN$0$0 == 0x00f8
                           0000F8   596 _SPI0CN	=	0x00f8
                           0000F9   597 G$PCA0L$0$0 == 0x00f9
                           0000F9   598 _PCA0L	=	0x00f9
                           0000FA   599 G$PCA0H$0$0 == 0x00fa
                           0000FA   600 _PCA0H	=	0x00fa
                           0000FB   601 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   602 _PCA0CPL0	=	0x00fb
                           0000FC   603 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   604 _PCA0CPH0	=	0x00fc
                           0000FD   605 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   606 _PCA0CPL1	=	0x00fd
                           0000FE   607 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   608 _PCA0CPH1	=	0x00fe
                           000088   609 G$CPT0CN$0$0 == 0x0088
                           000088   610 _CPT0CN	=	0x0088
                           000089   611 G$CPT0MD$0$0 == 0x0089
                           000089   612 _CPT0MD	=	0x0089
                           000098   613 G$SCON1$0$0 == 0x0098
                           000098   614 _SCON1	=	0x0098
                           000099   615 G$SBUF1$0$0 == 0x0099
                           000099   616 _SBUF1	=	0x0099
                           0000C8   617 G$TMR3CN$0$0 == 0x00c8
                           0000C8   618 _TMR3CN	=	0x00c8
                           0000C9   619 G$TMR3CF$0$0 == 0x00c9
                           0000C9   620 _TMR3CF	=	0x00c9
                           0000CA   621 G$RCAP3L$0$0 == 0x00ca
                           0000CA   622 _RCAP3L	=	0x00ca
                           0000CB   623 G$RCAP3H$0$0 == 0x00cb
                           0000CB   624 _RCAP3H	=	0x00cb
                           0000CC   625 G$TMR3L$0$0 == 0x00cc
                           0000CC   626 _TMR3L	=	0x00cc
                           0000CD   627 G$TMR3H$0$0 == 0x00cd
                           0000CD   628 _TMR3H	=	0x00cd
                           0000D2   629 G$DAC1L$0$0 == 0x00d2
                           0000D2   630 _DAC1L	=	0x00d2
                           0000D3   631 G$DAC1H$0$0 == 0x00d3
                           0000D3   632 _DAC1H	=	0x00d3
                           0000D4   633 G$DAC1CN$0$0 == 0x00d4
                           0000D4   634 _DAC1CN	=	0x00d4
                           000088   635 G$CPT1CN$0$0 == 0x0088
                           000088   636 _CPT1CN	=	0x0088
                           000089   637 G$CPT1MD$0$0 == 0x0089
                           000089   638 _CPT1MD	=	0x0089
                           0000BA   639 G$AMX2CF$0$0 == 0x00ba
                           0000BA   640 _AMX2CF	=	0x00ba
                           0000BB   641 G$AMX2SL$0$0 == 0x00bb
                           0000BB   642 _AMX2SL	=	0x00bb
                           0000BC   643 G$ADC2CF$0$0 == 0x00bc
                           0000BC   644 _ADC2CF	=	0x00bc
                           0000BE   645 G$ADC2$0$0 == 0x00be
                           0000BE   646 _ADC2	=	0x00be
                           0000C4   647 G$ADC2GT$0$0 == 0x00c4
                           0000C4   648 _ADC2GT	=	0x00c4
                           0000C6   649 G$ADC2LT$0$0 == 0x00c6
                           0000C6   650 _ADC2LT	=	0x00c6
                           0000C8   651 G$TMR4CN$0$0 == 0x00c8
                           0000C8   652 _TMR4CN	=	0x00c8
                           0000C9   653 G$TMR4CF$0$0 == 0x00c9
                           0000C9   654 _TMR4CF	=	0x00c9
                           0000CA   655 G$RCAP4L$0$0 == 0x00ca
                           0000CA   656 _RCAP4L	=	0x00ca
                           0000CB   657 G$RCAP4H$0$0 == 0x00cb
                           0000CB   658 _RCAP4H	=	0x00cb
                           0000CC   659 G$TMR4L$0$0 == 0x00cc
                           0000CC   660 _TMR4L	=	0x00cc
                           0000CD   661 G$TMR4H$0$0 == 0x00cd
                           0000CD   662 _TMR4H	=	0x00cd
                           0000E8   663 G$ADC2CN$0$0 == 0x00e8
                           0000E8   664 _ADC2CN	=	0x00e8
                           000091   665 G$MAC0BL$0$0 == 0x0091
                           000091   666 _MAC0BL	=	0x0091
                           000092   667 G$MAC0BH$0$0 == 0x0092
                           000092   668 _MAC0BH	=	0x0092
                           000093   669 G$MAC0ACC0$0$0 == 0x0093
                           000093   670 _MAC0ACC0	=	0x0093
                           000094   671 G$MAC0ACC1$0$0 == 0x0094
                           000094   672 _MAC0ACC1	=	0x0094
                           000095   673 G$MAC0ACC2$0$0 == 0x0095
                           000095   674 _MAC0ACC2	=	0x0095
                           000096   675 G$MAC0ACC3$0$0 == 0x0096
                           000096   676 _MAC0ACC3	=	0x0096
                           000097   677 G$MAC0OVR$0$0 == 0x0097
                           000097   678 _MAC0OVR	=	0x0097
                           0000C0   679 G$MAC0STA$0$0 == 0x00c0
                           0000C0   680 _MAC0STA	=	0x00c0
                           0000C1   681 G$MAC0AL$0$0 == 0x00c1
                           0000C1   682 _MAC0AL	=	0x00c1
                           0000C2   683 G$MAC0AH$0$0 == 0x00c2
                           0000C2   684 _MAC0AH	=	0x00c2
                           0000C3   685 G$MAC0CF$0$0 == 0x00c3
                           0000C3   686 _MAC0CF	=	0x00c3
                           0000CE   687 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   688 _MAC0RNDL	=	0x00ce
                           0000CF   689 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   690 _MAC0RNDH	=	0x00cf
                           000088   691 G$FLSTAT$0$0 == 0x0088
                           000088   692 _FLSTAT	=	0x0088
                           000089   693 G$PLL0CN$0$0 == 0x0089
                           000089   694 _PLL0CN	=	0x0089
                           00008A   695 G$OSCICN$0$0 == 0x008a
                           00008A   696 _OSCICN	=	0x008a
                           00008B   697 G$OSCICL$0$0 == 0x008b
                           00008B   698 _OSCICL	=	0x008b
                           00008C   699 G$OSCXCN$0$0 == 0x008c
                           00008C   700 _OSCXCN	=	0x008c
                           00008D   701 G$PLL0DIV$0$0 == 0x008d
                           00008D   702 _PLL0DIV	=	0x008d
                           00008E   703 G$PLL0MUL$0$0 == 0x008e
                           00008E   704 _PLL0MUL	=	0x008e
                           00008F   705 G$PLL0FLT$0$0 == 0x008f
                           00008F   706 _PLL0FLT	=	0x008f
                           000096   707 G$SFRPGCN$0$0 == 0x0096
                           000096   708 _SFRPGCN	=	0x0096
                           000097   709 G$CLKSEL$0$0 == 0x0097
                           000097   710 _CLKSEL	=	0x0097
                           00009A   711 G$CCH0MA$0$0 == 0x009a
                           00009A   712 _CCH0MA	=	0x009a
                           00009C   713 G$P4MDOUT$0$0 == 0x009c
                           00009C   714 _P4MDOUT	=	0x009c
                           00009D   715 G$P5MDOUT$0$0 == 0x009d
                           00009D   716 _P5MDOUT	=	0x009d
                           00009E   717 G$P6MDOUT$0$0 == 0x009e
                           00009E   718 _P6MDOUT	=	0x009e
                           00009F   719 G$P7MDOUT$0$0 == 0x009f
                           00009F   720 _P7MDOUT	=	0x009f
                           0000A1   721 G$CCH0CN$0$0 == 0x00a1
                           0000A1   722 _CCH0CN	=	0x00a1
                           0000A2   723 G$CCH0TN$0$0 == 0x00a2
                           0000A2   724 _CCH0TN	=	0x00a2
                           0000A3   725 G$CCH0LC$0$0 == 0x00a3
                           0000A3   726 _CCH0LC	=	0x00a3
                           0000A4   727 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   728 _P0MDOUT	=	0x00a4
                           0000A5   729 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   730 _P1MDOUT	=	0x00a5
                           0000A6   731 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   732 _P2MDOUT	=	0x00a6
                           0000A7   733 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   734 _P3MDOUT	=	0x00a7
                           0000AD   735 G$P1MDIN$0$0 == 0x00ad
                           0000AD   736 _P1MDIN	=	0x00ad
                           0000B7   737 G$FLACL$0$0 == 0x00b7
                           0000B7   738 _FLACL	=	0x00b7
                           0000C8   739 G$P4$0$0 == 0x00c8
                           0000C8   740 _P4	=	0x00c8
                           0000D8   741 G$P5$0$0 == 0x00d8
                           0000D8   742 _P5	=	0x00d8
                           0000E1   743 G$XBR0$0$0 == 0x00e1
                           0000E1   744 _XBR0	=	0x00e1
                           0000E2   745 G$XBR1$0$0 == 0x00e2
                           0000E2   746 _XBR1	=	0x00e2
                           0000E3   747 G$XBR2$0$0 == 0x00e3
                           0000E3   748 _XBR2	=	0x00e3
                           0000E8   749 G$P6$0$0 == 0x00e8
                           0000E8   750 _P6	=	0x00e8
                           0000F8   751 G$P7$0$0 == 0x00f8
                           0000F8   752 _P7	=	0x00f8
                           008C8A   753 G$TMR0$0$0 == 0x8c8a
                           008C8A   754 _TMR0	=	0x8c8a
                           008D8B   755 G$TMR1$0$0 == 0x8d8b
                           008D8B   756 _TMR1	=	0x8d8b
                           00CDCC   757 G$TMR2$0$0 == 0xcdcc
                           00CDCC   758 _TMR2	=	0xcdcc
                           00CBCA   759 G$RCAP2$0$0 == 0xcbca
                           00CBCA   760 _RCAP2	=	0xcbca
                           00BFBE   761 G$ADC0$0$0 == 0xbfbe
                           00BFBE   762 _ADC0	=	0xbfbe
                           00C5C4   763 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   764 _ADC0GT	=	0xc5c4
                           00C7C6   765 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   766 _ADC0LT	=	0xc7c6
                           00D3D2   767 G$DAC0$0$0 == 0xd3d2
                           00D3D2   768 _DAC0	=	0xd3d2
                           00FAF9   769 G$PCA0$0$0 == 0xfaf9
                           00FAF9   770 _PCA0	=	0xfaf9
                           00FCFB   771 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   772 _PCA0CP0	=	0xfcfb
                           00FEFD   773 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   774 _PCA0CP1	=	0xfefd
                           00EAE9   775 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   776 _PCA0CP2	=	0xeae9
                           00ECEB   777 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   778 _PCA0CP3	=	0xeceb
                           00EEED   779 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   780 _PCA0CP4	=	0xeeed
                           00E2E1   781 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   782 _PCA0CP5	=	0xe2e1
                           00CDCC   783 G$TMR3$0$0 == 0xcdcc
                           00CDCC   784 _TMR3	=	0xcdcc
                           00CBCA   785 G$RCAP3$0$0 == 0xcbca
                           00CBCA   786 _RCAP3	=	0xcbca
                           00D3D2   787 G$DAC1$0$0 == 0xd3d2
                           00D3D2   788 _DAC1	=	0xd3d2
                           00CDCC   789 G$TMR4$0$0 == 0xcdcc
                           00CDCC   790 _TMR4	=	0xcdcc
                           00CBCA   791 G$RCAP4$0$0 == 0xcbca
                           00CBCA   792 _RCAP4	=	0xcbca
                           00C2C1   793 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   794 _MAC0A	=	0xc2c1
                           96959493   795 G$MAC0ACC$0$0 == 0x96959493
                           96959493   796 _MAC0ACC	=	0x96959493
                           00CFCE   797 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   798 _MAC0RND	=	0xcfce
                                    799 ;--------------------------------------------------------
                                    800 ; special function bits
                                    801 ;--------------------------------------------------------
                                    802 	.area RSEG    (ABS,DATA)
      000000                        803 	.org 0x0000
                           000080   804 G$P0_0$0$0 == 0x0080
                           000080   805 _P0_0	=	0x0080
                           000081   806 G$P0_1$0$0 == 0x0081
                           000081   807 _P0_1	=	0x0081
                           000082   808 G$P0_2$0$0 == 0x0082
                           000082   809 _P0_2	=	0x0082
                           000083   810 G$P0_3$0$0 == 0x0083
                           000083   811 _P0_3	=	0x0083
                           000084   812 G$P0_4$0$0 == 0x0084
                           000084   813 _P0_4	=	0x0084
                           000085   814 G$P0_5$0$0 == 0x0085
                           000085   815 _P0_5	=	0x0085
                           000086   816 G$P0_6$0$0 == 0x0086
                           000086   817 _P0_6	=	0x0086
                           000087   818 G$P0_7$0$0 == 0x0087
                           000087   819 _P0_7	=	0x0087
                           000088   820 G$IT0$0$0 == 0x0088
                           000088   821 _IT0	=	0x0088
                           000089   822 G$IE0$0$0 == 0x0089
                           000089   823 _IE0	=	0x0089
                           00008A   824 G$IT1$0$0 == 0x008a
                           00008A   825 _IT1	=	0x008a
                           00008B   826 G$IE1$0$0 == 0x008b
                           00008B   827 _IE1	=	0x008b
                           00008C   828 G$TR0$0$0 == 0x008c
                           00008C   829 _TR0	=	0x008c
                           00008D   830 G$TF0$0$0 == 0x008d
                           00008D   831 _TF0	=	0x008d
                           00008E   832 G$TR1$0$0 == 0x008e
                           00008E   833 _TR1	=	0x008e
                           00008F   834 G$TF1$0$0 == 0x008f
                           00008F   835 _TF1	=	0x008f
                           000088   836 G$CP0HYN0$0$0 == 0x0088
                           000088   837 _CP0HYN0	=	0x0088
                           000089   838 G$CP0HYN1$0$0 == 0x0089
                           000089   839 _CP0HYN1	=	0x0089
                           00008A   840 G$CP0HYP0$0$0 == 0x008a
                           00008A   841 _CP0HYP0	=	0x008a
                           00008B   842 G$CP0HYP1$0$0 == 0x008b
                           00008B   843 _CP0HYP1	=	0x008b
                           00008C   844 G$CP0FIF$0$0 == 0x008c
                           00008C   845 _CP0FIF	=	0x008c
                           00008D   846 G$CP0RIF$0$0 == 0x008d
                           00008D   847 _CP0RIF	=	0x008d
                           00008E   848 G$CP0OUT$0$0 == 0x008e
                           00008E   849 _CP0OUT	=	0x008e
                           00008F   850 G$CP0EN$0$0 == 0x008f
                           00008F   851 _CP0EN	=	0x008f
                           000088   852 G$CP1HYN0$0$0 == 0x0088
                           000088   853 _CP1HYN0	=	0x0088
                           000089   854 G$CP1HYN1$0$0 == 0x0089
                           000089   855 _CP1HYN1	=	0x0089
                           00008A   856 G$CP1HYP0$0$0 == 0x008a
                           00008A   857 _CP1HYP0	=	0x008a
                           00008B   858 G$CP1HYP1$0$0 == 0x008b
                           00008B   859 _CP1HYP1	=	0x008b
                           00008C   860 G$CP1FIF$0$0 == 0x008c
                           00008C   861 _CP1FIF	=	0x008c
                           00008D   862 G$CP1RIF$0$0 == 0x008d
                           00008D   863 _CP1RIF	=	0x008d
                           00008E   864 G$CP1OUT$0$0 == 0x008e
                           00008E   865 _CP1OUT	=	0x008e
                           00008F   866 G$CP1EN$0$0 == 0x008f
                           00008F   867 _CP1EN	=	0x008f
                           000088   868 G$FLHBUSY$0$0 == 0x0088
                           000088   869 _FLHBUSY	=	0x0088
                           000090   870 G$P1_0$0$0 == 0x0090
                           000090   871 _P1_0	=	0x0090
                           000091   872 G$P1_1$0$0 == 0x0091
                           000091   873 _P1_1	=	0x0091
                           000092   874 G$P1_2$0$0 == 0x0092
                           000092   875 _P1_2	=	0x0092
                           000093   876 G$P1_3$0$0 == 0x0093
                           000093   877 _P1_3	=	0x0093
                           000094   878 G$P1_4$0$0 == 0x0094
                           000094   879 _P1_4	=	0x0094
                           000095   880 G$P1_5$0$0 == 0x0095
                           000095   881 _P1_5	=	0x0095
                           000096   882 G$P1_6$0$0 == 0x0096
                           000096   883 _P1_6	=	0x0096
                           000097   884 G$P1_7$0$0 == 0x0097
                           000097   885 _P1_7	=	0x0097
                           000098   886 G$RI0$0$0 == 0x0098
                           000098   887 _RI0	=	0x0098
                           000098   888 G$RI$0$0 == 0x0098
                           000098   889 _RI	=	0x0098
                           000099   890 G$TI0$0$0 == 0x0099
                           000099   891 _TI0	=	0x0099
                           000099   892 G$TI$0$0 == 0x0099
                           000099   893 _TI	=	0x0099
                           00009A   894 G$RB80$0$0 == 0x009a
                           00009A   895 _RB80	=	0x009a
                           00009B   896 G$TB80$0$0 == 0x009b
                           00009B   897 _TB80	=	0x009b
                           00009C   898 G$REN0$0$0 == 0x009c
                           00009C   899 _REN0	=	0x009c
                           00009C   900 G$REN$0$0 == 0x009c
                           00009C   901 _REN	=	0x009c
                           00009D   902 G$SM20$0$0 == 0x009d
                           00009D   903 _SM20	=	0x009d
                           00009E   904 G$SM10$0$0 == 0x009e
                           00009E   905 _SM10	=	0x009e
                           00009F   906 G$SM00$0$0 == 0x009f
                           00009F   907 _SM00	=	0x009f
                           000098   908 G$RI1$0$0 == 0x0098
                           000098   909 _RI1	=	0x0098
                           000099   910 G$TI1$0$0 == 0x0099
                           000099   911 _TI1	=	0x0099
                           00009A   912 G$RB81$0$0 == 0x009a
                           00009A   913 _RB81	=	0x009a
                           00009B   914 G$TB81$0$0 == 0x009b
                           00009B   915 _TB81	=	0x009b
                           00009C   916 G$REN1$0$0 == 0x009c
                           00009C   917 _REN1	=	0x009c
                           00009D   918 G$MCE1$0$0 == 0x009d
                           00009D   919 _MCE1	=	0x009d
                           00009F   920 G$S1MODE$0$0 == 0x009f
                           00009F   921 _S1MODE	=	0x009f
                           0000A0   922 G$P2_0$0$0 == 0x00a0
                           0000A0   923 _P2_0	=	0x00a0
                           0000A1   924 G$P2_1$0$0 == 0x00a1
                           0000A1   925 _P2_1	=	0x00a1
                           0000A2   926 G$P2_2$0$0 == 0x00a2
                           0000A2   927 _P2_2	=	0x00a2
                           0000A3   928 G$P2_3$0$0 == 0x00a3
                           0000A3   929 _P2_3	=	0x00a3
                           0000A4   930 G$P2_4$0$0 == 0x00a4
                           0000A4   931 _P2_4	=	0x00a4
                           0000A5   932 G$P2_5$0$0 == 0x00a5
                           0000A5   933 _P2_5	=	0x00a5
                           0000A6   934 G$P2_6$0$0 == 0x00a6
                           0000A6   935 _P2_6	=	0x00a6
                           0000A7   936 G$P2_7$0$0 == 0x00a7
                           0000A7   937 _P2_7	=	0x00a7
                           0000A8   938 G$EX0$0$0 == 0x00a8
                           0000A8   939 _EX0	=	0x00a8
                           0000A9   940 G$ET0$0$0 == 0x00a9
                           0000A9   941 _ET0	=	0x00a9
                           0000AA   942 G$EX1$0$0 == 0x00aa
                           0000AA   943 _EX1	=	0x00aa
                           0000AB   944 G$ET1$0$0 == 0x00ab
                           0000AB   945 _ET1	=	0x00ab
                           0000AC   946 G$ES0$0$0 == 0x00ac
                           0000AC   947 _ES0	=	0x00ac
                           0000AC   948 G$ES$0$0 == 0x00ac
                           0000AC   949 _ES	=	0x00ac
                           0000AD   950 G$ET2$0$0 == 0x00ad
                           0000AD   951 _ET2	=	0x00ad
                           0000AF   952 G$EA$0$0 == 0x00af
                           0000AF   953 _EA	=	0x00af
                           0000B0   954 G$P3_0$0$0 == 0x00b0
                           0000B0   955 _P3_0	=	0x00b0
                           0000B1   956 G$P3_1$0$0 == 0x00b1
                           0000B1   957 _P3_1	=	0x00b1
                           0000B2   958 G$P3_2$0$0 == 0x00b2
                           0000B2   959 _P3_2	=	0x00b2
                           0000B3   960 G$P3_3$0$0 == 0x00b3
                           0000B3   961 _P3_3	=	0x00b3
                           0000B4   962 G$P3_4$0$0 == 0x00b4
                           0000B4   963 _P3_4	=	0x00b4
                           0000B5   964 G$P3_5$0$0 == 0x00b5
                           0000B5   965 _P3_5	=	0x00b5
                           0000B6   966 G$P3_6$0$0 == 0x00b6
                           0000B6   967 _P3_6	=	0x00b6
                           0000B7   968 G$P3_7$0$0 == 0x00b7
                           0000B7   969 _P3_7	=	0x00b7
                           0000B8   970 G$PX0$0$0 == 0x00b8
                           0000B8   971 _PX0	=	0x00b8
                           0000B9   972 G$PT0$0$0 == 0x00b9
                           0000B9   973 _PT0	=	0x00b9
                           0000BA   974 G$PX1$0$0 == 0x00ba
                           0000BA   975 _PX1	=	0x00ba
                           0000BB   976 G$PT1$0$0 == 0x00bb
                           0000BB   977 _PT1	=	0x00bb
                           0000BC   978 G$PS0$0$0 == 0x00bc
                           0000BC   979 _PS0	=	0x00bc
                           0000BC   980 G$PS$0$0 == 0x00bc
                           0000BC   981 _PS	=	0x00bc
                           0000BD   982 G$PT2$0$0 == 0x00bd
                           0000BD   983 _PT2	=	0x00bd
                           0000C0   984 G$SMBTOE$0$0 == 0x00c0
                           0000C0   985 _SMBTOE	=	0x00c0
                           0000C1   986 G$SMBFTE$0$0 == 0x00c1
                           0000C1   987 _SMBFTE	=	0x00c1
                           0000C2   988 G$AA$0$0 == 0x00c2
                           0000C2   989 _AA	=	0x00c2
                           0000C3   990 G$SI$0$0 == 0x00c3
                           0000C3   991 _SI	=	0x00c3
                           0000C4   992 G$STO$0$0 == 0x00c4
                           0000C4   993 _STO	=	0x00c4
                           0000C5   994 G$STA$0$0 == 0x00c5
                           0000C5   995 _STA	=	0x00c5
                           0000C6   996 G$ENSMB$0$0 == 0x00c6
                           0000C6   997 _ENSMB	=	0x00c6
                           0000C7   998 G$BUSY$0$0 == 0x00c7
                           0000C7   999 _BUSY	=	0x00c7
                           0000C0  1000 G$MAC0N$0$0 == 0x00c0
                           0000C0  1001 _MAC0N	=	0x00c0
                           0000C1  1002 G$MAC0SO$0$0 == 0x00c1
                           0000C1  1003 _MAC0SO	=	0x00c1
                           0000C2  1004 G$MAC0Z$0$0 == 0x00c2
                           0000C2  1005 _MAC0Z	=	0x00c2
                           0000C3  1006 G$MAC0HO$0$0 == 0x00c3
                           0000C3  1007 _MAC0HO	=	0x00c3
                           0000C8  1008 G$CPRL2$0$0 == 0x00c8
                           0000C8  1009 _CPRL2	=	0x00c8
                           0000C9  1010 G$CT2$0$0 == 0x00c9
                           0000C9  1011 _CT2	=	0x00c9
                           0000CA  1012 G$TR2$0$0 == 0x00ca
                           0000CA  1013 _TR2	=	0x00ca
                           0000CB  1014 G$EXEN2$0$0 == 0x00cb
                           0000CB  1015 _EXEN2	=	0x00cb
                           0000CE  1016 G$EXF2$0$0 == 0x00ce
                           0000CE  1017 _EXF2	=	0x00ce
                           0000CF  1018 G$TF2$0$0 == 0x00cf
                           0000CF  1019 _TF2	=	0x00cf
                           0000C8  1020 G$CPRL3$0$0 == 0x00c8
                           0000C8  1021 _CPRL3	=	0x00c8
                           0000C9  1022 G$CT3$0$0 == 0x00c9
                           0000C9  1023 _CT3	=	0x00c9
                           0000CA  1024 G$TR3$0$0 == 0x00ca
                           0000CA  1025 _TR3	=	0x00ca
                           0000CB  1026 G$EXEN3$0$0 == 0x00cb
                           0000CB  1027 _EXEN3	=	0x00cb
                           0000CE  1028 G$EXF3$0$0 == 0x00ce
                           0000CE  1029 _EXF3	=	0x00ce
                           0000CF  1030 G$TF3$0$0 == 0x00cf
                           0000CF  1031 _TF3	=	0x00cf
                           0000C8  1032 G$CPRL4$0$0 == 0x00c8
                           0000C8  1033 _CPRL4	=	0x00c8
                           0000C9  1034 G$CT4$0$0 == 0x00c9
                           0000C9  1035 _CT4	=	0x00c9
                           0000CA  1036 G$TR4$0$0 == 0x00ca
                           0000CA  1037 _TR4	=	0x00ca
                           0000CB  1038 G$EXEN4$0$0 == 0x00cb
                           0000CB  1039 _EXEN4	=	0x00cb
                           0000CE  1040 G$EXF4$0$0 == 0x00ce
                           0000CE  1041 _EXF4	=	0x00ce
                           0000CF  1042 G$TF4$0$0 == 0x00cf
                           0000CF  1043 _TF4	=	0x00cf
                           0000C8  1044 G$P4_0$0$0 == 0x00c8
                           0000C8  1045 _P4_0	=	0x00c8
                           0000C9  1046 G$P4_1$0$0 == 0x00c9
                           0000C9  1047 _P4_1	=	0x00c9
                           0000CA  1048 G$P4_2$0$0 == 0x00ca
                           0000CA  1049 _P4_2	=	0x00ca
                           0000CB  1050 G$P4_3$0$0 == 0x00cb
                           0000CB  1051 _P4_3	=	0x00cb
                           0000CC  1052 G$P4_4$0$0 == 0x00cc
                           0000CC  1053 _P4_4	=	0x00cc
                           0000CD  1054 G$P4_5$0$0 == 0x00cd
                           0000CD  1055 _P4_5	=	0x00cd
                           0000CE  1056 G$P4_6$0$0 == 0x00ce
                           0000CE  1057 _P4_6	=	0x00ce
                           0000CF  1058 G$P4_7$0$0 == 0x00cf
                           0000CF  1059 _P4_7	=	0x00cf
                           0000D0  1060 G$P$0$0 == 0x00d0
                           0000D0  1061 _P	=	0x00d0
                           0000D1  1062 G$F1$0$0 == 0x00d1
                           0000D1  1063 _F1	=	0x00d1
                           0000D2  1064 G$OV$0$0 == 0x00d2
                           0000D2  1065 _OV	=	0x00d2
                           0000D3  1066 G$RS0$0$0 == 0x00d3
                           0000D3  1067 _RS0	=	0x00d3
                           0000D4  1068 G$RS1$0$0 == 0x00d4
                           0000D4  1069 _RS1	=	0x00d4
                           0000D5  1070 G$F0$0$0 == 0x00d5
                           0000D5  1071 _F0	=	0x00d5
                           0000D6  1072 G$AC$0$0 == 0x00d6
                           0000D6  1073 _AC	=	0x00d6
                           0000D7  1074 G$CY$0$0 == 0x00d7
                           0000D7  1075 _CY	=	0x00d7
                           0000D8  1076 G$CCF0$0$0 == 0x00d8
                           0000D8  1077 _CCF0	=	0x00d8
                           0000D9  1078 G$CCF1$0$0 == 0x00d9
                           0000D9  1079 _CCF1	=	0x00d9
                           0000DA  1080 G$CCF2$0$0 == 0x00da
                           0000DA  1081 _CCF2	=	0x00da
                           0000DB  1082 G$CCF3$0$0 == 0x00db
                           0000DB  1083 _CCF3	=	0x00db
                           0000DC  1084 G$CCF4$0$0 == 0x00dc
                           0000DC  1085 _CCF4	=	0x00dc
                           0000DD  1086 G$CCF5$0$0 == 0x00dd
                           0000DD  1087 _CCF5	=	0x00dd
                           0000DE  1088 G$CR$0$0 == 0x00de
                           0000DE  1089 _CR	=	0x00de
                           0000DF  1090 G$CF$0$0 == 0x00df
                           0000DF  1091 _CF	=	0x00df
                           0000D8  1092 G$P5_0$0$0 == 0x00d8
                           0000D8  1093 _P5_0	=	0x00d8
                           0000D9  1094 G$P5_1$0$0 == 0x00d9
                           0000D9  1095 _P5_1	=	0x00d9
                           0000DA  1096 G$P5_2$0$0 == 0x00da
                           0000DA  1097 _P5_2	=	0x00da
                           0000DB  1098 G$P5_3$0$0 == 0x00db
                           0000DB  1099 _P5_3	=	0x00db
                           0000DC  1100 G$P5_4$0$0 == 0x00dc
                           0000DC  1101 _P5_4	=	0x00dc
                           0000DD  1102 G$P5_5$0$0 == 0x00dd
                           0000DD  1103 _P5_5	=	0x00dd
                           0000DE  1104 G$P5_6$0$0 == 0x00de
                           0000DE  1105 _P5_6	=	0x00de
                           0000DF  1106 G$P5_7$0$0 == 0x00df
                           0000DF  1107 _P5_7	=	0x00df
                           0000E8  1108 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1109 _AD0LJST	=	0x00e8
                           0000E9  1110 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1111 _AD0WINT	=	0x00e9
                           0000EA  1112 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1113 _AD0CM0	=	0x00ea
                           0000EB  1114 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1115 _AD0CM1	=	0x00eb
                           0000EC  1116 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1117 _AD0BUSY	=	0x00ec
                           0000ED  1118 G$AD0INT$0$0 == 0x00ed
                           0000ED  1119 _AD0INT	=	0x00ed
                           0000EE  1120 G$AD0TM$0$0 == 0x00ee
                           0000EE  1121 _AD0TM	=	0x00ee
                           0000EF  1122 G$AD0EN$0$0 == 0x00ef
                           0000EF  1123 _AD0EN	=	0x00ef
                           0000E8  1124 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1125 _AD2WINT	=	0x00e8
                           0000E9  1126 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1127 _AD2CM0	=	0x00e9
                           0000EA  1128 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1129 _AD2CM1	=	0x00ea
                           0000EB  1130 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1131 _AD2CM2	=	0x00eb
                           0000EC  1132 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1133 _AD2BUSY	=	0x00ec
                           0000ED  1134 G$AD2INT$0$0 == 0x00ed
                           0000ED  1135 _AD2INT	=	0x00ed
                           0000EE  1136 G$AD2TM$0$0 == 0x00ee
                           0000EE  1137 _AD2TM	=	0x00ee
                           0000EF  1138 G$AD2EN$0$0 == 0x00ef
                           0000EF  1139 _AD2EN	=	0x00ef
                           0000E8  1140 G$P6_0$0$0 == 0x00e8
                           0000E8  1141 _P6_0	=	0x00e8
                           0000E9  1142 G$P6_1$0$0 == 0x00e9
                           0000E9  1143 _P6_1	=	0x00e9
                           0000EA  1144 G$P6_2$0$0 == 0x00ea
                           0000EA  1145 _P6_2	=	0x00ea
                           0000EB  1146 G$P6_3$0$0 == 0x00eb
                           0000EB  1147 _P6_3	=	0x00eb
                           0000EC  1148 G$P6_4$0$0 == 0x00ec
                           0000EC  1149 _P6_4	=	0x00ec
                           0000ED  1150 G$P6_5$0$0 == 0x00ed
                           0000ED  1151 _P6_5	=	0x00ed
                           0000EE  1152 G$P6_6$0$0 == 0x00ee
                           0000EE  1153 _P6_6	=	0x00ee
                           0000EF  1154 G$P6_7$0$0 == 0x00ef
                           0000EF  1155 _P6_7	=	0x00ef
                           0000F8  1156 G$SPIEN$0$0 == 0x00f8
                           0000F8  1157 _SPIEN	=	0x00f8
                           0000F9  1158 G$TXBMT$0$0 == 0x00f9
                           0000F9  1159 _TXBMT	=	0x00f9
                           0000FA  1160 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1161 _NSSMD0	=	0x00fa
                           0000FB  1162 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1163 _NSSMD1	=	0x00fb
                           0000FC  1164 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1165 _RXOVRN	=	0x00fc
                           0000FD  1166 G$MODF$0$0 == 0x00fd
                           0000FD  1167 _MODF	=	0x00fd
                           0000FE  1168 G$WCOL$0$0 == 0x00fe
                           0000FE  1169 _WCOL	=	0x00fe
                           0000FF  1170 G$SPIF$0$0 == 0x00ff
                           0000FF  1171 _SPIF	=	0x00ff
                           0000F8  1172 G$P7_0$0$0 == 0x00f8
                           0000F8  1173 _P7_0	=	0x00f8
                           0000F9  1174 G$P7_1$0$0 == 0x00f9
                           0000F9  1175 _P7_1	=	0x00f9
                           0000FA  1176 G$P7_2$0$0 == 0x00fa
                           0000FA  1177 _P7_2	=	0x00fa
                           0000FB  1178 G$P7_3$0$0 == 0x00fb
                           0000FB  1179 _P7_3	=	0x00fb
                           0000FC  1180 G$P7_4$0$0 == 0x00fc
                           0000FC  1181 _P7_4	=	0x00fc
                           0000FD  1182 G$P7_5$0$0 == 0x00fd
                           0000FD  1183 _P7_5	=	0x00fd
                           0000FE  1184 G$P7_6$0$0 == 0x00fe
                           0000FE  1185 _P7_6	=	0x00fe
                           0000FF  1186 G$P7_7$0$0 == 0x00ff
                           0000FF  1187 _P7_7	=	0x00ff
                           000090  1188 G$PB$0$0 == 0x0090
                           000090  1189 _PB	=	0x0090
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
      000008                       1200 _running::
      000008                       1201 	.ds 4
                           000004  1202 G$min$0$0==.
      00000C                       1203 _min::
      00000C                       1204 	.ds 4
                           000008  1205 G$max$0$0==.
      000010                       1206 _max::
      000010                       1207 	.ds 4
                           00000C  1208 G$trials$0$0==.
      000014                       1209 _trials::
      000014                       1210 	.ds 2
                           00000E  1211 Lvoltmeter.score$volts$1$33==.
      000016                       1212 _score_volts_1_33:
      000016                       1213 	.ds 4
                           000012  1214 Lvoltmeter.score$sloc0$1$0==.
      00001A                       1215 _score_sloc0_1_0:
      00001A                       1216 	.ds 4
                                   1217 ;--------------------------------------------------------
                                   1218 ; overlayable items in internal ram 
                                   1219 ;--------------------------------------------------------
                                   1220 	.area	OSEG    (OVR,DATA)
                                   1221 	.area	OSEG    (OVR,DATA)
                                   1222 	.area	OSEG    (OVR,DATA)
                                   1223 ;--------------------------------------------------------
                                   1224 ; Stack segment in internal ram 
                                   1225 ;--------------------------------------------------------
                                   1226 	.area	SSEG
      00004F                       1227 __start__stack:
      00004F                       1228 	.ds	1
                                   1229 
                                   1230 ;--------------------------------------------------------
                                   1231 ; indirectly addressable internal ram data
                                   1232 ;--------------------------------------------------------
                                   1233 	.area ISEG    (DATA)
                                   1234 ;--------------------------------------------------------
                                   1235 ; absolute internal ram data
                                   1236 ;--------------------------------------------------------
                                   1237 	.area IABS    (ABS,DATA)
                                   1238 	.area IABS    (ABS,DATA)
                                   1239 ;--------------------------------------------------------
                                   1240 ; bit data
                                   1241 ;--------------------------------------------------------
                                   1242 	.area BSEG    (BIT)
                                   1243 ;--------------------------------------------------------
                                   1244 ; paged external ram data
                                   1245 ;--------------------------------------------------------
                                   1246 	.area PSEG    (PAG,XDATA)
                                   1247 ;--------------------------------------------------------
                                   1248 ; external ram data
                                   1249 ;--------------------------------------------------------
                                   1250 	.area XSEG    (XDATA)
                                   1251 ;--------------------------------------------------------
                                   1252 ; absolute external ram data
                                   1253 ;--------------------------------------------------------
                                   1254 	.area XABS    (ABS,XDATA)
                                   1255 ;--------------------------------------------------------
                                   1256 ; external initialized ram data
                                   1257 ;--------------------------------------------------------
                                   1258 	.area XISEG   (XDATA)
                                   1259 	.area HOME    (CODE)
                                   1260 	.area GSINIT0 (CODE)
                                   1261 	.area GSINIT1 (CODE)
                                   1262 	.area GSINIT2 (CODE)
                                   1263 	.area GSINIT3 (CODE)
                                   1264 	.area GSINIT4 (CODE)
                                   1265 	.area GSINIT5 (CODE)
                                   1266 	.area GSINIT  (CODE)
                                   1267 	.area GSFINAL (CODE)
                                   1268 	.area CSEG    (CODE)
                                   1269 ;--------------------------------------------------------
                                   1270 ; interrupt vector 
                                   1271 ;--------------------------------------------------------
                                   1272 	.area HOME    (CODE)
      000000                       1273 __interrupt_vect:
      000000 02 00 06         [24] 1274 	ljmp	__sdcc_gsinit_startup
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
                           000000  1288 	C$voltmeter.c$19$1$40 ==.
                                   1289 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:19: float running = 0;
      00005F E4               [12] 1290 	clr	a
      000060 F5 08            [12] 1291 	mov	_running,a
      000062 F5 09            [12] 1292 	mov	(_running + 1),a
      000064 F5 0A            [12] 1293 	mov	(_running + 2),a
      000066 F5 0B            [12] 1294 	mov	(_running + 3),a
                           000009  1295 	C$voltmeter.c$20$1$40 ==.
                                   1296 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:20: float min = 100;
      000068 F5 0C            [12] 1297 	mov	_min,a
      00006A F5 0D            [12] 1298 	mov	(_min + 1),a
      00006C 75 0E C8         [24] 1299 	mov	(_min + 2),#0xC8
      00006F 75 0F 42         [24] 1300 	mov	(_min + 3),#0x42
                           000013  1301 	C$voltmeter.c$21$1$40 ==.
                                   1302 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:21: float max = 0;
      000072 F5 10            [12] 1303 	mov	_max,a
      000074 F5 11            [12] 1304 	mov	(_max + 1),a
      000076 F5 12            [12] 1305 	mov	(_max + 2),a
      000078 F5 13            [12] 1306 	mov	(_max + 3),a
                           00001B  1307 	C$voltmeter.c$22$1$40 ==.
                                   1308 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:22: int trials = 1;
      00007A 75 14 01         [24] 1309 	mov	_trials,#0x01
                                   1310 ;	1-genFromRTrack replaced	mov	(_trials + 1),#0x00
      00007D F5 15            [12] 1311 	mov	(_trials + 1),a
                                   1312 	.area GSFINAL (CODE)
      00007F 02 00 03         [24] 1313 	ljmp	__sdcc_program_startup
                                   1314 ;--------------------------------------------------------
                                   1315 ; Home
                                   1316 ;--------------------------------------------------------
                                   1317 	.area HOME    (CODE)
                                   1318 	.area HOME    (CODE)
      000003                       1319 __sdcc_program_startup:
      000003 02 00 97         [24] 1320 	ljmp	_main
                                   1321 ;	return from main will return to caller
                                   1322 ;--------------------------------------------------------
                                   1323 ; code
                                   1324 ;--------------------------------------------------------
                                   1325 	.area CSEG    (CODE)
                                   1326 ;------------------------------------------------------------
                                   1327 ;Allocation info for local variables in function 'putchar'
                                   1328 ;------------------------------------------------------------
                                   1329 ;c                         Allocated to registers r7 
                                   1330 ;------------------------------------------------------------
                           000000  1331 	G$putchar$0$0 ==.
                           000000  1332 	C$putget.h$18$0$0 ==.
                                   1333 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:18: void putchar(char c)
                                   1334 ;	-----------------------------------------
                                   1335 ;	 function putchar
                                   1336 ;	-----------------------------------------
      000082                       1337 _putchar:
                           000007  1338 	ar7 = 0x07
                           000006  1339 	ar6 = 0x06
                           000005  1340 	ar5 = 0x05
                           000004  1341 	ar4 = 0x04
                           000003  1342 	ar3 = 0x03
                           000002  1343 	ar2 = 0x02
                           000001  1344 	ar1 = 0x01
                           000000  1345 	ar0 = 0x00
      000082 AF 82            [24] 1346 	mov	r7,dpl
                           000002  1347 	C$putget.h$20$1$16 ==.
                                   1348 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:20: while(!TI0); 
      000084                       1349 00101$:
                           000002  1350 	C$putget.h$21$1$16 ==.
                                   1351 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:21: TI0=0;
      000084 10 99 02         [24] 1352 	jbc	_TI0,00112$
      000087 80 FB            [24] 1353 	sjmp	00101$
      000089                       1354 00112$:
                           000007  1355 	C$putget.h$22$1$16 ==.
                                   1356 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:22: SBUF0 = c;
      000089 8F 99            [24] 1357 	mov	_SBUF0,r7
                           000009  1358 	C$putget.h$23$1$16 ==.
                           000009  1359 	XG$putchar$0$0 ==.
      00008B 22               [24] 1360 	ret
                                   1361 ;------------------------------------------------------------
                                   1362 ;Allocation info for local variables in function 'getchar'
                                   1363 ;------------------------------------------------------------
                                   1364 ;c                         Allocated to registers 
                                   1365 ;------------------------------------------------------------
                           00000A  1366 	G$getchar$0$0 ==.
                           00000A  1367 	C$putget.h$28$1$16 ==.
                                   1368 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:28: char getchar(void)
                                   1369 ;	-----------------------------------------
                                   1370 ;	 function getchar
                                   1371 ;	-----------------------------------------
      00008C                       1372 _getchar:
                           00000A  1373 	C$putget.h$31$1$18 ==.
                                   1374 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:31: while(!RI0);
      00008C                       1375 00101$:
                           00000A  1376 	C$putget.h$32$1$18 ==.
                                   1377 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:32: RI0 =0;
      00008C 10 98 02         [24] 1378 	jbc	_RI0,00112$
      00008F 80 FB            [24] 1379 	sjmp	00101$
      000091                       1380 00112$:
                           00000F  1381 	C$putget.h$33$1$18 ==.
                                   1382 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:33: c = SBUF0;
      000091 E5 99            [12] 1383 	mov	a,_SBUF0
                           000011  1384 	C$putget.h$36$1$18 ==.
                                   1385 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part I - Voltmeter/putget.h:36: return SBUF0;
      000093 85 99 82         [24] 1386 	mov	dpl,_SBUF0
                           000014  1387 	C$putget.h$37$1$18 ==.
                           000014  1388 	XG$getchar$0$0 ==.
      000096 22               [24] 1389 	ret
                                   1390 ;------------------------------------------------------------
                                   1391 ;Allocation info for local variables in function 'main'
                                   1392 ;------------------------------------------------------------
                           000015  1393 	G$main$0$0 ==.
                           000015  1394 	C$voltmeter.c$35$1$18 ==.
                                   1395 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:35: void main (void)
                                   1396 ;	-----------------------------------------
                                   1397 ;	 function main
                                   1398 ;	-----------------------------------------
      000097                       1399 _main:
                           000015  1400 	C$voltmeter.c$38$1$28 ==.
                                   1401 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:38: SFRPAGE = CONFIG_PAGE;
      000097 75 84 0F         [24] 1402 	mov	_SFRPAGE,#0x0F
                           000018  1403 	C$voltmeter.c$39$1$28 ==.
                                   1404 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:39: SYSCLK_INIT();
      00009A 12 02 BB         [24] 1405 	lcall	_SYSCLK_INIT
                           00001B  1406 	C$voltmeter.c$40$1$28 ==.
                                   1407 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:40: Port_IO_Init();
      00009D 12 02 FE         [24] 1408 	lcall	_Port_IO_Init
                           00001E  1409 	C$voltmeter.c$41$1$28 ==.
                                   1410 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:41: Timer_Init();
      0000A0 12 02 DA         [24] 1411 	lcall	_Timer_Init
                           000021  1412 	C$voltmeter.c$42$1$28 ==.
                                   1413 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:42: UART_Init();
      0000A3 12 02 F0         [24] 1414 	lcall	_UART_Init
                           000024  1415 	C$voltmeter.c$43$1$28 ==.
                                   1416 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:43: ADC_INIT();
      0000A6 12 03 1C         [24] 1417 	lcall	_ADC_INIT
                           000027  1418 	C$voltmeter.c$44$1$28 ==.
                                   1419 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:44: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
      0000A9 75 84 00         [24] 1420 	mov	_SFRPAGE,#0x00
                           00002A  1421 	C$voltmeter.c$45$1$28 ==.
                                   1422 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:45: printf("\033[2J");
      0000AC 74 B3            [12] 1423 	mov	a,#___str_0
      0000AE C0 E0            [24] 1424 	push	acc
      0000B0 74 11            [12] 1425 	mov	a,#(___str_0 >> 8)
      0000B2 C0 E0            [24] 1426 	push	acc
      0000B4 74 80            [12] 1427 	mov	a,#0x80
      0000B6 C0 E0            [24] 1428 	push	acc
      0000B8 12 0A 82         [24] 1429 	lcall	_printf
      0000BB 15 81            [12] 1430 	dec	sp
      0000BD 15 81            [12] 1431 	dec	sp
      0000BF 15 81            [12] 1432 	dec	sp
                           00003F  1433 	C$voltmeter.c$46$1$28 ==.
                                   1434 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:46: printf("UART is working");
      0000C1 74 B8            [12] 1435 	mov	a,#___str_1
      0000C3 C0 E0            [24] 1436 	push	acc
      0000C5 74 11            [12] 1437 	mov	a,#(___str_1 >> 8)
      0000C7 C0 E0            [24] 1438 	push	acc
      0000C9 74 80            [12] 1439 	mov	a,#0x80
      0000CB C0 E0            [24] 1440 	push	acc
      0000CD 12 0A 82         [24] 1441 	lcall	_printf
      0000D0 15 81            [12] 1442 	dec	sp
      0000D2 15 81            [12] 1443 	dec	sp
      0000D4 15 81            [12] 1444 	dec	sp
                           000054  1445 	C$voltmeter.c$47$1$28 ==.
                                   1446 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:47: while(1)
      0000D6                       1447 00104$:
                           000054  1448 	C$voltmeter.c$49$2$29 ==.
                                   1449 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:49: SFRPAGE = LEGACY_PAGE;
      0000D6 75 84 00         [24] 1450 	mov	_SFRPAGE,#0x00
                           000057  1451 	C$voltmeter.c$50$2$29 ==.
                                   1452 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:50: if(!PB)
      0000D9 20 90 FA         [24] 1453 	jb	_PB,00104$
                           00005A  1454 	C$voltmeter.c$52$3$30 ==.
                                   1455 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:52: score(ADC_read());
      0000DC 12 00 E5         [24] 1456 	lcall	_ADC_read
      0000DF 12 00 FE         [24] 1457 	lcall	_score
      0000E2 80 F2            [24] 1458 	sjmp	00104$
                           000062  1459 	C$voltmeter.c$57$1$28 ==.
                           000062  1460 	XG$main$0$0 ==.
      0000E4 22               [24] 1461 	ret
                                   1462 ;------------------------------------------------------------
                                   1463 ;Allocation info for local variables in function 'ADC_read'
                                   1464 ;------------------------------------------------------------
                           000063  1465 	G$ADC_read$0$0 ==.
                           000063  1466 	C$voltmeter.c$59$1$28 ==.
                                   1467 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:59: unsigned int ADC_read()
                                   1468 ;	-----------------------------------------
                                   1469 ;	 function ADC_read
                                   1470 ;	-----------------------------------------
      0000E5                       1471 _ADC_read:
                           000063  1472 	C$voltmeter.c$61$1$31 ==.
                                   1473 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:61: AMX0SL = 0;//select pin
      0000E5 75 BB 00         [24] 1474 	mov	_AMX0SL,#0x00
                           000066  1475 	C$voltmeter.c$62$1$31 ==.
                                   1476 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:62: ADC0CN &= ~(0x20);// reset for reading
      0000E8 AF E8            [24] 1477 	mov	r7,_ADC0CN
      0000EA 74 DF            [12] 1478 	mov	a,#0xDF
      0000EC 5F               [12] 1479 	anl	a,r7
      0000ED F5 E8            [12] 1480 	mov	_ADC0CN,a
                           00006D  1481 	C$voltmeter.c$63$1$31 ==.
                                   1482 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:63: ADC0CN |= 0x10;
      0000EF 43 E8 10         [24] 1483 	orl	_ADC0CN,#0x10
                           000070  1484 	C$voltmeter.c$64$1$31 ==.
                                   1485 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:64: while((ADC0CN & 0x20)==0); // wait for conversion to finish
      0000F2                       1486 00101$:
      0000F2 E5 E8            [12] 1487 	mov	a,_ADC0CN
      0000F4 30 E5 FB         [24] 1488 	jnb	acc.5,00101$
                           000075  1489 	C$voltmeter.c$65$1$31 ==.
                                   1490 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:65: return ADC0;
      0000F7 85 BE 82         [24] 1491 	mov	dpl,((_ADC0 >> 0) & 0xFF)
      0000FA 85 BF 83         [24] 1492 	mov	dph,((_ADC0 >> 8) & 0xFF)
                           00007B  1493 	C$voltmeter.c$66$1$31 ==.
                           00007B  1494 	XG$ADC_read$0$0 ==.
      0000FD 22               [24] 1495 	ret
                                   1496 ;------------------------------------------------------------
                                   1497 ;Allocation info for local variables in function 'score'
                                   1498 ;------------------------------------------------------------
                                   1499 ;value                     Allocated to registers 
                                   1500 ;volts                     Allocated with name '_score_volts_1_33'
                                   1501 ;sloc0                     Allocated with name '_score_sloc0_1_0'
                                   1502 ;------------------------------------------------------------
                           00007C  1503 	G$score$0$0 ==.
                           00007C  1504 	C$voltmeter.c$67$1$31 ==.
                                   1505 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:67: void score(unsigned int value)
                                   1506 ;	-----------------------------------------
                                   1507 ;	 function score
                                   1508 ;	-----------------------------------------
      0000FE                       1509 _score:
                           00007C  1510 	C$voltmeter.c$70$1$33 ==.
                                   1511 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:70: volts = value*.0000366;
      0000FE 12 0A 03         [24] 1512 	lcall	___uint2fs
      000101 AC 82            [24] 1513 	mov	r4,dpl
      000103 AD 83            [24] 1514 	mov	r5,dph
      000105 AE F0            [24] 1515 	mov	r6,b
      000107 FF               [12] 1516 	mov	r7,a
      000108 C0 07            [24] 1517 	push	ar7
      00010A C0 06            [24] 1518 	push	ar6
      00010C C0 05            [24] 1519 	push	ar5
      00010E C0 04            [24] 1520 	push	ar4
      000110 C0 04            [24] 1521 	push	ar4
      000112 C0 05            [24] 1522 	push	ar5
      000114 C0 06            [24] 1523 	push	ar6
      000116 C0 07            [24] 1524 	push	ar7
      000118 90 82 F3         [24] 1525 	mov	dptr,#0x82F3
      00011B 75 F0 19         [24] 1526 	mov	b,#0x19
      00011E 74 38            [12] 1527 	mov	a,#0x38
      000120 12 07 AD         [24] 1528 	lcall	___fsmul
      000123 85 82 16         [24] 1529 	mov	_score_volts_1_33,dpl
      000126 85 83 17         [24] 1530 	mov	(_score_volts_1_33 + 1),dph
      000129 85 F0 18         [24] 1531 	mov	(_score_volts_1_33 + 2),b
      00012C F5 19            [12] 1532 	mov	(_score_volts_1_33 + 3),a
      00012E E5 81            [12] 1533 	mov	a,sp
      000130 24 FC            [12] 1534 	add	a,#0xfc
      000132 F5 81            [12] 1535 	mov	sp,a
                           0000B2  1536 	C$voltmeter.c$71$1$33 ==.
                                   1537 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:71: printf_fast_f("Current Voltage is: %d7.6 , %X \n\r",volts,volts);
      000134 C0 16            [24] 1538 	push	_score_volts_1_33
      000136 C0 17            [24] 1539 	push	(_score_volts_1_33 + 1)
      000138 C0 18            [24] 1540 	push	(_score_volts_1_33 + 2)
      00013A C0 19            [24] 1541 	push	(_score_volts_1_33 + 3)
      00013C C0 16            [24] 1542 	push	_score_volts_1_33
      00013E C0 17            [24] 1543 	push	(_score_volts_1_33 + 1)
      000140 C0 18            [24] 1544 	push	(_score_volts_1_33 + 2)
      000142 C0 19            [24] 1545 	push	(_score_volts_1_33 + 3)
      000144 74 C8            [12] 1546 	mov	a,#___str_2
      000146 C0 E0            [24] 1547 	push	acc
      000148 74 11            [12] 1548 	mov	a,#(___str_2 >> 8)
      00014A C0 E0            [24] 1549 	push	acc
      00014C 12 03 2C         [24] 1550 	lcall	_printf_fast_f
      00014F E5 81            [12] 1551 	mov	a,sp
      000151 24 F6            [12] 1552 	add	a,#0xf6
      000153 F5 81            [12] 1553 	mov	sp,a
                           0000D3  1554 	C$voltmeter.c$72$1$33 ==.
                                   1555 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:72: running = (running*trials + value)/(trials+1);
      000155 85 14 82         [24] 1556 	mov	dpl,_trials
      000158 85 15 83         [24] 1557 	mov	dph,(_trials + 1)
      00015B 12 09 F6         [24] 1558 	lcall	___sint2fs
      00015E A8 82            [24] 1559 	mov	r0,dpl
      000160 A9 83            [24] 1560 	mov	r1,dph
      000162 AA F0            [24] 1561 	mov	r2,b
      000164 FB               [12] 1562 	mov	r3,a
      000165 C0 00            [24] 1563 	push	ar0
      000167 C0 01            [24] 1564 	push	ar1
      000169 C0 02            [24] 1565 	push	ar2
      00016B C0 03            [24] 1566 	push	ar3
      00016D 85 08 82         [24] 1567 	mov	dpl,_running
      000170 85 09 83         [24] 1568 	mov	dph,(_running + 1)
      000173 85 0A F0         [24] 1569 	mov	b,(_running + 2)
      000176 E5 0B            [12] 1570 	mov	a,(_running + 3)
      000178 12 07 AD         [24] 1571 	lcall	___fsmul
      00017B A8 82            [24] 1572 	mov	r0,dpl
      00017D A9 83            [24] 1573 	mov	r1,dph
      00017F AA F0            [24] 1574 	mov	r2,b
      000181 FB               [12] 1575 	mov	r3,a
      000182 E5 81            [12] 1576 	mov	a,sp
      000184 24 FC            [12] 1577 	add	a,#0xfc
      000186 F5 81            [12] 1578 	mov	sp,a
      000188 D0 04            [24] 1579 	pop	ar4
      00018A D0 05            [24] 1580 	pop	ar5
      00018C D0 06            [24] 1581 	pop	ar6
      00018E D0 07            [24] 1582 	pop	ar7
      000190 C0 04            [24] 1583 	push	ar4
      000192 C0 05            [24] 1584 	push	ar5
      000194 C0 06            [24] 1585 	push	ar6
      000196 C0 07            [24] 1586 	push	ar7
      000198 88 82            [24] 1587 	mov	dpl,r0
      00019A 89 83            [24] 1588 	mov	dph,r1
      00019C 8A F0            [24] 1589 	mov	b,r2
      00019E EB               [12] 1590 	mov	a,r3
      00019F 12 09 54         [24] 1591 	lcall	___fsadd
      0001A2 85 82 1A         [24] 1592 	mov	_score_sloc0_1_0,dpl
      0001A5 85 83 1B         [24] 1593 	mov	(_score_sloc0_1_0 + 1),dph
      0001A8 85 F0 1C         [24] 1594 	mov	(_score_sloc0_1_0 + 2),b
      0001AB F5 1D            [12] 1595 	mov	(_score_sloc0_1_0 + 3),a
      0001AD E5 81            [12] 1596 	mov	a,sp
      0001AF 24 FC            [12] 1597 	add	a,#0xfc
      0001B1 F5 81            [12] 1598 	mov	sp,a
      0001B3 74 01            [12] 1599 	mov	a,#0x01
      0001B5 25 14            [12] 1600 	add	a,_trials
      0001B7 FA               [12] 1601 	mov	r2,a
      0001B8 E4               [12] 1602 	clr	a
      0001B9 35 15            [12] 1603 	addc	a,(_trials + 1)
      0001BB FB               [12] 1604 	mov	r3,a
      0001BC 8A 82            [24] 1605 	mov	dpl,r2
      0001BE 8B 83            [24] 1606 	mov	dph,r3
      0001C0 C0 03            [24] 1607 	push	ar3
      0001C2 C0 02            [24] 1608 	push	ar2
      0001C4 12 09 F6         [24] 1609 	lcall	___sint2fs
      0001C7 A8 82            [24] 1610 	mov	r0,dpl
      0001C9 A9 83            [24] 1611 	mov	r1,dph
      0001CB AE F0            [24] 1612 	mov	r6,b
      0001CD FF               [12] 1613 	mov	r7,a
      0001CE C0 00            [24] 1614 	push	ar0
      0001D0 C0 01            [24] 1615 	push	ar1
      0001D2 C0 06            [24] 1616 	push	ar6
      0001D4 C0 07            [24] 1617 	push	ar7
      0001D6 85 1A 82         [24] 1618 	mov	dpl,_score_sloc0_1_0
      0001D9 85 1B 83         [24] 1619 	mov	dph,(_score_sloc0_1_0 + 1)
      0001DC 85 1C F0         [24] 1620 	mov	b,(_score_sloc0_1_0 + 2)
      0001DF E5 1D            [12] 1621 	mov	a,(_score_sloc0_1_0 + 3)
      0001E1 12 10 90         [24] 1622 	lcall	___fsdiv
      0001E4 85 82 08         [24] 1623 	mov	_running,dpl
      0001E7 85 83 09         [24] 1624 	mov	(_running + 1),dph
      0001EA 85 F0 0A         [24] 1625 	mov	(_running + 2),b
      0001ED F5 0B            [12] 1626 	mov	(_running + 3),a
      0001EF E5 81            [12] 1627 	mov	a,sp
      0001F1 24 FC            [12] 1628 	add	a,#0xfc
      0001F3 F5 81            [12] 1629 	mov	sp,a
      0001F5 D0 02            [24] 1630 	pop	ar2
      0001F7 D0 03            [24] 1631 	pop	ar3
                           000177  1632 	C$voltmeter.c$73$1$33 ==.
                                   1633 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:73: trials ++;
      0001F9 8A 14            [24] 1634 	mov	_trials,r2
      0001FB 8B 15            [24] 1635 	mov	(_trials + 1),r3
                           00017B  1636 	C$voltmeter.c$74$1$33 ==.
                                   1637 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:74: if(volts<min){min = volts;}
      0001FD C0 0C            [24] 1638 	push	_min
      0001FF C0 0D            [24] 1639 	push	(_min + 1)
      000201 C0 0E            [24] 1640 	push	(_min + 2)
      000203 C0 0F            [24] 1641 	push	(_min + 3)
      000205 85 16 82         [24] 1642 	mov	dpl,_score_volts_1_33
      000208 85 17 83         [24] 1643 	mov	dph,(_score_volts_1_33 + 1)
      00020B 85 18 F0         [24] 1644 	mov	b,(_score_volts_1_33 + 2)
      00020E E5 19            [12] 1645 	mov	a,(_score_volts_1_33 + 3)
      000210 12 09 24         [24] 1646 	lcall	___fslt
      000213 AF 82            [24] 1647 	mov	r7,dpl
      000215 E5 81            [12] 1648 	mov	a,sp
      000217 24 FC            [12] 1649 	add	a,#0xfc
      000219 F5 81            [12] 1650 	mov	sp,a
      00021B EF               [12] 1651 	mov	a,r7
      00021C 60 0C            [24] 1652 	jz	00102$
      00021E 85 16 0C         [24] 1653 	mov	_min,_score_volts_1_33
      000221 85 17 0D         [24] 1654 	mov	(_min + 1),(_score_volts_1_33 + 1)
      000224 85 18 0E         [24] 1655 	mov	(_min + 2),(_score_volts_1_33 + 2)
      000227 85 19 0F         [24] 1656 	mov	(_min + 3),(_score_volts_1_33 + 3)
      00022A                       1657 00102$:
                           0001A8  1658 	C$voltmeter.c$75$1$33 ==.
                                   1659 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:75: if(volts>max){max = volts;}
      00022A C0 10            [24] 1660 	push	_max
      00022C C0 11            [24] 1661 	push	(_max + 1)
      00022E C0 12            [24] 1662 	push	(_max + 2)
      000230 C0 13            [24] 1663 	push	(_max + 3)
      000232 85 16 82         [24] 1664 	mov	dpl,_score_volts_1_33
      000235 85 17 83         [24] 1665 	mov	dph,(_score_volts_1_33 + 1)
      000238 85 18 F0         [24] 1666 	mov	b,(_score_volts_1_33 + 2)
      00023B E5 19            [12] 1667 	mov	a,(_score_volts_1_33 + 3)
      00023D 12 08 F4         [24] 1668 	lcall	___fsgt
      000240 AF 82            [24] 1669 	mov	r7,dpl
      000242 E5 81            [12] 1670 	mov	a,sp
      000244 24 FC            [12] 1671 	add	a,#0xfc
      000246 F5 81            [12] 1672 	mov	sp,a
      000248 EF               [12] 1673 	mov	a,r7
      000249 60 0C            [24] 1674 	jz	00104$
      00024B 85 16 10         [24] 1675 	mov	_max,_score_volts_1_33
      00024E 85 17 11         [24] 1676 	mov	(_max + 1),(_score_volts_1_33 + 1)
      000251 85 18 12         [24] 1677 	mov	(_max + 2),(_score_volts_1_33 + 2)
      000254 85 19 13         [24] 1678 	mov	(_max + 3),(_score_volts_1_33 + 3)
      000257                       1679 00104$:
                           0001D5  1680 	C$voltmeter.c$76$1$33 ==.
                                   1681 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:76: printf_fast_f("The Running Average is: %d7.6 , %X \n\r",running, running);
      000257 C0 08            [24] 1682 	push	_running
      000259 C0 09            [24] 1683 	push	(_running + 1)
      00025B C0 0A            [24] 1684 	push	(_running + 2)
      00025D C0 0B            [24] 1685 	push	(_running + 3)
      00025F C0 08            [24] 1686 	push	_running
      000261 C0 09            [24] 1687 	push	(_running + 1)
      000263 C0 0A            [24] 1688 	push	(_running + 2)
      000265 C0 0B            [24] 1689 	push	(_running + 3)
      000267 74 EA            [12] 1690 	mov	a,#___str_3
      000269 C0 E0            [24] 1691 	push	acc
      00026B 74 11            [12] 1692 	mov	a,#(___str_3 >> 8)
      00026D C0 E0            [24] 1693 	push	acc
      00026F 12 03 2C         [24] 1694 	lcall	_printf_fast_f
      000272 E5 81            [12] 1695 	mov	a,sp
      000274 24 F6            [12] 1696 	add	a,#0xf6
      000276 F5 81            [12] 1697 	mov	sp,a
                           0001F6  1698 	C$voltmeter.c$77$1$33 ==.
                                   1699 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:77: printf_fast_f("The Overall Minimum is: %d7.6 , %X \n\r",min,min);
      000278 C0 0C            [24] 1700 	push	_min
      00027A C0 0D            [24] 1701 	push	(_min + 1)
      00027C C0 0E            [24] 1702 	push	(_min + 2)
      00027E C0 0F            [24] 1703 	push	(_min + 3)
      000280 C0 0C            [24] 1704 	push	_min
      000282 C0 0D            [24] 1705 	push	(_min + 1)
      000284 C0 0E            [24] 1706 	push	(_min + 2)
      000286 C0 0F            [24] 1707 	push	(_min + 3)
      000288 74 10            [12] 1708 	mov	a,#___str_4
      00028A C0 E0            [24] 1709 	push	acc
      00028C 74 12            [12] 1710 	mov	a,#(___str_4 >> 8)
      00028E C0 E0            [24] 1711 	push	acc
      000290 12 03 2C         [24] 1712 	lcall	_printf_fast_f
      000293 E5 81            [12] 1713 	mov	a,sp
      000295 24 F6            [12] 1714 	add	a,#0xf6
      000297 F5 81            [12] 1715 	mov	sp,a
                           000217  1716 	C$voltmeter.c$78$1$33 ==.
                                   1717 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:78: printf_fast_f("The Overall Maximum is: %d7.6 , %X \n\r",max,max);
      000299 C0 10            [24] 1718 	push	_max
      00029B C0 11            [24] 1719 	push	(_max + 1)
      00029D C0 12            [24] 1720 	push	(_max + 2)
      00029F C0 13            [24] 1721 	push	(_max + 3)
      0002A1 C0 10            [24] 1722 	push	_max
      0002A3 C0 11            [24] 1723 	push	(_max + 1)
      0002A5 C0 12            [24] 1724 	push	(_max + 2)
      0002A7 C0 13            [24] 1725 	push	(_max + 3)
      0002A9 74 36            [12] 1726 	mov	a,#___str_5
      0002AB C0 E0            [24] 1727 	push	acc
      0002AD 74 12            [12] 1728 	mov	a,#(___str_5 >> 8)
      0002AF C0 E0            [24] 1729 	push	acc
      0002B1 12 03 2C         [24] 1730 	lcall	_printf_fast_f
      0002B4 E5 81            [12] 1731 	mov	a,sp
      0002B6 24 F6            [12] 1732 	add	a,#0xf6
      0002B8 F5 81            [12] 1733 	mov	sp,a
                           000238  1734 	C$voltmeter.c$80$1$33 ==.
                           000238  1735 	XG$score$0$0 ==.
      0002BA 22               [24] 1736 	ret
                                   1737 ;------------------------------------------------------------
                                   1738 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1739 ;------------------------------------------------------------
                                   1740 ;j                         Allocated to registers 
                                   1741 ;------------------------------------------------------------
                           000239  1742 	G$SYSCLK_INIT$0$0 ==.
                           000239  1743 	C$voltmeter.c$82$1$33 ==.
                                   1744 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:82: void SYSCLK_INIT()
                                   1745 ;	-----------------------------------------
                                   1746 ;	 function SYSCLK_INIT
                                   1747 ;	-----------------------------------------
      0002BB                       1748 _SYSCLK_INIT:
                           000239  1749 	C$voltmeter.c$85$1$36 ==.
                                   1750 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:85: SFRPAGE = CONFIG_PAGE;
      0002BB 75 84 0F         [24] 1751 	mov	_SFRPAGE,#0x0F
                           00023C  1752 	C$voltmeter.c$86$1$36 ==.
                                   1753 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:86: OSCXCN  = 0x67;             // Start external oscillator
      0002BE 75 8C 67         [24] 1754 	mov	_OSCXCN,#0x67
                           00023F  1755 	C$voltmeter.c$87$1$36 ==.
                                   1756 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:87: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      0002C1 7E 00            [12] 1757 	mov	r6,#0x00
      0002C3 7F 01            [12] 1758 	mov	r7,#0x01
      0002C5                       1759 00107$:
      0002C5 1E               [12] 1760 	dec	r6
      0002C6 BE FF 01         [24] 1761 	cjne	r6,#0xFF,00121$
      0002C9 1F               [12] 1762 	dec	r7
      0002CA                       1763 00121$:
      0002CA EE               [12] 1764 	mov	a,r6
      0002CB 4F               [12] 1765 	orl	a,r7
      0002CC 70 F7            [24] 1766 	jnz	00107$
                           00024C  1767 	C$voltmeter.c$88$1$36 ==.
                                   1768 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:88: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      0002CE                       1769 00102$:
      0002CE E5 8C            [12] 1770 	mov	a,_OSCXCN
      0002D0 30 E7 FB         [24] 1771 	jnb	acc.7,00102$
                           000251  1772 	C$voltmeter.c$89$1$36 ==.
                                   1773 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:89: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      0002D3 75 97 01         [24] 1774 	mov	_CLKSEL,#0x01
                           000254  1775 	C$voltmeter.c$90$1$36 ==.
                                   1776 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:90: OSCICN  = 0x00;             // Disable the internal oscillator.
      0002D6 75 8A 00         [24] 1777 	mov	_OSCICN,#0x00
                           000257  1778 	C$voltmeter.c$91$1$36 ==.
                           000257  1779 	XG$SYSCLK_INIT$0$0 ==.
      0002D9 22               [24] 1780 	ret
                                   1781 ;------------------------------------------------------------
                                   1782 ;Allocation info for local variables in function 'Timer_Init'
                                   1783 ;------------------------------------------------------------
                           000258  1784 	G$Timer_Init$0$0 ==.
                           000258  1785 	C$voltmeter.c$93$1$36 ==.
                                   1786 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:93: void Timer_Init()
                                   1787 ;	-----------------------------------------
                                   1788 ;	 function Timer_Init
                                   1789 ;	-----------------------------------------
      0002DA                       1790 _Timer_Init:
                           000258  1791 	C$voltmeter.c$95$1$37 ==.
                                   1792 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:95: SFRPAGE   = TMR2_PAGE;
      0002DA 75 84 00         [24] 1793 	mov	_SFRPAGE,#0x00
                           00025B  1794 	C$voltmeter.c$96$1$37 ==.
                                   1795 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:96: TMR2CN    = 0x04;
      0002DD 75 C8 04         [24] 1796 	mov	_TMR2CN,#0x04
                           00025E  1797 	C$voltmeter.c$97$1$37 ==.
                                   1798 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:97: TMR2CF    = 0x08;
      0002E0 75 C9 08         [24] 1799 	mov	_TMR2CF,#0x08
                           000261  1800 	C$voltmeter.c$98$1$37 ==.
                                   1801 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:98: TMR2H	  = 0xFF;
      0002E3 75 CD FF         [24] 1802 	mov	_TMR2H,#0xFF
                           000264  1803 	C$voltmeter.c$99$1$37 ==.
                                   1804 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:99: TMR2L 	  = 0x70;
      0002E6 75 CC 70         [24] 1805 	mov	_TMR2L,#0x70
                           000267  1806 	C$voltmeter.c$100$1$37 ==.
                                   1807 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:100: RCAP2L    = 0x70;
      0002E9 75 CA 70         [24] 1808 	mov	_RCAP2L,#0x70
                           00026A  1809 	C$voltmeter.c$101$1$37 ==.
                                   1810 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:101: RCAP2H    = 0xFF;
      0002EC 75 CB FF         [24] 1811 	mov	_RCAP2H,#0xFF
                           00026D  1812 	C$voltmeter.c$102$1$37 ==.
                           00026D  1813 	XG$Timer_Init$0$0 ==.
      0002EF 22               [24] 1814 	ret
                                   1815 ;------------------------------------------------------------
                                   1816 ;Allocation info for local variables in function 'UART_Init'
                                   1817 ;------------------------------------------------------------
                           00026E  1818 	G$UART_Init$0$0 ==.
                           00026E  1819 	C$voltmeter.c$104$1$37 ==.
                                   1820 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:104: void UART_Init()
                                   1821 ;	-----------------------------------------
                                   1822 ;	 function UART_Init
                                   1823 ;	-----------------------------------------
      0002F0                       1824 _UART_Init:
                           00026E  1825 	C$voltmeter.c$106$1$38 ==.
                                   1826 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:106: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      0002F0 75 84 00         [24] 1827 	mov	_SFRPAGE,#0x00
                           000271  1828 	C$voltmeter.c$107$1$38 ==.
                                   1829 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:107: TR2		  = 1;//Start Timer 2
      0002F3 D2 CA            [12] 1830 	setb	_TR2
                           000273  1831 	C$voltmeter.c$108$1$38 ==.
                                   1832 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:108: SCON0     = 0x50;
      0002F5 75 98 50         [24] 1833 	mov	_SCON0,#0x50
                           000276  1834 	C$voltmeter.c$109$1$38 ==.
                                   1835 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:109: SSTA0   = 0x15;
      0002F8 75 91 15         [24] 1836 	mov	_SSTA0,#0x15
                           000279  1837 	C$voltmeter.c$110$1$38 ==.
                                   1838 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:110: TI0		  = 1; // Indicate TX0 is ready
      0002FB D2 99            [12] 1839 	setb	_TI0
                           00027B  1840 	C$voltmeter.c$111$1$38 ==.
                           00027B  1841 	XG$UART_Init$0$0 ==.
      0002FD 22               [24] 1842 	ret
                                   1843 ;------------------------------------------------------------
                                   1844 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1845 ;------------------------------------------------------------
                           00027C  1846 	G$Port_IO_Init$0$0 ==.
                           00027C  1847 	C$voltmeter.c$113$1$38 ==.
                                   1848 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:113: void Port_IO_Init()
                                   1849 ;	-----------------------------------------
                                   1850 ;	 function Port_IO_Init
                                   1851 ;	-----------------------------------------
      0002FE                       1852 _Port_IO_Init:
                           00027C  1853 	C$voltmeter.c$115$1$39 ==.
                                   1854 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:115: SFRPAGE   = CONFIG_PAGE;
      0002FE 75 84 0F         [24] 1855 	mov	_SFRPAGE,#0x0F
                           00027F  1856 	C$voltmeter.c$116$1$39 ==.
                                   1857 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:116: WDTCN   = 0xDE;             // Disable watchdog timer.
      000301 75 FF DE         [24] 1858 	mov	_WDTCN,#0xDE
                           000282  1859 	C$voltmeter.c$117$1$39 ==.
                                   1860 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:117: WDTCN   = 0xAD;
      000304 75 FF AD         [24] 1861 	mov	_WDTCN,#0xAD
                           000285  1862 	C$voltmeter.c$118$1$39 ==.
                                   1863 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:118: XBR0 = 0x04; // enable UART0
      000307 75 E1 04         [24] 1864 	mov	_XBR0,#0x04
                           000288  1865 	C$voltmeter.c$119$1$39 ==.
                                   1866 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:119: XBR2 = 0x40;//enable crossbar
      00030A 75 E3 40         [24] 1867 	mov	_XBR2,#0x40
                           00028B  1868 	C$voltmeter.c$121$1$39 ==.
                                   1869 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:121: P0MDOUT = 0x01;
      00030D 75 A4 01         [24] 1870 	mov	_P0MDOUT,#0x01
                           00028E  1871 	C$voltmeter.c$123$1$39 ==.
                                   1872 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:123: P0 = 0x02;
      000310 75 80 02         [24] 1873 	mov	_P0,#0x02
                           000291  1874 	C$voltmeter.c$126$1$39 ==.
                                   1875 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:126: P1MDOUT = 0x00;
      000313 75 A5 00         [24] 1876 	mov	_P1MDOUT,#0x00
                           000294  1877 	C$voltmeter.c$127$1$39 ==.
                                   1878 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:127: P1 = 0x01; 
      000316 75 90 01         [24] 1879 	mov	_P1,#0x01
                           000297  1880 	C$voltmeter.c$130$1$39 ==.
                                   1881 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:130: EA = 1; //enable global interrupts
      000319 D2 AF            [12] 1882 	setb	_EA
                           000299  1883 	C$voltmeter.c$131$1$39 ==.
                           000299  1884 	XG$Port_IO_Init$0$0 ==.
      00031B 22               [24] 1885 	ret
                                   1886 ;------------------------------------------------------------
                                   1887 ;Allocation info for local variables in function 'ADC_INIT'
                                   1888 ;------------------------------------------------------------
                           00029A  1889 	G$ADC_INIT$0$0 ==.
                           00029A  1890 	C$voltmeter.c$132$1$39 ==.
                                   1891 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:132: void ADC_INIT()
                                   1892 ;	-----------------------------------------
                                   1893 ;	 function ADC_INIT
                                   1894 ;	-----------------------------------------
      00031C                       1895 _ADC_INIT:
                           00029A  1896 	C$voltmeter.c$134$1$40 ==.
                                   1897 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:134: SFRPAGE = ADC0_PAGE;
      00031C 75 84 00         [24] 1898 	mov	_SFRPAGE,#0x00
                           00029D  1899 	C$voltmeter.c$135$1$40 ==.
                                   1900 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:135: REF0CN = 0x03;
      00031F 75 D1 03         [24] 1901 	mov	_REF0CN,#0x03
                           0002A0  1902 	C$voltmeter.c$136$1$40 ==.
                                   1903 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:136: AMX0CF = 0x00;
      000322 75 BA 00         [24] 1904 	mov	_AMX0CF,#0x00
                           0002A3  1905 	C$voltmeter.c$137$1$40 ==.
                                   1906 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:137: ADC0CF = 0x40;
      000325 75 BC 40         [24] 1907 	mov	_ADC0CF,#0x40
                           0002A6  1908 	C$voltmeter.c$138$1$40 ==.
                                   1909 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part I - Voltmeter\voltmeter.c:138: ADC0CN = 0x80; // enable ADC conversion
      000328 75 E8 80         [24] 1910 	mov	_ADC0CN,#0x80
                           0002A9  1911 	C$voltmeter.c$139$1$40 ==.
                           0002A9  1912 	XG$ADC_INIT$0$0 ==.
      00032B 22               [24] 1913 	ret
                                   1914 	.area CSEG    (CODE)
                                   1915 	.area CONST   (CODE)
                           000000  1916 Fvoltmeter$__str_0$0$0 == .
      0011B3                       1917 ___str_0:
      0011B3 1B                    1918 	.db 0x1B
      0011B4 5B 32 4A              1919 	.ascii "[2J"
      0011B7 00                    1920 	.db 0x00
                           000005  1921 Fvoltmeter$__str_1$0$0 == .
      0011B8                       1922 ___str_1:
      0011B8 55 41 52 54 20 69 73  1923 	.ascii "UART is working"
             20 77 6F 72 6B 69 6E
             67
      0011C7 00                    1924 	.db 0x00
                           000015  1925 Fvoltmeter$__str_2$0$0 == .
      0011C8                       1926 ___str_2:
      0011C8 43 75 72 72 65 6E 74  1927 	.ascii "Current Voltage is: %d7.6 , %X "
             20 56 6F 6C 74 61 67
             65 20 69 73 3A 20 25
             64 37 2E 36 20 2C 20
             25 58 20
      0011E7 0A                    1928 	.db 0x0A
      0011E8 0D                    1929 	.db 0x0D
      0011E9 00                    1930 	.db 0x00
                           000037  1931 Fvoltmeter$__str_3$0$0 == .
      0011EA                       1932 ___str_3:
      0011EA 54 68 65 20 52 75 6E  1933 	.ascii "The Running Average is: %d7.6 , %X "
             6E 69 6E 67 20 41 76
             65 72 61 67 65 20 69
             73 3A 20 25 64 37 2E
             36 20 2C 20 25 58 20
      00120D 0A                    1934 	.db 0x0A
      00120E 0D                    1935 	.db 0x0D
      00120F 00                    1936 	.db 0x00
                           00005D  1937 Fvoltmeter$__str_4$0$0 == .
      001210                       1938 ___str_4:
      001210 54 68 65 20 4F 76 65  1939 	.ascii "The Overall Minimum is: %d7.6 , %X "
             72 61 6C 6C 20 4D 69
             6E 69 6D 75 6D 20 69
             73 3A 20 25 64 37 2E
             36 20 2C 20 25 58 20
      001233 0A                    1940 	.db 0x0A
      001234 0D                    1941 	.db 0x0D
      001235 00                    1942 	.db 0x00
                           000083  1943 Fvoltmeter$__str_5$0$0 == .
      001236                       1944 ___str_5:
      001236 54 68 65 20 4F 76 65  1945 	.ascii "The Overall Maximum is: %d7.6 , %X "
             72 61 6C 6C 20 4D 61
             78 69 6D 75 6D 20 69
             73 3A 20 25 64 37 2E
             36 20 2C 20 25 58 20
      001259 0A                    1946 	.db 0x0A
      00125A 0D                    1947 	.db 0x0D
      00125B 00                    1948 	.db 0x00
                                   1949 	.area XINIT   (CODE)
                                   1950 	.area CABS    (ABS,CODE)
