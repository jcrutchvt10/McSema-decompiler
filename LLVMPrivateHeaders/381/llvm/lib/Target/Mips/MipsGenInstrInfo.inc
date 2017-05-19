/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_ENUM
#undef GET_INSTRINFO_ENUM
namespace llvm {

namespace Mips {
  enum {
    PHI	= 0,
    INLINEASM	= 1,
    CFI_INSTRUCTION	= 2,
    EH_LABEL	= 3,
    GC_LABEL	= 4,
    KILL	= 5,
    EXTRACT_SUBREG	= 6,
    INSERT_SUBREG	= 7,
    IMPLICIT_DEF	= 8,
    SUBREG_TO_REG	= 9,
    COPY_TO_REGCLASS	= 10,
    DBG_VALUE	= 11,
    REG_SEQUENCE	= 12,
    COPY	= 13,
    BUNDLE	= 14,
    LIFETIME_START	= 15,
    LIFETIME_END	= 16,
    STACKMAP	= 17,
    PATCHPOINT	= 18,
    LOAD_STACK_GUARD	= 19,
    STATEPOINT	= 20,
    LOCAL_ESCAPE	= 21,
    FAULTING_LOAD_OP	= 22,
    ABSQ_S_PH	= 23,
    ABSQ_S_PH_MM	= 24,
    ABSQ_S_QB	= 25,
    ABSQ_S_QB_MMR2	= 26,
    ABSQ_S_W	= 27,
    ABSQ_S_W_MM	= 28,
    ABS_D_MMR6	= 29,
    ABS_S_MMR6	= 30,
    ADD	= 31,
    ADDIUPC	= 32,
    ADDIUPC_MM	= 33,
    ADDIUPC_MMR6	= 34,
    ADDIUR1SP_MM	= 35,
    ADDIUR2_MM	= 36,
    ADDIUS5_MM	= 37,
    ADDIUSP_MM	= 38,
    ADDIU_MMR6	= 39,
    ADDQH_PH	= 40,
    ADDQH_PH_MMR2	= 41,
    ADDQH_R_PH	= 42,
    ADDQH_R_PH_MMR2	= 43,
    ADDQH_R_W	= 44,
    ADDQH_R_W_MMR2	= 45,
    ADDQH_W	= 46,
    ADDQH_W_MMR2	= 47,
    ADDQ_PH	= 48,
    ADDQ_PH_MM	= 49,
    ADDQ_S_PH	= 50,
    ADDQ_S_PH_MM	= 51,
    ADDQ_S_W	= 52,
    ADDQ_S_W_MM	= 53,
    ADDSC	= 54,
    ADDSC_MM	= 55,
    ADDS_A_B	= 56,
    ADDS_A_D	= 57,
    ADDS_A_H	= 58,
    ADDS_A_W	= 59,
    ADDS_S_B	= 60,
    ADDS_S_D	= 61,
    ADDS_S_H	= 62,
    ADDS_S_W	= 63,
    ADDS_U_B	= 64,
    ADDS_U_D	= 65,
    ADDS_U_H	= 66,
    ADDS_U_W	= 67,
    ADDU16_MM	= 68,
    ADDU16_MMR6	= 69,
    ADDUH_QB	= 70,
    ADDUH_QB_MMR2	= 71,
    ADDUH_R_QB	= 72,
    ADDUH_R_QB_MMR2	= 73,
    ADDU_MMR6	= 74,
    ADDU_PH	= 75,
    ADDU_PH_MMR2	= 76,
    ADDU_QB	= 77,
    ADDU_QB_MM	= 78,
    ADDU_S_PH	= 79,
    ADDU_S_PH_MMR2	= 80,
    ADDU_S_QB	= 81,
    ADDU_S_QB_MM	= 82,
    ADDVI_B	= 83,
    ADDVI_D	= 84,
    ADDVI_H	= 85,
    ADDVI_W	= 86,
    ADDV_B	= 87,
    ADDV_D	= 88,
    ADDV_H	= 89,
    ADDV_W	= 90,
    ADDWC	= 91,
    ADDWC_MM	= 92,
    ADD_A_B	= 93,
    ADD_A_D	= 94,
    ADD_A_H	= 95,
    ADD_A_W	= 96,
    ADD_MM	= 97,
    ADD_MMR6	= 98,
    ADDi	= 99,
    ADDi_MM	= 100,
    ADDiu	= 101,
    ADDiu_MM	= 102,
    ADDu	= 103,
    ADDu_MM	= 104,
    ADJCALLSTACKDOWN	= 105,
    ADJCALLSTACKUP	= 106,
    ALIGN	= 107,
    ALIGN_MMR6	= 108,
    ALUIPC	= 109,
    ALUIPC_MMR6	= 110,
    AND	= 111,
    AND16_MM	= 112,
    AND16_MMR6	= 113,
    AND64	= 114,
    ANDI16_MM	= 115,
    ANDI16_MMR6	= 116,
    ANDI_B	= 117,
    ANDI_MMR6	= 118,
    AND_MM	= 119,
    AND_MMR6	= 120,
    AND_V	= 121,
    AND_V_D_PSEUDO	= 122,
    AND_V_H_PSEUDO	= 123,
    AND_V_W_PSEUDO	= 124,
    ANDi	= 125,
    ANDi64	= 126,
    ANDi_MM	= 127,
    APPEND	= 128,
    ASUB_S_B	= 129,
    ASUB_S_D	= 130,
    ASUB_S_H	= 131,
    ASUB_S_W	= 132,
    ASUB_U_B	= 133,
    ASUB_U_D	= 134,
    ASUB_U_H	= 135,
    ASUB_U_W	= 136,
    ATOMIC_CMP_SWAP_I16	= 137,
    ATOMIC_CMP_SWAP_I32	= 138,
    ATOMIC_CMP_SWAP_I64	= 139,
    ATOMIC_CMP_SWAP_I8	= 140,
    ATOMIC_LOAD_ADD_I16	= 141,
    ATOMIC_LOAD_ADD_I32	= 142,
    ATOMIC_LOAD_ADD_I64	= 143,
    ATOMIC_LOAD_ADD_I8	= 144,
    ATOMIC_LOAD_AND_I16	= 145,
    ATOMIC_LOAD_AND_I32	= 146,
    ATOMIC_LOAD_AND_I64	= 147,
    ATOMIC_LOAD_AND_I8	= 148,
    ATOMIC_LOAD_NAND_I16	= 149,
    ATOMIC_LOAD_NAND_I32	= 150,
    ATOMIC_LOAD_NAND_I64	= 151,
    ATOMIC_LOAD_NAND_I8	= 152,
    ATOMIC_LOAD_OR_I16	= 153,
    ATOMIC_LOAD_OR_I32	= 154,
    ATOMIC_LOAD_OR_I64	= 155,
    ATOMIC_LOAD_OR_I8	= 156,
    ATOMIC_LOAD_SUB_I16	= 157,
    ATOMIC_LOAD_SUB_I32	= 158,
    ATOMIC_LOAD_SUB_I64	= 159,
    ATOMIC_LOAD_SUB_I8	= 160,
    ATOMIC_LOAD_XOR_I16	= 161,
    ATOMIC_LOAD_XOR_I32	= 162,
    ATOMIC_LOAD_XOR_I64	= 163,
    ATOMIC_LOAD_XOR_I8	= 164,
    ATOMIC_SWAP_I16	= 165,
    ATOMIC_SWAP_I32	= 166,
    ATOMIC_SWAP_I64	= 167,
    ATOMIC_SWAP_I8	= 168,
    AUI	= 169,
    AUIPC	= 170,
    AUIPC_MMR6	= 171,
    AUI_MMR6	= 172,
    AVER_S_B	= 173,
    AVER_S_D	= 174,
    AVER_S_H	= 175,
    AVER_S_W	= 176,
    AVER_U_B	= 177,
    AVER_U_D	= 178,
    AVER_U_H	= 179,
    AVER_U_W	= 180,
    AVE_S_B	= 181,
    AVE_S_D	= 182,
    AVE_S_H	= 183,
    AVE_S_W	= 184,
    AVE_U_B	= 185,
    AVE_U_D	= 186,
    AVE_U_H	= 187,
    AVE_U_W	= 188,
    AddiuRxImmX16	= 189,
    AddiuRxPcImmX16	= 190,
    AddiuRxRxImm16	= 191,
    AddiuRxRxImmX16	= 192,
    AddiuRxRyOffMemX16	= 193,
    AddiuSpImm16	= 194,
    AddiuSpImmX16	= 195,
    AdduRxRyRz16	= 196,
    AndRxRxRy16	= 197,
    B	= 198,
    B16_MM	= 199,
    BADDu	= 200,
    BAL	= 201,
    BALC	= 202,
    BALC_MMR6	= 203,
    BALIGN	= 204,
    BAL_BR	= 205,
    BBIT0	= 206,
    BBIT032	= 207,
    BBIT1	= 208,
    BBIT132	= 209,
    BC	= 210,
    BC16_MMR6	= 211,
    BC1EQZ	= 212,
    BC1F	= 213,
    BC1FL	= 214,
    BC1F_MM	= 215,
    BC1NEZ	= 216,
    BC1T	= 217,
    BC1TL	= 218,
    BC1T_MM	= 219,
    BC2EQZ	= 220,
    BC2NEZ	= 221,
    BCLRI_B	= 222,
    BCLRI_D	= 223,
    BCLRI_H	= 224,
    BCLRI_W	= 225,
    BCLR_B	= 226,
    BCLR_D	= 227,
    BCLR_H	= 228,
    BCLR_W	= 229,
    BC_MMR6	= 230,
    BEQ	= 231,
    BEQ64	= 232,
    BEQC	= 233,
    BEQL	= 234,
    BEQZ16_MM	= 235,
    BEQZALC	= 236,
    BEQZALC_MMR6	= 237,
    BEQZC	= 238,
    BEQZC16_MMR6	= 239,
    BEQZC_MM	= 240,
    BEQ_MM	= 241,
    BGE	= 242,
    BGEC	= 243,
    BGEImmMacro	= 244,
    BGEL	= 245,
    BGELImmMacro	= 246,
    BGEU	= 247,
    BGEUC	= 248,
    BGEUImmMacro	= 249,
    BGEUL	= 250,
    BGEULImmMacro	= 251,
    BGEZ	= 252,
    BGEZ64	= 253,
    BGEZAL	= 254,
    BGEZALC	= 255,
    BGEZALC_MMR6	= 256,
    BGEZALL	= 257,
    BGEZALS_MM	= 258,
    BGEZAL_MM	= 259,
    BGEZC	= 260,
    BGEZL	= 261,
    BGEZ_MM	= 262,
    BGT	= 263,
    BGTImmMacro	= 264,
    BGTL	= 265,
    BGTLImmMacro	= 266,
    BGTU	= 267,
    BGTUImmMacro	= 268,
    BGTUL	= 269,
    BGTULImmMacro	= 270,
    BGTZ	= 271,
    BGTZ64	= 272,
    BGTZALC	= 273,
    BGTZALC_MMR6	= 274,
    BGTZC	= 275,
    BGTZL	= 276,
    BGTZ_MM	= 277,
    BINSLI_B	= 278,
    BINSLI_D	= 279,
    BINSLI_H	= 280,
    BINSLI_W	= 281,
    BINSL_B	= 282,
    BINSL_D	= 283,
    BINSL_H	= 284,
    BINSL_W	= 285,
    BINSRI_B	= 286,
    BINSRI_D	= 287,
    BINSRI_H	= 288,
    BINSRI_W	= 289,
    BINSR_B	= 290,
    BINSR_D	= 291,
    BINSR_H	= 292,
    BINSR_W	= 293,
    BITREV	= 294,
    BITSWAP	= 295,
    BITSWAP_MMR6	= 296,
    BLE	= 297,
    BLEImmMacro	= 298,
    BLEL	= 299,
    BLELImmMacro	= 300,
    BLEU	= 301,
    BLEUImmMacro	= 302,
    BLEUL	= 303,
    BLEULImmMacro	= 304,
    BLEZ	= 305,
    BLEZ64	= 306,
    BLEZALC	= 307,
    BLEZALC_MMR6	= 308,
    BLEZC	= 309,
    BLEZL	= 310,
    BLEZ_MM	= 311,
    BLT	= 312,
    BLTC	= 313,
    BLTImmMacro	= 314,
    BLTL	= 315,
    BLTLImmMacro	= 316,
    BLTU	= 317,
    BLTUC	= 318,
    BLTUImmMacro	= 319,
    BLTUL	= 320,
    BLTULImmMacro	= 321,
    BLTZ	= 322,
    BLTZ64	= 323,
    BLTZAL	= 324,
    BLTZALC	= 325,
    BLTZALC_MMR6	= 326,
    BLTZALL	= 327,
    BLTZALS_MM	= 328,
    BLTZAL_MM	= 329,
    BLTZC	= 330,
    BLTZL	= 331,
    BLTZ_MM	= 332,
    BMNZI_B	= 333,
    BMNZ_V	= 334,
    BMZI_B	= 335,
    BMZ_V	= 336,
    BNE	= 337,
    BNE64	= 338,
    BNEC	= 339,
    BNEGI_B	= 340,
    BNEGI_D	= 341,
    BNEGI_H	= 342,
    BNEGI_W	= 343,
    BNEG_B	= 344,
    BNEG_D	= 345,
    BNEG_H	= 346,
    BNEG_W	= 347,
    BNEL	= 348,
    BNEZ16_MM	= 349,
    BNEZALC	= 350,
    BNEZALC_MMR6	= 351,
    BNEZC	= 352,
    BNEZC16_MMR6	= 353,
    BNEZC_MM	= 354,
    BNE_MM	= 355,
    BNVC	= 356,
    BNZ_B	= 357,
    BNZ_D	= 358,
    BNZ_H	= 359,
    BNZ_V	= 360,
    BNZ_W	= 361,
    BOVC	= 362,
    BPOSGE32	= 363,
    BPOSGE32_PSEUDO	= 364,
    BREAK	= 365,
    BREAK16_MM	= 366,
    BREAK16_MMR6	= 367,
    BREAK_MM	= 368,
    BREAK_MMR6	= 369,
    BSELI_B	= 370,
    BSEL_D_PSEUDO	= 371,
    BSEL_FD_PSEUDO	= 372,
    BSEL_FW_PSEUDO	= 373,
    BSEL_H_PSEUDO	= 374,
    BSEL_V	= 375,
    BSEL_W_PSEUDO	= 376,
    BSETI_B	= 377,
    BSETI_D	= 378,
    BSETI_H	= 379,
    BSETI_W	= 380,
    BSET_B	= 381,
    BSET_D	= 382,
    BSET_H	= 383,
    BSET_W	= 384,
    BZ_B	= 385,
    BZ_D	= 386,
    BZ_H	= 387,
    BZ_V	= 388,
    BZ_W	= 389,
    B_MMR6_Pseudo	= 390,
    B_MM_Pseudo	= 391,
    BeqImm	= 392,
    BeqzRxImm16	= 393,
    BeqzRxImmX16	= 394,
    Bimm16	= 395,
    BimmX16	= 396,
    BneImm	= 397,
    BnezRxImm16	= 398,
    BnezRxImmX16	= 399,
    Break16	= 400,
    Bteqz16	= 401,
    BteqzT8CmpX16	= 402,
    BteqzT8CmpiX16	= 403,
    BteqzT8SltX16	= 404,
    BteqzT8SltiX16	= 405,
    BteqzT8SltiuX16	= 406,
    BteqzT8SltuX16	= 407,
    BteqzX16	= 408,
    Btnez16	= 409,
    BtnezT8CmpX16	= 410,
    BtnezT8CmpiX16	= 411,
    BtnezT8SltX16	= 412,
    BtnezT8SltiX16	= 413,
    BtnezT8SltiuX16	= 414,
    BtnezT8SltuX16	= 415,
    BtnezX16	= 416,
    BuildPairF64	= 417,
    BuildPairF64_64	= 418,
    CACHE	= 419,
    CACHEE	= 420,
    CACHEE_MM	= 421,
    CACHEE_MMR6	= 422,
    CACHE_MM	= 423,
    CACHE_MMR6	= 424,
    CACHE_R6	= 425,
    CEIL_L_D64	= 426,
    CEIL_L_D_MMR6	= 427,
    CEIL_L_S	= 428,
    CEIL_L_S_MMR6	= 429,
    CEIL_W_D32	= 430,
    CEIL_W_D64	= 431,
    CEIL_W_D_MMR6	= 432,
    CEIL_W_MM	= 433,
    CEIL_W_S	= 434,
    CEIL_W_S_MM	= 435,
    CEIL_W_S_MMR6	= 436,
    CEQI_B	= 437,
    CEQI_D	= 438,
    CEQI_H	= 439,
    CEQI_W	= 440,
    CEQ_B	= 441,
    CEQ_D	= 442,
    CEQ_H	= 443,
    CEQ_W	= 444,
    CFC1	= 445,
    CFC1_MM	= 446,
    CFCMSA	= 447,
    CINS	= 448,
    CINS32	= 449,
    CLASS_D	= 450,
    CLASS_D_MMR6	= 451,
    CLASS_S	= 452,
    CLASS_S_MMR6	= 453,
    CLEI_S_B	= 454,
    CLEI_S_D	= 455,
    CLEI_S_H	= 456,
    CLEI_S_W	= 457,
    CLEI_U_B	= 458,
    CLEI_U_D	= 459,
    CLEI_U_H	= 460,
    CLEI_U_W	= 461,
    CLE_S_B	= 462,
    CLE_S_D	= 463,
    CLE_S_H	= 464,
    CLE_S_W	= 465,
    CLE_U_B	= 466,
    CLE_U_D	= 467,
    CLE_U_H	= 468,
    CLE_U_W	= 469,
    CLO	= 470,
    CLO_MM	= 471,
    CLO_MMR6	= 472,
    CLO_R6	= 473,
    CLTI_S_B	= 474,
    CLTI_S_D	= 475,
    CLTI_S_H	= 476,
    CLTI_S_W	= 477,
    CLTI_U_B	= 478,
    CLTI_U_D	= 479,
    CLTI_U_H	= 480,
    CLTI_U_W	= 481,
    CLT_S_B	= 482,
    CLT_S_D	= 483,
    CLT_S_H	= 484,
    CLT_S_W	= 485,
    CLT_U_B	= 486,
    CLT_U_D	= 487,
    CLT_U_H	= 488,
    CLT_U_W	= 489,
    CLZ	= 490,
    CLZ_MM	= 491,
    CLZ_MMR6	= 492,
    CLZ_R6	= 493,
    CMPGDU_EQ_QB	= 494,
    CMPGDU_LE_QB	= 495,
    CMPGDU_LT_QB	= 496,
    CMPGU_EQ_QB	= 497,
    CMPGU_LE_QB	= 498,
    CMPGU_LT_QB	= 499,
    CMPU_EQ_QB	= 500,
    CMPU_LE_QB	= 501,
    CMPU_LT_QB	= 502,
    CMP_AF_D_MMR6	= 503,
    CMP_AF_S_MMR6	= 504,
    CMP_EQ_D	= 505,
    CMP_EQ_D_MMR6	= 506,
    CMP_EQ_PH	= 507,
    CMP_EQ_S	= 508,
    CMP_EQ_S_MMR6	= 509,
    CMP_F_D	= 510,
    CMP_F_S	= 511,
    CMP_LE_D	= 512,
    CMP_LE_D_MMR6	= 513,
    CMP_LE_PH	= 514,
    CMP_LE_S	= 515,
    CMP_LE_S_MMR6	= 516,
    CMP_LT_D	= 517,
    CMP_LT_D_MMR6	= 518,
    CMP_LT_PH	= 519,
    CMP_LT_S	= 520,
    CMP_LT_S_MMR6	= 521,
    CMP_SAF_D	= 522,
    CMP_SAF_D_MMR6	= 523,
    CMP_SAF_S	= 524,
    CMP_SAF_S_MMR6	= 525,
    CMP_SEQ_D	= 526,
    CMP_SEQ_D_MMR6	= 527,
    CMP_SEQ_S	= 528,
    CMP_SEQ_S_MMR6	= 529,
    CMP_SLE_D	= 530,
    CMP_SLE_D_MMR6	= 531,
    CMP_SLE_S	= 532,
    CMP_SLE_S_MMR6	= 533,
    CMP_SLT_D	= 534,
    CMP_SLT_D_MMR6	= 535,
    CMP_SLT_S	= 536,
    CMP_SLT_S_MMR6	= 537,
    CMP_SUEQ_D	= 538,
    CMP_SUEQ_D_MMR6	= 539,
    CMP_SUEQ_S	= 540,
    CMP_SUEQ_S_MMR6	= 541,
    CMP_SULE_D	= 542,
    CMP_SULE_D_MMR6	= 543,
    CMP_SULE_S	= 544,
    CMP_SULE_S_MMR6	= 545,
    CMP_SULT_D	= 546,
    CMP_SULT_D_MMR6	= 547,
    CMP_SULT_S	= 548,
    CMP_SULT_S_MMR6	= 549,
    CMP_SUN_D	= 550,
    CMP_SUN_D_MMR6	= 551,
    CMP_SUN_S	= 552,
    CMP_SUN_S_MMR6	= 553,
    CMP_UEQ_D	= 554,
    CMP_UEQ_D_MMR6	= 555,
    CMP_UEQ_S	= 556,
    CMP_UEQ_S_MMR6	= 557,
    CMP_ULE_D	= 558,
    CMP_ULE_D_MMR6	= 559,
    CMP_ULE_S	= 560,
    CMP_ULE_S_MMR6	= 561,
    CMP_ULT_D	= 562,
    CMP_ULT_D_MMR6	= 563,
    CMP_ULT_S	= 564,
    CMP_ULT_S_MMR6	= 565,
    CMP_UN_D	= 566,
    CMP_UN_D_MMR6	= 567,
    CMP_UN_S	= 568,
    CMP_UN_S_MMR6	= 569,
    CONSTPOOL_ENTRY	= 570,
    COPY_FD_PSEUDO	= 571,
    COPY_FW_PSEUDO	= 572,
    COPY_S_B	= 573,
    COPY_S_D	= 574,
    COPY_S_H	= 575,
    COPY_S_W	= 576,
    COPY_U_B	= 577,
    COPY_U_H	= 578,
    COPY_U_W	= 579,
    CTC1	= 580,
    CTC1_MM	= 581,
    CTCMSA	= 582,
    CVT_D32_S	= 583,
    CVT_D32_W	= 584,
    CVT_D32_W_MM	= 585,
    CVT_D64_L	= 586,
    CVT_D64_S	= 587,
    CVT_D64_W	= 588,
    CVT_D_L_MMR6	= 589,
    CVT_D_S_MM	= 590,
    CVT_D_S_MMR6	= 591,
    CVT_D_W_MMR6	= 592,
    CVT_L_D64	= 593,
    CVT_L_D64_MM	= 594,
    CVT_L_D_MMR6	= 595,
    CVT_L_S	= 596,
    CVT_L_S_MM	= 597,
    CVT_L_S_MMR6	= 598,
    CVT_S_D32	= 599,
    CVT_S_D32_MM	= 600,
    CVT_S_D64	= 601,
    CVT_S_D_MMR6	= 602,
    CVT_S_L	= 603,
    CVT_S_L_MMR6	= 604,
    CVT_S_W	= 605,
    CVT_S_W_MM	= 606,
    CVT_S_W_MMR6	= 607,
    CVT_W_D32	= 608,
    CVT_W_D64	= 609,
    CVT_W_D_MMR6	= 610,
    CVT_W_MM	= 611,
    CVT_W_S	= 612,
    CVT_W_S_MM	= 613,
    CVT_W_S_MMR6	= 614,
    C_EQ_D32	= 615,
    C_EQ_D64	= 616,
    C_EQ_S	= 617,
    C_F_D32	= 618,
    C_F_D64	= 619,
    C_F_S	= 620,
    C_LE_D32	= 621,
    C_LE_D64	= 622,
    C_LE_S	= 623,
    C_LT_D32	= 624,
    C_LT_D64	= 625,
    C_LT_S	= 626,
    C_NGE_D32	= 627,
    C_NGE_D64	= 628,
    C_NGE_S	= 629,
    C_NGLE_D32	= 630,
    C_NGLE_D64	= 631,
    C_NGLE_S	= 632,
    C_NGL_D32	= 633,
    C_NGL_D64	= 634,
    C_NGL_S	= 635,
    C_NGT_D32	= 636,
    C_NGT_D64	= 637,
    C_NGT_S	= 638,
    C_OLE_D32	= 639,
    C_OLE_D64	= 640,
    C_OLE_S	= 641,
    C_OLT_D32	= 642,
    C_OLT_D64	= 643,
    C_OLT_S	= 644,
    C_SEQ_D32	= 645,
    C_SEQ_D64	= 646,
    C_SEQ_S	= 647,
    C_SF_D32	= 648,
    C_SF_D64	= 649,
    C_SF_S	= 650,
    C_UEQ_D32	= 651,
    C_UEQ_D64	= 652,
    C_UEQ_S	= 653,
    C_ULE_D32	= 654,
    C_ULE_D64	= 655,
    C_ULE_S	= 656,
    C_ULT_D32	= 657,
    C_ULT_D64	= 658,
    C_ULT_S	= 659,
    C_UN_D32	= 660,
    C_UN_D64	= 661,
    C_UN_S	= 662,
    CmpRxRy16	= 663,
    CmpiRxImm16	= 664,
    CmpiRxImmX16	= 665,
    Constant32	= 666,
    DADD	= 667,
    DADDi	= 668,
    DADDiu	= 669,
    DADDu	= 670,
    DAHI	= 671,
    DAHI_MM64R6	= 672,
    DALIGN	= 673,
    DALIGN_MM64R6	= 674,
    DATI	= 675,
    DATI_MM64R6	= 676,
    DAUI	= 677,
    DAUI_MM64R6	= 678,
    DBITSWAP	= 679,
    DCLO	= 680,
    DCLO_R6	= 681,
    DCLZ	= 682,
    DCLZ_R6	= 683,
    DDIV	= 684,
    DDIVU	= 685,
    DDIVU_MM64R6	= 686,
    DDIV_MM64R6	= 687,
    DERET	= 688,
    DERET_MM	= 689,
    DERET_MMR6	= 690,
    DEXT	= 691,
    DEXTM	= 692,
    DEXTM_MM64R6	= 693,
    DEXTU	= 694,
    DEXTU_MM64R6	= 695,
    DEXT_MM64R6	= 696,
    DI	= 697,
    DINS	= 698,
    DINSM	= 699,
    DINSU	= 700,
    DIV	= 701,
    DIVU	= 702,
    DIVU_MMR6	= 703,
    DIV_MMR6	= 704,
    DIV_S_B	= 705,
    DIV_S_D	= 706,
    DIV_S_H	= 707,
    DIV_S_W	= 708,
    DIV_U_B	= 709,
    DIV_U_D	= 710,
    DIV_U_H	= 711,
    DIV_U_W	= 712,
    DI_MM	= 713,
    DI_MMR6	= 714,
    DLSA	= 715,
    DLSA_R6	= 716,
    DMFC0	= 717,
    DMFC1	= 718,
    DMFC2	= 719,
    DMFC2_OCTEON	= 720,
    DMOD	= 721,
    DMODU	= 722,
    DMODU_MM64R6	= 723,
    DMOD_MM64R6	= 724,
    DMTC0	= 725,
    DMTC1	= 726,
    DMTC2	= 727,
    DMTC2_OCTEON	= 728,
    DMUH	= 729,
    DMUHU	= 730,
    DMUL	= 731,
    DMULT	= 732,
    DMULTu	= 733,
    DMULU	= 734,
    DMUL_R6	= 735,
    DOTP_S_D	= 736,
    DOTP_S_H	= 737,
    DOTP_S_W	= 738,
    DOTP_U_D	= 739,
    DOTP_U_H	= 740,
    DOTP_U_W	= 741,
    DPADD_S_D	= 742,
    DPADD_S_H	= 743,
    DPADD_S_W	= 744,
    DPADD_U_D	= 745,
    DPADD_U_H	= 746,
    DPADD_U_W	= 747,
    DPAQX_SA_W_PH	= 748,
    DPAQX_SA_W_PH_MMR2	= 749,
    DPAQX_S_W_PH	= 750,
    DPAQX_S_W_PH_MMR2	= 751,
    DPAQ_SA_L_W	= 752,
    DPAQ_SA_L_W_MM	= 753,
    DPAQ_S_W_PH	= 754,
    DPAQ_S_W_PH_MM	= 755,
    DPAU_H_QBL	= 756,
    DPAU_H_QBL_MM	= 757,
    DPAU_H_QBR	= 758,
    DPAU_H_QBR_MM	= 759,
    DPAX_W_PH	= 760,
    DPAX_W_PH_MMR2	= 761,
    DPA_W_PH	= 762,
    DPA_W_PH_MMR2	= 763,
    DPOP	= 764,
    DPSQX_SA_W_PH	= 765,
    DPSQX_SA_W_PH_MMR2	= 766,
    DPSQX_S_W_PH	= 767,
    DPSQX_S_W_PH_MMR2	= 768,
    DPSQ_SA_L_W	= 769,
    DPSQ_SA_L_W_MM	= 770,
    DPSQ_S_W_PH	= 771,
    DPSQ_S_W_PH_MM	= 772,
    DPSUB_S_D	= 773,
    DPSUB_S_H	= 774,
    DPSUB_S_W	= 775,
    DPSUB_U_D	= 776,
    DPSUB_U_H	= 777,
    DPSUB_U_W	= 778,
    DPSU_H_QBL	= 779,
    DPSU_H_QBL_MM	= 780,
    DPSU_H_QBR	= 781,
    DPSU_H_QBR_MM	= 782,
    DPSX_W_PH	= 783,
    DPSX_W_PH_MMR2	= 784,
    DPS_W_PH	= 785,
    DPS_W_PH_MMR2	= 786,
    DROL	= 787,
    DROLImm	= 788,
    DROR	= 789,
    DRORImm	= 790,
    DROTR	= 791,
    DROTR32	= 792,
    DROTRV	= 793,
    DSBH	= 794,
    DSDIV	= 795,
    DSDivMacro	= 796,
    DSHD	= 797,
    DSLL	= 798,
    DSLL32	= 799,
    DSLL64_32	= 800,
    DSLLV	= 801,
    DSRA	= 802,
    DSRA32	= 803,
    DSRAV	= 804,
    DSRL	= 805,
    DSRL32	= 806,
    DSRLV	= 807,
    DSUB	= 808,
    DSUBu	= 809,
    DUDIV	= 810,
    DUDivMacro	= 811,
    DivRxRy16	= 812,
    DivuRxRy16	= 813,
    EHB	= 814,
    EHB_MM	= 815,
    EHB_MMR6	= 816,
    EI	= 817,
    EI_MM	= 818,
    EI_MMR6	= 819,
    ERET	= 820,
    ERETNC	= 821,
    ERETNC_MMR6	= 822,
    ERET_MM	= 823,
    ERET_MMR6	= 824,
    ERet	= 825,
    EXT	= 826,
    EXTP	= 827,
    EXTPDP	= 828,
    EXTPDPV	= 829,
    EXTPDPV_MM	= 830,
    EXTPDP_MM	= 831,
    EXTPV	= 832,
    EXTPV_MM	= 833,
    EXTP_MM	= 834,
    EXTRV_RS_W	= 835,
    EXTRV_RS_W_MM	= 836,
    EXTRV_R_W	= 837,
    EXTRV_R_W_MM	= 838,
    EXTRV_S_H	= 839,
    EXTRV_S_H_MM	= 840,
    EXTRV_W	= 841,
    EXTRV_W_MM	= 842,
    EXTR_RS_W	= 843,
    EXTR_RS_W_MM	= 844,
    EXTR_R_W	= 845,
    EXTR_R_W_MM	= 846,
    EXTR_S_H	= 847,
    EXTR_S_H_MM	= 848,
    EXTR_W	= 849,
    EXTR_W_MM	= 850,
    EXTS	= 851,
    EXTS32	= 852,
    EXT_MM	= 853,
    ExtractElementF64	= 854,
    ExtractElementF64_64	= 855,
    FABS_D	= 856,
    FABS_D32	= 857,
    FABS_D64	= 858,
    FABS_MM	= 859,
    FABS_S	= 860,
    FABS_S_MM	= 861,
    FABS_W	= 862,
    FADD_D	= 863,
    FADD_D32	= 864,
    FADD_D64	= 865,
    FADD_D_MMR6	= 866,
    FADD_MM	= 867,
    FADD_S	= 868,
    FADD_S_MM	= 869,
    FADD_S_MMR6	= 870,
    FADD_W	= 871,
    FCAF_D	= 872,
    FCAF_W	= 873,
    FCEQ_D	= 874,
    FCEQ_W	= 875,
    FCLASS_D	= 876,
    FCLASS_W	= 877,
    FCLE_D	= 878,
    FCLE_W	= 879,
    FCLT_D	= 880,
    FCLT_W	= 881,
    FCMP_D32	= 882,
    FCMP_D32_MM	= 883,
    FCMP_D64	= 884,
    FCMP_S32	= 885,
    FCMP_S32_MM	= 886,
    FCNE_D	= 887,
    FCNE_W	= 888,
    FCOR_D	= 889,
    FCOR_W	= 890,
    FCUEQ_D	= 891,
    FCUEQ_W	= 892,
    FCULE_D	= 893,
    FCULE_W	= 894,
    FCULT_D	= 895,
    FCULT_W	= 896,
    FCUNE_D	= 897,
    FCUNE_W	= 898,
    FCUN_D	= 899,
    FCUN_W	= 900,
    FDIV_D	= 901,
    FDIV_D32	= 902,
    FDIV_D64	= 903,
    FDIV_D_MMR6	= 904,
    FDIV_MM	= 905,
    FDIV_S	= 906,
    FDIV_S_MM	= 907,
    FDIV_S_MMR6	= 908,
    FDIV_W	= 909,
    FEXDO_H	= 910,
    FEXDO_W	= 911,
    FEXP2_D	= 912,
    FEXP2_D_1_PSEUDO	= 913,
    FEXP2_W	= 914,
    FEXP2_W_1_PSEUDO	= 915,
    FEXUPL_D	= 916,
    FEXUPL_W	= 917,
    FEXUPR_D	= 918,
    FEXUPR_W	= 919,
    FFINT_S_D	= 920,
    FFINT_S_W	= 921,
    FFINT_U_D	= 922,
    FFINT_U_W	= 923,
    FFQL_D	= 924,
    FFQL_W	= 925,
    FFQR_D	= 926,
    FFQR_W	= 927,
    FILL_B	= 928,
    FILL_D	= 929,
    FILL_FD_PSEUDO	= 930,
    FILL_FW_PSEUDO	= 931,
    FILL_H	= 932,
    FILL_W	= 933,
    FLOG2_D	= 934,
    FLOG2_W	= 935,
    FLOOR_L_D64	= 936,
    FLOOR_L_D_MMR6	= 937,
    FLOOR_L_S	= 938,
    FLOOR_L_S_MMR6	= 939,
    FLOOR_W_D32	= 940,
    FLOOR_W_D64	= 941,
    FLOOR_W_D_MMR6	= 942,
    FLOOR_W_MM	= 943,
    FLOOR_W_S	= 944,
    FLOOR_W_S_MM	= 945,
    FLOOR_W_S_MMR6	= 946,
    FMADD_D	= 947,
    FMADD_W	= 948,
    FMAX_A_D	= 949,
    FMAX_A_W	= 950,
    FMAX_D	= 951,
    FMAX_W	= 952,
    FMIN_A_D	= 953,
    FMIN_A_W	= 954,
    FMIN_D	= 955,
    FMIN_W	= 956,
    FMOV_D32	= 957,
    FMOV_D32_MM	= 958,
    FMOV_D64	= 959,
    FMOV_D_MMR6	= 960,
    FMOV_S	= 961,
    FMOV_S_MM	= 962,
    FMOV_S_MMR6	= 963,
    FMSUB_D	= 964,
    FMSUB_W	= 965,
    FMUL_D	= 966,
    FMUL_D32	= 967,
    FMUL_D64	= 968,
    FMUL_D_MMR6	= 969,
    FMUL_MM	= 970,
    FMUL_S	= 971,
    FMUL_S_MM	= 972,
    FMUL_S_MMR6	= 973,
    FMUL_W	= 974,
    FNEG_D32	= 975,
    FNEG_D64	= 976,
    FNEG_D_MMR6	= 977,
    FNEG_MM	= 978,
    FNEG_S	= 979,
    FNEG_S_MM	= 980,
    FNEG_S_MMR6	= 981,
    FRCP_D	= 982,
    FRCP_W	= 983,
    FRINT_D	= 984,
    FRINT_W	= 985,
    FRSQRT_D	= 986,
    FRSQRT_W	= 987,
    FSAF_D	= 988,
    FSAF_W	= 989,
    FSEQ_D	= 990,
    FSEQ_W	= 991,
    FSLE_D	= 992,
    FSLE_W	= 993,
    FSLT_D	= 994,
    FSLT_W	= 995,
    FSNE_D	= 996,
    FSNE_W	= 997,
    FSOR_D	= 998,
    FSOR_W	= 999,
    FSQRT_D	= 1000,
    FSQRT_D32	= 1001,
    FSQRT_D64	= 1002,
    FSQRT_MM	= 1003,
    FSQRT_S	= 1004,
    FSQRT_S_MM	= 1005,
    FSQRT_W	= 1006,
    FSUB_D	= 1007,
    FSUB_D32	= 1008,
    FSUB_D64	= 1009,
    FSUB_D_MMR6	= 1010,
    FSUB_MM	= 1011,
    FSUB_S	= 1012,
    FSUB_S_MM	= 1013,
    FSUB_S_MMR6	= 1014,
    FSUB_W	= 1015,
    FSUEQ_D	= 1016,
    FSUEQ_W	= 1017,
    FSULE_D	= 1018,
    FSULE_W	= 1019,
    FSULT_D	= 1020,
    FSULT_W	= 1021,
    FSUNE_D	= 1022,
    FSUNE_W	= 1023,
    FSUN_D	= 1024,
    FSUN_W	= 1025,
    FTINT_S_D	= 1026,
    FTINT_S_W	= 1027,
    FTINT_U_D	= 1028,
    FTINT_U_W	= 1029,
    FTQ_H	= 1030,
    FTQ_W	= 1031,
    FTRUNC_S_D	= 1032,
    FTRUNC_S_W	= 1033,
    FTRUNC_U_D	= 1034,
    FTRUNC_U_W	= 1035,
    GotPrologue16	= 1036,
    HADD_S_D	= 1037,
    HADD_S_H	= 1038,
    HADD_S_W	= 1039,
    HADD_U_D	= 1040,
    HADD_U_H	= 1041,
    HADD_U_W	= 1042,
    HSUB_S_D	= 1043,
    HSUB_S_H	= 1044,
    HSUB_S_W	= 1045,
    HSUB_U_D	= 1046,
    HSUB_U_H	= 1047,
    HSUB_U_W	= 1048,
    ILVEV_B	= 1049,
    ILVEV_D	= 1050,
    ILVEV_H	= 1051,
    ILVEV_W	= 1052,
    ILVL_B	= 1053,
    ILVL_D	= 1054,
    ILVL_H	= 1055,
    ILVL_W	= 1056,
    ILVOD_B	= 1057,
    ILVOD_D	= 1058,
    ILVOD_H	= 1059,
    ILVOD_W	= 1060,
    ILVR_B	= 1061,
    ILVR_D	= 1062,
    ILVR_H	= 1063,
    ILVR_W	= 1064,
    INS	= 1065,
    INSERT_B	= 1066,
    INSERT_B_VIDX64_PSEUDO	= 1067,
    INSERT_B_VIDX_PSEUDO	= 1068,
    INSERT_D	= 1069,
    INSERT_D_VIDX64_PSEUDO	= 1070,
    INSERT_D_VIDX_PSEUDO	= 1071,
    INSERT_FD_PSEUDO	= 1072,
    INSERT_FD_VIDX64_PSEUDO	= 1073,
    INSERT_FD_VIDX_PSEUDO	= 1074,
    INSERT_FW_PSEUDO	= 1075,
    INSERT_FW_VIDX64_PSEUDO	= 1076,
    INSERT_FW_VIDX_PSEUDO	= 1077,
    INSERT_H	= 1078,
    INSERT_H_VIDX64_PSEUDO	= 1079,
    INSERT_H_VIDX_PSEUDO	= 1080,
    INSERT_W	= 1081,
    INSERT_W_VIDX64_PSEUDO	= 1082,
    INSERT_W_VIDX_PSEUDO	= 1083,
    INSV	= 1084,
    INSVE_B	= 1085,
    INSVE_D	= 1086,
    INSVE_H	= 1087,
    INSVE_W	= 1088,
    INSV_MM	= 1089,
    INS_MM	= 1090,
    J	= 1091,
    JAL	= 1092,
    JALR	= 1093,
    JALR16_MM	= 1094,
    JALR64	= 1095,
    JALR64Pseudo	= 1096,
    JALRC16_MMR6	= 1097,
    JALRPseudo	= 1098,
    JALRS16_MM	= 1099,
    JALRS_MM	= 1100,
    JALR_HB	= 1101,
    JALR_MM	= 1102,
    JALS_MM	= 1103,
    JALX	= 1104,
    JALX_MM	= 1105,
    JAL_MM	= 1106,
    JIALC	= 1107,
    JIALC_MMR6	= 1108,
    JIC	= 1109,
    JIC_MMR6	= 1110,
    JR	= 1111,
    JR16_MM	= 1112,
    JR64	= 1113,
    JRADDIUSP	= 1114,
    JRC16_MM	= 1115,
    JRC16_MMR6	= 1116,
    JRCADDIUSP_MMR6	= 1117,
    JR_HB	= 1118,
    JR_HB_R6	= 1119,
    JR_MM	= 1120,
    J_MM	= 1121,
    Jal16	= 1122,
    JalB16	= 1123,
    JalOneReg	= 1124,
    JalTwoReg	= 1125,
    JrRa16	= 1126,
    JrcRa16	= 1127,
    JrcRx16	= 1128,
    JumpLinkReg16	= 1129,
    LB	= 1130,
    LB64	= 1131,
    LBE	= 1132,
    LBE_MM	= 1133,
    LBE_MMR6	= 1134,
    LBU16_MM	= 1135,
    LBUE_MMR6	= 1136,
    LBUX	= 1137,
    LBUX_MM	= 1138,
    LBU_MMR6	= 1139,
    LB_MM	= 1140,
    LB_MMR6	= 1141,
    LBu	= 1142,
    LBu64	= 1143,
    LBuE	= 1144,
    LBuE_MM	= 1145,
    LBu_MM	= 1146,
    LD	= 1147,
    LDC1	= 1148,
    LDC164	= 1149,
    LDC1_MM	= 1150,
    LDC2	= 1151,
    LDC2_R6	= 1152,
    LDC3	= 1153,
    LDI_B	= 1154,
    LDI_D	= 1155,
    LDI_H	= 1156,
    LDI_W	= 1157,
    LDL	= 1158,
    LDPC	= 1159,
    LDR	= 1160,
    LDXC1	= 1161,
    LDXC164	= 1162,
    LD_B	= 1163,
    LD_D	= 1164,
    LD_H	= 1165,
    LD_W	= 1166,
    LEA_ADDiu	= 1167,
    LEA_ADDiu64	= 1168,
    LEA_ADDiu_MM	= 1169,
    LH	= 1170,
    LH64	= 1171,
    LHE	= 1172,
    LHE_MM	= 1173,
    LHU16_MM	= 1174,
    LHX	= 1175,
    LHX_MM	= 1176,
    LH_MM	= 1177,
    LHu	= 1178,
    LHu64	= 1179,
    LHuE	= 1180,
    LHuE_MM	= 1181,
    LHu_MM	= 1182,
    LI16_MM	= 1183,
    LI16_MMR6	= 1184,
    LL	= 1185,
    LLD	= 1186,
    LLD_R6	= 1187,
    LLE	= 1188,
    LLE_MM	= 1189,
    LLE_MMR6	= 1190,
    LL_MM	= 1191,
    LL_R6	= 1192,
    LOAD_ACC128	= 1193,
    LOAD_ACC64	= 1194,
    LOAD_ACC64DSP	= 1195,
    LOAD_CCOND_DSP	= 1196,
    LONG_BRANCH_ADDiu	= 1197,
    LONG_BRANCH_DADDiu	= 1198,
    LONG_BRANCH_LUi	= 1199,
    LSA	= 1200,
    LSA_MMR6	= 1201,
    LSA_R6	= 1202,
    LUI_MMR6	= 1203,
    LUXC1	= 1204,
    LUXC164	= 1205,
    LUXC1_MM	= 1206,
    LUi	= 1207,
    LUi64	= 1208,
    LUi_MM	= 1209,
    LW	= 1210,
    LW16_MM	= 1211,
    LW64	= 1212,
    LWC1	= 1213,
    LWC1_MM	= 1214,
    LWC2	= 1215,
    LWC2_R6	= 1216,
    LWC3	= 1217,
    LWE	= 1218,
    LWE_MM	= 1219,
    LWE_MMR6	= 1220,
    LWGP_MM	= 1221,
    LWL	= 1222,
    LWL64	= 1223,
    LWLE	= 1224,
    LWLE_MM	= 1225,
    LWL_MM	= 1226,
    LWM16_MM	= 1227,
    LWM16_MMR6	= 1228,
    LWM32_MM	= 1229,
    LWM_MM	= 1230,
    LWPC	= 1231,
    LWPC_MMR6	= 1232,
    LWP_MM	= 1233,
    LWR	= 1234,
    LWR64	= 1235,
    LWRE	= 1236,
    LWRE_MM	= 1237,
    LWR_MM	= 1238,
    LWSP_MM	= 1239,
    LWUPC	= 1240,
    LWU_MM	= 1241,
    LWX	= 1242,
    LWXC1	= 1243,
    LWXC1_MM	= 1244,
    LWXS_MM	= 1245,
    LWX_MM	= 1246,
    LW_MM	= 1247,
    LW_MMR6	= 1248,
    LWu	= 1249,
    LbRxRyOffMemX16	= 1250,
    LbuRxRyOffMemX16	= 1251,
    LhRxRyOffMemX16	= 1252,
    LhuRxRyOffMemX16	= 1253,
    LiRxImm16	= 1254,
    LiRxImmAlignX16	= 1255,
    LiRxImmX16	= 1256,
    LoadAddrImm32	= 1257,
    LoadAddrImm64	= 1258,
    LoadAddrReg32	= 1259,
    LoadAddrReg64	= 1260,
    LoadImm32	= 1261,
    LoadImm64	= 1262,
    LwConstant32	= 1263,
    LwRxPcTcp16	= 1264,
    LwRxPcTcpX16	= 1265,
    LwRxRyOffMemX16	= 1266,
    LwRxSpImmX16	= 1267,
    MADD	= 1268,
    MADDF_D	= 1269,
    MADDF_D_MMR6	= 1270,
    MADDF_S	= 1271,
    MADDF_S_MMR6	= 1272,
    MADDR_Q_H	= 1273,
    MADDR_Q_W	= 1274,
    MADDU	= 1275,
    MADDU_DSP	= 1276,
    MADDU_DSP_MM	= 1277,
    MADDU_MM	= 1278,
    MADDV_B	= 1279,
    MADDV_D	= 1280,
    MADDV_H	= 1281,
    MADDV_W	= 1282,
    MADD_D32	= 1283,
    MADD_D32_MM	= 1284,
    MADD_D64	= 1285,
    MADD_DSP	= 1286,
    MADD_DSP_MM	= 1287,
    MADD_MM	= 1288,
    MADD_Q_H	= 1289,
    MADD_Q_W	= 1290,
    MADD_S	= 1291,
    MADD_S_MM	= 1292,
    MAQ_SA_W_PHL	= 1293,
    MAQ_SA_W_PHL_MM	= 1294,
    MAQ_SA_W_PHR	= 1295,
    MAQ_SA_W_PHR_MM	= 1296,
    MAQ_S_W_PHL	= 1297,
    MAQ_S_W_PHL_MM	= 1298,
    MAQ_S_W_PHR	= 1299,
    MAQ_S_W_PHR_MM	= 1300,
    MAXA_D	= 1301,
    MAXA_D_MMR6	= 1302,
    MAXA_S	= 1303,
    MAXA_S_MMR6	= 1304,
    MAXI_S_B	= 1305,
    MAXI_S_D	= 1306,
    MAXI_S_H	= 1307,
    MAXI_S_W	= 1308,
    MAXI_U_B	= 1309,
    MAXI_U_D	= 1310,
    MAXI_U_H	= 1311,
    MAXI_U_W	= 1312,
    MAX_A_B	= 1313,
    MAX_A_D	= 1314,
    MAX_A_H	= 1315,
    MAX_A_W	= 1316,
    MAX_D	= 1317,
    MAX_D_MMR6	= 1318,
    MAX_S	= 1319,
    MAX_S_B	= 1320,
    MAX_S_D	= 1321,
    MAX_S_H	= 1322,
    MAX_S_MMR6	= 1323,
    MAX_S_W	= 1324,
    MAX_U_B	= 1325,
    MAX_U_D	= 1326,
    MAX_U_H	= 1327,
    MAX_U_W	= 1328,
    MFC0	= 1329,
    MFC1	= 1330,
    MFC1_MM	= 1331,
    MFC2	= 1332,
    MFHC1_D32	= 1333,
    MFHC1_D64	= 1334,
    MFHC1_MM	= 1335,
    MFHI	= 1336,
    MFHI16_MM	= 1337,
    MFHI64	= 1338,
    MFHI_DSP	= 1339,
    MFHI_DSP_MM	= 1340,
    MFHI_MM	= 1341,
    MFLO	= 1342,
    MFLO16_MM	= 1343,
    MFLO64	= 1344,
    MFLO_DSP	= 1345,
    MFLO_DSP_MM	= 1346,
    MFLO_MM	= 1347,
    MINA_D	= 1348,
    MINA_D_MMR6	= 1349,
    MINA_S	= 1350,
    MINA_S_MMR6	= 1351,
    MINI_S_B	= 1352,
    MINI_S_D	= 1353,
    MINI_S_H	= 1354,
    MINI_S_W	= 1355,
    MINI_U_B	= 1356,
    MINI_U_D	= 1357,
    MINI_U_H	= 1358,
    MINI_U_W	= 1359,
    MIN_A_B	= 1360,
    MIN_A_D	= 1361,
    MIN_A_H	= 1362,
    MIN_A_W	= 1363,
    MIN_D	= 1364,
    MIN_D_MMR6	= 1365,
    MIN_S	= 1366,
    MIN_S_B	= 1367,
    MIN_S_D	= 1368,
    MIN_S_H	= 1369,
    MIN_S_MMR6	= 1370,
    MIN_S_W	= 1371,
    MIN_U_B	= 1372,
    MIN_U_D	= 1373,
    MIN_U_H	= 1374,
    MIN_U_W	= 1375,
    MIPSeh_return32	= 1376,
    MIPSeh_return64	= 1377,
    MOD	= 1378,
    MODSUB	= 1379,
    MODU	= 1380,
    MODU_MMR6	= 1381,
    MOD_MMR6	= 1382,
    MOD_S_B	= 1383,
    MOD_S_D	= 1384,
    MOD_S_H	= 1385,
    MOD_S_W	= 1386,
    MOD_U_B	= 1387,
    MOD_U_D	= 1388,
    MOD_U_H	= 1389,
    MOD_U_W	= 1390,
    MOVE16_MM	= 1391,
    MOVE16_MMR6	= 1392,
    MOVEP_MM	= 1393,
    MOVE_V	= 1394,
    MOVF_D32	= 1395,
    MOVF_D32_MM	= 1396,
    MOVF_D64	= 1397,
    MOVF_I	= 1398,
    MOVF_I64	= 1399,
    MOVF_I_MM	= 1400,
    MOVF_S	= 1401,
    MOVF_S_MM	= 1402,
    MOVN_I64_D64	= 1403,
    MOVN_I64_I	= 1404,
    MOVN_I64_I64	= 1405,
    MOVN_I64_S	= 1406,
    MOVN_I_D32	= 1407,
    MOVN_I_D32_MM	= 1408,
    MOVN_I_D64	= 1409,
    MOVN_I_I	= 1410,
    MOVN_I_I64	= 1411,
    MOVN_I_MM	= 1412,
    MOVN_I_S	= 1413,
    MOVN_I_S_MM	= 1414,
    MOVT_D32	= 1415,
    MOVT_D32_MM	= 1416,
    MOVT_D64	= 1417,
    MOVT_I	= 1418,
    MOVT_I64	= 1419,
    MOVT_I_MM	= 1420,
    MOVT_S	= 1421,
    MOVT_S_MM	= 1422,
    MOVZ_I64_D64	= 1423,
    MOVZ_I64_I	= 1424,
    MOVZ_I64_I64	= 1425,
    MOVZ_I64_S	= 1426,
    MOVZ_I_D32	= 1427,
    MOVZ_I_D32_MM	= 1428,
    MOVZ_I_D64	= 1429,
    MOVZ_I_I	= 1430,
    MOVZ_I_I64	= 1431,
    MOVZ_I_MM	= 1432,
    MOVZ_I_S	= 1433,
    MOVZ_I_S_MM	= 1434,
    MSUB	= 1435,
    MSUBF_D	= 1436,
    MSUBF_D_MMR6	= 1437,
    MSUBF_S	= 1438,
    MSUBF_S_MMR6	= 1439,
    MSUBR_Q_H	= 1440,
    MSUBR_Q_W	= 1441,
    MSUBU	= 1442,
    MSUBU_DSP	= 1443,
    MSUBU_DSP_MM	= 1444,
    MSUBU_MM	= 1445,
    MSUBV_B	= 1446,
    MSUBV_D	= 1447,
    MSUBV_H	= 1448,
    MSUBV_W	= 1449,
    MSUB_D32	= 1450,
    MSUB_D32_MM	= 1451,
    MSUB_D64	= 1452,
    MSUB_DSP	= 1453,
    MSUB_DSP_MM	= 1454,
    MSUB_MM	= 1455,
    MSUB_Q_H	= 1456,
    MSUB_Q_W	= 1457,
    MSUB_S	= 1458,
    MSUB_S_MM	= 1459,
    MTC0	= 1460,
    MTC1	= 1461,
    MTC1_MM	= 1462,
    MTC2	= 1463,
    MTHC1_D32	= 1464,
    MTHC1_D64	= 1465,
    MTHC1_MM	= 1466,
    MTHI	= 1467,
    MTHI64	= 1468,
    MTHI_DSP	= 1469,
    MTHI_DSP_MM	= 1470,
    MTHI_MM	= 1471,
    MTHLIP	= 1472,
    MTHLIP_MM	= 1473,
    MTLO	= 1474,
    MTLO64	= 1475,
    MTLO_DSP	= 1476,
    MTLO_DSP_MM	= 1477,
    MTLO_MM	= 1478,
    MTM0	= 1479,
    MTM1	= 1480,
    MTM2	= 1481,
    MTP0	= 1482,
    MTP1	= 1483,
    MTP2	= 1484,
    MUH	= 1485,
    MUHU	= 1486,
    MUHU_MMR6	= 1487,
    MUH_MMR6	= 1488,
    MUL	= 1489,
    MULEQ_S_W_PHL	= 1490,
    MULEQ_S_W_PHL_MM	= 1491,
    MULEQ_S_W_PHR	= 1492,
    MULEQ_S_W_PHR_MM	= 1493,
    MULEU_S_PH_QBL	= 1494,
    MULEU_S_PH_QBL_MM	= 1495,
    MULEU_S_PH_QBR	= 1496,
    MULEU_S_PH_QBR_MM	= 1497,
    MULQ_RS_PH	= 1498,
    MULQ_RS_PH_MM	= 1499,
    MULQ_RS_W	= 1500,
    MULQ_RS_W_MMR2	= 1501,
    MULQ_S_PH	= 1502,
    MULQ_S_PH_MMR2	= 1503,
    MULQ_S_W	= 1504,
    MULQ_S_W_MMR2	= 1505,
    MULR_Q_H	= 1506,
    MULR_Q_W	= 1507,
    MULSAQ_S_W_PH	= 1508,
    MULSA_W_PH	= 1509,
    MULT	= 1510,
    MULTU_DSP	= 1511,
    MULTU_DSP_MM	= 1512,
    MULT_DSP	= 1513,
    MULT_DSP_MM	= 1514,
    MULT_MM	= 1515,
    MULTu	= 1516,
    MULTu_MM	= 1517,
    MULU	= 1518,
    MULU_MMR6	= 1519,
    MULV_B	= 1520,
    MULV_D	= 1521,
    MULV_H	= 1522,
    MULV_W	= 1523,
    MUL_MM	= 1524,
    MUL_MMR6	= 1525,
    MUL_PH	= 1526,
    MUL_PH_MMR2	= 1527,
    MUL_Q_H	= 1528,
    MUL_Q_W	= 1529,
    MUL_R6	= 1530,
    MUL_S_PH	= 1531,
    MUL_S_PH_MMR2	= 1532,
    Mfhi16	= 1533,
    Mflo16	= 1534,
    Move32R16	= 1535,
    MoveR3216	= 1536,
    MultRxRy16	= 1537,
    MultRxRyRz16	= 1538,
    MultuRxRy16	= 1539,
    MultuRxRyRz16	= 1540,
    NLOC_B	= 1541,
    NLOC_D	= 1542,
    NLOC_H	= 1543,
    NLOC_W	= 1544,
    NLZC_B	= 1545,
    NLZC_D	= 1546,
    NLZC_H	= 1547,
    NLZC_W	= 1548,
    NMADD_D32	= 1549,
    NMADD_D32_MM	= 1550,
    NMADD_D64	= 1551,
    NMADD_S	= 1552,
    NMADD_S_MM	= 1553,
    NMSUB_D32	= 1554,
    NMSUB_D32_MM	= 1555,
    NMSUB_D64	= 1556,
    NMSUB_S	= 1557,
    NMSUB_S_MM	= 1558,
    NOP	= 1559,
    NOR	= 1560,
    NOR64	= 1561,
    NORI_B	= 1562,
    NORImm	= 1563,
    NOR_MM	= 1564,
    NOR_MMR6	= 1565,
    NOR_V	= 1566,
    NOR_V_D_PSEUDO	= 1567,
    NOR_V_H_PSEUDO	= 1568,
    NOR_V_W_PSEUDO	= 1569,
    NOT16_MM	= 1570,
    NOT16_MMR6	= 1571,
    NegRxRy16	= 1572,
    NotRxRy16	= 1573,
    OR	= 1574,
    OR16_MM	= 1575,
    OR16_MMR6	= 1576,
    OR64	= 1577,
    ORI_B	= 1578,
    ORI_MMR6	= 1579,
    OR_MM	= 1580,
    OR_MMR6	= 1581,
    OR_V	= 1582,
    OR_V_D_PSEUDO	= 1583,
    OR_V_H_PSEUDO	= 1584,
    OR_V_W_PSEUDO	= 1585,
    ORi	= 1586,
    ORi64	= 1587,
    ORi_MM	= 1588,
    OrRxRxRy16	= 1589,
    PACKRL_PH	= 1590,
    PACKRL_PH_MM	= 1591,
    PAUSE	= 1592,
    PAUSE_MM	= 1593,
    PAUSE_MMR6	= 1594,
    PCKEV_B	= 1595,
    PCKEV_D	= 1596,
    PCKEV_H	= 1597,
    PCKEV_W	= 1598,
    PCKOD_B	= 1599,
    PCKOD_D	= 1600,
    PCKOD_H	= 1601,
    PCKOD_W	= 1602,
    PCNT_B	= 1603,
    PCNT_D	= 1604,
    PCNT_H	= 1605,
    PCNT_W	= 1606,
    PICK_PH	= 1607,
    PICK_PH_MM	= 1608,
    PICK_QB	= 1609,
    PICK_QB_MM	= 1610,
    POP	= 1611,
    PRECEQU_PH_QBL	= 1612,
    PRECEQU_PH_QBLA	= 1613,
    PRECEQU_PH_QBLA_MM	= 1614,
    PRECEQU_PH_QBL_MM	= 1615,
    PRECEQU_PH_QBR	= 1616,
    PRECEQU_PH_QBRA	= 1617,
    PRECEQU_PH_QBRA_MM	= 1618,
    PRECEQU_PH_QBR_MM	= 1619,
    PRECEQ_W_PHL	= 1620,
    PRECEQ_W_PHL_MM	= 1621,
    PRECEQ_W_PHR	= 1622,
    PRECEQ_W_PHR_MM	= 1623,
    PRECEU_PH_QBL	= 1624,
    PRECEU_PH_QBLA	= 1625,
    PRECEU_PH_QBLA_MM	= 1626,
    PRECEU_PH_QBL_MM	= 1627,
    PRECEU_PH_QBR	= 1628,
    PRECEU_PH_QBRA	= 1629,
    PRECEU_PH_QBRA_MM	= 1630,
    PRECEU_PH_QBR_MM	= 1631,
    PRECRQU_S_QB_PH	= 1632,
    PRECRQU_S_QB_PH_MM	= 1633,
    PRECRQ_PH_W	= 1634,
    PRECRQ_PH_W_MM	= 1635,
    PRECRQ_QB_PH	= 1636,
    PRECRQ_QB_PH_MM	= 1637,
    PRECRQ_RS_PH_W	= 1638,
    PRECRQ_RS_PH_W_MM	= 1639,
    PRECR_QB_PH	= 1640,
    PRECR_QB_PH_MMR2	= 1641,
    PRECR_SRA_PH_W	= 1642,
    PRECR_SRA_PH_W_MMR2	= 1643,
    PRECR_SRA_R_PH_W	= 1644,
    PRECR_SRA_R_PH_W_MMR2	= 1645,
    PREF	= 1646,
    PREFE	= 1647,
    PREFE_MM	= 1648,
    PREFE_MMR6	= 1649,
    PREFX_MM	= 1650,
    PREF_MM	= 1651,
    PREF_MMR6	= 1652,
    PREF_R6	= 1653,
    PREPEND	= 1654,
    PREPEND_MMR2	= 1655,
    PseudoCMPU_EQ_QB	= 1656,
    PseudoCMPU_LE_QB	= 1657,
    PseudoCMPU_LT_QB	= 1658,
    PseudoCMP_EQ_PH	= 1659,
    PseudoCMP_LE_PH	= 1660,
    PseudoCMP_LT_PH	= 1661,
    PseudoCVT_D32_W	= 1662,
    PseudoCVT_D64_L	= 1663,
    PseudoCVT_D64_W	= 1664,
    PseudoCVT_S_L	= 1665,
    PseudoCVT_S_W	= 1666,
    PseudoDMULT	= 1667,
    PseudoDMULTu	= 1668,
    PseudoDSDIV	= 1669,
    PseudoDUDIV	= 1670,
    PseudoIndirectBranch	= 1671,
    PseudoIndirectBranch64	= 1672,
    PseudoMADD	= 1673,
    PseudoMADDU	= 1674,
    PseudoMFHI	= 1675,
    PseudoMFHI64	= 1676,
    PseudoMFLO	= 1677,
    PseudoMFLO64	= 1678,
    PseudoMSUB	= 1679,
    PseudoMSUBU	= 1680,
    PseudoMTLOHI	= 1681,
    PseudoMTLOHI64	= 1682,
    PseudoMTLOHI_DSP	= 1683,
    PseudoMULT	= 1684,
    PseudoMULTu	= 1685,
    PseudoPICK_PH	= 1686,
    PseudoPICK_QB	= 1687,
    PseudoReturn	= 1688,
    PseudoReturn64	= 1689,
    PseudoSDIV	= 1690,
    PseudoSELECTFP_F_D32	= 1691,
    PseudoSELECTFP_F_D64	= 1692,
    PseudoSELECTFP_F_I	= 1693,
    PseudoSELECTFP_F_I64	= 1694,
    PseudoSELECTFP_F_S	= 1695,
    PseudoSELECTFP_T_D32	= 1696,
    PseudoSELECTFP_T_D64	= 1697,
    PseudoSELECTFP_T_I	= 1698,
    PseudoSELECTFP_T_I64	= 1699,
    PseudoSELECTFP_T_S	= 1700,
    PseudoSELECT_D32	= 1701,
    PseudoSELECT_D64	= 1702,
    PseudoSELECT_I	= 1703,
    PseudoSELECT_I64	= 1704,
    PseudoSELECT_S	= 1705,
    PseudoUDIV	= 1706,
    RADDU_W_QB	= 1707,
    RADDU_W_QB_MM	= 1708,
    RDDSP	= 1709,
    RDDSP_MM	= 1710,
    RDHWR	= 1711,
    RDHWR64	= 1712,
    RDHWR_MM	= 1713,
    RDHWR_MMR6	= 1714,
    RDPGPR_MMR6	= 1715,
    RECIP_D_MMR6	= 1716,
    RECIP_S_MMR6	= 1717,
    REPLV_PH	= 1718,
    REPLV_PH_MM	= 1719,
    REPLV_QB	= 1720,
    REPLV_QB_MM	= 1721,
    REPL_PH	= 1722,
    REPL_PH_MM	= 1723,
    REPL_QB	= 1724,
    REPL_QB_MM	= 1725,
    RINT_D	= 1726,
    RINT_D_MMR6	= 1727,
    RINT_S	= 1728,
    RINT_S_MMR6	= 1729,
    ROL	= 1730,
    ROLImm	= 1731,
    ROR	= 1732,
    RORImm	= 1733,
    ROTR	= 1734,
    ROTRV	= 1735,
    ROTRV_MM	= 1736,
    ROTR_MM	= 1737,
    ROUND_L_D64	= 1738,
    ROUND_L_D_MMR6	= 1739,
    ROUND_L_S	= 1740,
    ROUND_L_S_MMR6	= 1741,
    ROUND_W_D32	= 1742,
    ROUND_W_D64	= 1743,
    ROUND_W_D_MMR6	= 1744,
    ROUND_W_MM	= 1745,
    ROUND_W_S	= 1746,
    ROUND_W_S_MM	= 1747,
    ROUND_W_S_MMR6	= 1748,
    RSQRT_D_MMR6	= 1749,
    RSQRT_S_MMR6	= 1750,
    Restore16	= 1751,
    RestoreX16	= 1752,
    RetRA	= 1753,
    RetRA16	= 1754,
    SAT_S_B	= 1755,
    SAT_S_D	= 1756,
    SAT_S_H	= 1757,
    SAT_S_W	= 1758,
    SAT_U_B	= 1759,
    SAT_U_D	= 1760,
    SAT_U_H	= 1761,
    SAT_U_W	= 1762,
    SB	= 1763,
    SB16_MM	= 1764,
    SB16_MMR6	= 1765,
    SB64	= 1766,
    SBE	= 1767,
    SBE_MM	= 1768,
    SBE_MMR6	= 1769,
    SB_MM	= 1770,
    SB_MMR6	= 1771,
    SC	= 1772,
    SCD	= 1773,
    SCD_R6	= 1774,
    SCE	= 1775,
    SCE_MM	= 1776,
    SCE_MMR6	= 1777,
    SC_MM	= 1778,
    SC_R6	= 1779,
    SD	= 1780,
    SDBBP	= 1781,
    SDBBP16_MM	= 1782,
    SDBBP16_MMR6	= 1783,
    SDBBP_MM	= 1784,
    SDBBP_MMR6	= 1785,
    SDBBP_R6	= 1786,
    SDC1	= 1787,
    SDC164	= 1788,
    SDC1_MM	= 1789,
    SDC2	= 1790,
    SDC2_R6	= 1791,
    SDC3	= 1792,
    SDIV	= 1793,
    SDIV_MM	= 1794,
    SDL	= 1795,
    SDR	= 1796,
    SDXC1	= 1797,
    SDXC164	= 1798,
    SDivMacro	= 1799,
    SEB	= 1800,
    SEB64	= 1801,
    SEB_MM	= 1802,
    SEB_MMR6	= 1803,
    SEH	= 1804,
    SEH64	= 1805,
    SEH_MM	= 1806,
    SEH_MMR6	= 1807,
    SELENZ_D_MMR6	= 1808,
    SELENZ_S_MMR6	= 1809,
    SELEQZ	= 1810,
    SELEQZ64	= 1811,
    SELEQZ_D	= 1812,
    SELEQZ_D_MMR6	= 1813,
    SELEQZ_MMR6	= 1814,
    SELEQZ_S	= 1815,
    SELEQZ_S_MMR6	= 1816,
    SELNEZ	= 1817,
    SELNEZ64	= 1818,
    SELNEZ_D	= 1819,
    SELNEZ_MMR6	= 1820,
    SELNEZ_S	= 1821,
    SEL_D	= 1822,
    SEL_D_MMR6	= 1823,
    SEL_S	= 1824,
    SEL_S_MMR6	= 1825,
    SEQ	= 1826,
    SEQi	= 1827,
    SH	= 1828,
    SH16_MM	= 1829,
    SH16_MMR6	= 1830,
    SH64	= 1831,
    SHE	= 1832,
    SHE_MM	= 1833,
    SHE_MMR6	= 1834,
    SHF_B	= 1835,
    SHF_H	= 1836,
    SHF_W	= 1837,
    SHILO	= 1838,
    SHILOV	= 1839,
    SHILOV_MM	= 1840,
    SHILO_MM	= 1841,
    SHLLV_PH	= 1842,
    SHLLV_PH_MM	= 1843,
    SHLLV_QB	= 1844,
    SHLLV_QB_MM	= 1845,
    SHLLV_S_PH	= 1846,
    SHLLV_S_PH_MM	= 1847,
    SHLLV_S_W	= 1848,
    SHLLV_S_W_MM	= 1849,
    SHLL_PH	= 1850,
    SHLL_PH_MM	= 1851,
    SHLL_QB	= 1852,
    SHLL_QB_MM	= 1853,
    SHLL_S_PH	= 1854,
    SHLL_S_PH_MM	= 1855,
    SHLL_S_W	= 1856,
    SHLL_S_W_MM	= 1857,
    SHRAV_PH	= 1858,
    SHRAV_PH_MM	= 1859,
    SHRAV_QB	= 1860,
    SHRAV_QB_MMR2	= 1861,
    SHRAV_R_PH	= 1862,
    SHRAV_R_PH_MM	= 1863,
    SHRAV_R_QB	= 1864,
    SHRAV_R_QB_MMR2	= 1865,
    SHRAV_R_W	= 1866,
    SHRAV_R_W_MM	= 1867,
    SHRA_PH	= 1868,
    SHRA_PH_MM	= 1869,
    SHRA_QB	= 1870,
    SHRA_QB_MMR2	= 1871,
    SHRA_R_PH	= 1872,
    SHRA_R_PH_MM	= 1873,
    SHRA_R_QB	= 1874,
    SHRA_R_QB_MMR2	= 1875,
    SHRA_R_W	= 1876,
    SHRA_R_W_MM	= 1877,
    SHRLV_PH	= 1878,
    SHRLV_PH_MMR2	= 1879,
    SHRLV_QB	= 1880,
    SHRLV_QB_MM	= 1881,
    SHRL_PH	= 1882,
    SHRL_PH_MMR2	= 1883,
    SHRL_QB	= 1884,
    SHRL_QB_MM	= 1885,
    SH_MM	= 1886,
    SH_MMR6	= 1887,
    SLDI_B	= 1888,
    SLDI_D	= 1889,
    SLDI_H	= 1890,
    SLDI_W	= 1891,
    SLD_B	= 1892,
    SLD_D	= 1893,
    SLD_H	= 1894,
    SLD_W	= 1895,
    SLL	= 1896,
    SLL16_MM	= 1897,
    SLL16_MMR6	= 1898,
    SLL64_32	= 1899,
    SLL64_64	= 1900,
    SLLI_B	= 1901,
    SLLI_D	= 1902,
    SLLI_H	= 1903,
    SLLI_W	= 1904,
    SLLV	= 1905,
    SLLV_MM	= 1906,
    SLL_B	= 1907,
    SLL_D	= 1908,
    SLL_H	= 1909,
    SLL_MM	= 1910,
    SLL_MMR6	= 1911,
    SLL_W	= 1912,
    SLT	= 1913,
    SLT64	= 1914,
    SLT_MM	= 1915,
    SLTi	= 1916,
    SLTi64	= 1917,
    SLTi_MM	= 1918,
    SLTiu	= 1919,
    SLTiu64	= 1920,
    SLTiu_MM	= 1921,
    SLTu	= 1922,
    SLTu64	= 1923,
    SLTu_MM	= 1924,
    SNE	= 1925,
    SNEi	= 1926,
    SNZ_B_PSEUDO	= 1927,
    SNZ_D_PSEUDO	= 1928,
    SNZ_H_PSEUDO	= 1929,
    SNZ_V_PSEUDO	= 1930,
    SNZ_W_PSEUDO	= 1931,
    SPLATI_B	= 1932,
    SPLATI_D	= 1933,
    SPLATI_H	= 1934,
    SPLATI_W	= 1935,
    SPLAT_B	= 1936,
    SPLAT_D	= 1937,
    SPLAT_H	= 1938,
    SPLAT_W	= 1939,
    SQRT_D_MMR6	= 1940,
    SQRT_S_MMR6	= 1941,
    SRA	= 1942,
    SRAI_B	= 1943,
    SRAI_D	= 1944,
    SRAI_H	= 1945,
    SRAI_W	= 1946,
    SRARI_B	= 1947,
    SRARI_D	= 1948,
    SRARI_H	= 1949,
    SRARI_W	= 1950,
    SRAR_B	= 1951,
    SRAR_D	= 1952,
    SRAR_H	= 1953,
    SRAR_W	= 1954,
    SRAV	= 1955,
    SRAV_MM	= 1956,
    SRA_B	= 1957,
    SRA_D	= 1958,
    SRA_H	= 1959,
    SRA_MM	= 1960,
    SRA_W	= 1961,
    SRL	= 1962,
    SRL16_MM	= 1963,
    SRL16_MMR6	= 1964,
    SRLI_B	= 1965,
    SRLI_D	= 1966,
    SRLI_H	= 1967,
    SRLI_W	= 1968,
    SRLRI_B	= 1969,
    SRLRI_D	= 1970,
    SRLRI_H	= 1971,
    SRLRI_W	= 1972,
    SRLR_B	= 1973,
    SRLR_D	= 1974,
    SRLR_H	= 1975,
    SRLR_W	= 1976,
    SRLV	= 1977,
    SRLV_MM	= 1978,
    SRL_B	= 1979,
    SRL_D	= 1980,
    SRL_H	= 1981,
    SRL_MM	= 1982,
    SRL_W	= 1983,
    SSNOP	= 1984,
    SSNOP_MM	= 1985,
    SSNOP_MMR6	= 1986,
    STORE_ACC128	= 1987,
    STORE_ACC64	= 1988,
    STORE_ACC64DSP	= 1989,
    STORE_CCOND_DSP	= 1990,
    ST_B	= 1991,
    ST_D	= 1992,
    ST_H	= 1993,
    ST_W	= 1994,
    SUB	= 1995,
    SUBQH_PH	= 1996,
    SUBQH_PH_MMR2	= 1997,
    SUBQH_R_PH	= 1998,
    SUBQH_R_PH_MMR2	= 1999,
    SUBQH_R_W	= 2000,
    SUBQH_R_W_MMR2	= 2001,
    SUBQH_W	= 2002,
    SUBQH_W_MMR2	= 2003,
    SUBQ_PH	= 2004,
    SUBQ_PH_MM	= 2005,
    SUBQ_S_PH	= 2006,
    SUBQ_S_PH_MM	= 2007,
    SUBQ_S_W	= 2008,
    SUBQ_S_W_MM	= 2009,
    SUBSUS_U_B	= 2010,
    SUBSUS_U_D	= 2011,
    SUBSUS_U_H	= 2012,
    SUBSUS_U_W	= 2013,
    SUBSUU_S_B	= 2014,
    SUBSUU_S_D	= 2015,
    SUBSUU_S_H	= 2016,
    SUBSUU_S_W	= 2017,
    SUBS_S_B	= 2018,
    SUBS_S_D	= 2019,
    SUBS_S_H	= 2020,
    SUBS_S_W	= 2021,
    SUBS_U_B	= 2022,
    SUBS_U_D	= 2023,
    SUBS_U_H	= 2024,
    SUBS_U_W	= 2025,
    SUBU16_MM	= 2026,
    SUBU16_MMR6	= 2027,
    SUBUH_QB	= 2028,
    SUBUH_QB_MMR2	= 2029,
    SUBUH_R_QB	= 2030,
    SUBUH_R_QB_MMR2	= 2031,
    SUBU_MMR6	= 2032,
    SUBU_PH	= 2033,
    SUBU_PH_MMR2	= 2034,
    SUBU_QB	= 2035,
    SUBU_QB_MM	= 2036,
    SUBU_S_PH	= 2037,
    SUBU_S_PH_MMR2	= 2038,
    SUBU_S_QB	= 2039,
    SUBU_S_QB_MM	= 2040,
    SUBVI_B	= 2041,
    SUBVI_D	= 2042,
    SUBVI_H	= 2043,
    SUBVI_W	= 2044,
    SUBV_B	= 2045,
    SUBV_D	= 2046,
    SUBV_H	= 2047,
    SUBV_W	= 2048,
    SUB_MM	= 2049,
    SUB_MMR6	= 2050,
    SUBu	= 2051,
    SUBu_MM	= 2052,
    SUXC1	= 2053,
    SUXC164	= 2054,
    SUXC1_MM	= 2055,
    SW	= 2056,
    SW16_MM	= 2057,
    SW16_MMR6	= 2058,
    SW64	= 2059,
    SWC1	= 2060,
    SWC1_MM	= 2061,
    SWC2	= 2062,
    SWC2_R6	= 2063,
    SWC3	= 2064,
    SWE	= 2065,
    SWE_MM	= 2066,
    SWE_MMR6	= 2067,
    SWL	= 2068,
    SWL64	= 2069,
    SWLE	= 2070,
    SWLE_MM	= 2071,
    SWL_MM	= 2072,
    SWM16_MM	= 2073,
    SWM16_MMR6	= 2074,
    SWM32_MM	= 2075,
    SWM_MM	= 2076,
    SWP_MM	= 2077,
    SWR	= 2078,
    SWR64	= 2079,
    SWRE	= 2080,
    SWRE_MM	= 2081,
    SWR_MM	= 2082,
    SWSP_MM	= 2083,
    SWSP_MMR6	= 2084,
    SWXC1	= 2085,
    SWXC1_MM	= 2086,
    SW_MM	= 2087,
    SW_MMR6	= 2088,
    SYNC	= 2089,
    SYNCI	= 2090,
    SYNCI_MMR6	= 2091,
    SYNC_MM	= 2092,
    SYNC_MMR6	= 2093,
    SYSCALL	= 2094,
    SYSCALL_MM	= 2095,
    SZ_B_PSEUDO	= 2096,
    SZ_D_PSEUDO	= 2097,
    SZ_H_PSEUDO	= 2098,
    SZ_V_PSEUDO	= 2099,
    SZ_W_PSEUDO	= 2100,
    Save16	= 2101,
    SaveX16	= 2102,
    SbRxRyOffMemX16	= 2103,
    SebRx16	= 2104,
    SehRx16	= 2105,
    SelBeqZ	= 2106,
    SelBneZ	= 2107,
    SelTBteqZCmp	= 2108,
    SelTBteqZCmpi	= 2109,
    SelTBteqZSlt	= 2110,
    SelTBteqZSlti	= 2111,
    SelTBteqZSltiu	= 2112,
    SelTBteqZSltu	= 2113,
    SelTBtneZCmp	= 2114,
    SelTBtneZCmpi	= 2115,
    SelTBtneZSlt	= 2116,
    SelTBtneZSlti	= 2117,
    SelTBtneZSltiu	= 2118,
    SelTBtneZSltu	= 2119,
    ShRxRyOffMemX16	= 2120,
    SllX16	= 2121,
    SllvRxRy16	= 2122,
    SltCCRxRy16	= 2123,
    SltRxRy16	= 2124,
    SltiCCRxImmX16	= 2125,
    SltiRxImm16	= 2126,
    SltiRxImmX16	= 2127,
    SltiuCCRxImmX16	= 2128,
    SltiuRxImm16	= 2129,
    SltiuRxImmX16	= 2130,
    SltuCCRxRy16	= 2131,
    SltuRxRy16	= 2132,
    SltuRxRyRz16	= 2133,
    SraX16	= 2134,
    SravRxRy16	= 2135,
    SrlX16	= 2136,
    SrlvRxRy16	= 2137,
    SubuRxRyRz16	= 2138,
    SwRxRyOffMemX16	= 2139,
    SwRxSpImmX16	= 2140,
    TAILCALL	= 2141,
    TAILCALL64_R	= 2142,
    TAILCALL_R	= 2143,
    TEQ	= 2144,
    TEQI	= 2145,
    TEQI_MM	= 2146,
    TEQ_MM	= 2147,
    TGE	= 2148,
    TGEI	= 2149,
    TGEIU	= 2150,
    TGEIU_MM	= 2151,
    TGEI_MM	= 2152,
    TGEU	= 2153,
    TGEU_MM	= 2154,
    TGE_MM	= 2155,
    TLBINV	= 2156,
    TLBINVF	= 2157,
    TLBP	= 2158,
    TLBP_MM	= 2159,
    TLBR	= 2160,
    TLBR_MM	= 2161,
    TLBWI	= 2162,
    TLBWI_MM	= 2163,
    TLBWR	= 2164,
    TLBWR_MM	= 2165,
    TLT	= 2166,
    TLTI	= 2167,
    TLTIU_MM	= 2168,
    TLTI_MM	= 2169,
    TLTU	= 2170,
    TLTU_MM	= 2171,
    TLT_MM	= 2172,
    TNE	= 2173,
    TNEI	= 2174,
    TNEI_MM	= 2175,
    TNE_MM	= 2176,
    TRAP	= 2177,
    TRUNC_L_D64	= 2178,
    TRUNC_L_D_MMR6	= 2179,
    TRUNC_L_S	= 2180,
    TRUNC_L_S_MMR6	= 2181,
    TRUNC_W_D32	= 2182,
    TRUNC_W_D64	= 2183,
    TRUNC_W_D_MMR6	= 2184,
    TRUNC_W_MM	= 2185,
    TRUNC_W_S	= 2186,
    TRUNC_W_S_MM	= 2187,
    TRUNC_W_S_MMR6	= 2188,
    TTLTIU	= 2189,
    UDIV	= 2190,
    UDIV_MM	= 2191,
    UDivMacro	= 2192,
    Ulh	= 2193,
    Ulhu	= 2194,
    Ulw	= 2195,
    V3MULU	= 2196,
    VMM0	= 2197,
    VMULU	= 2198,
    VSHF_B	= 2199,
    VSHF_D	= 2200,
    VSHF_H	= 2201,
    VSHF_W	= 2202,
    WAIT	= 2203,
    WAIT_MM	= 2204,
    WAIT_MMR6	= 2205,
    WRDSP	= 2206,
    WRDSP_MM	= 2207,
    WRPGPR_MMR6	= 2208,
    WSBH	= 2209,
    WSBH_MM	= 2210,
    WSBH_MMR6	= 2211,
    XOR	= 2212,
    XOR16_MM	= 2213,
    XOR16_MMR6	= 2214,
    XOR64	= 2215,
    XORI_B	= 2216,
    XORI_MMR6	= 2217,
    XOR_MM	= 2218,
    XOR_MMR6	= 2219,
    XOR_V	= 2220,
    XOR_V_D_PSEUDO	= 2221,
    XOR_V_H_PSEUDO	= 2222,
    XOR_V_W_PSEUDO	= 2223,
    XORi	= 2224,
    XORi64	= 2225,
    XORi_MM	= 2226,
    XorRxRxRy16	= 2227,
    INSTRUCTION_LIST_END = 2228
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    II_ABS	= 1,
    II_ADDU	= 2,
    II_ADDIU	= 3,
    IIPseudo	= 4,
    II_AND	= 5,
    II_ANDI	= 6,
    IIM16Alu	= 7,
    II_B	= 8,
    II_BADDU	= 9,
    II_BCCZAL	= 10,
    II_BBIT	= 11,
    II_BC	= 12,
    II_BC1F	= 13,
    II_BC1FL	= 14,
    II_BC1T	= 15,
    II_BC1TL	= 16,
    II_BCC	= 17,
    II_BCCZ	= 18,
    II_BCCZC	= 19,
    II_BCCZALS	= 20,
    II_CEIL	= 21,
    II_CFC1	= 22,
    II_CLO	= 23,
    II_CLZ	= 24,
    II_CTC1	= 25,
    II_CVT	= 26,
    II_C_CC_D	= 27,
    II_C_CC_S	= 28,
    II_DADD	= 29,
    II_DADDIU	= 30,
    II_DADDU	= 31,
    II_EXT	= 32,
    II_INS	= 33,
    II_DMFC1	= 34,
    II_DMTC1	= 35,
    II_DMUL	= 36,
    II_DMULT	= 37,
    II_DMULTU	= 38,
    II_POP	= 39,
    II_DROTR	= 40,
    II_DROTR32	= 41,
    II_DROTRV	= 42,
    II_DDIV	= 43,
    II_DSLL	= 44,
    II_DSLL32	= 45,
    II_DSLLV	= 46,
    II_DSRA	= 47,
    II_DSRA32	= 48,
    II_DSRAV	= 49,
    II_DSRL	= 50,
    II_DSRL32	= 51,
    II_DSRLV	= 52,
    II_DSUB	= 53,
    II_DSUBU	= 54,
    II_DDIVU	= 55,
    II_ADD_D	= 56,
    II_ADD_S	= 57,
    II_DIV_D	= 58,
    II_DIV_S	= 59,
    II_FLOOR	= 60,
    II_MOV_D	= 61,
    II_MOV_S	= 62,
    II_MUL_D	= 63,
    II_MUL_S	= 64,
    II_NEG	= 65,
    II_SQRT_D	= 66,
    II_SQRT_S	= 67,
    II_SUB_D	= 68,
    II_SUB_S	= 69,
    II_J	= 70,
    II_JAL	= 71,
    II_JALR	= 72,
    II_JALRS	= 73,
    II_JALS	= 74,
    II_JR	= 75,
    II_JRADDIUSP	= 76,
    II_JRC	= 77,
    II_JALRC	= 78,
    II_LB	= 79,
    II_LBU	= 80,
    II_LD	= 81,
    II_LDC1	= 82,
    II_LDL	= 83,
    II_LDR	= 84,
    II_LDXC1	= 85,
    II_LH	= 86,
    II_LHU	= 87,
    II_LUI	= 88,
    II_LUXC1	= 89,
    II_LW	= 90,
    II_LWC1	= 91,
    II_LWL	= 92,
    II_LWR	= 93,
    II_LWU	= 94,
    II_LWXC1	= 95,
    II_MADD	= 96,
    II_MADDU	= 97,
    II_MADD_D	= 98,
    II_MADD_S	= 99,
    II_MFC1	= 100,
    II_MFHC1	= 101,
    II_MFHI_MFLO	= 102,
    II_MOVF_D	= 103,
    II_MOVF	= 104,
    II_MOVF_S	= 105,
    II_MOVN_D	= 106,
    II_MOVN	= 107,
    II_MOVN_S	= 108,
    II_MOVT_D	= 109,
    II_MOVT	= 110,
    II_MOVT_S	= 111,
    II_MOVZ_D	= 112,
    II_MOVZ	= 113,
    II_MOVZ_S	= 114,
    II_MSUB	= 115,
    II_MSUBU	= 116,
    II_MSUB_D	= 117,
    II_MSUB_S	= 118,
    II_MTC1	= 119,
    II_MTHC1	= 120,
    II_MTHI_MTLO	= 121,
    II_MUL	= 122,
    II_MULT	= 123,
    II_MULTU	= 124,
    II_NMADD_D	= 125,
    II_NMADD_S	= 126,
    II_NMSUB_D	= 127,
    II_NMSUB_S	= 128,
    II_NOR	= 129,
    II_OR	= 130,
    II_ORI	= 131,
    II_IndirectBranchPseudo	= 132,
    II_ReturnPseudo	= 133,
    II_DIV	= 134,
    II_DIVU	= 135,
    II_RDHWR	= 136,
    II_ROUND	= 137,
    II_ROTR	= 138,
    II_ROTRV	= 139,
    II_TRUNC	= 140,
    II_RESTORE	= 141,
    II_SB	= 142,
    II_SD	= 143,
    II_SDC1	= 144,
    II_SDL	= 145,
    II_SDR	= 146,
    II_SDXC1	= 147,
    II_SEB	= 148,
    II_SEH	= 149,
    II_SEQ_SNE	= 150,
    II_SEQI_SNEI	= 151,
    II_SH	= 152,
    II_SLL	= 153,
    II_SLLV	= 154,
    II_SLT_SLTU	= 155,
    II_SLTI_SLTIU	= 156,
    II_SRA	= 157,
    II_SRAV	= 158,
    II_SRL	= 159,
    II_SRLV	= 160,
    II_SUBU	= 161,
    II_SUXC1	= 162,
    II_SW	= 163,
    II_SWC1	= 164,
    II_SWL	= 165,
    II_SWR	= 166,
    II_SWXC1	= 167,
    II_SAVE	= 168,
    II_WSBH	= 169,
    II_XOR	= 170,
    II_XORI	= 171,
    ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W	= 172,
    ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W	= 173,
    ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W	= 174,
    ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W	= 175,
    AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W	= 176,
    MOVE_V	= 177,
    LDI_B_LDI_D_LDI_H_LDI_W	= 178,
    AND_V_NOR_V_OR_V_XOR_V	= 179,
    ANDI_B_NORI_B_ORI_B_XORI_B	= 180,
    ST_B_ST_D_ST_H_ST_W	= 181,
    LD_B_LD_D_LD_H_LD_W	= 182,
    SCHED_LIST_END = 183
  };
} // end Sched namespace
} // end Mips namespace
} // end llvm namespace 
#endif // GET_INSTRINFO_ENUM

/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Descriptors                                             *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_INSTRINFO_MC_DESC
#undef GET_INSTRINFO_MC_DESC
namespace llvm {

static const MCPhysReg ImplicitList1[] = { Mips::DSPOutFlag20, 0 };
static const MCPhysReg ImplicitList2[] = { Mips::DSPCarry, 0 };
static const MCPhysReg ImplicitList3[] = { Mips::SP, 0 };
static const MCPhysReg ImplicitList4[] = { Mips::AT, 0 };
static const MCPhysReg ImplicitList5[] = { Mips::RA, 0 };
static const MCPhysReg ImplicitList6[] = { Mips::DSPPos, 0 };
static const MCPhysReg ImplicitList7[] = { Mips::T8, 0 };
static const MCPhysReg ImplicitList8[] = { Mips::DSPCCond, 0 };
static const MCPhysReg ImplicitList9[] = { Mips::HI0, Mips::LO0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList10[] = { Mips::HI0_64, Mips::LO0_64, 0 };
static const MCPhysReg ImplicitList11[] = { Mips::DSPOutFlag16_19, 0 };
static const MCPhysReg ImplicitList12[] = { Mips::HI0, Mips::LO0, 0 };
static const MCPhysReg ImplicitList13[] = { Mips::DSPEFI, 0 };
static const MCPhysReg ImplicitList14[] = { Mips::DSPPos, Mips::DSPEFI, 0 };
static const MCPhysReg ImplicitList15[] = { Mips::DSPOutFlag23, 0 };
static const MCPhysReg ImplicitList16[] = { Mips::FCC0, 0 };
static const MCPhysReg ImplicitList17[] = { Mips::DSPPos, Mips::DSPSCount, 0 };
static const MCPhysReg ImplicitList18[] = { Mips::AC0, 0 };
static const MCPhysReg ImplicitList19[] = { Mips::AC0_64, 0 };
static const MCPhysReg ImplicitList20[] = { Mips::V0, Mips::V1, 0 };
static const MCPhysReg ImplicitList21[] = { Mips::HI0, 0 };
static const MCPhysReg ImplicitList22[] = { Mips::HI0_64, 0 };
static const MCPhysReg ImplicitList23[] = { Mips::LO0, 0 };
static const MCPhysReg ImplicitList24[] = { Mips::LO0_64, 0 };
static const MCPhysReg ImplicitList25[] = { Mips::MPL0, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList26[] = { Mips::MPL1, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList27[] = { Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList28[] = { Mips::P0, 0 };
static const MCPhysReg ImplicitList29[] = { Mips::P1, 0 };
static const MCPhysReg ImplicitList30[] = { Mips::P2, 0 };
static const MCPhysReg ImplicitList31[] = { Mips::DSPOutFlag21, 0 };
static const MCPhysReg ImplicitList32[] = { Mips::DSPOutFlag22, 0 };
static const MCPhysReg ImplicitList33[] = { Mips::P0, Mips::P1, Mips::P2, 0 };
static const MCPhysReg ImplicitList34[] = { Mips::MPL1, Mips::MPL2, Mips::P0, Mips::P1, Mips::P2, 0 };

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo77[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo78[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo79[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo80[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo81[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo82[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo83[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo84[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo85[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo86[] = { { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo87[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo88[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo89[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo90[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo91[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo92[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo93[] = { { Mips::CCRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo94[] = { { Mips::MSACtrlRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo95[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo96[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo97[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo98[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo99[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo100[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo101[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo102[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo103[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo197[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo199[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPUSPRegRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo220[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo247[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo253[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo279[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo280[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo281[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo282[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo283[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo284[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo285[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo286[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo287[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo288[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo289[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo290[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo291[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo292[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo293[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo294[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo295[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #23 = ABSQ_S_PH
  { 24,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #24 = ABSQ_S_PH_MM
  { 25,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #25 = ABSQ_S_QB
  { 26,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo12, -1 ,nullptr },  // Inst #26 = ABSQ_S_QB_MMR2
  { 27,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #27 = ABSQ_S_W
  { 28,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #28 = ABSQ_S_W_MM
  { 29,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #29 = ABS_D_MMR6
  { 30,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #30 = ABS_S_MMR6
  { 31,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #31 = ADD
  { 32,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #32 = ADDIUPC
  { 33,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #33 = ADDIUPC_MM
  { 34,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #34 = ADDIUPC_MMR6
  { 35,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #35 = ADDIUR1SP_MM
  { 36,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #36 = ADDIUR2_MM
  { 37,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #37 = ADDIUS5_MM
  { 38,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #38 = ADDIUSP_MM
  { 39,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #39 = ADDIU_MMR6
  { 40,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #40 = ADDQH_PH
  { 41,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #41 = ADDQH_PH_MMR2
  { 42,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #42 = ADDQH_R_PH
  { 43,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #43 = ADDQH_R_PH_MMR2
  { 44,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #44 = ADDQH_R_W
  { 45,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #45 = ADDQH_R_W_MMR2
  { 46,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #46 = ADDQH_W
  { 47,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #47 = ADDQH_W_MMR2
  { 48,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #48 = ADDQ_PH
  { 49,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #49 = ADDQ_PH_MM
  { 50,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #50 = ADDQ_S_PH
  { 51,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #51 = ADDQ_S_PH_MM
  { 52,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #52 = ADDQ_S_W
  { 53,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #53 = ADDQ_S_W_MM
  { 54,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo16, -1 ,nullptr },  // Inst #54 = ADDSC
  { 55,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo16, -1 ,nullptr },  // Inst #55 = ADDSC_MM
  { 56,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #56 = ADDS_A_B
  { 57,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #57 = ADDS_A_D
  { 58,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #58 = ADDS_A_H
  { 59,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #59 = ADDS_A_W
  { 60,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #60 = ADDS_S_B
  { 61,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #61 = ADDS_S_D
  { 62,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #62 = ADDS_S_H
  { 63,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #63 = ADDS_S_W
  { 64,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #64 = ADDS_U_B
  { 65,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #65 = ADDS_U_D
  { 66,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #66 = ADDS_U_H
  { 67,	3,	1,	4,	173,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #67 = ADDS_U_W
  { 68,	3,	1,	2,	2,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #68 = ADDU16_MM
  { 69,	3,	1,	2,	2,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #69 = ADDU16_MMR6
  { 70,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #70 = ADDUH_QB
  { 71,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #71 = ADDUH_QB_MMR2
  { 72,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #72 = ADDUH_R_QB
  { 73,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #73 = ADDUH_R_QB_MMR2
  { 74,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #74 = ADDU_MMR6
  { 75,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #75 = ADDU_PH
  { 76,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #76 = ADDU_PH_MMR2
  { 77,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #77 = ADDU_QB
  { 78,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #78 = ADDU_QB_MM
  { 79,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #79 = ADDU_S_PH
  { 80,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #80 = ADDU_S_PH_MMR2
  { 81,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #81 = ADDU_S_QB
  { 82,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #82 = ADDU_S_QB_MM
  { 83,	3,	1,	4,	174,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #83 = ADDVI_B
  { 84,	3,	1,	4,	174,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #84 = ADDVI_D
  { 85,	3,	1,	4,	174,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #85 = ADDVI_H
  { 86,	3,	1,	4,	174,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #86 = ADDVI_W
  { 87,	3,	1,	4,	174,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #87 = ADDV_B
  { 88,	3,	1,	4,	174,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #88 = ADDV_D
  { 89,	3,	1,	4,	174,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #89 = ADDV_H
  { 90,	3,	1,	4,	174,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #90 = ADDV_W
  { 91,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #91 = ADDWC
  { 92,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #92 = ADDWC_MM
  { 93,	3,	1,	4,	172,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #93 = ADD_A_B
  { 94,	3,	1,	4,	172,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #94 = ADD_A_D
  { 95,	3,	1,	4,	172,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #95 = ADD_A_H
  { 96,	3,	1,	4,	172,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #96 = ADD_A_W
  { 97,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #97 = ADD_MM
  { 98,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #98 = ADD_MMR6
  { 99,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #99 = ADDi
  { 100,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #100 = ADDi_MM
  { 101,	3,	1,	4,	3,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #101 = ADDiu
  { 102,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #102 = ADDiu_MM
  { 103,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #103 = ADDu
  { 104,	3,	1,	4,	2,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #104 = ADDu_MM
  { 105,	1,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #105 = ADJCALLSTACKDOWN
  { 106,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #106 = ADJCALLSTACKUP
  { 107,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #107 = ALIGN
  { 108,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #108 = ALIGN_MMR6
  { 109,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #109 = ALUIPC
  { 110,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #110 = ALUIPC_MMR6
  { 111,	3,	1,	4,	5,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #111 = AND
  { 112,	3,	1,	2,	5,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #112 = AND16_MM
  { 113,	3,	1,	2,	5,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #113 = AND16_MMR6
  { 114,	3,	1,	4,	5,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #114 = AND64
  { 115,	3,	1,	2,	5,	0, 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #115 = ANDI16_MM
  { 116,	3,	1,	2,	5,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #116 = ANDI16_MMR6
  { 117,	3,	1,	4,	180,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #117 = ANDI_B
  { 118,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #118 = ANDI_MMR6
  { 119,	3,	1,	4,	5,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #119 = AND_MM
  { 120,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #120 = AND_MMR6
  { 121,	3,	1,	4,	179,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #121 = AND_V
  { 122,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #122 = AND_V_D_PSEUDO
  { 123,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #123 = AND_V_H_PSEUDO
  { 124,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #124 = AND_V_W_PSEUDO
  { 125,	3,	1,	4,	6,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #125 = ANDi
  { 126,	3,	1,	4,	5,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #126 = ANDi64
  { 127,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #127 = ANDi_MM
  { 128,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #128 = APPEND
  { 129,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #129 = ASUB_S_B
  { 130,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #130 = ASUB_S_D
  { 131,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #131 = ASUB_S_H
  { 132,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #132 = ASUB_S_W
  { 133,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #133 = ASUB_U_B
  { 134,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #134 = ASUB_U_D
  { 135,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #135 = ASUB_U_H
  { 136,	3,	1,	4,	175,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #136 = ASUB_U_W
  { 137,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #137 = ATOMIC_CMP_SWAP_I16
  { 138,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #138 = ATOMIC_CMP_SWAP_I32
  { 139,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #139 = ATOMIC_CMP_SWAP_I64
  { 140,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #140 = ATOMIC_CMP_SWAP_I8
  { 141,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #141 = ATOMIC_LOAD_ADD_I16
  { 142,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #142 = ATOMIC_LOAD_ADD_I32
  { 143,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #143 = ATOMIC_LOAD_ADD_I64
  { 144,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #144 = ATOMIC_LOAD_ADD_I8
  { 145,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #145 = ATOMIC_LOAD_AND_I16
  { 146,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #146 = ATOMIC_LOAD_AND_I32
  { 147,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #147 = ATOMIC_LOAD_AND_I64
  { 148,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #148 = ATOMIC_LOAD_AND_I8
  { 149,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #149 = ATOMIC_LOAD_NAND_I16
  { 150,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #150 = ATOMIC_LOAD_NAND_I32
  { 151,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #151 = ATOMIC_LOAD_NAND_I64
  { 152,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #152 = ATOMIC_LOAD_NAND_I8
  { 153,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #153 = ATOMIC_LOAD_OR_I16
  { 154,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #154 = ATOMIC_LOAD_OR_I32
  { 155,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #155 = ATOMIC_LOAD_OR_I64
  { 156,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #156 = ATOMIC_LOAD_OR_I8
  { 157,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #157 = ATOMIC_LOAD_SUB_I16
  { 158,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #158 = ATOMIC_LOAD_SUB_I32
  { 159,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #159 = ATOMIC_LOAD_SUB_I64
  { 160,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #160 = ATOMIC_LOAD_SUB_I8
  { 161,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #161 = ATOMIC_LOAD_XOR_I16
  { 162,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #162 = ATOMIC_LOAD_XOR_I32
  { 163,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #163 = ATOMIC_LOAD_XOR_I64
  { 164,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #164 = ATOMIC_LOAD_XOR_I8
  { 165,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #165 = ATOMIC_SWAP_I16
  { 166,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #166 = ATOMIC_SWAP_I32
  { 167,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #167 = ATOMIC_SWAP_I64
  { 168,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #168 = ATOMIC_SWAP_I8
  { 169,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #169 = AUI
  { 170,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #170 = AUIPC
  { 171,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #171 = AUIPC_MMR6
  { 172,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #172 = AUI_MMR6
  { 173,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #173 = AVER_S_B
  { 174,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #174 = AVER_S_D
  { 175,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #175 = AVER_S_H
  { 176,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #176 = AVER_S_W
  { 177,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #177 = AVER_U_B
  { 178,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #178 = AVER_U_D
  { 179,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #179 = AVER_U_H
  { 180,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #180 = AVER_U_W
  { 181,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #181 = AVE_S_B
  { 182,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #182 = AVE_S_D
  { 183,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #183 = AVE_S_H
  { 184,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #184 = AVE_S_W
  { 185,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #185 = AVE_U_B
  { 186,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #186 = AVE_U_D
  { 187,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #187 = AVE_U_H
  { 188,	3,	1,	4,	176,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #188 = AVE_U_W
  { 189,	2,	1,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #189 = AddiuRxImmX16
  { 190,	2,	1,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #190 = AddiuRxPcImmX16
  { 191,	3,	1,	2,	7,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #191 = AddiuRxRxImm16
  { 192,	3,	1,	4,	7,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #192 = AddiuRxRxImmX16
  { 193,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #193 = AddiuRxRyOffMemX16
  { 194,	1,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #194 = AddiuSpImm16
  { 195,	1,	0,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo5, -1 ,nullptr },  // Inst #195 = AddiuSpImmX16
  { 196,	3,	1,	2,	7,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #196 = AdduRxRyRz16
  { 197,	3,	1,	2,	7,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #197 = AndRxRxRy16
  { 198,	1,	0,	4,	8,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, ImplicitList4, OperandInfo46, -1 ,nullptr },  // Inst #198 = B
  { 199,	1,	0,	2,	8,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo46, -1 ,nullptr },  // Inst #199 = B16_MM
  { 200,	3,	1,	4,	9,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #200 = BADDu
  { 201,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo46, -1 ,nullptr },  // Inst #201 = BAL
  { 202,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo46, -1 ,nullptr },  // Inst #202 = BALC
  { 203,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo46, -1 ,nullptr },  // Inst #203 = BALC_MMR6
  { 204,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #204 = BALIGN
  { 205,	1,	0,	4,	10,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo46, -1 ,nullptr },  // Inst #205 = BAL_BR
  { 206,	3,	0,	4,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #206 = BBIT0
  { 207,	3,	0,	4,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #207 = BBIT032
  { 208,	3,	0,	4,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #208 = BBIT1
  { 209,	3,	0,	4,	11,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #209 = BBIT132
  { 210,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #210 = BC
  { 211,	1,	0,	2,	12,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo46, -1 ,nullptr },  // Inst #211 = BC16_MMR6
  { 212,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #212 = BC1EQZ
  { 213,	2,	0,	4,	13,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #213 = BC1F
  { 214,	2,	0,	4,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #214 = BC1FL
  { 215,	2,	0,	4,	13,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #215 = BC1F_MM
  { 216,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo48, -1 ,nullptr },  // Inst #216 = BC1NEZ
  { 217,	2,	0,	4,	15,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #217 = BC1T
  { 218,	2,	0,	4,	16,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #218 = BC1TL
  { 219,	2,	0,	4,	15,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #219 = BC1T_MM
  { 220,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #220 = BC2EQZ
  { 221,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo50, -1 ,nullptr },  // Inst #221 = BC2NEZ
  { 222,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #222 = BCLRI_B
  { 223,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #223 = BCLRI_D
  { 224,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #224 = BCLRI_H
  { 225,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #225 = BCLRI_W
  { 226,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #226 = BCLR_B
  { 227,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #227 = BCLR_D
  { 228,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #228 = BCLR_H
  { 229,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #229 = BCLR_W
  { 230,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #230 = BC_MMR6
  { 231,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #231 = BEQ
  { 232,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #232 = BEQ64
  { 233,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #233 = BEQC
  { 234,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #234 = BEQL
  { 235,	2,	0,	2,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #235 = BEQZ16_MM
  { 236,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #236 = BEQZALC
  { 237,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #237 = BEQZALC_MMR6
  { 238,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #238 = BEQZC
  { 239,	2,	0,	2,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #239 = BEQZC16_MMR6
  { 240,	2,	0,	4,	19,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #240 = BEQZC_MM
  { 241,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #241 = BEQ_MM
  { 242,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #242 = BGE
  { 243,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #243 = BGEC
  { 244,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #244 = BGEImmMacro
  { 245,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #245 = BGEL
  { 246,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #246 = BGELImmMacro
  { 247,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #247 = BGEU
  { 248,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #248 = BGEUC
  { 249,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #249 = BGEUImmMacro
  { 250,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #250 = BGEUL
  { 251,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #251 = BGEULImmMacro
  { 252,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #252 = BGEZ
  { 253,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo56, -1 ,nullptr },  // Inst #253 = BGEZ64
  { 254,	2,	0,	4,	10,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #254 = BGEZAL
  { 255,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #255 = BGEZALC
  { 256,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #256 = BGEZALC_MMR6
  { 257,	2,	0,	4,	10,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #257 = BGEZALL
  { 258,	2,	0,	4,	20,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #258 = BGEZALS_MM
  { 259,	2,	0,	4,	10,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #259 = BGEZAL_MM
  { 260,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #260 = BGEZC
  { 261,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #261 = BGEZL
  { 262,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #262 = BGEZ_MM
  { 263,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #263 = BGT
  { 264,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #264 = BGTImmMacro
  { 265,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #265 = BGTL
  { 266,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #266 = BGTLImmMacro
  { 267,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #267 = BGTU
  { 268,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #268 = BGTUImmMacro
  { 269,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #269 = BGTUL
  { 270,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #270 = BGTULImmMacro
  { 271,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #271 = BGTZ
  { 272,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo56, -1 ,nullptr },  // Inst #272 = BGTZ64
  { 273,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #273 = BGTZALC
  { 274,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #274 = BGTZALC_MMR6
  { 275,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #275 = BGTZC
  { 276,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #276 = BGTZL
  { 277,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #277 = BGTZ_MM
  { 278,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #278 = BINSLI_B
  { 279,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #279 = BINSLI_D
  { 280,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #280 = BINSLI_H
  { 281,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #281 = BINSLI_W
  { 282,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #282 = BINSL_B
  { 283,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #283 = BINSL_D
  { 284,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #284 = BINSL_H
  { 285,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #285 = BINSL_W
  { 286,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #286 = BINSRI_B
  { 287,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #287 = BINSRI_D
  { 288,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #288 = BINSRI_H
  { 289,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #289 = BINSRI_W
  { 290,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #290 = BINSR_B
  { 291,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #291 = BINSR_D
  { 292,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #292 = BINSR_H
  { 293,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #293 = BINSR_W
  { 294,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #294 = BITREV
  { 295,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #295 = BITSWAP
  { 296,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #296 = BITSWAP_MMR6
  { 297,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #297 = BLE
  { 298,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #298 = BLEImmMacro
  { 299,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #299 = BLEL
  { 300,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #300 = BLELImmMacro
  { 301,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #301 = BLEU
  { 302,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #302 = BLEUImmMacro
  { 303,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #303 = BLEUL
  { 304,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #304 = BLEULImmMacro
  { 305,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #305 = BLEZ
  { 306,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo56, -1 ,nullptr },  // Inst #306 = BLEZ64
  { 307,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #307 = BLEZALC
  { 308,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #308 = BLEZALC_MMR6
  { 309,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #309 = BLEZC
  { 310,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #310 = BLEZL
  { 311,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #311 = BLEZ_MM
  { 312,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #312 = BLT
  { 313,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #313 = BLTC
  { 314,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #314 = BLTImmMacro
  { 315,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #315 = BLTL
  { 316,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #316 = BLTLImmMacro
  { 317,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #317 = BLTU
  { 318,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #318 = BLTUC
  { 319,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #319 = BLTUImmMacro
  { 320,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #320 = BLTUL
  { 321,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #321 = BLTULImmMacro
  { 322,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #322 = BLTZ
  { 323,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo56, -1 ,nullptr },  // Inst #323 = BLTZ64
  { 324,	2,	0,	4,	10,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #324 = BLTZAL
  { 325,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #325 = BLTZALC
  { 326,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #326 = BLTZALC_MMR6
  { 327,	2,	0,	4,	10,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #327 = BLTZALL
  { 328,	2,	0,	4,	20,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #328 = BLTZALS_MM
  { 329,	2,	0,	4,	10,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #329 = BLTZAL_MM
  { 330,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #330 = BLTZC
  { 331,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #331 = BLTZL
  { 332,	2,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #332 = BLTZ_MM
  { 333,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #333 = BMNZI_B
  { 334,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #334 = BMNZ_V
  { 335,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #335 = BMZI_B
  { 336,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #336 = BMZ_V
  { 337,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #337 = BNE
  { 338,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #338 = BNE64
  { 339,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #339 = BNEC
  { 340,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #340 = BNEGI_B
  { 341,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #341 = BNEGI_D
  { 342,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #342 = BNEGI_H
  { 343,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #343 = BNEGI_W
  { 344,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #344 = BNEG_B
  { 345,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #345 = BNEG_D
  { 346,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #346 = BNEG_H
  { 347,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #347 = BNEG_W
  { 348,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #348 = BNEL
  { 349,	2,	0,	2,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #349 = BNEZ16_MM
  { 350,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #350 = BNEZALC
  { 351,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo54, -1 ,nullptr },  // Inst #351 = BNEZALC_MMR6
  { 352,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #352 = BNEZC
  { 353,	2,	0,	2,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #353 = BNEZC16_MMR6
  { 354,	2,	0,	4,	19,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #354 = BNEZC_MM
  { 355,	3,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #355 = BNE_MM
  { 356,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #356 = BNVC
  { 357,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #357 = BNZ_B
  { 358,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #358 = BNZ_D
  { 359,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo67, -1 ,nullptr },  // Inst #359 = BNZ_H
  { 360,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #360 = BNZ_V
  { 361,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo68, -1 ,nullptr },  // Inst #361 = BNZ_W
  { 362,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #362 = BOVC
  { 363,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #363 = BPOSGE32
  { 364,	1,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #364 = BPOSGE32_PSEUDO
  { 365,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #365 = BREAK
  { 366,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #366 = BREAK16_MM
  { 367,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #367 = BREAK16_MMR6
  { 368,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #368 = BREAK_MM
  { 369,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #369 = BREAK_MMR6
  { 370,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #370 = BSELI_B
  { 371,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #371 = BSEL_D_PSEUDO
  { 372,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #372 = BSEL_FD_PSEUDO
  { 373,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #373 = BSEL_FW_PSEUDO
  { 374,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #374 = BSEL_H_PSEUDO
  { 375,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #375 = BSEL_V
  { 376,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #376 = BSEL_W_PSEUDO
  { 377,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #377 = BSETI_B
  { 378,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #378 = BSETI_D
  { 379,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #379 = BSETI_H
  { 380,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #380 = BSETI_W
  { 381,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #381 = BSET_B
  { 382,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #382 = BSET_D
  { 383,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #383 = BSET_H
  { 384,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #384 = BSET_W
  { 385,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #385 = BZ_B
  { 386,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #386 = BZ_D
  { 387,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo67, -1 ,nullptr },  // Inst #387 = BZ_H
  { 388,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo65, -1 ,nullptr },  // Inst #388 = BZ_V
  { 389,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo68, -1 ,nullptr },  // Inst #389 = BZ_W
  { 390,	1,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #390 = B_MMR6_Pseudo
  { 391,	1,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #391 = B_MM_Pseudo
  { 392,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #392 = BeqImm
  { 393,	2,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #393 = BeqzRxImm16
  { 394,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #394 = BeqzRxImmX16
  { 395,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #395 = Bimm16
  { 396,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #396 = BimmX16
  { 397,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo55, -1 ,nullptr },  // Inst #397 = BneImm
  { 398,	2,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #398 = BnezRxImm16
  { 399,	2,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #399 = BnezRxImmX16
  { 400,	0,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #400 = Break16
  { 401,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #401 = Bteqz16
  { 402,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #402 = BteqzT8CmpX16
  { 403,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #403 = BteqzT8CmpiX16
  { 404,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #404 = BteqzT8SltX16
  { 405,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #405 = BteqzT8SltiX16
  { 406,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #406 = BteqzT8SltiuX16
  { 407,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #407 = BteqzT8SltuX16
  { 408,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #408 = BteqzX16
  { 409,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #409 = Btnez16
  { 410,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #410 = BtnezT8CmpX16
  { 411,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #411 = BtnezT8CmpiX16
  { 412,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #412 = BtnezT8SltX16
  { 413,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #413 = BtnezT8SltiX16
  { 414,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #414 = BtnezT8SltiuX16
  { 415,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #415 = BtnezT8SltuX16
  { 416,	1,	0,	4,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #416 = BtnezX16
  { 417,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #417 = BuildPairF64
  { 418,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #418 = BuildPairF64_64
  { 419,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #419 = CACHE
  { 420,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #420 = CACHEE
  { 421,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #421 = CACHEE_MM
  { 422,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #422 = CACHEE_MMR6
  { 423,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #423 = CACHE_MM
  { 424,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #424 = CACHE_MMR6
  { 425,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #425 = CACHE_R6
  { 426,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #426 = CEIL_L_D64
  { 427,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #427 = CEIL_L_D_MMR6
  { 428,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #428 = CEIL_L_S
  { 429,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #429 = CEIL_L_S_MMR6
  { 430,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #430 = CEIL_W_D32
  { 431,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #431 = CEIL_W_D64
  { 432,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #432 = CEIL_W_D_MMR6
  { 433,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #433 = CEIL_W_MM
  { 434,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #434 = CEIL_W_S
  { 435,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #435 = CEIL_W_S_MM
  { 436,	2,	1,	4,	21,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #436 = CEIL_W_S_MMR6
  { 437,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #437 = CEQI_B
  { 438,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #438 = CEQI_D
  { 439,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #439 = CEQI_H
  { 440,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #440 = CEQI_W
  { 441,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #441 = CEQ_B
  { 442,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #442 = CEQ_D
  { 443,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #443 = CEQ_H
  { 444,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #444 = CEQ_W
  { 445,	2,	1,	4,	22,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #445 = CFC1
  { 446,	2,	1,	4,	22,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #446 = CFC1_MM
  { 447,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #447 = CFCMSA
  { 448,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #448 = CINS
  { 449,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #449 = CINS32
  { 450,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #450 = CLASS_D
  { 451,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #451 = CLASS_D_MMR6
  { 452,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #452 = CLASS_S
  { 453,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #453 = CLASS_S_MMR6
  { 454,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #454 = CLEI_S_B
  { 455,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #455 = CLEI_S_D
  { 456,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #456 = CLEI_S_H
  { 457,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #457 = CLEI_S_W
  { 458,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #458 = CLEI_U_B
  { 459,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #459 = CLEI_U_D
  { 460,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #460 = CLEI_U_H
  { 461,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #461 = CLEI_U_W
  { 462,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #462 = CLE_S_B
  { 463,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #463 = CLE_S_D
  { 464,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #464 = CLE_S_H
  { 465,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #465 = CLE_S_W
  { 466,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #466 = CLE_U_B
  { 467,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #467 = CLE_U_D
  { 468,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #468 = CLE_U_H
  { 469,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #469 = CLE_U_W
  { 470,	2,	1,	4,	23,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #470 = CLO
  { 471,	2,	1,	4,	23,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #471 = CLO_MM
  { 472,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #472 = CLO_MMR6
  { 473,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #473 = CLO_R6
  { 474,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #474 = CLTI_S_B
  { 475,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #475 = CLTI_S_D
  { 476,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #476 = CLTI_S_H
  { 477,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #477 = CLTI_S_W
  { 478,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #478 = CLTI_U_B
  { 479,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #479 = CLTI_U_D
  { 480,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #480 = CLTI_U_H
  { 481,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #481 = CLTI_U_W
  { 482,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #482 = CLT_S_B
  { 483,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #483 = CLT_S_D
  { 484,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #484 = CLT_S_H
  { 485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #485 = CLT_S_W
  { 486,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #486 = CLT_U_B
  { 487,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #487 = CLT_U_D
  { 488,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #488 = CLT_U_H
  { 489,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #489 = CLT_U_W
  { 490,	2,	1,	4,	24,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #490 = CLZ
  { 491,	2,	1,	4,	24,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #491 = CLZ_MM
  { 492,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #492 = CLZ_MMR6
  { 493,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #493 = CLZ_R6
  { 494,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #494 = CMPGDU_EQ_QB
  { 495,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #495 = CMPGDU_LE_QB
  { 496,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #496 = CMPGDU_LT_QB
  { 497,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #497 = CMPGU_EQ_QB
  { 498,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #498 = CMPGU_LE_QB
  { 499,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #499 = CMPGU_LT_QB
  { 500,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #500 = CMPU_EQ_QB
  { 501,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #501 = CMPU_LE_QB
  { 502,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #502 = CMPU_LT_QB
  { 503,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #503 = CMP_AF_D_MMR6
  { 504,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #504 = CMP_AF_S_MMR6
  { 505,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #505 = CMP_EQ_D
  { 506,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #506 = CMP_EQ_D_MMR6
  { 507,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #507 = CMP_EQ_PH
  { 508,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #508 = CMP_EQ_S
  { 509,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #509 = CMP_EQ_S_MMR6
  { 510,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #510 = CMP_F_D
  { 511,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #511 = CMP_F_S
  { 512,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #512 = CMP_LE_D
  { 513,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #513 = CMP_LE_D_MMR6
  { 514,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #514 = CMP_LE_PH
  { 515,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #515 = CMP_LE_S
  { 516,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #516 = CMP_LE_S_MMR6
  { 517,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #517 = CMP_LT_D
  { 518,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #518 = CMP_LT_D_MMR6
  { 519,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo12, -1 ,nullptr },  // Inst #519 = CMP_LT_PH
  { 520,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #520 = CMP_LT_S
  { 521,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #521 = CMP_LT_S_MMR6
  { 522,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #522 = CMP_SAF_D
  { 523,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #523 = CMP_SAF_D_MMR6
  { 524,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #524 = CMP_SAF_S
  { 525,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #525 = CMP_SAF_S_MMR6
  { 526,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #526 = CMP_SEQ_D
  { 527,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #527 = CMP_SEQ_D_MMR6
  { 528,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #528 = CMP_SEQ_S
  { 529,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #529 = CMP_SEQ_S_MMR6
  { 530,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #530 = CMP_SLE_D
  { 531,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #531 = CMP_SLE_D_MMR6
  { 532,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #532 = CMP_SLE_S
  { 533,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #533 = CMP_SLE_S_MMR6
  { 534,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #534 = CMP_SLT_D
  { 535,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #535 = CMP_SLT_D_MMR6
  { 536,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #536 = CMP_SLT_S
  { 537,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #537 = CMP_SLT_S_MMR6
  { 538,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #538 = CMP_SUEQ_D
  { 539,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #539 = CMP_SUEQ_D_MMR6
  { 540,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #540 = CMP_SUEQ_S
  { 541,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #541 = CMP_SUEQ_S_MMR6
  { 542,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #542 = CMP_SULE_D
  { 543,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #543 = CMP_SULE_D_MMR6
  { 544,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #544 = CMP_SULE_S
  { 545,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #545 = CMP_SULE_S_MMR6
  { 546,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #546 = CMP_SULT_D
  { 547,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #547 = CMP_SULT_D_MMR6
  { 548,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #548 = CMP_SULT_S
  { 549,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #549 = CMP_SULT_S_MMR6
  { 550,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #550 = CMP_SUN_D
  { 551,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #551 = CMP_SUN_D_MMR6
  { 552,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #552 = CMP_SUN_S
  { 553,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #553 = CMP_SUN_S_MMR6
  { 554,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #554 = CMP_UEQ_D
  { 555,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #555 = CMP_UEQ_D_MMR6
  { 556,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #556 = CMP_UEQ_S
  { 557,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #557 = CMP_UEQ_S_MMR6
  { 558,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #558 = CMP_ULE_D
  { 559,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #559 = CMP_ULE_D_MMR6
  { 560,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #560 = CMP_ULE_S
  { 561,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #561 = CMP_ULE_S_MMR6
  { 562,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #562 = CMP_ULT_D
  { 563,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #563 = CMP_ULT_D_MMR6
  { 564,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #564 = CMP_ULT_S
  { 565,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #565 = CMP_ULT_S_MMR6
  { 566,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #566 = CMP_UN_D
  { 567,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #567 = CMP_UN_D_MMR6
  { 568,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #568 = CMP_UN_S
  { 569,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #569 = CMP_UN_S_MMR6
  { 570,	3,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #570 = CONSTPOOL_ENTRY
  { 571,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #571 = COPY_FD_PSEUDO
  { 572,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #572 = COPY_FW_PSEUDO
  { 573,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #573 = COPY_S_B
  { 574,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #574 = COPY_S_D
  { 575,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #575 = COPY_S_H
  { 576,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #576 = COPY_S_W
  { 577,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #577 = COPY_U_B
  { 578,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #578 = COPY_U_H
  { 579,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #579 = COPY_U_W
  { 580,	2,	1,	4,	25,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #580 = CTC1
  { 581,	2,	1,	4,	25,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #581 = CTC1_MM
  { 582,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #582 = CTCMSA
  { 583,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #583 = CVT_D32_S
  { 584,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #584 = CVT_D32_W
  { 585,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #585 = CVT_D32_W_MM
  { 586,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #586 = CVT_D64_L
  { 587,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #587 = CVT_D64_S
  { 588,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #588 = CVT_D64_W
  { 589,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #589 = CVT_D_L_MMR6
  { 590,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #590 = CVT_D_S_MM
  { 591,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #591 = CVT_D_S_MMR6
  { 592,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #592 = CVT_D_W_MMR6
  { 593,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #593 = CVT_L_D64
  { 594,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #594 = CVT_L_D64_MM
  { 595,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #595 = CVT_L_D_MMR6
  { 596,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #596 = CVT_L_S
  { 597,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #597 = CVT_L_S_MM
  { 598,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #598 = CVT_L_S_MMR6
  { 599,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #599 = CVT_S_D32
  { 600,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #600 = CVT_S_D32_MM
  { 601,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #601 = CVT_S_D64
  { 602,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #602 = CVT_S_D_MMR6
  { 603,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #603 = CVT_S_L
  { 604,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #604 = CVT_S_L_MMR6
  { 605,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #605 = CVT_S_W
  { 606,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #606 = CVT_S_W_MM
  { 607,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #607 = CVT_S_W_MMR6
  { 608,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #608 = CVT_W_D32
  { 609,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #609 = CVT_W_D64
  { 610,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #610 = CVT_W_D_MMR6
  { 611,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #611 = CVT_W_MM
  { 612,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #612 = CVT_W_S
  { 613,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #613 = CVT_W_S_MM
  { 614,	2,	1,	4,	26,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #614 = CVT_W_S_MMR6
  { 615,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #615 = C_EQ_D32
  { 616,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #616 = C_EQ_D64
  { 617,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #617 = C_EQ_S
  { 618,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #618 = C_F_D32
  { 619,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #619 = C_F_D64
  { 620,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #620 = C_F_S
  { 621,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #621 = C_LE_D32
  { 622,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #622 = C_LE_D64
  { 623,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #623 = C_LE_S
  { 624,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #624 = C_LT_D32
  { 625,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #625 = C_LT_D64
  { 626,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #626 = C_LT_S
  { 627,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #627 = C_NGE_D32
  { 628,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #628 = C_NGE_D64
  { 629,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #629 = C_NGE_S
  { 630,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #630 = C_NGLE_D32
  { 631,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #631 = C_NGLE_D64
  { 632,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #632 = C_NGLE_S
  { 633,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #633 = C_NGL_D32
  { 634,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #634 = C_NGL_D64
  { 635,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #635 = C_NGL_S
  { 636,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #636 = C_NGT_D32
  { 637,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #637 = C_NGT_D64
  { 638,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #638 = C_NGT_S
  { 639,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #639 = C_OLE_D32
  { 640,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #640 = C_OLE_D64
  { 641,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #641 = C_OLE_S
  { 642,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #642 = C_OLT_D32
  { 643,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #643 = C_OLT_D64
  { 644,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #644 = C_OLT_S
  { 645,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #645 = C_SEQ_D32
  { 646,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #646 = C_SEQ_D64
  { 647,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #647 = C_SEQ_S
  { 648,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #648 = C_SF_D32
  { 649,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #649 = C_SF_D64
  { 650,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #650 = C_SF_S
  { 651,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #651 = C_UEQ_D32
  { 652,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #652 = C_UEQ_D64
  { 653,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #653 = C_UEQ_S
  { 654,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #654 = C_ULE_D32
  { 655,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #655 = C_ULE_D64
  { 656,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #656 = C_ULE_S
  { 657,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #657 = C_ULT_D32
  { 658,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #658 = C_ULT_D64
  { 659,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #659 = C_ULT_S
  { 660,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #660 = C_UN_D32
  { 661,	2,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #661 = C_UN_D64
  { 662,	2,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #662 = C_UN_S
  { 663,	2,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #663 = CmpRxRy16
  { 664,	2,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41, -1 ,nullptr },  // Inst #664 = CmpiRxImm16
  { 665,	2,	0,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41, -1 ,nullptr },  // Inst #665 = CmpiRxImmX16
  { 666,	1,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #666 = Constant32
  { 667,	3,	1,	4,	29,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #667 = DADD
  { 668,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #668 = DADDi
  { 669,	3,	1,	4,	30,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #669 = DADDiu
  { 670,	3,	1,	4,	31,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #670 = DADDu
  { 671,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #671 = DAHI
  { 672,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #672 = DAHI_MM64R6
  { 673,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #673 = DALIGN
  { 674,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #674 = DALIGN_MM64R6
  { 675,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #675 = DATI
  { 676,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #676 = DATI_MM64R6
  { 677,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #677 = DAUI
  { 678,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #678 = DAUI_MM64R6
  { 679,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #679 = DBITSWAP
  { 680,	2,	1,	4,	23,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #680 = DCLO
  { 681,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #681 = DCLO_R6
  { 682,	2,	1,	4,	24,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #682 = DCLZ
  { 683,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #683 = DCLZ_R6
  { 684,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #684 = DDIV
  { 685,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #685 = DDIVU
  { 686,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #686 = DDIVU_MM64R6
  { 687,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #687 = DDIV_MM64R6
  { 688,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #688 = DERET
  { 689,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #689 = DERET_MM
  { 690,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #690 = DERET_MMR6
  { 691,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #691 = DEXT
  { 692,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #692 = DEXTM
  { 693,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #693 = DEXTM_MM64R6
  { 694,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #694 = DEXTU
  { 695,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #695 = DEXTU_MM64R6
  { 696,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #696 = DEXT_MM64R6
  { 697,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #697 = DI
  { 698,	5,	1,	4,	33,	0, 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #698 = DINS
  { 699,	5,	1,	4,	33,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #699 = DINSM
  { 700,	5,	1,	4,	33,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #700 = DINSU
  { 701,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #701 = DIV
  { 702,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #702 = DIVU
  { 703,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #703 = DIVU_MMR6
  { 704,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #704 = DIV_MMR6
  { 705,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #705 = DIV_S_B
  { 706,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #706 = DIV_S_D
  { 707,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #707 = DIV_S_H
  { 708,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #708 = DIV_S_W
  { 709,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #709 = DIV_U_B
  { 710,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #710 = DIV_U_D
  { 711,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #711 = DIV_U_H
  { 712,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #712 = DIV_U_W
  { 713,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #713 = DI_MM
  { 714,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #714 = DI_MMR6
  { 715,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #715 = DLSA
  { 716,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #716 = DLSA_R6
  { 717,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #717 = DMFC0
  { 718,	2,	1,	4,	34,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #718 = DMFC1
  { 719,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #719 = DMFC2
  { 720,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #720 = DMFC2_OCTEON
  { 721,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #721 = DMOD
  { 722,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #722 = DMODU
  { 723,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #723 = DMODU_MM64R6
  { 724,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #724 = DMOD_MM64R6
  { 725,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #725 = DMTC0
  { 726,	2,	1,	4,	35,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #726 = DMTC1
  { 727,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #727 = DMTC2
  { 728,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #728 = DMTC2_OCTEON
  { 729,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #729 = DMUH
  { 730,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #730 = DMUHU
  { 731,	3,	1,	4,	36,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo34, -1 ,nullptr },  // Inst #731 = DMUL
  { 732,	2,	0,	4,	37,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #732 = DMULT
  { 733,	2,	0,	4,	38,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #733 = DMULTu
  { 734,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #734 = DMULU
  { 735,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #735 = DMUL_R6
  { 736,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #736 = DOTP_S_D
  { 737,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #737 = DOTP_S_H
  { 738,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #738 = DOTP_S_W
  { 739,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #739 = DOTP_U_D
  { 740,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #740 = DOTP_U_H
  { 741,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #741 = DOTP_U_W
  { 742,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #742 = DPADD_S_D
  { 743,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #743 = DPADD_S_H
  { 744,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #744 = DPADD_S_W
  { 745,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #745 = DPADD_U_D
  { 746,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #746 = DPADD_U_H
  { 747,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #747 = DPADD_U_W
  { 748,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #748 = DPAQX_SA_W_PH
  { 749,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #749 = DPAQX_SA_W_PH_MMR2
  { 750,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #750 = DPAQX_S_W_PH
  { 751,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #751 = DPAQX_S_W_PH_MMR2
  { 752,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #752 = DPAQ_SA_L_W
  { 753,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #753 = DPAQ_SA_L_W_MM
  { 754,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #754 = DPAQ_S_W_PH
  { 755,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #755 = DPAQ_S_W_PH_MM
  { 756,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #756 = DPAU_H_QBL
  { 757,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #757 = DPAU_H_QBL_MM
  { 758,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #758 = DPAU_H_QBR
  { 759,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #759 = DPAU_H_QBR_MM
  { 760,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #760 = DPAX_W_PH
  { 761,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #761 = DPAX_W_PH_MMR2
  { 762,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #762 = DPA_W_PH
  { 763,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #763 = DPA_W_PH_MMR2
  { 764,	2,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #764 = DPOP
  { 765,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #765 = DPSQX_SA_W_PH
  { 766,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #766 = DPSQX_SA_W_PH_MMR2
  { 767,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #767 = DPSQX_S_W_PH
  { 768,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #768 = DPSQX_S_W_PH_MMR2
  { 769,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #769 = DPSQ_SA_L_W
  { 770,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #770 = DPSQ_SA_L_W_MM
  { 771,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #771 = DPSQ_S_W_PH
  { 772,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #772 = DPSQ_S_W_PH_MM
  { 773,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #773 = DPSUB_S_D
  { 774,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #774 = DPSUB_S_H
  { 775,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #775 = DPSUB_S_W
  { 776,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #776 = DPSUB_U_D
  { 777,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #777 = DPSUB_U_H
  { 778,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #778 = DPSUB_U_W
  { 779,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #779 = DPSU_H_QBL
  { 780,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #780 = DPSU_H_QBL_MM
  { 781,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #781 = DPSU_H_QBR
  { 782,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #782 = DPSU_H_QBR_MM
  { 783,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #783 = DPSX_W_PH
  { 784,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #784 = DPSX_W_PH_MMR2
  { 785,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #785 = DPS_W_PH
  { 786,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #786 = DPS_W_PH_MMR2
  { 787,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #787 = DROL
  { 788,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #788 = DROLImm
  { 789,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #789 = DROR
  { 790,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #790 = DRORImm
  { 791,	3,	1,	4,	40,	0, 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #791 = DROTR
  { 792,	3,	1,	4,	41,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #792 = DROTR32
  { 793,	3,	1,	4,	42,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #793 = DROTRV
  { 794,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #794 = DSBH
  { 795,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #795 = DSDIV
  { 796,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #796 = DSDivMacro
  { 797,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #797 = DSHD
  { 798,	3,	1,	4,	44,	0, 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #798 = DSLL
  { 799,	3,	1,	4,	45,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #799 = DSLL32
  { 800,	2,	1,	4,	44,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #800 = DSLL64_32
  { 801,	3,	1,	4,	46,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #801 = DSLLV
  { 802,	3,	1,	4,	47,	0, 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #802 = DSRA
  { 803,	3,	1,	4,	48,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #803 = DSRA32
  { 804,	3,	1,	4,	49,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #804 = DSRAV
  { 805,	3,	1,	4,	50,	0, 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #805 = DSRL
  { 806,	3,	1,	4,	51,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #806 = DSRL32
  { 807,	3,	1,	4,	52,	0, 0x1ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #807 = DSRLV
  { 808,	3,	1,	4,	53,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #808 = DSUB
  { 809,	3,	1,	4,	54,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #809 = DSUBu
  { 810,	2,	0,	4,	55,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #810 = DUDIV
  { 811,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #811 = DUDivMacro
  { 812,	2,	0,	2,	7,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #812 = DivRxRy16
  { 813,	2,	0,	2,	7,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #813 = DivuRxRy16
  { 814,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #814 = EHB
  { 815,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #815 = EHB_MM
  { 816,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #816 = EHB_MMR6
  { 817,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #817 = EI
  { 818,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #818 = EI_MM
  { 819,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #819 = EI_MMR6
  { 820,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #820 = ERET
  { 821,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #821 = ERETNC
  { 822,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #822 = ERETNC_MMR6
  { 823,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #823 = ERET_MM
  { 824,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #824 = ERET_MMR6
  { 825,	0,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #825 = ERet
  { 826,	4,	1,	4,	32,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #826 = EXT
  { 827,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo118, -1 ,nullptr },  // Inst #827 = EXTP
  { 828,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo118, -1 ,nullptr },  // Inst #828 = EXTPDP
  { 829,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo119, -1 ,nullptr },  // Inst #829 = EXTPDPV
  { 830,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo119, -1 ,nullptr },  // Inst #830 = EXTPDPV_MM
  { 831,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo118, -1 ,nullptr },  // Inst #831 = EXTPDP_MM
  { 832,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo119, -1 ,nullptr },  // Inst #832 = EXTPV
  { 833,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo119, -1 ,nullptr },  // Inst #833 = EXTPV_MM
  { 834,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo118, -1 ,nullptr },  // Inst #834 = EXTP_MM
  { 835,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #835 = EXTRV_RS_W
  { 836,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #836 = EXTRV_RS_W_MM
  { 837,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #837 = EXTRV_R_W
  { 838,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #838 = EXTRV_R_W_MM
  { 839,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #839 = EXTRV_S_H
  { 840,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #840 = EXTRV_S_H_MM
  { 841,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #841 = EXTRV_W
  { 842,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo119, -1 ,nullptr },  // Inst #842 = EXTRV_W_MM
  { 843,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #843 = EXTR_RS_W
  { 844,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #844 = EXTR_RS_W_MM
  { 845,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #845 = EXTR_R_W
  { 846,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #846 = EXTR_R_W_MM
  { 847,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #847 = EXTR_S_H
  { 848,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #848 = EXTR_S_H_MM
  { 849,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #849 = EXTR_W
  { 850,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo118, -1 ,nullptr },  // Inst #850 = EXTR_W_MM
  { 851,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #851 = EXTS
  { 852,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #852 = EXTS32
  { 853,	4,	1,	4,	32,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #853 = EXT_MM
  { 854,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo120, -1 ,nullptr },  // Inst #854 = ExtractElementF64
  { 855,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo121, -1 ,nullptr },  // Inst #855 = ExtractElementF64_64
  { 856,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #856 = FABS_D
  { 857,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #857 = FABS_D32
  { 858,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #858 = FABS_D64
  { 859,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #859 = FABS_MM
  { 860,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #860 = FABS_S
  { 861,	2,	1,	4,	1,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #861 = FABS_S_MM
  { 862,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #862 = FABS_W
  { 863,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #863 = FADD_D
  { 864,	3,	1,	4,	56,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #864 = FADD_D32
  { 865,	3,	1,	4,	56,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #865 = FADD_D64
  { 866,	3,	1,	4,	56,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #866 = FADD_D_MMR6
  { 867,	3,	1,	4,	56,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #867 = FADD_MM
  { 868,	3,	1,	4,	57,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #868 = FADD_S
  { 869,	3,	1,	4,	57,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #869 = FADD_S_MM
  { 870,	3,	1,	4,	57,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #870 = FADD_S_MMR6
  { 871,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #871 = FADD_W
  { 872,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #872 = FCAF_D
  { 873,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #873 = FCAF_W
  { 874,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #874 = FCEQ_D
  { 875,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #875 = FCEQ_W
  { 876,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #876 = FCLASS_D
  { 877,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #877 = FCLASS_W
  { 878,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #878 = FCLE_D
  { 879,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #879 = FCLE_W
  { 880,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #880 = FCLT_D
  { 881,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #881 = FCLT_W
  { 882,	3,	0,	4,	27,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo127, -1 ,nullptr },  // Inst #882 = FCMP_D32
  { 883,	3,	0,	4,	27,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo127, -1 ,nullptr },  // Inst #883 = FCMP_D32_MM
  { 884,	3,	0,	4,	27,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo128, -1 ,nullptr },  // Inst #884 = FCMP_D64
  { 885,	3,	0,	4,	28,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #885 = FCMP_S32
  { 886,	3,	0,	4,	28,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #886 = FCMP_S32_MM
  { 887,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #887 = FCNE_D
  { 888,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #888 = FCNE_W
  { 889,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #889 = FCOR_D
  { 890,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #890 = FCOR_W
  { 891,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #891 = FCUEQ_D
  { 892,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #892 = FCUEQ_W
  { 893,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #893 = FCULE_D
  { 894,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #894 = FCULE_W
  { 895,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #895 = FCULT_D
  { 896,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #896 = FCULT_W
  { 897,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #897 = FCUNE_D
  { 898,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #898 = FCUNE_W
  { 899,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #899 = FCUN_D
  { 900,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #900 = FCUN_W
  { 901,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #901 = FDIV_D
  { 902,	3,	1,	4,	58,	0, 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #902 = FDIV_D32
  { 903,	3,	1,	4,	58,	0, 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #903 = FDIV_D64
  { 904,	3,	1,	4,	58,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #904 = FDIV_D_MMR6
  { 905,	3,	1,	4,	58,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #905 = FDIV_MM
  { 906,	3,	1,	4,	59,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #906 = FDIV_S
  { 907,	3,	1,	4,	59,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #907 = FDIV_S_MM
  { 908,	3,	1,	4,	59,	0, 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #908 = FDIV_S_MMR6
  { 909,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #909 = FDIV_W
  { 910,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #910 = FEXDO_H
  { 911,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #911 = FEXDO_W
  { 912,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #912 = FEXP2_D
  { 913,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #913 = FEXP2_D_1_PSEUDO
  { 914,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #914 = FEXP2_W
  { 915,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #915 = FEXP2_W_1_PSEUDO
  { 916,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #916 = FEXUPL_D
  { 917,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #917 = FEXUPL_W
  { 918,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #918 = FEXUPR_D
  { 919,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #919 = FEXUPR_W
  { 920,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #920 = FFINT_S_D
  { 921,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #921 = FFINT_S_W
  { 922,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #922 = FFINT_U_D
  { 923,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #923 = FFINT_U_W
  { 924,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #924 = FFQL_D
  { 925,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #925 = FFQL_W
  { 926,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #926 = FFQR_D
  { 927,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #927 = FFQR_W
  { 928,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #928 = FILL_B
  { 929,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #929 = FILL_D
  { 930,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #930 = FILL_FD_PSEUDO
  { 931,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #931 = FILL_FW_PSEUDO
  { 932,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #932 = FILL_H
  { 933,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #933 = FILL_W
  { 934,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #934 = FLOG2_D
  { 935,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #935 = FLOG2_W
  { 936,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #936 = FLOOR_L_D64
  { 937,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #937 = FLOOR_L_D_MMR6
  { 938,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #938 = FLOOR_L_S
  { 939,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #939 = FLOOR_L_S_MMR6
  { 940,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #940 = FLOOR_W_D32
  { 941,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #941 = FLOOR_W_D64
  { 942,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #942 = FLOOR_W_D_MMR6
  { 943,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #943 = FLOOR_W_MM
  { 944,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #944 = FLOOR_W_S
  { 945,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #945 = FLOOR_W_S_MM
  { 946,	2,	1,	4,	60,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #946 = FLOOR_W_S_MMR6
  { 947,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #947 = FMADD_D
  { 948,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #948 = FMADD_W
  { 949,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #949 = FMAX_A_D
  { 950,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #950 = FMAX_A_W
  { 951,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #951 = FMAX_D
  { 952,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #952 = FMAX_W
  { 953,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #953 = FMIN_A_D
  { 954,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #954 = FMIN_A_W
  { 955,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #955 = FMIN_D
  { 956,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #956 = FMIN_W
  { 957,	2,	1,	4,	61,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #957 = FMOV_D32
  { 958,	2,	1,	4,	61,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #958 = FMOV_D32_MM
  { 959,	2,	1,	4,	61,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #959 = FMOV_D64
  { 960,	2,	1,	4,	61,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #960 = FMOV_D_MMR6
  { 961,	2,	1,	4,	62,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #961 = FMOV_S
  { 962,	2,	1,	4,	62,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #962 = FMOV_S_MM
  { 963,	2,	1,	4,	62,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #963 = FMOV_S_MMR6
  { 964,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #964 = FMSUB_D
  { 965,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #965 = FMSUB_W
  { 966,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #966 = FMUL_D
  { 967,	3,	1,	4,	63,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #967 = FMUL_D32
  { 968,	3,	1,	4,	63,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #968 = FMUL_D64
  { 969,	3,	1,	4,	63,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #969 = FMUL_D_MMR6
  { 970,	3,	1,	4,	63,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #970 = FMUL_MM
  { 971,	3,	1,	4,	64,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #971 = FMUL_S
  { 972,	3,	1,	4,	64,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #972 = FMUL_S_MM
  { 973,	3,	1,	4,	64,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #973 = FMUL_S_MMR6
  { 974,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #974 = FMUL_W
  { 975,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #975 = FNEG_D32
  { 976,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #976 = FNEG_D64
  { 977,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #977 = FNEG_D_MMR6
  { 978,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #978 = FNEG_MM
  { 979,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #979 = FNEG_S
  { 980,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #980 = FNEG_S_MM
  { 981,	2,	1,	4,	65,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #981 = FNEG_S_MMR6
  { 982,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #982 = FRCP_D
  { 983,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #983 = FRCP_W
  { 984,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #984 = FRINT_D
  { 985,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #985 = FRINT_W
  { 986,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #986 = FRSQRT_D
  { 987,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #987 = FRSQRT_W
  { 988,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #988 = FSAF_D
  { 989,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #989 = FSAF_W
  { 990,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #990 = FSEQ_D
  { 991,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #991 = FSEQ_W
  { 992,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #992 = FSLE_D
  { 993,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #993 = FSLE_W
  { 994,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #994 = FSLT_D
  { 995,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #995 = FSLT_W
  { 996,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #996 = FSNE_D
  { 997,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #997 = FSNE_W
  { 998,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #998 = FSOR_D
  { 999,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #999 = FSOR_W
  { 1000,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1000 = FSQRT_D
  { 1001,	2,	1,	4,	66,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1001 = FSQRT_D32
  { 1002,	2,	1,	4,	66,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1002 = FSQRT_D64
  { 1003,	2,	1,	4,	66,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1003 = FSQRT_MM
  { 1004,	2,	1,	4,	67,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1004 = FSQRT_S
  { 1005,	2,	1,	4,	67,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1005 = FSQRT_S_MM
  { 1006,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1006 = FSQRT_W
  { 1007,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1007 = FSUB_D
  { 1008,	3,	1,	4,	68,	0, 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1008 = FSUB_D32
  { 1009,	3,	1,	4,	68,	0, 0x4ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1009 = FSUB_D64
  { 1010,	3,	1,	4,	68,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1010 = FSUB_D_MMR6
  { 1011,	3,	1,	4,	68,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1011 = FSUB_MM
  { 1012,	3,	1,	4,	69,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1012 = FSUB_S
  { 1013,	3,	1,	4,	69,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1013 = FSUB_S_MM
  { 1014,	3,	1,	4,	69,	0, 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1014 = FSUB_S_MMR6
  { 1015,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1015 = FSUB_W
  { 1016,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1016 = FSUEQ_D
  { 1017,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1017 = FSUEQ_W
  { 1018,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1018 = FSULE_D
  { 1019,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1019 = FSULE_W
  { 1020,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1020 = FSULT_D
  { 1021,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1021 = FSULT_W
  { 1022,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1022 = FSUNE_D
  { 1023,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1023 = FSUNE_W
  { 1024,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1024 = FSUN_D
  { 1025,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1025 = FSUN_W
  { 1026,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1026 = FTINT_S_D
  { 1027,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1027 = FTINT_S_W
  { 1028,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1028 = FTINT_U_D
  { 1029,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1029 = FTINT_U_W
  { 1030,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo130, -1 ,nullptr },  // Inst #1030 = FTQ_H
  { 1031,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo131, -1 ,nullptr },  // Inst #1031 = FTQ_W
  { 1032,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1032 = FTRUNC_S_D
  { 1033,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1033 = FTRUNC_S_W
  { 1034,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1034 = FTRUNC_U_D
  { 1035,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1035 = FTRUNC_U_W
  { 1036,	4,	2,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #1036 = GotPrologue16
  { 1037,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #1037 = HADD_S_D
  { 1038,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #1038 = HADD_S_H
  { 1039,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1039 = HADD_S_W
  { 1040,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #1040 = HADD_U_D
  { 1041,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #1041 = HADD_U_H
  { 1042,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1042 = HADD_U_W
  { 1043,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #1043 = HSUB_S_D
  { 1044,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #1044 = HSUB_S_H
  { 1045,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1045 = HSUB_S_W
  { 1046,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #1046 = HSUB_U_D
  { 1047,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #1047 = HSUB_U_H
  { 1048,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1048 = HSUB_U_W
  { 1049,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1049 = ILVEV_B
  { 1050,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1050 = ILVEV_D
  { 1051,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1051 = ILVEV_H
  { 1052,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1052 = ILVEV_W
  { 1053,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1053 = ILVL_B
  { 1054,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1054 = ILVL_D
  { 1055,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1055 = ILVL_H
  { 1056,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1056 = ILVL_W
  { 1057,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1057 = ILVOD_B
  { 1058,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1058 = ILVOD_D
  { 1059,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1059 = ILVOD_H
  { 1060,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1060 = ILVOD_W
  { 1061,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1061 = ILVR_B
  { 1062,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1062 = ILVR_D
  { 1063,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1063 = ILVR_H
  { 1064,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1064 = ILVR_W
  { 1065,	5,	1,	4,	33,	0, 0x1ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #1065 = INS
  { 1066,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #1066 = INSERT_B
  { 1067,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #1067 = INSERT_B_VIDX64_PSEUDO
  { 1068,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #1068 = INSERT_B_VIDX_PSEUDO
  { 1069,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1069 = INSERT_D
  { 1070,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo146, -1 ,nullptr },  // Inst #1070 = INSERT_D_VIDX64_PSEUDO
  { 1071,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo147, -1 ,nullptr },  // Inst #1071 = INSERT_D_VIDX_PSEUDO
  { 1072,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo148, -1 ,nullptr },  // Inst #1072 = INSERT_FD_PSEUDO
  { 1073,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo149, -1 ,nullptr },  // Inst #1073 = INSERT_FD_VIDX64_PSEUDO
  { 1074,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo150, -1 ,nullptr },  // Inst #1074 = INSERT_FD_VIDX_PSEUDO
  { 1075,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo151, -1 ,nullptr },  // Inst #1075 = INSERT_FW_PSEUDO
  { 1076,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo152, -1 ,nullptr },  // Inst #1076 = INSERT_FW_VIDX64_PSEUDO
  { 1077,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo153, -1 ,nullptr },  // Inst #1077 = INSERT_FW_VIDX_PSEUDO
  { 1078,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo154, -1 ,nullptr },  // Inst #1078 = INSERT_H
  { 1079,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo155, -1 ,nullptr },  // Inst #1079 = INSERT_H_VIDX64_PSEUDO
  { 1080,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo156, -1 ,nullptr },  // Inst #1080 = INSERT_H_VIDX_PSEUDO
  { 1081,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo157, -1 ,nullptr },  // Inst #1081 = INSERT_W
  { 1082,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158, -1 ,nullptr },  // Inst #1082 = INSERT_W_VIDX64_PSEUDO
  { 1083,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo159, -1 ,nullptr },  // Inst #1083 = INSERT_W_VIDX_PSEUDO
  { 1084,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #1084 = INSV
  { 1085,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo161, -1 ,nullptr },  // Inst #1085 = INSVE_B
  { 1086,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo162, -1 ,nullptr },  // Inst #1086 = INSVE_D
  { 1087,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo163, -1 ,nullptr },  // Inst #1087 = INSVE_H
  { 1088,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo164, -1 ,nullptr },  // Inst #1088 = INSVE_W
  { 1089,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #1089 = INSV_MM
  { 1090,	5,	1,	4,	33,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #1090 = INS_MM
  { 1091,	1,	0,	4,	70,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x3ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #1091 = J
  { 1092,	1,	0,	4,	71,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1092 = JAL
  { 1093,	2,	1,	4,	72,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1093 = JALR
  { 1094,	1,	0,	2,	72,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo69, -1 ,nullptr },  // Inst #1094 = JALR16_MM
  { 1095,	2,	1,	4,	72,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo99, -1 ,nullptr },  // Inst #1095 = JALR64
  { 1096,	1,	0,	4,	72,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo165, -1 ,nullptr },  // Inst #1096 = JALR64Pseudo
  { 1097,	1,	0,	2,	72,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo69, -1 ,nullptr },  // Inst #1097 = JALRC16_MMR6
  { 1098,	1,	0,	4,	72,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo69, -1 ,nullptr },  // Inst #1098 = JALRPseudo
  { 1099,	1,	0,	2,	73,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo69, -1 ,nullptr },  // Inst #1099 = JALRS16_MM
  { 1100,	2,	1,	4,	73,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1100 = JALRS_MM
  { 1101,	2,	1,	4,	0,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1101 = JALR_HB
  { 1102,	2,	1,	4,	72,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1102 = JALR_MM
  { 1103,	1,	0,	4,	74,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1103 = JALS_MM
  { 1104,	1,	0,	4,	71,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1104 = JALX
  { 1105,	1,	0,	4,	71,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1105 = JALX_MM
  { 1106,	1,	0,	4,	71,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1106 = JAL_MM
  { 1107,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo17, -1 ,nullptr },  // Inst #1107 = JIALC
  { 1108,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo17, -1 ,nullptr },  // Inst #1108 = JIALC_MMR6
  { 1109,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo17, -1 ,nullptr },  // Inst #1109 = JIC
  { 1110,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo17, -1 ,nullptr },  // Inst #1110 = JIC_MMR6
  { 1111,	1,	0,	4,	75,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1111 = JR
  { 1112,	1,	0,	2,	75,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1112 = JR16_MM
  { 1113,	1,	0,	4,	75,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1113 = JR64
  { 1114,	1,	0,	2,	76,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1114 = JRADDIUSP
  { 1115,	1,	0,	2,	77,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1115 = JRC16_MM
  { 1116,	1,	0,	2,	75,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1116 = JRC16_MMR6
  { 1117,	1,	0,	2,	76,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1117 = JRCADDIUSP_MMR6
  { 1118,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1118 = JR_HB
  { 1119,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1119 = JR_HB_R6
  { 1120,	1,	0,	4,	75,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1120 = JR_MM
  { 1121,	1,	0,	4,	70,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #1121 = J_MM
  { 1122,	1,	0,	6,	7,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1122 = Jal16
  { 1123,	1,	0,	6,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo5, -1 ,nullptr },  // Inst #1123 = JalB16
  { 1124,	1,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1124 = JalOneReg
  { 1125,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1125 = JalTwoReg
  { 1126,	0,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1126 = JrRa16
  { 1127,	0,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1127 = JrcRa16
  { 1128,	1,	0,	2,	7,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1128 = JrcRx16
  { 1129,	1,	0,	2,	78,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo166, -1 ,nullptr },  // Inst #1129 = JumpLinkReg16
  { 1130,	3,	1,	4,	79,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1130 = LB
  { 1131,	3,	1,	4,	79,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1131 = LB64
  { 1132,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1132 = LBE
  { 1133,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1133 = LBE_MM
  { 1134,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1134 = LBE_MMR6
  { 1135,	3,	1,	2,	80,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1135 = LBU16_MM
  { 1136,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1136 = LBUE_MMR6
  { 1137,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1137 = LBUX
  { 1138,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1138 = LBUX_MM
  { 1139,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1139 = LBU_MMR6
  { 1140,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1140 = LB_MM
  { 1141,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1141 = LB_MMR6
  { 1142,	3,	1,	4,	80,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1142 = LBu
  { 1143,	3,	1,	4,	80,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1143 = LBu64
  { 1144,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1144 = LBuE
  { 1145,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1145 = LBuE_MM
  { 1146,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1146 = LBu_MM
  { 1147,	3,	1,	4,	81,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1147 = LD
  { 1148,	3,	1,	4,	82,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1148 = LDC1
  { 1149,	3,	1,	4,	82,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1149 = LDC164
  { 1150,	3,	1,	4,	82,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1150 = LDC1_MM
  { 1151,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1151 = LDC2
  { 1152,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1152 = LDC2_R6
  { 1153,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1153 = LDC3
  { 1154,	2,	1,	4,	178,	0, 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #1154 = LDI_B
  { 1155,	2,	1,	4,	178,	0, 0x6ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #1155 = LDI_D
  { 1156,	2,	1,	4,	178,	0, 0x6ULL, nullptr, nullptr, OperandInfo178, -1 ,nullptr },  // Inst #1156 = LDI_H
  { 1157,	2,	1,	4,	178,	0, 0x6ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1157 = LDI_W
  { 1158,	4,	1,	4,	83,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1158 = LDL
  { 1159,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1159 = LDPC
  { 1160,	4,	1,	4,	84,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1160 = LDR
  { 1161,	3,	1,	4,	85,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1161 = LDXC1
  { 1162,	3,	1,	4,	85,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1162 = LDXC164
  { 1163,	3,	1,	4,	182,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1163 = LD_B
  { 1164,	3,	1,	4,	182,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1164 = LD_D
  { 1165,	3,	1,	4,	182,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #1165 = LD_H
  { 1166,	3,	1,	4,	182,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1166 = LD_W
  { 1167,	3,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1167 = LEA_ADDiu
  { 1168,	3,	1,	4,	0,	0, 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1168 = LEA_ADDiu64
  { 1169,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1169 = LEA_ADDiu_MM
  { 1170,	3,	1,	4,	86,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1170 = LH
  { 1171,	3,	1,	4,	86,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1171 = LH64
  { 1172,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1172 = LHE
  { 1173,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1173 = LHE_MM
  { 1174,	3,	1,	2,	87,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1174 = LHU16_MM
  { 1175,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1175 = LHX
  { 1176,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1176 = LHX_MM
  { 1177,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1177 = LH_MM
  { 1178,	3,	1,	4,	87,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1178 = LHu
  { 1179,	3,	1,	4,	87,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1179 = LHu64
  { 1180,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1180 = LHuE
  { 1181,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1181 = LHuE_MM
  { 1182,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1182 = LHu_MM
  { 1183,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1183 = LI16_MM
  { 1184,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1184 = LI16_MMR6
  { 1185,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1185 = LL
  { 1186,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1186 = LLD
  { 1187,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1187 = LLD_R6
  { 1188,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1188 = LLE
  { 1189,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1189 = LLE_MM
  { 1190,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1190 = LLE_MMR6
  { 1191,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1191 = LL_MM
  { 1192,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1192 = LL_R6
  { 1193,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1193 = LOAD_ACC128
  { 1194,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1194 = LOAD_ACC64
  { 1195,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1195 = LOAD_ACC64DSP
  { 1196,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1196 = LOAD_CCOND_DSP
  { 1197,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1197 = LONG_BRANCH_ADDiu
  { 1198,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1198 = LONG_BRANCH_DADDiu
  { 1199,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1199 = LONG_BRANCH_LUi
  { 1200,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1200 = LSA
  { 1201,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1201 = LSA_MMR6
  { 1202,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1202 = LSA_R6
  { 1203,	2,	1,	4,	88,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1203 = LUI_MMR6
  { 1204,	3,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1204 = LUXC1
  { 1205,	3,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1205 = LUXC164
  { 1206,	3,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1206 = LUXC1_MM
  { 1207,	2,	1,	4,	88,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1207 = LUi
  { 1208,	2,	1,	4,	88,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1208 = LUi64
  { 1209,	2,	1,	4,	88,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1209 = LUi_MM
  { 1210,	3,	1,	4,	90,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1210 = LW
  { 1211,	3,	1,	2,	90,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1211 = LW16_MM
  { 1212,	3,	1,	4,	90,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1212 = LW64
  { 1213,	3,	1,	4,	91,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1213 = LWC1
  { 1214,	3,	1,	4,	91,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1214 = LWC1_MM
  { 1215,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1215 = LWC2
  { 1216,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1216 = LWC2_R6
  { 1217,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1217 = LWC3
  { 1218,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1218 = LWE
  { 1219,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1219 = LWE_MM
  { 1220,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1220 = LWE_MMR6
  { 1221,	3,	1,	2,	90,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1221 = LWGP_MM
  { 1222,	4,	1,	4,	92,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1222 = LWL
  { 1223,	4,	1,	4,	92,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1223 = LWL64
  { 1224,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1224 = LWLE
  { 1225,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1225 = LWLE_MM
  { 1226,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1226 = LWL_MM
  { 1227,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1227 = LWM16_MM
  { 1228,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1228 = LWM16_MMR6
  { 1229,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1229 = LWM32_MM
  { 1230,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1230 = LWM_MM
  { 1231,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1231 = LWPC
  { 1232,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1232 = LWPC_MMR6
  { 1233,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1233 = LWP_MM
  { 1234,	4,	1,	4,	93,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1234 = LWR
  { 1235,	4,	1,	4,	93,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1235 = LWR64
  { 1236,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1236 = LWRE
  { 1237,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1237 = LWRE_MM
  { 1238,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1238 = LWR_MM
  { 1239,	3,	1,	2,	90,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1239 = LWSP_MM
  { 1240,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1240 = LWUPC
  { 1241,	3,	1,	4,	94,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1241 = LWU_MM
  { 1242,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1242 = LWX
  { 1243,	3,	1,	4,	95,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1243 = LWXC1
  { 1244,	3,	1,	4,	95,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1244 = LWXC1_MM
  { 1245,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1245 = LWXS_MM
  { 1246,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1246 = LWX_MM
  { 1247,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1247 = LW_MM
  { 1248,	3,	1,	4,	90,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1248 = LW_MMR6
  { 1249,	3,	1,	4,	94,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1249 = LWu
  { 1250,	4,	1,	4,	79,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1250 = LbRxRyOffMemX16
  { 1251,	4,	1,	4,	80,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1251 = LbuRxRyOffMemX16
  { 1252,	4,	1,	4,	86,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1252 = LhRxRyOffMemX16
  { 1253,	4,	1,	4,	87,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1253 = LhuRxRyOffMemX16
  { 1254,	2,	1,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #1254 = LiRxImm16
  { 1255,	2,	1,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #1255 = LiRxImmAlignX16
  { 1256,	2,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #1256 = LiRxImmX16
  { 1257,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1257 = LoadAddrImm32
  { 1258,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1258 = LoadAddrImm64
  { 1259,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1259 = LoadAddrReg32
  { 1260,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1260 = LoadAddrReg64
  { 1261,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1261 = LoadImm32
  { 1262,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #1262 = LoadImm64
  { 1263,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #1263 = LwConstant32
  { 1264,	3,	1,	2,	90,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1264 = LwRxPcTcp16
  { 1265,	3,	1,	4,	90,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1265 = LwRxPcTcpX16
  { 1266,	4,	1,	4,	90,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1266 = LwRxRyOffMemX16
  { 1267,	3,	1,	4,	90,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1267 = LwRxSpImmX16
  { 1268,	2,	0,	4,	96,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1268 = MADD
  { 1269,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1269 = MADDF_D
  { 1270,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1270 = MADDF_D_MMR6
  { 1271,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1271 = MADDF_S
  { 1272,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1272 = MADDF_S_MMR6
  { 1273,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1273 = MADDR_Q_H
  { 1274,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1274 = MADDR_Q_W
  { 1275,	2,	0,	4,	97,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1275 = MADDU
  { 1276,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1276 = MADDU_DSP
  { 1277,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1277 = MADDU_DSP_MM
  { 1278,	2,	0,	4,	97,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1278 = MADDU_MM
  { 1279,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1279 = MADDV_B
  { 1280,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #1280 = MADDV_D
  { 1281,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1281 = MADDV_H
  { 1282,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1282 = MADDV_W
  { 1283,	4,	1,	4,	98,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1283 = MADD_D32
  { 1284,	4,	1,	4,	98,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1284 = MADD_D32_MM
  { 1285,	4,	1,	4,	98,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1285 = MADD_D64
  { 1286,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1286 = MADD_DSP
  { 1287,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1287 = MADD_DSP_MM
  { 1288,	2,	0,	4,	96,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1288 = MADD_MM
  { 1289,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1289 = MADD_Q_H
  { 1290,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1290 = MADD_Q_W
  { 1291,	4,	1,	4,	99,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1291 = MADD_S
  { 1292,	4,	1,	4,	99,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1292 = MADD_S_MM
  { 1293,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1293 = MAQ_SA_W_PHL
  { 1294,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1294 = MAQ_SA_W_PHL_MM
  { 1295,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1295 = MAQ_SA_W_PHR
  { 1296,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1296 = MAQ_SA_W_PHR_MM
  { 1297,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1297 = MAQ_S_W_PHL
  { 1298,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1298 = MAQ_S_W_PHL_MM
  { 1299,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1299 = MAQ_S_W_PHR
  { 1300,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1300 = MAQ_S_W_PHR_MM
  { 1301,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1301 = MAXA_D
  { 1302,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1302 = MAXA_D_MMR6
  { 1303,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1303 = MAXA_S
  { 1304,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1304 = MAXA_S_MMR6
  { 1305,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1305 = MAXI_S_B
  { 1306,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1306 = MAXI_S_D
  { 1307,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1307 = MAXI_S_H
  { 1308,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1308 = MAXI_S_W
  { 1309,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1309 = MAXI_U_B
  { 1310,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1310 = MAXI_U_D
  { 1311,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1311 = MAXI_U_H
  { 1312,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1312 = MAXI_U_W
  { 1313,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1313 = MAX_A_B
  { 1314,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1314 = MAX_A_D
  { 1315,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1315 = MAX_A_H
  { 1316,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1316 = MAX_A_W
  { 1317,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1317 = MAX_D
  { 1318,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1318 = MAX_D_MMR6
  { 1319,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1319 = MAX_S
  { 1320,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1320 = MAX_S_B
  { 1321,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1321 = MAX_S_D
  { 1322,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1322 = MAX_S_H
  { 1323,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1323 = MAX_S_MMR6
  { 1324,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1324 = MAX_S_W
  { 1325,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1325 = MAX_U_B
  { 1326,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1326 = MAX_U_D
  { 1327,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1327 = MAX_U_H
  { 1328,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1328 = MAX_U_W
  { 1329,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1329 = MFC0
  { 1330,	2,	1,	4,	100,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1330 = MFC1
  { 1331,	2,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1331 = MFC1_MM
  { 1332,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1332 = MFC2
  { 1333,	2,	1,	4,	101,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1333 = MFHC1_D32
  { 1334,	2,	1,	4,	101,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1334 = MFHC1_D64
  { 1335,	2,	1,	4,	101,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1335 = MFHC1_MM
  { 1336,	1,	1,	4,	102,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1336 = MFHI
  { 1337,	1,	1,	2,	102,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1337 = MFHI16_MM
  { 1338,	1,	1,	4,	102,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1338 = MFHI64
  { 1339,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1339 = MFHI_DSP
  { 1340,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1340 = MFHI_DSP_MM
  { 1341,	1,	1,	4,	102,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1341 = MFHI_MM
  { 1342,	1,	1,	4,	102,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1342 = MFLO
  { 1343,	1,	1,	2,	102,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1343 = MFLO16_MM
  { 1344,	1,	1,	4,	102,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1344 = MFLO64
  { 1345,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1345 = MFLO_DSP
  { 1346,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1346 = MFLO_DSP_MM
  { 1347,	1,	1,	4,	102,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1347 = MFLO_MM
  { 1348,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1348 = MINA_D
  { 1349,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1349 = MINA_D_MMR6
  { 1350,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1350 = MINA_S
  { 1351,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1351 = MINA_S_MMR6
  { 1352,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1352 = MINI_S_B
  { 1353,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1353 = MINI_S_D
  { 1354,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1354 = MINI_S_H
  { 1355,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1355 = MINI_S_W
  { 1356,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1356 = MINI_U_B
  { 1357,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1357 = MINI_U_D
  { 1358,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1358 = MINI_U_H
  { 1359,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1359 = MINI_U_W
  { 1360,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1360 = MIN_A_B
  { 1361,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1361 = MIN_A_D
  { 1362,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1362 = MIN_A_H
  { 1363,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1363 = MIN_A_W
  { 1364,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1364 = MIN_D
  { 1365,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1365 = MIN_D_MMR6
  { 1366,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1366 = MIN_S
  { 1367,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1367 = MIN_S_B
  { 1368,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1368 = MIN_S_D
  { 1369,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1369 = MIN_S_H
  { 1370,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1370 = MIN_S_MMR6
  { 1371,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1371 = MIN_S_W
  { 1372,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1372 = MIN_U_B
  { 1373,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1373 = MIN_U_D
  { 1374,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1374 = MIN_U_H
  { 1375,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1375 = MIN_U_W
  { 1376,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1376 = MIPSeh_return32
  { 1377,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, ImplicitList20, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1377 = MIPSeh_return64
  { 1378,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1378 = MOD
  { 1379,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1379 = MODSUB
  { 1380,	3,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1380 = MODU
  { 1381,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1381 = MODU_MMR6
  { 1382,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1382 = MOD_MMR6
  { 1383,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1383 = MOD_S_B
  { 1384,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1384 = MOD_S_D
  { 1385,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1385 = MOD_S_H
  { 1386,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1386 = MOD_S_W
  { 1387,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1387 = MOD_U_B
  { 1388,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1388 = MOD_U_D
  { 1389,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1389 = MOD_U_H
  { 1390,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1390 = MOD_U_W
  { 1391,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1391 = MOVE16_MM
  { 1392,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1392 = MOVE16_MMR6
  { 1393,	4,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo215, -1 ,nullptr },  // Inst #1393 = MOVEP_MM
  { 1394,	2,	1,	4,	177,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1394 = MOVE_V
  { 1395,	4,	1,	4,	103,	0, 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1395 = MOVF_D32
  { 1396,	4,	1,	4,	103,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1396 = MOVF_D32_MM
  { 1397,	4,	1,	4,	103,	0, 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1397 = MOVF_D64
  { 1398,	4,	1,	4,	104,	0, 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1398 = MOVF_I
  { 1399,	4,	1,	4,	104,	0, 0x4ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1399 = MOVF_I64
  { 1400,	4,	1,	4,	104,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1400 = MOVF_I_MM
  { 1401,	4,	1,	4,	105,	0, 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1401 = MOVF_S
  { 1402,	4,	1,	4,	105,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1402 = MOVF_S_MM
  { 1403,	4,	1,	4,	106,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1403 = MOVN_I64_D64
  { 1404,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1404 = MOVN_I64_I
  { 1405,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1405 = MOVN_I64_I64
  { 1406,	4,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1406 = MOVN_I64_S
  { 1407,	4,	1,	4,	106,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1407 = MOVN_I_D32
  { 1408,	4,	1,	4,	106,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1408 = MOVN_I_D32_MM
  { 1409,	4,	1,	4,	106,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1409 = MOVN_I_D64
  { 1410,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1410 = MOVN_I_I
  { 1411,	4,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1411 = MOVN_I_I64
  { 1412,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1412 = MOVN_I_MM
  { 1413,	4,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1413 = MOVN_I_S
  { 1414,	4,	1,	4,	108,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1414 = MOVN_I_S_MM
  { 1415,	4,	1,	4,	109,	0, 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1415 = MOVT_D32
  { 1416,	4,	1,	4,	109,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1416 = MOVT_D32_MM
  { 1417,	4,	1,	4,	109,	0, 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1417 = MOVT_D64
  { 1418,	4,	1,	4,	110,	0, 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1418 = MOVT_I
  { 1419,	4,	1,	4,	110,	0, 0x4ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1419 = MOVT_I64
  { 1420,	4,	1,	4,	110,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1420 = MOVT_I_MM
  { 1421,	4,	1,	4,	111,	0, 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1421 = MOVT_S
  { 1422,	4,	1,	4,	111,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1422 = MOVT_S_MM
  { 1423,	4,	1,	4,	112,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1423 = MOVZ_I64_D64
  { 1424,	4,	1,	4,	113,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1424 = MOVZ_I64_I
  { 1425,	4,	1,	4,	113,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1425 = MOVZ_I64_I64
  { 1426,	4,	1,	4,	114,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1426 = MOVZ_I64_S
  { 1427,	4,	1,	4,	112,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1427 = MOVZ_I_D32
  { 1428,	4,	1,	4,	112,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1428 = MOVZ_I_D32_MM
  { 1429,	4,	1,	4,	112,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1429 = MOVZ_I_D64
  { 1430,	4,	1,	4,	113,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1430 = MOVZ_I_I
  { 1431,	4,	1,	4,	113,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1431 = MOVZ_I_I64
  { 1432,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1432 = MOVZ_I_MM
  { 1433,	4,	1,	4,	114,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1433 = MOVZ_I_S
  { 1434,	4,	1,	4,	114,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1434 = MOVZ_I_S_MM
  { 1435,	2,	0,	4,	115,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1435 = MSUB
  { 1436,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1436 = MSUBF_D
  { 1437,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1437 = MSUBF_D_MMR6
  { 1438,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1438 = MSUBF_S
  { 1439,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1439 = MSUBF_S_MMR6
  { 1440,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1440 = MSUBR_Q_H
  { 1441,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1441 = MSUBR_Q_W
  { 1442,	2,	0,	4,	116,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1442 = MSUBU
  { 1443,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1443 = MSUBU_DSP
  { 1444,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1444 = MSUBU_DSP_MM
  { 1445,	2,	0,	4,	116,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1445 = MSUBU_MM
  { 1446,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #1446 = MSUBV_B
  { 1447,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #1447 = MSUBV_D
  { 1448,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1448 = MSUBV_H
  { 1449,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1449 = MSUBV_W
  { 1450,	4,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1450 = MSUB_D32
  { 1451,	4,	1,	4,	117,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1451 = MSUB_D32_MM
  { 1452,	4,	1,	4,	117,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1452 = MSUB_D64
  { 1453,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1453 = MSUB_DSP
  { 1454,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1454 = MSUB_DSP_MM
  { 1455,	2,	0,	4,	115,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1455 = MSUB_MM
  { 1456,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1456 = MSUB_Q_H
  { 1457,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1457 = MSUB_Q_W
  { 1458,	4,	1,	4,	118,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1458 = MSUB_S
  { 1459,	4,	1,	4,	118,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1459 = MSUB_S_MM
  { 1460,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1460 = MTC0
  { 1461,	2,	1,	4,	119,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1461 = MTC1
  { 1462,	2,	1,	4,	119,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1462 = MTC1_MM
  { 1463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1463 = MTC2
  { 1464,	3,	1,	4,	120,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1464 = MTHC1_D32
  { 1465,	3,	1,	4,	120,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1465 = MTHC1_D64
  { 1466,	3,	1,	4,	120,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1466 = MTHC1_MM
  { 1467,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo69, -1 ,nullptr },  // Inst #1467 = MTHI
  { 1468,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo165, -1 ,nullptr },  // Inst #1468 = MTHI64
  { 1469,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1469 = MTHI_DSP
  { 1470,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1470 = MTHI_DSP_MM
  { 1471,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo69, -1 ,nullptr },  // Inst #1471 = MTHI_MM
  { 1472,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo237, -1 ,nullptr },  // Inst #1472 = MTHLIP
  { 1473,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo237, -1 ,nullptr },  // Inst #1473 = MTHLIP_MM
  { 1474,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo69, -1 ,nullptr },  // Inst #1474 = MTLO
  { 1475,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo165, -1 ,nullptr },  // Inst #1475 = MTLO64
  { 1476,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo238, -1 ,nullptr },  // Inst #1476 = MTLO_DSP
  { 1477,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo238, -1 ,nullptr },  // Inst #1477 = MTLO_DSP_MM
  { 1478,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo69, -1 ,nullptr },  // Inst #1478 = MTLO_MM
  { 1479,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo165, -1 ,nullptr },  // Inst #1479 = MTM0
  { 1480,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo165, -1 ,nullptr },  // Inst #1480 = MTM1
  { 1481,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo165, -1 ,nullptr },  // Inst #1481 = MTM2
  { 1482,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo165, -1 ,nullptr },  // Inst #1482 = MTP0
  { 1483,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo165, -1 ,nullptr },  // Inst #1483 = MTP1
  { 1484,	1,	0,	4,	121,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo165, -1 ,nullptr },  // Inst #1484 = MTP2
  { 1485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1485 = MUH
  { 1486,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1486 = MUHU
  { 1487,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1487 = MUHU_MMR6
  { 1488,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1488 = MUH_MMR6
  { 1489,	3,	1,	4,	122,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo16, -1 ,nullptr },  // Inst #1489 = MUL
  { 1490,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1490 = MULEQ_S_W_PHL
  { 1491,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1491 = MULEQ_S_W_PHL_MM
  { 1492,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1492 = MULEQ_S_W_PHR
  { 1493,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1493 = MULEQ_S_W_PHR_MM
  { 1494,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1494 = MULEU_S_PH_QBL
  { 1495,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1495 = MULEU_S_PH_QBL_MM
  { 1496,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1496 = MULEU_S_PH_QBR
  { 1497,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1497 = MULEU_S_PH_QBR_MM
  { 1498,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1498 = MULQ_RS_PH
  { 1499,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1499 = MULQ_RS_PH_MM
  { 1500,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo16, -1 ,nullptr },  // Inst #1500 = MULQ_RS_W
  { 1501,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo16, -1 ,nullptr },  // Inst #1501 = MULQ_RS_W_MMR2
  { 1502,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1502 = MULQ_S_PH
  { 1503,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1503 = MULQ_S_PH_MMR2
  { 1504,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo16, -1 ,nullptr },  // Inst #1504 = MULQ_S_W
  { 1505,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo16, -1 ,nullptr },  // Inst #1505 = MULQ_S_W_MMR2
  { 1506,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1506 = MULR_Q_H
  { 1507,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1507 = MULR_Q_W
  { 1508,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo114, -1 ,nullptr },  // Inst #1508 = MULSAQ_S_W_PH
  { 1509,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #1509 = MULSA_W_PH
  { 1510,	2,	0,	4,	123,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1510 = MULT
  { 1511,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1511 = MULTU_DSP
  { 1512,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1512 = MULTU_DSP_MM
  { 1513,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1513 = MULT_DSP
  { 1514,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1514 = MULT_DSP_MM
  { 1515,	2,	0,	4,	123,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1515 = MULT_MM
  { 1516,	2,	0,	4,	124,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1516 = MULTu
  { 1517,	2,	0,	4,	124,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1517 = MULTu_MM
  { 1518,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1518 = MULU
  { 1519,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1519 = MULU_MMR6
  { 1520,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1520 = MULV_B
  { 1521,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1521 = MULV_D
  { 1522,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1522 = MULV_H
  { 1523,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1523 = MULV_W
  { 1524,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1524 = MUL_MM
  { 1525,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1525 = MUL_MMR6
  { 1526,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1526 = MUL_PH
  { 1527,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1527 = MUL_PH_MMR2
  { 1528,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1528 = MUL_Q_H
  { 1529,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1529 = MUL_Q_W
  { 1530,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1530 = MUL_R6
  { 1531,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1531 = MUL_S_PH
  { 1532,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo22, -1 ,nullptr },  // Inst #1532 = MUL_S_PH_MMR2
  { 1533,	1,	1,	2,	7,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1533 = Mfhi16
  { 1534,	1,	1,	2,	7,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1534 = Mflo16
  { 1535,	2,	1,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo240, -1 ,nullptr },  // Inst #1535 = Move32R16
  { 1536,	2,	1,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo241, -1 ,nullptr },  // Inst #1536 = MoveR3216
  { 1537,	2,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1537 = MultRxRy16
  { 1538,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo44, -1 ,nullptr },  // Inst #1538 = MultRxRyRz16
  { 1539,	2,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1539 = MultuRxRy16
  { 1540,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo44, -1 ,nullptr },  // Inst #1540 = MultuRxRyRz16
  { 1541,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1541 = NLOC_B
  { 1542,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1542 = NLOC_D
  { 1543,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1543 = NLOC_H
  { 1544,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1544 = NLOC_W
  { 1545,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1545 = NLZC_B
  { 1546,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1546 = NLZC_D
  { 1547,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1547 = NLZC_H
  { 1548,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1548 = NLZC_W
  { 1549,	4,	1,	4,	125,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1549 = NMADD_D32
  { 1550,	4,	1,	4,	125,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1550 = NMADD_D32_MM
  { 1551,	4,	1,	4,	125,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1551 = NMADD_D64
  { 1552,	4,	1,	4,	126,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1552 = NMADD_S
  { 1553,	4,	1,	4,	126,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1553 = NMADD_S_MM
  { 1554,	4,	1,	4,	127,	0, 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1554 = NMSUB_D32
  { 1555,	4,	1,	4,	127,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1555 = NMSUB_D32_MM
  { 1556,	4,	1,	4,	127,	0, 0x4ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1556 = NMSUB_D64
  { 1557,	4,	1,	4,	128,	0, 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1557 = NMSUB_S
  { 1558,	4,	1,	4,	128,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1558 = NMSUB_S_MM
  { 1559,	0,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1559 = NOP
  { 1560,	3,	1,	4,	129,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1560 = NOR
  { 1561,	3,	1,	4,	129,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1561 = NOR64
  { 1562,	3,	1,	4,	180,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1562 = NORI_B
  { 1563,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1563 = NORImm
  { 1564,	3,	1,	4,	129,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1564 = NOR_MM
  { 1565,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1565 = NOR_MMR6
  { 1566,	3,	1,	4,	179,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1566 = NOR_V
  { 1567,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1567 = NOR_V_D_PSEUDO
  { 1568,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1568 = NOR_V_H_PSEUDO
  { 1569,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1569 = NOR_V_W_PSEUDO
  { 1570,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo243, -1 ,nullptr },  // Inst #1570 = NOT16_MM
  { 1571,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo243, -1 ,nullptr },  // Inst #1571 = NOT16_MMR6
  { 1572,	2,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1572 = NegRxRy16
  { 1573,	2,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1573 = NotRxRy16
  { 1574,	3,	1,	4,	130,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1574 = OR
  { 1575,	3,	1,	2,	130,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1575 = OR16_MM
  { 1576,	3,	1,	2,	130,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1576 = OR16_MMR6
  { 1577,	3,	1,	4,	130,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1577 = OR64
  { 1578,	3,	1,	4,	180,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1578 = ORI_B
  { 1579,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1579 = ORI_MMR6
  { 1580,	3,	1,	4,	130,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1580 = OR_MM
  { 1581,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1581 = OR_MMR6
  { 1582,	3,	1,	4,	179,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1582 = OR_V
  { 1583,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1583 = OR_V_D_PSEUDO
  { 1584,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1584 = OR_V_H_PSEUDO
  { 1585,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1585 = OR_V_W_PSEUDO
  { 1586,	3,	1,	4,	131,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1586 = ORi
  { 1587,	3,	1,	4,	130,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1587 = ORi64
  { 1588,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1588 = ORi_MM
  { 1589,	3,	1,	2,	7,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #1589 = OrRxRxRy16
  { 1590,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1590 = PACKRL_PH
  { 1591,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1591 = PACKRL_PH_MM
  { 1592,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1592 = PAUSE
  { 1593,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1593 = PAUSE_MM
  { 1594,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1594 = PAUSE_MMR6
  { 1595,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1595 = PCKEV_B
  { 1596,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1596 = PCKEV_D
  { 1597,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1597 = PCKEV_H
  { 1598,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1598 = PCKEV_W
  { 1599,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1599 = PCKOD_B
  { 1600,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1600 = PCKOD_D
  { 1601,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1601 = PCKOD_H
  { 1602,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1602 = PCKOD_W
  { 1603,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1603 = PCNT_B
  { 1604,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #1604 = PCNT_D
  { 1605,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1605 = PCNT_H
  { 1606,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #1606 = PCNT_W
  { 1607,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1607 = PICK_PH
  { 1608,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1608 = PICK_PH_MM
  { 1609,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1609 = PICK_QB
  { 1610,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1610 = PICK_QB_MM
  { 1611,	2,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1611 = POP
  { 1612,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1612 = PRECEQU_PH_QBL
  { 1613,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1613 = PRECEQU_PH_QBLA
  { 1614,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1614 = PRECEQU_PH_QBLA_MM
  { 1615,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1615 = PRECEQU_PH_QBL_MM
  { 1616,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1616 = PRECEQU_PH_QBR
  { 1617,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1617 = PRECEQU_PH_QBRA
  { 1618,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1618 = PRECEQU_PH_QBRA_MM
  { 1619,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1619 = PRECEQU_PH_QBR_MM
  { 1620,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1620 = PRECEQ_W_PHL
  { 1621,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1621 = PRECEQ_W_PHL_MM
  { 1622,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1622 = PRECEQ_W_PHR
  { 1623,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1623 = PRECEQ_W_PHR_MM
  { 1624,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1624 = PRECEU_PH_QBL
  { 1625,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1625 = PRECEU_PH_QBLA
  { 1626,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1626 = PRECEU_PH_QBLA_MM
  { 1627,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1627 = PRECEU_PH_QBL_MM
  { 1628,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1628 = PRECEU_PH_QBR
  { 1629,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1629 = PRECEU_PH_QBRA
  { 1630,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1630 = PRECEU_PH_QBRA_MM
  { 1631,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #1631 = PRECEU_PH_QBR_MM
  { 1632,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo22, -1 ,nullptr },  // Inst #1632 = PRECRQU_S_QB_PH
  { 1633,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo22, -1 ,nullptr },  // Inst #1633 = PRECRQU_S_QB_PH_MM
  { 1634,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1634 = PRECRQ_PH_W
  { 1635,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1635 = PRECRQ_PH_W_MM
  { 1636,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1636 = PRECRQ_QB_PH
  { 1637,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1637 = PRECRQ_QB_PH_MM
  { 1638,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245, -1 ,nullptr },  // Inst #1638 = PRECRQ_RS_PH_W
  { 1639,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo245, -1 ,nullptr },  // Inst #1639 = PRECRQ_RS_PH_W_MM
  { 1640,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1640 = PRECR_QB_PH
  { 1641,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1641 = PRECR_QB_PH_MMR2
  { 1642,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1642 = PRECR_SRA_PH_W
  { 1643,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1643 = PRECR_SRA_PH_W_MMR2
  { 1644,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1644 = PRECR_SRA_R_PH_W
  { 1645,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1645 = PRECR_SRA_R_PH_W_MMR2
  { 1646,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1646 = PREF
  { 1647,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1647 = PREFE
  { 1648,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1648 = PREFE_MM
  { 1649,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1649 = PREFE_MMR6
  { 1650,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1650 = PREFX_MM
  { 1651,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1651 = PREF_MM
  { 1652,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1652 = PREF_MMR6
  { 1653,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #1653 = PREF_R6
  { 1654,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #1654 = PREPEND
  { 1655,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #1655 = PREPEND_MMR2
  { 1656,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1656 = PseudoCMPU_EQ_QB
  { 1657,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1657 = PseudoCMPU_LE_QB
  { 1658,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1658 = PseudoCMPU_LT_QB
  { 1659,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1659 = PseudoCMP_EQ_PH
  { 1660,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1660 = PseudoCMP_LE_PH
  { 1661,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1661 = PseudoCMP_LT_PH
  { 1662,	2,	1,	4,	26,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo249, -1 ,nullptr },  // Inst #1662 = PseudoCVT_D32_W
  { 1663,	2,	1,	4,	26,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #1663 = PseudoCVT_D64_L
  { 1664,	2,	1,	4,	26,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1664 = PseudoCVT_D64_W
  { 1665,	2,	1,	4,	26,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #1665 = PseudoCVT_S_L
  { 1666,	2,	1,	4,	26,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1666 = PseudoCVT_S_W
  { 1667,	3,	1,	4,	37,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1667 = PseudoDMULT
  { 1668,	3,	1,	4,	38,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1668 = PseudoDMULTu
  { 1669,	3,	1,	4,	43,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1669 = PseudoDSDIV
  { 1670,	3,	1,	4,	55,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1670 = PseudoDUDIV
  { 1671,	1,	0,	4,	132,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1671 = PseudoIndirectBranch
  { 1672,	1,	0,	4,	132,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1672 = PseudoIndirectBranch64
  { 1673,	4,	1,	4,	96,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1673 = PseudoMADD
  { 1674,	4,	1,	4,	97,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1674 = PseudoMADDU
  { 1675,	2,	1,	4,	102,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1675 = PseudoMFHI
  { 1676,	2,	1,	4,	102,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1676 = PseudoMFHI64
  { 1677,	2,	1,	4,	102,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1677 = PseudoMFLO
  { 1678,	2,	1,	4,	102,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1678 = PseudoMFLO64
  { 1679,	4,	1,	4,	115,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1679 = PseudoMSUB
  { 1680,	4,	1,	4,	116,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1680 = PseudoMSUBU
  { 1681,	3,	1,	4,	121,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1681 = PseudoMTLOHI
  { 1682,	3,	1,	4,	121,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1682 = PseudoMTLOHI64
  { 1683,	3,	1,	4,	121,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1683 = PseudoMTLOHI_DSP
  { 1684,	3,	1,	4,	123,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1684 = PseudoMULT
  { 1685,	3,	1,	4,	124,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1685 = PseudoMULTu
  { 1686,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1686 = PseudoPICK_PH
  { 1687,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1687 = PseudoPICK_QB
  { 1688,	1,	0,	4,	133,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo69, -1 ,nullptr },  // Inst #1688 = PseudoReturn
  { 1689,	1,	0,	4,	133,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1689 = PseudoReturn64
  { 1690,	3,	1,	4,	134,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1690 = PseudoSDIV
  { 1691,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1691 = PseudoSELECTFP_F_D32
  { 1692,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1692 = PseudoSELECTFP_F_D64
  { 1693,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1693 = PseudoSELECTFP_F_I
  { 1694,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1694 = PseudoSELECTFP_F_I64
  { 1695,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1695 = PseudoSELECTFP_F_S
  { 1696,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1696 = PseudoSELECTFP_T_D32
  { 1697,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1697 = PseudoSELECTFP_T_D64
  { 1698,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1698 = PseudoSELECTFP_T_I
  { 1699,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1699 = PseudoSELECTFP_T_I64
  { 1700,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1700 = PseudoSELECTFP_T_S
  { 1701,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1701 = PseudoSELECT_D32
  { 1702,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1702 = PseudoSELECT_D64
  { 1703,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1703 = PseudoSELECT_I
  { 1704,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1704 = PseudoSELECT_I64
  { 1705,	4,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1705 = PseudoSELECT_S
  { 1706,	3,	1,	4,	135,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1706 = PseudoUDIV
  { 1707,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1707 = RADDU_W_QB
  { 1708,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1708 = RADDU_W_QB_MM
  { 1709,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1709 = RDDSP
  { 1710,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1710 = RDDSP_MM
  { 1711,	2,	1,	4,	136,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo262, -1 ,nullptr },  // Inst #1711 = RDHWR
  { 1712,	2,	1,	4,	136,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1712 = RDHWR64
  { 1713,	2,	1,	4,	136,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo262, -1 ,nullptr },  // Inst #1713 = RDHWR_MM
  { 1714,	3,	1,	4,	136,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1714 = RDHWR_MMR6
  { 1715,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1715 = RDPGPR_MMR6
  { 1716,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1716 = RECIP_D_MMR6
  { 1717,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1717 = RECIP_S_MMR6
  { 1718,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1718 = REPLV_PH
  { 1719,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1719 = REPLV_PH_MM
  { 1720,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1720 = REPLV_QB
  { 1721,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1721 = REPLV_QB_MM
  { 1722,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1722 = REPL_PH
  { 1723,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1723 = REPL_PH_MM
  { 1724,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1724 = REPL_QB
  { 1725,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1725 = REPL_QB_MM
  { 1726,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1726 = RINT_D
  { 1727,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1727 = RINT_D_MMR6
  { 1728,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1728 = RINT_S
  { 1729,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1729 = RINT_S_MMR6
  { 1730,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1730 = ROL
  { 1731,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1731 = ROLImm
  { 1732,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1732 = ROR
  { 1733,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1733 = RORImm
  { 1734,	3,	1,	4,	138,	0, 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1734 = ROTR
  { 1735,	3,	1,	4,	139,	0, 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1735 = ROTRV
  { 1736,	3,	1,	4,	139,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1736 = ROTRV_MM
  { 1737,	3,	1,	4,	138,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1737 = ROTR_MM
  { 1738,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1738 = ROUND_L_D64
  { 1739,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1739 = ROUND_L_D_MMR6
  { 1740,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1740 = ROUND_L_S
  { 1741,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1741 = ROUND_L_S_MMR6
  { 1742,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1742 = ROUND_W_D32
  { 1743,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #1743 = ROUND_W_D64
  { 1744,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1744 = ROUND_W_D_MMR6
  { 1745,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1745 = ROUND_W_MM
  { 1746,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1746 = ROUND_W_S
  { 1747,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1747 = ROUND_W_S_MM
  { 1748,	2,	1,	4,	137,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1748 = ROUND_W_S_MMR6
  { 1749,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1749 = RSQRT_D_MMR6
  { 1750,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1750 = RSQRT_S_MMR6
  { 1751,	0,	0,	2,	141,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1751 = Restore16
  { 1752,	0,	0,	2,	141,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1752 = RestoreX16
  { 1753,	0,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1753 = RetRA
  { 1754,	0,	0,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1754 = RetRA16
  { 1755,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1755 = SAT_S_B
  { 1756,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1756 = SAT_S_D
  { 1757,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1757 = SAT_S_H
  { 1758,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1758 = SAT_S_W
  { 1759,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1759 = SAT_U_B
  { 1760,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1760 = SAT_U_D
  { 1761,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1761 = SAT_U_H
  { 1762,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1762 = SAT_U_W
  { 1763,	3,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1763 = SB
  { 1764,	3,	0,	2,	142,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1764 = SB16_MM
  { 1765,	3,	0,	2,	142,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1765 = SB16_MMR6
  { 1766,	3,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1766 = SB64
  { 1767,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1767 = SBE
  { 1768,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1768 = SBE_MM
  { 1769,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1769 = SBE_MMR6
  { 1770,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1770 = SB_MM
  { 1771,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1771 = SB_MMR6
  { 1772,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo268, -1 ,nullptr },  // Inst #1772 = SC
  { 1773,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo269, -1 ,nullptr },  // Inst #1773 = SCD
  { 1774,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo269, -1 ,nullptr },  // Inst #1774 = SCD_R6
  { 1775,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo268, -1 ,nullptr },  // Inst #1775 = SCE
  { 1776,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo270, -1 ,nullptr },  // Inst #1776 = SCE_MM
  { 1777,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1777 = SCE_MMR6
  { 1778,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo270, -1 ,nullptr },  // Inst #1778 = SC_MM
  { 1779,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo268, -1 ,nullptr },  // Inst #1779 = SC_R6
  { 1780,	3,	0,	4,	143,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1780 = SD
  { 1781,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1781 = SDBBP
  { 1782,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1782 = SDBBP16_MM
  { 1783,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1783 = SDBBP16_MMR6
  { 1784,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1784 = SDBBP_MM
  { 1785,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1785 = SDBBP_MMR6
  { 1786,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #1786 = SDBBP_R6
  { 1787,	3,	0,	4,	144,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1787 = SDC1
  { 1788,	3,	0,	4,	144,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1788 = SDC164
  { 1789,	3,	0,	4,	144,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1789 = SDC1_MM
  { 1790,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1790 = SDC2
  { 1791,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1791 = SDC2_R6
  { 1792,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1792 = SDC3
  { 1793,	2,	0,	4,	134,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1793 = SDIV
  { 1794,	2,	0,	4,	134,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1794 = SDIV_MM
  { 1795,	3,	0,	4,	145,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1795 = SDL
  { 1796,	3,	0,	4,	146,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1796 = SDR
  { 1797,	3,	0,	4,	147,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1797 = SDXC1
  { 1798,	3,	0,	4,	147,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1798 = SDXC164
  { 1799,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1799 = SDivMacro
  { 1800,	2,	1,	4,	148,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1800 = SEB
  { 1801,	2,	1,	4,	148,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1801 = SEB64
  { 1802,	2,	1,	4,	148,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1802 = SEB_MM
  { 1803,	2,	1,	4,	148,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1803 = SEB_MMR6
  { 1804,	2,	1,	4,	149,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1804 = SEH
  { 1805,	2,	1,	4,	149,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1805 = SEH64
  { 1806,	2,	1,	4,	149,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1806 = SEH_MM
  { 1807,	2,	1,	4,	149,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1807 = SEH_MMR6
  { 1808,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1808 = SELENZ_D_MMR6
  { 1809,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1809 = SELENZ_S_MMR6
  { 1810,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1810 = SELEQZ
  { 1811,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1811 = SELEQZ64
  { 1812,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1812 = SELEQZ_D
  { 1813,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1813 = SELEQZ_D_MMR6
  { 1814,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1814 = SELEQZ_MMR6
  { 1815,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1815 = SELEQZ_S
  { 1816,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1816 = SELEQZ_S_MMR6
  { 1817,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1817 = SELNEZ
  { 1818,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1818 = SELNEZ64
  { 1819,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1819 = SELNEZ_D
  { 1820,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1820 = SELNEZ_MMR6
  { 1821,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1821 = SELNEZ_S
  { 1822,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo271, -1 ,nullptr },  // Inst #1822 = SEL_D
  { 1823,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo271, -1 ,nullptr },  // Inst #1823 = SEL_D_MMR6
  { 1824,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1824 = SEL_S
  { 1825,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1825 = SEL_S_MMR6
  { 1826,	3,	1,	4,	150,	0, 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1826 = SEQ
  { 1827,	3,	1,	4,	151,	0, 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1827 = SEQi
  { 1828,	3,	0,	4,	152,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1828 = SH
  { 1829,	3,	0,	2,	152,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1829 = SH16_MM
  { 1830,	3,	0,	2,	152,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1830 = SH16_MMR6
  { 1831,	3,	0,	4,	152,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1831 = SH64
  { 1832,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1832 = SHE
  { 1833,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1833 = SHE_MM
  { 1834,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1834 = SHE_MMR6
  { 1835,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1835 = SHF_B
  { 1836,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1836 = SHF_H
  { 1837,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1837 = SHF_W
  { 1838,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1838 = SHILO
  { 1839,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1839 = SHILOV
  { 1840,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1840 = SHILOV_MM
  { 1841,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1841 = SHILO_MM
  { 1842,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo274, -1 ,nullptr },  // Inst #1842 = SHLLV_PH
  { 1843,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo274, -1 ,nullptr },  // Inst #1843 = SHLLV_PH_MM
  { 1844,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo274, -1 ,nullptr },  // Inst #1844 = SHLLV_QB
  { 1845,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo274, -1 ,nullptr },  // Inst #1845 = SHLLV_QB_MM
  { 1846,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo274, -1 ,nullptr },  // Inst #1846 = SHLLV_S_PH
  { 1847,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo274, -1 ,nullptr },  // Inst #1847 = SHLLV_S_PH_MM
  { 1848,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo16, -1 ,nullptr },  // Inst #1848 = SHLLV_S_W
  { 1849,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo16, -1 ,nullptr },  // Inst #1849 = SHLLV_S_W_MM
  { 1850,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo275, -1 ,nullptr },  // Inst #1850 = SHLL_PH
  { 1851,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo275, -1 ,nullptr },  // Inst #1851 = SHLL_PH_MM
  { 1852,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo275, -1 ,nullptr },  // Inst #1852 = SHLL_QB
  { 1853,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo275, -1 ,nullptr },  // Inst #1853 = SHLL_QB_MM
  { 1854,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo275, -1 ,nullptr },  // Inst #1854 = SHLL_S_PH
  { 1855,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo275, -1 ,nullptr },  // Inst #1855 = SHLL_S_PH_MM
  { 1856,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo21, -1 ,nullptr },  // Inst #1856 = SHLL_S_W
  { 1857,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo21, -1 ,nullptr },  // Inst #1857 = SHLL_S_W_MM
  { 1858,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1858 = SHRAV_PH
  { 1859,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1859 = SHRAV_PH_MM
  { 1860,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1860 = SHRAV_QB
  { 1861,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1861 = SHRAV_QB_MMR2
  { 1862,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1862 = SHRAV_R_PH
  { 1863,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1863 = SHRAV_R_PH_MM
  { 1864,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1864 = SHRAV_R_QB
  { 1865,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1865 = SHRAV_R_QB_MMR2
  { 1866,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1866 = SHRAV_R_W
  { 1867,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1867 = SHRAV_R_W_MM
  { 1868,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1868 = SHRA_PH
  { 1869,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1869 = SHRA_PH_MM
  { 1870,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1870 = SHRA_QB
  { 1871,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1871 = SHRA_QB_MMR2
  { 1872,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1872 = SHRA_R_PH
  { 1873,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1873 = SHRA_R_PH_MM
  { 1874,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1874 = SHRA_R_QB
  { 1875,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1875 = SHRA_R_QB_MMR2
  { 1876,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1876 = SHRA_R_W
  { 1877,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1877 = SHRA_R_W_MM
  { 1878,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1878 = SHRLV_PH
  { 1879,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1879 = SHRLV_PH_MMR2
  { 1880,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1880 = SHRLV_QB
  { 1881,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1881 = SHRLV_QB_MM
  { 1882,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1882 = SHRL_PH
  { 1883,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1883 = SHRL_PH_MMR2
  { 1884,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1884 = SHRL_QB
  { 1885,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1885 = SHRL_QB_MM
  { 1886,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1886 = SH_MM
  { 1887,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1887 = SH_MMR6
  { 1888,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo57, -1 ,nullptr },  // Inst #1888 = SLDI_B
  { 1889,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #1889 = SLDI_D
  { 1890,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #1890 = SLDI_H
  { 1891,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #1891 = SLDI_W
  { 1892,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1892 = SLD_B
  { 1893,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1893 = SLD_D
  { 1894,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1894 = SLD_H
  { 1895,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1895 = SLD_W
  { 1896,	3,	1,	4,	153,	0, 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1896 = SLL
  { 1897,	3,	1,	2,	153,	0, 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1897 = SLL16_MM
  { 1898,	3,	1,	2,	153,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1898 = SLL16_MMR6
  { 1899,	2,	1,	4,	153,	0, 0x1ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1899 = SLL64_32
  { 1900,	2,	1,	4,	153,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1900 = SLL64_64
  { 1901,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1901 = SLLI_B
  { 1902,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1902 = SLLI_D
  { 1903,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1903 = SLLI_H
  { 1904,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1904 = SLLI_W
  { 1905,	3,	1,	4,	154,	0, 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1905 = SLLV
  { 1906,	3,	1,	4,	154,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1906 = SLLV_MM
  { 1907,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1907 = SLL_B
  { 1908,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1908 = SLL_D
  { 1909,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1909 = SLL_H
  { 1910,	3,	1,	4,	153,	0, 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1910 = SLL_MM
  { 1911,	3,	1,	4,	153,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1911 = SLL_MMR6
  { 1912,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1912 = SLL_W
  { 1913,	3,	1,	4,	155,	0, 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1913 = SLT
  { 1914,	3,	1,	4,	155,	0, 0x1ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1914 = SLT64
  { 1915,	3,	1,	4,	155,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1915 = SLT_MM
  { 1916,	3,	1,	4,	156,	0, 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1916 = SLTi
  { 1917,	3,	1,	4,	156,	0, 0x2ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1917 = SLTi64
  { 1918,	3,	1,	4,	156,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1918 = SLTi_MM
  { 1919,	3,	1,	4,	156,	0, 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1919 = SLTiu
  { 1920,	3,	1,	4,	156,	0, 0x2ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1920 = SLTiu64
  { 1921,	3,	1,	4,	156,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1921 = SLTiu_MM
  { 1922,	3,	1,	4,	155,	0, 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1922 = SLTu
  { 1923,	3,	1,	4,	155,	0, 0x1ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1923 = SLTu64
  { 1924,	3,	1,	4,	155,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1924 = SLTu_MM
  { 1925,	3,	1,	4,	150,	0, 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1925 = SNE
  { 1926,	3,	1,	4,	151,	0, 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1926 = SNEi
  { 1927,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1927 = SNZ_B_PSEUDO
  { 1928,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1928 = SNZ_D_PSEUDO
  { 1929,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo284, -1 ,nullptr },  // Inst #1929 = SNZ_H_PSEUDO
  { 1930,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1930 = SNZ_V_PSEUDO
  { 1931,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo285, -1 ,nullptr },  // Inst #1931 = SNZ_W_PSEUDO
  { 1932,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1932 = SPLATI_B
  { 1933,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1933 = SPLATI_D
  { 1934,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1934 = SPLATI_H
  { 1935,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1935 = SPLATI_W
  { 1936,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo286, -1 ,nullptr },  // Inst #1936 = SPLAT_B
  { 1937,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo287, -1 ,nullptr },  // Inst #1937 = SPLAT_D
  { 1938,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo288, -1 ,nullptr },  // Inst #1938 = SPLAT_H
  { 1939,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #1939 = SPLAT_W
  { 1940,	2,	1,	4,	66,	0, 0x4ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1940 = SQRT_D_MMR6
  { 1941,	2,	1,	4,	67,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1941 = SQRT_S_MMR6
  { 1942,	3,	1,	4,	157,	0, 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1942 = SRA
  { 1943,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1943 = SRAI_B
  { 1944,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1944 = SRAI_D
  { 1945,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1945 = SRAI_H
  { 1946,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1946 = SRAI_W
  { 1947,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1947 = SRARI_B
  { 1948,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1948 = SRARI_D
  { 1949,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1949 = SRARI_H
  { 1950,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1950 = SRARI_W
  { 1951,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1951 = SRAR_B
  { 1952,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1952 = SRAR_D
  { 1953,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1953 = SRAR_H
  { 1954,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1954 = SRAR_W
  { 1955,	3,	1,	4,	158,	0, 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1955 = SRAV
  { 1956,	3,	1,	4,	158,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1956 = SRAV_MM
  { 1957,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1957 = SRA_B
  { 1958,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1958 = SRA_D
  { 1959,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1959 = SRA_H
  { 1960,	3,	1,	4,	157,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1960 = SRA_MM
  { 1961,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1961 = SRA_W
  { 1962,	3,	1,	4,	159,	0, 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1962 = SRL
  { 1963,	3,	1,	2,	159,	0, 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1963 = SRL16_MM
  { 1964,	3,	1,	2,	159,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1964 = SRL16_MMR6
  { 1965,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1965 = SRLI_B
  { 1966,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1966 = SRLI_D
  { 1967,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1967 = SRLI_H
  { 1968,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1968 = SRLI_W
  { 1969,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #1969 = SRLRI_B
  { 1970,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1970 = SRLRI_D
  { 1971,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1971 = SRLRI_H
  { 1972,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1972 = SRLRI_W
  { 1973,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1973 = SRLR_B
  { 1974,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1974 = SRLR_D
  { 1975,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1975 = SRLR_H
  { 1976,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1976 = SRLR_W
  { 1977,	3,	1,	4,	160,	0, 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1977 = SRLV
  { 1978,	3,	1,	4,	160,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1978 = SRLV_MM
  { 1979,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1979 = SRL_B
  { 1980,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1980 = SRL_D
  { 1981,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1981 = SRL_H
  { 1982,	3,	1,	4,	159,	0, 0x1ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #1982 = SRL_MM
  { 1983,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1983 = SRL_W
  { 1984,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1984 = SSNOP
  { 1985,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1985 = SSNOP_MM
  { 1986,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1986 = SSNOP_MMR6
  { 1987,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1987 = STORE_ACC128
  { 1988,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1988 = STORE_ACC64
  { 1989,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1989 = STORE_ACC64DSP
  { 1990,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1990 = STORE_CCOND_DSP
  { 1991,	3,	0,	4,	181,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1991 = ST_B
  { 1992,	3,	0,	4,	181,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1992 = ST_D
  { 1993,	3,	0,	4,	181,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #1993 = ST_H
  { 1994,	3,	0,	4,	181,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1994 = ST_W
  { 1995,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1995 = SUB
  { 1996,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1996 = SUBQH_PH
  { 1997,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1997 = SUBQH_PH_MMR2
  { 1998,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1998 = SUBQH_R_PH
  { 1999,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1999 = SUBQH_R_PH_MMR2
  { 2000,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2000 = SUBQH_R_W
  { 2001,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2001 = SUBQH_R_W_MMR2
  { 2002,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2002 = SUBQH_W
  { 2003,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2003 = SUBQH_W_MMR2
  { 2004,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2004 = SUBQ_PH
  { 2005,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2005 = SUBQ_PH_MM
  { 2006,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2006 = SUBQ_S_PH
  { 2007,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2007 = SUBQ_S_PH_MM
  { 2008,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #2008 = SUBQ_S_W
  { 2009,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo16, -1 ,nullptr },  // Inst #2009 = SUBQ_S_W_MM
  { 2010,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2010 = SUBSUS_U_B
  { 2011,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2011 = SUBSUS_U_D
  { 2012,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2012 = SUBSUS_U_H
  { 2013,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2013 = SUBSUS_U_W
  { 2014,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2014 = SUBSUU_S_B
  { 2015,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2015 = SUBSUU_S_D
  { 2016,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2016 = SUBSUU_S_H
  { 2017,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2017 = SUBSUU_S_W
  { 2018,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2018 = SUBS_S_B
  { 2019,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2019 = SUBS_S_D
  { 2020,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2020 = SUBS_S_H
  { 2021,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2021 = SUBS_S_W
  { 2022,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2022 = SUBS_U_B
  { 2023,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2023 = SUBS_U_D
  { 2024,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2024 = SUBS_U_H
  { 2025,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2025 = SUBS_U_W
  { 2026,	3,	1,	2,	161,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2026 = SUBU16_MM
  { 2027,	3,	1,	2,	161,	0, 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2027 = SUBU16_MMR6
  { 2028,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2028 = SUBUH_QB
  { 2029,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2029 = SUBUH_QB_MMR2
  { 2030,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2030 = SUBUH_R_QB
  { 2031,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2031 = SUBUH_R_QB_MMR2
  { 2032,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2032 = SUBU_MMR6
  { 2033,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2033 = SUBU_PH
  { 2034,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2034 = SUBU_PH_MMR2
  { 2035,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2035 = SUBU_QB
  { 2036,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2036 = SUBU_QB_MM
  { 2037,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2037 = SUBU_S_PH
  { 2038,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2038 = SUBU_S_PH_MMR2
  { 2039,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2039 = SUBU_S_QB
  { 2040,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo22, -1 ,nullptr },  // Inst #2040 = SUBU_S_QB_MM
  { 2041,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #2041 = SUBVI_B
  { 2042,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2042 = SUBVI_D
  { 2043,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2043 = SUBVI_H
  { 2044,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2044 = SUBVI_W
  { 2045,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2045 = SUBV_B
  { 2046,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2046 = SUBV_D
  { 2047,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2047 = SUBV_H
  { 2048,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2048 = SUBV_W
  { 2049,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2049 = SUB_MM
  { 2050,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2050 = SUB_MMR6
  { 2051,	3,	1,	4,	161,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2051 = SUBu
  { 2052,	3,	1,	4,	161,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2052 = SUBu_MM
  { 2053,	3,	0,	4,	162,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #2053 = SUXC1
  { 2054,	3,	0,	4,	162,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #2054 = SUXC164
  { 2055,	3,	0,	4,	162,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #2055 = SUXC1_MM
  { 2056,	3,	0,	4,	163,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2056 = SW
  { 2057,	3,	0,	2,	163,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #2057 = SW16_MM
  { 2058,	3,	0,	2,	163,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #2058 = SW16_MMR6
  { 2059,	3,	0,	4,	163,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #2059 = SW64
  { 2060,	3,	0,	4,	164,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #2060 = SWC1
  { 2061,	3,	0,	4,	164,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #2061 = SWC1_MM
  { 2062,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #2062 = SWC2
  { 2063,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #2063 = SWC2_R6
  { 2064,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #2064 = SWC3
  { 2065,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2065 = SWE
  { 2066,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2066 = SWE_MM
  { 2067,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2067 = SWE_MMR6
  { 2068,	3,	0,	4,	165,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2068 = SWL
  { 2069,	3,	0,	4,	165,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #2069 = SWL64
  { 2070,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #2070 = SWLE
  { 2071,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2071 = SWLE_MM
  { 2072,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2072 = SWL_MM
  { 2073,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #2073 = SWM16_MM
  { 2074,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #2074 = SWM16_MMR6
  { 2075,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #2075 = SWM32_MM
  { 2076,	3,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #2076 = SWM_MM
  { 2077,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #2077 = SWP_MM
  { 2078,	3,	0,	4,	166,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2078 = SWR
  { 2079,	3,	0,	4,	166,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #2079 = SWR64
  { 2080,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #2080 = SWRE
  { 2081,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2081 = SWRE_MM
  { 2082,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2082 = SWR_MM
  { 2083,	3,	0,	2,	163,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2083 = SWSP_MM
  { 2084,	3,	0,	2,	163,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2084 = SWSP_MMR6
  { 2085,	3,	0,	4,	167,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #2085 = SWXC1
  { 2086,	3,	0,	4,	167,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #2086 = SWXC1_MM
  { 2087,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2087 = SW_MM
  { 2088,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2088 = SW_MMR6
  { 2089,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2089 = SYNC
  { 2090,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #2090 = SYNCI
  { 2091,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #2091 = SYNCI_MMR6
  { 2092,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2092 = SYNC_MM
  { 2093,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2093 = SYNC_MMR6
  { 2094,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #2094 = SYSCALL
  { 2095,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #2095 = SYSCALL_MM
  { 2096,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #2096 = SZ_B_PSEUDO
  { 2097,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #2097 = SZ_D_PSEUDO
  { 2098,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo284, -1 ,nullptr },  // Inst #2098 = SZ_H_PSEUDO
  { 2099,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #2099 = SZ_V_PSEUDO
  { 2100,	2,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo285, -1 ,nullptr },  // Inst #2100 = SZ_W_PSEUDO
  { 2101,	0,	0,	2,	168,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #2101 = Save16
  { 2102,	0,	0,	2,	168,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #2102 = SaveX16
  { 2103,	4,	0,	4,	142,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #2103 = SbRxRyOffMemX16
  { 2104,	2,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #2104 = SebRx16
  { 2105,	2,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #2105 = SehRx16
  { 2106,	4,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #2106 = SelBeqZ
  { 2107,	4,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #2107 = SelBneZ
  { 2108,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2108 = SelTBteqZCmp
  { 2109,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2109 = SelTBteqZCmpi
  { 2110,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2110 = SelTBteqZSlt
  { 2111,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2111 = SelTBteqZSlti
  { 2112,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2112 = SelTBteqZSltiu
  { 2113,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2113 = SelTBteqZSltu
  { 2114,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2114 = SelTBtneZCmp
  { 2115,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2115 = SelTBtneZCmpi
  { 2116,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2116 = SelTBtneZSlt
  { 2117,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2117 = SelTBtneZSlti
  { 2118,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2118 = SelTBtneZSltiu
  { 2119,	5,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2119 = SelTBtneZSltu
  { 2120,	4,	0,	4,	152,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #2120 = ShRxRyOffMemX16
  { 2121,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo295, -1 ,nullptr },  // Inst #2121 = SllX16
  { 2122,	3,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2122 = SllvRxRy16
  { 2123,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #2123 = SltCCRxRy16
  { 2124,	2,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #2124 = SltRxRy16
  { 2125,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo295, -1 ,nullptr },  // Inst #2125 = SltiCCRxImmX16
  { 2126,	2,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41, -1 ,nullptr },  // Inst #2126 = SltiRxImm16
  { 2127,	2,	0,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41, -1 ,nullptr },  // Inst #2127 = SltiRxImmX16
  { 2128,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo295, -1 ,nullptr },  // Inst #2128 = SltiuCCRxImmX16
  { 2129,	2,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41, -1 ,nullptr },  // Inst #2129 = SltiuRxImm16
  { 2130,	2,	0,	4,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo41, -1 ,nullptr },  // Inst #2130 = SltiuRxImmX16
  { 2131,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #2131 = SltuCCRxRy16
  { 2132,	2,	0,	2,	7,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #2132 = SltuRxRy16
  { 2133,	3,	1,	2,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo44, -1 ,nullptr },  // Inst #2133 = SltuRxRyRz16
  { 2134,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo295, -1 ,nullptr },  // Inst #2134 = SraX16
  { 2135,	3,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2135 = SravRxRy16
  { 2136,	3,	1,	4,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo295, -1 ,nullptr },  // Inst #2136 = SrlX16
  { 2137,	3,	1,	2,	7,	0, 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2137 = SrlvRxRy16
  { 2138,	3,	1,	2,	7,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #2138 = SubuRxRyRz16
  { 2139,	4,	0,	4,	163,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #2139 = SwRxRyOffMemX16
  { 2140,	3,	0,	4,	163,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #2140 = SwRxSpImmX16
  { 2141,	1,	0,	4,	70,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo5, -1 ,nullptr },  // Inst #2141 = TAILCALL
  { 2142,	1,	0,	4,	75,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo165, -1 ,nullptr },  // Inst #2142 = TAILCALL64_R
  { 2143,	1,	0,	4,	75,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, ImplicitList4, OperandInfo69, -1 ,nullptr },  // Inst #2143 = TAILCALL_R
  { 2144,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2144 = TEQ
  { 2145,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2145 = TEQI
  { 2146,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2146 = TEQI_MM
  { 2147,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2147 = TEQ_MM
  { 2148,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2148 = TGE
  { 2149,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2149 = TGEI
  { 2150,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2150 = TGEIU
  { 2151,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2151 = TGEIU_MM
  { 2152,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2152 = TGEI_MM
  { 2153,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2153 = TGEU
  { 2154,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2154 = TGEU_MM
  { 2155,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2155 = TGE_MM
  { 2156,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2156 = TLBINV
  { 2157,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2157 = TLBINVF
  { 2158,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2158 = TLBP
  { 2159,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2159 = TLBP_MM
  { 2160,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2160 = TLBR
  { 2161,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2161 = TLBR_MM
  { 2162,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2162 = TLBWI
  { 2163,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2163 = TLBWI_MM
  { 2164,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2164 = TLBWR
  { 2165,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2165 = TLBWR_MM
  { 2166,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2166 = TLT
  { 2167,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2167 = TLTI
  { 2168,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2168 = TLTIU_MM
  { 2169,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2169 = TLTI_MM
  { 2170,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2170 = TLTU
  { 2171,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2171 = TLTU_MM
  { 2172,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2172 = TLT_MM
  { 2173,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2173 = TNE
  { 2174,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2174 = TNEI
  { 2175,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2175 = TNEI_MM
  { 2176,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2176 = TNE_MM
  { 2177,	0,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2177 = TRAP
  { 2178,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #2178 = TRUNC_L_D64
  { 2179,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #2179 = TRUNC_L_D_MMR6
  { 2180,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #2180 = TRUNC_L_S
  { 2181,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #2181 = TRUNC_L_S_MMR6
  { 2182,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #2182 = TRUNC_W_D32
  { 2183,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #2183 = TRUNC_W_D64
  { 2184,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #2184 = TRUNC_W_D_MMR6
  { 2185,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #2185 = TRUNC_W_MM
  { 2186,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #2186 = TRUNC_W_S
  { 2187,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #2187 = TRUNC_W_S_MM
  { 2188,	2,	1,	4,	140,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #2188 = TRUNC_W_S_MMR6
  { 2189,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2189 = TTLTIU
  { 2190,	2,	0,	4,	135,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #2190 = UDIV
  { 2191,	2,	0,	4,	135,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #2191 = UDIV_MM
  { 2192,	2,	0,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2192 = UDivMacro
  { 2193,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2193 = Ulh
  { 2194,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2194 = Ulhu
  { 2195,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #2195 = Ulw
  { 2196,	3,	1,	4,	36,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo34, -1 ,nullptr },  // Inst #2196 = V3MULU
  { 2197,	3,	1,	4,	36,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo34, -1 ,nullptr },  // Inst #2197 = VMM0
  { 2198,	3,	1,	4,	36,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo34, -1 ,nullptr },  // Inst #2198 = VMULU
  { 2199,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #2199 = VSHF_B
  { 2200,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #2200 = VSHF_D
  { 2201,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #2201 = VSHF_H
  { 2202,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #2202 = VSHF_W
  { 2203,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2203 = WAIT
  { 2204,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #2204 = WAIT_MM
  { 2205,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #2205 = WAIT_MMR6
  { 2206,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2206 = WRDSP
  { 2207,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2207 = WRDSP_MM
  { 2208,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2208 = WRPGPR_MMR6
  { 2209,	2,	1,	4,	169,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2209 = WSBH
  { 2210,	2,	1,	4,	169,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2210 = WSBH_MM
  { 2211,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2211 = WSBH_MMR6
  { 2212,	3,	1,	4,	170,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2212 = XOR
  { 2213,	3,	1,	2,	170,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #2213 = XOR16_MM
  { 2214,	3,	1,	2,	170,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #2214 = XOR16_MMR6
  { 2215,	3,	1,	4,	170,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #2215 = XOR64
  { 2216,	3,	1,	4,	180,	0, 0x6ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #2216 = XORI_B
  { 2217,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2217 = XORI_MMR6
  { 2218,	3,	1,	4,	170,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2218 = XOR_MM
  { 2219,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2219 = XOR_MMR6
  { 2220,	3,	1,	4,	179,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2220 = XOR_V
  { 2221,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2221 = XOR_V_D_PSEUDO
  { 2222,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2222 = XOR_V_H_PSEUDO
  { 2223,	3,	1,	4,	4,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2223 = XOR_V_W_PSEUDO
  { 2224,	3,	1,	4,	171,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2224 = XORi
  { 2225,	3,	1,	4,	170,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #2225 = XORi64
  { 2226,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #2226 = XORi_MM
  { 2227,	3,	1,	2,	7,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2227 = XorRxRxRy16
};

extern const char MipsInstrNameData[] = {
  /* 0 */ 'D', 'M', 'F', 'C', '0', 0,
  /* 6 */ 'D', 'M', 'T', 'C', '0', 0,
  /* 12 */ 'V', 'M', 'M', '0', 0,
  /* 17 */ 'M', 'T', 'M', '0', 0,
  /* 22 */ 'M', 'T', 'P', '0', 0,
  /* 27 */ 'B', 'B', 'I', 'T', '0', 0,
  /* 33 */ 'L', 'D', 'C', '1', 0,
  /* 38 */ 'S', 'D', 'C', '1', 0,
  /* 43 */ 'C', 'F', 'C', '1', 0,
  /* 48 */ 'D', 'M', 'F', 'C', '1', 0,
  /* 54 */ 'C', 'T', 'C', '1', 0,
  /* 59 */ 'D', 'M', 'T', 'C', '1', 0,
  /* 65 */ 'L', 'W', 'C', '1', 0,
  /* 70 */ 'S', 'W', 'C', '1', 0,
  /* 75 */ 'L', 'D', 'X', 'C', '1', 0,
  /* 81 */ 'S', 'D', 'X', 'C', '1', 0,
  /* 87 */ 'L', 'U', 'X', 'C', '1', 0,
  /* 93 */ 'S', 'U', 'X', 'C', '1', 0,
  /* 99 */ 'L', 'W', 'X', 'C', '1', 0,
  /* 105 */ 'S', 'W', 'X', 'C', '1', 0,
  /* 111 */ 'M', 'T', 'M', '1', 0,
  /* 116 */ 'M', 'T', 'P', '1', 0,
  /* 121 */ 'B', 'B', 'I', 'T', '1', 0,
  /* 127 */ 'B', 'B', 'I', 'T', '0', '3', '2', 0,
  /* 135 */ 'B', 'B', 'I', 'T', '1', '3', '2', 0,
  /* 143 */ 'D', 'S', 'R', 'A', '3', '2', 0,
  /* 150 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 160 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', 0,
  /* 170 */ 'F', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 179 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', 0,
  /* 189 */ 'F', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 198 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', 0,
  /* 208 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '3', '2', 0,
  /* 218 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 229 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 239 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 249 */ 'C', '_', 'L', 'E', '_', 'D', '3', '2', 0,
  /* 258 */ 'C', '_', 'S', 'F', '_', 'D', '3', '2', 0,
  /* 267 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', 0,
  /* 276 */ 'C', '_', 'F', '_', 'D', '3', '2', 0,
  /* 284 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '3', '2', 0,
  /* 305 */ 'F', 'N', 'E', 'G', '_', 'D', '3', '2', 0,
  /* 314 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', 0,
  /* 325 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', 0,
  /* 336 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '3', '2', 0,
  /* 346 */ 'F', 'M', 'U', 'L', '_', 'D', '3', '2', 0,
  /* 355 */ 'C', '_', 'U', 'N', '_', 'D', '3', '2', 0,
  /* 364 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', 0,
  /* 373 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 383 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 393 */ 'C', '_', 'E', 'Q', '_', 'D', '3', '2', 0,
  /* 402 */ 'F', 'A', 'B', 'S', '_', 'D', '3', '2', 0,
  /* 411 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', 0,
  /* 421 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '3', '2', 0,
  /* 438 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '3', '2', 0,
  /* 448 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 458 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 468 */ 'C', '_', 'L', 'T', '_', 'D', '3', '2', 0,
  /* 477 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '3', '2', 0,
  /* 487 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', 0,
  /* 496 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '3', '2', 0,
  /* 517 */ 'F', 'D', 'I', 'V', '_', 'D', '3', '2', 0,
  /* 526 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', 0,
  /* 535 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 547 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 559 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 570 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 582 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 592 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 601 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 621 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 641 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 662 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 682 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 698 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 718 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 738 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 757 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 764 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 771 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 779 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 786 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 793 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 802 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 812 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '3', '2', 0,
  /* 826 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 0,
  /* 836 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '3', '2', 0,
  /* 850 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 866 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 879 */ 'L', 'D', 'C', '2', 0,
  /* 884 */ 'S', 'D', 'C', '2', 0,
  /* 889 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 895 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 901 */ 'L', 'W', 'C', '2', 0,
  /* 906 */ 'S', 'W', 'C', '2', 0,
  /* 911 */ 'M', 'T', 'M', '2', 0,
  /* 916 */ 'M', 'T', 'P', '2', 0,
  /* 921 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 934 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 948 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 962 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 977 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 993 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1009 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1025 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1040 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1054 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', '_', 'M', 'M', 'R', '2', 0,
  /* 1067 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1084 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1098 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1112 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1125 */ 'M', 'U', 'L', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1137 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1153 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1169 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1183 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1198 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1213 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1228 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1241 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1254 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1268 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1282 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1301 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1320 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1334 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1352 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1370 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1385 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1400 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1420 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1442 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1455 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1468 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1483 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1498 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1513 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1527 */ 'L', 'D', 'C', '3', 0,
  /* 1532 */ 'S', 'D', 'C', '3', 0,
  /* 1537 */ 'L', 'W', 'C', '3', 0,
  /* 1542 */ 'S', 'W', 'C', '3', 0,
  /* 1547 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 1554 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 1561 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 1569 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 1577 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 1585 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 1593 */ 'S', 'E', 'B', '6', '4', 0,
  /* 1599 */ 'L', 'B', '6', '4', 0,
  /* 1604 */ 'S', 'B', '6', '4', 0,
  /* 1609 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1620 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1632 */ 'A', 'N', 'D', '6', '4', 0,
  /* 1638 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1648 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1658 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1671 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1684 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1693 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1703 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1712 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1722 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1732 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1743 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1753 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1763 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1772 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1781 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1790 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1798 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1819 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1828 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1839 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1850 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1860 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 1869 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1881 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1893 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1904 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1916 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 1926 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 1935 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 1944 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1954 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1964 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 1973 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 1982 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 1992 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '6', '4', 0,
  /* 2009 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 2019 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 2029 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 2039 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 2048 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 2058 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 2067 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '6', '4', 0,
  /* 2088 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 2097 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 2106 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2118 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2130 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2141 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2153 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2163 */ 'B', 'N', 'E', '6', '4', 0,
  /* 2169 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 2182 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 2200 */ 'S', 'E', 'H', '6', '4', 0,
  /* 2206 */ 'L', 'H', '6', '4', 0,
  /* 2211 */ 'S', 'H', '6', '4', 0,
  /* 2216 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 2229 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 2244 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 2251 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 2264 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 2277 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 2297 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 2317 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 2338 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 2358 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 2367 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', '6', '4', 0,
  /* 2388 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 2399 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 2410 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 2426 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 2446 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 2466 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 2485 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 2502 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 2511 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', '6', '4', 0,
  /* 2532 */ 'L', 'W', 'L', '6', '4', 0,
  /* 2538 */ 'S', 'W', 'L', '6', '4', 0,
  /* 2544 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 2557 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 2564 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 2570 */ 'J', 'R', '6', '4', 0,
  /* 2575 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 2582 */ 'N', 'O', 'R', '6', '4', 0,
  /* 2588 */ 'X', 'O', 'R', '6', '4', 0,
  /* 2594 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 2602 */ 'L', 'W', 'R', '6', '4', 0,
  /* 2608 */ 'S', 'W', 'R', '6', '4', 0,
  /* 2614 */ 'S', 'L', 'T', '6', '4', 0,
  /* 2620 */ 'L', 'W', '6', '4', 0,
  /* 2625 */ 'S', 'W', '6', '4', 0,
  /* 2630 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 2637 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 2644 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 2653 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 2662 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 2669 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 2676 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 2692 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 2713 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 2722 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '6', '4', 0,
  /* 2736 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 2759 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 2766 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 2773 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 2780 */ 'L', 'U', 'i', '6', '4', 0,
  /* 2786 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 0,
  /* 2796 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '6', '4', 0,
  /* 2810 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2825 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2841 */ 'L', 'B', 'u', '6', '4', 0,
  /* 2847 */ 'L', 'H', 'u', '6', '4', 0,
  /* 2853 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 2860 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 2872 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 2880 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 2890 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 2898 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 2905 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 2925 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 2945 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2966 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 2986 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 3002 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 3022 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 3042 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 3061 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 3071 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 3078 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 3089 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 3097 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 3112 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 3127 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 3142 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 3157 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 3164 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 3171 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3187 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3203 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3219 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3235 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3252 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3269 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3288 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3304 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3320 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3336 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3350 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3363 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3376 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3391 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3407 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3418 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3431 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3444 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3458 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3472 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3488 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3501 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3514 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 3522 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 3538 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 3551 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 3565 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 3579 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 3593 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 3607 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3623 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3639 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3654 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3669 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 3678 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 3687 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 3695 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 3702 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 3712 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 3726 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 3733 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 3747 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 3754 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 3762 */ 'J', 'a', 'l', '1', '6', 0,
  /* 3768 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 3781 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3791 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3803 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3815 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3828 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3843 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3855 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3867 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 3874 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 3881 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 3893 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 3901 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 3909 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 3917 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3929 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3942 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3952 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3962 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3972 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3983 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 3993 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4004 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4016 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4027 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4038 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4048 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4059 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4070 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4082 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4093 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4105 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4118 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4131 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4144 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4157 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4171 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 4179 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 4187 */ 'D', 'M', 'O', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4199 */ 'D', 'A', 'H', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4211 */ 'D', 'A', 'T', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4223 */ 'D', 'A', 'U', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4235 */ 'D', 'E', 'X', 'T', 'M', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4248 */ 'D', 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4262 */ 'D', 'E', 'X', 'T', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4274 */ 'D', 'M', 'O', 'D', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4287 */ 'D', 'E', 'X', 'T', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4300 */ 'D', 'D', 'I', 'V', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4313 */ 'D', 'D', 'I', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4325 */ 'S', 'B', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4335 */ 'B', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4345 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4356 */ 'J', 'A', 'L', 'R', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4369 */ 'B', 'N', 'E', 'Z', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4382 */ 'B', 'E', 'Q', 'Z', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4395 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4406 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4418 */ 'S', 'H', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4428 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4440 */ 'L', 'I', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4450 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4463 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4474 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4485 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4496 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4507 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4520 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4531 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4542 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4554 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4566 */ 'S', 'W', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 4576 */ 'L', 'S', 'A', '_', 'M', 'M', 'R', '6', 0,
  /* 4585 */ 'S', 'E', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 4594 */ 'E', 'H', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 4603 */ 'L', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 4611 */ 'S', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 4619 */ 'S', 'U', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 4628 */ 'B', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4636 */ 'J', 'I', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4645 */ 'B', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4655 */ 'J', 'I', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4666 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4679 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4692 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4705 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4718 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4731 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4744 */ 'E', 'R', 'E', 'T', 'N', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4756 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4766 */ 'A', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4777 */ 'A', 'L', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4789 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4802 */ 'L', 'W', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 4812 */ 'A', 'D', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4821 */ 'A', 'N', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4830 */ 'M', 'O', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4839 */ 'M', 'I', 'N', 'A', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4851 */ 'M', 'A', 'X', 'A', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4863 */ 'F', 'S', 'U', 'B', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4875 */ 'F', 'A', 'D', 'D', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4887 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4902 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4918 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4933 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4947 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4962 */ 'C', 'M', 'P', '_', 'A', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4976 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 4989 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5002 */ 'F', 'N', 'E', 'G', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5014 */ 'S', 'E', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5025 */ 'F', 'M', 'U', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5037 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5052 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5067 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5081 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5096 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5109 */ 'M', 'I', 'N', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5120 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5135 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5149 */ 'R', 'E', 'C', 'I', 'P', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5162 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5177 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5193 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5208 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5222 */ 'A', 'B', 'S', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5233 */ 'C', 'L', 'A', 'S', 'S', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5246 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5259 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5274 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5290 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5305 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5319 */ 'R', 'I', 'N', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5331 */ 'R', 'S', 'Q', 'R', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5344 */ 'F', 'D', 'I', 'V', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5356 */ 'F', 'M', 'O', 'V', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5368 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5383 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5398 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5412 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5427 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5440 */ 'M', 'A', 'X', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5451 */ 'S', 'E', 'L', 'E', 'N', 'Z', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5465 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5479 */ 'L', 'B', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5488 */ 'S', 'B', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5497 */ 'S', 'C', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5506 */ 'C', 'A', 'C', 'H', 'E', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5518 */ 'P', 'R', 'E', 'F', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5529 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5540 */ 'S', 'H', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5549 */ 'L', 'L', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5558 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5569 */ 'L', 'B', 'U', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5579 */ 'L', 'W', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5588 */ 'S', 'W', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 5597 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 'R', '6', 0,
  /* 5607 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 5617 */ 'S', 'E', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 5626 */ 'S', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 5634 */ 'M', 'U', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 5643 */ 'S', 'Y', 'N', 'C', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 5654 */ 'A', 'N', 'D', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 5664 */ 'E', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 5672 */ 'X', 'O', 'R', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 5682 */ 'A', 'U', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 5691 */ 'L', 'U', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 5700 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 'R', '6', 0,
  /* 5711 */ 'S', 'L', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 5720 */ 'M', 'U', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 5729 */ 'C', 'V', 'T', '_', 'D', '_', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 5742 */ 'C', 'V', 'T', '_', 'S', '_', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 5755 */ 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', 'R', '6', 0,
  /* 5766 */ 'C', 'L', 'O', '_', 'M', 'M', 'R', '6', 0,
  /* 5775 */ 'B', 'I', 'T', 'S', 'W', 'A', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 5788 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 5799 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 5810 */ 'J', 'R', 'C', 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 5826 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 5836 */ 'N', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 5845 */ 'X', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 5854 */ 'R', 'D', 'P', 'G', 'P', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 5866 */ 'W', 'R', 'P', 'G', 'P', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 5878 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 5889 */ 'M', 'I', 'N', 'A', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5901 */ 'M', 'A', 'X', 'A', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5913 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5925 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5937 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5950 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5965 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5981 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 5996 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6010 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6025 */ 'C', 'M', 'P', '_', 'A', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6039 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6052 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6065 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6077 */ 'S', 'E', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6088 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6100 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6115 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6130 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6144 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6159 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6172 */ 'M', 'I', 'N', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6183 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6198 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6212 */ 'R', 'E', 'C', 'I', 'P', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6225 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6240 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6256 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6271 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6285 */ 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6296 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6309 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6324 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6340 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6355 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6369 */ 'R', 'I', 'N', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6381 */ 'R', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6394 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6406 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6418 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6433 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6448 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6462 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6477 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6490 */ 'M', 'A', 'X', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6501 */ 'S', 'E', 'L', 'E', 'N', 'Z', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6515 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6529 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 6540 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 6550 */ 'L', 'B', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6559 */ 'S', 'U', 'B', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6569 */ 'A', 'D', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6579 */ 'M', 'O', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6589 */ 'M', 'U', 'H', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6599 */ 'A', 'D', 'D', 'I', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6610 */ 'M', 'U', 'L', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6620 */ 'D', 'I', 'V', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 6630 */ 'D', 'I', 'V', '_', 'M', 'M', 'R', '6', 0,
  /* 6639 */ 'L', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 6647 */ 'S', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 6655 */ 'C', 'V', 'T', '_', 'D', '_', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 6668 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 6681 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 6693 */ 'C', 'L', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 6702 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 6714 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 6722 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 6730 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 6738 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 6746 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 6754 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 6763 */ 'S', 'C', '_', 'R', '6', 0,
  /* 6769 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 6776 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 6783 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 6792 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 6800 */ 'L', 'L', '_', 'R', '6', 0,
  /* 6806 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 6814 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 6822 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 6831 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 6839 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 6851 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 6864 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 6883 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 6902 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 6922 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 6941 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 6956 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 6975 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 6994 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 7012 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 7027 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 7043 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 7058 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 7074 */ 'D', 'S', 'R', 'A', 0,
  /* 7079 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 7085 */ 'D', 'L', 'S', 'A', 0,
  /* 7090 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 7097 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 7104 */ 'S', 'E', 'B', 0,
  /* 7108 */ 'E', 'H', 'B', 0,
  /* 7112 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 7118 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 7126 */ 'L', 'B', 0,
  /* 7129 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 7137 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 7150 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 7162 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 7179 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 7188 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 7197 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 7211 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 7219 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 7227 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 7235 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 7248 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 7260 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 7277 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 7287 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 7298 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 7309 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 7320 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 7330 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 7340 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 7350 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 7363 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 7375 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 7392 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 7400 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 7408 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 7417 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 7426 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 7435 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 7444 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 7455 */ 'S', 'B', 0,
  /* 7458 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 7465 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 7476 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 7482 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 7490 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 7498 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 7507 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 7515 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 7522 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 7529 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 7535 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 7543 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 7551 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 7559 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 7566 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 7573 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 7580 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 7587 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 7594 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 7602 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 7610 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 7617 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 7624 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 7633 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 7640 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 7648 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 7656 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 7664 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 7671 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 7678 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 7687 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 7696 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 7704 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 7712 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 7720 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 7727 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 7735 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 7742 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 7748 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 7754 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 7762 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 7769 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 7775 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 7782 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 7789 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 7796 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 7804 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 7811 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 7820 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 7828 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 7836 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 7844 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 7853 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 7862 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 7871 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 7880 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 7888 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 7897 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 7906 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 7915 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 7923 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 7931 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 7942 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 7950 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 7958 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 7967 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 7975 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 7982 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 7989 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 7998 */ 'S', 'T', '_', 'B', 0,
  /* 8003 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 8012 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 8020 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 8028 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 8036 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 8045 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 8054 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 8063 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 8072 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 8080 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 8089 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 8098 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 8107 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 8118 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 8126 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 8134 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 8142 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 8150 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 8159 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 8167 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 8175 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 8183 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 8191 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 8198 */ 'B', 'Z', '_', 'B', 0,
  /* 8203 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 8209 */ 'B', 'C', 0,
  /* 8212 */ 'B', 'G', 'E', 'C', 0,
  /* 8217 */ 'B', 'N', 'E', 'C', 0,
  /* 8222 */ 'J', 'I', 'C', 0,
  /* 8226 */ 'B', 'A', 'L', 'C', 0,
  /* 8231 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 8237 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 8245 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 8253 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 8261 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 8269 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 8277 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 8285 */ 'E', 'R', 'E', 'T', 'N', 'C', 0,
  /* 8292 */ 'S', 'Y', 'N', 'C', 0,
  /* 8297 */ 'L', 'D', 'P', 'C', 0,
  /* 8302 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 8308 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 8315 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 8323 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 8329 */ 'L', 'W', 'P', 'C', 0,
  /* 8334 */ 'B', 'E', 'Q', 'C', 0,
  /* 8339 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 8345 */ 'B', 'L', 'T', 'C', 0,
  /* 8350 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 8356 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 8362 */ 'B', 'N', 'V', 'C', 0,
  /* 8367 */ 'B', 'O', 'V', 'C', 0,
  /* 8372 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 8378 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 8384 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 8390 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 8396 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 8402 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 8408 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 8414 */ 'S', 'C', 'D', 0,
  /* 8418 */ 'D', 'A', 'D', 'D', 0,
  /* 8423 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 8434 */ 'D', 'S', 'H', 'D', 0,
  /* 8439 */ 'L', 'L', 'D', 0,
  /* 8443 */ 'A', 'N', 'D', 0,
  /* 8447 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 8455 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 8462 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 8475 */ 'D', 'M', 'O', 'D', 0,
  /* 8480 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 8497 */ 'S', 'D', 0,
  /* 8500 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 8508 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 8516 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 8523 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 8529 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 8536 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 8544 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 8553 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 8562 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 8571 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 8578 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 8586 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 8593 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 8600 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 8607 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 8615 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 8621 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 8629 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 8637 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 8644 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 8651 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 8661 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 8669 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 8677 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 8688 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 8698 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 8707 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 8714 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 8721 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 8729 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 8737 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 8745 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 8752 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 8759 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 8769 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 8777 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 8785 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 8792 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 8800 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 8807 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 8814 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 8821 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 8829 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 8836 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 8843 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 8852 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 8859 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 8867 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 8875 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 8883 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 8892 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 8901 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 8909 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 8917 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 8925 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 8931 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 8938 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 8944 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 8953 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 8960 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 8966 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 8974 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 8981 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 8988 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 8995 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 9002 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 9009 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 9019 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 9028 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 9035 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 9042 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 9049 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 9059 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 9067 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 9075 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 9086 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 9096 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 9105 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 9112 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 9119 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 9126 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 9133 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 9140 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 9149 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 9156 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 9164 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 9171 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 9178 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 9187 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 9196 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 9205 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 9215 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 9226 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 9235 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 9245 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 9253 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 9261 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 9269 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 9278 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 9287 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 9296 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 9305 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 9313 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 9322 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 9331 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 9340 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 9349 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 9357 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 9365 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 9375 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 9385 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 9396 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 9404 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 9412 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 9421 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 9429 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 9436 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 9443 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 9450 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 9460 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 9468 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 9476 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 9487 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 9497 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 9506 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 9513 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 9521 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 9530 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 9538 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 9547 */ 'S', 'T', '_', 'D', 0,
  /* 9552 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 9561 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 9570 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 9580 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 9591 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 9600 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 9610 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 9618 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 9626 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 9634 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 9643 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 9652 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 9661 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 9670 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 9678 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 9687 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 9696 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 9705 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 9714 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 9725 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 9733 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 9741 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 9751 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 9761 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 9769 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 9777 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 9785 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 9793 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 9801 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 9809 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 9816 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 9823 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 9830 */ 'B', 'Z', '_', 'D', 0,
  /* 9835 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 9844 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 9850 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 9859 */ 'L', 'B', 'E', 0,
  /* 9863 */ 'S', 'B', 'E', 0,
  /* 9867 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 9880 */ 'S', 'C', 'E', 0,
  /* 9884 */ 'C', 'A', 'C', 'H', 'E', 'E', 0,
  /* 9891 */ 'P', 'R', 'E', 'F', 'E', 0,
  /* 9897 */ 'B', 'G', 'E', 0,
  /* 9901 */ 'T', 'G', 'E', 0,
  /* 9905 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 9911 */ 'L', 'H', 'E', 0,
  /* 9915 */ 'S', 'H', 'E', 0,
  /* 9919 */ 'B', 'L', 'E', 0,
  /* 9923 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 9930 */ 'L', 'L', 'E', 0,
  /* 9934 */ 'L', 'W', 'L', 'E', 0,
  /* 9939 */ 'S', 'W', 'L', 'E', 0,
  /* 9944 */ 'B', 'N', 'E', 0,
  /* 9948 */ 'S', 'N', 'E', 0,
  /* 9952 */ 'T', 'N', 'E', 0,
  /* 9956 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 9969 */ 'L', 'W', 'R', 'E', 0,
  /* 9974 */ 'S', 'W', 'R', 'E', 0,
  /* 9979 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 9985 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 9995 */ 'L', 'W', 'E', 0,
  /* 9999 */ 'S', 'W', 'E', 0,
  /* 10003 */ 'L', 'B', 'u', 'E', 0,
  /* 10008 */ 'L', 'H', 'u', 'E', 0,
  /* 10013 */ 'B', 'C', '1', 'F', 0,
  /* 10018 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 10031 */ 'P', 'R', 'E', 'F', 0,
  /* 10036 */ 'T', 'L', 'B', 'I', 'N', 'V', 'F', 0,
  /* 10044 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 10059 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 10073 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 10087 */ 'D', 'S', 'B', 'H', 0,
  /* 10092 */ 'W', 'S', 'B', 'H', 0,
  /* 10097 */ 'S', 'E', 'H', 0,
  /* 10101 */ 'L', 'H', 0,
  /* 10104 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 10112 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 10125 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 10137 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 10153 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 10169 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 10178 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 10187 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 10201 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 10209 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 10217 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 10225 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 10235 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 10242 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 10250 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 10258 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 10274 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 10284 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 10295 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 10306 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 10317 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 10328 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 10338 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 10347 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 10357 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 10367 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 10377 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 10387 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 10397 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 10407 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 10418 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 10434 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 10442 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 10450 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 10459 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 10468 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 10477 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 10486 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 10495 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 10506 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 10520 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 10534 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 10543 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 10555 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 10569 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 10581 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 10594 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 10607 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 10617 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 10627 */ 'S', 'H', 0,
  /* 10630 */ 'D', 'M', 'U', 'H', 0,
  /* 10635 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 10641 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 10649 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 10657 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 10666 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 10674 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 10681 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 10688 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 10694 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 10702 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 10710 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 10718 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 10725 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 10732 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 10739 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 10746 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 10754 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 10761 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 10768 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 10777 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 10784 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 10792 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 10800 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 10808 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 10817 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 10826 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 10834 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 10842 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 10850 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 10857 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 10863 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 10869 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 10877 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 10884 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 10892 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 10898 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 10904 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 10913 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 10922 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 10930 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 10940 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 10950 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 10959 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 10966 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 10973 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 10980 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 10988 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 10995 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 11004 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 11013 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 11023 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 11032 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 11042 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 11050 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 11058 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 11066 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 11075 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 11084 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 11093 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 11102 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 11110 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 11119 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 11128 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 11137 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 11146 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 11155 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 11163 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 11171 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 11182 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 11190 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 11200 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 11208 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 11217 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 11225 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 11232 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 11239 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 11248 */ 'S', 'T', '_', 'H', 0,
  /* 11253 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 11262 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 11271 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 11281 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 11290 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 11300 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 11308 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 11316 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 11324 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 11333 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 11342 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 11351 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 11360 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 11368 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 11377 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 11386 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 11395 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 11404 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 11415 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 11423 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 11431 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 11439 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 11447 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 11456 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 11464 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 11472 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 11480 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 11488 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 11495 */ 'B', 'Z', '_', 'H', 0,
  /* 11500 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 11506 */ 'S', 'Y', 'N', 'C', 'I', 0,
  /* 11512 */ 'D', 'I', 0,
  /* 11515 */ 'T', 'G', 'E', 'I', 0,
  /* 11520 */ 'T', 'N', 'E', 'I', 0,
  /* 11525 */ 'D', 'A', 'H', 'I', 0,
  /* 11530 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 11541 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 11554 */ 'P', 'H', 'I', 0,
  /* 11558 */ 'M', 'T', 'H', 'I', 0,
  /* 11563 */ 'T', 'E', 'Q', 'I', 0,
  /* 11568 */ 'D', 'A', 'T', 'I', 0,
  /* 11573 */ 'T', 'L', 'T', 'I', 0,
  /* 11578 */ 'D', 'A', 'U', 'I', 0,
  /* 11583 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 11589 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 11600 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 11611 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 11618 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', 0,
  /* 11637 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 11646 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 11655 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', 0,
  /* 11670 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 11677 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', 0,
  /* 11696 */ 'J', 0,
  /* 11698 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 11704 */ 'B', 'A', 'L', 0,
  /* 11708 */ 'J', 'A', 'L', 0,
  /* 11712 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 11719 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 11726 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 11741 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 11755 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 11770 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 11781 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 11792 */ 'L', 'D', 'L', 0,
  /* 11796 */ 'S', 'D', 'L', 0,
  /* 11800 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 11809 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 11818 */ 'B', 'G', 'E', 'L', 0,
  /* 11823 */ 'B', 'L', 'E', 'L', 0,
  /* 11828 */ 'B', 'N', 'E', 'L', 0,
  /* 11833 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 11839 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 11852 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 11865 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 11877 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 11891 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 11900 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 11908 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 11916 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 11924 */ 'K', 'I', 'L', 'L', 0,
  /* 11929 */ 'D', 'S', 'L', 'L', 0,
  /* 11934 */ 'D', 'R', 'O', 'L', 0,
  /* 11939 */ 'B', 'E', 'Q', 'L', 0,
  /* 11944 */ 'D', 'S', 'R', 'L', 0,
  /* 11949 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 11955 */ 'B', 'G', 'T', 'L', 0,
  /* 11960 */ 'B', 'L', 'T', 'L', 0,
  /* 11965 */ 'B', 'G', 'E', 'U', 'L', 0,
  /* 11971 */ 'B', 'L', 'E', 'U', 'L', 0,
  /* 11977 */ 'D', 'M', 'U', 'L', 0,
  /* 11982 */ 'B', 'G', 'T', 'U', 'L', 0,
  /* 11988 */ 'B', 'L', 'T', 'U', 'L', 0,
  /* 11994 */ 'L', 'W', 'L', 0,
  /* 11998 */ 'S', 'W', 'L', 0,
  /* 12002 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 12008 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 12014 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 12020 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 12026 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 12042 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 12056 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 12064 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 12072 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 12080 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 12088 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 12097 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 12106 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 12114 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 12122 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 12130 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 12138 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 12147 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 12156 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 12165 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 12174 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12187 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12200 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12212 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12226 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12240 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12252 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12265 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12277 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 12289 */ 'L', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 12298 */ 'S', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 12307 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 12319 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 12330 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 12343 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 12354 */ 'S', 'B', '1', '6', '_', 'M', 'M', 0,
  /* 12362 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 12371 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 12380 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 12390 */ 'S', 'H', '1', '6', '_', 'M', 'M', 0,
  /* 12398 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 12408 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 12418 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 12426 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 0,
  /* 12437 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 12446 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 12455 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 12464 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 12473 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 12483 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 0,
  /* 12494 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 12502 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 12512 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 12521 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 12532 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 12541 */ 'L', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 12550 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 12560 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 12570 */ 'L', 'H', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 12579 */ 'L', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 12587 */ 'S', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 12595 */ 'B', 'N', 'E', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 12605 */ 'B', 'E', 'Q', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 12615 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', '_', 'M', 'M', 0,
  /* 12633 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', '_', 'M', 'M', 0,
  /* 12652 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', '_', 'M', 'M', 0,
  /* 12670 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', '_', 'M', 'M', 0,
  /* 12689 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 12696 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 12703 */ 'E', 'H', 'B', '_', 'M', 'M', 0,
  /* 12710 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 12716 */ 'P', 'I', 'C', 'K', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12727 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12738 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12749 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12760 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12773 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12786 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12797 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12808 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12820 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12832 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12844 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 12858 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 12864 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 12872 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 12880 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 12888 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 0,
  /* 12899 */ 'A', 'D', 'D', 'S', 'C', '_', 'M', 'M', 0,
  /* 12908 */ 'A', 'D', 'D', 'W', 'C', '_', 'M', 'M', 0,
  /* 12917 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 12926 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 12935 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 12943 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 12951 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 12958 */ 'L', 'B', 'E', '_', 'M', 'M', 0,
  /* 12965 */ 'S', 'B', 'E', '_', 'M', 'M', 0,
  /* 12972 */ 'S', 'C', 'E', '_', 'M', 'M', 0,
  /* 12979 */ 'C', 'A', 'C', 'H', 'E', 'E', '_', 'M', 'M', 0,
  /* 12989 */ 'P', 'R', 'E', 'F', 'E', '_', 'M', 'M', 0,
  /* 12998 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 13005 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 0,
  /* 13014 */ 'L', 'H', 'E', '_', 'M', 'M', 0,
  /* 13021 */ 'S', 'H', 'E', '_', 'M', 'M', 0,
  /* 13028 */ 'L', 'L', 'E', '_', 'M', 'M', 0,
  /* 13035 */ 'L', 'W', 'L', 'E', '_', 'M', 'M', 0,
  /* 13043 */ 'S', 'W', 'L', 'E', '_', 'M', 'M', 0,
  /* 13051 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 13058 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 13065 */ 'L', 'W', 'R', 'E', '_', 'M', 'M', 0,
  /* 13073 */ 'S', 'W', 'R', 'E', '_', 'M', 'M', 0,
  /* 13081 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 0,
  /* 13090 */ 'L', 'W', 'E', '_', 'M', 'M', 0,
  /* 13097 */ 'S', 'W', 'E', '_', 'M', 'M', 0,
  /* 13104 */ 'L', 'B', 'u', 'E', '_', 'M', 'M', 0,
  /* 13112 */ 'L', 'H', 'u', 'E', '_', 'M', 'M', 0,
  /* 13120 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 13128 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 0,
  /* 13136 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 13144 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 13152 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 13159 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 13165 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13176 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13192 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13211 */ 'P', 'I', 'C', 'K', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13222 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13233 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13244 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13257 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13268 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13279 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13292 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13306 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13320 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13333 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13346 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13359 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13372 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13386 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13398 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13410 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13422 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13437 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 13452 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 13458 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', '_', 'M', 'M', 0,
  /* 13470 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', '_', 'M', 'M', 0,
  /* 13483 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 13489 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 13497 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 13505 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 13513 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 13521 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 13529 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 13537 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 13546 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 13556 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 13566 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 13576 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 13586 */ 'J', '_', 'M', 'M', 0,
  /* 13591 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 13600 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 13607 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 13617 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 13627 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 13645 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 13662 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 13680 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 13694 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 13708 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 13724 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 13740 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 13755 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 13772 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 13783 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 13790 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 13797 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 13805 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 13812 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 13819 */ 'L', 'W', 'M', '_', 'M', 'M', 0,
  /* 13826 */ 'S', 'W', 'M', '_', 'M', 'M', 0,
  /* 13833 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 13840 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 13848 */ 'S', 'H', 'I', 'L', 'O', '_', 'M', 'M', 0,
  /* 13857 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 13865 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 0,
  /* 13874 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 13882 */ 'E', 'X', 'T', 'P', 'D', 'P', '_', 'M', 'M', 0,
  /* 13892 */ 'M', 'O', 'V', 'E', 'P', '_', 'M', 'M', 0,
  /* 13901 */ 'L', 'W', 'G', 'P', '_', 'M', 'M', 0,
  /* 13909 */ 'M', 'T', 'H', 'L', 'I', 'P', '_', 'M', 'M', 0,
  /* 13919 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 0,
  /* 13928 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 13941 */ 'R', 'D', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 13950 */ 'W', 'R', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 13959 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 13971 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 13983 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 13995 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14007 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14019 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14031 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14043 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14056 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14069 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 14082 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 14093 */ 'L', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 14101 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 14109 */ 'E', 'X', 'T', 'P', '_', 'M', 'M', 0,
  /* 14117 */ 'L', 'W', 'P', '_', 'M', 'M', 0,
  /* 14124 */ 'S', 'W', 'P', '_', 'M', 'M', 0,
  /* 14131 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 14138 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 14145 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 14153 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 14171 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 14188 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 14206 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 14220 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 14234 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 14250 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 14266 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 14281 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 14298 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 14304 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 14312 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 14319 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 14326 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 14334 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 14343 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 0,
  /* 14352 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 14359 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 14366 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 14374 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 14382 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 14393 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 14404 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 14411 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 14420 */ 'L', 'W', 'X', 'S', '_', 'M', 'M', 0,
  /* 14428 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 14438 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 14449 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 14459 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 14470 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 14481 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 14491 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 14501 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 14513 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 14525 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 14535 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 14546 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 14556 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 14567 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 14577 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 14587 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 14597 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 14610 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 14623 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 14635 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 14648 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 14659 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 14667 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 14676 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 14684 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 14691 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 14698 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 14706 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 14715 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 14722 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 14731 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 14740 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 14748 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 14757 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 14766 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 14774 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 14781 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 14789 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 14797 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 14805 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 14813 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 14821 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 14829 */ 'S', 'H', 'I', 'L', 'O', 'V', '_', 'M', 'M', 0,
  /* 14839 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', '_', 'M', 'M', 0,
  /* 14850 */ 'E', 'X', 'T', 'P', 'V', '_', 'M', 'M', 0,
  /* 14859 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 14868 */ 'I', 'N', 'S', 'V', '_', 'M', 'M', 0,
  /* 14876 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 14882 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 14888 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 14901 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 14912 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 14923 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 0,
  /* 14938 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 0,
  /* 14956 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 14966 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 14981 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 14996 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 15007 */ 'E', 'X', 'T', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 15017 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 15029 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 15041 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 15054 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 15067 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15080 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15094 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15106 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15118 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15130 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15142 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15153 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 15166 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 15175 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', '_', 'M', 'M', 0,
  /* 15186 */ 'P', 'R', 'E', 'F', 'X', '_', 'M', 'M', 0,
  /* 15195 */ 'L', 'H', 'X', '_', 'M', 'M', 0,
  /* 15202 */ 'J', 'A', 'L', 'X', '_', 'M', 'M', 0,
  /* 15210 */ 'L', 'B', 'U', 'X', '_', 'M', 'M', 0,
  /* 15218 */ 'L', 'W', 'X', '_', 'M', 'M', 0,
  /* 15225 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 15233 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 15241 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 15248 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 15256 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 15264 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 15272 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 15280 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 15288 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 15296 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 15303 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 15310 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 15318 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 15326 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 15333 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 15341 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 15350 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 15363 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 15372 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 15382 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 15388 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 15394 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 15401 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 15408 */ 'D', 'M', 'F', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 15421 */ 'D', 'M', 'T', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 15434 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 15450 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 15467 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15484 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15501 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15517 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15540 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15564 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15587 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15610 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15634 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15657 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15670 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15682 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15697 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15712 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15729 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15744 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15758 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15773 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15788 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15803 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15816 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15828 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15842 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15857 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15872 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15887 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15900 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15912 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15925 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15937 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15952 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15967 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15984 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 15999 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16013 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16028 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16043 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16058 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16071 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16083 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16104 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16126 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16147 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16168 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16190 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16211 */ 'D', 'C', 'L', 'O', 0,
  /* 16216 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 16227 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 16233 */ 'M', 'T', 'L', 'O', 0,
  /* 16238 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 16247 */ 'T', 'R', 'A', 'P', 0,
  /* 16252 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 16261 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 16267 */ 'T', 'L', 'B', 'P', 0,
  /* 16272 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 16279 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 16286 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 16292 */ 'D', 'P', 'O', 'P', 0,
  /* 16297 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 16314 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 16328 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 16343 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 16349 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 16355 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 16364 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 16373 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 16388 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 16404 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 16413 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 16430 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 16439 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 16448 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 16457 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 16466 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 16476 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 16486 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 16496 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 16506 */ 'E', 'X', 'T', 'P', 0,
  /* 16511 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 16526 */ 'B', 'E', 'Q', 0,
  /* 16530 */ 'S', 'E', 'Q', 0,
  /* 16534 */ 'T', 'E', 'Q', 0,
  /* 16538 */ 'T', 'L', 'B', 'R', 0,
  /* 16543 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 16558 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 16572 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 16587 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 16598 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 16609 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 16616 */ 'L', 'D', 'R', 0,
  /* 16620 */ 'S', 'D', 'R', 0,
  /* 16624 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 16637 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 16650 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 16662 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 16676 */ 'J', 'R', 0,
  /* 16679 */ 'J', 'A', 'L', 'R', 0,
  /* 16684 */ 'N', 'O', 'R', 0,
  /* 16688 */ 'D', 'R', 'O', 'R', 0,
  /* 16693 */ 'X', 'O', 'R', 0,
  /* 16697 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 16703 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 16709 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 16715 */ 'L', 'W', 'R', 0,
  /* 16719 */ 'S', 'W', 'R', 0,
  /* 16723 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 16736 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 16747 */ 'C', 'I', 'N', 'S', 0,
  /* 16752 */ 'D', 'I', 'N', 'S', 0,
  /* 16757 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 16774 */ 'E', 'X', 'T', 'S', 0,
  /* 16779 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 16789 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 16799 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 16810 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 16821 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 16828 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 16835 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 16842 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 16850 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 16857 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 16865 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 16873 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 16882 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 16890 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 16900 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 16911 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 16919 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 16929 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 16936 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 16945 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 16955 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 16963 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 16971 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 16978 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 16985 */ 'C', '_', 'F', '_', 'S', 0,
  /* 16991 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'S', 0,
  /* 17010 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 17018 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 17025 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 17034 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 17043 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 17049 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 17057 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 17064 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 17074 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 17084 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 17093 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 17103 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 17111 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 17117 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 17127 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 17134 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 17143 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 17151 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 17161 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 17172 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 17180 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 17190 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 17197 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 17206 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 17213 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 17221 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'S', 0,
  /* 17236 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 17244 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 17252 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 17262 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 17273 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 17281 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 17291 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 17298 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 17307 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 17314 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 17322 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 17329 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'S', 0,
  /* 17348 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 17355 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 17362 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 17372 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 17382 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 17391 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 17401 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 17409 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 17415 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 17424 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 17433 */ 'B', 'C', '1', 'T', 0,
  /* 17438 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 17444 */ 'B', 'G', 'T', 0,
  /* 17448 */ 'W', 'A', 'I', 'T', 0,
  /* 17453 */ 'B', 'L', 'T', 0,
  /* 17457 */ 'S', 'L', 'T', 0,
  /* 17461 */ 'T', 'L', 'T', 0,
  /* 17465 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 17477 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 17488 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 17499 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 17510 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 17525 */ 'D', 'E', 'X', 'T', 0,
  /* 17530 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 17542 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 17554 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 17560 */ 'B', 'G', 'E', 'U', 0,
  /* 17565 */ 'T', 'G', 'E', 'U', 0,
  /* 17570 */ 'B', 'L', 'E', 'U', 0,
  /* 17575 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 17581 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 17587 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 17594 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 17601 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 17607 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 17613 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 17619 */ 'B', 'G', 'T', 'U', 0,
  /* 17624 */ 'B', 'L', 'T', 'U', 0,
  /* 17629 */ 'T', 'L', 'T', 'U', 0,
  /* 17634 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 17640 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 17646 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 17652 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 17659 */ 'D', 'D', 'I', 'V', 0,
  /* 17664 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 17676 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 17687 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 17699 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 17710 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 17716 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 17722 */ 'T', 'L', 'B', 'I', 'N', 'V', 0,
  /* 17729 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 17736 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 17744 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 17750 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 17757 */ 'I', 'N', 'S', 'V', 0,
  /* 17762 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 17768 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 17775 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 17782 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 17788 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 17794 */ 'B', 'Z', '_', 'V', 0,
  /* 17799 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 17805 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 17811 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 17818 */ 'L', 'W', 0,
  /* 17821 */ 'S', 'W', 0,
  /* 17824 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 17840 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 17848 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 17856 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 17872 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 17878 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 17886 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 17895 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 17904 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 17913 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 17920 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 17928 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 17935 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 17942 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 17949 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 17957 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 17963 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 17971 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 17979 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 17986 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 17993 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 18001 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 18009 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 18016 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 18023 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 18031 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 18039 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 18047 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 18054 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 18061 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 18068 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 18075 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 18090 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 18102 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 18119 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 18134 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 18142 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 18150 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 18157 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 18164 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 18172 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 18179 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 18186 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 18195 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 18202 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 18210 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 18218 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 18226 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 18235 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 18244 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 18252 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 18260 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 18268 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 18275 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 18281 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 18290 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 18297 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 18303 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 18311 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 18318 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 18325 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 18337 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 18349 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 18356 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 18363 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 18370 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 18378 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 18385 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 18392 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 18399 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 18407 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 18415 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 18421 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 18430 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 18439 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 18447 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 18457 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 18467 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 18476 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 18483 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 18490 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 18497 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 18504 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 18511 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 18520 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 18527 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 18535 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 18542 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 18549 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 18558 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 18568 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 18578 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 18587 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 18597 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 18607 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 18614 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 18624 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 18634 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 18645 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 18654 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 18663 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 18672 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 18682 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 18693 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 18702 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 18712 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 18720 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 18728 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 18736 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 18745 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 18754 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 18763 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 18772 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 18781 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 18789 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 18798 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 18807 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 18816 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 18825 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 18834 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 18843 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 18852 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 18861 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 18869 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 18877 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 18887 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 18897 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 18911 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 18922 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 18930 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 18940 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 18948 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 18957 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 18965 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 18972 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 18979 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 18986 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 18994 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 19002 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 19009 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 19017 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 19026 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 19034 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 19043 */ 'S', 'T', '_', 'W', 0,
  /* 19048 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 19057 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 19066 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 19076 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 19087 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 19096 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 19106 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 19114 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 19122 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 19130 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 19139 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 19148 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 19157 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 19166 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 19174 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 19183 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 19192 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 19201 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 19210 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 19221 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 19229 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 19237 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 19247 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 19257 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 19265 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 19273 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 19282 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 19290 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 19298 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 19306 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 19314 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 19321 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 19328 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 19336 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 19343 */ 'B', 'Z', '_', 'W', 0,
  /* 19348 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 19354 */ 'L', 'H', 'X', 0,
  /* 19358 */ 'J', 'A', 'L', 'X', 0,
  /* 19363 */ 'L', 'B', 'U', 'X', 0,
  /* 19368 */ 'L', 'W', 'X', 0,
  /* 19372 */ 'C', 'O', 'P', 'Y', 0,
  /* 19377 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 19393 */ 'B', 'G', 'E', 'Z', 0,
  /* 19398 */ 'B', 'L', 'E', 'Z', 0,
  /* 19403 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 19410 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 19417 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 19424 */ 'D', 'C', 'L', 'Z', 0,
  /* 19429 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 19436 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 19443 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 19450 */ 'B', 'G', 'T', 'Z', 0,
  /* 19455 */ 'B', 'L', 'T', 'Z', 0,
  /* 19460 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 19468 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 19476 */ 'J', 'a', 'l', 'O', 'n', 'e', 'R', 'e', 'g', 0,
  /* 19486 */ 'J', 'a', 'l', 'T', 'w', 'o', 'R', 'e', 'g', 0,
  /* 19496 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 19517 */ 'U', 'l', 'h', 0,
  /* 19521 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 19527 */ 'A', 'N', 'D', 'i', 0,
  /* 19532 */ 'S', 'N', 'E', 'i', 0,
  /* 19537 */ 'S', 'E', 'Q', 'i', 0,
  /* 19542 */ 'X', 'O', 'R', 'i', 0,
  /* 19547 */ 'S', 'L', 'T', 'i', 0,
  /* 19552 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 19568 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 19582 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 19596 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 19610 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 19624 */ 'D', 'R', 'O', 'L', 'I', 'm', 'm', 0,
  /* 19632 */ 'N', 'O', 'R', 'I', 'm', 'm', 0,
  /* 19639 */ 'D', 'R', 'O', 'R', 'I', 'm', 'm', 0,
  /* 19647 */ 'B', 'n', 'e', 'I', 'm', 'm', 0,
  /* 19654 */ 'B', 'e', 'q', 'I', 'm', 'm', 0,
  /* 19661 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 19674 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 19687 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 19698 */ 'B', '_', 'M', 'M', 'R', '6', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 19712 */ 'B', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 19724 */ 'B', 'G', 'E', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19736 */ 'B', 'L', 'E', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19748 */ 'B', 'G', 'E', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19761 */ 'B', 'L', 'E', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19774 */ 'B', 'G', 'T', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19787 */ 'B', 'L', 'T', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19800 */ 'B', 'G', 'E', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19814 */ 'B', 'L', 'E', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19828 */ 'B', 'G', 'T', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19842 */ 'B', 'L', 'T', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19856 */ 'B', 'G', 'T', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19868 */ 'B', 'L', 'T', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19880 */ 'B', 'G', 'E', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19893 */ 'B', 'L', 'E', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19906 */ 'B', 'G', 'T', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19919 */ 'B', 'L', 'T', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19932 */ 'D', 'S', 'D', 'i', 'v', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19943 */ 'D', 'U', 'D', 'i', 'v', 'M', 'a', 'c', 'r', 'o', 0,
  /* 19954 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 19967 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 19980 */ 'E', 'R', 'e', 't', 0,
  /* 19985 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 19998 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 20011 */ 'L', 'B', 'u', 0,
  /* 20015 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 20021 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 20027 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 20033 */ 'L', 'H', 'u', 0,
  /* 20037 */ 'S', 'L', 'T', 'u', 0,
  /* 20042 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 20055 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 20067 */ 'L', 'W', 'u', 0,
  /* 20071 */ 'U', 'l', 'h', 'u', 0,
  /* 20076 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 20095 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 20105 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 20123 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 20129 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 20144 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 20159 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 20173 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
  /* 20187 */ 'U', 'l', 'w', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    11554U, 15372U, 15434U, 11809U, 11800U, 11924U, 10044U, 10059U, 
    10018U, 10073U, 16757U, 9985U, 9867U, 19372U, 9923U, 17510U, 
    8462U, 16238U, 17499U, 8480U, 17488U, 9956U, 16297U, 10377U, 
    13359U, 7320U, 1025U, 18825U, 15130U, 5222U, 6285U, 8419U, 
    8315U, 12888U, 4789U, 13928U, 12319U, 12343U, 14082U, 6599U, 
    10178U, 1098U, 10295U, 1153U, 18568U, 1483U, 18142U, 1455U, 
    10250U, 13268U, 10357U, 13346U, 18807U, 15118U, 8339U, 12899U, 
    7498U, 8553U, 10657U, 17895U, 7906U, 9340U, 11146U, 18852U, 
    8098U, 9705U, 11395U, 19201U, 12560U, 4554U, 7188U, 948U, 
    7298U, 993U, 6569U, 10442U, 1241U, 7400U, 12797U, 10397U, 
    1213U, 7340U, 12773U, 7712U, 8917U, 10842U, 18260U, 8168U, 
    9786U, 11465U, 19291U, 8372U, 12908U, 7482U, 8536U, 10641U, 
    17878U, 12936U, 4812U, 19522U, 15264U, 20089U, 15354U, 20022U, 
    15318U, 15450U, 16511U, 15395U, 5755U, 8308U, 4777U, 8443U, 
    12371U, 4395U, 1632U, 12398U, 4428U, 7587U, 5654U, 12951U, 
    4821U, 17762U, 15758U, 15842U, 16013U, 19527U, 2759U, 15272U, 
    8455U, 7811U, 9187U, 10995U, 18654U, 8003U, 9552U, 11253U, 
    19048U, 3002U, 698U, 2426U, 6956U, 2925U, 621U, 2297U, 
    6883U, 2966U, 662U, 2338U, 6922U, 2945U, 641U, 2317U, 
    6902U, 3042U, 738U, 2466U, 6994U, 2905U, 601U, 2277U, 
    6864U, 3022U, 718U, 2446U, 6975U, 2986U, 682U, 2410U, 
    6941U, 11579U, 8302U, 4766U, 5682U, 7888U, 9322U, 11119U, 
    18834U, 8080U, 9687U, 11377U, 19183U, 7836U, 9261U, 11058U, 
    18728U, 8028U, 9626U, 11316U, 19122U, 3444U, 3320U, 3828U, 
    3472U, 3269U, 3768U, 3336U, 4131U, 4070U, 7106U, 12355U, 
    20021U, 11704U, 8226U, 4645U, 15394U, 16609U, 27U, 127U, 
    121U, 135U, 8209U, 4335U, 19429U, 10013U, 11833U, 13120U, 
    19403U, 17433U, 11949U, 14659U, 19436U, 19410U, 7648U, 8867U, 
    10792U, 18210U, 7782U, 9112U, 10966U, 18483U, 4628U, 16526U, 
    2564U, 8334U, 11939U, 12605U, 8261U, 4705U, 8396U, 4382U, 
    12926U, 14131U, 9897U, 8212U, 19724U, 11818U, 19748U, 17560U, 
    8350U, 19880U, 11965U, 19800U, 19393U, 2630U, 11712U, 8237U, 
    4666U, 11908U, 14382U, 13607U, 8378U, 12002U, 15225U, 17444U, 
    19856U, 11955U, 19774U, 17619U, 19906U, 11982U, 19828U, 19450U, 
    2662U, 8269U, 4718U, 8402U, 12014U, 15248U, 7624U, 8843U, 
    10768U, 18186U, 7754U, 8966U, 10869U, 18303U, 7678U, 8883U, 
    10808U, 18226U, 7796U, 9156U, 10980U, 18527U, 17652U, 16253U, 
    5775U, 9919U, 19736U, 11823U, 19761U, 17570U, 19893U, 11971U, 
    19814U, 19398U, 2637U, 8245U, 4679U, 8384U, 12008U, 15233U, 
    17453U, 8345U, 19868U, 11960U, 19787U, 17624U, 8356U, 19919U, 
    11988U, 19842U, 19455U, 2669U, 11719U, 8277U, 4731U, 11916U, 
    14393U, 13617U, 8408U, 12020U, 15256U, 7727U, 17811U, 7720U, 
    17799U, 9944U, 2163U, 8217U, 7594U, 8821U, 10746U, 18164U, 
    7566U, 8800U, 10725U, 18068U, 11828U, 12595U, 8253U, 4692U, 
    8390U, 4369U, 12917U, 13051U, 8362U, 8203U, 9844U, 11500U, 
    17805U, 19348U, 8367U, 592U, 15501U, 11698U, 12426U, 4450U, 
    13591U, 5700U, 7602U, 15744U, 15682U, 15937U, 15828U, 17775U, 
    15999U, 7696U, 8901U, 10826U, 18244U, 7975U, 9429U, 11225U, 
    18965U, 8198U, 9830U, 11495U, 17794U, 19343U, 19698U, 19712U, 
    19654U, 3855U, 3501U, 3867U, 3514U, 19647U, 3843U, 3488U, 
    3754U, 4179U, 3565U, 3112U, 3593U, 3142U, 3623U, 3654U, 
    3678U, 4171U, 3551U, 3097U, 3579U, 3127U, 3607U, 3639U, 
    3669U, 2169U, 2676U, 9905U, 9884U, 12979U, 5506U, 13005U, 
    5529U, 6783U, 1893U, 5067U, 17084U, 6130U, 559U, 2130U, 
    5398U, 14956U, 17382U, 14623U, 6448U, 7633U, 8852U, 10777U, 
    18195U, 7769U, 9036U, 10892U, 18386U, 43U, 12072U, 7090U, 
    16747U, 779U, 9179U, 5233U, 17213U, 6296U, 7844U, 9269U, 
    11066U, 18736U, 8036U, 9634U, 11324U, 19130U, 7828U, 9253U, 
    11050U, 18720U, 8020U, 9618U, 11308U, 19114U, 16212U, 13833U, 
    5766U, 6815U, 7862U, 9287U, 11084U, 18754U, 8054U, 9652U, 
    11342U, 19148U, 7923U, 9357U, 11163U, 18869U, 8126U, 9733U, 
    11423U, 19229U, 19425U, 15241U, 6693U, 6832U, 7235U, 7137U, 
    7350U, 7248U, 7150U, 7363U, 7266U, 7168U, 7381U, 4962U, 
    6025U, 9096U, 5208U, 10264U, 17197U, 6271U, 8792U, 17010U, 
    8698U, 4933U, 10159U, 16936U, 5996U, 9497U, 5305U, 10424U, 
    17298U, 6355U, 8759U, 4947U, 16945U, 6010U, 9049U, 5162U, 
    17151U, 6225U, 8651U, 4887U, 16890U, 5950U, 9450U, 5259U, 
    17252U, 6309U, 9075U, 5177U, 17161U, 6240U, 8677U, 4902U, 
    16900U, 5965U, 9476U, 5274U, 17262U, 6324U, 9009U, 5120U, 
    17117U, 6183U, 9086U, 5193U, 17180U, 6256U, 8688U, 4918U, 
    16919U, 5981U, 9487U, 5290U, 17281U, 6340U, 9019U, 5135U, 
    17134U, 6198U, 19377U, 15729U, 15984U, 7958U, 9412U, 11208U, 
    18948U, 8150U, 11447U, 19273U, 54U, 12106U, 7097U, 16779U, 
    17830U, 14888U, 12032U, 16789U, 17862U, 5729U, 14470U, 5937U, 
    6655U, 1916U, 12330U, 5096U, 17103U, 14535U, 6159U, 411U, 
    12252U, 1982U, 5246U, 12048U, 5742U, 18903U, 15142U, 6668U, 
    582U, 2153U, 5427U, 15166U, 17401U, 14648U, 6477U, 393U, 
    1964U, 17190U, 276U, 1790U, 16985U, 249U, 1763U, 16929U, 
    468U, 2039U, 17291U, 208U, 1722U, 16865U, 218U, 1732U, 
    16873U, 336U, 1850U, 17049U, 438U, 2009U, 17236U, 229U, 
    1743U, 16882U, 448U, 2019U, 17244U, 373U, 1944U, 17143U, 
    258U, 1772U, 16971U, 383U, 1954U, 17172U, 239U, 1753U, 
    16911U, 458U, 2029U, 17273U, 355U, 1926U, 17127U, 3952U, 
    3791U, 3418U, 868U, 8418U, 19521U, 20088U, 20027U, 11525U, 
    4199U, 15401U, 4248U, 11568U, 4211U, 11578U, 4223U, 16252U, 
    16211U, 6814U, 19424U, 6831U, 17659U, 17640U, 4300U, 4313U, 
    17438U, 14667U, 6529U, 17525U, 15388U, 4235U, 17634U, 4287U, 
    4262U, 11512U, 16752U, 15382U, 17613U, 17660U, 17641U, 6620U, 
    6630U, 7942U, 9396U, 11182U, 18922U, 8134U, 9761U, 11431U, 
    19257U, 13483U, 5656U, 7085U, 6746U, 0U, 48U, 889U, 
    15408U, 8475U, 17554U, 4274U, 4187U, 6U, 59U, 895U, 
    15421U, 10630U, 17575U, 11977U, 17471U, 20048U, 17601U, 6806U, 
    9313U, 11110U, 18789U, 9678U, 11368U, 19174U, 9235U, 11032U, 
    18702U, 9600U, 11290U, 19096U, 10506U, 1282U, 10581U, 1334U, 
    18325U, 14966U, 10543U, 13422U, 11770U, 13680U, 16587U, 14206U, 
    10607U, 1370U, 10486U, 1268U, 16292U, 10520U, 1301U, 10594U, 
    1352U, 18337U, 14981U, 10569U, 13437U, 9205U, 11013U, 18672U, 
    9570U, 11271U, 19066U, 11781U, 13694U, 16598U, 14220U, 10617U, 
    1385U, 10534U, 1320U, 11934U, 19624U, 16688U, 19639U, 16697U, 
    771U, 17750U, 10087U, 17670U, 19932U, 8434U, 11929U, 757U, 
    802U, 17710U, 7074U, 143U, 17646U, 11944U, 764U, 17716U, 
    7460U, 20015U, 17693U, 19943U, 4038U, 4016U, 7108U, 12703U, 
    4594U, 11517U, 13491U, 5664U, 17439U, 8285U, 4744U, 14668U, 
    6530U, 19980U, 17526U, 16506U, 16272U, 17736U, 14839U, 13882U, 
    17744U, 14850U, 14109U, 18634U, 15080U, 18597U, 15054U, 11190U, 
    13470U, 19328U, 15175U, 18624U, 15067U, 18578U, 15029U, 11128U, 
    13458U, 18535U, 15007U, 16774U, 786U, 14715U, 2182U, 2692U, 
    9171U, 402U, 1973U, 14366U, 17206U, 14546U, 18607U, 8600U, 
    189U, 1703U, 4875U, 12935U, 16850U, 14449U, 5925U, 17942U, 
    8745U, 18047U, 9035U, 18385U, 9178U, 18645U, 8637U, 17979U, 
    9436U, 18972U, 364U, 12240U, 1935U, 793U, 12307U, 8707U, 
    18009U, 9126U, 18497U, 9059U, 18399U, 8661U, 17993U, 9460U, 
    18986U, 8721U, 18023U, 8995U, 18356U, 9809U, 517U, 2088U, 
    5344U, 14789U, 17348U, 14577U, 6394U, 19314U, 10884U, 18370U, 
    8508U, 15467U, 17848U, 15484U, 8944U, 18281U, 9140U, 18511U, 
    9365U, 18877U, 9741U, 19237U, 8953U, 18290U, 9149U, 18520U, 
    7735U, 8931U, 15697U, 15952U, 10850U, 18268U, 8500U, 17840U, 
    1904U, 5081U, 17093U, 6144U, 570U, 2141U, 5412U, 14996U, 
    17391U, 14635U, 6462U, 8607U, 17949U, 8562U, 17904U, 9823U, 
    19336U, 8544U, 17886U, 8988U, 18349U, 526U, 12277U, 2097U, 
    5356U, 17355U, 14587U, 6406U, 8578U, 17920U, 8974U, 346U, 
    1860U, 5025U, 13797U, 17057U, 14525U, 6088U, 18311U, 305U, 
    1819U, 5002U, 13136U, 17018U, 14491U, 6065U, 9028U, 18378U, 
    9513U, 19009U, 9538U, 19034U, 8752U, 18054U, 9042U, 18392U, 
    8644U, 17986U, 9443U, 18979U, 8714U, 18016U, 9133U, 18504U, 
    9530U, 477U, 2048U, 14706U, 17314U, 14556U, 19026U, 8571U, 
    170U, 1684U, 4863U, 12864U, 16835U, 14428U, 5913U, 17913U, 
    9067U, 18407U, 8669U, 18001U, 9468U, 18994U, 8729U, 18031U, 
    9002U, 18363U, 9375U, 18887U, 9751U, 19247U, 10898U, 18415U, 
    9215U, 18682U, 9580U, 19076U, 3712U, 9226U, 11023U, 18693U, 
    9591U, 11281U, 19087U, 9196U, 11004U, 18663U, 9561U, 11262U, 
    19057U, 8183U, 9801U, 11480U, 19306U, 7762U, 8981U, 10877U, 
    18318U, 7543U, 8629U, 10702U, 17971U, 7804U, 9164U, 10988U, 
    18542U, 16748U, 7989U, 15517U, 16083U, 9521U, 15564U, 16126U, 
    15712U, 15540U, 16104U, 15967U, 15610U, 16168U, 11239U, 15587U, 
    16147U, 19017U, 15634U, 16190U, 17757U, 7551U, 8737U, 10710U, 
    18039U, 14868U, 14404U, 11696U, 11708U, 16679U, 12502U, 2575U, 
    19674U, 4356U, 19687U, 12521U, 14411U, 7118U, 14304U, 14374U, 
    19358U, 15202U, 13600U, 8231U, 4655U, 8222U, 4636U, 16676U, 
    12494U, 2570U, 16496U, 12362U, 4345U, 5810U, 7112U, 6754U, 
    14298U, 13586U, 3762U, 2898U, 19476U, 19486U, 3695U, 3687U, 
    3901U, 3733U, 7126U, 1599U, 9859U, 12958U, 5479U, 12541U, 
    5569U, 19363U, 15210U, 6550U, 12710U, 4603U, 20011U, 2841U, 
    10003U, 13104U, 15303U, 8440U, 33U, 1547U, 12056U, 879U, 
    6714U, 1527U, 7581U, 8815U, 10740U, 18158U, 11792U, 8297U, 
    16616U, 75U, 1561U, 7530U, 8616U, 10689U, 17958U, 20095U, 
    2860U, 15350U, 10101U, 2206U, 9911U, 13014U, 12570U, 19354U, 
    15195U, 13159U, 20033U, 2847U, 10008U, 13112U, 15326U, 12418U, 
    4440U, 11897U, 8439U, 6776U, 9930U, 13028U, 5549U, 13777U, 
    6800U, 6839U, 1609U, 16314U, 16373U, 20105U, 20076U, 19552U, 
    7086U, 4576U, 6747U, 5691U, 87U, 1577U, 12138U, 19564U, 
    2780U, 15296U, 17818U, 12579U, 2620U, 65U, 12122U, 901U, 
    6730U, 1537U, 9995U, 13090U, 5579U, 13901U, 11994U, 2532U, 
    9934U, 13035U, 13805U, 12455U, 4485U, 12289U, 13819U, 8329U, 
    4802U, 14117U, 16715U, 2602U, 9969U, 13065U, 14352U, 14093U, 
    8323U, 14774U, 19368U, 99U, 12156U, 14420U, 15218U, 14876U, 
    6639U, 20067U, 3171U, 3235U, 3203U, 3252U, 3781U, 3522U, 
    3407U, 836U, 2796U, 812U, 2722U, 826U, 2786U, 866U, 
    3881U, 3538U, 3288U, 3350U, 8429U, 8777U, 4989U, 16963U, 
    6052U, 10940U, 18457U, 17548U, 16476U, 14056U, 14731U, 8167U, 
    9785U, 11464U, 19290U, 199U, 12188U, 1713U, 16364U, 13971U, 
    12943U, 10913U, 18430U, 16858U, 14460U, 11839U, 13708U, 16624U, 
    14234U, 11865U, 13740U, 16650U, 14266U, 8529U, 4851U, 16828U, 
    5901U, 7871U, 9296U, 11093U, 18763U, 8063U, 9661U, 11351U, 
    19157U, 7507U, 8563U, 10666U, 17905U, 9824U, 5440U, 17409U, 
    7950U, 9404U, 11200U, 6490U, 18940U, 8142U, 9769U, 11439U, 
    19265U, 1U, 49U, 12080U, 890U, 150U, 1638U, 12088U, 
    11536U, 12408U, 2222U, 16404U, 13983U, 13505U, 16222U, 12473U, 
    2550U, 16439U, 14007U, 13840U, 8516U, 4839U, 16821U, 5889U, 
    7853U, 9278U, 11075U, 18745U, 8045U, 9643U, 11333U, 19139U, 
    7490U, 8545U, 10649U, 17887U, 8989U, 5109U, 17111U, 7880U, 
    9305U, 11102U, 6172U, 18781U, 8072U, 9670U, 11360U, 19166U, 
    850U, 2825U, 8476U, 7458U, 17555U, 6579U, 4830U, 7820U, 
    9245U, 11042U, 18712U, 8012U, 9610U, 11300U, 19106U, 12380U, 
    4406U, 13892U, 17768U, 267U, 12200U, 1781U, 11611U, 2358U, 
    13546U, 16978U, 14481U, 1658U, 11589U, 2251U, 16799U, 314U, 
    12212U, 1828U, 11637U, 2388U, 13556U, 17025U, 14501U, 487U, 
    12265U, 2058U, 11670U, 2502U, 13566U, 17322U, 14567U, 1671U, 
    11600U, 2264U, 16810U, 325U, 12226U, 1839U, 11646U, 2399U, 
    13576U, 17034U, 14513U, 7471U, 8769U, 4976U, 16955U, 6039U, 
    10930U, 18447U, 17536U, 16466U, 14043U, 14722U, 8159U, 9777U, 
    11456U, 19282U, 180U, 12175U, 1694U, 16355U, 13959U, 12872U, 
    10904U, 18421U, 16843U, 14439U, 7U, 60U, 12114U, 896U, 
    160U, 1648U, 12097U, 11558U, 2244U, 16430U, 13995U, 13513U, 
    16279U, 13909U, 16233U, 2557U, 16448U, 14019U, 13857U, 17U, 
    111U, 911U, 22U, 116U, 916U, 10631U, 17576U, 6589U, 
    5634U, 11978U, 11877U, 13755U, 16662U, 14281U, 11726U, 13627U, 
    16543U, 14153U, 10317U, 13306U, 18614U, 1498U, 10367U, 1183U, 
    18816U, 1513U, 10950U, 18467U, 10555U, 10495U, 17472U, 16486U, 
    14069U, 16457U, 14031U, 14698U, 20049U, 15341U, 17596U, 6610U, 
    8191U, 9816U, 11488U, 19321U, 13798U, 5720U, 10235U, 1125U, 
    10922U, 18439U, 6807U, 10338U, 1169U, 3747U, 3874U, 3061U, 
    2880U, 3972U, 4105U, 4004U, 4157U, 7515U, 8586U, 10674U, 
    17928U, 7522U, 8593U, 10681U, 17935U, 198U, 12187U, 1712U, 
    16857U, 14459U, 179U, 12174U, 1693U, 16842U, 14438U, 16288U, 
    16684U, 2582U, 7664U, 19632U, 14312U, 5836U, 17782U, 15773U, 
    15857U, 16028U, 12532U, 4531U, 3942U, 3983U, 16685U, 12513U, 
    4521U, 2583U, 7665U, 5673U, 14313U, 5837U, 17783U, 15774U, 
    15858U, 16029U, 19543U, 2767U, 15281U, 4082U, 10225U, 13244U, 
    9979U, 13081U, 5558U, 8175U, 9793U, 11472U, 19298U, 7535U, 
    8621U, 10694U, 17963U, 7982U, 9506U, 11232U, 19002U, 10193U, 
    13211U, 7203U, 12716U, 16293U, 11755U, 7027U, 12633U, 13662U, 
    16572U, 7058U, 12670U, 14188U, 11852U, 13724U, 16637U, 14250U, 
    11741U, 7012U, 12615U, 13645U, 16558U, 7043U, 12652U, 14171U, 
    10137U, 13192U, 18090U, 14923U, 10112U, 13176U, 18119U, 14938U, 
    10125U, 1067U, 18075U, 1400U, 18102U, 1420U, 10031U, 9891U, 
    12989U, 5518U, 15186U, 13128U, 5597U, 6792U, 8447U, 1054U, 
    7260U, 7162U, 7375U, 10258U, 10153U, 10418U, 17824U, 12026U, 
    17856U, 12042U, 18897U, 17465U, 20042U, 17664U, 17687U, 19496U, 
    2736U, 8423U, 17542U, 11530U, 2216U, 16216U, 2544U, 7465U, 
    17530U, 11541U, 2229U, 16413U, 17477U, 20055U, 10187U, 7197U, 
    19661U, 2810U, 17676U, 284U, 1798U, 11618U, 2367U, 16991U, 
    496U, 2067U, 11677U, 2511U, 17329U, 421U, 1992U, 11655U, 
    2485U, 17221U, 17699U, 7444U, 12844U, 16343U, 13941U, 16709U, 
    2594U, 14343U, 5878U, 5854U, 5149U, 6212U, 10468U, 13410U, 
    7426U, 12820U, 10209U, 13233U, 7219U, 12738U, 9514U, 5319U, 
    17307U, 6369U, 11935U, 19625U, 16689U, 19640U, 16698U, 17751U, 
    14859U, 14326U, 1881U, 5052U, 17074U, 6115U, 547U, 2118U, 
    5383U, 14912U, 17372U, 14610U, 6433U, 5331U, 6381U, 3702U, 
    3078U, 7079U, 2890U, 7915U, 9349U, 11155U, 18861U, 8118U, 
    9725U, 11415U, 19221U, 7455U, 12354U, 4325U, 1604U, 9863U, 
    12965U, 5488U, 12858U, 4611U, 8342U, 8414U, 6769U, 9880U, 
    12972U, 5497U, 12902U, 6763U, 8497U, 16261U, 12483U, 4507U, 
    13865U, 5788U, 6822U, 38U, 1554U, 12064U, 884U, 6722U, 
    1532U, 17671U, 14797U, 11796U, 16620U, 81U, 1569U, 19933U, 
    7104U, 1593U, 12696U, 4585U, 10097U, 2200U, 13152U, 5617U, 
    5451U, 6501U, 19443U, 2653U, 9850U, 5465U, 6702U, 17424U, 
    6515U, 19417U, 2644U, 9835U, 6681U, 17415U, 8925U, 5014U, 
    17043U, 6077U, 16530U, 19537U, 10627U, 12390U, 4418U, 2211U, 
    9915U, 13021U, 5540U, 7560U, 10719U, 18062U, 16227U, 17729U, 
    14829U, 13848U, 10459U, 13398U, 7417U, 12808U, 10407U, 13372U, 
    18930U, 15153U, 10201U, 13222U, 7211U, 12727U, 10328U, 13320U, 
    18772U, 15094U, 10450U, 13386U, 7408U, 1040U, 10306U, 13292U, 
    7309U, 1009U, 18587U, 15041U, 10104U, 13165U, 7129U, 921U, 
    10274U, 13279U, 7277U, 962U, 18549U, 15017U, 10477U, 1254U, 
    7435U, 12832U, 10217U, 1112U, 7227U, 12749U, 13452U, 5626U, 
    7580U, 8814U, 10739U, 18157U, 7529U, 8615U, 10688U, 17957U, 
    11930U, 12437U, 4463U, 803U, 2713U, 7610U, 8829U, 10754U, 
    18172U, 17711U, 14813U, 7742U, 8938U, 10857U, 13783U, 5711U, 
    18275U, 17457U, 2614U, 14684U, 19547U, 2773U, 15288U, 20123U, 
    2872U, 15363U, 20037U, 2853U, 15333U, 9948U, 19532U, 15657U, 
    15803U, 15887U, 15912U, 16058U, 7687U, 8892U, 10817U, 18235U, 
    7967U, 9421U, 11217U, 18957U, 5332U, 6382U, 7075U, 7573U, 
    8807U, 10732U, 18150U, 7640U, 8859U, 10784U, 18202U, 7775U, 
    9105U, 10959U, 18476U, 17647U, 14781U, 7476U, 8523U, 10635U, 
    12689U, 17872U, 11945U, 12446U, 4474U, 7617U, 8836U, 10761U, 
    18179U, 7656U, 8875U, 10800U, 18218U, 7789U, 9119U, 10973U, 
    18490U, 17717U, 14821U, 7748U, 8960U, 10863U, 13790U, 18297U, 
    16286U, 13919U, 5799U, 6851U, 1620U, 16328U, 16388U, 7998U, 
    9547U, 11248U, 19043U, 7461U, 10169U, 1084U, 10284U, 1137U, 
    18558U, 1468U, 18134U, 1442U, 10242U, 13257U, 10347U, 13333U, 
    18798U, 15106U, 8107U, 9714U, 11404U, 19210U, 7931U, 9385U, 
    11171U, 18911U, 7897U, 9331U, 11137U, 18843U, 8089U, 9696U, 
    11386U, 19192U, 12550U, 4542U, 7179U, 934U, 7287U, 977U, 
    6559U, 10434U, 1228U, 7392U, 12786U, 10387U, 1198U, 7330U, 
    12760U, 7704U, 8909U, 10834U, 18252U, 8160U, 9778U, 11457U, 
    19283U, 12865U, 4619U, 20016U, 15310U, 93U, 1585U, 12147U, 
    17821U, 12587U, 4566U, 2625U, 70U, 12130U, 906U, 6738U, 
    1542U, 9999U, 13097U, 5588U, 11998U, 2538U, 9939U, 13043U, 
    13812U, 12464U, 4496U, 12298U, 13826U, 14124U, 16719U, 2608U, 
    9974U, 13073U, 14359U, 14101U, 5826U, 105U, 12165U, 14882U, 
    6647U, 8292U, 11506U, 5643U, 12880U, 4756U, 11900U, 13772U, 
    15670U, 15816U, 15900U, 15925U, 16071U, 3726U, 3089U, 3187U, 
    3893U, 3909U, 19468U, 19460U, 19967U, 19582U, 19998U, 19610U, 
    20144U, 20173U, 19954U, 19568U, 19985U, 19596U, 20129U, 20159U, 
    3219U, 3157U, 4048U, 3917U, 3962U, 3376U, 3803U, 3431U, 
    3391U, 3815U, 3458U, 3929U, 3993U, 4144U, 3071U, 4027U, 
    3164U, 4059U, 4118U, 3304U, 3363U, 11891U, 16723U, 16736U, 
    16534U, 11563U, 13521U, 14138U, 9901U, 11515U, 17581U, 14748U, 
    13489U, 17565U, 14740U, 12998U, 17722U, 10036U, 16267U, 13874U, 
    16538U, 14145U, 11583U, 13537U, 16703U, 14334U, 17461U, 11573U, 
    14757U, 13529U, 17629U, 14766U, 14691U, 9952U, 11520U, 13497U, 
    13058U, 16247U, 1869U, 5037U, 17064U, 6100U, 535U, 2106U, 
    5368U, 14901U, 17362U, 14597U, 6418U, 17587U, 17694U, 14805U, 
    19944U, 19517U, 20071U, 20187U, 17594U, 12U, 17607U, 7559U, 
    8785U, 10718U, 18061U, 17448U, 14676U, 6540U, 16349U, 13950U, 
    5866U, 10092U, 13144U, 5607U, 16693U, 12512U, 4520U, 2588U, 
    7671U, 5672U, 14319U, 5845U, 17788U, 15788U, 15872U, 16043U, 
    19542U, 2766U, 15280U, 4093U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 2228);
}

} // end llvm namespace 
#endif // GET_INSTRINFO_MC_DESC


#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1);
  ~MipsGenInstrInfo() override {}
};
} // end llvm namespace 
#endif // GET_INSTRINFO_HEADER


#ifdef GET_INSTRINFO_CTOR_DTOR
#undef GET_INSTRINFO_CTOR_DTOR
namespace llvm {
extern const MCInstrDesc MipsInsts[];
extern const unsigned MipsInstrNameIndices[];
extern const char MipsInstrNameData[];
MipsGenInstrInfo::MipsGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 2228);
}
} // end llvm namespace 
#endif // GET_INSTRINFO_CTOR_DTOR

#ifdef GET_INSTRINFO_OPERAND_ENUM
#undef GET_INSTRINFO_OPERAND_ENUM
namespace llvm {
namespace Mips {
namespace OpName { 
enum {
OPERAND_LAST
};
} // end namespace OpName
} // end namespace Mips
} // end namespace llvm
#endif //GET_INSTRINFO_OPERAND_ENUM
#ifdef GET_INSTRINFO_NAMED_OPS
#undef GET_INSTRINFO_NAMED_OPS
namespace llvm {
namespace Mips {
LLVM_READONLY
int16_t getNamedOperandIdx(uint16_t Opcode, uint16_t NamedIdx) {
  return -1;
}
} // end namespace Mips
} // end namespace llvm
#endif //GET_INSTRINFO_NAMED_OPS

#ifdef GET_INSTRINFO_OPERAND_TYPES_ENUM
#undef GET_INSTRINFO_OPERAND_TYPES_ENUM
namespace llvm {
namespace Mips {
namespace OpTypes { 
enum OperandType {
  InvertedImOperand = 0,
  InvertedImOperand64 = 1,
  PtrRC = 2,
  brtarget = 3,
  brtarget10_mm = 4,
  brtarget21 = 5,
  brtarget26 = 6,
  brtarget26_mm = 7,
  brtarget7_mm = 8,
  brtarget_mm = 9,
  calloffset16 = 10,
  calltarget = 11,
  calltarget_mm = 12,
  condcode = 13,
  cpinst_operand = 14,
  f32imm = 15,
  f64imm = 16,
  i16imm = 17,
  i1imm = 18,
  i32imm = 19,
  i64imm = 20,
  i8imm = 21,
  imm32 = 22,
  imm64 = 23,
  jmpoffset16 = 24,
  jmptarget = 25,
  jmptarget_mm = 26,
  li_simm7 = 27,
  mem = 28,
  mem16 = 29,
  mem16_ea = 30,
  mem_ea = 31,
  mem_mm_12 = 32,
  mem_mm_16 = 33,
  mem_mm_4 = 34,
  mem_mm_4_lsl1 = 35,
  mem_mm_4_lsl2 = 36,
  mem_mm_4sp = 37,
  mem_mm_9 = 38,
  mem_mm_gp_imm7_lsl2 = 39,
  mem_mm_sp_imm5_lsl2 = 40,
  mem_msa = 41,
  mem_simm11 = 42,
  mem_simm16 = 43,
  mem_simm9 = 44,
  mem_simm9gpr = 45,
  movep_regpair = 46,
  pcrel16 = 47,
  reglist = 48,
  reglist16 = 49,
  regpair = 50,
  simm10 = 51,
  simm10_64 = 52,
  simm11 = 53,
  simm12 = 54,
  simm16 = 55,
  simm16_64 = 56,
  simm18_lsl3 = 57,
  simm19_lsl2 = 58,
  simm20 = 59,
  simm23_lsl2 = 60,
  simm32 = 61,
  simm3_lsa2 = 62,
  simm4 = 63,
  simm5 = 64,
  simm6 = 65,
  simm7 = 66,
  simm9 = 67,
  simm9_addiusp = 68,
  size_ins = 69,
  uimm1 = 70,
  uimm10 = 71,
  uimm16 = 72,
  uimm16_64 = 73,
  uimm2 = 74,
  uimm20 = 75,
  uimm2_plus1 = 76,
  uimm3 = 77,
  uimm3_shift = 78,
  uimm4 = 79,
  uimm4_andi = 80,
  uimm4_ptr = 81,
  uimm5 = 82,
  uimm5_64 = 83,
  uimm5_64_report_uimm6 = 84,
  uimm5_lsl2 = 85,
  uimm5_plus1 = 86,
  uimm5_plus32 = 87,
  uimm5_plus32_normalize = 88,
  uimm5_plus32_normalize_64 = 89,
  uimm5_plus33 = 90,
  uimm6 = 91,
  uimm6_lsl2 = 92,
  uimm6_ptr = 93,
  uimm7 = 94,
  uimm8 = 95,
  uimmz = 96,
  vsplat_simm10 = 97,
  vsplat_simm5 = 98,
  vsplat_uimm1 = 99,
  vsplat_uimm2 = 100,
  vsplat_uimm3 = 101,
  vsplat_uimm4 = 102,
  vsplat_uimm5 = 103,
  vsplat_uimm6 = 104,
  vsplat_uimm8 = 105,
  OPERAND_TYPE_LIST_END
};
} // end namespace OpTypes
} // end namespace Mips
} // end namespace llvm
#endif // GET_INSTRINFO_OPERAND_TYPES_ENUM
#ifdef GET_INSTRMAP_INFO
#undef GET_INSTRMAP_INFO
namespace llvm {

namespace Mips {

enum Arch {
	Arch_dsp,
	Arch_mmdsp,
	Arch_mipsr6,
	Arch_micromipsr6,
	Arch_se,
	Arch_micromips
};

// Dsp2MicroMips
LLVM_READONLY
int Dsp2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Dsp2MicroMipsTable[][3] = {
  { Mips::ABSQ_S_PH, Mips::ABSQ_S_PH, Mips::ABSQ_S_PH_MM },
  { Mips::ABSQ_S_QB, Mips::ABSQ_S_QB, Mips::ABSQ_S_QB_MMR2 },
  { Mips::ABSQ_S_W, Mips::ABSQ_S_W, Mips::ABSQ_S_W_MM },
  { Mips::ADDQH_PH, Mips::ADDQH_PH, Mips::ADDQH_PH_MMR2 },
  { Mips::ADDQH_R_PH, Mips::ADDQH_R_PH, Mips::ADDQH_R_PH_MMR2 },
  { Mips::ADDQH_R_W, Mips::ADDQH_R_W, Mips::ADDQH_R_W_MMR2 },
  { Mips::ADDQH_W, Mips::ADDQH_W, Mips::ADDQH_W_MMR2 },
  { Mips::ADDQ_PH, Mips::ADDQ_PH, Mips::ADDQ_PH_MM },
  { Mips::ADDQ_S_PH, Mips::ADDQ_S_PH, Mips::ADDQ_S_PH_MM },
  { Mips::ADDQ_S_W, Mips::ADDQ_S_W, Mips::ADDQ_S_W_MM },
  { Mips::ADDSC, Mips::ADDSC, Mips::ADDSC_MM },
  { Mips::ADDUH_QB, Mips::ADDUH_QB, Mips::ADDUH_QB_MMR2 },
  { Mips::ADDUH_R_QB, Mips::ADDUH_R_QB, Mips::ADDUH_R_QB_MMR2 },
  { Mips::ADDU_PH, Mips::ADDU_PH, Mips::ADDU_PH_MMR2 },
  { Mips::ADDU_QB, Mips::ADDU_QB, Mips::ADDU_QB_MM },
  { Mips::ADDU_S_PH, Mips::ADDU_S_PH, Mips::ADDU_S_PH_MMR2 },
  { Mips::ADDU_S_QB, Mips::ADDU_S_QB, Mips::ADDU_S_QB_MM },
  { Mips::ADDWC, Mips::ADDWC, Mips::ADDWC_MM },
  { Mips::DPAQX_SA_W_PH, Mips::DPAQX_SA_W_PH, Mips::DPAQX_SA_W_PH_MMR2 },
  { Mips::DPAQX_S_W_PH, Mips::DPAQX_S_W_PH, Mips::DPAQX_S_W_PH_MMR2 },
  { Mips::DPAQ_SA_L_W, Mips::DPAQ_SA_L_W, Mips::DPAQ_SA_L_W_MM },
  { Mips::DPAQ_S_W_PH, Mips::DPAQ_S_W_PH, Mips::DPAQ_S_W_PH_MM },
  { Mips::DPAU_H_QBL, Mips::DPAU_H_QBL, Mips::DPAU_H_QBL_MM },
  { Mips::DPAU_H_QBR, Mips::DPAU_H_QBR, Mips::DPAU_H_QBR_MM },
  { Mips::DPAX_W_PH, Mips::DPAX_W_PH, Mips::DPAX_W_PH_MMR2 },
  { Mips::DPA_W_PH, Mips::DPA_W_PH, Mips::DPA_W_PH_MMR2 },
  { Mips::DPSQX_SA_W_PH, Mips::DPSQX_SA_W_PH, Mips::DPSQX_SA_W_PH_MMR2 },
  { Mips::DPSQX_S_W_PH, Mips::DPSQX_S_W_PH, Mips::DPSQX_S_W_PH_MMR2 },
  { Mips::DPSQ_SA_L_W, Mips::DPSQ_SA_L_W, Mips::DPSQ_SA_L_W_MM },
  { Mips::DPSQ_S_W_PH, Mips::DPSQ_S_W_PH, Mips::DPSQ_S_W_PH_MM },
  { Mips::DPSU_H_QBL, Mips::DPSU_H_QBL, Mips::DPSU_H_QBL_MM },
  { Mips::DPSU_H_QBR, Mips::DPSU_H_QBR, Mips::DPSU_H_QBR_MM },
  { Mips::DPSX_W_PH, Mips::DPSX_W_PH, Mips::DPSX_W_PH_MMR2 },
  { Mips::DPS_W_PH, Mips::DPS_W_PH, Mips::DPS_W_PH_MMR2 },
  { Mips::EXTP, Mips::EXTP, Mips::EXTP_MM },
  { Mips::EXTPDP, Mips::EXTPDP, Mips::EXTPDP_MM },
  { Mips::EXTPDPV, Mips::EXTPDPV, Mips::EXTPDPV_MM },
  { Mips::EXTPV, Mips::EXTPV, Mips::EXTPV_MM },
  { Mips::EXTRV_RS_W, Mips::EXTRV_RS_W, Mips::EXTRV_RS_W_MM },
  { Mips::EXTRV_R_W, Mips::EXTRV_R_W, Mips::EXTRV_R_W_MM },
  { Mips::EXTRV_S_H, Mips::EXTRV_S_H, Mips::EXTRV_S_H_MM },
  { Mips::EXTRV_W, Mips::EXTRV_W, Mips::EXTRV_W_MM },
  { Mips::EXTR_RS_W, Mips::EXTR_RS_W, Mips::EXTR_RS_W_MM },
  { Mips::EXTR_R_W, Mips::EXTR_R_W, Mips::EXTR_R_W_MM },
  { Mips::EXTR_S_H, Mips::EXTR_S_H, Mips::EXTR_S_H_MM },
  { Mips::EXTR_W, Mips::EXTR_W, Mips::EXTR_W_MM },
  { Mips::INSV, Mips::INSV, Mips::INSV_MM },
  { Mips::LBUX, Mips::LBUX, Mips::LBUX_MM },
  { Mips::LHX, Mips::LHX, Mips::LHX_MM },
  { Mips::LWX, Mips::LWX, Mips::LWX_MM },
  { Mips::MADDU_DSP, Mips::MADDU_DSP, Mips::MADDU_DSP_MM },
  { Mips::MADD_DSP, Mips::MADD_DSP, Mips::MADD_DSP_MM },
  { Mips::MAQ_SA_W_PHL, Mips::MAQ_SA_W_PHL, Mips::MAQ_SA_W_PHL_MM },
  { Mips::MAQ_SA_W_PHR, Mips::MAQ_SA_W_PHR, Mips::MAQ_SA_W_PHR_MM },
  { Mips::MAQ_S_W_PHL, Mips::MAQ_S_W_PHL, Mips::MAQ_S_W_PHL_MM },
  { Mips::MAQ_S_W_PHR, Mips::MAQ_S_W_PHR, Mips::MAQ_S_W_PHR_MM },
  { Mips::MFHI_DSP, Mips::MFHI_DSP, Mips::MFHI_DSP_MM },
  { Mips::MFLO_DSP, Mips::MFLO_DSP, Mips::MFLO_DSP_MM },
  { Mips::MSUBU_DSP, Mips::MSUBU_DSP, Mips::MSUBU_DSP_MM },
  { Mips::MSUB_DSP, Mips::MSUB_DSP, Mips::MSUB_DSP_MM },
  { Mips::MTHI_DSP, Mips::MTHI_DSP, Mips::MTHI_DSP_MM },
  { Mips::MTHLIP, Mips::MTHLIP, Mips::MTHLIP_MM },
  { Mips::MTLO_DSP, Mips::MTLO_DSP, Mips::MTLO_DSP_MM },
  { Mips::MULEQ_S_W_PHL, Mips::MULEQ_S_W_PHL, Mips::MULEQ_S_W_PHL_MM },
  { Mips::MULEQ_S_W_PHR, Mips::MULEQ_S_W_PHR, Mips::MULEQ_S_W_PHR_MM },
  { Mips::MULEU_S_PH_QBL, Mips::MULEU_S_PH_QBL, Mips::MULEU_S_PH_QBL_MM },
  { Mips::MULEU_S_PH_QBR, Mips::MULEU_S_PH_QBR, Mips::MULEU_S_PH_QBR_MM },
  { Mips::MULQ_RS_PH, Mips::MULQ_RS_PH, Mips::MULQ_RS_PH_MM },
  { Mips::MULQ_RS_W, Mips::MULQ_RS_W, Mips::MULQ_RS_W_MMR2 },
  { Mips::MULQ_S_PH, Mips::MULQ_S_PH, Mips::MULQ_S_PH_MMR2 },
  { Mips::MULQ_S_W, Mips::MULQ_S_W, Mips::MULQ_S_W_MMR2 },
  { Mips::MULTU_DSP, Mips::MULTU_DSP, Mips::MULTU_DSP_MM },
  { Mips::MULT_DSP, Mips::MULT_DSP, Mips::MULT_DSP_MM },
  { Mips::MUL_PH, Mips::MUL_PH, Mips::MUL_PH_MMR2 },
  { Mips::MUL_S_PH, Mips::MUL_S_PH, Mips::MUL_S_PH_MMR2 },
  { Mips::PACKRL_PH, Mips::PACKRL_PH, Mips::PACKRL_PH_MM },
  { Mips::PICK_PH, Mips::PICK_PH, Mips::PICK_PH_MM },
  { Mips::PICK_QB, Mips::PICK_QB, Mips::PICK_QB_MM },
  { Mips::PRECEQU_PH_QBL, Mips::PRECEQU_PH_QBL, Mips::PRECEQU_PH_QBL_MM },
  { Mips::PRECEQU_PH_QBLA, Mips::PRECEQU_PH_QBLA, Mips::PRECEQU_PH_QBLA_MM },
  { Mips::PRECEQU_PH_QBR, Mips::PRECEQU_PH_QBR, Mips::PRECEQU_PH_QBR_MM },
  { Mips::PRECEQU_PH_QBRA, Mips::PRECEQU_PH_QBRA, Mips::PRECEQU_PH_QBRA_MM },
  { Mips::PRECEQ_W_PHL, Mips::PRECEQ_W_PHL, Mips::PRECEQ_W_PHL_MM },
  { Mips::PRECEQ_W_PHR, Mips::PRECEQ_W_PHR, Mips::PRECEQ_W_PHR_MM },
  { Mips::PRECEU_PH_QBL, Mips::PRECEU_PH_QBL, Mips::PRECEU_PH_QBL_MM },
  { Mips::PRECEU_PH_QBLA, Mips::PRECEU_PH_QBLA, Mips::PRECEU_PH_QBLA_MM },
  { Mips::PRECEU_PH_QBR, Mips::PRECEU_PH_QBR, Mips::PRECEU_PH_QBR_MM },
  { Mips::PRECEU_PH_QBRA, Mips::PRECEU_PH_QBRA, Mips::PRECEU_PH_QBRA_MM },
  { Mips::PRECRQU_S_QB_PH, Mips::PRECRQU_S_QB_PH, Mips::PRECRQU_S_QB_PH_MM },
  { Mips::PRECRQ_PH_W, Mips::PRECRQ_PH_W, Mips::PRECRQ_PH_W_MM },
  { Mips::PRECRQ_QB_PH, Mips::PRECRQ_QB_PH, Mips::PRECRQ_QB_PH_MM },
  { Mips::PRECRQ_RS_PH_W, Mips::PRECRQ_RS_PH_W, Mips::PRECRQ_RS_PH_W_MM },
  { Mips::PRECR_QB_PH, Mips::PRECR_QB_PH, Mips::PRECR_QB_PH_MMR2 },
  { Mips::PRECR_SRA_PH_W, Mips::PRECR_SRA_PH_W, Mips::PRECR_SRA_PH_W_MMR2 },
  { Mips::PRECR_SRA_R_PH_W, Mips::PRECR_SRA_R_PH_W, Mips::PRECR_SRA_R_PH_W_MMR2 },
  { Mips::PREPEND, Mips::PREPEND, Mips::PREPEND_MMR2 },
  { Mips::RADDU_W_QB, Mips::RADDU_W_QB, Mips::RADDU_W_QB_MM },
  { Mips::RDDSP, Mips::RDDSP, Mips::RDDSP_MM },
  { Mips::REPLV_PH, Mips::REPLV_PH, Mips::REPLV_PH_MM },
  { Mips::REPLV_QB, Mips::REPLV_QB, Mips::REPLV_QB_MM },
  { Mips::REPL_PH, Mips::REPL_PH, Mips::REPL_PH_MM },
  { Mips::REPL_QB, Mips::REPL_QB, Mips::REPL_QB_MM },
  { Mips::SHILO, Mips::SHILO, Mips::SHILO_MM },
  { Mips::SHILOV, Mips::SHILOV, Mips::SHILOV_MM },
  { Mips::SHLLV_PH, Mips::SHLLV_PH, Mips::SHLLV_PH_MM },
  { Mips::SHLLV_QB, Mips::SHLLV_QB, Mips::SHLLV_QB_MM },
  { Mips::SHLLV_S_PH, Mips::SHLLV_S_PH, Mips::SHLLV_S_PH_MM },
  { Mips::SHLLV_S_W, Mips::SHLLV_S_W, Mips::SHLLV_S_W_MM },
  { Mips::SHLL_PH, Mips::SHLL_PH, Mips::SHLL_PH_MM },
  { Mips::SHLL_QB, Mips::SHLL_QB, Mips::SHLL_QB_MM },
  { Mips::SHLL_S_PH, Mips::SHLL_S_PH, Mips::SHLL_S_PH_MM },
  { Mips::SHLL_S_W, Mips::SHLL_S_W, Mips::SHLL_S_W_MM },
  { Mips::SHRAV_PH, Mips::SHRAV_PH, Mips::SHRAV_PH_MM },
  { Mips::SHRAV_QB, Mips::SHRAV_QB, Mips::SHRAV_QB_MMR2 },
  { Mips::SHRAV_R_PH, Mips::SHRAV_R_PH, Mips::SHRAV_R_PH_MM },
  { Mips::SHRAV_R_QB, Mips::SHRAV_R_QB, Mips::SHRAV_R_QB_MMR2 },
  { Mips::SHRAV_R_W, Mips::SHRAV_R_W, Mips::SHRAV_R_W_MM },
  { Mips::SHRA_PH, Mips::SHRA_PH, Mips::SHRA_PH_MM },
  { Mips::SHRA_QB, Mips::SHRA_QB, Mips::SHRA_QB_MMR2 },
  { Mips::SHRA_R_PH, Mips::SHRA_R_PH, Mips::SHRA_R_PH_MM },
  { Mips::SHRA_R_QB, Mips::SHRA_R_QB, Mips::SHRA_R_QB_MMR2 },
  { Mips::SHRA_R_W, Mips::SHRA_R_W, Mips::SHRA_R_W_MM },
  { Mips::SHRLV_PH, Mips::SHRLV_PH, Mips::SHRLV_PH_MMR2 },
  { Mips::SHRLV_QB, Mips::SHRLV_QB, Mips::SHRLV_QB_MM },
  { Mips::SHRL_PH, Mips::SHRL_PH, Mips::SHRL_PH_MMR2 },
  { Mips::SHRL_QB, Mips::SHRL_QB, Mips::SHRL_QB_MM },
  { Mips::SUBQH_PH, Mips::SUBQH_PH, Mips::SUBQH_PH_MMR2 },
  { Mips::SUBQH_R_PH, Mips::SUBQH_R_PH, Mips::SUBQH_R_PH_MMR2 },
  { Mips::SUBQH_R_W, Mips::SUBQH_R_W, Mips::SUBQH_R_W_MMR2 },
  { Mips::SUBQH_W, Mips::SUBQH_W, Mips::SUBQH_W_MMR2 },
  { Mips::SUBQ_PH, Mips::SUBQ_PH, Mips::SUBQ_PH_MM },
  { Mips::SUBQ_S_PH, Mips::SUBQ_S_PH, Mips::SUBQ_S_PH_MM },
  { Mips::SUBQ_S_W, Mips::SUBQ_S_W, Mips::SUBQ_S_W_MM },
  { Mips::SUBUH_QB, Mips::SUBUH_QB, Mips::SUBUH_QB_MMR2 },
  { Mips::SUBUH_R_QB, Mips::SUBUH_R_QB, Mips::SUBUH_R_QB_MMR2 },
  { Mips::SUBU_PH, Mips::SUBU_PH, Mips::SUBU_PH_MMR2 },
  { Mips::SUBU_QB, Mips::SUBU_QB, Mips::SUBU_QB_MM },
  { Mips::SUBU_S_PH, Mips::SUBU_S_PH, Mips::SUBU_S_PH_MMR2 },
  { Mips::SUBU_S_QB, Mips::SUBU_S_QB, Mips::SUBU_S_QB_MM },
}; // End of Dsp2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 139;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Dsp2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Dsp2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_dsp)
    return Dsp2MicroMipsTable[mid][1];
  if (inArch == Arch_mmdsp)
    return Dsp2MicroMipsTable[mid][2];
  return -1;}

// MipsR62MicroMipsR6
LLVM_READONLY
int MipsR62MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t MipsR62MicroMipsR6Table[][3] = {
  { Mips::ADDIUPC, Mips::ADDIUPC, Mips::ADDIUPC_MMR6 },
  { Mips::ALIGN, Mips::ALIGN, Mips::ALIGN_MMR6 },
  { Mips::ALUIPC, Mips::ALUIPC, Mips::ALUIPC_MMR6 },
  { Mips::AUI, Mips::AUI, Mips::AUI_MMR6 },
  { Mips::AUIPC, Mips::AUIPC, Mips::AUIPC_MMR6 },
  { Mips::BALC, Mips::BALC, Mips::BALC_MMR6 },
  { Mips::BC, Mips::BC, Mips::BC_MMR6 },
  { Mips::BEQZALC, Mips::BEQZALC, Mips::BEQZALC_MMR6 },
  { Mips::BGEZALC, Mips::BGEZALC, Mips::BGEZALC_MMR6 },
  { Mips::BGTZALC, Mips::BGTZALC, Mips::BGTZALC_MMR6 },
  { Mips::BITSWAP, Mips::BITSWAP, Mips::BITSWAP_MMR6 },
  { Mips::BLEZALC, Mips::BLEZALC, Mips::BLEZALC_MMR6 },
  { Mips::BLTZALC, Mips::BLTZALC, Mips::BLTZALC_MMR6 },
  { Mips::BNEZALC, Mips::BNEZALC, Mips::BNEZALC_MMR6 },
  { Mips::CACHE_R6, Mips::CACHE_R6, Mips::CACHE_MMR6 },
  { Mips::CLO_R6, Mips::CLO_R6, Mips::CLO_MMR6 },
  { Mips::CLZ_R6, Mips::CLZ_R6, Mips::CLZ_MMR6 },
  { Mips::DIV, Mips::DIV, Mips::DIV_MMR6 },
  { Mips::DIVU, Mips::DIVU, Mips::DIVU_MMR6 },
  { Mips::JIALC, Mips::JIALC, Mips::JIALC_MMR6 },
  { Mips::JIC, Mips::JIC, Mips::JIC_MMR6 },
  { Mips::LSA_R6, Mips::LSA_R6, Mips::LSA_MMR6 },
  { Mips::LWPC, Mips::LWPC, Mips::LWPC_MMR6 },
  { Mips::MOD, Mips::MOD, Mips::MOD_MMR6 },
  { Mips::MODU, Mips::MODU, Mips::MODU_MMR6 },
  { Mips::MUH, Mips::MUH, Mips::MUH_MMR6 },
  { Mips::MUHU, Mips::MUHU, Mips::MUHU_MMR6 },
  { Mips::MULU, Mips::MULU, Mips::MULU_MMR6 },
  { Mips::MUL_R6, Mips::MUL_R6, Mips::MUL_MMR6 },
  { Mips::PREF_R6, Mips::PREF_R6, Mips::PREF_MMR6 },
  { Mips::SELEQZ, Mips::SELEQZ, Mips::SELEQZ_MMR6 },
  { Mips::SELNEZ, Mips::SELNEZ, Mips::SELNEZ_MMR6 },
}; // End of MipsR62MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 32;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == MipsR62MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < MipsR62MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_mipsr6)
    return MipsR62MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return MipsR62MicroMipsR6Table[mid][2];
  return -1;}

// Std2MicroMips
LLVM_READONLY
int Std2MicroMips(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsTable[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MM },
  { Mips::ADDi, Mips::ADDi, Mips::ADDi_MM },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDiu_MM },
  { Mips::ADDu, Mips::ADDu, Mips::ADDu_MM },
  { Mips::AND, Mips::AND, Mips::AND_MM },
  { Mips::ANDi, Mips::ANDi, Mips::ANDi_MM },
  { Mips::BC1F, Mips::BC1F, Mips::BC1F_MM },
  { Mips::BC1FL, Mips::BC1FL, (uint16_t)-1U },
  { Mips::BC1T, Mips::BC1T, Mips::BC1T_MM },
  { Mips::BC1TL, Mips::BC1TL, (uint16_t)-1U },
  { Mips::BEQ, Mips::BEQ, Mips::BEQ_MM },
  { Mips::BEQL, Mips::BEQL, (uint16_t)-1U },
  { Mips::BGEZ, Mips::BGEZ, Mips::BGEZ_MM },
  { Mips::BGEZAL, Mips::BGEZAL, Mips::BGEZAL_MM },
  { Mips::BGEZALL, Mips::BGEZALL, (uint16_t)-1U },
  { Mips::BGEZL, Mips::BGEZL, (uint16_t)-1U },
  { Mips::BGTZ, Mips::BGTZ, Mips::BGTZ_MM },
  { Mips::BGTZL, Mips::BGTZL, (uint16_t)-1U },
  { Mips::BLEZ, Mips::BLEZ, Mips::BLEZ_MM },
  { Mips::BLEZL, Mips::BLEZL, (uint16_t)-1U },
  { Mips::BLTZ, Mips::BLTZ, Mips::BLTZ_MM },
  { Mips::BLTZAL, Mips::BLTZAL, Mips::BLTZAL_MM },
  { Mips::BLTZALL, Mips::BLTZALL, (uint16_t)-1U },
  { Mips::BLTZL, Mips::BLTZL, (uint16_t)-1U },
  { Mips::BNE, Mips::BNE, Mips::BNE_MM },
  { Mips::BNEL, Mips::BNEL, (uint16_t)-1U },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MM },
  { Mips::CACHE, Mips::CACHE, Mips::CACHE_MM },
  { Mips::CEIL_W_D32, Mips::CEIL_W_D32, Mips::CEIL_W_MM },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MM },
  { Mips::CFC1, Mips::CFC1, Mips::CFC1_MM },
  { Mips::CLO, Mips::CLO, Mips::CLO_MM },
  { Mips::CLZ, Mips::CLZ, Mips::CLZ_MM },
  { Mips::CTC1, Mips::CTC1, Mips::CTC1_MM },
  { Mips::CVT_D32_S, Mips::CVT_D32_S, Mips::CVT_D_S_MM },
  { Mips::CVT_D32_W, Mips::CVT_D32_W, Mips::CVT_D32_W_MM },
  { Mips::CVT_L_D64, Mips::CVT_L_D64, Mips::CVT_L_D64_MM },
  { Mips::CVT_L_S, Mips::CVT_L_S, Mips::CVT_L_S_MM },
  { Mips::CVT_S_D32, Mips::CVT_S_D32, Mips::CVT_S_D32_MM },
  { Mips::CVT_S_W, Mips::CVT_S_W, Mips::CVT_S_W_MM },
  { Mips::CVT_W_D32, Mips::CVT_W_D32, Mips::CVT_W_MM },
  { Mips::CVT_W_S, Mips::CVT_W_S, Mips::CVT_W_S_MM },
  { Mips::DERET, Mips::DERET, Mips::DERET_MM },
  { Mips::DI, Mips::DI, Mips::DI_MM },
  { Mips::EHB, Mips::EHB, Mips::EHB_MM },
  { Mips::EI, Mips::EI, Mips::EI_MM },
  { Mips::ERET, Mips::ERET, Mips::ERET_MM },
  { Mips::ERETNC, Mips::ERETNC, (uint16_t)-1U },
  { Mips::EXT, Mips::EXT, Mips::EXT_MM },
  { Mips::FABS_D32, Mips::FABS_D32, Mips::FABS_MM },
  { Mips::FABS_S, Mips::FABS_S, Mips::FABS_S_MM },
  { Mips::FADD_D32, Mips::FADD_D32, Mips::FADD_MM },
  { Mips::FADD_S, Mips::FADD_S, Mips::FADD_S_MM },
  { Mips::FCMP_D32, Mips::FCMP_D32, Mips::FCMP_D32_MM },
  { Mips::FCMP_S32, Mips::FCMP_S32, Mips::FCMP_S32_MM },
  { Mips::FDIV_D32, Mips::FDIV_D32, Mips::FDIV_MM },
  { Mips::FDIV_S, Mips::FDIV_S, Mips::FDIV_S_MM },
  { Mips::FLOOR_W_D32, Mips::FLOOR_W_D32, Mips::FLOOR_W_MM },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MM },
  { Mips::FMOV_D32, Mips::FMOV_D32, Mips::FMOV_D32_MM },
  { Mips::FMOV_S, Mips::FMOV_S, Mips::FMOV_S_MM },
  { Mips::FMUL_D32, Mips::FMUL_D32, Mips::FMUL_MM },
  { Mips::FMUL_S, Mips::FMUL_S, Mips::FMUL_S_MM },
  { Mips::FNEG_D32, Mips::FNEG_D32, Mips::FNEG_MM },
  { Mips::FNEG_S, Mips::FNEG_S, Mips::FNEG_S_MM },
  { Mips::FSQRT_D32, Mips::FSQRT_D32, Mips::FSQRT_MM },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::FSQRT_S_MM },
  { Mips::FSUB_D32, Mips::FSUB_D32, Mips::FSUB_MM },
  { Mips::FSUB_S, Mips::FSUB_S, Mips::FSUB_S_MM },
  { Mips::INS, Mips::INS, Mips::INS_MM },
  { Mips::J, Mips::J, Mips::J_MM },
  { Mips::JAL, Mips::JAL, Mips::JAL_MM },
  { Mips::JALX, Mips::JALX, Mips::JALX_MM },
  { Mips::JR, Mips::JR, Mips::JR_MM },
  { Mips::LB, Mips::LB, Mips::LB_MM },
  { Mips::LBu, Mips::LBu, Mips::LBu_MM },
  { Mips::LDC1, Mips::LDC1, Mips::LDC1_MM },
  { Mips::LEA_ADDiu, Mips::LEA_ADDiu, Mips::LEA_ADDiu_MM },
  { Mips::LH, Mips::LH, Mips::LH_MM },
  { Mips::LHu, Mips::LHu, Mips::LHu_MM },
  { Mips::LUXC1, Mips::LUXC1, Mips::LUXC1_MM },
  { Mips::LUi, Mips::LUi, Mips::LUi_MM },
  { Mips::LW, Mips::LW, Mips::LW_MM },
  { Mips::LWC1, Mips::LWC1, Mips::LWC1_MM },
  { Mips::LWXC1, Mips::LWXC1, Mips::LWXC1_MM },
  { Mips::MADD, Mips::MADD, Mips::MADD_MM },
  { Mips::MADDU, Mips::MADDU, Mips::MADDU_MM },
  { Mips::MADD_D32, Mips::MADD_D32, Mips::MADD_D32_MM },
  { Mips::MADD_S, Mips::MADD_S, Mips::MADD_S_MM },
  { Mips::MFC1, Mips::MFC1, Mips::MFC1_MM },
  { Mips::MFHC1_D32, Mips::MFHC1_D32, Mips::MFHC1_MM },
  { Mips::MFHI, Mips::MFHI, Mips::MFHI_MM },
  { Mips::MFLO, Mips::MFLO, Mips::MFLO_MM },
  { Mips::MOVF_D32, Mips::MOVF_D32, Mips::MOVF_D32_MM },
  { Mips::MOVF_I, Mips::MOVF_I, Mips::MOVF_I_MM },
  { Mips::MOVF_S, Mips::MOVF_S, Mips::MOVF_S_MM },
  { Mips::MOVN_I_D32, Mips::MOVN_I_D32, Mips::MOVN_I_D32_MM },
  { Mips::MOVN_I_I, Mips::MOVN_I_I, Mips::MOVN_I_MM },
  { Mips::MOVN_I_S, Mips::MOVN_I_S, Mips::MOVN_I_S_MM },
  { Mips::MOVT_D32, Mips::MOVT_D32, Mips::MOVT_D32_MM },
  { Mips::MOVT_I, Mips::MOVT_I, Mips::MOVT_I_MM },
  { Mips::MOVT_S, Mips::MOVT_S, Mips::MOVT_S_MM },
  { Mips::MOVZ_I_D32, Mips::MOVZ_I_D32, Mips::MOVZ_I_D32_MM },
  { Mips::MOVZ_I_I, Mips::MOVZ_I_I, Mips::MOVZ_I_MM },
  { Mips::MOVZ_I_S, Mips::MOVZ_I_S, Mips::MOVZ_I_S_MM },
  { Mips::MSUB, Mips::MSUB, Mips::MSUB_MM },
  { Mips::MSUBU, Mips::MSUBU, Mips::MSUBU_MM },
  { Mips::MSUB_D32, Mips::MSUB_D32, Mips::MSUB_D32_MM },
  { Mips::MSUB_S, Mips::MSUB_S, Mips::MSUB_S_MM },
  { Mips::MTC1, Mips::MTC1, Mips::MTC1_MM },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_MM },
  { Mips::MTHI, Mips::MTHI, Mips::MTHI_MM },
  { Mips::MTLO, Mips::MTLO, Mips::MTLO_MM },
  { Mips::MUL, Mips::MUL, Mips::MUL_MM },
  { Mips::MULT, Mips::MULT, Mips::MULT_MM },
  { Mips::MULTu, Mips::MULTu, Mips::MULTu_MM },
  { Mips::NMADD_D32, Mips::NMADD_D32, Mips::NMADD_D32_MM },
  { Mips::NMADD_S, Mips::NMADD_S, Mips::NMADD_S_MM },
  { Mips::NMSUB_D32, Mips::NMSUB_D32, Mips::NMSUB_D32_MM },
  { Mips::NMSUB_S, Mips::NMSUB_S, Mips::NMSUB_S_MM },
  { Mips::NOR, Mips::NOR, Mips::NOR_MM },
  { Mips::OR, Mips::OR, Mips::OR_MM },
  { Mips::ORi, Mips::ORi, Mips::ORi_MM },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MM },
  { Mips::PREF, Mips::PREF, Mips::PREF_MM },
  { Mips::RDHWR, Mips::RDHWR, Mips::RDHWR_MM },
  { Mips::ROTR, Mips::ROTR, Mips::ROTR_MM },
  { Mips::ROTRV, Mips::ROTRV, Mips::ROTRV_MM },
  { Mips::ROUND_W_D32, Mips::ROUND_W_D32, Mips::ROUND_W_MM },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MM },
  { Mips::SB, Mips::SB, Mips::SB_MM },
  { Mips::SDBBP, Mips::SDBBP, Mips::SDBBP_MM },
  { Mips::SDC1, Mips::SDC1, Mips::SDC1_MM },
  { Mips::SDIV, Mips::SDIV, Mips::SDIV_MM },
  { Mips::SEB, Mips::SEB, Mips::SEB_MM },
  { Mips::SEH, Mips::SEH, Mips::SEH_MM },
  { Mips::SH, Mips::SH, Mips::SH_MM },
  { Mips::SLL, Mips::SLL, Mips::SLL_MM },
  { Mips::SLLV, Mips::SLLV, Mips::SLLV_MM },
  { Mips::SLT, Mips::SLT, Mips::SLT_MM },
  { Mips::SLTi, Mips::SLTi, Mips::SLTi_MM },
  { Mips::SLTiu, Mips::SLTiu, Mips::SLTiu_MM },
  { Mips::SLTu, Mips::SLTu, Mips::SLTu_MM },
  { Mips::SRA, Mips::SRA, Mips::SRA_MM },
  { Mips::SRAV, Mips::SRAV, Mips::SRAV_MM },
  { Mips::SRL, Mips::SRL, Mips::SRL_MM },
  { Mips::SRLV, Mips::SRLV, Mips::SRLV_MM },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MM },
  { Mips::SUB, Mips::SUB, Mips::SUB_MM },
  { Mips::SUBu, Mips::SUBu, Mips::SUBu_MM },
  { Mips::SUXC1, Mips::SUXC1, Mips::SUXC1_MM },
  { Mips::SW, Mips::SW, Mips::SW_MM },
  { Mips::SWC1, Mips::SWC1, Mips::SWC1_MM },
  { Mips::SWXC1, Mips::SWXC1, Mips::SWXC1_MM },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MM },
  { Mips::SYNCI, Mips::SYNCI, (uint16_t)-1U },
  { Mips::SYSCALL, Mips::SYSCALL, Mips::SYSCALL_MM },
  { Mips::TEQ, Mips::TEQ, Mips::TEQ_MM },
  { Mips::TEQI, Mips::TEQI, Mips::TEQI_MM },
  { Mips::TGE, Mips::TGE, Mips::TGE_MM },
  { Mips::TGEI, Mips::TGEI, Mips::TGEI_MM },
  { Mips::TGEIU, Mips::TGEIU, Mips::TGEIU_MM },
  { Mips::TGEU, Mips::TGEU, Mips::TGEU_MM },
  { Mips::TLBP, Mips::TLBP, Mips::TLBP_MM },
  { Mips::TLBR, Mips::TLBR, Mips::TLBR_MM },
  { Mips::TLBWI, Mips::TLBWI, Mips::TLBWI_MM },
  { Mips::TLBWR, Mips::TLBWR, Mips::TLBWR_MM },
  { Mips::TLT, Mips::TLT, Mips::TLT_MM },
  { Mips::TLTI, Mips::TLTI, Mips::TLTI_MM },
  { Mips::TLTU, Mips::TLTU, Mips::TLTU_MM },
  { Mips::TNE, Mips::TNE, Mips::TNE_MM },
  { Mips::TNEI, Mips::TNEI, Mips::TNEI_MM },
  { Mips::TRUNC_W_D32, Mips::TRUNC_W_D32, Mips::TRUNC_W_MM },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MM },
  { Mips::TTLTIU, Mips::TTLTIU, Mips::TLTIU_MM },
  { Mips::UDIV, Mips::UDIV, Mips::UDIV_MM },
  { Mips::WSBH, Mips::WSBH, Mips::WSBH_MM },
  { Mips::XOR, Mips::XOR, Mips::XOR_MM },
  { Mips::XORi, Mips::XORi, Mips::XORi_MM },
}; // End of Std2MicroMipsTable

  unsigned mid;
  unsigned start = 0;
  unsigned end = 179;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsTable[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsTable[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsTable[mid][1];
  if (inArch == Arch_micromips)
    return Std2MicroMipsTable[mid][2];
  return -1;}

// Std2MicroMipsR6
LLVM_READONLY
int Std2MicroMipsR6(uint16_t Opcode, enum Arch inArch) {
static const uint16_t Std2MicroMipsR6Table[][3] = {
  { Mips::ADD, Mips::ADD, Mips::ADD_MMR6 },
  { Mips::ADDiu, Mips::ADDiu, Mips::ADDIU_MMR6 },
  { Mips::ADDu, Mips::ADDu, Mips::ADDU_MMR6 },
  { Mips::AND, Mips::AND, Mips::AND_MMR6 },
  { Mips::ANDi, Mips::ANDi, Mips::ANDI_MMR6 },
  { Mips::BREAK, Mips::BREAK, Mips::BREAK_MMR6 },
  { Mips::CEIL_W_D64, Mips::CEIL_W_D64, Mips::CEIL_W_D_MMR6 },
  { Mips::CEIL_W_S, Mips::CEIL_W_S, Mips::CEIL_W_S_MMR6 },
  { Mips::CVT_W_D64, Mips::CVT_W_D64, Mips::CVT_W_D_MMR6 },
  { Mips::DI, Mips::DI, Mips::DI_MMR6 },
  { Mips::EI, Mips::EI, Mips::EI_MMR6 },
  { Mips::FLOOR_W_D64, Mips::FLOOR_W_D64, Mips::FLOOR_W_D_MMR6 },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MMR6 },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::SQRT_S_MMR6 },
  { Mips::LW, Mips::LW, Mips::LW_MMR6 },
  { Mips::NOR, Mips::NOR, Mips::NOR_MMR6 },
  { Mips::OR, Mips::OR, Mips::OR_MMR6 },
  { Mips::ORi, Mips::ORi, Mips::ORI_MMR6 },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MMR6 },
  { Mips::ROUND_W_D64, Mips::ROUND_W_D64, Mips::ROUND_W_D_MMR6 },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MMR6 },
  { Mips::SB, Mips::SB, Mips::SB_MMR6 },
  { Mips::SEB, Mips::SEB, Mips::SEB_MMR6 },
  { Mips::SEH, Mips::SEH, Mips::SEH_MMR6 },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MMR6 },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MMR6 },
  { Mips::SYNCI, Mips::SYNCI, Mips::SYNCI_MMR6 },
  { Mips::TRUNC_W_D64, Mips::TRUNC_W_D64, Mips::TRUNC_W_D_MMR6 },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MMR6 },
  { Mips::XOR, Mips::XOR, Mips::XOR_MMR6 },
  { Mips::XORi, Mips::XORi, Mips::XORI_MMR6 },
}; // End of Std2MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 31;
  while (start < end) {
    mid = start + (end - start)/2;
    if (Opcode == Std2MicroMipsR6Table[mid][0]) {
      break;
    }
    if (Opcode < Std2MicroMipsR6Table[mid][0])
      end = mid;
    else
      start = mid + 1;
  }
  if (start == end)
    return -1; // Instruction doesn't exist in this table.

  if (inArch == Arch_se)
    return Std2MicroMipsR6Table[mid][1];
  if (inArch == Arch_micromipsr6)
    return Std2MicroMipsR6Table[mid][2];
  return -1;}

} // End Mips namespace
} // End llvm namespace
#endif // GET_INSTRMAP_INFO

