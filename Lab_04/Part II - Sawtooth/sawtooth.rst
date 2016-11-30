                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.4.0 #8981 (Apr  5 2014) (MINGW32)
                                      4 ; This file was generated Mon Oct 24 18:31:46 2016
                                      5 ;--------------------------------------------------------
                                      6 	.module sawtooth
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
                                    398 	.globl _main
                                    399 	.globl _ADC_read
                                    400 	.globl _SYSCLK_INIT
                                    401 	.globl _Timer_Init
                                    402 	.globl _UART_Init
                                    403 	.globl _Port_IO_Init
                                    404 	.globl _DAC_INIT
                                    405 ;--------------------------------------------------------
                                    406 ; special function registers
                                    407 ;--------------------------------------------------------
                                    408 	.area RSEG    (ABS,DATA)
      000000                        409 	.org 0x0000
                           000080   410 G$P0$0$0 == 0x0080
                           000080   411 _P0	=	0x0080
                           000081   412 G$SP$0$0 == 0x0081
                           000081   413 _SP	=	0x0081
                           000082   414 G$DPL$0$0 == 0x0082
                           000082   415 _DPL	=	0x0082
                           000083   416 G$DPH$0$0 == 0x0083
                           000083   417 _DPH	=	0x0083
                           000084   418 G$SFRPAGE$0$0 == 0x0084
                           000084   419 _SFRPAGE	=	0x0084
                           000085   420 G$SFRNEXT$0$0 == 0x0085
                           000085   421 _SFRNEXT	=	0x0085
                           000086   422 G$SFRLAST$0$0 == 0x0086
                           000086   423 _SFRLAST	=	0x0086
                           000087   424 G$PCON$0$0 == 0x0087
                           000087   425 _PCON	=	0x0087
                           000090   426 G$P1$0$0 == 0x0090
                           000090   427 _P1	=	0x0090
                           0000A0   428 G$P2$0$0 == 0x00a0
                           0000A0   429 _P2	=	0x00a0
                           0000A8   430 G$IE$0$0 == 0x00a8
                           0000A8   431 _IE	=	0x00a8
                           0000B0   432 G$P3$0$0 == 0x00b0
                           0000B0   433 _P3	=	0x00b0
                           0000B1   434 G$PSBANK$0$0 == 0x00b1
                           0000B1   435 _PSBANK	=	0x00b1
                           0000B8   436 G$IP$0$0 == 0x00b8
                           0000B8   437 _IP	=	0x00b8
                           0000D0   438 G$PSW$0$0 == 0x00d0
                           0000D0   439 _PSW	=	0x00d0
                           0000E0   440 G$ACC$0$0 == 0x00e0
                           0000E0   441 _ACC	=	0x00e0
                           0000E6   442 G$EIE1$0$0 == 0x00e6
                           0000E6   443 _EIE1	=	0x00e6
                           0000E7   444 G$EIE2$0$0 == 0x00e7
                           0000E7   445 _EIE2	=	0x00e7
                           0000F0   446 G$B$0$0 == 0x00f0
                           0000F0   447 _B	=	0x00f0
                           0000F6   448 G$EIP1$0$0 == 0x00f6
                           0000F6   449 _EIP1	=	0x00f6
                           0000F7   450 G$EIP2$0$0 == 0x00f7
                           0000F7   451 _EIP2	=	0x00f7
                           0000FF   452 G$WDTCN$0$0 == 0x00ff
                           0000FF   453 _WDTCN	=	0x00ff
                           000088   454 G$TCON$0$0 == 0x0088
                           000088   455 _TCON	=	0x0088
                           000089   456 G$TMOD$0$0 == 0x0089
                           000089   457 _TMOD	=	0x0089
                           00008A   458 G$TL0$0$0 == 0x008a
                           00008A   459 _TL0	=	0x008a
                           00008B   460 G$TL1$0$0 == 0x008b
                           00008B   461 _TL1	=	0x008b
                           00008C   462 G$TH0$0$0 == 0x008c
                           00008C   463 _TH0	=	0x008c
                           00008D   464 G$TH1$0$0 == 0x008d
                           00008D   465 _TH1	=	0x008d
                           00008E   466 G$CKCON$0$0 == 0x008e
                           00008E   467 _CKCON	=	0x008e
                           00008F   468 G$PSCTL$0$0 == 0x008f
                           00008F   469 _PSCTL	=	0x008f
                           000091   470 G$SSTA0$0$0 == 0x0091
                           000091   471 _SSTA0	=	0x0091
                           000098   472 G$SCON0$0$0 == 0x0098
                           000098   473 _SCON0	=	0x0098
                           000098   474 G$SCON$0$0 == 0x0098
                           000098   475 _SCON	=	0x0098
                           000099   476 G$SBUF0$0$0 == 0x0099
                           000099   477 _SBUF0	=	0x0099
                           000099   478 G$SBUF$0$0 == 0x0099
                           000099   479 _SBUF	=	0x0099
                           00009A   480 G$SPI0CFG$0$0 == 0x009a
                           00009A   481 _SPI0CFG	=	0x009a
                           00009B   482 G$SPI0DAT$0$0 == 0x009b
                           00009B   483 _SPI0DAT	=	0x009b
                           00009D   484 G$SPI0CKR$0$0 == 0x009d
                           00009D   485 _SPI0CKR	=	0x009d
                           0000A1   486 G$EMI0TC$0$0 == 0x00a1
                           0000A1   487 _EMI0TC	=	0x00a1
                           0000A2   488 G$EMI0CN$0$0 == 0x00a2
                           0000A2   489 _EMI0CN	=	0x00a2
                           0000A2   490 G$_XPAGE$0$0 == 0x00a2
                           0000A2   491 __XPAGE	=	0x00a2
                           0000A3   492 G$EMI0CF$0$0 == 0x00a3
                           0000A3   493 _EMI0CF	=	0x00a3
                           0000A9   494 G$SADDR0$0$0 == 0x00a9
                           0000A9   495 _SADDR0	=	0x00a9
                           0000B7   496 G$FLSCL$0$0 == 0x00b7
                           0000B7   497 _FLSCL	=	0x00b7
                           0000B9   498 G$SADEN0$0$0 == 0x00b9
                           0000B9   499 _SADEN0	=	0x00b9
                           0000BA   500 G$AMX0CF$0$0 == 0x00ba
                           0000BA   501 _AMX0CF	=	0x00ba
                           0000BB   502 G$AMX0SL$0$0 == 0x00bb
                           0000BB   503 _AMX0SL	=	0x00bb
                           0000BC   504 G$ADC0CF$0$0 == 0x00bc
                           0000BC   505 _ADC0CF	=	0x00bc
                           0000BE   506 G$ADC0L$0$0 == 0x00be
                           0000BE   507 _ADC0L	=	0x00be
                           0000BF   508 G$ADC0H$0$0 == 0x00bf
                           0000BF   509 _ADC0H	=	0x00bf
                           0000C0   510 G$SMB0CN$0$0 == 0x00c0
                           0000C0   511 _SMB0CN	=	0x00c0
                           0000C1   512 G$SMB0STA$0$0 == 0x00c1
                           0000C1   513 _SMB0STA	=	0x00c1
                           0000C2   514 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   515 _SMB0DAT	=	0x00c2
                           0000C3   516 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   517 _SMB0ADR	=	0x00c3
                           0000C4   518 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   519 _ADC0GTL	=	0x00c4
                           0000C5   520 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   521 _ADC0GTH	=	0x00c5
                           0000C6   522 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   523 _ADC0LTL	=	0x00c6
                           0000C7   524 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   525 _ADC0LTH	=	0x00c7
                           0000C8   526 G$TMR2CN$0$0 == 0x00c8
                           0000C8   527 _TMR2CN	=	0x00c8
                           0000C9   528 G$TMR2CF$0$0 == 0x00c9
                           0000C9   529 _TMR2CF	=	0x00c9
                           0000CA   530 G$RCAP2L$0$0 == 0x00ca
                           0000CA   531 _RCAP2L	=	0x00ca
                           0000CB   532 G$RCAP2H$0$0 == 0x00cb
                           0000CB   533 _RCAP2H	=	0x00cb
                           0000CC   534 G$TMR2L$0$0 == 0x00cc
                           0000CC   535 _TMR2L	=	0x00cc
                           0000CC   536 G$TL2$0$0 == 0x00cc
                           0000CC   537 _TL2	=	0x00cc
                           0000CD   538 G$TMR2H$0$0 == 0x00cd
                           0000CD   539 _TMR2H	=	0x00cd
                           0000CD   540 G$TH2$0$0 == 0x00cd
                           0000CD   541 _TH2	=	0x00cd
                           0000CF   542 G$SMB0CR$0$0 == 0x00cf
                           0000CF   543 _SMB0CR	=	0x00cf
                           0000D1   544 G$REF0CN$0$0 == 0x00d1
                           0000D1   545 _REF0CN	=	0x00d1
                           0000D2   546 G$DAC0L$0$0 == 0x00d2
                           0000D2   547 _DAC0L	=	0x00d2
                           0000D3   548 G$DAC0H$0$0 == 0x00d3
                           0000D3   549 _DAC0H	=	0x00d3
                           0000D4   550 G$DAC0CN$0$0 == 0x00d4
                           0000D4   551 _DAC0CN	=	0x00d4
                           0000D8   552 G$PCA0CN$0$0 == 0x00d8
                           0000D8   553 _PCA0CN	=	0x00d8
                           0000D9   554 G$PCA0MD$0$0 == 0x00d9
                           0000D9   555 _PCA0MD	=	0x00d9
                           0000DA   556 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   557 _PCA0CPM0	=	0x00da
                           0000DB   558 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   559 _PCA0CPM1	=	0x00db
                           0000DC   560 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   561 _PCA0CPM2	=	0x00dc
                           0000DD   562 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   563 _PCA0CPM3	=	0x00dd
                           0000DE   564 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   565 _PCA0CPM4	=	0x00de
                           0000DF   566 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   567 _PCA0CPM5	=	0x00df
                           0000E1   568 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   569 _PCA0CPL5	=	0x00e1
                           0000E2   570 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   571 _PCA0CPH5	=	0x00e2
                           0000E8   572 G$ADC0CN$0$0 == 0x00e8
                           0000E8   573 _ADC0CN	=	0x00e8
                           0000E9   574 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   575 _PCA0CPL2	=	0x00e9
                           0000EA   576 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   577 _PCA0CPH2	=	0x00ea
                           0000EB   578 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   579 _PCA0CPL3	=	0x00eb
                           0000EC   580 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   581 _PCA0CPH3	=	0x00ec
                           0000ED   582 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   583 _PCA0CPL4	=	0x00ed
                           0000EE   584 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   585 _PCA0CPH4	=	0x00ee
                           0000EF   586 G$RSTSRC$0$0 == 0x00ef
                           0000EF   587 _RSTSRC	=	0x00ef
                           0000F8   588 G$SPI0CN$0$0 == 0x00f8
                           0000F8   589 _SPI0CN	=	0x00f8
                           0000F9   590 G$PCA0L$0$0 == 0x00f9
                           0000F9   591 _PCA0L	=	0x00f9
                           0000FA   592 G$PCA0H$0$0 == 0x00fa
                           0000FA   593 _PCA0H	=	0x00fa
                           0000FB   594 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   595 _PCA0CPL0	=	0x00fb
                           0000FC   596 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   597 _PCA0CPH0	=	0x00fc
                           0000FD   598 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   599 _PCA0CPL1	=	0x00fd
                           0000FE   600 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   601 _PCA0CPH1	=	0x00fe
                           000088   602 G$CPT0CN$0$0 == 0x0088
                           000088   603 _CPT0CN	=	0x0088
                           000089   604 G$CPT0MD$0$0 == 0x0089
                           000089   605 _CPT0MD	=	0x0089
                           000098   606 G$SCON1$0$0 == 0x0098
                           000098   607 _SCON1	=	0x0098
                           000099   608 G$SBUF1$0$0 == 0x0099
                           000099   609 _SBUF1	=	0x0099
                           0000C8   610 G$TMR3CN$0$0 == 0x00c8
                           0000C8   611 _TMR3CN	=	0x00c8
                           0000C9   612 G$TMR3CF$0$0 == 0x00c9
                           0000C9   613 _TMR3CF	=	0x00c9
                           0000CA   614 G$RCAP3L$0$0 == 0x00ca
                           0000CA   615 _RCAP3L	=	0x00ca
                           0000CB   616 G$RCAP3H$0$0 == 0x00cb
                           0000CB   617 _RCAP3H	=	0x00cb
                           0000CC   618 G$TMR3L$0$0 == 0x00cc
                           0000CC   619 _TMR3L	=	0x00cc
                           0000CD   620 G$TMR3H$0$0 == 0x00cd
                           0000CD   621 _TMR3H	=	0x00cd
                           0000D2   622 G$DAC1L$0$0 == 0x00d2
                           0000D2   623 _DAC1L	=	0x00d2
                           0000D3   624 G$DAC1H$0$0 == 0x00d3
                           0000D3   625 _DAC1H	=	0x00d3
                           0000D4   626 G$DAC1CN$0$0 == 0x00d4
                           0000D4   627 _DAC1CN	=	0x00d4
                           000088   628 G$CPT1CN$0$0 == 0x0088
                           000088   629 _CPT1CN	=	0x0088
                           000089   630 G$CPT1MD$0$0 == 0x0089
                           000089   631 _CPT1MD	=	0x0089
                           0000BA   632 G$AMX2CF$0$0 == 0x00ba
                           0000BA   633 _AMX2CF	=	0x00ba
                           0000BB   634 G$AMX2SL$0$0 == 0x00bb
                           0000BB   635 _AMX2SL	=	0x00bb
                           0000BC   636 G$ADC2CF$0$0 == 0x00bc
                           0000BC   637 _ADC2CF	=	0x00bc
                           0000BE   638 G$ADC2$0$0 == 0x00be
                           0000BE   639 _ADC2	=	0x00be
                           0000C4   640 G$ADC2GT$0$0 == 0x00c4
                           0000C4   641 _ADC2GT	=	0x00c4
                           0000C6   642 G$ADC2LT$0$0 == 0x00c6
                           0000C6   643 _ADC2LT	=	0x00c6
                           0000C8   644 G$TMR4CN$0$0 == 0x00c8
                           0000C8   645 _TMR4CN	=	0x00c8
                           0000C9   646 G$TMR4CF$0$0 == 0x00c9
                           0000C9   647 _TMR4CF	=	0x00c9
                           0000CA   648 G$RCAP4L$0$0 == 0x00ca
                           0000CA   649 _RCAP4L	=	0x00ca
                           0000CB   650 G$RCAP4H$0$0 == 0x00cb
                           0000CB   651 _RCAP4H	=	0x00cb
                           0000CC   652 G$TMR4L$0$0 == 0x00cc
                           0000CC   653 _TMR4L	=	0x00cc
                           0000CD   654 G$TMR4H$0$0 == 0x00cd
                           0000CD   655 _TMR4H	=	0x00cd
                           0000E8   656 G$ADC2CN$0$0 == 0x00e8
                           0000E8   657 _ADC2CN	=	0x00e8
                           000091   658 G$MAC0BL$0$0 == 0x0091
                           000091   659 _MAC0BL	=	0x0091
                           000092   660 G$MAC0BH$0$0 == 0x0092
                           000092   661 _MAC0BH	=	0x0092
                           000093   662 G$MAC0ACC0$0$0 == 0x0093
                           000093   663 _MAC0ACC0	=	0x0093
                           000094   664 G$MAC0ACC1$0$0 == 0x0094
                           000094   665 _MAC0ACC1	=	0x0094
                           000095   666 G$MAC0ACC2$0$0 == 0x0095
                           000095   667 _MAC0ACC2	=	0x0095
                           000096   668 G$MAC0ACC3$0$0 == 0x0096
                           000096   669 _MAC0ACC3	=	0x0096
                           000097   670 G$MAC0OVR$0$0 == 0x0097
                           000097   671 _MAC0OVR	=	0x0097
                           0000C0   672 G$MAC0STA$0$0 == 0x00c0
                           0000C0   673 _MAC0STA	=	0x00c0
                           0000C1   674 G$MAC0AL$0$0 == 0x00c1
                           0000C1   675 _MAC0AL	=	0x00c1
                           0000C2   676 G$MAC0AH$0$0 == 0x00c2
                           0000C2   677 _MAC0AH	=	0x00c2
                           0000C3   678 G$MAC0CF$0$0 == 0x00c3
                           0000C3   679 _MAC0CF	=	0x00c3
                           0000CE   680 G$MAC0RNDL$0$0 == 0x00ce
                           0000CE   681 _MAC0RNDL	=	0x00ce
                           0000CF   682 G$MAC0RNDH$0$0 == 0x00cf
                           0000CF   683 _MAC0RNDH	=	0x00cf
                           000088   684 G$FLSTAT$0$0 == 0x0088
                           000088   685 _FLSTAT	=	0x0088
                           000089   686 G$PLL0CN$0$0 == 0x0089
                           000089   687 _PLL0CN	=	0x0089
                           00008A   688 G$OSCICN$0$0 == 0x008a
                           00008A   689 _OSCICN	=	0x008a
                           00008B   690 G$OSCICL$0$0 == 0x008b
                           00008B   691 _OSCICL	=	0x008b
                           00008C   692 G$OSCXCN$0$0 == 0x008c
                           00008C   693 _OSCXCN	=	0x008c
                           00008D   694 G$PLL0DIV$0$0 == 0x008d
                           00008D   695 _PLL0DIV	=	0x008d
                           00008E   696 G$PLL0MUL$0$0 == 0x008e
                           00008E   697 _PLL0MUL	=	0x008e
                           00008F   698 G$PLL0FLT$0$0 == 0x008f
                           00008F   699 _PLL0FLT	=	0x008f
                           000096   700 G$SFRPGCN$0$0 == 0x0096
                           000096   701 _SFRPGCN	=	0x0096
                           000097   702 G$CLKSEL$0$0 == 0x0097
                           000097   703 _CLKSEL	=	0x0097
                           00009A   704 G$CCH0MA$0$0 == 0x009a
                           00009A   705 _CCH0MA	=	0x009a
                           00009C   706 G$P4MDOUT$0$0 == 0x009c
                           00009C   707 _P4MDOUT	=	0x009c
                           00009D   708 G$P5MDOUT$0$0 == 0x009d
                           00009D   709 _P5MDOUT	=	0x009d
                           00009E   710 G$P6MDOUT$0$0 == 0x009e
                           00009E   711 _P6MDOUT	=	0x009e
                           00009F   712 G$P7MDOUT$0$0 == 0x009f
                           00009F   713 _P7MDOUT	=	0x009f
                           0000A1   714 G$CCH0CN$0$0 == 0x00a1
                           0000A1   715 _CCH0CN	=	0x00a1
                           0000A2   716 G$CCH0TN$0$0 == 0x00a2
                           0000A2   717 _CCH0TN	=	0x00a2
                           0000A3   718 G$CCH0LC$0$0 == 0x00a3
                           0000A3   719 _CCH0LC	=	0x00a3
                           0000A4   720 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   721 _P0MDOUT	=	0x00a4
                           0000A5   722 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   723 _P1MDOUT	=	0x00a5
                           0000A6   724 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   725 _P2MDOUT	=	0x00a6
                           0000A7   726 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   727 _P3MDOUT	=	0x00a7
                           0000AD   728 G$P1MDIN$0$0 == 0x00ad
                           0000AD   729 _P1MDIN	=	0x00ad
                           0000B7   730 G$FLACL$0$0 == 0x00b7
                           0000B7   731 _FLACL	=	0x00b7
                           0000C8   732 G$P4$0$0 == 0x00c8
                           0000C8   733 _P4	=	0x00c8
                           0000D8   734 G$P5$0$0 == 0x00d8
                           0000D8   735 _P5	=	0x00d8
                           0000E1   736 G$XBR0$0$0 == 0x00e1
                           0000E1   737 _XBR0	=	0x00e1
                           0000E2   738 G$XBR1$0$0 == 0x00e2
                           0000E2   739 _XBR1	=	0x00e2
                           0000E3   740 G$XBR2$0$0 == 0x00e3
                           0000E3   741 _XBR2	=	0x00e3
                           0000E8   742 G$P6$0$0 == 0x00e8
                           0000E8   743 _P6	=	0x00e8
                           0000F8   744 G$P7$0$0 == 0x00f8
                           0000F8   745 _P7	=	0x00f8
                           008C8A   746 G$TMR0$0$0 == 0x8c8a
                           008C8A   747 _TMR0	=	0x8c8a
                           008D8B   748 G$TMR1$0$0 == 0x8d8b
                           008D8B   749 _TMR1	=	0x8d8b
                           00CDCC   750 G$TMR2$0$0 == 0xcdcc
                           00CDCC   751 _TMR2	=	0xcdcc
                           00CBCA   752 G$RCAP2$0$0 == 0xcbca
                           00CBCA   753 _RCAP2	=	0xcbca
                           00BFBE   754 G$ADC0$0$0 == 0xbfbe
                           00BFBE   755 _ADC0	=	0xbfbe
                           00C5C4   756 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   757 _ADC0GT	=	0xc5c4
                           00C7C6   758 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   759 _ADC0LT	=	0xc7c6
                           00D3D2   760 G$DAC0$0$0 == 0xd3d2
                           00D3D2   761 _DAC0	=	0xd3d2
                           00FAF9   762 G$PCA0$0$0 == 0xfaf9
                           00FAF9   763 _PCA0	=	0xfaf9
                           00FCFB   764 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   765 _PCA0CP0	=	0xfcfb
                           00FEFD   766 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   767 _PCA0CP1	=	0xfefd
                           00EAE9   768 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   769 _PCA0CP2	=	0xeae9
                           00ECEB   770 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   771 _PCA0CP3	=	0xeceb
                           00EEED   772 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   773 _PCA0CP4	=	0xeeed
                           00E2E1   774 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   775 _PCA0CP5	=	0xe2e1
                           00CDCC   776 G$TMR3$0$0 == 0xcdcc
                           00CDCC   777 _TMR3	=	0xcdcc
                           00CBCA   778 G$RCAP3$0$0 == 0xcbca
                           00CBCA   779 _RCAP3	=	0xcbca
                           00D3D2   780 G$DAC1$0$0 == 0xd3d2
                           00D3D2   781 _DAC1	=	0xd3d2
                           00CDCC   782 G$TMR4$0$0 == 0xcdcc
                           00CDCC   783 _TMR4	=	0xcdcc
                           00CBCA   784 G$RCAP4$0$0 == 0xcbca
                           00CBCA   785 _RCAP4	=	0xcbca
                           00C2C1   786 G$MAC0A$0$0 == 0xc2c1
                           00C2C1   787 _MAC0A	=	0xc2c1
                           96959493   788 G$MAC0ACC$0$0 == 0x96959493
                           96959493   789 _MAC0ACC	=	0x96959493
                           00CFCE   790 G$MAC0RND$0$0 == 0xcfce
                           00CFCE   791 _MAC0RND	=	0xcfce
                                    792 ;--------------------------------------------------------
                                    793 ; special function bits
                                    794 ;--------------------------------------------------------
                                    795 	.area RSEG    (ABS,DATA)
      000000                        796 	.org 0x0000
                           000080   797 G$P0_0$0$0 == 0x0080
                           000080   798 _P0_0	=	0x0080
                           000081   799 G$P0_1$0$0 == 0x0081
                           000081   800 _P0_1	=	0x0081
                           000082   801 G$P0_2$0$0 == 0x0082
                           000082   802 _P0_2	=	0x0082
                           000083   803 G$P0_3$0$0 == 0x0083
                           000083   804 _P0_3	=	0x0083
                           000084   805 G$P0_4$0$0 == 0x0084
                           000084   806 _P0_4	=	0x0084
                           000085   807 G$P0_5$0$0 == 0x0085
                           000085   808 _P0_5	=	0x0085
                           000086   809 G$P0_6$0$0 == 0x0086
                           000086   810 _P0_6	=	0x0086
                           000087   811 G$P0_7$0$0 == 0x0087
                           000087   812 _P0_7	=	0x0087
                           000088   813 G$IT0$0$0 == 0x0088
                           000088   814 _IT0	=	0x0088
                           000089   815 G$IE0$0$0 == 0x0089
                           000089   816 _IE0	=	0x0089
                           00008A   817 G$IT1$0$0 == 0x008a
                           00008A   818 _IT1	=	0x008a
                           00008B   819 G$IE1$0$0 == 0x008b
                           00008B   820 _IE1	=	0x008b
                           00008C   821 G$TR0$0$0 == 0x008c
                           00008C   822 _TR0	=	0x008c
                           00008D   823 G$TF0$0$0 == 0x008d
                           00008D   824 _TF0	=	0x008d
                           00008E   825 G$TR1$0$0 == 0x008e
                           00008E   826 _TR1	=	0x008e
                           00008F   827 G$TF1$0$0 == 0x008f
                           00008F   828 _TF1	=	0x008f
                           000088   829 G$CP0HYN0$0$0 == 0x0088
                           000088   830 _CP0HYN0	=	0x0088
                           000089   831 G$CP0HYN1$0$0 == 0x0089
                           000089   832 _CP0HYN1	=	0x0089
                           00008A   833 G$CP0HYP0$0$0 == 0x008a
                           00008A   834 _CP0HYP0	=	0x008a
                           00008B   835 G$CP0HYP1$0$0 == 0x008b
                           00008B   836 _CP0HYP1	=	0x008b
                           00008C   837 G$CP0FIF$0$0 == 0x008c
                           00008C   838 _CP0FIF	=	0x008c
                           00008D   839 G$CP0RIF$0$0 == 0x008d
                           00008D   840 _CP0RIF	=	0x008d
                           00008E   841 G$CP0OUT$0$0 == 0x008e
                           00008E   842 _CP0OUT	=	0x008e
                           00008F   843 G$CP0EN$0$0 == 0x008f
                           00008F   844 _CP0EN	=	0x008f
                           000088   845 G$CP1HYN0$0$0 == 0x0088
                           000088   846 _CP1HYN0	=	0x0088
                           000089   847 G$CP1HYN1$0$0 == 0x0089
                           000089   848 _CP1HYN1	=	0x0089
                           00008A   849 G$CP1HYP0$0$0 == 0x008a
                           00008A   850 _CP1HYP0	=	0x008a
                           00008B   851 G$CP1HYP1$0$0 == 0x008b
                           00008B   852 _CP1HYP1	=	0x008b
                           00008C   853 G$CP1FIF$0$0 == 0x008c
                           00008C   854 _CP1FIF	=	0x008c
                           00008D   855 G$CP1RIF$0$0 == 0x008d
                           00008D   856 _CP1RIF	=	0x008d
                           00008E   857 G$CP1OUT$0$0 == 0x008e
                           00008E   858 _CP1OUT	=	0x008e
                           00008F   859 G$CP1EN$0$0 == 0x008f
                           00008F   860 _CP1EN	=	0x008f
                           000088   861 G$FLHBUSY$0$0 == 0x0088
                           000088   862 _FLHBUSY	=	0x0088
                           000090   863 G$P1_0$0$0 == 0x0090
                           000090   864 _P1_0	=	0x0090
                           000091   865 G$P1_1$0$0 == 0x0091
                           000091   866 _P1_1	=	0x0091
                           000092   867 G$P1_2$0$0 == 0x0092
                           000092   868 _P1_2	=	0x0092
                           000093   869 G$P1_3$0$0 == 0x0093
                           000093   870 _P1_3	=	0x0093
                           000094   871 G$P1_4$0$0 == 0x0094
                           000094   872 _P1_4	=	0x0094
                           000095   873 G$P1_5$0$0 == 0x0095
                           000095   874 _P1_5	=	0x0095
                           000096   875 G$P1_6$0$0 == 0x0096
                           000096   876 _P1_6	=	0x0096
                           000097   877 G$P1_7$0$0 == 0x0097
                           000097   878 _P1_7	=	0x0097
                           000098   879 G$RI0$0$0 == 0x0098
                           000098   880 _RI0	=	0x0098
                           000098   881 G$RI$0$0 == 0x0098
                           000098   882 _RI	=	0x0098
                           000099   883 G$TI0$0$0 == 0x0099
                           000099   884 _TI0	=	0x0099
                           000099   885 G$TI$0$0 == 0x0099
                           000099   886 _TI	=	0x0099
                           00009A   887 G$RB80$0$0 == 0x009a
                           00009A   888 _RB80	=	0x009a
                           00009B   889 G$TB80$0$0 == 0x009b
                           00009B   890 _TB80	=	0x009b
                           00009C   891 G$REN0$0$0 == 0x009c
                           00009C   892 _REN0	=	0x009c
                           00009C   893 G$REN$0$0 == 0x009c
                           00009C   894 _REN	=	0x009c
                           00009D   895 G$SM20$0$0 == 0x009d
                           00009D   896 _SM20	=	0x009d
                           00009E   897 G$SM10$0$0 == 0x009e
                           00009E   898 _SM10	=	0x009e
                           00009F   899 G$SM00$0$0 == 0x009f
                           00009F   900 _SM00	=	0x009f
                           000098   901 G$RI1$0$0 == 0x0098
                           000098   902 _RI1	=	0x0098
                           000099   903 G$TI1$0$0 == 0x0099
                           000099   904 _TI1	=	0x0099
                           00009A   905 G$RB81$0$0 == 0x009a
                           00009A   906 _RB81	=	0x009a
                           00009B   907 G$TB81$0$0 == 0x009b
                           00009B   908 _TB81	=	0x009b
                           00009C   909 G$REN1$0$0 == 0x009c
                           00009C   910 _REN1	=	0x009c
                           00009D   911 G$MCE1$0$0 == 0x009d
                           00009D   912 _MCE1	=	0x009d
                           00009F   913 G$S1MODE$0$0 == 0x009f
                           00009F   914 _S1MODE	=	0x009f
                           0000A0   915 G$P2_0$0$0 == 0x00a0
                           0000A0   916 _P2_0	=	0x00a0
                           0000A1   917 G$P2_1$0$0 == 0x00a1
                           0000A1   918 _P2_1	=	0x00a1
                           0000A2   919 G$P2_2$0$0 == 0x00a2
                           0000A2   920 _P2_2	=	0x00a2
                           0000A3   921 G$P2_3$0$0 == 0x00a3
                           0000A3   922 _P2_3	=	0x00a3
                           0000A4   923 G$P2_4$0$0 == 0x00a4
                           0000A4   924 _P2_4	=	0x00a4
                           0000A5   925 G$P2_5$0$0 == 0x00a5
                           0000A5   926 _P2_5	=	0x00a5
                           0000A6   927 G$P2_6$0$0 == 0x00a6
                           0000A6   928 _P2_6	=	0x00a6
                           0000A7   929 G$P2_7$0$0 == 0x00a7
                           0000A7   930 _P2_7	=	0x00a7
                           0000A8   931 G$EX0$0$0 == 0x00a8
                           0000A8   932 _EX0	=	0x00a8
                           0000A9   933 G$ET0$0$0 == 0x00a9
                           0000A9   934 _ET0	=	0x00a9
                           0000AA   935 G$EX1$0$0 == 0x00aa
                           0000AA   936 _EX1	=	0x00aa
                           0000AB   937 G$ET1$0$0 == 0x00ab
                           0000AB   938 _ET1	=	0x00ab
                           0000AC   939 G$ES0$0$0 == 0x00ac
                           0000AC   940 _ES0	=	0x00ac
                           0000AC   941 G$ES$0$0 == 0x00ac
                           0000AC   942 _ES	=	0x00ac
                           0000AD   943 G$ET2$0$0 == 0x00ad
                           0000AD   944 _ET2	=	0x00ad
                           0000AF   945 G$EA$0$0 == 0x00af
                           0000AF   946 _EA	=	0x00af
                           0000B0   947 G$P3_0$0$0 == 0x00b0
                           0000B0   948 _P3_0	=	0x00b0
                           0000B1   949 G$P3_1$0$0 == 0x00b1
                           0000B1   950 _P3_1	=	0x00b1
                           0000B2   951 G$P3_2$0$0 == 0x00b2
                           0000B2   952 _P3_2	=	0x00b2
                           0000B3   953 G$P3_3$0$0 == 0x00b3
                           0000B3   954 _P3_3	=	0x00b3
                           0000B4   955 G$P3_4$0$0 == 0x00b4
                           0000B4   956 _P3_4	=	0x00b4
                           0000B5   957 G$P3_5$0$0 == 0x00b5
                           0000B5   958 _P3_5	=	0x00b5
                           0000B6   959 G$P3_6$0$0 == 0x00b6
                           0000B6   960 _P3_6	=	0x00b6
                           0000B7   961 G$P3_7$0$0 == 0x00b7
                           0000B7   962 _P3_7	=	0x00b7
                           0000B8   963 G$PX0$0$0 == 0x00b8
                           0000B8   964 _PX0	=	0x00b8
                           0000B9   965 G$PT0$0$0 == 0x00b9
                           0000B9   966 _PT0	=	0x00b9
                           0000BA   967 G$PX1$0$0 == 0x00ba
                           0000BA   968 _PX1	=	0x00ba
                           0000BB   969 G$PT1$0$0 == 0x00bb
                           0000BB   970 _PT1	=	0x00bb
                           0000BC   971 G$PS0$0$0 == 0x00bc
                           0000BC   972 _PS0	=	0x00bc
                           0000BC   973 G$PS$0$0 == 0x00bc
                           0000BC   974 _PS	=	0x00bc
                           0000BD   975 G$PT2$0$0 == 0x00bd
                           0000BD   976 _PT2	=	0x00bd
                           0000C0   977 G$SMBTOE$0$0 == 0x00c0
                           0000C0   978 _SMBTOE	=	0x00c0
                           0000C1   979 G$SMBFTE$0$0 == 0x00c1
                           0000C1   980 _SMBFTE	=	0x00c1
                           0000C2   981 G$AA$0$0 == 0x00c2
                           0000C2   982 _AA	=	0x00c2
                           0000C3   983 G$SI$0$0 == 0x00c3
                           0000C3   984 _SI	=	0x00c3
                           0000C4   985 G$STO$0$0 == 0x00c4
                           0000C4   986 _STO	=	0x00c4
                           0000C5   987 G$STA$0$0 == 0x00c5
                           0000C5   988 _STA	=	0x00c5
                           0000C6   989 G$ENSMB$0$0 == 0x00c6
                           0000C6   990 _ENSMB	=	0x00c6
                           0000C7   991 G$BUSY$0$0 == 0x00c7
                           0000C7   992 _BUSY	=	0x00c7
                           0000C0   993 G$MAC0N$0$0 == 0x00c0
                           0000C0   994 _MAC0N	=	0x00c0
                           0000C1   995 G$MAC0SO$0$0 == 0x00c1
                           0000C1   996 _MAC0SO	=	0x00c1
                           0000C2   997 G$MAC0Z$0$0 == 0x00c2
                           0000C2   998 _MAC0Z	=	0x00c2
                           0000C3   999 G$MAC0HO$0$0 == 0x00c3
                           0000C3  1000 _MAC0HO	=	0x00c3
                           0000C8  1001 G$CPRL2$0$0 == 0x00c8
                           0000C8  1002 _CPRL2	=	0x00c8
                           0000C9  1003 G$CT2$0$0 == 0x00c9
                           0000C9  1004 _CT2	=	0x00c9
                           0000CA  1005 G$TR2$0$0 == 0x00ca
                           0000CA  1006 _TR2	=	0x00ca
                           0000CB  1007 G$EXEN2$0$0 == 0x00cb
                           0000CB  1008 _EXEN2	=	0x00cb
                           0000CE  1009 G$EXF2$0$0 == 0x00ce
                           0000CE  1010 _EXF2	=	0x00ce
                           0000CF  1011 G$TF2$0$0 == 0x00cf
                           0000CF  1012 _TF2	=	0x00cf
                           0000C8  1013 G$CPRL3$0$0 == 0x00c8
                           0000C8  1014 _CPRL3	=	0x00c8
                           0000C9  1015 G$CT3$0$0 == 0x00c9
                           0000C9  1016 _CT3	=	0x00c9
                           0000CA  1017 G$TR3$0$0 == 0x00ca
                           0000CA  1018 _TR3	=	0x00ca
                           0000CB  1019 G$EXEN3$0$0 == 0x00cb
                           0000CB  1020 _EXEN3	=	0x00cb
                           0000CE  1021 G$EXF3$0$0 == 0x00ce
                           0000CE  1022 _EXF3	=	0x00ce
                           0000CF  1023 G$TF3$0$0 == 0x00cf
                           0000CF  1024 _TF3	=	0x00cf
                           0000C8  1025 G$CPRL4$0$0 == 0x00c8
                           0000C8  1026 _CPRL4	=	0x00c8
                           0000C9  1027 G$CT4$0$0 == 0x00c9
                           0000C9  1028 _CT4	=	0x00c9
                           0000CA  1029 G$TR4$0$0 == 0x00ca
                           0000CA  1030 _TR4	=	0x00ca
                           0000CB  1031 G$EXEN4$0$0 == 0x00cb
                           0000CB  1032 _EXEN4	=	0x00cb
                           0000CE  1033 G$EXF4$0$0 == 0x00ce
                           0000CE  1034 _EXF4	=	0x00ce
                           0000CF  1035 G$TF4$0$0 == 0x00cf
                           0000CF  1036 _TF4	=	0x00cf
                           0000C8  1037 G$P4_0$0$0 == 0x00c8
                           0000C8  1038 _P4_0	=	0x00c8
                           0000C9  1039 G$P4_1$0$0 == 0x00c9
                           0000C9  1040 _P4_1	=	0x00c9
                           0000CA  1041 G$P4_2$0$0 == 0x00ca
                           0000CA  1042 _P4_2	=	0x00ca
                           0000CB  1043 G$P4_3$0$0 == 0x00cb
                           0000CB  1044 _P4_3	=	0x00cb
                           0000CC  1045 G$P4_4$0$0 == 0x00cc
                           0000CC  1046 _P4_4	=	0x00cc
                           0000CD  1047 G$P4_5$0$0 == 0x00cd
                           0000CD  1048 _P4_5	=	0x00cd
                           0000CE  1049 G$P4_6$0$0 == 0x00ce
                           0000CE  1050 _P4_6	=	0x00ce
                           0000CF  1051 G$P4_7$0$0 == 0x00cf
                           0000CF  1052 _P4_7	=	0x00cf
                           0000D0  1053 G$P$0$0 == 0x00d0
                           0000D0  1054 _P	=	0x00d0
                           0000D1  1055 G$F1$0$0 == 0x00d1
                           0000D1  1056 _F1	=	0x00d1
                           0000D2  1057 G$OV$0$0 == 0x00d2
                           0000D2  1058 _OV	=	0x00d2
                           0000D3  1059 G$RS0$0$0 == 0x00d3
                           0000D3  1060 _RS0	=	0x00d3
                           0000D4  1061 G$RS1$0$0 == 0x00d4
                           0000D4  1062 _RS1	=	0x00d4
                           0000D5  1063 G$F0$0$0 == 0x00d5
                           0000D5  1064 _F0	=	0x00d5
                           0000D6  1065 G$AC$0$0 == 0x00d6
                           0000D6  1066 _AC	=	0x00d6
                           0000D7  1067 G$CY$0$0 == 0x00d7
                           0000D7  1068 _CY	=	0x00d7
                           0000D8  1069 G$CCF0$0$0 == 0x00d8
                           0000D8  1070 _CCF0	=	0x00d8
                           0000D9  1071 G$CCF1$0$0 == 0x00d9
                           0000D9  1072 _CCF1	=	0x00d9
                           0000DA  1073 G$CCF2$0$0 == 0x00da
                           0000DA  1074 _CCF2	=	0x00da
                           0000DB  1075 G$CCF3$0$0 == 0x00db
                           0000DB  1076 _CCF3	=	0x00db
                           0000DC  1077 G$CCF4$0$0 == 0x00dc
                           0000DC  1078 _CCF4	=	0x00dc
                           0000DD  1079 G$CCF5$0$0 == 0x00dd
                           0000DD  1080 _CCF5	=	0x00dd
                           0000DE  1081 G$CR$0$0 == 0x00de
                           0000DE  1082 _CR	=	0x00de
                           0000DF  1083 G$CF$0$0 == 0x00df
                           0000DF  1084 _CF	=	0x00df
                           0000D8  1085 G$P5_0$0$0 == 0x00d8
                           0000D8  1086 _P5_0	=	0x00d8
                           0000D9  1087 G$P5_1$0$0 == 0x00d9
                           0000D9  1088 _P5_1	=	0x00d9
                           0000DA  1089 G$P5_2$0$0 == 0x00da
                           0000DA  1090 _P5_2	=	0x00da
                           0000DB  1091 G$P5_3$0$0 == 0x00db
                           0000DB  1092 _P5_3	=	0x00db
                           0000DC  1093 G$P5_4$0$0 == 0x00dc
                           0000DC  1094 _P5_4	=	0x00dc
                           0000DD  1095 G$P5_5$0$0 == 0x00dd
                           0000DD  1096 _P5_5	=	0x00dd
                           0000DE  1097 G$P5_6$0$0 == 0x00de
                           0000DE  1098 _P5_6	=	0x00de
                           0000DF  1099 G$P5_7$0$0 == 0x00df
                           0000DF  1100 _P5_7	=	0x00df
                           0000E8  1101 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1102 _AD0LJST	=	0x00e8
                           0000E9  1103 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1104 _AD0WINT	=	0x00e9
                           0000EA  1105 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1106 _AD0CM0	=	0x00ea
                           0000EB  1107 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1108 _AD0CM1	=	0x00eb
                           0000EC  1109 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1110 _AD0BUSY	=	0x00ec
                           0000ED  1111 G$AD0INT$0$0 == 0x00ed
                           0000ED  1112 _AD0INT	=	0x00ed
                           0000EE  1113 G$AD0TM$0$0 == 0x00ee
                           0000EE  1114 _AD0TM	=	0x00ee
                           0000EF  1115 G$AD0EN$0$0 == 0x00ef
                           0000EF  1116 _AD0EN	=	0x00ef
                           0000E8  1117 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1118 _AD2WINT	=	0x00e8
                           0000E9  1119 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1120 _AD2CM0	=	0x00e9
                           0000EA  1121 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1122 _AD2CM1	=	0x00ea
                           0000EB  1123 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1124 _AD2CM2	=	0x00eb
                           0000EC  1125 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1126 _AD2BUSY	=	0x00ec
                           0000ED  1127 G$AD2INT$0$0 == 0x00ed
                           0000ED  1128 _AD2INT	=	0x00ed
                           0000EE  1129 G$AD2TM$0$0 == 0x00ee
                           0000EE  1130 _AD2TM	=	0x00ee
                           0000EF  1131 G$AD2EN$0$0 == 0x00ef
                           0000EF  1132 _AD2EN	=	0x00ef
                           0000E8  1133 G$P6_0$0$0 == 0x00e8
                           0000E8  1134 _P6_0	=	0x00e8
                           0000E9  1135 G$P6_1$0$0 == 0x00e9
                           0000E9  1136 _P6_1	=	0x00e9
                           0000EA  1137 G$P6_2$0$0 == 0x00ea
                           0000EA  1138 _P6_2	=	0x00ea
                           0000EB  1139 G$P6_3$0$0 == 0x00eb
                           0000EB  1140 _P6_3	=	0x00eb
                           0000EC  1141 G$P6_4$0$0 == 0x00ec
                           0000EC  1142 _P6_4	=	0x00ec
                           0000ED  1143 G$P6_5$0$0 == 0x00ed
                           0000ED  1144 _P6_5	=	0x00ed
                           0000EE  1145 G$P6_6$0$0 == 0x00ee
                           0000EE  1146 _P6_6	=	0x00ee
                           0000EF  1147 G$P6_7$0$0 == 0x00ef
                           0000EF  1148 _P6_7	=	0x00ef
                           0000F8  1149 G$SPIEN$0$0 == 0x00f8
                           0000F8  1150 _SPIEN	=	0x00f8
                           0000F9  1151 G$TXBMT$0$0 == 0x00f9
                           0000F9  1152 _TXBMT	=	0x00f9
                           0000FA  1153 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1154 _NSSMD0	=	0x00fa
                           0000FB  1155 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1156 _NSSMD1	=	0x00fb
                           0000FC  1157 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1158 _RXOVRN	=	0x00fc
                           0000FD  1159 G$MODF$0$0 == 0x00fd
                           0000FD  1160 _MODF	=	0x00fd
                           0000FE  1161 G$WCOL$0$0 == 0x00fe
                           0000FE  1162 _WCOL	=	0x00fe
                           0000FF  1163 G$SPIF$0$0 == 0x00ff
                           0000FF  1164 _SPIF	=	0x00ff
                           0000F8  1165 G$P7_0$0$0 == 0x00f8
                           0000F8  1166 _P7_0	=	0x00f8
                           0000F9  1167 G$P7_1$0$0 == 0x00f9
                           0000F9  1168 _P7_1	=	0x00f9
                           0000FA  1169 G$P7_2$0$0 == 0x00fa
                           0000FA  1170 _P7_2	=	0x00fa
                           0000FB  1171 G$P7_3$0$0 == 0x00fb
                           0000FB  1172 _P7_3	=	0x00fb
                           0000FC  1173 G$P7_4$0$0 == 0x00fc
                           0000FC  1174 _P7_4	=	0x00fc
                           0000FD  1175 G$P7_5$0$0 == 0x00fd
                           0000FD  1176 _P7_5	=	0x00fd
                           0000FE  1177 G$P7_6$0$0 == 0x00fe
                           0000FE  1178 _P7_6	=	0x00fe
                           0000FF  1179 G$P7_7$0$0 == 0x00ff
                           0000FF  1180 _P7_7	=	0x00ff
                                   1181 ;--------------------------------------------------------
                                   1182 ; overlayable register banks
                                   1183 ;--------------------------------------------------------
                                   1184 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1185 	.ds 8
                                   1186 ;--------------------------------------------------------
                                   1187 ; internal ram data
                                   1188 ;--------------------------------------------------------
                                   1189 	.area DSEG    (DATA)
                                   1190 ;--------------------------------------------------------
                                   1191 ; overlayable items in internal ram 
                                   1192 ;--------------------------------------------------------
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
                                   1224 ;--------------------------------------------------------
                                   1225 ; absolute external ram data
                                   1226 ;--------------------------------------------------------
                                   1227 	.area XABS    (ABS,XDATA)
                                   1228 ;--------------------------------------------------------
                                   1229 ; external initialized ram data
                                   1230 ;--------------------------------------------------------
                                   1231 	.area XISEG   (XDATA)
                                   1232 	.area HOME    (CODE)
                                   1233 	.area GSINIT0 (CODE)
                                   1234 	.area GSINIT1 (CODE)
                                   1235 	.area GSINIT2 (CODE)
                                   1236 	.area GSINIT3 (CODE)
                                   1237 	.area GSINIT4 (CODE)
                                   1238 	.area GSINIT5 (CODE)
                                   1239 	.area GSINIT  (CODE)
                                   1240 	.area GSFINAL (CODE)
                                   1241 	.area CSEG    (CODE)
                                   1242 ;--------------------------------------------------------
                                   1243 ; interrupt vector 
                                   1244 ;--------------------------------------------------------
                                   1245 	.area HOME    (CODE)
      000000                       1246 __interrupt_vect:
      000000 02 00 06         [24] 1247 	ljmp	__sdcc_gsinit_startup
                                   1248 ;--------------------------------------------------------
                                   1249 ; global & static initialisations
                                   1250 ;--------------------------------------------------------
                                   1251 	.area HOME    (CODE)
                                   1252 	.area GSINIT  (CODE)
                                   1253 	.area GSFINAL (CODE)
                                   1254 	.area GSINIT  (CODE)
                                   1255 	.globl __sdcc_gsinit_startup
                                   1256 	.globl __sdcc_program_startup
                                   1257 	.globl __start__stack
                                   1258 	.globl __mcs51_genXINIT
                                   1259 	.globl __mcs51_genXRAMCLEAR
                                   1260 	.globl __mcs51_genRAMCLEAR
                                   1261 	.area GSFINAL (CODE)
      00005F 02 00 03         [24] 1262 	ljmp	__sdcc_program_startup
                                   1263 ;--------------------------------------------------------
                                   1264 ; Home
                                   1265 ;--------------------------------------------------------
                                   1266 	.area HOME    (CODE)
                                   1267 	.area HOME    (CODE)
      000003                       1268 __sdcc_program_startup:
      000003 02 00 77         [24] 1269 	ljmp	_main
                                   1270 ;	return from main will return to caller
                                   1271 ;--------------------------------------------------------
                                   1272 ; code
                                   1273 ;--------------------------------------------------------
                                   1274 	.area CSEG    (CODE)
                                   1275 ;------------------------------------------------------------
                                   1276 ;Allocation info for local variables in function 'putchar'
                                   1277 ;------------------------------------------------------------
                                   1278 ;c                         Allocated to registers r7 
                                   1279 ;------------------------------------------------------------
                           000000  1280 	G$putchar$0$0 ==.
                           000000  1281 	C$putget.h$18$0$0 ==.
                                   1282 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:18: void putchar(char c)
                                   1283 ;	-----------------------------------------
                                   1284 ;	 function putchar
                                   1285 ;	-----------------------------------------
      000062                       1286 _putchar:
                           000007  1287 	ar7 = 0x07
                           000006  1288 	ar6 = 0x06
                           000005  1289 	ar5 = 0x05
                           000004  1290 	ar4 = 0x04
                           000003  1291 	ar3 = 0x03
                           000002  1292 	ar2 = 0x02
                           000001  1293 	ar1 = 0x01
                           000000  1294 	ar0 = 0x00
      000062 AF 82            [24] 1295 	mov	r7,dpl
                           000002  1296 	C$putget.h$20$1$16 ==.
                                   1297 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:20: while(!TI0); 
      000064                       1298 00101$:
                           000002  1299 	C$putget.h$21$1$16 ==.
                                   1300 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:21: TI0=0;
      000064 10 99 02         [24] 1301 	jbc	_TI0,00112$
      000067 80 FB            [24] 1302 	sjmp	00101$
      000069                       1303 00112$:
                           000007  1304 	C$putget.h$22$1$16 ==.
                                   1305 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:22: SBUF0 = c;
      000069 8F 99            [24] 1306 	mov	_SBUF0,r7
                           000009  1307 	C$putget.h$23$1$16 ==.
                           000009  1308 	XG$putchar$0$0 ==.
      00006B 22               [24] 1309 	ret
                                   1310 ;------------------------------------------------------------
                                   1311 ;Allocation info for local variables in function 'getchar'
                                   1312 ;------------------------------------------------------------
                                   1313 ;c                         Allocated to registers 
                                   1314 ;------------------------------------------------------------
                           00000A  1315 	G$getchar$0$0 ==.
                           00000A  1316 	C$putget.h$28$1$16 ==.
                                   1317 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:28: char getchar(void)
                                   1318 ;	-----------------------------------------
                                   1319 ;	 function getchar
                                   1320 ;	-----------------------------------------
      00006C                       1321 _getchar:
                           00000A  1322 	C$putget.h$31$1$18 ==.
                                   1323 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:31: while(!RI0);
      00006C                       1324 00101$:
                           00000A  1325 	C$putget.h$32$1$18 ==.
                                   1326 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:32: RI0 =0;
      00006C 10 98 02         [24] 1327 	jbc	_RI0,00112$
      00006F 80 FB            [24] 1328 	sjmp	00101$
      000071                       1329 00112$:
                           00000F  1330 	C$putget.h$33$1$18 ==.
                                   1331 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:33: c = SBUF0;
      000071 E5 99            [12] 1332 	mov	a,_SBUF0
                           000011  1333 	C$putget.h$36$1$18 ==.
                                   1334 ;	C:/Users/Christina/Documents/MPS/Versions/Lab_04/Part II - Sawtooth/putget.h:36: return SBUF0;
      000073 85 99 82         [24] 1335 	mov	dpl,_SBUF0
                           000014  1336 	C$putget.h$37$1$18 ==.
                           000014  1337 	XG$getchar$0$0 ==.
      000076 22               [24] 1338 	ret
                                   1339 ;------------------------------------------------------------
                                   1340 ;Allocation info for local variables in function 'main'
                                   1341 ;------------------------------------------------------------
                                   1342 ;sawtooth                  Allocated to registers 
                                   1343 ;wave                      Allocated to registers r6 r7 
                                   1344 ;------------------------------------------------------------
                           000015  1345 	G$main$0$0 ==.
                           000015  1346 	C$sawtooth.c$30$1$18 ==.
                                   1347 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:30: void main (void)
                                   1348 ;	-----------------------------------------
                                   1349 ;	 function main
                                   1350 ;	-----------------------------------------
      000077                       1351 _main:
                           000015  1352 	C$sawtooth.c$34$1$27 ==.
                                   1353 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:34: SFRPAGE = CONFIG_PAGE;
      000077 75 84 0F         [24] 1354 	mov	_SFRPAGE,#0x0F
                           000018  1355 	C$sawtooth.c$35$1$27 ==.
                                   1356 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:35: SYSCLK_INIT();
      00007A 12 00 CB         [24] 1357 	lcall	_SYSCLK_INIT
                           00001B  1358 	C$sawtooth.c$36$1$27 ==.
                                   1359 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:36: Port_IO_Init();
      00007D 12 01 0E         [24] 1360 	lcall	_Port_IO_Init
                           00001E  1361 	C$sawtooth.c$37$1$27 ==.
                                   1362 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:37: Timer_Init();
      000080 12 00 EA         [24] 1363 	lcall	_Timer_Init
                           000021  1364 	C$sawtooth.c$38$1$27 ==.
                                   1365 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:38: UART_Init();
      000083 12 01 00         [24] 1366 	lcall	_UART_Init
                           000024  1367 	C$sawtooth.c$39$1$27 ==.
                                   1368 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:39: DAC_INIT();
      000086 12 01 26         [24] 1369 	lcall	_DAC_INIT
                           000027  1370 	C$sawtooth.c$40$1$27 ==.
                                   1371 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:40: SFRPAGE = LEGACY_PAGE;//same as UART0_PAGE
      000089 75 84 00         [24] 1372 	mov	_SFRPAGE,#0x00
                           00002A  1373 	C$sawtooth.c$41$1$27 ==.
                                   1374 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:41: printf("\033[2J");
      00008C 74 71            [12] 1375 	mov	a,#___str_0
      00008E C0 E0            [24] 1376 	push	acc
      000090 74 07            [12] 1377 	mov	a,#(___str_0 >> 8)
      000092 C0 E0            [24] 1378 	push	acc
      000094 74 80            [12] 1379 	mov	a,#0x80
      000096 C0 E0            [24] 1380 	push	acc
      000098 12 01 5D         [24] 1381 	lcall	_printf
      00009B 15 81            [12] 1382 	dec	sp
      00009D 15 81            [12] 1383 	dec	sp
      00009F 15 81            [12] 1384 	dec	sp
                           00003F  1385 	C$sawtooth.c$42$1$27 ==.
                                   1386 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:42: while(1)
      0000A1                       1387 00102$:
                           00003F  1388 	C$sawtooth.c$44$2$28 ==.
                                   1389 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:44: SFRPAGE = LEGACY_PAGE;
      0000A1 75 84 00         [24] 1390 	mov	_SFRPAGE,#0x00
                           000042  1391 	C$sawtooth.c$47$2$28 ==.
                                   1392 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:47: wave = ADC_read();//divide by 16 to convert to 12 bit
      0000A4 12 00 B2         [24] 1393 	lcall	_ADC_read
      0000A7 AE 82            [24] 1394 	mov	r6,dpl
      0000A9 AF 83            [24] 1395 	mov	r7,dph
                           000049  1396 	C$sawtooth.c$48$2$28 ==.
                                   1397 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:48: DAC0L = wave;
      0000AB 8E D2            [24] 1398 	mov	_DAC0L,r6
                           00004B  1399 	C$sawtooth.c$49$2$28 ==.
                                   1400 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:49: DAC0H = wave>>8;//xxx12 bites 
      0000AD 8F D3            [24] 1401 	mov	_DAC0H,r7
      0000AF 80 F0            [24] 1402 	sjmp	00102$
                           00004F  1403 	C$sawtooth.c$52$1$27 ==.
                           00004F  1404 	XG$main$0$0 ==.
      0000B1 22               [24] 1405 	ret
                                   1406 ;------------------------------------------------------------
                                   1407 ;Allocation info for local variables in function 'ADC_read'
                                   1408 ;------------------------------------------------------------
                           000050  1409 	G$ADC_read$0$0 ==.
                           000050  1410 	C$sawtooth.c$54$1$27 ==.
                                   1411 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:54: unsigned int ADC_read()
                                   1412 ;	-----------------------------------------
                                   1413 ;	 function ADC_read
                                   1414 ;	-----------------------------------------
      0000B2                       1415 _ADC_read:
                           000050  1416 	C$sawtooth.c$56$1$29 ==.
                                   1417 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:56: AMX0SL = 0;//select pin
      0000B2 75 BB 00         [24] 1418 	mov	_AMX0SL,#0x00
                           000053  1419 	C$sawtooth.c$57$1$29 ==.
                                   1420 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:57: ADC0CN &= ~(0x20);// reset for reading
      0000B5 AF E8            [24] 1421 	mov	r7,_ADC0CN
      0000B7 74 DF            [12] 1422 	mov	a,#0xDF
      0000B9 5F               [12] 1423 	anl	a,r7
      0000BA F5 E8            [12] 1424 	mov	_ADC0CN,a
                           00005A  1425 	C$sawtooth.c$58$1$29 ==.
                                   1426 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:58: ADC0CN |= 0x10;
      0000BC 43 E8 10         [24] 1427 	orl	_ADC0CN,#0x10
                           00005D  1428 	C$sawtooth.c$59$1$29 ==.
                                   1429 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:59: while((ADC0CN & 0x20)==0); // wait for conversion to finish
      0000BF                       1430 00101$:
      0000BF E5 E8            [12] 1431 	mov	a,_ADC0CN
      0000C1 30 E5 FB         [24] 1432 	jnb	acc.5,00101$
                           000062  1433 	C$sawtooth.c$61$1$29 ==.
                                   1434 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:61: return ADC0;
      0000C4 85 BE 82         [24] 1435 	mov	dpl,((_ADC0 >> 0) & 0xFF)
      0000C7 85 BF 83         [24] 1436 	mov	dph,((_ADC0 >> 8) & 0xFF)
                           000068  1437 	C$sawtooth.c$62$1$29 ==.
                           000068  1438 	XG$ADC_read$0$0 ==.
      0000CA 22               [24] 1439 	ret
                                   1440 ;------------------------------------------------------------
                                   1441 ;Allocation info for local variables in function 'SYSCLK_INIT'
                                   1442 ;------------------------------------------------------------
                                   1443 ;j                         Allocated to registers 
                                   1444 ;------------------------------------------------------------
                           000069  1445 	G$SYSCLK_INIT$0$0 ==.
                           000069  1446 	C$sawtooth.c$65$1$29 ==.
                                   1447 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:65: void SYSCLK_INIT()
                                   1448 ;	-----------------------------------------
                                   1449 ;	 function SYSCLK_INIT
                                   1450 ;	-----------------------------------------
      0000CB                       1451 _SYSCLK_INIT:
                           000069  1452 	C$sawtooth.c$68$1$30 ==.
                                   1453 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:68: SFRPAGE = CONFIG_PAGE;
      0000CB 75 84 0F         [24] 1454 	mov	_SFRPAGE,#0x0F
                           00006C  1455 	C$sawtooth.c$69$1$30 ==.
                                   1456 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:69: OSCXCN  = 0x67;             // Start external oscillator
      0000CE 75 8C 67         [24] 1457 	mov	_OSCXCN,#0x67
                           00006F  1458 	C$sawtooth.c$70$1$30 ==.
                                   1459 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:70: for(j=0; j < 256; j++);     // Wait for the oscillator to start up.
      0000D1 7E 00            [12] 1460 	mov	r6,#0x00
      0000D3 7F 01            [12] 1461 	mov	r7,#0x01
      0000D5                       1462 00107$:
      0000D5 1E               [12] 1463 	dec	r6
      0000D6 BE FF 01         [24] 1464 	cjne	r6,#0xFF,00121$
      0000D9 1F               [12] 1465 	dec	r7
      0000DA                       1466 00121$:
      0000DA EE               [12] 1467 	mov	a,r6
      0000DB 4F               [12] 1468 	orl	a,r7
      0000DC 70 F7            [24] 1469 	jnz	00107$
                           00007C  1470 	C$sawtooth.c$71$1$30 ==.
                                   1471 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:71: while(!(OSCXCN & 0x80));    // Check to see if the Crystal Oscillator Valid Flag is set.
      0000DE                       1472 00102$:
      0000DE E5 8C            [12] 1473 	mov	a,_OSCXCN
      0000E0 30 E7 FB         [24] 1474 	jnb	acc.7,00102$
                           000081  1475 	C$sawtooth.c$72$1$30 ==.
                                   1476 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:72: CLKSEL  = 0x01;             // SYSCLK derived from the External Oscillator circuit.
      0000E3 75 97 01         [24] 1477 	mov	_CLKSEL,#0x01
                           000084  1478 	C$sawtooth.c$73$1$30 ==.
                                   1479 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:73: OSCICN  = 0x00;             // Disable the internal oscillator.
      0000E6 75 8A 00         [24] 1480 	mov	_OSCICN,#0x00
                           000087  1481 	C$sawtooth.c$74$1$30 ==.
                           000087  1482 	XG$SYSCLK_INIT$0$0 ==.
      0000E9 22               [24] 1483 	ret
                                   1484 ;------------------------------------------------------------
                                   1485 ;Allocation info for local variables in function 'Timer_Init'
                                   1486 ;------------------------------------------------------------
                           000088  1487 	G$Timer_Init$0$0 ==.
                           000088  1488 	C$sawtooth.c$76$1$30 ==.
                                   1489 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:76: void Timer_Init()
                                   1490 ;	-----------------------------------------
                                   1491 ;	 function Timer_Init
                                   1492 ;	-----------------------------------------
      0000EA                       1493 _Timer_Init:
                           000088  1494 	C$sawtooth.c$78$1$31 ==.
                                   1495 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:78: SFRPAGE   = TMR2_PAGE;
      0000EA 75 84 00         [24] 1496 	mov	_SFRPAGE,#0x00
                           00008B  1497 	C$sawtooth.c$79$1$31 ==.
                                   1498 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:79: TMR2CN    = 0x04;
      0000ED 75 C8 04         [24] 1499 	mov	_TMR2CN,#0x04
                           00008E  1500 	C$sawtooth.c$80$1$31 ==.
                                   1501 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:80: TMR2CF    = 0x08;
      0000F0 75 C9 08         [24] 1502 	mov	_TMR2CF,#0x08
                           000091  1503 	C$sawtooth.c$81$1$31 ==.
                                   1504 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:81: TMR2H	  = 0xFF;
      0000F3 75 CD FF         [24] 1505 	mov	_TMR2H,#0xFF
                           000094  1506 	C$sawtooth.c$82$1$31 ==.
                                   1507 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:82: TMR2L 	  = 0x70;
      0000F6 75 CC 70         [24] 1508 	mov	_TMR2L,#0x70
                           000097  1509 	C$sawtooth.c$83$1$31 ==.
                                   1510 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:83: RCAP2L    = 0x70;
      0000F9 75 CA 70         [24] 1511 	mov	_RCAP2L,#0x70
                           00009A  1512 	C$sawtooth.c$84$1$31 ==.
                                   1513 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:84: RCAP2H    = 0xFF;
      0000FC 75 CB FF         [24] 1514 	mov	_RCAP2H,#0xFF
                           00009D  1515 	C$sawtooth.c$85$1$31 ==.
                           00009D  1516 	XG$Timer_Init$0$0 ==.
      0000FF 22               [24] 1517 	ret
                                   1518 ;------------------------------------------------------------
                                   1519 ;Allocation info for local variables in function 'UART_Init'
                                   1520 ;------------------------------------------------------------
                           00009E  1521 	G$UART_Init$0$0 ==.
                           00009E  1522 	C$sawtooth.c$86$1$31 ==.
                                   1523 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:86: void UART_Init()
                                   1524 ;	-----------------------------------------
                                   1525 ;	 function UART_Init
                                   1526 ;	-----------------------------------------
      000100                       1527 _UART_Init:
                           00009E  1528 	C$sawtooth.c$88$1$32 ==.
                                   1529 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:88: SFRPAGE   = UART0_PAGE;//Same as Timer 2 and Timer 1 SFR PAGES
      000100 75 84 00         [24] 1530 	mov	_SFRPAGE,#0x00
                           0000A1  1531 	C$sawtooth.c$89$1$32 ==.
                                   1532 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:89: TR2		  = 1;//Start Timer 2
      000103 D2 CA            [12] 1533 	setb	_TR2
                           0000A3  1534 	C$sawtooth.c$90$1$32 ==.
                                   1535 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:90: SCON0     = 0x50;
      000105 75 98 50         [24] 1536 	mov	_SCON0,#0x50
                           0000A6  1537 	C$sawtooth.c$91$1$32 ==.
                                   1538 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:91: SSTA0   = 0x15;
      000108 75 91 15         [24] 1539 	mov	_SSTA0,#0x15
                           0000A9  1540 	C$sawtooth.c$92$1$32 ==.
                                   1541 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:92: TI0		  = 1; // Indicate TX0 is ready
      00010B D2 99            [12] 1542 	setb	_TI0
                           0000AB  1543 	C$sawtooth.c$93$1$32 ==.
                           0000AB  1544 	XG$UART_Init$0$0 ==.
      00010D 22               [24] 1545 	ret
                                   1546 ;------------------------------------------------------------
                                   1547 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1548 ;------------------------------------------------------------
                           0000AC  1549 	G$Port_IO_Init$0$0 ==.
                           0000AC  1550 	C$sawtooth.c$95$1$32 ==.
                                   1551 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:95: void Port_IO_Init()
                                   1552 ;	-----------------------------------------
                                   1553 ;	 function Port_IO_Init
                                   1554 ;	-----------------------------------------
      00010E                       1555 _Port_IO_Init:
                           0000AC  1556 	C$sawtooth.c$97$1$33 ==.
                                   1557 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:97: SFRPAGE   = CONFIG_PAGE;
      00010E 75 84 0F         [24] 1558 	mov	_SFRPAGE,#0x0F
                           0000AF  1559 	C$sawtooth.c$98$1$33 ==.
                                   1560 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:98: WDTCN   = 0xDE;             // Disable watchdog timer.
      000111 75 FF DE         [24] 1561 	mov	_WDTCN,#0xDE
                           0000B2  1562 	C$sawtooth.c$99$1$33 ==.
                                   1563 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:99: WDTCN   = 0xAD;
      000114 75 FF AD         [24] 1564 	mov	_WDTCN,#0xAD
                           0000B5  1565 	C$sawtooth.c$100$1$33 ==.
                                   1566 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:100: XBR0 = 0x04; // enable UART0
      000117 75 E1 04         [24] 1567 	mov	_XBR0,#0x04
                           0000B8  1568 	C$sawtooth.c$101$1$33 ==.
                                   1569 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:101: XBR2 = 0x40;//enable crossbar
      00011A 75 E3 40         [24] 1570 	mov	_XBR2,#0x40
                           0000BB  1571 	C$sawtooth.c$103$1$33 ==.
                                   1572 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:103: P0MDOUT = 0x01;
      00011D 75 A4 01         [24] 1573 	mov	_P0MDOUT,#0x01
                           0000BE  1574 	C$sawtooth.c$105$1$33 ==.
                                   1575 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:105: P0 = 0x02;
      000120 75 80 02         [24] 1576 	mov	_P0,#0x02
                           0000C1  1577 	C$sawtooth.c$108$1$33 ==.
                                   1578 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:108: EA = 1;
      000123 D2 AF            [12] 1579 	setb	_EA
                           0000C3  1580 	C$sawtooth.c$109$1$33 ==.
                           0000C3  1581 	XG$Port_IO_Init$0$0 ==.
      000125 22               [24] 1582 	ret
                                   1583 ;------------------------------------------------------------
                                   1584 ;Allocation info for local variables in function 'DAC_INIT'
                                   1585 ;------------------------------------------------------------
                           0000C4  1586 	G$DAC_INIT$0$0 ==.
                           0000C4  1587 	C$sawtooth.c$111$1$33 ==.
                                   1588 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:111: void DAC_INIT()
                                   1589 ;	-----------------------------------------
                                   1590 ;	 function DAC_INIT
                                   1591 ;	-----------------------------------------
      000126                       1592 _DAC_INIT:
                           0000C4  1593 	C$sawtooth.c$113$1$34 ==.
                                   1594 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:113: SFRPAGE = DAC0_PAGE;
      000126 75 84 00         [24] 1595 	mov	_SFRPAGE,#0x00
                           0000C7  1596 	C$sawtooth.c$114$1$34 ==.
                                   1597 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:114: REF0CN = 0x03;
      000129 75 D1 03         [24] 1598 	mov	_REF0CN,#0x03
                           0000CA  1599 	C$sawtooth.c$115$1$34 ==.
                                   1600 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:115: DAC0CN = 0x80;
      00012C 75 D4 80         [24] 1601 	mov	_DAC0CN,#0x80
                           0000CD  1602 	C$sawtooth.c$116$1$34 ==.
                                   1603 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:116: AMX0CF = 0x00;
      00012F 75 BA 00         [24] 1604 	mov	_AMX0CF,#0x00
                           0000D0  1605 	C$sawtooth.c$117$1$34 ==.
                                   1606 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:117: ADC0CF = 0x40;
      000132 75 BC 40         [24] 1607 	mov	_ADC0CF,#0x40
                           0000D3  1608 	C$sawtooth.c$118$1$34 ==.
                                   1609 ;	C:\Users\Christina\Documents\MPS\Versions\Lab_04\Part II - Sawtooth\sawtooth.c:118: ADC0CN = 0x80; // enable ADC conversion
      000135 75 E8 80         [24] 1610 	mov	_ADC0CN,#0x80
                           0000D6  1611 	C$sawtooth.c$119$1$34 ==.
                           0000D6  1612 	XG$DAC_INIT$0$0 ==.
      000138 22               [24] 1613 	ret
                                   1614 	.area CSEG    (CODE)
                                   1615 	.area CONST   (CODE)
                           000000  1616 Fsawtooth$__str_0$0$0 == .
      000771                       1617 ___str_0:
      000771 1B                    1618 	.db 0x1B
      000772 5B 32 4A              1619 	.ascii "[2J"
      000775 00                    1620 	.db 0x00
                                   1621 	.area XINIT   (CODE)
                                   1622 	.area CABS    (ABS,CODE)
