/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Target Instruction Enum Values and Descriptors                             *|
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
    PATCHABLE_OP	= 23,
    PATCHABLE_FUNCTION_ENTER	= 24,
    PATCHABLE_RET	= 25,
    G_ADD	= 26,
    G_OR	= 27,
    G_BR	= 28,
    ABSMacro	= 29,
    ABSQ_S_PH	= 30,
    ABSQ_S_PH_MM	= 31,
    ABSQ_S_QB	= 32,
    ABSQ_S_QB_MMR2	= 33,
    ABSQ_S_W	= 34,
    ABSQ_S_W_MM	= 35,
    ABS_D_MMR6	= 36,
    ABS_S_MMR6	= 37,
    ADD	= 38,
    ADDIUPC	= 39,
    ADDIUPC_MM	= 40,
    ADDIUPC_MMR6	= 41,
    ADDIUR1SP_MM	= 42,
    ADDIUR2_MM	= 43,
    ADDIUS5_MM	= 44,
    ADDIUSP_MM	= 45,
    ADDIU_MMR6	= 46,
    ADDQH_PH	= 47,
    ADDQH_PH_MMR2	= 48,
    ADDQH_R_PH	= 49,
    ADDQH_R_PH_MMR2	= 50,
    ADDQH_R_W	= 51,
    ADDQH_R_W_MMR2	= 52,
    ADDQH_W	= 53,
    ADDQH_W_MMR2	= 54,
    ADDQ_PH	= 55,
    ADDQ_PH_MM	= 56,
    ADDQ_S_PH	= 57,
    ADDQ_S_PH_MM	= 58,
    ADDQ_S_W	= 59,
    ADDQ_S_W_MM	= 60,
    ADDSC	= 61,
    ADDSC_MM	= 62,
    ADDS_A_B	= 63,
    ADDS_A_D	= 64,
    ADDS_A_H	= 65,
    ADDS_A_W	= 66,
    ADDS_S_B	= 67,
    ADDS_S_D	= 68,
    ADDS_S_H	= 69,
    ADDS_S_W	= 70,
    ADDS_U_B	= 71,
    ADDS_U_D	= 72,
    ADDS_U_H	= 73,
    ADDS_U_W	= 74,
    ADDU16_MM	= 75,
    ADDU16_MMR6	= 76,
    ADDUH_QB	= 77,
    ADDUH_QB_MMR2	= 78,
    ADDUH_R_QB	= 79,
    ADDUH_R_QB_MMR2	= 80,
    ADDU_MMR6	= 81,
    ADDU_PH	= 82,
    ADDU_PH_MMR2	= 83,
    ADDU_QB	= 84,
    ADDU_QB_MM	= 85,
    ADDU_S_PH	= 86,
    ADDU_S_PH_MMR2	= 87,
    ADDU_S_QB	= 88,
    ADDU_S_QB_MM	= 89,
    ADDVI_B	= 90,
    ADDVI_D	= 91,
    ADDVI_H	= 92,
    ADDVI_W	= 93,
    ADDV_B	= 94,
    ADDV_D	= 95,
    ADDV_H	= 96,
    ADDV_W	= 97,
    ADDWC	= 98,
    ADDWC_MM	= 99,
    ADD_A_B	= 100,
    ADD_A_D	= 101,
    ADD_A_H	= 102,
    ADD_A_W	= 103,
    ADD_MM	= 104,
    ADD_MMR6	= 105,
    ADDi	= 106,
    ADDi_MM	= 107,
    ADDiu	= 108,
    ADDiu_MM	= 109,
    ADDu	= 110,
    ADDu_MM	= 111,
    ADJCALLSTACKDOWN	= 112,
    ADJCALLSTACKUP	= 113,
    ALIGN	= 114,
    ALIGN_MMR6	= 115,
    ALUIPC	= 116,
    ALUIPC_MMR6	= 117,
    AND	= 118,
    AND16_MM	= 119,
    AND16_MMR6	= 120,
    AND64	= 121,
    ANDI16_MM	= 122,
    ANDI16_MMR6	= 123,
    ANDI_B	= 124,
    ANDI_MMR6	= 125,
    AND_MM	= 126,
    AND_MMR6	= 127,
    AND_V	= 128,
    AND_V_D_PSEUDO	= 129,
    AND_V_H_PSEUDO	= 130,
    AND_V_W_PSEUDO	= 131,
    ANDi	= 132,
    ANDi64	= 133,
    ANDi_MM	= 134,
    APPEND	= 135,
    APPEND_MMR2	= 136,
    ASUB_S_B	= 137,
    ASUB_S_D	= 138,
    ASUB_S_H	= 139,
    ASUB_S_W	= 140,
    ASUB_U_B	= 141,
    ASUB_U_D	= 142,
    ASUB_U_H	= 143,
    ASUB_U_W	= 144,
    ATOMIC_CMP_SWAP_I16	= 145,
    ATOMIC_CMP_SWAP_I32	= 146,
    ATOMIC_CMP_SWAP_I64	= 147,
    ATOMIC_CMP_SWAP_I8	= 148,
    ATOMIC_LOAD_ADD_I16	= 149,
    ATOMIC_LOAD_ADD_I32	= 150,
    ATOMIC_LOAD_ADD_I64	= 151,
    ATOMIC_LOAD_ADD_I8	= 152,
    ATOMIC_LOAD_AND_I16	= 153,
    ATOMIC_LOAD_AND_I32	= 154,
    ATOMIC_LOAD_AND_I64	= 155,
    ATOMIC_LOAD_AND_I8	= 156,
    ATOMIC_LOAD_NAND_I16	= 157,
    ATOMIC_LOAD_NAND_I32	= 158,
    ATOMIC_LOAD_NAND_I64	= 159,
    ATOMIC_LOAD_NAND_I8	= 160,
    ATOMIC_LOAD_OR_I16	= 161,
    ATOMIC_LOAD_OR_I32	= 162,
    ATOMIC_LOAD_OR_I64	= 163,
    ATOMIC_LOAD_OR_I8	= 164,
    ATOMIC_LOAD_SUB_I16	= 165,
    ATOMIC_LOAD_SUB_I32	= 166,
    ATOMIC_LOAD_SUB_I64	= 167,
    ATOMIC_LOAD_SUB_I8	= 168,
    ATOMIC_LOAD_XOR_I16	= 169,
    ATOMIC_LOAD_XOR_I32	= 170,
    ATOMIC_LOAD_XOR_I64	= 171,
    ATOMIC_LOAD_XOR_I8	= 172,
    ATOMIC_SWAP_I16	= 173,
    ATOMIC_SWAP_I32	= 174,
    ATOMIC_SWAP_I64	= 175,
    ATOMIC_SWAP_I8	= 176,
    AUI	= 177,
    AUIPC	= 178,
    AUIPC_MMR6	= 179,
    AUI_MMR6	= 180,
    AVER_S_B	= 181,
    AVER_S_D	= 182,
    AVER_S_H	= 183,
    AVER_S_W	= 184,
    AVER_U_B	= 185,
    AVER_U_D	= 186,
    AVER_U_H	= 187,
    AVER_U_W	= 188,
    AVE_S_B	= 189,
    AVE_S_D	= 190,
    AVE_S_H	= 191,
    AVE_S_W	= 192,
    AVE_U_B	= 193,
    AVE_U_D	= 194,
    AVE_U_H	= 195,
    AVE_U_W	= 196,
    AddiuRxImmX16	= 197,
    AddiuRxPcImmX16	= 198,
    AddiuRxRxImm16	= 199,
    AddiuRxRxImmX16	= 200,
    AddiuRxRyOffMemX16	= 201,
    AddiuSpImm16	= 202,
    AddiuSpImmX16	= 203,
    AdduRxRyRz16	= 204,
    AndRxRxRy16	= 205,
    B	= 206,
    B16_MM	= 207,
    BADDu	= 208,
    BAL	= 209,
    BALC	= 210,
    BALC_MMR6	= 211,
    BALIGN	= 212,
    BALIGN_MMR2	= 213,
    BAL_BR	= 214,
    BBIT0	= 215,
    BBIT032	= 216,
    BBIT1	= 217,
    BBIT132	= 218,
    BC	= 219,
    BC16_MMR6	= 220,
    BC1EQZ	= 221,
    BC1EQZC_MMR6	= 222,
    BC1F	= 223,
    BC1FL	= 224,
    BC1F_MM	= 225,
    BC1NEZ	= 226,
    BC1NEZC_MMR6	= 227,
    BC1T	= 228,
    BC1TL	= 229,
    BC1T_MM	= 230,
    BC2EQZ	= 231,
    BC2EQZC_MMR6	= 232,
    BC2NEZ	= 233,
    BC2NEZC_MMR6	= 234,
    BCLRI_B	= 235,
    BCLRI_D	= 236,
    BCLRI_H	= 237,
    BCLRI_W	= 238,
    BCLR_B	= 239,
    BCLR_D	= 240,
    BCLR_H	= 241,
    BCLR_W	= 242,
    BC_MMR6	= 243,
    BEQ	= 244,
    BEQ64	= 245,
    BEQC	= 246,
    BEQC_MMR6	= 247,
    BEQL	= 248,
    BEQZ16_MM	= 249,
    BEQZALC	= 250,
    BEQZALC_MMR6	= 251,
    BEQZC	= 252,
    BEQZC16_MMR6	= 253,
    BEQZC_MM	= 254,
    BEQZC_MMR6	= 255,
    BEQ_MM	= 256,
    BGE	= 257,
    BGEC	= 258,
    BGEC_MMR6	= 259,
    BGEImmMacro	= 260,
    BGEL	= 261,
    BGELImmMacro	= 262,
    BGEU	= 263,
    BGEUC	= 264,
    BGEUC_MMR6	= 265,
    BGEUImmMacro	= 266,
    BGEUL	= 267,
    BGEULImmMacro	= 268,
    BGEZ	= 269,
    BGEZ64	= 270,
    BGEZAL	= 271,
    BGEZALC	= 272,
    BGEZALC_MMR6	= 273,
    BGEZALL	= 274,
    BGEZALS_MM	= 275,
    BGEZAL_MM	= 276,
    BGEZC	= 277,
    BGEZL	= 278,
    BGEZ_MM	= 279,
    BGT	= 280,
    BGTImmMacro	= 281,
    BGTL	= 282,
    BGTLImmMacro	= 283,
    BGTU	= 284,
    BGTUImmMacro	= 285,
    BGTUL	= 286,
    BGTULImmMacro	= 287,
    BGTZ	= 288,
    BGTZ64	= 289,
    BGTZALC	= 290,
    BGTZALC_MMR6	= 291,
    BGTZC	= 292,
    BGTZL	= 293,
    BGTZ_MM	= 294,
    BINSLI_B	= 295,
    BINSLI_D	= 296,
    BINSLI_H	= 297,
    BINSLI_W	= 298,
    BINSL_B	= 299,
    BINSL_D	= 300,
    BINSL_H	= 301,
    BINSL_W	= 302,
    BINSRI_B	= 303,
    BINSRI_D	= 304,
    BINSRI_H	= 305,
    BINSRI_W	= 306,
    BINSR_B	= 307,
    BINSR_D	= 308,
    BINSR_H	= 309,
    BINSR_W	= 310,
    BITREV	= 311,
    BITREV_MM	= 312,
    BITSWAP	= 313,
    BITSWAP_MMR6	= 314,
    BLE	= 315,
    BLEImmMacro	= 316,
    BLEL	= 317,
    BLELImmMacro	= 318,
    BLEU	= 319,
    BLEUImmMacro	= 320,
    BLEUL	= 321,
    BLEULImmMacro	= 322,
    BLEZ	= 323,
    BLEZ64	= 324,
    BLEZALC	= 325,
    BLEZALC_MMR6	= 326,
    BLEZC	= 327,
    BLEZL	= 328,
    BLEZ_MM	= 329,
    BLT	= 330,
    BLTC	= 331,
    BLTC_MMR6	= 332,
    BLTImmMacro	= 333,
    BLTL	= 334,
    BLTLImmMacro	= 335,
    BLTU	= 336,
    BLTUC	= 337,
    BLTUC_MMR6	= 338,
    BLTUImmMacro	= 339,
    BLTUL	= 340,
    BLTULImmMacro	= 341,
    BLTZ	= 342,
    BLTZ64	= 343,
    BLTZAL	= 344,
    BLTZALC	= 345,
    BLTZALC_MMR6	= 346,
    BLTZALL	= 347,
    BLTZALS_MM	= 348,
    BLTZAL_MM	= 349,
    BLTZC	= 350,
    BLTZL	= 351,
    BLTZ_MM	= 352,
    BMNZI_B	= 353,
    BMNZ_V	= 354,
    BMZI_B	= 355,
    BMZ_V	= 356,
    BNE	= 357,
    BNE64	= 358,
    BNEC	= 359,
    BNEC_MMR6	= 360,
    BNEGI_B	= 361,
    BNEGI_D	= 362,
    BNEGI_H	= 363,
    BNEGI_W	= 364,
    BNEG_B	= 365,
    BNEG_D	= 366,
    BNEG_H	= 367,
    BNEG_W	= 368,
    BNEL	= 369,
    BNEZ16_MM	= 370,
    BNEZALC	= 371,
    BNEZALC_MMR6	= 372,
    BNEZC	= 373,
    BNEZC16_MMR6	= 374,
    BNEZC_MM	= 375,
    BNEZC_MMR6	= 376,
    BNE_MM	= 377,
    BNVC	= 378,
    BNVC_MMR6	= 379,
    BNZ_B	= 380,
    BNZ_D	= 381,
    BNZ_H	= 382,
    BNZ_V	= 383,
    BNZ_W	= 384,
    BOVC	= 385,
    BOVC_MMR6	= 386,
    BPOSGE32	= 387,
    BPOSGE32C_MMR3	= 388,
    BPOSGE32_MM	= 389,
    BPOSGE32_PSEUDO	= 390,
    BREAK	= 391,
    BREAK16_MM	= 392,
    BREAK16_MMR6	= 393,
    BREAK_MM	= 394,
    BREAK_MMR6	= 395,
    BSELI_B	= 396,
    BSEL_D_PSEUDO	= 397,
    BSEL_FD_PSEUDO	= 398,
    BSEL_FW_PSEUDO	= 399,
    BSEL_H_PSEUDO	= 400,
    BSEL_V	= 401,
    BSEL_W_PSEUDO	= 402,
    BSETI_B	= 403,
    BSETI_D	= 404,
    BSETI_H	= 405,
    BSETI_W	= 406,
    BSET_B	= 407,
    BSET_D	= 408,
    BSET_H	= 409,
    BSET_W	= 410,
    BZ_B	= 411,
    BZ_D	= 412,
    BZ_H	= 413,
    BZ_V	= 414,
    BZ_W	= 415,
    B_MMR6_Pseudo	= 416,
    B_MM_Pseudo	= 417,
    BeqImm	= 418,
    BeqzRxImm16	= 419,
    BeqzRxImmX16	= 420,
    Bimm16	= 421,
    BimmX16	= 422,
    BneImm	= 423,
    BnezRxImm16	= 424,
    BnezRxImmX16	= 425,
    Break16	= 426,
    Bteqz16	= 427,
    BteqzT8CmpX16	= 428,
    BteqzT8CmpiX16	= 429,
    BteqzT8SltX16	= 430,
    BteqzT8SltiX16	= 431,
    BteqzT8SltiuX16	= 432,
    BteqzT8SltuX16	= 433,
    BteqzX16	= 434,
    Btnez16	= 435,
    BtnezT8CmpX16	= 436,
    BtnezT8CmpiX16	= 437,
    BtnezT8SltX16	= 438,
    BtnezT8SltiX16	= 439,
    BtnezT8SltiuX16	= 440,
    BtnezT8SltuX16	= 441,
    BtnezX16	= 442,
    BuildPairF64	= 443,
    BuildPairF64_64	= 444,
    CACHE	= 445,
    CACHEE	= 446,
    CACHEE_MM	= 447,
    CACHEE_MMR6	= 448,
    CACHE_MM	= 449,
    CACHE_MMR6	= 450,
    CACHE_R6	= 451,
    CEIL_L_D64	= 452,
    CEIL_L_D_MMR6	= 453,
    CEIL_L_S	= 454,
    CEIL_L_S_MMR6	= 455,
    CEIL_W_D32	= 456,
    CEIL_W_D64	= 457,
    CEIL_W_D_MMR6	= 458,
    CEIL_W_MM	= 459,
    CEIL_W_S	= 460,
    CEIL_W_S_MM	= 461,
    CEIL_W_S_MMR6	= 462,
    CEQI_B	= 463,
    CEQI_D	= 464,
    CEQI_H	= 465,
    CEQI_W	= 466,
    CEQ_B	= 467,
    CEQ_D	= 468,
    CEQ_H	= 469,
    CEQ_W	= 470,
    CFC1	= 471,
    CFC1_MM	= 472,
    CFCMSA	= 473,
    CINS	= 474,
    CINS32	= 475,
    CLASS_D	= 476,
    CLASS_D_MMR6	= 477,
    CLASS_S	= 478,
    CLASS_S_MMR6	= 479,
    CLEI_S_B	= 480,
    CLEI_S_D	= 481,
    CLEI_S_H	= 482,
    CLEI_S_W	= 483,
    CLEI_U_B	= 484,
    CLEI_U_D	= 485,
    CLEI_U_H	= 486,
    CLEI_U_W	= 487,
    CLE_S_B	= 488,
    CLE_S_D	= 489,
    CLE_S_H	= 490,
    CLE_S_W	= 491,
    CLE_U_B	= 492,
    CLE_U_D	= 493,
    CLE_U_H	= 494,
    CLE_U_W	= 495,
    CLO	= 496,
    CLO_MM	= 497,
    CLO_MMR6	= 498,
    CLO_R6	= 499,
    CLTI_S_B	= 500,
    CLTI_S_D	= 501,
    CLTI_S_H	= 502,
    CLTI_S_W	= 503,
    CLTI_U_B	= 504,
    CLTI_U_D	= 505,
    CLTI_U_H	= 506,
    CLTI_U_W	= 507,
    CLT_S_B	= 508,
    CLT_S_D	= 509,
    CLT_S_H	= 510,
    CLT_S_W	= 511,
    CLT_U_B	= 512,
    CLT_U_D	= 513,
    CLT_U_H	= 514,
    CLT_U_W	= 515,
    CLZ	= 516,
    CLZ_MM	= 517,
    CLZ_MMR6	= 518,
    CLZ_R6	= 519,
    CMPGDU_EQ_QB	= 520,
    CMPGDU_EQ_QB_MMR2	= 521,
    CMPGDU_LE_QB	= 522,
    CMPGDU_LE_QB_MMR2	= 523,
    CMPGDU_LT_QB	= 524,
    CMPGDU_LT_QB_MMR2	= 525,
    CMPGU_EQ_QB	= 526,
    CMPGU_EQ_QB_MM	= 527,
    CMPGU_LE_QB	= 528,
    CMPGU_LE_QB_MM	= 529,
    CMPGU_LT_QB	= 530,
    CMPGU_LT_QB_MM	= 531,
    CMPU_EQ_QB	= 532,
    CMPU_EQ_QB_MM	= 533,
    CMPU_LE_QB	= 534,
    CMPU_LE_QB_MM	= 535,
    CMPU_LT_QB	= 536,
    CMPU_LT_QB_MM	= 537,
    CMP_AF_D_MMR6	= 538,
    CMP_AF_S_MMR6	= 539,
    CMP_EQ_D	= 540,
    CMP_EQ_D_MMR6	= 541,
    CMP_EQ_PH	= 542,
    CMP_EQ_PH_MM	= 543,
    CMP_EQ_S	= 544,
    CMP_EQ_S_MMR6	= 545,
    CMP_F_D	= 546,
    CMP_F_S	= 547,
    CMP_LE_D	= 548,
    CMP_LE_D_MMR6	= 549,
    CMP_LE_PH	= 550,
    CMP_LE_PH_MM	= 551,
    CMP_LE_S	= 552,
    CMP_LE_S_MMR6	= 553,
    CMP_LT_D	= 554,
    CMP_LT_D_MMR6	= 555,
    CMP_LT_PH	= 556,
    CMP_LT_PH_MM	= 557,
    CMP_LT_S	= 558,
    CMP_LT_S_MMR6	= 559,
    CMP_SAF_D	= 560,
    CMP_SAF_D_MMR6	= 561,
    CMP_SAF_S	= 562,
    CMP_SAF_S_MMR6	= 563,
    CMP_SEQ_D	= 564,
    CMP_SEQ_D_MMR6	= 565,
    CMP_SEQ_S	= 566,
    CMP_SEQ_S_MMR6	= 567,
    CMP_SLE_D	= 568,
    CMP_SLE_D_MMR6	= 569,
    CMP_SLE_S	= 570,
    CMP_SLE_S_MMR6	= 571,
    CMP_SLT_D	= 572,
    CMP_SLT_D_MMR6	= 573,
    CMP_SLT_S	= 574,
    CMP_SLT_S_MMR6	= 575,
    CMP_SUEQ_D	= 576,
    CMP_SUEQ_D_MMR6	= 577,
    CMP_SUEQ_S	= 578,
    CMP_SUEQ_S_MMR6	= 579,
    CMP_SULE_D	= 580,
    CMP_SULE_D_MMR6	= 581,
    CMP_SULE_S	= 582,
    CMP_SULE_S_MMR6	= 583,
    CMP_SULT_D	= 584,
    CMP_SULT_D_MMR6	= 585,
    CMP_SULT_S	= 586,
    CMP_SULT_S_MMR6	= 587,
    CMP_SUN_D	= 588,
    CMP_SUN_D_MMR6	= 589,
    CMP_SUN_S	= 590,
    CMP_SUN_S_MMR6	= 591,
    CMP_UEQ_D	= 592,
    CMP_UEQ_D_MMR6	= 593,
    CMP_UEQ_S	= 594,
    CMP_UEQ_S_MMR6	= 595,
    CMP_ULE_D	= 596,
    CMP_ULE_D_MMR6	= 597,
    CMP_ULE_S	= 598,
    CMP_ULE_S_MMR6	= 599,
    CMP_ULT_D	= 600,
    CMP_ULT_D_MMR6	= 601,
    CMP_ULT_S	= 602,
    CMP_ULT_S_MMR6	= 603,
    CMP_UN_D	= 604,
    CMP_UN_D_MMR6	= 605,
    CMP_UN_S	= 606,
    CMP_UN_S_MMR6	= 607,
    CONSTPOOL_ENTRY	= 608,
    COPY_FD_PSEUDO	= 609,
    COPY_FW_PSEUDO	= 610,
    COPY_S_B	= 611,
    COPY_S_D	= 612,
    COPY_S_H	= 613,
    COPY_S_W	= 614,
    COPY_U_B	= 615,
    COPY_U_H	= 616,
    COPY_U_W	= 617,
    CTC1	= 618,
    CTC1_MM	= 619,
    CTCMSA	= 620,
    CVT_D32_S	= 621,
    CVT_D32_W	= 622,
    CVT_D32_W_MM	= 623,
    CVT_D64_L	= 624,
    CVT_D64_S	= 625,
    CVT_D64_W	= 626,
    CVT_D_L_MMR6	= 627,
    CVT_D_S_MM	= 628,
    CVT_D_S_MMR6	= 629,
    CVT_D_W_MMR6	= 630,
    CVT_L_D64	= 631,
    CVT_L_D64_MM	= 632,
    CVT_L_D_MMR6	= 633,
    CVT_L_S	= 634,
    CVT_L_S_MM	= 635,
    CVT_L_S_MMR6	= 636,
    CVT_S_D32	= 637,
    CVT_S_D32_MM	= 638,
    CVT_S_D64	= 639,
    CVT_S_D_MMR6	= 640,
    CVT_S_L	= 641,
    CVT_S_L_MMR6	= 642,
    CVT_S_W	= 643,
    CVT_S_W_MM	= 644,
    CVT_S_W_MMR6	= 645,
    CVT_W_D32	= 646,
    CVT_W_D64	= 647,
    CVT_W_D_MMR6	= 648,
    CVT_W_MM	= 649,
    CVT_W_S	= 650,
    CVT_W_S_MM	= 651,
    CVT_W_S_MMR6	= 652,
    C_EQ_D32	= 653,
    C_EQ_D64	= 654,
    C_EQ_S	= 655,
    C_F_D32	= 656,
    C_F_D64	= 657,
    C_F_S	= 658,
    C_LE_D32	= 659,
    C_LE_D64	= 660,
    C_LE_S	= 661,
    C_LT_D32	= 662,
    C_LT_D64	= 663,
    C_LT_S	= 664,
    C_NGE_D32	= 665,
    C_NGE_D64	= 666,
    C_NGE_S	= 667,
    C_NGLE_D32	= 668,
    C_NGLE_D64	= 669,
    C_NGLE_S	= 670,
    C_NGL_D32	= 671,
    C_NGL_D64	= 672,
    C_NGL_S	= 673,
    C_NGT_D32	= 674,
    C_NGT_D64	= 675,
    C_NGT_S	= 676,
    C_OLE_D32	= 677,
    C_OLE_D64	= 678,
    C_OLE_S	= 679,
    C_OLT_D32	= 680,
    C_OLT_D64	= 681,
    C_OLT_S	= 682,
    C_SEQ_D32	= 683,
    C_SEQ_D64	= 684,
    C_SEQ_S	= 685,
    C_SF_D32	= 686,
    C_SF_D64	= 687,
    C_SF_S	= 688,
    C_UEQ_D32	= 689,
    C_UEQ_D64	= 690,
    C_UEQ_S	= 691,
    C_ULE_D32	= 692,
    C_ULE_D64	= 693,
    C_ULE_S	= 694,
    C_ULT_D32	= 695,
    C_ULT_D64	= 696,
    C_ULT_S	= 697,
    C_UN_D32	= 698,
    C_UN_D64	= 699,
    C_UN_S	= 700,
    CmpRxRy16	= 701,
    CmpiRxImm16	= 702,
    CmpiRxImmX16	= 703,
    Constant32	= 704,
    DADD	= 705,
    DADDIU_MM64R6	= 706,
    DADDU_MM64R6	= 707,
    DADD_MM64R6	= 708,
    DADDi	= 709,
    DADDiu	= 710,
    DADDu	= 711,
    DAHI	= 712,
    DAHI_MM64R6	= 713,
    DALIGN	= 714,
    DALIGN_MM64R6	= 715,
    DATI	= 716,
    DATI_MM64R6	= 717,
    DAUI	= 718,
    DAUI_MM64R6	= 719,
    DBITSWAP	= 720,
    DCLO	= 721,
    DCLO_MM64R6	= 722,
    DCLO_R6	= 723,
    DCLZ	= 724,
    DCLZ_MM64R6	= 725,
    DCLZ_R6	= 726,
    DDIV	= 727,
    DDIVU	= 728,
    DDIVU_MM64R6	= 729,
    DDIV_MM64R6	= 730,
    DERET	= 731,
    DERET_MM	= 732,
    DERET_MMR6	= 733,
    DEXT	= 734,
    DEXTM	= 735,
    DEXTM_MM64R6	= 736,
    DEXTU	= 737,
    DEXTU_MM64R6	= 738,
    DEXT_MM64R6	= 739,
    DI	= 740,
    DINS	= 741,
    DINSM	= 742,
    DINSM_MM64R6	= 743,
    DINSU	= 744,
    DINSU_MM64R6	= 745,
    DINS_MM64R6	= 746,
    DIV	= 747,
    DIVU	= 748,
    DIVU_MMR6	= 749,
    DIV_MMR6	= 750,
    DIV_S_B	= 751,
    DIV_S_D	= 752,
    DIV_S_H	= 753,
    DIV_S_W	= 754,
    DIV_U_B	= 755,
    DIV_U_D	= 756,
    DIV_U_H	= 757,
    DIV_U_W	= 758,
    DI_MM	= 759,
    DI_MMR6	= 760,
    DLSA	= 761,
    DLSA_R6	= 762,
    DMFC0	= 763,
    DMFC0_MM64R6	= 764,
    DMFC1	= 765,
    DMFC1_MM64R6	= 766,
    DMFC2	= 767,
    DMFC2_MM64R6	= 768,
    DMFC2_OCTEON	= 769,
    DMOD	= 770,
    DMODU	= 771,
    DMODU_MM64R6	= 772,
    DMOD_MM64R6	= 773,
    DMTC0	= 774,
    DMTC0_MM64R6	= 775,
    DMTC1	= 776,
    DMTC1_MM64R6	= 777,
    DMTC2	= 778,
    DMTC2_MM64R6	= 779,
    DMTC2_OCTEON	= 780,
    DMUH	= 781,
    DMUHU	= 782,
    DMUHU_MM64R6	= 783,
    DMUH_MM64R6	= 784,
    DMUL	= 785,
    DMULT	= 786,
    DMULTu	= 787,
    DMULU	= 788,
    DMULU_MM64R6	= 789,
    DMUL_MM64R6	= 790,
    DMUL_R6	= 791,
    DOTP_S_D	= 792,
    DOTP_S_H	= 793,
    DOTP_S_W	= 794,
    DOTP_U_D	= 795,
    DOTP_U_H	= 796,
    DOTP_U_W	= 797,
    DPADD_S_D	= 798,
    DPADD_S_H	= 799,
    DPADD_S_W	= 800,
    DPADD_U_D	= 801,
    DPADD_U_H	= 802,
    DPADD_U_W	= 803,
    DPAQX_SA_W_PH	= 804,
    DPAQX_SA_W_PH_MMR2	= 805,
    DPAQX_S_W_PH	= 806,
    DPAQX_S_W_PH_MMR2	= 807,
    DPAQ_SA_L_W	= 808,
    DPAQ_SA_L_W_MM	= 809,
    DPAQ_S_W_PH	= 810,
    DPAQ_S_W_PH_MM	= 811,
    DPAU_H_QBL	= 812,
    DPAU_H_QBL_MM	= 813,
    DPAU_H_QBR	= 814,
    DPAU_H_QBR_MM	= 815,
    DPAX_W_PH	= 816,
    DPAX_W_PH_MMR2	= 817,
    DPA_W_PH	= 818,
    DPA_W_PH_MMR2	= 819,
    DPOP	= 820,
    DPSQX_SA_W_PH	= 821,
    DPSQX_SA_W_PH_MMR2	= 822,
    DPSQX_S_W_PH	= 823,
    DPSQX_S_W_PH_MMR2	= 824,
    DPSQ_SA_L_W	= 825,
    DPSQ_SA_L_W_MM	= 826,
    DPSQ_S_W_PH	= 827,
    DPSQ_S_W_PH_MM	= 828,
    DPSUB_S_D	= 829,
    DPSUB_S_H	= 830,
    DPSUB_S_W	= 831,
    DPSUB_U_D	= 832,
    DPSUB_U_H	= 833,
    DPSUB_U_W	= 834,
    DPSU_H_QBL	= 835,
    DPSU_H_QBL_MM	= 836,
    DPSU_H_QBR	= 837,
    DPSU_H_QBR_MM	= 838,
    DPSX_W_PH	= 839,
    DPSX_W_PH_MMR2	= 840,
    DPS_W_PH	= 841,
    DPS_W_PH_MMR2	= 842,
    DROL	= 843,
    DROLImm	= 844,
    DROR	= 845,
    DRORImm	= 846,
    DROTR	= 847,
    DROTR32	= 848,
    DROTR32_MM64R6	= 849,
    DROTRV	= 850,
    DROTRV_MM64R6	= 851,
    DROTR_MM64R6	= 852,
    DSBH	= 853,
    DSBH_MM64R6	= 854,
    DSDIV	= 855,
    DSDivMacro	= 856,
    DSHD	= 857,
    DSHD_MM64R6	= 858,
    DSLL	= 859,
    DSLL32	= 860,
    DSLL32_MM64R6	= 861,
    DSLL64_32	= 862,
    DSLLV	= 863,
    DSLLV_MM64R6	= 864,
    DSLL_MM64R6	= 865,
    DSRA	= 866,
    DSRA32	= 867,
    DSRA32_MM64R6	= 868,
    DSRAV	= 869,
    DSRAV_MM64R6	= 870,
    DSRA_MM64R6	= 871,
    DSRL	= 872,
    DSRL32	= 873,
    DSRL32_MM64R6	= 874,
    DSRLV	= 875,
    DSRLV_MM64R6	= 876,
    DSRL_MM64R6	= 877,
    DSUB	= 878,
    DSUBU_MM64R6	= 879,
    DSUB_MM64R6	= 880,
    DSUBu	= 881,
    DUDIV	= 882,
    DUDivMacro	= 883,
    DVP_MMR6	= 884,
    DivRxRy16	= 885,
    DivuRxRy16	= 886,
    EHB	= 887,
    EHB_MM	= 888,
    EHB_MMR6	= 889,
    EI	= 890,
    EI_MM	= 891,
    EI_MMR6	= 892,
    ERET	= 893,
    ERETNC	= 894,
    ERETNC_MMR6	= 895,
    ERET_MM	= 896,
    ERET_MMR6	= 897,
    ERet	= 898,
    EVP_MMR6	= 899,
    EXT	= 900,
    EXTP	= 901,
    EXTPDP	= 902,
    EXTPDPV	= 903,
    EXTPDPV_MM	= 904,
    EXTPDP_MM	= 905,
    EXTPV	= 906,
    EXTPV_MM	= 907,
    EXTP_MM	= 908,
    EXTRV_RS_W	= 909,
    EXTRV_RS_W_MM	= 910,
    EXTRV_R_W	= 911,
    EXTRV_R_W_MM	= 912,
    EXTRV_S_H	= 913,
    EXTRV_S_H_MM	= 914,
    EXTRV_W	= 915,
    EXTRV_W_MM	= 916,
    EXTR_RS_W	= 917,
    EXTR_RS_W_MM	= 918,
    EXTR_R_W	= 919,
    EXTR_R_W_MM	= 920,
    EXTR_S_H	= 921,
    EXTR_S_H_MM	= 922,
    EXTR_W	= 923,
    EXTR_W_MM	= 924,
    EXTS	= 925,
    EXTS32	= 926,
    EXT_MM	= 927,
    EXT_MMR6	= 928,
    ExtractElementF64	= 929,
    ExtractElementF64_64	= 930,
    FABS_D	= 931,
    FABS_D32	= 932,
    FABS_D64	= 933,
    FABS_MM	= 934,
    FABS_S	= 935,
    FABS_S_MM	= 936,
    FABS_W	= 937,
    FADD_D	= 938,
    FADD_D32	= 939,
    FADD_D64	= 940,
    FADD_D_MMR6	= 941,
    FADD_MM	= 942,
    FADD_S	= 943,
    FADD_S_MM	= 944,
    FADD_S_MMR6	= 945,
    FADD_W	= 946,
    FCAF_D	= 947,
    FCAF_W	= 948,
    FCEQ_D	= 949,
    FCEQ_W	= 950,
    FCLASS_D	= 951,
    FCLASS_W	= 952,
    FCLE_D	= 953,
    FCLE_W	= 954,
    FCLT_D	= 955,
    FCLT_W	= 956,
    FCMP_D32	= 957,
    FCMP_D32_MM	= 958,
    FCMP_D64	= 959,
    FCMP_S32	= 960,
    FCMP_S32_MM	= 961,
    FCNE_D	= 962,
    FCNE_W	= 963,
    FCOR_D	= 964,
    FCOR_W	= 965,
    FCUEQ_D	= 966,
    FCUEQ_W	= 967,
    FCULE_D	= 968,
    FCULE_W	= 969,
    FCULT_D	= 970,
    FCULT_W	= 971,
    FCUNE_D	= 972,
    FCUNE_W	= 973,
    FCUN_D	= 974,
    FCUN_W	= 975,
    FDIV_D	= 976,
    FDIV_D32	= 977,
    FDIV_D64	= 978,
    FDIV_D_MMR6	= 979,
    FDIV_MM	= 980,
    FDIV_S	= 981,
    FDIV_S_MM	= 982,
    FDIV_S_MMR6	= 983,
    FDIV_W	= 984,
    FEXDO_H	= 985,
    FEXDO_W	= 986,
    FEXP2_D	= 987,
    FEXP2_D_1_PSEUDO	= 988,
    FEXP2_W	= 989,
    FEXP2_W_1_PSEUDO	= 990,
    FEXUPL_D	= 991,
    FEXUPL_W	= 992,
    FEXUPR_D	= 993,
    FEXUPR_W	= 994,
    FFINT_S_D	= 995,
    FFINT_S_W	= 996,
    FFINT_U_D	= 997,
    FFINT_U_W	= 998,
    FFQL_D	= 999,
    FFQL_W	= 1000,
    FFQR_D	= 1001,
    FFQR_W	= 1002,
    FILL_B	= 1003,
    FILL_D	= 1004,
    FILL_FD_PSEUDO	= 1005,
    FILL_FW_PSEUDO	= 1006,
    FILL_H	= 1007,
    FILL_W	= 1008,
    FLOG2_D	= 1009,
    FLOG2_W	= 1010,
    FLOOR_L_D64	= 1011,
    FLOOR_L_D_MMR6	= 1012,
    FLOOR_L_S	= 1013,
    FLOOR_L_S_MMR6	= 1014,
    FLOOR_W_D32	= 1015,
    FLOOR_W_D64	= 1016,
    FLOOR_W_D_MMR6	= 1017,
    FLOOR_W_MM	= 1018,
    FLOOR_W_S	= 1019,
    FLOOR_W_S_MM	= 1020,
    FLOOR_W_S_MMR6	= 1021,
    FMADD_D	= 1022,
    FMADD_W	= 1023,
    FMAX_A_D	= 1024,
    FMAX_A_W	= 1025,
    FMAX_D	= 1026,
    FMAX_W	= 1027,
    FMIN_A_D	= 1028,
    FMIN_A_W	= 1029,
    FMIN_D	= 1030,
    FMIN_W	= 1031,
    FMOV_D32	= 1032,
    FMOV_D32_MM	= 1033,
    FMOV_D64	= 1034,
    FMOV_D_MMR6	= 1035,
    FMOV_S	= 1036,
    FMOV_S_MM	= 1037,
    FMOV_S_MMR6	= 1038,
    FMSUB_D	= 1039,
    FMSUB_W	= 1040,
    FMUL_D	= 1041,
    FMUL_D32	= 1042,
    FMUL_D64	= 1043,
    FMUL_D_MMR6	= 1044,
    FMUL_MM	= 1045,
    FMUL_S	= 1046,
    FMUL_S_MM	= 1047,
    FMUL_S_MMR6	= 1048,
    FMUL_W	= 1049,
    FNEG_D32	= 1050,
    FNEG_D64	= 1051,
    FNEG_D_MMR6	= 1052,
    FNEG_MM	= 1053,
    FNEG_S	= 1054,
    FNEG_S_MM	= 1055,
    FNEG_S_MMR6	= 1056,
    FRCP_D	= 1057,
    FRCP_W	= 1058,
    FRINT_D	= 1059,
    FRINT_W	= 1060,
    FRSQRT_D	= 1061,
    FRSQRT_W	= 1062,
    FSAF_D	= 1063,
    FSAF_W	= 1064,
    FSEQ_D	= 1065,
    FSEQ_W	= 1066,
    FSLE_D	= 1067,
    FSLE_W	= 1068,
    FSLT_D	= 1069,
    FSLT_W	= 1070,
    FSNE_D	= 1071,
    FSNE_W	= 1072,
    FSOR_D	= 1073,
    FSOR_W	= 1074,
    FSQRT_D	= 1075,
    FSQRT_D32	= 1076,
    FSQRT_D64	= 1077,
    FSQRT_MM	= 1078,
    FSQRT_S	= 1079,
    FSQRT_S_MM	= 1080,
    FSQRT_W	= 1081,
    FSUB_D	= 1082,
    FSUB_D32	= 1083,
    FSUB_D64	= 1084,
    FSUB_D_MMR6	= 1085,
    FSUB_MM	= 1086,
    FSUB_S	= 1087,
    FSUB_S_MM	= 1088,
    FSUB_S_MMR6	= 1089,
    FSUB_W	= 1090,
    FSUEQ_D	= 1091,
    FSUEQ_W	= 1092,
    FSULE_D	= 1093,
    FSULE_W	= 1094,
    FSULT_D	= 1095,
    FSULT_W	= 1096,
    FSUNE_D	= 1097,
    FSUNE_W	= 1098,
    FSUN_D	= 1099,
    FSUN_W	= 1100,
    FTINT_S_D	= 1101,
    FTINT_S_W	= 1102,
    FTINT_U_D	= 1103,
    FTINT_U_W	= 1104,
    FTQ_H	= 1105,
    FTQ_W	= 1106,
    FTRUNC_S_D	= 1107,
    FTRUNC_S_W	= 1108,
    FTRUNC_U_D	= 1109,
    FTRUNC_U_W	= 1110,
    GotPrologue16	= 1111,
    HADD_S_D	= 1112,
    HADD_S_H	= 1113,
    HADD_S_W	= 1114,
    HADD_U_D	= 1115,
    HADD_U_H	= 1116,
    HADD_U_W	= 1117,
    HSUB_S_D	= 1118,
    HSUB_S_H	= 1119,
    HSUB_S_W	= 1120,
    HSUB_U_D	= 1121,
    HSUB_U_H	= 1122,
    HSUB_U_W	= 1123,
    ILVEV_B	= 1124,
    ILVEV_D	= 1125,
    ILVEV_H	= 1126,
    ILVEV_W	= 1127,
    ILVL_B	= 1128,
    ILVL_D	= 1129,
    ILVL_H	= 1130,
    ILVL_W	= 1131,
    ILVOD_B	= 1132,
    ILVOD_D	= 1133,
    ILVOD_H	= 1134,
    ILVOD_W	= 1135,
    ILVR_B	= 1136,
    ILVR_D	= 1137,
    ILVR_H	= 1138,
    ILVR_W	= 1139,
    INS	= 1140,
    INSERT_B	= 1141,
    INSERT_B_VIDX64_PSEUDO	= 1142,
    INSERT_B_VIDX_PSEUDO	= 1143,
    INSERT_D	= 1144,
    INSERT_D_VIDX64_PSEUDO	= 1145,
    INSERT_D_VIDX_PSEUDO	= 1146,
    INSERT_FD_PSEUDO	= 1147,
    INSERT_FD_VIDX64_PSEUDO	= 1148,
    INSERT_FD_VIDX_PSEUDO	= 1149,
    INSERT_FW_PSEUDO	= 1150,
    INSERT_FW_VIDX64_PSEUDO	= 1151,
    INSERT_FW_VIDX_PSEUDO	= 1152,
    INSERT_H	= 1153,
    INSERT_H_VIDX64_PSEUDO	= 1154,
    INSERT_H_VIDX_PSEUDO	= 1155,
    INSERT_W	= 1156,
    INSERT_W_VIDX64_PSEUDO	= 1157,
    INSERT_W_VIDX_PSEUDO	= 1158,
    INSV	= 1159,
    INSVE_B	= 1160,
    INSVE_D	= 1161,
    INSVE_H	= 1162,
    INSVE_W	= 1163,
    INSV_MM	= 1164,
    INS_MM	= 1165,
    INS_MMR6	= 1166,
    J	= 1167,
    JAL	= 1168,
    JALR	= 1169,
    JALR16_MM	= 1170,
    JALR64	= 1171,
    JALR64Pseudo	= 1172,
    JALRC16_MMR6	= 1173,
    JALRC_HB_MMR6	= 1174,
    JALRC_MMR6	= 1175,
    JALRPseudo	= 1176,
    JALRS16_MM	= 1177,
    JALRS_MM	= 1178,
    JALR_HB	= 1179,
    JALR_MM	= 1180,
    JALS_MM	= 1181,
    JALX	= 1182,
    JALX_MM	= 1183,
    JAL_MM	= 1184,
    JIALC	= 1185,
    JIALC64	= 1186,
    JIALC_MMR6	= 1187,
    JIC	= 1188,
    JIC64	= 1189,
    JIC_MMR6	= 1190,
    JR	= 1191,
    JR16_MM	= 1192,
    JR64	= 1193,
    JRADDIUSP	= 1194,
    JRC16_MM	= 1195,
    JRC16_MMR6	= 1196,
    JRCADDIUSP_MMR6	= 1197,
    JR_HB	= 1198,
    JR_HB_R6	= 1199,
    JR_MM	= 1200,
    J_MM	= 1201,
    Jal16	= 1202,
    JalB16	= 1203,
    JalOneReg	= 1204,
    JalTwoReg	= 1205,
    JrRa16	= 1206,
    JrcRa16	= 1207,
    JrcRx16	= 1208,
    JumpLinkReg16	= 1209,
    LB	= 1210,
    LB64	= 1211,
    LBE	= 1212,
    LBE_MM	= 1213,
    LBE_MMR6	= 1214,
    LBU16_MM	= 1215,
    LBUE_MMR6	= 1216,
    LBUX	= 1217,
    LBUX_MM	= 1218,
    LBU_MMR6	= 1219,
    LB_MM	= 1220,
    LB_MMR6	= 1221,
    LBu	= 1222,
    LBu64	= 1223,
    LBuE	= 1224,
    LBuE_MM	= 1225,
    LBu_MM	= 1226,
    LD	= 1227,
    LDC1	= 1228,
    LDC164	= 1229,
    LDC1_D64_MMR6	= 1230,
    LDC1_MM	= 1231,
    LDC2	= 1232,
    LDC2_MMR6	= 1233,
    LDC2_R6	= 1234,
    LDC3	= 1235,
    LDI_B	= 1236,
    LDI_D	= 1237,
    LDI_H	= 1238,
    LDI_W	= 1239,
    LDL	= 1240,
    LDPC	= 1241,
    LDPC_MM64R6	= 1242,
    LDR	= 1243,
    LDXC1	= 1244,
    LDXC164	= 1245,
    LD_B	= 1246,
    LD_D	= 1247,
    LD_H	= 1248,
    LD_MM64R6	= 1249,
    LD_W	= 1250,
    LEA_ADDiu	= 1251,
    LEA_ADDiu64	= 1252,
    LEA_ADDiu_MM	= 1253,
    LH	= 1254,
    LH64	= 1255,
    LHE	= 1256,
    LHE_MM	= 1257,
    LHU16_MM	= 1258,
    LHX	= 1259,
    LHX_MM	= 1260,
    LH_MM	= 1261,
    LHu	= 1262,
    LHu64	= 1263,
    LHuE	= 1264,
    LHuE_MM	= 1265,
    LHu_MM	= 1266,
    LI16_MM	= 1267,
    LI16_MMR6	= 1268,
    LL	= 1269,
    LL64	= 1270,
    LL64_R6	= 1271,
    LLD	= 1272,
    LLD_MM64R6	= 1273,
    LLD_R6	= 1274,
    LLE	= 1275,
    LLE_MM	= 1276,
    LLE_MMR6	= 1277,
    LL_MM	= 1278,
    LL_R6	= 1279,
    LOAD_ACC128	= 1280,
    LOAD_ACC64	= 1281,
    LOAD_ACC64DSP	= 1282,
    LOAD_CCOND_DSP	= 1283,
    LONG_BRANCH_ADDiu	= 1284,
    LONG_BRANCH_DADDiu	= 1285,
    LONG_BRANCH_LUi	= 1286,
    LSA	= 1287,
    LSA_MMR6	= 1288,
    LSA_R6	= 1289,
    LUI_MMR6	= 1290,
    LUXC1	= 1291,
    LUXC164	= 1292,
    LUXC1_MM	= 1293,
    LUi	= 1294,
    LUi64	= 1295,
    LUi_MM	= 1296,
    LW	= 1297,
    LW16_MM	= 1298,
    LW64	= 1299,
    LWC1	= 1300,
    LWC1_MM	= 1301,
    LWC2	= 1302,
    LWC2_MMR6	= 1303,
    LWC2_R6	= 1304,
    LWC3	= 1305,
    LWE	= 1306,
    LWE_MM	= 1307,
    LWE_MMR6	= 1308,
    LWGP_MM	= 1309,
    LWL	= 1310,
    LWL64	= 1311,
    LWLE	= 1312,
    LWLE_MM	= 1313,
    LWL_MM	= 1314,
    LWM16_MM	= 1315,
    LWM16_MMR6	= 1316,
    LWM32_MM	= 1317,
    LWM_MM	= 1318,
    LWPC	= 1319,
    LWPC_MMR6	= 1320,
    LWP_MM	= 1321,
    LWP_MMR6	= 1322,
    LWR	= 1323,
    LWR64	= 1324,
    LWRE	= 1325,
    LWRE_MM	= 1326,
    LWR_MM	= 1327,
    LWSP_MM	= 1328,
    LWUPC	= 1329,
    LWU_MM	= 1330,
    LWU_MM64R6	= 1331,
    LWX	= 1332,
    LWXC1	= 1333,
    LWXC1_MM	= 1334,
    LWXS_MM	= 1335,
    LWX_MM	= 1336,
    LW_MM	= 1337,
    LW_MMR6	= 1338,
    LWu	= 1339,
    LbRxRyOffMemX16	= 1340,
    LbuRxRyOffMemX16	= 1341,
    LhRxRyOffMemX16	= 1342,
    LhuRxRyOffMemX16	= 1343,
    LiRxImm16	= 1344,
    LiRxImmAlignX16	= 1345,
    LiRxImmX16	= 1346,
    LoadAddrImm32	= 1347,
    LoadAddrImm64	= 1348,
    LoadAddrReg32	= 1349,
    LoadAddrReg64	= 1350,
    LoadImm32	= 1351,
    LoadImm64	= 1352,
    LwConstant32	= 1353,
    LwRxPcTcp16	= 1354,
    LwRxPcTcpX16	= 1355,
    LwRxRyOffMemX16	= 1356,
    LwRxSpImmX16	= 1357,
    MADD	= 1358,
    MADDF_D	= 1359,
    MADDF_D_MMR6	= 1360,
    MADDF_S	= 1361,
    MADDF_S_MMR6	= 1362,
    MADDR_Q_H	= 1363,
    MADDR_Q_W	= 1364,
    MADDU	= 1365,
    MADDU_DSP	= 1366,
    MADDU_DSP_MM	= 1367,
    MADDU_MM	= 1368,
    MADDV_B	= 1369,
    MADDV_D	= 1370,
    MADDV_H	= 1371,
    MADDV_W	= 1372,
    MADD_D32	= 1373,
    MADD_D32_MM	= 1374,
    MADD_D64	= 1375,
    MADD_DSP	= 1376,
    MADD_DSP_MM	= 1377,
    MADD_MM	= 1378,
    MADD_Q_H	= 1379,
    MADD_Q_W	= 1380,
    MADD_S	= 1381,
    MADD_S_MM	= 1382,
    MAQ_SA_W_PHL	= 1383,
    MAQ_SA_W_PHL_MM	= 1384,
    MAQ_SA_W_PHR	= 1385,
    MAQ_SA_W_PHR_MM	= 1386,
    MAQ_S_W_PHL	= 1387,
    MAQ_S_W_PHL_MM	= 1388,
    MAQ_S_W_PHR	= 1389,
    MAQ_S_W_PHR_MM	= 1390,
    MAXA_D	= 1391,
    MAXA_D_MMR6	= 1392,
    MAXA_S	= 1393,
    MAXA_S_MMR6	= 1394,
    MAXI_S_B	= 1395,
    MAXI_S_D	= 1396,
    MAXI_S_H	= 1397,
    MAXI_S_W	= 1398,
    MAXI_U_B	= 1399,
    MAXI_U_D	= 1400,
    MAXI_U_H	= 1401,
    MAXI_U_W	= 1402,
    MAX_A_B	= 1403,
    MAX_A_D	= 1404,
    MAX_A_H	= 1405,
    MAX_A_W	= 1406,
    MAX_D	= 1407,
    MAX_D_MMR6	= 1408,
    MAX_S	= 1409,
    MAX_S_B	= 1410,
    MAX_S_D	= 1411,
    MAX_S_H	= 1412,
    MAX_S_MMR6	= 1413,
    MAX_S_W	= 1414,
    MAX_U_B	= 1415,
    MAX_U_D	= 1416,
    MAX_U_H	= 1417,
    MAX_U_W	= 1418,
    MFC0	= 1419,
    MFC0_MMR6	= 1420,
    MFC1	= 1421,
    MFC1_MM	= 1422,
    MFC1_MMR6	= 1423,
    MFC2	= 1424,
    MFC2_MMR6	= 1425,
    MFHC0_MMR6	= 1426,
    MFHC1_D32	= 1427,
    MFHC1_D32_MMR6	= 1428,
    MFHC1_D64	= 1429,
    MFHC1_D64_MMR6	= 1430,
    MFHC1_MM	= 1431,
    MFHC2_MMR6	= 1432,
    MFHI	= 1433,
    MFHI16_MM	= 1434,
    MFHI64	= 1435,
    MFHI_DSP	= 1436,
    MFHI_DSP_MM	= 1437,
    MFHI_MM	= 1438,
    MFLO	= 1439,
    MFLO16_MM	= 1440,
    MFLO64	= 1441,
    MFLO_DSP	= 1442,
    MFLO_DSP_MM	= 1443,
    MFLO_MM	= 1444,
    MINA_D	= 1445,
    MINA_D_MMR6	= 1446,
    MINA_S	= 1447,
    MINA_S_MMR6	= 1448,
    MINI_S_B	= 1449,
    MINI_S_D	= 1450,
    MINI_S_H	= 1451,
    MINI_S_W	= 1452,
    MINI_U_B	= 1453,
    MINI_U_D	= 1454,
    MINI_U_H	= 1455,
    MINI_U_W	= 1456,
    MIN_A_B	= 1457,
    MIN_A_D	= 1458,
    MIN_A_H	= 1459,
    MIN_A_W	= 1460,
    MIN_D	= 1461,
    MIN_D_MMR6	= 1462,
    MIN_S	= 1463,
    MIN_S_B	= 1464,
    MIN_S_D	= 1465,
    MIN_S_H	= 1466,
    MIN_S_MMR6	= 1467,
    MIN_S_W	= 1468,
    MIN_U_B	= 1469,
    MIN_U_D	= 1470,
    MIN_U_H	= 1471,
    MIN_U_W	= 1472,
    MIPSeh_return32	= 1473,
    MIPSeh_return64	= 1474,
    MOD	= 1475,
    MODSUB	= 1476,
    MODSUB_MM	= 1477,
    MODU	= 1478,
    MODU_MMR6	= 1479,
    MOD_MMR6	= 1480,
    MOD_S_B	= 1481,
    MOD_S_D	= 1482,
    MOD_S_H	= 1483,
    MOD_S_W	= 1484,
    MOD_U_B	= 1485,
    MOD_U_D	= 1486,
    MOD_U_H	= 1487,
    MOD_U_W	= 1488,
    MOVE16_MM	= 1489,
    MOVE16_MMR6	= 1490,
    MOVEP_MM	= 1491,
    MOVE_V	= 1492,
    MOVF_D32	= 1493,
    MOVF_D32_MM	= 1494,
    MOVF_D64	= 1495,
    MOVF_I	= 1496,
    MOVF_I64	= 1497,
    MOVF_I_MM	= 1498,
    MOVF_S	= 1499,
    MOVF_S_MM	= 1500,
    MOVN_I64_D64	= 1501,
    MOVN_I64_I	= 1502,
    MOVN_I64_I64	= 1503,
    MOVN_I64_S	= 1504,
    MOVN_I_D32	= 1505,
    MOVN_I_D32_MM	= 1506,
    MOVN_I_D64	= 1507,
    MOVN_I_I	= 1508,
    MOVN_I_I64	= 1509,
    MOVN_I_MM	= 1510,
    MOVN_I_S	= 1511,
    MOVN_I_S_MM	= 1512,
    MOVT_D32	= 1513,
    MOVT_D32_MM	= 1514,
    MOVT_D64	= 1515,
    MOVT_I	= 1516,
    MOVT_I64	= 1517,
    MOVT_I_MM	= 1518,
    MOVT_S	= 1519,
    MOVT_S_MM	= 1520,
    MOVZ_I64_D64	= 1521,
    MOVZ_I64_I	= 1522,
    MOVZ_I64_I64	= 1523,
    MOVZ_I64_S	= 1524,
    MOVZ_I_D32	= 1525,
    MOVZ_I_D32_MM	= 1526,
    MOVZ_I_D64	= 1527,
    MOVZ_I_I	= 1528,
    MOVZ_I_I64	= 1529,
    MOVZ_I_MM	= 1530,
    MOVZ_I_S	= 1531,
    MOVZ_I_S_MM	= 1532,
    MSUB	= 1533,
    MSUBF_D	= 1534,
    MSUBF_D_MMR6	= 1535,
    MSUBF_S	= 1536,
    MSUBF_S_MMR6	= 1537,
    MSUBR_Q_H	= 1538,
    MSUBR_Q_W	= 1539,
    MSUBU	= 1540,
    MSUBU_DSP	= 1541,
    MSUBU_DSP_MM	= 1542,
    MSUBU_MM	= 1543,
    MSUBV_B	= 1544,
    MSUBV_D	= 1545,
    MSUBV_H	= 1546,
    MSUBV_W	= 1547,
    MSUB_D32	= 1548,
    MSUB_D32_MM	= 1549,
    MSUB_D64	= 1550,
    MSUB_DSP	= 1551,
    MSUB_DSP_MM	= 1552,
    MSUB_MM	= 1553,
    MSUB_Q_H	= 1554,
    MSUB_Q_W	= 1555,
    MSUB_S	= 1556,
    MSUB_S_MM	= 1557,
    MTC0	= 1558,
    MTC0_MMR6	= 1559,
    MTC1	= 1560,
    MTC1_MM	= 1561,
    MTC1_MMR6	= 1562,
    MTC2	= 1563,
    MTC2_MMR6	= 1564,
    MTHC0_MMR6	= 1565,
    MTHC1_D32	= 1566,
    MTHC1_D32_MMR6	= 1567,
    MTHC1_D64	= 1568,
    MTHC1_D64_MMR6	= 1569,
    MTHC1_MM	= 1570,
    MTHC2_MMR6	= 1571,
    MTHI	= 1572,
    MTHI64	= 1573,
    MTHI_DSP	= 1574,
    MTHI_DSP_MM	= 1575,
    MTHI_MM	= 1576,
    MTHLIP	= 1577,
    MTHLIP_MM	= 1578,
    MTLO	= 1579,
    MTLO64	= 1580,
    MTLO_DSP	= 1581,
    MTLO_DSP_MM	= 1582,
    MTLO_MM	= 1583,
    MTM0	= 1584,
    MTM1	= 1585,
    MTM2	= 1586,
    MTP0	= 1587,
    MTP1	= 1588,
    MTP2	= 1589,
    MUH	= 1590,
    MUHU	= 1591,
    MUHU_MMR6	= 1592,
    MUH_MMR6	= 1593,
    MUL	= 1594,
    MULEQ_S_W_PHL	= 1595,
    MULEQ_S_W_PHL_MM	= 1596,
    MULEQ_S_W_PHR	= 1597,
    MULEQ_S_W_PHR_MM	= 1598,
    MULEU_S_PH_QBL	= 1599,
    MULEU_S_PH_QBL_MM	= 1600,
    MULEU_S_PH_QBR	= 1601,
    MULEU_S_PH_QBR_MM	= 1602,
    MULQ_RS_PH	= 1603,
    MULQ_RS_PH_MM	= 1604,
    MULQ_RS_W	= 1605,
    MULQ_RS_W_MMR2	= 1606,
    MULQ_S_PH	= 1607,
    MULQ_S_PH_MMR2	= 1608,
    MULQ_S_W	= 1609,
    MULQ_S_W_MMR2	= 1610,
    MULR_Q_H	= 1611,
    MULR_Q_W	= 1612,
    MULSAQ_S_W_PH	= 1613,
    MULSAQ_S_W_PH_MM	= 1614,
    MULSA_W_PH	= 1615,
    MULSA_W_PH_MMR2	= 1616,
    MULT	= 1617,
    MULTU_DSP	= 1618,
    MULTU_DSP_MM	= 1619,
    MULT_DSP	= 1620,
    MULT_DSP_MM	= 1621,
    MULT_MM	= 1622,
    MULTu	= 1623,
    MULTu_MM	= 1624,
    MULU	= 1625,
    MULU_MMR6	= 1626,
    MULV_B	= 1627,
    MULV_D	= 1628,
    MULV_H	= 1629,
    MULV_W	= 1630,
    MUL_MM	= 1631,
    MUL_MMR6	= 1632,
    MUL_PH	= 1633,
    MUL_PH_MMR2	= 1634,
    MUL_Q_H	= 1635,
    MUL_Q_W	= 1636,
    MUL_R6	= 1637,
    MUL_S_PH	= 1638,
    MUL_S_PH_MMR2	= 1639,
    Mfhi16	= 1640,
    Mflo16	= 1641,
    Move32R16	= 1642,
    MoveR3216	= 1643,
    MultRxRy16	= 1644,
    MultRxRyRz16	= 1645,
    MultuRxRy16	= 1646,
    MultuRxRyRz16	= 1647,
    NLOC_B	= 1648,
    NLOC_D	= 1649,
    NLOC_H	= 1650,
    NLOC_W	= 1651,
    NLZC_B	= 1652,
    NLZC_D	= 1653,
    NLZC_H	= 1654,
    NLZC_W	= 1655,
    NMADD_D32	= 1656,
    NMADD_D32_MM	= 1657,
    NMADD_D64	= 1658,
    NMADD_S	= 1659,
    NMADD_S_MM	= 1660,
    NMSUB_D32	= 1661,
    NMSUB_D32_MM	= 1662,
    NMSUB_D64	= 1663,
    NMSUB_S	= 1664,
    NMSUB_S_MM	= 1665,
    NOP	= 1666,
    NOR	= 1667,
    NOR64	= 1668,
    NORI_B	= 1669,
    NORImm	= 1670,
    NOR_MM	= 1671,
    NOR_MMR6	= 1672,
    NOR_V	= 1673,
    NOR_V_D_PSEUDO	= 1674,
    NOR_V_H_PSEUDO	= 1675,
    NOR_V_W_PSEUDO	= 1676,
    NOT16_MM	= 1677,
    NOT16_MMR6	= 1678,
    NegRxRy16	= 1679,
    NotRxRy16	= 1680,
    OR	= 1681,
    OR16_MM	= 1682,
    OR16_MMR6	= 1683,
    OR64	= 1684,
    ORI_B	= 1685,
    ORI_MMR6	= 1686,
    OR_MM	= 1687,
    OR_MMR6	= 1688,
    OR_V	= 1689,
    OR_V_D_PSEUDO	= 1690,
    OR_V_H_PSEUDO	= 1691,
    OR_V_W_PSEUDO	= 1692,
    ORi	= 1693,
    ORi64	= 1694,
    ORi_MM	= 1695,
    OrRxRxRy16	= 1696,
    PACKRL_PH	= 1697,
    PACKRL_PH_MM	= 1698,
    PAUSE	= 1699,
    PAUSE_MM	= 1700,
    PAUSE_MMR6	= 1701,
    PCKEV_B	= 1702,
    PCKEV_D	= 1703,
    PCKEV_H	= 1704,
    PCKEV_W	= 1705,
    PCKOD_B	= 1706,
    PCKOD_D	= 1707,
    PCKOD_H	= 1708,
    PCKOD_W	= 1709,
    PCNT_B	= 1710,
    PCNT_D	= 1711,
    PCNT_H	= 1712,
    PCNT_W	= 1713,
    PICK_PH	= 1714,
    PICK_PH_MM	= 1715,
    PICK_QB	= 1716,
    PICK_QB_MM	= 1717,
    POP	= 1718,
    PRECEQU_PH_QBL	= 1719,
    PRECEQU_PH_QBLA	= 1720,
    PRECEQU_PH_QBLA_MM	= 1721,
    PRECEQU_PH_QBL_MM	= 1722,
    PRECEQU_PH_QBR	= 1723,
    PRECEQU_PH_QBRA	= 1724,
    PRECEQU_PH_QBRA_MM	= 1725,
    PRECEQU_PH_QBR_MM	= 1726,
    PRECEQ_W_PHL	= 1727,
    PRECEQ_W_PHL_MM	= 1728,
    PRECEQ_W_PHR	= 1729,
    PRECEQ_W_PHR_MM	= 1730,
    PRECEU_PH_QBL	= 1731,
    PRECEU_PH_QBLA	= 1732,
    PRECEU_PH_QBLA_MM	= 1733,
    PRECEU_PH_QBL_MM	= 1734,
    PRECEU_PH_QBR	= 1735,
    PRECEU_PH_QBRA	= 1736,
    PRECEU_PH_QBRA_MM	= 1737,
    PRECEU_PH_QBR_MM	= 1738,
    PRECRQU_S_QB_PH	= 1739,
    PRECRQU_S_QB_PH_MM	= 1740,
    PRECRQ_PH_W	= 1741,
    PRECRQ_PH_W_MM	= 1742,
    PRECRQ_QB_PH	= 1743,
    PRECRQ_QB_PH_MM	= 1744,
    PRECRQ_RS_PH_W	= 1745,
    PRECRQ_RS_PH_W_MM	= 1746,
    PRECR_QB_PH	= 1747,
    PRECR_QB_PH_MMR2	= 1748,
    PRECR_SRA_PH_W	= 1749,
    PRECR_SRA_PH_W_MMR2	= 1750,
    PRECR_SRA_R_PH_W	= 1751,
    PRECR_SRA_R_PH_W_MMR2	= 1752,
    PREF	= 1753,
    PREFE	= 1754,
    PREFE_MM	= 1755,
    PREFE_MMR6	= 1756,
    PREFX_MM	= 1757,
    PREF_MM	= 1758,
    PREF_MMR6	= 1759,
    PREF_R6	= 1760,
    PREPEND	= 1761,
    PREPEND_MMR2	= 1762,
    PseudoCMPU_EQ_QB	= 1763,
    PseudoCMPU_LE_QB	= 1764,
    PseudoCMPU_LT_QB	= 1765,
    PseudoCMP_EQ_PH	= 1766,
    PseudoCMP_LE_PH	= 1767,
    PseudoCMP_LT_PH	= 1768,
    PseudoCVT_D32_W	= 1769,
    PseudoCVT_D64_L	= 1770,
    PseudoCVT_D64_W	= 1771,
    PseudoCVT_S_L	= 1772,
    PseudoCVT_S_W	= 1773,
    PseudoDMULT	= 1774,
    PseudoDMULTu	= 1775,
    PseudoDSDIV	= 1776,
    PseudoDUDIV	= 1777,
    PseudoIndirectBranch	= 1778,
    PseudoIndirectBranch64	= 1779,
    PseudoMADD	= 1780,
    PseudoMADDU	= 1781,
    PseudoMFHI	= 1782,
    PseudoMFHI64	= 1783,
    PseudoMFLO	= 1784,
    PseudoMFLO64	= 1785,
    PseudoMSUB	= 1786,
    PseudoMSUBU	= 1787,
    PseudoMTLOHI	= 1788,
    PseudoMTLOHI64	= 1789,
    PseudoMTLOHI_DSP	= 1790,
    PseudoMULT	= 1791,
    PseudoMULTu	= 1792,
    PseudoPICK_PH	= 1793,
    PseudoPICK_QB	= 1794,
    PseudoReturn	= 1795,
    PseudoReturn64	= 1796,
    PseudoSDIV	= 1797,
    PseudoSELECTFP_F_D32	= 1798,
    PseudoSELECTFP_F_D64	= 1799,
    PseudoSELECTFP_F_I	= 1800,
    PseudoSELECTFP_F_I64	= 1801,
    PseudoSELECTFP_F_S	= 1802,
    PseudoSELECTFP_T_D32	= 1803,
    PseudoSELECTFP_T_D64	= 1804,
    PseudoSELECTFP_T_I	= 1805,
    PseudoSELECTFP_T_I64	= 1806,
    PseudoSELECTFP_T_S	= 1807,
    PseudoSELECT_D32	= 1808,
    PseudoSELECT_D64	= 1809,
    PseudoSELECT_I	= 1810,
    PseudoSELECT_I64	= 1811,
    PseudoSELECT_S	= 1812,
    PseudoTRUNC_W_D	= 1813,
    PseudoTRUNC_W_D32	= 1814,
    PseudoTRUNC_W_S	= 1815,
    PseudoUDIV	= 1816,
    RADDU_W_QB	= 1817,
    RADDU_W_QB_MM	= 1818,
    RDDSP	= 1819,
    RDDSP_MM	= 1820,
    RDHWR	= 1821,
    RDHWR64	= 1822,
    RDHWR_MM	= 1823,
    RDHWR_MMR6	= 1824,
    RDPGPR_MMR6	= 1825,
    RECIP_D_MMR6	= 1826,
    RECIP_S_MMR6	= 1827,
    REPLV_PH	= 1828,
    REPLV_PH_MM	= 1829,
    REPLV_QB	= 1830,
    REPLV_QB_MM	= 1831,
    REPL_PH	= 1832,
    REPL_PH_MM	= 1833,
    REPL_QB	= 1834,
    REPL_QB_MM	= 1835,
    RINT_D	= 1836,
    RINT_D_MMR6	= 1837,
    RINT_S	= 1838,
    RINT_S_MMR6	= 1839,
    ROL	= 1840,
    ROLImm	= 1841,
    ROR	= 1842,
    RORImm	= 1843,
    ROTR	= 1844,
    ROTRV	= 1845,
    ROTRV_MM	= 1846,
    ROTR_MM	= 1847,
    ROUND_L_D64	= 1848,
    ROUND_L_D_MMR6	= 1849,
    ROUND_L_S	= 1850,
    ROUND_L_S_MMR6	= 1851,
    ROUND_W_D32	= 1852,
    ROUND_W_D64	= 1853,
    ROUND_W_D_MMR6	= 1854,
    ROUND_W_MM	= 1855,
    ROUND_W_S	= 1856,
    ROUND_W_S_MM	= 1857,
    ROUND_W_S_MMR6	= 1858,
    RSQRT_D_MMR6	= 1859,
    RSQRT_S_MMR6	= 1860,
    Restore16	= 1861,
    RestoreX16	= 1862,
    RetRA	= 1863,
    RetRA16	= 1864,
    SAT_S_B	= 1865,
    SAT_S_D	= 1866,
    SAT_S_H	= 1867,
    SAT_S_W	= 1868,
    SAT_U_B	= 1869,
    SAT_U_D	= 1870,
    SAT_U_H	= 1871,
    SAT_U_W	= 1872,
    SB	= 1873,
    SB16_MM	= 1874,
    SB16_MMR6	= 1875,
    SB64	= 1876,
    SBE	= 1877,
    SBE_MM	= 1878,
    SBE_MMR6	= 1879,
    SB_MM	= 1880,
    SB_MMR6	= 1881,
    SC	= 1882,
    SC64	= 1883,
    SC64_R6	= 1884,
    SCD	= 1885,
    SCD_R6	= 1886,
    SCE	= 1887,
    SCE_MM	= 1888,
    SCE_MMR6	= 1889,
    SC_MM	= 1890,
    SC_R6	= 1891,
    SD	= 1892,
    SDBBP	= 1893,
    SDBBP16_MM	= 1894,
    SDBBP16_MMR6	= 1895,
    SDBBP_MM	= 1896,
    SDBBP_MMR6	= 1897,
    SDBBP_R6	= 1898,
    SDC1	= 1899,
    SDC164	= 1900,
    SDC1_D64_MMR6	= 1901,
    SDC1_MM	= 1902,
    SDC2	= 1903,
    SDC2_MMR6	= 1904,
    SDC2_R6	= 1905,
    SDC3	= 1906,
    SDIV	= 1907,
    SDIV_MM	= 1908,
    SDIV_MM_Pseudo	= 1909,
    SDL	= 1910,
    SDR	= 1911,
    SDXC1	= 1912,
    SDXC164	= 1913,
    SD_MM64R6	= 1914,
    SDivMacro	= 1915,
    SEB	= 1916,
    SEB64	= 1917,
    SEB_MM	= 1918,
    SEB_MMR6	= 1919,
    SEH	= 1920,
    SEH64	= 1921,
    SEH_MM	= 1922,
    SEH_MMR6	= 1923,
    SELEQZ	= 1924,
    SELEQZ64	= 1925,
    SELEQZ_D	= 1926,
    SELEQZ_D_MMR6	= 1927,
    SELEQZ_MMR6	= 1928,
    SELEQZ_S	= 1929,
    SELEQZ_S_MMR6	= 1930,
    SELNEZ	= 1931,
    SELNEZ64	= 1932,
    SELNEZ_D	= 1933,
    SELNEZ_D_MMR6	= 1934,
    SELNEZ_MMR6	= 1935,
    SELNEZ_S	= 1936,
    SELNEZ_S_MMR6	= 1937,
    SEL_D	= 1938,
    SEL_D_MMR6	= 1939,
    SEL_S	= 1940,
    SEL_S_MMR6	= 1941,
    SEQ	= 1942,
    SEQi	= 1943,
    SH	= 1944,
    SH16_MM	= 1945,
    SH16_MMR6	= 1946,
    SH64	= 1947,
    SHE	= 1948,
    SHE_MM	= 1949,
    SHE_MMR6	= 1950,
    SHF_B	= 1951,
    SHF_H	= 1952,
    SHF_W	= 1953,
    SHILO	= 1954,
    SHILOV	= 1955,
    SHILOV_MM	= 1956,
    SHILO_MM	= 1957,
    SHLLV_PH	= 1958,
    SHLLV_PH_MM	= 1959,
    SHLLV_QB	= 1960,
    SHLLV_QB_MM	= 1961,
    SHLLV_S_PH	= 1962,
    SHLLV_S_PH_MM	= 1963,
    SHLLV_S_W	= 1964,
    SHLLV_S_W_MM	= 1965,
    SHLL_PH	= 1966,
    SHLL_PH_MM	= 1967,
    SHLL_QB	= 1968,
    SHLL_QB_MM	= 1969,
    SHLL_S_PH	= 1970,
    SHLL_S_PH_MM	= 1971,
    SHLL_S_W	= 1972,
    SHLL_S_W_MM	= 1973,
    SHRAV_PH	= 1974,
    SHRAV_PH_MM	= 1975,
    SHRAV_QB	= 1976,
    SHRAV_QB_MMR2	= 1977,
    SHRAV_R_PH	= 1978,
    SHRAV_R_PH_MM	= 1979,
    SHRAV_R_QB	= 1980,
    SHRAV_R_QB_MMR2	= 1981,
    SHRAV_R_W	= 1982,
    SHRAV_R_W_MM	= 1983,
    SHRA_PH	= 1984,
    SHRA_PH_MM	= 1985,
    SHRA_QB	= 1986,
    SHRA_QB_MMR2	= 1987,
    SHRA_R_PH	= 1988,
    SHRA_R_PH_MM	= 1989,
    SHRA_R_QB	= 1990,
    SHRA_R_QB_MMR2	= 1991,
    SHRA_R_W	= 1992,
    SHRA_R_W_MM	= 1993,
    SHRLV_PH	= 1994,
    SHRLV_PH_MMR2	= 1995,
    SHRLV_QB	= 1996,
    SHRLV_QB_MM	= 1997,
    SHRL_PH	= 1998,
    SHRL_PH_MMR2	= 1999,
    SHRL_QB	= 2000,
    SHRL_QB_MM	= 2001,
    SH_MM	= 2002,
    SH_MMR6	= 2003,
    SLDI_B	= 2004,
    SLDI_D	= 2005,
    SLDI_H	= 2006,
    SLDI_W	= 2007,
    SLD_B	= 2008,
    SLD_D	= 2009,
    SLD_H	= 2010,
    SLD_W	= 2011,
    SLL	= 2012,
    SLL16_MM	= 2013,
    SLL16_MMR6	= 2014,
    SLL64_32	= 2015,
    SLL64_64	= 2016,
    SLLI_B	= 2017,
    SLLI_D	= 2018,
    SLLI_H	= 2019,
    SLLI_W	= 2020,
    SLLV	= 2021,
    SLLV_MM	= 2022,
    SLL_B	= 2023,
    SLL_D	= 2024,
    SLL_H	= 2025,
    SLL_MM	= 2026,
    SLL_MMR6	= 2027,
    SLL_W	= 2028,
    SLT	= 2029,
    SLT64	= 2030,
    SLT_MM	= 2031,
    SLTi	= 2032,
    SLTi64	= 2033,
    SLTi_MM	= 2034,
    SLTiu	= 2035,
    SLTiu64	= 2036,
    SLTiu_MM	= 2037,
    SLTu	= 2038,
    SLTu64	= 2039,
    SLTu_MM	= 2040,
    SNE	= 2041,
    SNEi	= 2042,
    SNZ_B_PSEUDO	= 2043,
    SNZ_D_PSEUDO	= 2044,
    SNZ_H_PSEUDO	= 2045,
    SNZ_V_PSEUDO	= 2046,
    SNZ_W_PSEUDO	= 2047,
    SPLATI_B	= 2048,
    SPLATI_D	= 2049,
    SPLATI_H	= 2050,
    SPLATI_W	= 2051,
    SPLAT_B	= 2052,
    SPLAT_D	= 2053,
    SPLAT_H	= 2054,
    SPLAT_W	= 2055,
    SQRT_D_MMR6	= 2056,
    SQRT_S_MMR6	= 2057,
    SRA	= 2058,
    SRAI_B	= 2059,
    SRAI_D	= 2060,
    SRAI_H	= 2061,
    SRAI_W	= 2062,
    SRARI_B	= 2063,
    SRARI_D	= 2064,
    SRARI_H	= 2065,
    SRARI_W	= 2066,
    SRAR_B	= 2067,
    SRAR_D	= 2068,
    SRAR_H	= 2069,
    SRAR_W	= 2070,
    SRAV	= 2071,
    SRAV_MM	= 2072,
    SRA_B	= 2073,
    SRA_D	= 2074,
    SRA_H	= 2075,
    SRA_MM	= 2076,
    SRA_W	= 2077,
    SRL	= 2078,
    SRL16_MM	= 2079,
    SRL16_MMR6	= 2080,
    SRLI_B	= 2081,
    SRLI_D	= 2082,
    SRLI_H	= 2083,
    SRLI_W	= 2084,
    SRLRI_B	= 2085,
    SRLRI_D	= 2086,
    SRLRI_H	= 2087,
    SRLRI_W	= 2088,
    SRLR_B	= 2089,
    SRLR_D	= 2090,
    SRLR_H	= 2091,
    SRLR_W	= 2092,
    SRLV	= 2093,
    SRLV_MM	= 2094,
    SRL_B	= 2095,
    SRL_D	= 2096,
    SRL_H	= 2097,
    SRL_MM	= 2098,
    SRL_W	= 2099,
    SSNOP	= 2100,
    SSNOP_MM	= 2101,
    SSNOP_MMR6	= 2102,
    STORE_ACC128	= 2103,
    STORE_ACC64	= 2104,
    STORE_ACC64DSP	= 2105,
    STORE_CCOND_DSP	= 2106,
    ST_B	= 2107,
    ST_D	= 2108,
    ST_H	= 2109,
    ST_W	= 2110,
    SUB	= 2111,
    SUBQH_PH	= 2112,
    SUBQH_PH_MMR2	= 2113,
    SUBQH_R_PH	= 2114,
    SUBQH_R_PH_MMR2	= 2115,
    SUBQH_R_W	= 2116,
    SUBQH_R_W_MMR2	= 2117,
    SUBQH_W	= 2118,
    SUBQH_W_MMR2	= 2119,
    SUBQ_PH	= 2120,
    SUBQ_PH_MM	= 2121,
    SUBQ_S_PH	= 2122,
    SUBQ_S_PH_MM	= 2123,
    SUBQ_S_W	= 2124,
    SUBQ_S_W_MM	= 2125,
    SUBSUS_U_B	= 2126,
    SUBSUS_U_D	= 2127,
    SUBSUS_U_H	= 2128,
    SUBSUS_U_W	= 2129,
    SUBSUU_S_B	= 2130,
    SUBSUU_S_D	= 2131,
    SUBSUU_S_H	= 2132,
    SUBSUU_S_W	= 2133,
    SUBS_S_B	= 2134,
    SUBS_S_D	= 2135,
    SUBS_S_H	= 2136,
    SUBS_S_W	= 2137,
    SUBS_U_B	= 2138,
    SUBS_U_D	= 2139,
    SUBS_U_H	= 2140,
    SUBS_U_W	= 2141,
    SUBU16_MM	= 2142,
    SUBU16_MMR6	= 2143,
    SUBUH_QB	= 2144,
    SUBUH_QB_MMR2	= 2145,
    SUBUH_R_QB	= 2146,
    SUBUH_R_QB_MMR2	= 2147,
    SUBU_MMR6	= 2148,
    SUBU_PH	= 2149,
    SUBU_PH_MMR2	= 2150,
    SUBU_QB	= 2151,
    SUBU_QB_MM	= 2152,
    SUBU_S_PH	= 2153,
    SUBU_S_PH_MMR2	= 2154,
    SUBU_S_QB	= 2155,
    SUBU_S_QB_MM	= 2156,
    SUBVI_B	= 2157,
    SUBVI_D	= 2158,
    SUBVI_H	= 2159,
    SUBVI_W	= 2160,
    SUBV_B	= 2161,
    SUBV_D	= 2162,
    SUBV_H	= 2163,
    SUBV_W	= 2164,
    SUB_MM	= 2165,
    SUB_MMR6	= 2166,
    SUBu	= 2167,
    SUBu_MM	= 2168,
    SUXC1	= 2169,
    SUXC164	= 2170,
    SUXC1_MM	= 2171,
    SW	= 2172,
    SW16_MM	= 2173,
    SW16_MMR6	= 2174,
    SW64	= 2175,
    SWC1	= 2176,
    SWC1_MM	= 2177,
    SWC2	= 2178,
    SWC2_MMR6	= 2179,
    SWC2_R6	= 2180,
    SWC3	= 2181,
    SWE	= 2182,
    SWE_MM	= 2183,
    SWE_MMR6	= 2184,
    SWL	= 2185,
    SWL64	= 2186,
    SWLE	= 2187,
    SWLE_MM	= 2188,
    SWL_MM	= 2189,
    SWM16_MM	= 2190,
    SWM16_MMR6	= 2191,
    SWM32_MM	= 2192,
    SWM_MM	= 2193,
    SWP_MM	= 2194,
    SWP_MMR6	= 2195,
    SWR	= 2196,
    SWR64	= 2197,
    SWRE	= 2198,
    SWRE_MM	= 2199,
    SWR_MM	= 2200,
    SWSP_MM	= 2201,
    SWSP_MMR6	= 2202,
    SWXC1	= 2203,
    SWXC1_MM	= 2204,
    SW_MM	= 2205,
    SW_MMR6	= 2206,
    SYNC	= 2207,
    SYNCI	= 2208,
    SYNCI_MMR6	= 2209,
    SYNC_MM	= 2210,
    SYNC_MMR6	= 2211,
    SYSCALL	= 2212,
    SYSCALL_MM	= 2213,
    SZ_B_PSEUDO	= 2214,
    SZ_D_PSEUDO	= 2215,
    SZ_H_PSEUDO	= 2216,
    SZ_V_PSEUDO	= 2217,
    SZ_W_PSEUDO	= 2218,
    Save16	= 2219,
    SaveX16	= 2220,
    SbRxRyOffMemX16	= 2221,
    SebRx16	= 2222,
    SehRx16	= 2223,
    SelBeqZ	= 2224,
    SelBneZ	= 2225,
    SelTBteqZCmp	= 2226,
    SelTBteqZCmpi	= 2227,
    SelTBteqZSlt	= 2228,
    SelTBteqZSlti	= 2229,
    SelTBteqZSltiu	= 2230,
    SelTBteqZSltu	= 2231,
    SelTBtneZCmp	= 2232,
    SelTBtneZCmpi	= 2233,
    SelTBtneZSlt	= 2234,
    SelTBtneZSlti	= 2235,
    SelTBtneZSltiu	= 2236,
    SelTBtneZSltu	= 2237,
    ShRxRyOffMemX16	= 2238,
    SllX16	= 2239,
    SllvRxRy16	= 2240,
    SltCCRxRy16	= 2241,
    SltRxRy16	= 2242,
    SltiCCRxImmX16	= 2243,
    SltiRxImm16	= 2244,
    SltiRxImmX16	= 2245,
    SltiuCCRxImmX16	= 2246,
    SltiuRxImm16	= 2247,
    SltiuRxImmX16	= 2248,
    SltuCCRxRy16	= 2249,
    SltuRxRy16	= 2250,
    SltuRxRyRz16	= 2251,
    SraX16	= 2252,
    SravRxRy16	= 2253,
    SrlX16	= 2254,
    SrlvRxRy16	= 2255,
    SubuRxRyRz16	= 2256,
    SwRxRyOffMemX16	= 2257,
    SwRxSpImmX16	= 2258,
    TAILCALL	= 2259,
    TAILCALL64_R	= 2260,
    TAILCALL_R	= 2261,
    TEQ	= 2262,
    TEQI	= 2263,
    TEQI_MM	= 2264,
    TEQ_MM	= 2265,
    TGE	= 2266,
    TGEI	= 2267,
    TGEIU	= 2268,
    TGEIU_MM	= 2269,
    TGEI_MM	= 2270,
    TGEU	= 2271,
    TGEU_MM	= 2272,
    TGE_MM	= 2273,
    TLBINV	= 2274,
    TLBINVF	= 2275,
    TLBINVF_MMR6	= 2276,
    TLBINV_MMR6	= 2277,
    TLBP	= 2278,
    TLBP_MM	= 2279,
    TLBR	= 2280,
    TLBR_MM	= 2281,
    TLBWI	= 2282,
    TLBWI_MM	= 2283,
    TLBWR	= 2284,
    TLBWR_MM	= 2285,
    TLT	= 2286,
    TLTI	= 2287,
    TLTIU_MM	= 2288,
    TLTI_MM	= 2289,
    TLTU	= 2290,
    TLTU_MM	= 2291,
    TLT_MM	= 2292,
    TNE	= 2293,
    TNEI	= 2294,
    TNEI_MM	= 2295,
    TNE_MM	= 2296,
    TRAP	= 2297,
    TRUNC_L_D64	= 2298,
    TRUNC_L_D_MMR6	= 2299,
    TRUNC_L_S	= 2300,
    TRUNC_L_S_MMR6	= 2301,
    TRUNC_W_D32	= 2302,
    TRUNC_W_D64	= 2303,
    TRUNC_W_D_MMR6	= 2304,
    TRUNC_W_MM	= 2305,
    TRUNC_W_S	= 2306,
    TRUNC_W_S_MM	= 2307,
    TRUNC_W_S_MMR6	= 2308,
    TTLTIU	= 2309,
    UDIV	= 2310,
    UDIV_MM	= 2311,
    UDIV_MM_Pseudo	= 2312,
    UDivMacro	= 2313,
    Ulh	= 2314,
    Ulhu	= 2315,
    Ulw	= 2316,
    V3MULU	= 2317,
    VMM0	= 2318,
    VMULU	= 2319,
    VSHF_B	= 2320,
    VSHF_D	= 2321,
    VSHF_H	= 2322,
    VSHF_W	= 2323,
    WAIT	= 2324,
    WAIT_MM	= 2325,
    WAIT_MMR6	= 2326,
    WRDSP	= 2327,
    WRDSP_MM	= 2328,
    WRPGPR_MMR6	= 2329,
    WSBH	= 2330,
    WSBH_MM	= 2331,
    WSBH_MMR6	= 2332,
    XOR	= 2333,
    XOR16_MM	= 2334,
    XOR16_MMR6	= 2335,
    XOR64	= 2336,
    XORI_B	= 2337,
    XORI_MMR6	= 2338,
    XOR_MM	= 2339,
    XOR_MMR6	= 2340,
    XOR_V	= 2341,
    XOR_V_D_PSEUDO	= 2342,
    XOR_V_H_PSEUDO	= 2343,
    XOR_V_W_PSEUDO	= 2344,
    XORi	= 2345,
    XORi64	= 2346,
    XORi_MM	= 2347,
    XorRxRxRy16	= 2348,
    INSTRUCTION_LIST_END = 2349
  };

namespace Sched {
  enum {
    NoInstrModel	= 0,
    IIPseudo	= 1,
    II_ABS	= 2,
    II_ADD	= 3,
    II_ADDIUPC	= 4,
    II_ADDIU	= 5,
    II_ADDU	= 6,
    II_ADDI	= 7,
    II_ALIGN	= 8,
    II_ALUIPC	= 9,
    II_AND	= 10,
    II_ANDI	= 11,
    II_AUI	= 12,
    II_AUIPC	= 13,
    IIM16Alu	= 14,
    II_B	= 15,
    II_BADDU	= 16,
    II_BC	= 17,
    II_BALC	= 18,
    II_BCCZAL	= 19,
    II_BBIT	= 20,
    II_BC1CCZ	= 21,
    II_BC1F	= 22,
    II_BC1FL	= 23,
    II_BC1T	= 24,
    II_BC1TL	= 25,
    II_BCC	= 26,
    II_BCCC	= 27,
    II_BCCZ	= 28,
    II_BCCZC	= 29,
    II_BCCZALS	= 30,
    II_BITSWAP	= 31,
    II_BREAK	= 32,
    II_MTC1	= 33,
    II_CACHE	= 34,
    II_CACHEE	= 35,
    II_CEIL	= 36,
    II_CFC1	= 37,
    II_CLO	= 38,
    II_CLZ	= 39,
    II_CTC1	= 40,
    II_CVT	= 41,
    II_C_CC_D	= 42,
    II_C_CC_S	= 43,
    II_DADD	= 44,
    II_DADDIU	= 45,
    II_DADDU	= 46,
    II_DADDI	= 47,
    II_DAHI	= 48,
    II_DALIGN	= 49,
    II_DATI	= 50,
    II_DAUI	= 51,
    II_DBITSWAP	= 52,
    II_DCLO	= 53,
    II_DCLZ	= 54,
    II_DDIV	= 55,
    II_DDIVU	= 56,
    II_DERET	= 57,
    II_EXT	= 58,
    II_DI	= 59,
    II_INS	= 60,
    II_DIV	= 61,
    II_DIVU	= 62,
    II_DLSA	= 63,
    II_DMFC0	= 64,
    II_DMFC1	= 65,
    II_DMFC2	= 66,
    II_DMOD	= 67,
    II_DMODU	= 68,
    II_DMTC0	= 69,
    II_DMTC1	= 70,
    II_DMTC2	= 71,
    II_DMUH	= 72,
    II_DMUHU	= 73,
    II_DMUL	= 74,
    II_DMULT	= 75,
    II_DMULTU	= 76,
    II_DMULU	= 77,
    II_POP	= 78,
    II_DROTR	= 79,
    II_DROTR32	= 80,
    II_DROTRV	= 81,
    II_DSLL	= 82,
    II_DSLL32	= 83,
    II_DSLLV	= 84,
    II_DSRA	= 85,
    II_DSRA32	= 86,
    II_DSRAV	= 87,
    II_DSRL	= 88,
    II_DSRL32	= 89,
    II_DSRLV	= 90,
    II_DSUB	= 91,
    II_DSUBU	= 92,
    II_EHB	= 93,
    II_EI	= 94,
    II_ERET	= 95,
    II_ERETNC	= 96,
    II_MFC1	= 97,
    II_ADD_D	= 98,
    II_ADD_S	= 99,
    II_DIV_D	= 100,
    II_DIV_S	= 101,
    II_FLOOR	= 102,
    II_MOV_D	= 103,
    II_MOV_S	= 104,
    II_MUL_D	= 105,
    II_MUL_S	= 106,
    II_NEG	= 107,
    II_SQRT_D	= 108,
    II_SQRT_S	= 109,
    II_SUB_D	= 110,
    II_SUB_S	= 111,
    II_J	= 112,
    II_JAL	= 113,
    II_JALR	= 114,
    II_JALRC	= 115,
    II_JALRS	= 116,
    II_JALR_HB	= 117,
    II_JALS	= 118,
    II_JIALC	= 119,
    II_JR	= 120,
    II_JRADDIUSP	= 121,
    II_JRC	= 122,
    II_JR_HB	= 123,
    II_LB	= 124,
    II_LBE	= 125,
    II_LBU	= 126,
    II_LBUE	= 127,
    II_LD	= 128,
    II_LDC1	= 129,
    II_LDC2	= 130,
    II_LDC3	= 131,
    II_LDL	= 132,
    II_LDPC	= 133,
    II_LDR	= 134,
    II_LDXC1	= 135,
    II_LH	= 136,
    II_LHE	= 137,
    II_LHU	= 138,
    II_LHUE	= 139,
    II_LL	= 140,
    II_LLD	= 141,
    II_LLE	= 142,
    II_LSA	= 143,
    II_LUI	= 144,
    II_LUXC1	= 145,
    II_LW	= 146,
    II_LWC1	= 147,
    II_LWC2	= 148,
    II_LWC3	= 149,
    II_LWE	= 150,
    II_LWL	= 151,
    II_LWLE	= 152,
    II_LWPC	= 153,
    II_LWR	= 154,
    II_LWRE	= 155,
    II_LWUPC	= 156,
    II_LWU	= 157,
    II_LWXC1	= 158,
    II_MADD	= 159,
    II_MADDF_D	= 160,
    II_MADDF_S	= 161,
    II_MADDU	= 162,
    II_MADD_D	= 163,
    II_MADD_S	= 164,
    II_MFC0	= 165,
    II_MFC2	= 166,
    II_MFHC1	= 167,
    II_MFHI_MFLO	= 168,
    II_MOD	= 169,
    II_MODU	= 170,
    II_MOVF_D	= 171,
    II_MOVF	= 172,
    II_MOVF_S	= 173,
    II_MOVN_D	= 174,
    II_MOVN	= 175,
    II_MOVN_S	= 176,
    II_MOVT_D	= 177,
    II_MOVT	= 178,
    II_MOVT_S	= 179,
    II_MOVZ_D	= 180,
    II_MOVZ	= 181,
    II_MOVZ_S	= 182,
    II_MSUB	= 183,
    II_MSUBF_D	= 184,
    II_MSUBF_S	= 185,
    II_MSUBU	= 186,
    II_MSUB_D	= 187,
    II_MSUB_S	= 188,
    II_MTC0	= 189,
    II_MTC2	= 190,
    II_MTHC1	= 191,
    II_MTHI_MTLO	= 192,
    II_MUH	= 193,
    II_MUHU	= 194,
    II_MUL	= 195,
    II_MULT	= 196,
    II_MULTU	= 197,
    II_MULU	= 198,
    II_NMADD_D	= 199,
    II_NMADD_S	= 200,
    II_NMSUB_D	= 201,
    II_NMSUB_S	= 202,
    II_NOR	= 203,
    II_OR	= 204,
    II_ORI	= 205,
    II_PAUSE	= 206,
    II_PREF	= 207,
    II_PREFE	= 208,
    II_IndirectBranchPseudo	= 209,
    II_ReturnPseudo	= 210,
    II_RDHWR	= 211,
    II_ROUND	= 212,
    II_ROTR	= 213,
    II_ROTRV	= 214,
    II_TRUNC	= 215,
    II_RESTORE	= 216,
    II_SB	= 217,
    II_SBE	= 218,
    II_SC	= 219,
    II_SCD	= 220,
    II_SCE	= 221,
    II_SD	= 222,
    II_SDBBP	= 223,
    II_SDC1	= 224,
    II_SDC2	= 225,
    II_SDC3	= 226,
    II_SDL	= 227,
    II_SDR	= 228,
    II_SDXC1	= 229,
    II_SEB	= 230,
    II_SEH	= 231,
    II_SELCCZ	= 232,
    II_SEQ_SNE	= 233,
    II_SEQI_SNEI	= 234,
    II_SH	= 235,
    II_SHE	= 236,
    II_SLL	= 237,
    II_SLLV	= 238,
    II_SLT_SLTU	= 239,
    II_SLTI_SLTIU	= 240,
    II_SRA	= 241,
    II_SRAV	= 242,
    II_SRL	= 243,
    II_SRLV	= 244,
    II_SSNOP	= 245,
    II_SUB	= 246,
    II_SUBU	= 247,
    II_SUXC1	= 248,
    II_SW	= 249,
    II_SWC1	= 250,
    II_SWC2	= 251,
    II_SWC3	= 252,
    II_SWE	= 253,
    II_SWL	= 254,
    II_SWLE	= 255,
    II_SWR	= 256,
    II_SWRE	= 257,
    II_SWXC1	= 258,
    II_SYNC	= 259,
    II_SYNCI	= 260,
    II_SYSCALL	= 261,
    II_SAVE	= 262,
    II_TEQ	= 263,
    II_TEQI	= 264,
    II_TGE	= 265,
    II_TGEI	= 266,
    II_TGEIU	= 267,
    II_TGEU	= 268,
    II_TLBINV	= 269,
    II_TLBINVF	= 270,
    II_TLBP	= 271,
    II_TLBR	= 272,
    II_TLBWI	= 273,
    II_TLBWR	= 274,
    II_TLT	= 275,
    II_TLTI	= 276,
    II_TLTU	= 277,
    II_TNE	= 278,
    II_TNEI	= 279,
    II_TRAP	= 280,
    II_TTLTIU	= 281,
    II_WAIT	= 282,
    II_WSBH	= 283,
    II_XOR	= 284,
    II_XORI	= 285,
    ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W	= 286,
    ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W	= 287,
    ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W	= 288,
    ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W	= 289,
    AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W	= 290,
    MOVE_V	= 291,
    LDI_B_LDI_D_LDI_H_LDI_W	= 292,
    AND_V_NOR_V_OR_V_XOR_V	= 293,
    ANDI_B_NORI_B_ORI_B_XORI_B	= 294,
    ST_B_ST_D_ST_H_ST_W	= 295,
    LD_B_LD_D_LD_H_LD_W	= 296,
    SCHED_LIST_END = 297
  };
} // end Sched namespace
} // end Mips namespace
} // end llvm namespace
#endif // GET_INSTRINFO_ENUM

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

static const MCOperandInfo OperandInfo2[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo3[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo4[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo5[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo6[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo7[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo8[] = { { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo9[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo10[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo11[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo12[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo13[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo14[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo15[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo16[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo17[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo18[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo19[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo20[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo21[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo22[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo23[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo24[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo25[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo26[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo27[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo28[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo29[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo30[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo31[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo32[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo33[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo34[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo35[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo36[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo37[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo38[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo39[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo40[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo41[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo42[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo43[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo44[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsPlusSPRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo45[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo46[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo47[] = { { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo48[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo49[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo50[] = { { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo51[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo52[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo53[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo54[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo55[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo56[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo57[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo58[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo59[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo60[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo61[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo62[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo63[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo64[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo65[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo66[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo67[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo68[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo69[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo70[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo71[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo72[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo73[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo74[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo75[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo76[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
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
static const MCOperandInfo OperandInfo104[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo105[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo106[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo107[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo108[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo109[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo110[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo111[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo112[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo113[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo114[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo115[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo116[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo117[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo118[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo119[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo120[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo121[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo122[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo123[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo124[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo125[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo126[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo127[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo128[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo129[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo130[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo131[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo132[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo133[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo134[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo135[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo136[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo137[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo138[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo139[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo140[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo141[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo142[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo143[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo144[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo145[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo146[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo147[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo148[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo149[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo150[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo151[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo152[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo153[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo154[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo155[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo156[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo157[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo158[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo159[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo160[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo161[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo162[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo163[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo164[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo165[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo166[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo167[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo168[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo169[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo170[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo171[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo172[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo173[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo174[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo175[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo176[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo177[] = { { Mips::COP3RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo178[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo179[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo180[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo181[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo182[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo183[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo184[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo185[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo186[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo187[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo188[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo189[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo190[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo191[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo192[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo193[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo194[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo195[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, { -1, 0, MCOI::OPERAND_PCREL, 0 }, };
static const MCOperandInfo OperandInfo196[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo197[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 3, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo198[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo199[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 2, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo200[] = { { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo201[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo202[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 2, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo203[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo204[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo205[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo206[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo207[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_IMMEDIATE, 0 }, };
static const MCOperandInfo OperandInfo208[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo209[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo210[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo211[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo212[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo213[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo214[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo215[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo216[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo217[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo218[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo219[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo220[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16MovePRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo221[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo222[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo223[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo224[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo225[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo226[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo227[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo228[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo229[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo230[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo231[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo232[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo233[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo234[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo235[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo236[] = { { Mips::COP0RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo237[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo238[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo239[] = { { Mips::COP2RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo240[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo241[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo242[] = { { Mips::HI32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo243[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo244[] = { { Mips::LO32DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo245[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo246[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo247[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo248[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo249[] = { { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPRMM16RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo250[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo251[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo252[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo253[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_UNKNOWN, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo254[] = { { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo255[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo256[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo257[] = { { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo258[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo259[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo260[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::ACC128RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo261[] = { { Mips::ACC64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo262[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPCCRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo263[] = { { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo264[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo265[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo266[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo267[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo268[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo269[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::AFGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo270[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo271[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo272[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo273[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::HWRegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo274[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo275[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo276[] = { { Mips::GPRMM16ZeroRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { 1, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo277[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo278[] = { { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo279[] = { { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo280[] = { { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGRCCRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::FGR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo281[] = { { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, { Mips::ACC64DSPRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo282[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo283[] = { { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::DSPRRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo284[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo285[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo286[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo287[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo288[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo289[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR64RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo290[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo291[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo292[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo293[] = { { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo294[] = { { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128BRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo295[] = { { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128DRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo296[] = { { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128HRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo297[] = { { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::MSA128WRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::GPR32RegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo298[] = { { 0, 0|(1<<MCOI::LookupPtrRegClass), MCOI::OPERAND_MEMORY, 0 }, { -1, 0, MCOI::OPERAND_MEMORY, 0 }, };
static const MCOperandInfo OperandInfo299[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, };
static const MCOperandInfo OperandInfo300[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo301[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, };
static const MCOperandInfo OperandInfo302[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, ((0 << 16) | (1 << MCOI::TIED_TO)) }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };
static const MCOperandInfo OperandInfo303[] = { { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { Mips::CPU16RegsRegClassID, 0, MCOI::OPERAND_REGISTER, 0 }, { -1, 0, MCOI::OPERAND_UNKNOWN, 0 }, };

extern const MCInstrDesc MipsInsts[] = {
  { 0,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #0 = PHI
  { 1,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1 = INLINEASM
  { 2,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #2 = CFI_INSTRUCTION
  { 3,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #3 = EH_LABEL
  { 4,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #4 = GC_LABEL
  { 5,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #5 = KILL
  { 6,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #6 = EXTRACT_SUBREG
  { 7,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo5, -1 ,nullptr },  // Inst #7 = INSERT_SUBREG
  { 8,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #8 = IMPLICIT_DEF
  { 9,	4,	1,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo6, -1 ,nullptr },  // Inst #9 = SUBREG_TO_REG
  { 10,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #10 = COPY_TO_REGCLASS
  { 11,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #11 = DBG_VALUE
  { 12,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #12 = REG_SEQUENCE
  { 13,	2,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #13 = COPY
  { 14,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #14 = BUNDLE
  { 15,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #15 = LIFETIME_START
  { 16,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo3, -1 ,nullptr },  // Inst #16 = LIFETIME_END
  { 17,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo8, -1 ,nullptr },  // Inst #17 = STACKMAP
  { 18,	6,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo9, -1 ,nullptr },  // Inst #18 = PATCHPOINT
  { 19,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo10, -1 ,nullptr },  // Inst #19 = LOAD_STACK_GUARD
  { 20,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Call)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #20 = STATEPOINT
  { 21,	2,	0,	0,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo11, -1 ,nullptr },  // Inst #21 = LOCAL_ESCAPE
  { 22,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #22 = FAULTING_LOAD_OP
  { 23,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #23 = PATCHABLE_OP
  { 24,	0,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #24 = PATCHABLE_FUNCTION_ENTER
  { 25,	1,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #25 = PATCHABLE_RET
  { 26,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #26 = G_ADD
  { 27,	3,	1,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo12, -1 ,nullptr },  // Inst #27 = G_OR
  { 28,	1,	0,	0,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #28 = G_BR
  { 29,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #29 = ABSMacro
  { 30,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #30 = ABSQ_S_PH
  { 31,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #31 = ABSQ_S_PH_MM
  { 32,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #32 = ABSQ_S_QB
  { 33,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo14, -1 ,nullptr },  // Inst #33 = ABSQ_S_QB_MMR2
  { 34,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #34 = ABSQ_S_W
  { 35,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo13, -1 ,nullptr },  // Inst #35 = ABSQ_S_W_MM
  { 36,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #36 = ABS_D_MMR6
  { 37,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #37 = ABS_S_MMR6
  { 38,	3,	1,	4,	3,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #38 = ADD
  { 39,	2,	1,	4,	4,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #39 = ADDIUPC
  { 40,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #40 = ADDIUPC_MM
  { 41,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #41 = ADDIUPC_MMR6
  { 42,	2,	1,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #42 = ADDIUR1SP_MM
  { 43,	3,	1,	2,	0,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #43 = ADDIUR2_MM
  { 44,	3,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo21, -1 ,nullptr },  // Inst #44 = ADDIUS5_MM
  { 45,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #45 = ADDIUSP_MM
  { 46,	3,	1,	4,	5,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #46 = ADDIU_MMR6
  { 47,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #47 = ADDQH_PH
  { 48,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #48 = ADDQH_PH_MMR2
  { 49,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #49 = ADDQH_R_PH
  { 50,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #50 = ADDQH_R_PH_MMR2
  { 51,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #51 = ADDQH_R_W
  { 52,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #52 = ADDQH_R_W_MMR2
  { 53,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #53 = ADDQH_W
  { 54,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #54 = ADDQH_W_MMR2
  { 55,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #55 = ADDQ_PH
  { 56,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #56 = ADDQ_PH_MM
  { 57,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #57 = ADDQ_S_PH
  { 58,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #58 = ADDQ_S_PH_MM
  { 59,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #59 = ADDQ_S_W
  { 60,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #60 = ADDQ_S_W_MM
  { 61,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo17, -1 ,nullptr },  // Inst #61 = ADDSC
  { 62,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList2, OperandInfo17, -1 ,nullptr },  // Inst #62 = ADDSC_MM
  { 63,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #63 = ADDS_A_B
  { 64,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #64 = ADDS_A_D
  { 65,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #65 = ADDS_A_H
  { 66,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #66 = ADDS_A_W
  { 67,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #67 = ADDS_S_B
  { 68,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #68 = ADDS_S_D
  { 69,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #69 = ADDS_S_H
  { 70,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #70 = ADDS_S_W
  { 71,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #71 = ADDS_U_B
  { 72,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #72 = ADDS_U_D
  { 73,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #73 = ADDS_U_H
  { 74,	3,	1,	4,	287,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #74 = ADDS_U_W
  { 75,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #75 = ADDU16_MM
  { 76,	3,	1,	2,	6,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #76 = ADDU16_MMR6
  { 77,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #77 = ADDUH_QB
  { 78,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #78 = ADDUH_QB_MMR2
  { 79,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #79 = ADDUH_R_QB
  { 80,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #80 = ADDUH_R_QB_MMR2
  { 81,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #81 = ADDU_MMR6
  { 82,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #82 = ADDU_PH
  { 83,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #83 = ADDU_PH_MMR2
  { 84,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #84 = ADDU_QB
  { 85,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #85 = ADDU_QB_MM
  { 86,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #86 = ADDU_S_PH
  { 87,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #87 = ADDU_S_PH_MMR2
  { 88,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #88 = ADDU_S_QB
  { 89,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #89 = ADDU_S_QB_MM
  { 90,	3,	1,	4,	288,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #90 = ADDVI_B
  { 91,	3,	1,	4,	288,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #91 = ADDVI_D
  { 92,	3,	1,	4,	288,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #92 = ADDVI_H
  { 93,	3,	1,	4,	288,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #93 = ADDVI_W
  { 94,	3,	1,	4,	288,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #94 = ADDV_B
  { 95,	3,	1,	4,	288,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #95 = ADDV_D
  { 96,	3,	1,	4,	288,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #96 = ADDV_H
  { 97,	3,	1,	4,	288,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #97 = ADDV_W
  { 98,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #98 = ADDWC
  { 99,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList2, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #99 = ADDWC_MM
  { 100,	3,	1,	4,	286,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #100 = ADD_A_B
  { 101,	3,	1,	4,	286,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #101 = ADD_A_D
  { 102,	3,	1,	4,	286,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #102 = ADD_A_H
  { 103,	3,	1,	4,	286,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #103 = ADD_A_W
  { 104,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #104 = ADD_MM
  { 105,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #105 = ADD_MMR6
  { 106,	3,	1,	4,	7,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #106 = ADDi
  { 107,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #107 = ADDi_MM
  { 108,	3,	1,	4,	5,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #108 = ADDiu
  { 109,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #109 = ADDiu_MM
  { 110,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #110 = ADDu
  { 111,	3,	1,	4,	6,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #111 = ADDu_MM
  { 112,	1,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo3, -1 ,nullptr },  // Inst #112 = ADJCALLSTACKDOWN
  { 113,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo8, -1 ,nullptr },  // Inst #113 = ADJCALLSTACKUP
  { 114,	4,	1,	4,	8,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #114 = ALIGN
  { 115,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #115 = ALIGN_MMR6
  { 116,	2,	1,	4,	9,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #116 = ALUIPC
  { 117,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #117 = ALUIPC_MMR6
  { 118,	3,	1,	4,	10,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #118 = AND
  { 119,	3,	1,	2,	10,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #119 = AND16_MM
  { 120,	3,	1,	2,	10,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #120 = AND16_MMR6
  { 121,	3,	1,	4,	10,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #121 = AND64
  { 122,	3,	1,	2,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #122 = ANDI16_MM
  { 123,	3,	1,	2,	10,	0, 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #123 = ANDI16_MMR6
  { 124,	3,	1,	4,	294,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #124 = ANDI_B
  { 125,	3,	1,	4,	11,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #125 = ANDI_MMR6
  { 126,	3,	1,	4,	10,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #126 = AND_MM
  { 127,	3,	1,	4,	10,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #127 = AND_MMR6
  { 128,	3,	1,	4,	293,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #128 = AND_V
  { 129,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #129 = AND_V_D_PSEUDO
  { 130,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #130 = AND_V_H_PSEUDO
  { 131,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #131 = AND_V_W_PSEUDO
  { 132,	3,	1,	4,	11,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #132 = ANDi
  { 133,	3,	1,	4,	10,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #133 = ANDi64
  { 134,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #134 = ANDi_MM
  { 135,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #135 = APPEND
  { 136,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #136 = APPEND_MMR2
  { 137,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #137 = ASUB_S_B
  { 138,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #138 = ASUB_S_D
  { 139,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #139 = ASUB_S_H
  { 140,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #140 = ASUB_S_W
  { 141,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #141 = ASUB_U_B
  { 142,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #142 = ASUB_U_D
  { 143,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #143 = ASUB_U_H
  { 144,	3,	1,	4,	289,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #144 = ASUB_U_W
  { 145,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #145 = ATOMIC_CMP_SWAP_I16
  { 146,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #146 = ATOMIC_CMP_SWAP_I32
  { 147,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo39, -1 ,nullptr },  // Inst #147 = ATOMIC_CMP_SWAP_I64
  { 148,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo38, -1 ,nullptr },  // Inst #148 = ATOMIC_CMP_SWAP_I8
  { 149,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #149 = ATOMIC_LOAD_ADD_I16
  { 150,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #150 = ATOMIC_LOAD_ADD_I32
  { 151,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #151 = ATOMIC_LOAD_ADD_I64
  { 152,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #152 = ATOMIC_LOAD_ADD_I8
  { 153,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #153 = ATOMIC_LOAD_AND_I16
  { 154,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #154 = ATOMIC_LOAD_AND_I32
  { 155,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #155 = ATOMIC_LOAD_AND_I64
  { 156,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #156 = ATOMIC_LOAD_AND_I8
  { 157,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #157 = ATOMIC_LOAD_NAND_I16
  { 158,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #158 = ATOMIC_LOAD_NAND_I32
  { 159,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #159 = ATOMIC_LOAD_NAND_I64
  { 160,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #160 = ATOMIC_LOAD_NAND_I8
  { 161,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #161 = ATOMIC_LOAD_OR_I16
  { 162,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #162 = ATOMIC_LOAD_OR_I32
  { 163,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #163 = ATOMIC_LOAD_OR_I64
  { 164,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #164 = ATOMIC_LOAD_OR_I8
  { 165,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #165 = ATOMIC_LOAD_SUB_I16
  { 166,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #166 = ATOMIC_LOAD_SUB_I32
  { 167,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #167 = ATOMIC_LOAD_SUB_I64
  { 168,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #168 = ATOMIC_LOAD_SUB_I8
  { 169,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #169 = ATOMIC_LOAD_XOR_I16
  { 170,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #170 = ATOMIC_LOAD_XOR_I32
  { 171,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #171 = ATOMIC_LOAD_XOR_I64
  { 172,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #172 = ATOMIC_LOAD_XOR_I8
  { 173,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #173 = ATOMIC_SWAP_I16
  { 174,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #174 = ATOMIC_SWAP_I32
  { 175,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo41, -1 ,nullptr },  // Inst #175 = ATOMIC_SWAP_I64
  { 176,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo40, -1 ,nullptr },  // Inst #176 = ATOMIC_SWAP_I8
  { 177,	3,	1,	4,	12,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #177 = AUI
  { 178,	2,	1,	4,	13,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #178 = AUIPC
  { 179,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #179 = AUIPC_MMR6
  { 180,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #180 = AUI_MMR6
  { 181,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #181 = AVER_S_B
  { 182,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #182 = AVER_S_D
  { 183,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #183 = AVER_S_H
  { 184,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #184 = AVER_S_W
  { 185,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #185 = AVER_U_B
  { 186,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #186 = AVER_U_D
  { 187,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #187 = AVER_U_H
  { 188,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #188 = AVER_U_W
  { 189,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #189 = AVE_S_B
  { 190,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #190 = AVE_S_D
  { 191,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #191 = AVE_S_H
  { 192,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #192 = AVE_S_W
  { 193,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #193 = AVE_U_B
  { 194,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #194 = AVE_U_D
  { 195,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #195 = AVE_U_H
  { 196,	3,	1,	4,	290,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #196 = AVE_U_W
  { 197,	2,	1,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #197 = AddiuRxImmX16
  { 198,	2,	1,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #198 = AddiuRxPcImmX16
  { 199,	3,	1,	2,	14,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #199 = AddiuRxRxImm16
  { 200,	3,	1,	4,	14,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo43, -1 ,nullptr },  // Inst #200 = AddiuRxRxImmX16
  { 201,	3,	1,	4,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #201 = AddiuRxRyOffMemX16
  { 202,	1,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #202 = AddiuSpImm16
  { 203,	1,	0,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, OperandInfo2, -1 ,nullptr },  // Inst #203 = AddiuSpImmX16
  { 204,	3,	1,	2,	14,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #204 = AdduRxRyRz16
  { 205,	3,	1,	2,	14,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #205 = AndRxRxRy16
  { 206,	1,	0,	4,	15,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #206 = B
  { 207,	1,	0,	2,	15,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #207 = B16_MM
  { 208,	3,	1,	4,	16,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #208 = BADDu
  { 209,	1,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo47, -1 ,nullptr },  // Inst #209 = BAL
  { 210,	1,	0,	4,	18,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo47, -1 ,nullptr },  // Inst #210 = BALC
  { 211,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo47, -1 ,nullptr },  // Inst #211 = BALC_MMR6
  { 212,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #212 = BALIGN
  { 213,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #213 = BALIGN_MMR2
  { 214,	1,	0,	4,	19,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, ImplicitList5, OperandInfo47, -1 ,nullptr },  // Inst #214 = BAL_BR
  { 215,	3,	0,	4,	20,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo48, -1 ,nullptr },  // Inst #215 = BBIT0
  { 216,	3,	0,	4,	20,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo48, -1 ,nullptr },  // Inst #216 = BBIT032
  { 217,	3,	0,	4,	20,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo48, -1 ,nullptr },  // Inst #217 = BBIT1
  { 218,	3,	0,	4,	20,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x2ULL, nullptr, ImplicitList4, OperandInfo48, -1 ,nullptr },  // Inst #218 = BBIT132
  { 219,	1,	0,	4,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #219 = BC
  { 220,	1,	0,	2,	17,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo47, -1 ,nullptr },  // Inst #220 = BC16_MMR6
  { 221,	2,	0,	4,	21,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #221 = BC1EQZ
  { 222,	2,	0,	4,	21,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #222 = BC1EQZC_MMR6
  { 223,	2,	0,	4,	22,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #223 = BC1F
  { 224,	2,	0,	4,	23,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #224 = BC1FL
  { 225,	2,	0,	4,	22,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #225 = BC1F_MM
  { 226,	2,	0,	4,	21,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo49, -1 ,nullptr },  // Inst #226 = BC1NEZ
  { 227,	2,	0,	4,	21,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList4, OperandInfo49, -1 ,nullptr },  // Inst #227 = BC1NEZC_MMR6
  { 228,	2,	0,	4,	24,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #228 = BC1T
  { 229,	2,	0,	4,	25,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #229 = BC1TL
  { 230,	2,	0,	4,	24,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x5ULL, nullptr, ImplicitList4, OperandInfo50, -1 ,nullptr },  // Inst #230 = BC1T_MM
  { 231,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #231 = BC2EQZ
  { 232,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #232 = BC2EQZC_MMR6
  { 233,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo51, -1 ,nullptr },  // Inst #233 = BC2NEZ
  { 234,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo51, -1 ,nullptr },  // Inst #234 = BC2NEZC_MMR6
  { 235,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #235 = BCLRI_B
  { 236,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #236 = BCLRI_D
  { 237,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #237 = BCLRI_H
  { 238,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #238 = BCLRI_W
  { 239,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #239 = BCLR_B
  { 240,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #240 = BCLR_D
  { 241,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #241 = BCLR_H
  { 242,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #242 = BCLR_W
  { 243,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #243 = BC_MMR6
  { 244,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #244 = BEQ
  { 245,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #245 = BEQ64
  { 246,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #246 = BEQC
  { 247,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #247 = BEQC_MMR6
  { 248,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #248 = BEQL
  { 249,	2,	0,	2,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #249 = BEQZ16_MM
  { 250,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #250 = BEQZALC
  { 251,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #251 = BEQZALC_MMR6
  { 252,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #252 = BEQZC
  { 253,	2,	0,	2,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #253 = BEQZC16_MMR6
  { 254,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #254 = BEQZC_MM
  { 255,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #255 = BEQZC_MMR6
  { 256,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #256 = BEQ_MM
  { 257,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #257 = BGE
  { 258,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #258 = BGEC
  { 259,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #259 = BGEC_MMR6
  { 260,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #260 = BGEImmMacro
  { 261,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #261 = BGEL
  { 262,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #262 = BGELImmMacro
  { 263,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #263 = BGEU
  { 264,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #264 = BGEUC
  { 265,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #265 = BGEUC_MMR6
  { 266,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #266 = BGEUImmMacro
  { 267,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #267 = BGEUL
  { 268,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #268 = BGEULImmMacro
  { 269,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #269 = BGEZ
  { 270,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo57, -1 ,nullptr },  // Inst #270 = BGEZ64
  { 271,	2,	0,	4,	19,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #271 = BGEZAL
  { 272,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #272 = BGEZALC
  { 273,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #273 = BGEZALC_MMR6
  { 274,	2,	0,	4,	19,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #274 = BGEZALL
  { 275,	2,	0,	4,	30,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #275 = BGEZALS_MM
  { 276,	2,	0,	4,	19,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #276 = BGEZAL_MM
  { 277,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #277 = BGEZC
  { 278,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #278 = BGEZL
  { 279,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #279 = BGEZ_MM
  { 280,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #280 = BGT
  { 281,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #281 = BGTImmMacro
  { 282,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #282 = BGTL
  { 283,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #283 = BGTLImmMacro
  { 284,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #284 = BGTU
  { 285,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #285 = BGTUImmMacro
  { 286,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #286 = BGTUL
  { 287,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #287 = BGTULImmMacro
  { 288,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #288 = BGTZ
  { 289,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo57, -1 ,nullptr },  // Inst #289 = BGTZ64
  { 290,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #290 = BGTZALC
  { 291,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #291 = BGTZALC_MMR6
  { 292,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #292 = BGTZC
  { 293,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #293 = BGTZL
  { 294,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #294 = BGTZ_MM
  { 295,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #295 = BINSLI_B
  { 296,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #296 = BINSLI_D
  { 297,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #297 = BINSLI_H
  { 298,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #298 = BINSLI_W
  { 299,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #299 = BINSL_B
  { 300,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #300 = BINSL_D
  { 301,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #301 = BINSL_H
  { 302,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #302 = BINSL_W
  { 303,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #303 = BINSRI_B
  { 304,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #304 = BINSRI_D
  { 305,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #305 = BINSRI_H
  { 306,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #306 = BINSRI_W
  { 307,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #307 = BINSR_B
  { 308,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #308 = BINSR_D
  { 309,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #309 = BINSR_H
  { 310,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #310 = BINSR_W
  { 311,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #311 = BITREV
  { 312,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #312 = BITREV_MM
  { 313,	2,	1,	4,	31,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #313 = BITSWAP
  { 314,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #314 = BITSWAP_MMR6
  { 315,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #315 = BLE
  { 316,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #316 = BLEImmMacro
  { 317,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #317 = BLEL
  { 318,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #318 = BLELImmMacro
  { 319,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #319 = BLEU
  { 320,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #320 = BLEUImmMacro
  { 321,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #321 = BLEUL
  { 322,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #322 = BLEULImmMacro
  { 323,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #323 = BLEZ
  { 324,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo57, -1 ,nullptr },  // Inst #324 = BLEZ64
  { 325,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #325 = BLEZALC
  { 326,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #326 = BLEZALC_MMR6
  { 327,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #327 = BLEZC
  { 328,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #328 = BLEZL
  { 329,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #329 = BLEZ_MM
  { 330,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #330 = BLT
  { 331,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #331 = BLTC
  { 332,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #332 = BLTC_MMR6
  { 333,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #333 = BLTImmMacro
  { 334,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #334 = BLTL
  { 335,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #335 = BLTLImmMacro
  { 336,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #336 = BLTU
  { 337,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #337 = BLTUC
  { 338,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #338 = BLTUC_MMR6
  { 339,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #339 = BLTUImmMacro
  { 340,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo52, -1 ,nullptr },  // Inst #340 = BLTUL
  { 341,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #341 = BLTULImmMacro
  { 342,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #342 = BLTZ
  { 343,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo57, -1 ,nullptr },  // Inst #343 = BLTZ64
  { 344,	2,	0,	4,	19,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #344 = BLTZAL
  { 345,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #345 = BLTZALC
  { 346,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #346 = BLTZALC_MMR6
  { 347,	2,	0,	4,	19,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #347 = BLTZALL
  { 348,	2,	0,	4,	30,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #348 = BLTZALS_MM
  { 349,	2,	0,	4,	19,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #349 = BLTZAL_MM
  { 350,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #350 = BLTZC
  { 351,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #351 = BLTZL
  { 352,	2,	0,	4,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #352 = BLTZ_MM
  { 353,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #353 = BMNZI_B
  { 354,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #354 = BMNZ_V
  { 355,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #355 = BMZI_B
  { 356,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #356 = BMZ_V
  { 357,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #357 = BNE
  { 358,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo53, -1 ,nullptr },  // Inst #358 = BNE64
  { 359,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #359 = BNEC
  { 360,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #360 = BNEC_MMR6
  { 361,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #361 = BNEGI_B
  { 362,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #362 = BNEGI_D
  { 363,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #363 = BNEGI_H
  { 364,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #364 = BNEGI_W
  { 365,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #365 = BNEG_B
  { 366,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #366 = BNEG_D
  { 367,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #367 = BNEG_H
  { 368,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #368 = BNEG_W
  { 369,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #369 = BNEL
  { 370,	2,	0,	2,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #370 = BNEZ16_MM
  { 371,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #371 = BNEZALC
  { 372,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo55, -1 ,nullptr },  // Inst #372 = BNEZALC_MMR6
  { 373,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #373 = BNEZC
  { 374,	2,	0,	2,	28,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList4, OperandInfo54, -1 ,nullptr },  // Inst #374 = BNEZC16_MMR6
  { 375,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #375 = BNEZC_MM
  { 376,	2,	0,	4,	29,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo55, -1 ,nullptr },  // Inst #376 = BNEZC_MMR6
  { 377,	3,	0,	4,	26,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x12ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #377 = BNE_MM
  { 378,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #378 = BNVC
  { 379,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #379 = BNVC_MMR6
  { 380,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #380 = BNZ_B
  { 381,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo67, -1 ,nullptr },  // Inst #381 = BNZ_D
  { 382,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo68, -1 ,nullptr },  // Inst #382 = BNZ_H
  { 383,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #383 = BNZ_V
  { 384,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo69, -1 ,nullptr },  // Inst #384 = BNZ_W
  { 385,	3,	0,	4,	27,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x36ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #385 = BOVC
  { 386,	3,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo52, -1 ,nullptr },  // Inst #386 = BOVC_MMR6
  { 387,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #387 = BPOSGE32
  { 388,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #388 = BPOSGE32C_MMR3
  { 389,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #389 = BPOSGE32_MM
  { 390,	1,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, ImplicitList6, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #390 = BPOSGE32_PSEUDO
  { 391,	2,	0,	4,	32,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #391 = BREAK
  { 392,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #392 = BREAK16_MM
  { 393,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #393 = BREAK16_MMR6
  { 394,	2,	0,	4,	32,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #394 = BREAK_MM
  { 395,	2,	0,	4,	32,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo7, -1 ,nullptr },  // Inst #395 = BREAK_MMR6
  { 396,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #396 = BSELI_B
  { 397,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #397 = BSEL_D_PSEUDO
  { 398,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #398 = BSEL_FD_PSEUDO
  { 399,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #399 = BSEL_FW_PSEUDO
  { 400,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #400 = BSEL_H_PSEUDO
  { 401,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #401 = BSEL_V
  { 402,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #402 = BSEL_W_PSEUDO
  { 403,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #403 = BSETI_B
  { 404,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #404 = BSETI_D
  { 405,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #405 = BSETI_H
  { 406,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #406 = BSETI_W
  { 407,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #407 = BSET_B
  { 408,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #408 = BSET_D
  { 409,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #409 = BSET_H
  { 410,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #410 = BSET_W
  { 411,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #411 = BZ_B
  { 412,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo67, -1 ,nullptr },  // Inst #412 = BZ_D
  { 413,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo68, -1 ,nullptr },  // Inst #413 = BZ_H
  { 414,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo66, -1 ,nullptr },  // Inst #414 = BZ_V
  { 415,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo69, -1 ,nullptr },  // Inst #415 = BZ_W
  { 416,	1,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #416 = B_MMR6_Pseudo
  { 417,	1,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #417 = B_MM_Pseudo
  { 418,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #418 = BeqImm
  { 419,	2,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #419 = BeqzRxImm16
  { 420,	2,	0,	4,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #420 = BeqzRxImmX16
  { 421,	1,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #421 = Bimm16
  { 422,	1,	0,	4,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo47, -1 ,nullptr },  // Inst #422 = BimmX16
  { 423,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, OperandInfo56, -1 ,nullptr },  // Inst #423 = BneImm
  { 424,	2,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #424 = BnezRxImm16
  { 425,	2,	0,	4,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo71, -1 ,nullptr },  // Inst #425 = BnezRxImmX16
  { 426,	0,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #426 = Break16
  { 427,	1,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #427 = Bteqz16
  { 428,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #428 = BteqzT8CmpX16
  { 429,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #429 = BteqzT8CmpiX16
  { 430,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #430 = BteqzT8SltX16
  { 431,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #431 = BteqzT8SltiX16
  { 432,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #432 = BteqzT8SltiuX16
  { 433,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #433 = BteqzT8SltuX16
  { 434,	1,	0,	4,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #434 = BteqzX16
  { 435,	1,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #435 = Btnez16
  { 436,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #436 = BtnezT8CmpX16
  { 437,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #437 = BtnezT8CmpiX16
  { 438,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #438 = BtnezT8SltX16
  { 439,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #439 = BtnezT8SltiX16
  { 440,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo73, -1 ,nullptr },  // Inst #440 = BtnezT8SltiuX16
  { 441,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo72, -1 ,nullptr },  // Inst #441 = BtnezT8SltuX16
  { 442,	1,	0,	4,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList7, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #442 = BtnezX16
  { 443,	3,	1,	4,	33,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo74, -1 ,nullptr },  // Inst #443 = BuildPairF64
  { 444,	3,	1,	4,	33,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo75, -1 ,nullptr },  // Inst #444 = BuildPairF64_64
  { 445,	3,	0,	4,	34,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #445 = CACHE
  { 446,	3,	0,	4,	35,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #446 = CACHEE
  { 447,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #447 = CACHEE_MM
  { 448,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #448 = CACHEE_MMR6
  { 449,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #449 = CACHE_MM
  { 450,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #450 = CACHE_MMR6
  { 451,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #451 = CACHE_R6
  { 452,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #452 = CEIL_L_D64
  { 453,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #453 = CEIL_L_D_MMR6
  { 454,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #454 = CEIL_L_S
  { 455,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #455 = CEIL_L_S_MMR6
  { 456,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #456 = CEIL_W_D32
  { 457,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #457 = CEIL_W_D64
  { 458,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #458 = CEIL_W_D_MMR6
  { 459,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #459 = CEIL_W_MM
  { 460,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #460 = CEIL_W_S
  { 461,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #461 = CEIL_W_S_MM
  { 462,	2,	1,	4,	36,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #462 = CEIL_W_S_MMR6
  { 463,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #463 = CEQI_B
  { 464,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #464 = CEQI_D
  { 465,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #465 = CEQI_H
  { 466,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #466 = CEQI_W
  { 467,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #467 = CEQ_B
  { 468,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #468 = CEQ_D
  { 469,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #469 = CEQ_H
  { 470,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #470 = CEQ_W
  { 471,	2,	1,	4,	37,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #471 = CFC1
  { 472,	2,	1,	4,	37,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo81, -1 ,nullptr },  // Inst #472 = CFC1_MM
  { 473,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo82, -1 ,nullptr },  // Inst #473 = CFCMSA
  { 474,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #474 = CINS
  { 475,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #475 = CINS32
  { 476,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #476 = CLASS_D
  { 477,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #477 = CLASS_D_MMR6
  { 478,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #478 = CLASS_S
  { 479,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #479 = CLASS_S_MMR6
  { 480,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #480 = CLEI_S_B
  { 481,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #481 = CLEI_S_D
  { 482,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #482 = CLEI_S_H
  { 483,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #483 = CLEI_S_W
  { 484,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #484 = CLEI_U_B
  { 485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #485 = CLEI_U_D
  { 486,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #486 = CLEI_U_H
  { 487,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #487 = CLEI_U_W
  { 488,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #488 = CLE_S_B
  { 489,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #489 = CLE_S_D
  { 490,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #490 = CLE_S_H
  { 491,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #491 = CLE_S_W
  { 492,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #492 = CLE_U_B
  { 493,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #493 = CLE_U_D
  { 494,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #494 = CLE_U_H
  { 495,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #495 = CLE_U_W
  { 496,	2,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #496 = CLO
  { 497,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #497 = CLO_MM
  { 498,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #498 = CLO_MMR6
  { 499,	2,	1,	4,	38,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #499 = CLO_R6
  { 500,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #500 = CLTI_S_B
  { 501,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #501 = CLTI_S_D
  { 502,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #502 = CLTI_S_H
  { 503,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #503 = CLTI_S_W
  { 504,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #504 = CLTI_U_B
  { 505,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #505 = CLTI_U_D
  { 506,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #506 = CLTI_U_H
  { 507,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #507 = CLTI_U_W
  { 508,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #508 = CLT_S_B
  { 509,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #509 = CLT_S_D
  { 510,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #510 = CLT_S_H
  { 511,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #511 = CLT_S_W
  { 512,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #512 = CLT_U_B
  { 513,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #513 = CLT_U_D
  { 514,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #514 = CLT_U_H
  { 515,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #515 = CLT_U_W
  { 516,	2,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #516 = CLZ
  { 517,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #517 = CLZ_MM
  { 518,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #518 = CLZ_MMR6
  { 519,	2,	1,	4,	39,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #519 = CLZ_R6
  { 520,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #520 = CMPGDU_EQ_QB
  { 521,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #521 = CMPGDU_EQ_QB_MMR2
  { 522,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #522 = CMPGDU_LE_QB
  { 523,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #523 = CMPGDU_LE_QB_MMR2
  { 524,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #524 = CMPGDU_LT_QB
  { 525,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo84, -1 ,nullptr },  // Inst #525 = CMPGDU_LT_QB_MMR2
  { 526,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #526 = CMPGU_EQ_QB
  { 527,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #527 = CMPGU_EQ_QB_MM
  { 528,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #528 = CMPGU_LE_QB
  { 529,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #529 = CMPGU_LE_QB_MM
  { 530,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #530 = CMPGU_LT_QB
  { 531,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo84, -1 ,nullptr },  // Inst #531 = CMPGU_LT_QB_MM
  { 532,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #532 = CMPU_EQ_QB
  { 533,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #533 = CMPU_EQ_QB_MM
  { 534,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #534 = CMPU_LE_QB
  { 535,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #535 = CMPU_LE_QB_MM
  { 536,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #536 = CMPU_LT_QB
  { 537,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #537 = CMPU_LT_QB_MM
  { 538,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #538 = CMP_AF_D_MMR6
  { 539,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #539 = CMP_AF_S_MMR6
  { 540,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #540 = CMP_EQ_D
  { 541,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #541 = CMP_EQ_D_MMR6
  { 542,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #542 = CMP_EQ_PH
  { 543,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #543 = CMP_EQ_PH_MM
  { 544,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #544 = CMP_EQ_S
  { 545,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #545 = CMP_EQ_S_MMR6
  { 546,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #546 = CMP_F_D
  { 547,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #547 = CMP_F_S
  { 548,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #548 = CMP_LE_D
  { 549,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #549 = CMP_LE_D_MMR6
  { 550,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #550 = CMP_LE_PH
  { 551,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #551 = CMP_LE_PH_MM
  { 552,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #552 = CMP_LE_S
  { 553,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #553 = CMP_LE_S_MMR6
  { 554,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #554 = CMP_LT_D
  { 555,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #555 = CMP_LT_D_MMR6
  { 556,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #556 = CMP_LT_PH
  { 557,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList8, OperandInfo14, -1 ,nullptr },  // Inst #557 = CMP_LT_PH_MM
  { 558,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #558 = CMP_LT_S
  { 559,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #559 = CMP_LT_S_MMR6
  { 560,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #560 = CMP_SAF_D
  { 561,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #561 = CMP_SAF_D_MMR6
  { 562,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #562 = CMP_SAF_S
  { 563,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #563 = CMP_SAF_S_MMR6
  { 564,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #564 = CMP_SEQ_D
  { 565,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #565 = CMP_SEQ_D_MMR6
  { 566,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #566 = CMP_SEQ_S
  { 567,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #567 = CMP_SEQ_S_MMR6
  { 568,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #568 = CMP_SLE_D
  { 569,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #569 = CMP_SLE_D_MMR6
  { 570,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #570 = CMP_SLE_S
  { 571,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #571 = CMP_SLE_S_MMR6
  { 572,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #572 = CMP_SLT_D
  { 573,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #573 = CMP_SLT_D_MMR6
  { 574,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #574 = CMP_SLT_S
  { 575,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #575 = CMP_SLT_S_MMR6
  { 576,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #576 = CMP_SUEQ_D
  { 577,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #577 = CMP_SUEQ_D_MMR6
  { 578,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #578 = CMP_SUEQ_S
  { 579,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #579 = CMP_SUEQ_S_MMR6
  { 580,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #580 = CMP_SULE_D
  { 581,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #581 = CMP_SULE_D_MMR6
  { 582,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #582 = CMP_SULE_S
  { 583,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #583 = CMP_SULE_S_MMR6
  { 584,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #584 = CMP_SULT_D
  { 585,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #585 = CMP_SULT_D_MMR6
  { 586,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #586 = CMP_SULT_S
  { 587,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #587 = CMP_SULT_S_MMR6
  { 588,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #588 = CMP_SUN_D
  { 589,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #589 = CMP_SUN_D_MMR6
  { 590,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #590 = CMP_SUN_S
  { 591,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #591 = CMP_SUN_S_MMR6
  { 592,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #592 = CMP_UEQ_D
  { 593,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #593 = CMP_UEQ_D_MMR6
  { 594,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #594 = CMP_UEQ_S
  { 595,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #595 = CMP_UEQ_S_MMR6
  { 596,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #596 = CMP_ULE_D
  { 597,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #597 = CMP_ULE_D_MMR6
  { 598,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #598 = CMP_ULE_S
  { 599,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #599 = CMP_ULE_S_MMR6
  { 600,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #600 = CMP_ULT_D
  { 601,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #601 = CMP_ULT_D_MMR6
  { 602,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #602 = CMP_ULT_S
  { 603,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #603 = CMP_ULT_S_MMR6
  { 604,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #604 = CMP_UN_D
  { 605,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo85, -1 ,nullptr },  // Inst #605 = CMP_UN_D_MMR6
  { 606,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #606 = CMP_UN_S
  { 607,	3,	1,	4,	0,	0, 0x16ULL, nullptr, nullptr, OperandInfo86, -1 ,nullptr },  // Inst #607 = CMP_UN_S_MMR6
  { 608,	3,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::NotDuplicable), 0x0ULL, nullptr, nullptr, OperandInfo4, -1 ,nullptr },  // Inst #608 = CONSTPOOL_ENTRY
  { 609,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo87, -1 ,nullptr },  // Inst #609 = COPY_FD_PSEUDO
  { 610,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo88, -1 ,nullptr },  // Inst #610 = COPY_FW_PSEUDO
  { 611,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #611 = COPY_S_B
  { 612,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo90, -1 ,nullptr },  // Inst #612 = COPY_S_D
  { 613,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #613 = COPY_S_H
  { 614,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #614 = COPY_S_W
  { 615,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo89, -1 ,nullptr },  // Inst #615 = COPY_U_B
  { 616,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo91, -1 ,nullptr },  // Inst #616 = COPY_U_H
  { 617,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo92, -1 ,nullptr },  // Inst #617 = COPY_U_W
  { 618,	2,	1,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #618 = CTC1
  { 619,	2,	1,	4,	40,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo93, -1 ,nullptr },  // Inst #619 = CTC1_MM
  { 620,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo94, -1 ,nullptr },  // Inst #620 = CTCMSA
  { 621,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #621 = CVT_D32_S
  { 622,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #622 = CVT_D32_W
  { 623,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #623 = CVT_D32_W_MM
  { 624,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #624 = CVT_D64_L
  { 625,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #625 = CVT_D64_S
  { 626,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #626 = CVT_D64_W
  { 627,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #627 = CVT_D_L_MMR6
  { 628,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #628 = CVT_D_S_MM
  { 629,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #629 = CVT_D_S_MMR6
  { 630,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #630 = CVT_D_W_MMR6
  { 631,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #631 = CVT_L_D64
  { 632,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #632 = CVT_L_D64_MM
  { 633,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #633 = CVT_L_D_MMR6
  { 634,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #634 = CVT_L_S
  { 635,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #635 = CVT_L_S_MM
  { 636,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #636 = CVT_L_S_MMR6
  { 637,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #637 = CVT_S_D32
  { 638,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #638 = CVT_S_D32_MM
  { 639,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #639 = CVT_S_D64
  { 640,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo95, -1 ,nullptr },  // Inst #640 = CVT_S_D_MMR6
  { 641,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #641 = CVT_S_L
  { 642,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #642 = CVT_S_L_MMR6
  { 643,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #643 = CVT_S_W
  { 644,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #644 = CVT_S_W_MM
  { 645,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #645 = CVT_S_W_MMR6
  { 646,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #646 = CVT_W_D32
  { 647,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #647 = CVT_W_D64
  { 648,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #648 = CVT_W_D_MMR6
  { 649,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #649 = CVT_W_MM
  { 650,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #650 = CVT_W_S
  { 651,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #651 = CVT_W_S_MM
  { 652,	2,	1,	4,	41,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #652 = CVT_W_S_MMR6
  { 653,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #653 = C_EQ_D32
  { 654,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #654 = C_EQ_D64
  { 655,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #655 = C_EQ_S
  { 656,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #656 = C_F_D32
  { 657,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #657 = C_F_D64
  { 658,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #658 = C_F_S
  { 659,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #659 = C_LE_D32
  { 660,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #660 = C_LE_D64
  { 661,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #661 = C_LE_S
  { 662,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #662 = C_LT_D32
  { 663,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #663 = C_LT_D64
  { 664,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #664 = C_LT_S
  { 665,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #665 = C_NGE_D32
  { 666,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #666 = C_NGE_D64
  { 667,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #667 = C_NGE_S
  { 668,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #668 = C_NGLE_D32
  { 669,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #669 = C_NGLE_D64
  { 670,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #670 = C_NGLE_S
  { 671,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #671 = C_NGL_D32
  { 672,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #672 = C_NGL_D64
  { 673,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #673 = C_NGL_S
  { 674,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #674 = C_NGT_D32
  { 675,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #675 = C_NGT_D64
  { 676,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #676 = C_NGT_S
  { 677,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #677 = C_OLE_D32
  { 678,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #678 = C_OLE_D64
  { 679,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #679 = C_OLE_S
  { 680,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #680 = C_OLT_D32
  { 681,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #681 = C_OLT_D64
  { 682,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #682 = C_OLT_S
  { 683,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #683 = C_SEQ_D32
  { 684,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #684 = C_SEQ_D64
  { 685,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #685 = C_SEQ_S
  { 686,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #686 = C_SF_D32
  { 687,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #687 = C_SF_D64
  { 688,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #688 = C_SF_S
  { 689,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #689 = C_UEQ_D32
  { 690,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #690 = C_UEQ_D64
  { 691,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #691 = C_UEQ_S
  { 692,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #692 = C_ULE_D32
  { 693,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #693 = C_ULE_D64
  { 694,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #694 = C_ULE_S
  { 695,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #695 = C_ULT_D32
  { 696,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #696 = C_ULT_D64
  { 697,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #697 = C_ULT_S
  { 698,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #698 = C_UN_D32
  { 699,	2,	0,	4,	42,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #699 = C_UN_D64
  { 700,	2,	0,	4,	43,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #700 = C_UN_S
  { 701,	2,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #701 = CmpRxRy16
  { 702,	2,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #702 = CmpiRxImm16
  { 703,	2,	0,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #703 = CmpiRxImmX16
  { 704,	1,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #704 = Constant32
  { 705,	3,	1,	4,	44,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #705 = DADD
  { 706,	3,	1,	4,	45,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #706 = DADDIU_MM64R6
  { 707,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #707 = DADDU_MM64R6
  { 708,	3,	1,	4,	44,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #708 = DADD_MM64R6
  { 709,	3,	1,	4,	47,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #709 = DADDi
  { 710,	3,	1,	4,	45,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #710 = DADDiu
  { 711,	3,	1,	4,	46,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #711 = DADDu
  { 712,	3,	1,	4,	48,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #712 = DAHI
  { 713,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #713 = DAHI_MM64R6
  { 714,	4,	1,	4,	49,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #714 = DALIGN
  { 715,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #715 = DALIGN_MM64R6
  { 716,	3,	1,	4,	50,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #716 = DATI
  { 717,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo97, -1 ,nullptr },  // Inst #717 = DATI_MM64R6
  { 718,	3,	1,	4,	51,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #718 = DAUI
  { 719,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #719 = DAUI_MM64R6
  { 720,	2,	1,	4,	52,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #720 = DBITSWAP
  { 721,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #721 = DCLO
  { 722,	2,	1,	4,	38,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #722 = DCLO_MM64R6
  { 723,	2,	1,	4,	53,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #723 = DCLO_R6
  { 724,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #724 = DCLZ
  { 725,	2,	1,	4,	39,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #725 = DCLZ_MM64R6
  { 726,	2,	1,	4,	54,	0, 0x6ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #726 = DCLZ_R6
  { 727,	3,	1,	4,	55,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #727 = DDIV
  { 728,	3,	1,	4,	56,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #728 = DDIVU
  { 729,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #729 = DDIVU_MM64R6
  { 730,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #730 = DDIV_MM64R6
  { 731,	0,	0,	4,	57,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #731 = DERET
  { 732,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #732 = DERET_MM
  { 733,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #733 = DERET_MMR6
  { 734,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #734 = DEXT
  { 735,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #735 = DEXTM
  { 736,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #736 = DEXTM_MM64R6
  { 737,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #737 = DEXTU
  { 738,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #738 = DEXTU_MM64R6
  { 739,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #739 = DEXT_MM64R6
  { 740,	1,	1,	4,	59,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #740 = DI
  { 741,	5,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #741 = DINS
  { 742,	5,	1,	4,	60,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #742 = DINSM
  { 743,	5,	1,	4,	60,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #743 = DINSM_MM64R6
  { 744,	5,	1,	4,	60,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #744 = DINSU
  { 745,	5,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #745 = DINSU_MM64R6
  { 746,	5,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo100, -1 ,nullptr },  // Inst #746 = DINS_MM64R6
  { 747,	3,	1,	4,	61,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #747 = DIV
  { 748,	3,	1,	4,	62,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #748 = DIVU
  { 749,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #749 = DIVU_MMR6
  { 750,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #750 = DIV_MMR6
  { 751,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #751 = DIV_S_B
  { 752,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #752 = DIV_S_D
  { 753,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #753 = DIV_S_H
  { 754,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #754 = DIV_S_W
  { 755,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #755 = DIV_U_B
  { 756,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #756 = DIV_U_D
  { 757,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #757 = DIV_U_H
  { 758,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #758 = DIV_U_W
  { 759,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #759 = DI_MM
  { 760,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #760 = DI_MMR6
  { 761,	4,	1,	4,	63,	0, 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #761 = DLSA
  { 762,	4,	1,	4,	63,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo98, -1 ,nullptr },  // Inst #762 = DLSA_R6
  { 763,	3,	1,	4,	64,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #763 = DMFC0
  { 764,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo101, -1 ,nullptr },  // Inst #764 = DMFC0_MM64R6
  { 765,	2,	1,	4,	65,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #765 = DMFC1
  { 766,	2,	1,	4,	65,	0|(1ULL<<MCID::Bitcast), 0x6ULL, nullptr, nullptr, OperandInfo102, -1 ,nullptr },  // Inst #766 = DMFC1_MM64R6
  { 767,	3,	1,	4,	66,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo103, -1 ,nullptr },  // Inst #767 = DMFC2
  { 768,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo104, -1 ,nullptr },  // Inst #768 = DMFC2_MM64R6
  { 769,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #769 = DMFC2_OCTEON
  { 770,	3,	1,	4,	67,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #770 = DMOD
  { 771,	3,	1,	4,	68,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #771 = DMODU
  { 772,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #772 = DMODU_MM64R6
  { 773,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #773 = DMOD_MM64R6
  { 774,	3,	1,	4,	69,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #774 = DMTC0
  { 775,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo106, -1 ,nullptr },  // Inst #775 = DMTC0_MM64R6
  { 776,	2,	1,	4,	70,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #776 = DMTC1
  { 777,	2,	1,	4,	70,	0|(1ULL<<MCID::Bitcast), 0x6ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #777 = DMTC1_MM64R6
  { 778,	3,	1,	4,	71,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo108, -1 ,nullptr },  // Inst #778 = DMTC2
  { 779,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo109, -1 ,nullptr },  // Inst #779 = DMTC2_MM64R6
  { 780,	2,	2,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #780 = DMTC2_OCTEON
  { 781,	3,	1,	4,	72,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #781 = DMUH
  { 782,	3,	1,	4,	73,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #782 = DMUHU
  { 783,	3,	1,	4,	73,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #783 = DMUHU_MM64R6
  { 784,	3,	1,	4,	72,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #784 = DMUH_MM64R6
  { 785,	3,	1,	4,	74,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList9, OperandInfo35, -1 ,nullptr },  // Inst #785 = DMUL
  { 786,	2,	0,	4,	75,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #786 = DMULT
  { 787,	2,	0,	4,	76,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #787 = DMULTu
  { 788,	3,	1,	4,	74,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #788 = DMULU
  { 789,	3,	1,	4,	77,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #789 = DMULU_MM64R6
  { 790,	3,	1,	4,	74,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #790 = DMUL_MM64R6
  { 791,	3,	1,	4,	74,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #791 = DMUL_R6
  { 792,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #792 = DOTP_S_D
  { 793,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #793 = DOTP_S_H
  { 794,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #794 = DOTP_S_W
  { 795,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #795 = DOTP_U_D
  { 796,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #796 = DOTP_U_H
  { 797,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #797 = DOTP_U_W
  { 798,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #798 = DPADD_S_D
  { 799,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #799 = DPADD_S_H
  { 800,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #800 = DPADD_S_W
  { 801,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #801 = DPADD_U_D
  { 802,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #802 = DPADD_U_H
  { 803,	4,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #803 = DPADD_U_W
  { 804,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #804 = DPAQX_SA_W_PH
  { 805,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #805 = DPAQX_SA_W_PH_MMR2
  { 806,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #806 = DPAQX_S_W_PH
  { 807,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #807 = DPAQX_S_W_PH_MMR2
  { 808,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #808 = DPAQ_SA_L_W
  { 809,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #809 = DPAQ_SA_L_W_MM
  { 810,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #810 = DPAQ_S_W_PH
  { 811,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #811 = DPAQ_S_W_PH_MM
  { 812,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #812 = DPAU_H_QBL
  { 813,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #813 = DPAU_H_QBL_MM
  { 814,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #814 = DPAU_H_QBR
  { 815,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #815 = DPAU_H_QBR_MM
  { 816,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #816 = DPAX_W_PH
  { 817,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #817 = DPAX_W_PH_MMR2
  { 818,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #818 = DPA_W_PH
  { 819,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #819 = DPA_W_PH_MMR2
  { 820,	2,	1,	4,	78,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #820 = DPOP
  { 821,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #821 = DPSQX_SA_W_PH
  { 822,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #822 = DPSQX_SA_W_PH_MMR2
  { 823,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #823 = DPSQX_S_W_PH
  { 824,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #824 = DPSQX_S_W_PH_MMR2
  { 825,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #825 = DPSQ_SA_L_W
  { 826,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #826 = DPSQ_SA_L_W_MM
  { 827,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #827 = DPSQ_S_W_PH
  { 828,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #828 = DPSQ_S_W_PH_MM
  { 829,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #829 = DPSUB_S_D
  { 830,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #830 = DPSUB_S_H
  { 831,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #831 = DPSUB_S_W
  { 832,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo113, -1 ,nullptr },  // Inst #832 = DPSUB_U_D
  { 833,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo114, -1 ,nullptr },  // Inst #833 = DPSUB_U_H
  { 834,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo115, -1 ,nullptr },  // Inst #834 = DPSUB_U_W
  { 835,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #835 = DPSU_H_QBL
  { 836,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #836 = DPSU_H_QBL_MM
  { 837,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #837 = DPSU_H_QBR
  { 838,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #838 = DPSU_H_QBR_MM
  { 839,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #839 = DPSX_W_PH
  { 840,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #840 = DPSX_W_PH_MMR2
  { 841,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #841 = DPS_W_PH
  { 842,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #842 = DPS_W_PH_MMR2
  { 843,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #843 = DROL
  { 844,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #844 = DROLImm
  { 845,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #845 = DROR
  { 846,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #846 = DRORImm
  { 847,	3,	1,	4,	79,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #847 = DROTR
  { 848,	3,	1,	4,	80,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #848 = DROTR32
  { 849,	3,	1,	4,	80,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #849 = DROTR32_MM64R6
  { 850,	3,	1,	4,	81,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #850 = DROTRV
  { 851,	3,	1,	4,	81,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #851 = DROTRV_MM64R6
  { 852,	3,	1,	4,	79,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #852 = DROTR_MM64R6
  { 853,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #853 = DSBH
  { 854,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #854 = DSBH_MM64R6
  { 855,	2,	0,	4,	55,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #855 = DSDIV
  { 856,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #856 = DSDivMacro
  { 857,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #857 = DSHD
  { 858,	2,	1,	4,	0,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #858 = DSHD_MM64R6
  { 859,	3,	1,	4,	82,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #859 = DSLL
  { 860,	3,	1,	4,	83,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #860 = DSLL32
  { 861,	3,	1,	4,	83,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #861 = DSLL32_MM64R6
  { 862,	2,	1,	4,	82,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #862 = DSLL64_32
  { 863,	3,	1,	4,	84,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #863 = DSLLV
  { 864,	3,	1,	4,	84,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #864 = DSLLV_MM64R6
  { 865,	3,	1,	4,	82,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #865 = DSLL_MM64R6
  { 866,	3,	1,	4,	85,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #866 = DSRA
  { 867,	3,	1,	4,	86,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #867 = DSRA32
  { 868,	3,	1,	4,	86,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #868 = DSRA32_MM64R6
  { 869,	3,	1,	4,	87,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #869 = DSRAV
  { 870,	3,	1,	4,	87,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #870 = DSRAV_MM64R6
  { 871,	3,	1,	4,	85,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #871 = DSRA_MM64R6
  { 872,	3,	1,	4,	88,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #872 = DSRL
  { 873,	3,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #873 = DSRL32
  { 874,	3,	1,	4,	89,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #874 = DSRL32_MM64R6
  { 875,	3,	1,	4,	90,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #875 = DSRLV
  { 876,	3,	1,	4,	90,	0, 0x1ULL, nullptr, nullptr, OperandInfo117, -1 ,nullptr },  // Inst #876 = DSRLV_MM64R6
  { 877,	3,	1,	4,	88,	0, 0x1ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #877 = DSRL_MM64R6
  { 878,	3,	1,	4,	91,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #878 = DSUB
  { 879,	3,	1,	4,	92,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #879 = DSUBU_MM64R6
  { 880,	3,	1,	4,	91,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #880 = DSUB_MM64R6
  { 881,	3,	1,	4,	92,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #881 = DSUBu
  { 882,	2,	0,	4,	56,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList10, OperandInfo99, -1 ,nullptr },  // Inst #882 = DUDIV
  { 883,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #883 = DUDivMacro
  { 884,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #884 = DVP_MMR6
  { 885,	2,	0,	2,	14,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #885 = DivRxRy16
  { 886,	2,	0,	2,	14,	0, 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #886 = DivuRxRy16
  { 887,	0,	0,	4,	93,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #887 = EHB
  { 888,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #888 = EHB_MM
  { 889,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #889 = EHB_MMR6
  { 890,	1,	1,	4,	94,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #890 = EI
  { 891,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #891 = EI_MM
  { 892,	1,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #892 = EI_MMR6
  { 893,	0,	0,	4,	95,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #893 = ERET
  { 894,	0,	0,	4,	96,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #894 = ERETNC
  { 895,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #895 = ERETNC_MMR6
  { 896,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #896 = ERET_MM
  { 897,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #897 = ERET_MMR6
  { 898,	0,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #898 = ERet
  { 899,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #899 = EVP_MMR6
  { 900,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #900 = EXT
  { 901,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo120, -1 ,nullptr },  // Inst #901 = EXTP
  { 902,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo120, -1 ,nullptr },  // Inst #902 = EXTPDP
  { 903,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo121, -1 ,nullptr },  // Inst #903 = EXTPDPV
  { 904,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo121, -1 ,nullptr },  // Inst #904 = EXTPDPV_MM
  { 905,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList14, OperandInfo120, -1 ,nullptr },  // Inst #905 = EXTPDP_MM
  { 906,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo121, -1 ,nullptr },  // Inst #906 = EXTPV
  { 907,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo121, -1 ,nullptr },  // Inst #907 = EXTPV_MM
  { 908,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, ImplicitList6, ImplicitList13, OperandInfo120, -1 ,nullptr },  // Inst #908 = EXTP_MM
  { 909,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #909 = EXTRV_RS_W
  { 910,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #910 = EXTRV_RS_W_MM
  { 911,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #911 = EXTRV_R_W
  { 912,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #912 = EXTRV_R_W_MM
  { 913,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #913 = EXTRV_S_H
  { 914,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #914 = EXTRV_S_H_MM
  { 915,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #915 = EXTRV_W
  { 916,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo121, -1 ,nullptr },  // Inst #916 = EXTRV_W_MM
  { 917,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #917 = EXTR_RS_W
  { 918,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #918 = EXTR_RS_W_MM
  { 919,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #919 = EXTR_R_W
  { 920,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #920 = EXTR_R_W_MM
  { 921,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #921 = EXTR_S_H
  { 922,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #922 = EXTR_S_H_MM
  { 923,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #923 = EXTR_W
  { 924,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList15, OperandInfo120, -1 ,nullptr },  // Inst #924 = EXTR_W_MM
  { 925,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #925 = EXTS
  { 926,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo83, -1 ,nullptr },  // Inst #926 = EXTS32
  { 927,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #927 = EXT_MM
  { 928,	4,	1,	4,	58,	0, 0x1ULL, nullptr, nullptr, OperandInfo119, -1 ,nullptr },  // Inst #928 = EXT_MMR6
  { 929,	3,	1,	4,	97,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo122, -1 ,nullptr },  // Inst #929 = ExtractElementF64
  { 930,	3,	1,	4,	97,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo123, -1 ,nullptr },  // Inst #930 = ExtractElementF64_64
  { 931,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #931 = FABS_D
  { 932,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #932 = FABS_D32
  { 933,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #933 = FABS_D64
  { 934,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #934 = FABS_MM
  { 935,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #935 = FABS_S
  { 936,	2,	1,	4,	2,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #936 = FABS_S_MM
  { 937,	2,	1,	4,	0,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #937 = FABS_W
  { 938,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #938 = FADD_D
  { 939,	3,	1,	4,	98,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #939 = FADD_D32
  { 940,	3,	1,	4,	98,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #940 = FADD_D64
  { 941,	3,	1,	4,	98,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #941 = FADD_D_MMR6
  { 942,	3,	1,	4,	98,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #942 = FADD_MM
  { 943,	3,	1,	4,	99,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #943 = FADD_S
  { 944,	3,	1,	4,	99,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #944 = FADD_S_MM
  { 945,	3,	1,	4,	99,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #945 = FADD_S_MMR6
  { 946,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #946 = FADD_W
  { 947,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #947 = FCAF_D
  { 948,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #948 = FCAF_W
  { 949,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #949 = FCEQ_D
  { 950,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #950 = FCEQ_W
  { 951,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #951 = FCLASS_D
  { 952,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #952 = FCLASS_W
  { 953,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #953 = FCLE_D
  { 954,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #954 = FCLE_W
  { 955,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #955 = FCLT_D
  { 956,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #956 = FCLT_W
  { 957,	3,	0,	4,	42,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #957 = FCMP_D32
  { 958,	3,	0,	4,	42,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo129, -1 ,nullptr },  // Inst #958 = FCMP_D32_MM
  { 959,	3,	0,	4,	42,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo130, -1 ,nullptr },  // Inst #959 = FCMP_D64
  { 960,	3,	0,	4,	43,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo131, -1 ,nullptr },  // Inst #960 = FCMP_S32
  { 961,	3,	0,	4,	43,	0, 0x4ULL, nullptr, ImplicitList16, OperandInfo131, -1 ,nullptr },  // Inst #961 = FCMP_S32_MM
  { 962,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #962 = FCNE_D
  { 963,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #963 = FCNE_W
  { 964,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #964 = FCOR_D
  { 965,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #965 = FCOR_W
  { 966,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #966 = FCUEQ_D
  { 967,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #967 = FCUEQ_W
  { 968,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #968 = FCULE_D
  { 969,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #969 = FCULE_W
  { 970,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #970 = FCULT_D
  { 971,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #971 = FCULT_W
  { 972,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #972 = FCUNE_D
  { 973,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #973 = FCUNE_W
  { 974,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #974 = FCUN_D
  { 975,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #975 = FCUN_W
  { 976,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #976 = FDIV_D
  { 977,	3,	1,	4,	100,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #977 = FDIV_D32
  { 978,	3,	1,	4,	100,	0, 0x4ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #978 = FDIV_D64
  { 979,	3,	1,	4,	100,	0, 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #979 = FDIV_D_MMR6
  { 980,	3,	1,	4,	100,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #980 = FDIV_MM
  { 981,	3,	1,	4,	101,	0, 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #981 = FDIV_S
  { 982,	3,	1,	4,	101,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #982 = FDIV_S_MM
  { 983,	3,	1,	4,	101,	0, 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #983 = FDIV_S_MMR6
  { 984,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #984 = FDIV_W
  { 985,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #985 = FEXDO_H
  { 986,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #986 = FEXDO_W
  { 987,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #987 = FEXP2_D
  { 988,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #988 = FEXP2_D_1_PSEUDO
  { 989,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #989 = FEXP2_W
  { 990,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #990 = FEXP2_W_1_PSEUDO
  { 991,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #991 = FEXUPL_D
  { 992,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #992 = FEXUPL_W
  { 993,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #993 = FEXUPR_D
  { 994,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #994 = FEXUPR_W
  { 995,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #995 = FFINT_S_D
  { 996,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #996 = FFINT_S_W
  { 997,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #997 = FFINT_U_D
  { 998,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #998 = FFINT_U_W
  { 999,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #999 = FFQL_D
  { 1000,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #1000 = FFQL_W
  { 1001,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo134, -1 ,nullptr },  // Inst #1001 = FFQR_D
  { 1002,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo135, -1 ,nullptr },  // Inst #1002 = FFQR_W
  { 1003,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo136, -1 ,nullptr },  // Inst #1003 = FILL_B
  { 1004,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo137, -1 ,nullptr },  // Inst #1004 = FILL_D
  { 1005,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo138, -1 ,nullptr },  // Inst #1005 = FILL_FD_PSEUDO
  { 1006,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo139, -1 ,nullptr },  // Inst #1006 = FILL_FW_PSEUDO
  { 1007,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo140, -1 ,nullptr },  // Inst #1007 = FILL_H
  { 1008,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo141, -1 ,nullptr },  // Inst #1008 = FILL_W
  { 1009,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1009 = FLOG2_D
  { 1010,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1010 = FLOG2_W
  { 1011,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1011 = FLOOR_L_D64
  { 1012,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1012 = FLOOR_L_D_MMR6
  { 1013,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1013 = FLOOR_L_S
  { 1014,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1014 = FLOOR_L_S_MMR6
  { 1015,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1015 = FLOOR_W_D32
  { 1016,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #1016 = FLOOR_W_D64
  { 1017,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1017 = FLOOR_W_D_MMR6
  { 1018,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1018 = FLOOR_W_MM
  { 1019,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1019 = FLOOR_W_S
  { 1020,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1020 = FLOOR_W_S_MM
  { 1021,	2,	1,	4,	102,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1021 = FLOOR_W_S_MMR6
  { 1022,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1022 = FMADD_D
  { 1023,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1023 = FMADD_W
  { 1024,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1024 = FMAX_A_D
  { 1025,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1025 = FMAX_A_W
  { 1026,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1026 = FMAX_D
  { 1027,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1027 = FMAX_W
  { 1028,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1028 = FMIN_A_D
  { 1029,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1029 = FMIN_A_W
  { 1030,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1030 = FMIN_D
  { 1031,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1031 = FMIN_W
  { 1032,	2,	1,	4,	103,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1032 = FMOV_D32
  { 1033,	2,	1,	4,	103,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1033 = FMOV_D32_MM
  { 1034,	2,	1,	4,	103,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1034 = FMOV_D64
  { 1035,	2,	1,	4,	103,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1035 = FMOV_D_MMR6
  { 1036,	2,	1,	4,	104,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1036 = FMOV_S
  { 1037,	2,	1,	4,	104,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1037 = FMOV_S_MM
  { 1038,	2,	1,	4,	104,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1038 = FMOV_S_MMR6
  { 1039,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1039 = FMSUB_D
  { 1040,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1040 = FMSUB_W
  { 1041,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1041 = FMUL_D
  { 1042,	3,	1,	4,	105,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1042 = FMUL_D32
  { 1043,	3,	1,	4,	105,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1043 = FMUL_D64
  { 1044,	3,	1,	4,	105,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1044 = FMUL_D_MMR6
  { 1045,	3,	1,	4,	105,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1045 = FMUL_MM
  { 1046,	3,	1,	4,	106,	0|(1ULL<<MCID::Commutable), 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1046 = FMUL_S
  { 1047,	3,	1,	4,	106,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1047 = FMUL_S_MM
  { 1048,	3,	1,	4,	106,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1048 = FMUL_S_MMR6
  { 1049,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1049 = FMUL_W
  { 1050,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1050 = FNEG_D32
  { 1051,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1051 = FNEG_D64
  { 1052,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1052 = FNEG_D_MMR6
  { 1053,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1053 = FNEG_MM
  { 1054,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1054 = FNEG_S
  { 1055,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1055 = FNEG_S_MM
  { 1056,	2,	1,	4,	107,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1056 = FNEG_S_MMR6
  { 1057,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1057 = FRCP_D
  { 1058,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1058 = FRCP_W
  { 1059,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1059 = FRINT_D
  { 1060,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1060 = FRINT_W
  { 1061,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1061 = FRSQRT_D
  { 1062,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1062 = FRSQRT_W
  { 1063,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1063 = FSAF_D
  { 1064,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1064 = FSAF_W
  { 1065,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1065 = FSEQ_D
  { 1066,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1066 = FSEQ_W
  { 1067,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1067 = FSLE_D
  { 1068,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1068 = FSLE_W
  { 1069,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1069 = FSLT_D
  { 1070,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1070 = FSLT_W
  { 1071,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1071 = FSNE_D
  { 1072,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1072 = FSNE_W
  { 1073,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1073 = FSOR_D
  { 1074,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1074 = FSOR_W
  { 1075,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1075 = FSQRT_D
  { 1076,	2,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1076 = FSQRT_D32
  { 1077,	2,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1077 = FSQRT_D64
  { 1078,	2,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #1078 = FSQRT_MM
  { 1079,	2,	1,	4,	109,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1079 = FSQRT_S
  { 1080,	2,	1,	4,	109,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1080 = FSQRT_S_MM
  { 1081,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1081 = FSQRT_W
  { 1082,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1082 = FSUB_D
  { 1083,	3,	1,	4,	110,	0, 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1083 = FSUB_D32
  { 1084,	3,	1,	4,	110,	0, 0x4ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1084 = FSUB_D64
  { 1085,	3,	1,	4,	110,	0, 0x6ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1085 = FSUB_D_MMR6
  { 1086,	3,	1,	4,	110,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo126, -1 ,nullptr },  // Inst #1086 = FSUB_MM
  { 1087,	3,	1,	4,	111,	0, 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1087 = FSUB_S
  { 1088,	3,	1,	4,	111,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1088 = FSUB_S_MM
  { 1089,	3,	1,	4,	111,	0, 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1089 = FSUB_S_MMR6
  { 1090,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1090 = FSUB_W
  { 1091,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1091 = FSUEQ_D
  { 1092,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1092 = FSUEQ_W
  { 1093,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1093 = FSULE_D
  { 1094,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1094 = FSULE_W
  { 1095,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1095 = FSULT_D
  { 1096,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1096 = FSULT_W
  { 1097,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1097 = FSUNE_D
  { 1098,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1098 = FSUNE_W
  { 1099,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1099 = FSUN_D
  { 1100,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1100 = FSUN_W
  { 1101,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1101 = FTINT_S_D
  { 1102,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1102 = FTINT_S_W
  { 1103,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1103 = FTINT_U_D
  { 1104,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1104 = FTINT_U_W
  { 1105,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo132, -1 ,nullptr },  // Inst #1105 = FTQ_H
  { 1106,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo133, -1 ,nullptr },  // Inst #1106 = FTQ_W
  { 1107,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1107 = FTRUNC_S_D
  { 1108,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1108 = FTRUNC_S_W
  { 1109,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1109 = FTRUNC_U_D
  { 1110,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1110 = FTRUNC_U_W
  { 1111,	4,	2,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo142, -1 ,nullptr },  // Inst #1111 = GotPrologue16
  { 1112,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1112 = HADD_S_D
  { 1113,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #1113 = HADD_S_H
  { 1114,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #1114 = HADD_S_W
  { 1115,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1115 = HADD_U_D
  { 1116,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #1116 = HADD_U_H
  { 1117,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #1117 = HADD_U_W
  { 1118,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1118 = HSUB_S_D
  { 1119,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #1119 = HSUB_S_H
  { 1120,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #1120 = HSUB_S_W
  { 1121,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo110, -1 ,nullptr },  // Inst #1121 = HSUB_U_D
  { 1122,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo111, -1 ,nullptr },  // Inst #1122 = HSUB_U_H
  { 1123,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo112, -1 ,nullptr },  // Inst #1123 = HSUB_U_W
  { 1124,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1124 = ILVEV_B
  { 1125,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1125 = ILVEV_D
  { 1126,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1126 = ILVEV_H
  { 1127,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1127 = ILVEV_W
  { 1128,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1128 = ILVL_B
  { 1129,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1129 = ILVL_D
  { 1130,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1130 = ILVL_H
  { 1131,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1131 = ILVL_W
  { 1132,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1132 = ILVOD_B
  { 1133,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1133 = ILVOD_D
  { 1134,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1134 = ILVOD_H
  { 1135,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1135 = ILVOD_W
  { 1136,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1136 = ILVR_B
  { 1137,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1137 = ILVR_D
  { 1138,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1138 = ILVR_H
  { 1139,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1139 = ILVR_W
  { 1140,	5,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #1140 = INS
  { 1141,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo144, -1 ,nullptr },  // Inst #1141 = INSERT_B
  { 1142,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo145, -1 ,nullptr },  // Inst #1142 = INSERT_B_VIDX64_PSEUDO
  { 1143,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo146, -1 ,nullptr },  // Inst #1143 = INSERT_B_VIDX_PSEUDO
  { 1144,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo147, -1 ,nullptr },  // Inst #1144 = INSERT_D
  { 1145,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo148, -1 ,nullptr },  // Inst #1145 = INSERT_D_VIDX64_PSEUDO
  { 1146,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo149, -1 ,nullptr },  // Inst #1146 = INSERT_D_VIDX_PSEUDO
  { 1147,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo150, -1 ,nullptr },  // Inst #1147 = INSERT_FD_PSEUDO
  { 1148,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo151, -1 ,nullptr },  // Inst #1148 = INSERT_FD_VIDX64_PSEUDO
  { 1149,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo152, -1 ,nullptr },  // Inst #1149 = INSERT_FD_VIDX_PSEUDO
  { 1150,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo153, -1 ,nullptr },  // Inst #1150 = INSERT_FW_PSEUDO
  { 1151,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo154, -1 ,nullptr },  // Inst #1151 = INSERT_FW_VIDX64_PSEUDO
  { 1152,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo155, -1 ,nullptr },  // Inst #1152 = INSERT_FW_VIDX_PSEUDO
  { 1153,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo156, -1 ,nullptr },  // Inst #1153 = INSERT_H
  { 1154,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo157, -1 ,nullptr },  // Inst #1154 = INSERT_H_VIDX64_PSEUDO
  { 1155,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo158, -1 ,nullptr },  // Inst #1155 = INSERT_H_VIDX_PSEUDO
  { 1156,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo159, -1 ,nullptr },  // Inst #1156 = INSERT_W
  { 1157,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo160, -1 ,nullptr },  // Inst #1157 = INSERT_W_VIDX64_PSEUDO
  { 1158,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo161, -1 ,nullptr },  // Inst #1158 = INSERT_W_VIDX_PSEUDO
  { 1159,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo162, -1 ,nullptr },  // Inst #1159 = INSV
  { 1160,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo163, -1 ,nullptr },  // Inst #1160 = INSVE_B
  { 1161,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo164, -1 ,nullptr },  // Inst #1161 = INSVE_D
  { 1162,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo165, -1 ,nullptr },  // Inst #1162 = INSVE_H
  { 1163,	5,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo166, -1 ,nullptr },  // Inst #1163 = INSVE_W
  { 1164,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList17, nullptr, OperandInfo162, -1 ,nullptr },  // Inst #1164 = INSV_MM
  { 1165,	5,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #1165 = INS_MM
  { 1166,	5,	1,	4,	60,	0, 0x1ULL, nullptr, nullptr, OperandInfo143, -1 ,nullptr },  // Inst #1166 = INS_MMR6
  { 1167,	1,	0,	4,	112,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x13ULL, nullptr, ImplicitList4, OperandInfo2, -1 ,nullptr },  // Inst #1167 = J
  { 1168,	1,	0,	4,	113,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1168 = JAL
  { 1169,	2,	1,	4,	114,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1169 = JALR
  { 1170,	1,	0,	2,	114,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo70, -1 ,nullptr },  // Inst #1170 = JALR16_MM
  { 1171,	2,	1,	4,	114,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, ImplicitList5, OperandInfo99, -1 ,nullptr },  // Inst #1171 = JALR64
  { 1172,	1,	0,	4,	114,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x10ULL, nullptr, ImplicitList5, OperandInfo167, -1 ,nullptr },  // Inst #1172 = JALR64Pseudo
  { 1173,	1,	0,	2,	114,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo70, -1 ,nullptr },  // Inst #1173 = JALRC16_MMR6
  { 1174,	2,	1,	4,	0,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1174 = JALRC_HB_MMR6
  { 1175,	2,	1,	4,	115,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1175 = JALRC_MMR6
  { 1176,	1,	0,	4,	114,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x10ULL, nullptr, ImplicitList5, OperandInfo70, -1 ,nullptr },  // Inst #1176 = JALRPseudo
  { 1177,	1,	0,	2,	116,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo70, -1 ,nullptr },  // Inst #1177 = JALRS16_MM
  { 1178,	2,	1,	4,	116,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1178 = JALRS_MM
  { 1179,	2,	1,	4,	117,	0|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x13ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1179 = JALR_HB
  { 1180,	2,	1,	4,	114,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, ImplicitList5, OperandInfo13, -1 ,nullptr },  // Inst #1180 = JALR_MM
  { 1181,	1,	0,	4,	118,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x3ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1181 = JALS_MM
  { 1182,	1,	0,	4,	113,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1182 = JALX
  { 1183,	1,	0,	4,	113,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1183 = JALX_MM
  { 1184,	1,	0,	4,	113,	0|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call), 0x13ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1184 = JAL_MM
  { 1185,	2,	0,	4,	119,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo18, -1 ,nullptr },  // Inst #1185 = JIALC
  { 1186,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Call)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList5, OperandInfo105, -1 ,nullptr },  // Inst #1186 = JIALC64
  { 1187,	2,	0,	4,	0,	0|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList5, OperandInfo18, -1 ,nullptr },  // Inst #1187 = JIALC_MMR6
  { 1188,	2,	0,	4,	119,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo18, -1 ,nullptr },  // Inst #1188 = JIC
  { 1189,	2,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, ImplicitList4, OperandInfo105, -1 ,nullptr },  // Inst #1189 = JIC64
  { 1190,	2,	0,	4,	0,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList4, OperandInfo18, -1 ,nullptr },  // Inst #1190 = JIC_MMR6
  { 1191,	1,	0,	4,	120,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1191 = JR
  { 1192,	1,	0,	2,	120,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1192 = JR16_MM
  { 1193,	1,	0,	4,	120,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1193 = JR64
  { 1194,	1,	0,	2,	121,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1194 = JRADDIUSP
  { 1195,	1,	0,	2,	122,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1195 = JRC16_MM
  { 1196,	1,	0,	2,	120,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1196 = JRC16_MMR6
  { 1197,	1,	0,	2,	121,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1197 = JRCADDIUSP_MMR6
  { 1198,	1,	0,	4,	123,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x13ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1198 = JR_HB
  { 1199,	1,	0,	4,	0,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1199 = JR_HB_R6
  { 1200,	1,	0,	4,	120,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x11ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1200 = JR_MM
  { 1201,	1,	0,	4,	112,	0|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x13ULL, nullptr, ImplicitList4, OperandInfo2, -1 ,nullptr },  // Inst #1201 = J_MM
  { 1202,	1,	0,	6,	14,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1202 = Jal16
  { 1203,	1,	0,	6,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList5, OperandInfo2, -1 ,nullptr },  // Inst #1203 = JalB16
  { 1204,	1,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1204 = JalOneReg
  { 1205,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1205 = JalTwoReg
  { 1206,	0,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1206 = JrRa16
  { 1207,	0,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1207 = JrcRa16
  { 1208,	1,	0,	2,	14,	0|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x0ULL, nullptr, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1208 = JrcRx16
  { 1209,	1,	0,	2,	115,	0|(1ULL<<MCID::Call), 0x0ULL, nullptr, ImplicitList5, OperandInfo168, -1 ,nullptr },  // Inst #1209 = JumpLinkReg16
  { 1210,	3,	1,	4,	124,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1210 = LB
  { 1211,	3,	1,	4,	124,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1211 = LB64
  { 1212,	3,	1,	4,	125,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1212 = LBE
  { 1213,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1213 = LBE_MM
  { 1214,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1214 = LBE_MMR6
  { 1215,	3,	1,	2,	126,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1215 = LBU16_MM
  { 1216,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1216 = LBUE_MMR6
  { 1217,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1217 = LBUX
  { 1218,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1218 = LBUX_MM
  { 1219,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1219 = LBU_MMR6
  { 1220,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1220 = LB_MM
  { 1221,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1221 = LB_MMR6
  { 1222,	3,	1,	4,	126,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1222 = LBu
  { 1223,	3,	1,	4,	126,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1223 = LBu64
  { 1224,	3,	1,	4,	127,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1224 = LBuE
  { 1225,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1225 = LBuE_MM
  { 1226,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1226 = LBu_MM
  { 1227,	3,	1,	4,	128,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1227 = LD
  { 1228,	3,	1,	4,	129,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1228 = LDC1
  { 1229,	3,	1,	4,	129,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1229 = LDC164
  { 1230,	3,	1,	4,	129,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1230 = LDC1_D64_MMR6
  { 1231,	3,	1,	4,	129,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1231 = LDC1_MM
  { 1232,	3,	1,	4,	130,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1232 = LDC2
  { 1233,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #1233 = LDC2_MMR6
  { 1234,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1234 = LDC2_R6
  { 1235,	3,	1,	4,	131,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #1235 = LDC3
  { 1236,	2,	1,	4,	292,	0, 0x6ULL, nullptr, nullptr, OperandInfo178, -1 ,nullptr },  // Inst #1236 = LDI_B
  { 1237,	2,	1,	4,	292,	0, 0x6ULL, nullptr, nullptr, OperandInfo179, -1 ,nullptr },  // Inst #1237 = LDI_D
  { 1238,	2,	1,	4,	292,	0, 0x6ULL, nullptr, nullptr, OperandInfo180, -1 ,nullptr },  // Inst #1238 = LDI_H
  { 1239,	2,	1,	4,	292,	0, 0x6ULL, nullptr, nullptr, OperandInfo181, -1 ,nullptr },  // Inst #1239 = LDI_W
  { 1240,	4,	1,	4,	132,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1240 = LDL
  { 1241,	2,	1,	4,	133,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #1241 = LDPC
  { 1242,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #1242 = LDPC_MM64R6
  { 1243,	4,	1,	4,	134,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1243 = LDR
  { 1244,	3,	1,	4,	135,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1244 = LDXC1
  { 1245,	3,	1,	4,	135,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1245 = LDXC164
  { 1246,	3,	1,	4,	296,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #1246 = LD_B
  { 1247,	3,	1,	4,	296,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #1247 = LD_D
  { 1248,	3,	1,	4,	296,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #1248 = LD_H
  { 1249,	3,	1,	4,	128,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1249 = LD_MM64R6
  { 1250,	3,	1,	4,	296,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #1250 = LD_W
  { 1251,	3,	1,	4,	5,	0, 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1251 = LEA_ADDiu
  { 1252,	3,	1,	4,	5,	0, 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1252 = LEA_ADDiu64
  { 1253,	3,	1,	4,	5,	0, 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1253 = LEA_ADDiu_MM
  { 1254,	3,	1,	4,	136,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1254 = LH
  { 1255,	3,	1,	4,	136,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1255 = LH64
  { 1256,	3,	1,	4,	137,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1256 = LHE
  { 1257,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1257 = LHE_MM
  { 1258,	3,	1,	2,	138,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1258 = LHU16_MM
  { 1259,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1259 = LHX
  { 1260,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1260 = LHX_MM
  { 1261,	3,	1,	4,	136,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1261 = LH_MM
  { 1262,	3,	1,	4,	138,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1262 = LHu
  { 1263,	3,	1,	4,	138,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1263 = LHu64
  { 1264,	3,	1,	4,	139,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1264 = LHuE
  { 1265,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1265 = LHuE_MM
  { 1266,	3,	1,	4,	138,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1266 = LHu_MM
  { 1267,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1267 = LI16_MM
  { 1268,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::CheapAsAMove), 0x0ULL, nullptr, nullptr, OperandInfo19, -1 ,nullptr },  // Inst #1268 = LI16_MMR6
  { 1269,	3,	1,	4,	140,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1269 = LL
  { 1270,	3,	1,	4,	140,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1270 = LL64
  { 1271,	3,	1,	4,	140,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1271 = LL64_R6
  { 1272,	3,	1,	4,	140,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1272 = LLD
  { 1273,	3,	1,	4,	141,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1273 = LLD_MM64R6
  { 1274,	3,	1,	4,	141,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1274 = LLD_R6
  { 1275,	3,	1,	4,	142,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1275 = LLE
  { 1276,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1276 = LLE_MM
  { 1277,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1277 = LLE_MMR6
  { 1278,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1278 = LL_MM
  { 1279,	3,	1,	4,	140,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1279 = LL_R6
  { 1280,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #1280 = LOAD_ACC128
  { 1281,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #1281 = LOAD_ACC64
  { 1282,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #1282 = LOAD_ACC64DSP
  { 1283,	3,	1,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #1283 = LOAD_CCOND_DSP
  { 1284,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo193, -1 ,nullptr },  // Inst #1284 = LONG_BRANCH_ADDiu
  { 1285,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo194, -1 ,nullptr },  // Inst #1285 = LONG_BRANCH_DADDiu
  { 1286,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo195, -1 ,nullptr },  // Inst #1286 = LONG_BRANCH_LUi
  { 1287,	4,	1,	4,	143,	0, 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1287 = LSA
  { 1288,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1288 = LSA_MMR6
  { 1289,	4,	1,	4,	143,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo33, -1 ,nullptr },  // Inst #1289 = LSA_R6
  { 1290,	2,	1,	4,	144,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1290 = LUI_MMR6
  { 1291,	3,	1,	4,	145,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1291 = LUXC1
  { 1292,	3,	1,	4,	145,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1292 = LUXC164
  { 1293,	3,	1,	4,	145,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1293 = LUXC1_MM
  { 1294,	2,	1,	4,	144,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1294 = LUi
  { 1295,	2,	1,	4,	144,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #1295 = LUi64
  { 1296,	2,	1,	4,	144,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::CheapAsAMove), 0x2ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1296 = LUi_MM
  { 1297,	3,	1,	4,	146,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1297 = LW
  { 1298,	3,	1,	2,	146,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo171, -1 ,nullptr },  // Inst #1298 = LW16_MM
  { 1299,	3,	1,	4,	146,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1299 = LW64
  { 1300,	3,	1,	4,	147,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1300 = LWC1
  { 1301,	3,	1,	4,	147,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #1301 = LWC1_MM
  { 1302,	3,	1,	4,	148,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1302 = LWC2
  { 1303,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #1303 = LWC2_MMR6
  { 1304,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1304 = LWC2_R6
  { 1305,	3,	1,	4,	149,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #1305 = LWC3
  { 1306,	3,	1,	4,	150,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1306 = LWE
  { 1307,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1307 = LWE_MM
  { 1308,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1308 = LWE_MMR6
  { 1309,	3,	1,	2,	146,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo197, -1 ,nullptr },  // Inst #1309 = LWGP_MM
  { 1310,	4,	1,	4,	151,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1310 = LWL
  { 1311,	4,	1,	4,	151,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1311 = LWL64
  { 1312,	4,	1,	4,	152,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1312 = LWLE
  { 1313,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1313 = LWLE_MM
  { 1314,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1314 = LWL_MM
  { 1315,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1315 = LWM16_MM
  { 1316,	3,	1,	2,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #1316 = LWM16_MMR6
  { 1317,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1317 = LWM32_MM
  { 1318,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #1318 = LWM_MM
  { 1319,	2,	1,	4,	153,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1319 = LWPC
  { 1320,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1320 = LWPC_MMR6
  { 1321,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #1321 = LWP_MM
  { 1322,	4,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #1322 = LWP_MMR6
  { 1323,	4,	1,	4,	154,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1323 = LWR
  { 1324,	4,	1,	4,	154,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo182, -1 ,nullptr },  // Inst #1324 = LWR64
  { 1325,	4,	1,	4,	155,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1325 = LWRE
  { 1326,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1326 = LWRE_MM
  { 1327,	4,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #1327 = LWR_MM
  { 1328,	3,	1,	2,	146,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #1328 = LWSP_MM
  { 1329,	2,	1,	4,	156,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1329 = LWUPC
  { 1330,	3,	1,	4,	157,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1330 = LWU_MM
  { 1331,	3,	1,	4,	157,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1331 = LWU_MM64R6
  { 1332,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1332 = LWX
  { 1333,	3,	1,	4,	158,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1333 = LWXC1
  { 1334,	3,	1,	4,	158,	0|(1ULL<<MCID::MayLoad), 0x5ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #1334 = LWXC1_MM
  { 1335,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1335 = LWXS_MM
  { 1336,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo172, -1 ,nullptr },  // Inst #1336 = LWX_MM
  { 1337,	3,	1,	4,	0,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1337 = LW_MM
  { 1338,	3,	1,	4,	146,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1338 = LW_MMR6
  { 1339,	3,	1,	4,	157,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::MayLoad), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1339 = LWu
  { 1340,	3,	1,	4,	124,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1340 = LbRxRyOffMemX16
  { 1341,	3,	1,	4,	126,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1341 = LbuRxRyOffMemX16
  { 1342,	3,	1,	4,	136,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1342 = LhRxRyOffMemX16
  { 1343,	3,	1,	4,	138,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1343 = LhuRxRyOffMemX16
  { 1344,	2,	1,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1344 = LiRxImm16
  { 1345,	2,	1,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1345 = LiRxImmAlignX16
  { 1346,	2,	1,	4,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo42, -1 ,nullptr },  // Inst #1346 = LiRxImmX16
  { 1347,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1347 = LoadAddrImm32
  { 1348,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #1348 = LoadAddrImm64
  { 1349,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1349 = LoadAddrReg32
  { 1350,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1350 = LoadAddrReg64
  { 1351,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo205, -1 ,nullptr },  // Inst #1351 = LoadImm32
  { 1352,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo105, -1 ,nullptr },  // Inst #1352 = LoadImm64
  { 1353,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo206, -1 ,nullptr },  // Inst #1353 = LwConstant32
  { 1354,	3,	1,	2,	146,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1354 = LwRxPcTcp16
  { 1355,	3,	1,	4,	146,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo207, -1 ,nullptr },  // Inst #1355 = LwRxPcTcpX16
  { 1356,	3,	1,	4,	146,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #1356 = LwRxRyOffMemX16
  { 1357,	3,	1,	4,	146,	0|(1ULL<<MCID::MayLoad), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #1357 = LwRxSpImmX16
  { 1358,	2,	0,	4,	159,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1358 = MADD
  { 1359,	4,	1,	4,	160,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1359 = MADDF_D
  { 1360,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1360 = MADDF_D_MMR6
  { 1361,	4,	1,	4,	161,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1361 = MADDF_S
  { 1362,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1362 = MADDF_S_MMR6
  { 1363,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1363 = MADDR_Q_H
  { 1364,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1364 = MADDR_Q_W
  { 1365,	2,	0,	4,	162,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1365 = MADDU
  { 1366,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1366 = MADDU_DSP
  { 1367,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1367 = MADDU_DSP_MM
  { 1368,	2,	0,	4,	162,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1368 = MADDU_MM
  { 1369,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #1369 = MADDV_B
  { 1370,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1370 = MADDV_D
  { 1371,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1371 = MADDV_H
  { 1372,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1372 = MADDV_W
  { 1373,	4,	1,	4,	163,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1373 = MADD_D32
  { 1374,	4,	1,	4,	163,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1374 = MADD_D32_MM
  { 1375,	4,	1,	4,	163,	0, 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1375 = MADD_D64
  { 1376,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1376 = MADD_DSP
  { 1377,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1377 = MADD_DSP_MM
  { 1378,	2,	0,	4,	159,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1378 = MADD_MM
  { 1379,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1379 = MADD_Q_H
  { 1380,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1380 = MADD_Q_W
  { 1381,	4,	1,	4,	164,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1381 = MADD_S
  { 1382,	4,	1,	4,	164,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1382 = MADD_S_MM
  { 1383,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1383 = MAQ_SA_W_PHL
  { 1384,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1384 = MAQ_SA_W_PHL_MM
  { 1385,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1385 = MAQ_SA_W_PHR
  { 1386,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1386 = MAQ_SA_W_PHR_MM
  { 1387,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1387 = MAQ_S_W_PHL
  { 1388,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1388 = MAQ_S_W_PHL_MM
  { 1389,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1389 = MAQ_S_W_PHR
  { 1390,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1390 = MAQ_S_W_PHR_MM
  { 1391,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1391 = MAXA_D
  { 1392,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1392 = MAXA_D_MMR6
  { 1393,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1393 = MAXA_S
  { 1394,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1394 = MAXA_S_MMR6
  { 1395,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1395 = MAXI_S_B
  { 1396,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1396 = MAXI_S_D
  { 1397,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1397 = MAXI_S_H
  { 1398,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1398 = MAXI_S_W
  { 1399,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1399 = MAXI_U_B
  { 1400,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1400 = MAXI_U_D
  { 1401,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1401 = MAXI_U_H
  { 1402,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1402 = MAXI_U_W
  { 1403,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1403 = MAX_A_B
  { 1404,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1404 = MAX_A_D
  { 1405,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1405 = MAX_A_H
  { 1406,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1406 = MAX_A_W
  { 1407,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1407 = MAX_D
  { 1408,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1408 = MAX_D_MMR6
  { 1409,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1409 = MAX_S
  { 1410,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1410 = MAX_S_B
  { 1411,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1411 = MAX_S_D
  { 1412,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1412 = MAX_S_H
  { 1413,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1413 = MAX_S_MMR6
  { 1414,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1414 = MAX_S_W
  { 1415,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1415 = MAX_U_B
  { 1416,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1416 = MAX_U_D
  { 1417,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1417 = MAX_U_H
  { 1418,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1418 = MAX_U_W
  { 1419,	3,	1,	4,	165,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1419 = MFC0
  { 1420,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1420 = MFC0_MMR6
  { 1421,	2,	1,	4,	97,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1421 = MFC1
  { 1422,	2,	1,	4,	97,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1422 = MFC1_MM
  { 1423,	2,	1,	4,	97,	0|(1ULL<<MCID::Bitcast), 0x6ULL, nullptr, nullptr, OperandInfo214, -1 ,nullptr },  // Inst #1423 = MFC1_MMR6
  { 1424,	3,	1,	4,	166,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo215, -1 ,nullptr },  // Inst #1424 = MFC2
  { 1425,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1425 = MFC2_MMR6
  { 1426,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo213, -1 ,nullptr },  // Inst #1426 = MFHC0_MMR6
  { 1427,	2,	1,	4,	167,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1427 = MFHC1_D32
  { 1428,	2,	1,	4,	167,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1428 = MFHC1_D32_MMR6
  { 1429,	2,	1,	4,	167,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1429 = MFHC1_D64
  { 1430,	2,	1,	4,	167,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo218, -1 ,nullptr },  // Inst #1430 = MFHC1_D64_MMR6
  { 1431,	2,	1,	4,	167,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo217, -1 ,nullptr },  // Inst #1431 = MFHC1_MM
  { 1432,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo216, -1 ,nullptr },  // Inst #1432 = MFHC2_MMR6
  { 1433,	1,	1,	4,	168,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1433 = MFHI
  { 1434,	1,	1,	2,	168,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1434 = MFHI16_MM
  { 1435,	1,	1,	4,	168,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1435 = MFHI64
  { 1436,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1436 = MFHI_DSP
  { 1437,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1437 = MFHI_DSP_MM
  { 1438,	1,	1,	4,	168,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1438 = MFHI_MM
  { 1439,	1,	1,	4,	168,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1439 = MFLO
  { 1440,	1,	1,	2,	168,	0, 0x0ULL, ImplicitList18, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1440 = MFLO16_MM
  { 1441,	1,	1,	4,	168,	0, 0x1ULL, ImplicitList19, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1441 = MFLO64
  { 1442,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1442 = MFLO_DSP
  { 1443,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo219, -1 ,nullptr },  // Inst #1443 = MFLO_DSP_MM
  { 1444,	1,	1,	4,	168,	0, 0x1ULL, ImplicitList18, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1444 = MFLO_MM
  { 1445,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1445 = MINA_D
  { 1446,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1446 = MINA_D_MMR6
  { 1447,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1447 = MINA_S
  { 1448,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1448 = MINA_S_MMR6
  { 1449,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1449 = MINI_S_B
  { 1450,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1450 = MINI_S_D
  { 1451,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1451 = MINI_S_H
  { 1452,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1452 = MINI_S_W
  { 1453,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1453 = MINI_U_B
  { 1454,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1454 = MINI_U_D
  { 1455,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1455 = MINI_U_H
  { 1456,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1456 = MINI_U_W
  { 1457,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1457 = MIN_A_B
  { 1458,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1458 = MIN_A_D
  { 1459,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1459 = MIN_A_H
  { 1460,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1460 = MIN_A_W
  { 1461,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1461 = MIN_D
  { 1462,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1462 = MIN_D_MMR6
  { 1463,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1463 = MIN_S
  { 1464,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1464 = MIN_S_B
  { 1465,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1465 = MIN_S_D
  { 1466,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1466 = MIN_S_H
  { 1467,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1467 = MIN_S_MMR6
  { 1468,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1468 = MIN_S_W
  { 1469,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1469 = MIN_U_B
  { 1470,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1470 = MIN_U_D
  { 1471,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1471 = MIN_U_H
  { 1472,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1472 = MIN_U_W
  { 1473,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, ImplicitList20, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1473 = MIPSeh_return32
  { 1474,	2,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator), 0x10ULL, ImplicitList20, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1474 = MIPSeh_return64
  { 1475,	3,	1,	4,	169,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1475 = MOD
  { 1476,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1476 = MODSUB
  { 1477,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1477 = MODSUB_MM
  { 1478,	3,	1,	4,	170,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1478 = MODU
  { 1479,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1479 = MODU_MMR6
  { 1480,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1480 = MOD_MMR6
  { 1481,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1481 = MOD_S_B
  { 1482,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1482 = MOD_S_D
  { 1483,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1483 = MOD_S_H
  { 1484,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1484 = MOD_S_W
  { 1485,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1485 = MOD_U_B
  { 1486,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1486 = MOD_U_D
  { 1487,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1487 = MOD_U_H
  { 1488,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1488 = MOD_U_W
  { 1489,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1489 = MOVE16_MM
  { 1490,	2,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1490 = MOVE16_MMR6
  { 1491,	4,	1,	2,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo220, -1 ,nullptr },  // Inst #1491 = MOVEP_MM
  { 1492,	2,	1,	4,	291,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1492 = MOVE_V
  { 1493,	4,	1,	4,	171,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1493 = MOVF_D32
  { 1494,	4,	1,	4,	171,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1494 = MOVF_D32_MM
  { 1495,	4,	1,	4,	171,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1495 = MOVF_D64
  { 1496,	4,	1,	4,	172,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1496 = MOVF_I
  { 1497,	4,	1,	4,	172,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1497 = MOVF_I64
  { 1498,	4,	1,	4,	172,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1498 = MOVF_I_MM
  { 1499,	4,	1,	4,	173,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1499 = MOVF_S
  { 1500,	4,	1,	4,	173,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1500 = MOVF_S_MM
  { 1501,	4,	1,	4,	174,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1501 = MOVN_I64_D64
  { 1502,	4,	1,	4,	175,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1502 = MOVN_I64_I
  { 1503,	4,	1,	4,	175,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1503 = MOVN_I64_I64
  { 1504,	4,	1,	4,	176,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1504 = MOVN_I64_S
  { 1505,	4,	1,	4,	174,	0, 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1505 = MOVN_I_D32
  { 1506,	4,	1,	4,	174,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1506 = MOVN_I_D32_MM
  { 1507,	4,	1,	4,	174,	0, 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1507 = MOVN_I_D64
  { 1508,	4,	1,	4,	175,	0, 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1508 = MOVN_I_I
  { 1509,	4,	1,	4,	175,	0, 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1509 = MOVN_I_I64
  { 1510,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1510 = MOVN_I_MM
  { 1511,	4,	1,	4,	176,	0, 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1511 = MOVN_I_S
  { 1512,	4,	1,	4,	176,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1512 = MOVN_I_S_MM
  { 1513,	4,	1,	4,	177,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1513 = MOVT_D32
  { 1514,	4,	1,	4,	177,	0, 0x4ULL, nullptr, nullptr, OperandInfo222, -1 ,nullptr },  // Inst #1514 = MOVT_D32_MM
  { 1515,	4,	1,	4,	177,	0, 0x4ULL, nullptr, nullptr, OperandInfo223, -1 ,nullptr },  // Inst #1515 = MOVT_D64
  { 1516,	4,	1,	4,	178,	0, 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1516 = MOVT_I
  { 1517,	4,	1,	4,	178,	0, 0x4ULL, nullptr, nullptr, OperandInfo225, -1 ,nullptr },  // Inst #1517 = MOVT_I64
  { 1518,	4,	1,	4,	178,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo224, -1 ,nullptr },  // Inst #1518 = MOVT_I_MM
  { 1519,	4,	1,	4,	179,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1519 = MOVT_S
  { 1520,	4,	1,	4,	179,	0, 0x4ULL, nullptr, nullptr, OperandInfo226, -1 ,nullptr },  // Inst #1520 = MOVT_S_MM
  { 1521,	4,	1,	4,	180,	0, 0x4ULL, nullptr, nullptr, OperandInfo227, -1 ,nullptr },  // Inst #1521 = MOVZ_I64_D64
  { 1522,	4,	1,	4,	181,	0, 0x4ULL, nullptr, nullptr, OperandInfo228, -1 ,nullptr },  // Inst #1522 = MOVZ_I64_I
  { 1523,	4,	1,	4,	181,	0, 0x4ULL, nullptr, nullptr, OperandInfo229, -1 ,nullptr },  // Inst #1523 = MOVZ_I64_I64
  { 1524,	4,	1,	4,	182,	0, 0x4ULL, nullptr, nullptr, OperandInfo230, -1 ,nullptr },  // Inst #1524 = MOVZ_I64_S
  { 1525,	4,	1,	4,	180,	0, 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1525 = MOVZ_I_D32
  { 1526,	4,	1,	4,	180,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo231, -1 ,nullptr },  // Inst #1526 = MOVZ_I_D32_MM
  { 1527,	4,	1,	4,	180,	0, 0x4ULL, nullptr, nullptr, OperandInfo232, -1 ,nullptr },  // Inst #1527 = MOVZ_I_D64
  { 1528,	4,	1,	4,	181,	0, 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1528 = MOVZ_I_I
  { 1529,	4,	1,	4,	181,	0, 0x4ULL, nullptr, nullptr, OperandInfo234, -1 ,nullptr },  // Inst #1529 = MOVZ_I_I64
  { 1530,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo233, -1 ,nullptr },  // Inst #1530 = MOVZ_I_MM
  { 1531,	4,	1,	4,	182,	0, 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1531 = MOVZ_I_S
  { 1532,	4,	1,	4,	182,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo235, -1 ,nullptr },  // Inst #1532 = MOVZ_I_S_MM
  { 1533,	2,	0,	4,	183,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1533 = MSUB
  { 1534,	4,	1,	4,	184,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1534 = MSUBF_D
  { 1535,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo208, -1 ,nullptr },  // Inst #1535 = MSUBF_D_MMR6
  { 1536,	4,	1,	4,	185,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1536 = MSUBF_S
  { 1537,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo209, -1 ,nullptr },  // Inst #1537 = MSUBF_S_MMR6
  { 1538,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1538 = MSUBR_Q_H
  { 1539,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1539 = MSUBR_Q_W
  { 1540,	2,	0,	4,	186,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1540 = MSUBU
  { 1541,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1541 = MSUBU_DSP
  { 1542,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1542 = MSUBU_DSP_MM
  { 1543,	2,	0,	4,	186,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1543 = MSUBU_MM
  { 1544,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #1544 = MSUBV_B
  { 1545,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #1545 = MSUBV_D
  { 1546,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1546 = MSUBV_H
  { 1547,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1547 = MSUBV_W
  { 1548,	4,	1,	4,	187,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1548 = MSUB_D32
  { 1549,	4,	1,	4,	187,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1549 = MSUB_D32_MM
  { 1550,	4,	1,	4,	187,	0, 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1550 = MSUB_D64
  { 1551,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1551 = MSUB_DSP
  { 1552,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1552 = MSUB_DSP_MM
  { 1553,	2,	0,	4,	183,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, ImplicitList12, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1553 = MSUB_MM
  { 1554,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #1554 = MSUB_Q_H
  { 1555,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #1555 = MSUB_Q_W
  { 1556,	4,	1,	4,	188,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1556 = MSUB_S
  { 1557,	4,	1,	4,	188,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1557 = MSUB_S_MM
  { 1558,	3,	1,	4,	189,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1558 = MTC0
  { 1559,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1559 = MTC0_MMR6
  { 1560,	2,	1,	4,	33,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1560 = MTC1
  { 1561,	2,	1,	4,	33,	0|(1ULL<<MCID::Bitcast), 0x4ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1561 = MTC1_MM
  { 1562,	2,	1,	4,	33,	0|(1ULL<<MCID::Bitcast), 0x6ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1562 = MTC1_MMR6
  { 1563,	3,	1,	4,	190,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo238, -1 ,nullptr },  // Inst #1563 = MTC2
  { 1564,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1564 = MTC2_MMR6
  { 1565,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo236, -1 ,nullptr },  // Inst #1565 = MTHC0_MMR6
  { 1566,	3,	1,	4,	191,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo240, -1 ,nullptr },  // Inst #1566 = MTHC1_D32
  { 1567,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo240, -1 ,nullptr },  // Inst #1567 = MTHC1_D32_MMR6
  { 1568,	3,	1,	4,	191,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo241, -1 ,nullptr },  // Inst #1568 = MTHC1_D64
  { 1569,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo241, -1 ,nullptr },  // Inst #1569 = MTHC1_D64_MMR6
  { 1570,	3,	1,	4,	191,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x4ULL, nullptr, nullptr, OperandInfo240, -1 ,nullptr },  // Inst #1570 = MTHC1_MM
  { 1571,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo239, -1 ,nullptr },  // Inst #1571 = MTHC2_MMR6
  { 1572,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo70, -1 ,nullptr },  // Inst #1572 = MTHI
  { 1573,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList22, OperandInfo167, -1 ,nullptr },  // Inst #1573 = MTHI64
  { 1574,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1574 = MTHI_DSP
  { 1575,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo242, -1 ,nullptr },  // Inst #1575 = MTHI_DSP_MM
  { 1576,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList21, OperandInfo70, -1 ,nullptr },  // Inst #1576 = MTHI_MM
  { 1577,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo243, -1 ,nullptr },  // Inst #1577 = MTHLIP
  { 1578,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList6, OperandInfo243, -1 ,nullptr },  // Inst #1578 = MTHLIP_MM
  { 1579,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo70, -1 ,nullptr },  // Inst #1579 = MTLO
  { 1580,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList24, OperandInfo167, -1 ,nullptr },  // Inst #1580 = MTLO64
  { 1581,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1581 = MTLO_DSP
  { 1582,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo244, -1 ,nullptr },  // Inst #1582 = MTLO_DSP_MM
  { 1583,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList23, OperandInfo70, -1 ,nullptr },  // Inst #1583 = MTLO_MM
  { 1584,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList25, OperandInfo167, -1 ,nullptr },  // Inst #1584 = MTM0
  { 1585,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList26, OperandInfo167, -1 ,nullptr },  // Inst #1585 = MTM1
  { 1586,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList27, OperandInfo167, -1 ,nullptr },  // Inst #1586 = MTM2
  { 1587,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList28, OperandInfo167, -1 ,nullptr },  // Inst #1587 = MTP0
  { 1588,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList29, OperandInfo167, -1 ,nullptr },  // Inst #1588 = MTP1
  { 1589,	1,	0,	4,	192,	0, 0x1ULL, nullptr, ImplicitList30, OperandInfo167, -1 ,nullptr },  // Inst #1589 = MTP2
  { 1590,	3,	1,	4,	193,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1590 = MUH
  { 1591,	3,	1,	4,	194,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1591 = MUHU
  { 1592,	3,	1,	4,	194,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1592 = MUHU_MMR6
  { 1593,	3,	1,	4,	193,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1593 = MUH_MMR6
  { 1594,	3,	1,	4,	195,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, ImplicitList12, OperandInfo17, -1 ,nullptr },  // Inst #1594 = MUL
  { 1595,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1595 = MULEQ_S_W_PHL
  { 1596,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1596 = MULEQ_S_W_PHL_MM
  { 1597,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1597 = MULEQ_S_W_PHR
  { 1598,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo84, -1 ,nullptr },  // Inst #1598 = MULEQ_S_W_PHR_MM
  { 1599,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1599 = MULEU_S_PH_QBL
  { 1600,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1600 = MULEU_S_PH_QBL_MM
  { 1601,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1601 = MULEU_S_PH_QBR
  { 1602,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1602 = MULEU_S_PH_QBR_MM
  { 1603,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1603 = MULQ_RS_PH
  { 1604,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1604 = MULQ_RS_PH_MM
  { 1605,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo17, -1 ,nullptr },  // Inst #1605 = MULQ_RS_W
  { 1606,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo17, -1 ,nullptr },  // Inst #1606 = MULQ_RS_W_MMR2
  { 1607,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1607 = MULQ_S_PH
  { 1608,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1608 = MULQ_S_PH_MMR2
  { 1609,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo17, -1 ,nullptr },  // Inst #1609 = MULQ_S_W
  { 1610,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo17, -1 ,nullptr },  // Inst #1610 = MULQ_S_W_MMR2
  { 1611,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1611 = MULR_Q_H
  { 1612,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1612 = MULR_Q_W
  { 1613,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1613 = MULSAQ_S_W_PH
  { 1614,	4,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList11, OperandInfo116, -1 ,nullptr },  // Inst #1614 = MULSAQ_S_W_PH_MM
  { 1615,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1615 = MULSA_W_PH
  { 1616,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo116, -1 ,nullptr },  // Inst #1616 = MULSA_W_PH_MMR2
  { 1617,	2,	0,	4,	196,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1617 = MULT
  { 1618,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1618 = MULTU_DSP
  { 1619,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1619 = MULTU_DSP_MM
  { 1620,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1620 = MULT_DSP
  { 1621,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable), 0x6ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1621 = MULT_DSP_MM
  { 1622,	2,	0,	4,	196,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1622 = MULT_MM
  { 1623,	2,	0,	4,	197,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1623 = MULTu
  { 1624,	2,	0,	4,	197,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1624 = MULTu_MM
  { 1625,	3,	1,	4,	198,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1625 = MULU
  { 1626,	3,	1,	4,	198,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1626 = MULU_MMR6
  { 1627,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1627 = MULV_B
  { 1628,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1628 = MULV_D
  { 1629,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1629 = MULV_H
  { 1630,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1630 = MULV_W
  { 1631,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1631 = MUL_MM
  { 1632,	3,	1,	4,	195,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1632 = MUL_MMR6
  { 1633,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1633 = MUL_PH
  { 1634,	3,	1,	4,	0,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1634 = MUL_PH_MMR2
  { 1635,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1635 = MUL_Q_H
  { 1636,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1636 = MUL_Q_W
  { 1637,	3,	1,	4,	195,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1637 = MUL_R6
  { 1638,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1638 = MUL_S_PH
  { 1639,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Commutable)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList31, OperandInfo23, -1 ,nullptr },  // Inst #1639 = MUL_S_PH_MMR2
  { 1640,	1,	1,	2,	14,	0, 0x0ULL, ImplicitList21, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1640 = Mfhi16
  { 1641,	1,	1,	2,	14,	0, 0x0ULL, ImplicitList23, nullptr, OperandInfo168, -1 ,nullptr },  // Inst #1641 = Mflo16
  { 1642,	2,	1,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo246, -1 ,nullptr },  // Inst #1642 = Move32R16
  { 1643,	2,	1,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo247, -1 ,nullptr },  // Inst #1643 = MoveR3216
  { 1644,	2,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1644 = MultRxRy16
  { 1645,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo45, -1 ,nullptr },  // Inst #1645 = MultRxRyRz16
  { 1646,	2,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo96, -1 ,nullptr },  // Inst #1646 = MultuRxRy16
  { 1647,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, ImplicitList12, OperandInfo45, -1 ,nullptr },  // Inst #1647 = MultuRxRyRz16
  { 1648,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1648 = NLOC_B
  { 1649,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1649 = NLOC_D
  { 1650,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1650 = NLOC_H
  { 1651,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1651 = NLOC_W
  { 1652,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1652 = NLZC_B
  { 1653,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1653 = NLZC_D
  { 1654,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1654 = NLZC_H
  { 1655,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1655 = NLZC_W
  { 1656,	4,	1,	4,	199,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1656 = NMADD_D32
  { 1657,	4,	1,	4,	199,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1657 = NMADD_D32_MM
  { 1658,	4,	1,	4,	199,	0, 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1658 = NMADD_D64
  { 1659,	4,	1,	4,	200,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1659 = NMADD_S
  { 1660,	4,	1,	4,	200,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1660 = NMADD_S_MM
  { 1661,	4,	1,	4,	201,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1661 = NMSUB_D32
  { 1662,	4,	1,	4,	201,	0, 0x4ULL, nullptr, nullptr, OperandInfo210, -1 ,nullptr },  // Inst #1662 = NMSUB_D32_MM
  { 1663,	4,	1,	4,	201,	0, 0x4ULL, nullptr, nullptr, OperandInfo211, -1 ,nullptr },  // Inst #1663 = NMSUB_D64
  { 1664,	4,	1,	4,	202,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1664 = NMSUB_S
  { 1665,	4,	1,	4,	202,	0, 0x4ULL, nullptr, nullptr, OperandInfo212, -1 ,nullptr },  // Inst #1665 = NMSUB_S_MM
  { 1666,	0,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1666 = NOP
  { 1667,	3,	1,	4,	203,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1667 = NOR
  { 1668,	3,	1,	4,	203,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1668 = NOR64
  { 1669,	3,	1,	4,	294,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1669 = NORI_B
  { 1670,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1670 = NORImm
  { 1671,	3,	1,	4,	203,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1671 = NOR_MM
  { 1672,	3,	1,	4,	203,	0|(1ULL<<MCID::Commutable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1672 = NOR_MMR6
  { 1673,	3,	1,	4,	293,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1673 = NOR_V
  { 1674,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1674 = NOR_V_D_PSEUDO
  { 1675,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1675 = NOR_V_H_PSEUDO
  { 1676,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1676 = NOR_V_W_PSEUDO
  { 1677,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo249, -1 ,nullptr },  // Inst #1677 = NOT16_MM
  { 1678,	2,	1,	2,	0,	0, 0x0ULL, nullptr, nullptr, OperandInfo249, -1 ,nullptr },  // Inst #1678 = NOT16_MMR6
  { 1679,	2,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1679 = NegRxRy16
  { 1680,	2,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo96, -1 ,nullptr },  // Inst #1680 = NotRxRy16
  { 1681,	3,	1,	4,	204,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1681 = OR
  { 1682,	3,	1,	2,	204,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1682 = OR16_MM
  { 1683,	3,	1,	2,	204,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #1683 = OR16_MMR6
  { 1684,	3,	1,	4,	204,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1684 = OR64
  { 1685,	3,	1,	4,	294,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1685 = ORI_B
  { 1686,	3,	1,	4,	205,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1686 = ORI_MMR6
  { 1687,	3,	1,	4,	204,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1687 = OR_MM
  { 1688,	3,	1,	4,	204,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1688 = OR_MMR6
  { 1689,	3,	1,	4,	293,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1689 = OR_V
  { 1690,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1690 = OR_V_D_PSEUDO
  { 1691,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1691 = OR_V_H_PSEUDO
  { 1692,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1692 = OR_V_W_PSEUDO
  { 1693,	3,	1,	4,	205,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1693 = ORi
  { 1694,	3,	1,	4,	204,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #1694 = ORi64
  { 1695,	3,	1,	4,	205,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1695 = ORi_MM
  { 1696,	3,	1,	2,	14,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #1696 = OrRxRxRy16
  { 1697,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1697 = PACKRL_PH
  { 1698,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1698 = PACKRL_PH_MM
  { 1699,	0,	0,	4,	206,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1699 = PAUSE
  { 1700,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1700 = PAUSE_MM
  { 1701,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1701 = PAUSE_MMR6
  { 1702,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1702 = PCKEV_B
  { 1703,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1703 = PCKEV_D
  { 1704,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1704 = PCKEV_H
  { 1705,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1705 = PCKEV_W
  { 1706,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #1706 = PCKOD_B
  { 1707,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #1707 = PCKOD_D
  { 1708,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #1708 = PCKOD_H
  { 1709,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #1709 = PCKOD_W
  { 1710,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo221, -1 ,nullptr },  // Inst #1710 = PCNT_B
  { 1711,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo124, -1 ,nullptr },  // Inst #1711 = PCNT_D
  { 1712,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo248, -1 ,nullptr },  // Inst #1712 = PCNT_H
  { 1713,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo125, -1 ,nullptr },  // Inst #1713 = PCNT_W
  { 1714,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1714 = PICK_PH
  { 1715,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1715 = PICK_PH_MM
  { 1716,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1716 = PICK_QB
  { 1717,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, ImplicitList8, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1717 = PICK_QB_MM
  { 1718,	2,	1,	4,	78,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1718 = POP
  { 1719,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1719 = PRECEQU_PH_QBL
  { 1720,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1720 = PRECEQU_PH_QBLA
  { 1721,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1721 = PRECEQU_PH_QBLA_MM
  { 1722,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1722 = PRECEQU_PH_QBL_MM
  { 1723,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1723 = PRECEQU_PH_QBR
  { 1724,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1724 = PRECEQU_PH_QBRA
  { 1725,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1725 = PRECEQU_PH_QBRA_MM
  { 1726,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1726 = PRECEQU_PH_QBR_MM
  { 1727,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1727 = PRECEQ_W_PHL
  { 1728,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1728 = PRECEQ_W_PHL_MM
  { 1729,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1729 = PRECEQ_W_PHR
  { 1730,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1730 = PRECEQ_W_PHR_MM
  { 1731,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1731 = PRECEU_PH_QBL
  { 1732,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1732 = PRECEU_PH_QBLA
  { 1733,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1733 = PRECEU_PH_QBLA_MM
  { 1734,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1734 = PRECEU_PH_QBL_MM
  { 1735,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1735 = PRECEU_PH_QBR
  { 1736,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1736 = PRECEU_PH_QBRA
  { 1737,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1737 = PRECEU_PH_QBRA_MM
  { 1738,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo14, -1 ,nullptr },  // Inst #1738 = PRECEU_PH_QBR_MM
  { 1739,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo23, -1 ,nullptr },  // Inst #1739 = PRECRQU_S_QB_PH
  { 1740,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo23, -1 ,nullptr },  // Inst #1740 = PRECRQU_S_QB_PH_MM
  { 1741,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1741 = PRECRQ_PH_W
  { 1742,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo251, -1 ,nullptr },  // Inst #1742 = PRECRQ_PH_W_MM
  { 1743,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1743 = PRECRQ_QB_PH
  { 1744,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1744 = PRECRQ_QB_PH_MM
  { 1745,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo251, -1 ,nullptr },  // Inst #1745 = PRECRQ_RS_PH_W
  { 1746,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo251, -1 ,nullptr },  // Inst #1746 = PRECRQ_RS_PH_W_MM
  { 1747,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1747 = PRECR_QB_PH
  { 1748,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #1748 = PRECR_QB_PH_MMR2
  { 1749,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1749 = PRECR_SRA_PH_W
  { 1750,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1750 = PRECR_SRA_PH_W_MMR2
  { 1751,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1751 = PRECR_SRA_R_PH_W
  { 1752,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo252, -1 ,nullptr },  // Inst #1752 = PRECR_SRA_R_PH_W_MMR2
  { 1753,	3,	0,	4,	207,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1753 = PREF
  { 1754,	3,	0,	4,	208,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1754 = PREFE
  { 1755,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1755 = PREFE_MM
  { 1756,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1756 = PREFE_MMR6
  { 1757,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo253, -1 ,nullptr },  // Inst #1757 = PREFX_MM
  { 1758,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1758 = PREF_MM
  { 1759,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1759 = PREF_MMR6
  { 1760,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo76, -1 ,nullptr },  // Inst #1760 = PREF_R6
  { 1761,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #1761 = PREPEND
  { 1762,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo37, -1 ,nullptr },  // Inst #1762 = PREPEND_MMR2
  { 1763,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1763 = PseudoCMPU_EQ_QB
  { 1764,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1764 = PseudoCMPU_LE_QB
  { 1765,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1765 = PseudoCMPU_LT_QB
  { 1766,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1766 = PseudoCMP_EQ_PH
  { 1767,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1767 = PseudoCMP_LE_PH
  { 1768,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo254, -1 ,nullptr },  // Inst #1768 = PseudoCMP_LT_PH
  { 1769,	2,	1,	4,	41,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo255, -1 ,nullptr },  // Inst #1769 = PseudoCVT_D32_W
  { 1770,	2,	1,	4,	41,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #1770 = PseudoCVT_D64_L
  { 1771,	2,	1,	4,	41,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo256, -1 ,nullptr },  // Inst #1771 = PseudoCVT_D64_W
  { 1772,	2,	1,	4,	41,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo107, -1 ,nullptr },  // Inst #1772 = PseudoCVT_S_L
  { 1773,	2,	1,	4,	41,	0|(1ULL<<MCID::Pseudo), 0x4ULL, nullptr, nullptr, OperandInfo237, -1 ,nullptr },  // Inst #1773 = PseudoCVT_S_W
  { 1774,	3,	1,	4,	75,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1774 = PseudoDMULT
  { 1775,	3,	1,	4,	76,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1775 = PseudoDMULTu
  { 1776,	3,	1,	4,	55,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1776 = PseudoDSDIV
  { 1777,	3,	1,	4,	56,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1777 = PseudoDUDIV
  { 1778,	1,	0,	4,	209,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1778 = PseudoIndirectBranch
  { 1779,	1,	0,	4,	209,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Branch)|(1ULL<<MCID::IndirectBranch)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1779 = PseudoIndirectBranch64
  { 1780,	4,	1,	4,	159,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1780 = PseudoMADD
  { 1781,	4,	1,	4,	162,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1781 = PseudoMADDU
  { 1782,	2,	1,	4,	168,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1782 = PseudoMFHI
  { 1783,	2,	1,	4,	168,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1783 = PseudoMFHI64
  { 1784,	2,	1,	4,	168,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo259, -1 ,nullptr },  // Inst #1784 = PseudoMFLO
  { 1785,	2,	1,	4,	168,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo260, -1 ,nullptr },  // Inst #1785 = PseudoMFLO64
  { 1786,	4,	1,	4,	183,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1786 = PseudoMSUB
  { 1787,	4,	1,	4,	186,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo258, -1 ,nullptr },  // Inst #1787 = PseudoMSUBU
  { 1788,	3,	1,	4,	192,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1788 = PseudoMTLOHI
  { 1789,	3,	1,	4,	192,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo257, -1 ,nullptr },  // Inst #1789 = PseudoMTLOHI64
  { 1790,	3,	1,	4,	192,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo245, -1 ,nullptr },  // Inst #1790 = PseudoMTLOHI_DSP
  { 1791,	3,	1,	4,	196,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1791 = PseudoMULT
  { 1792,	3,	1,	4,	197,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1792 = PseudoMULTu
  { 1793,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo262, -1 ,nullptr },  // Inst #1793 = PseudoPICK_PH
  { 1794,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo262, -1 ,nullptr },  // Inst #1794 = PseudoPICK_QB
  { 1795,	1,	0,	4,	210,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, nullptr, OperandInfo70, -1 ,nullptr },  // Inst #1795 = PseudoReturn
  { 1796,	1,	0,	4,	210,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, nullptr, OperandInfo167, -1 ,nullptr },  // Inst #1796 = PseudoReturn64
  { 1797,	3,	1,	4,	61,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1797 = PseudoSDIV
  { 1798,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1798 = PseudoSELECTFP_F_D32
  { 1799,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1799 = PseudoSELECTFP_F_D64
  { 1800,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1800 = PseudoSELECTFP_F_I
  { 1801,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1801 = PseudoSELECTFP_F_I64
  { 1802,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1802 = PseudoSELECTFP_F_S
  { 1803,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1803 = PseudoSELECTFP_T_D32
  { 1804,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1804 = PseudoSELECTFP_T_D64
  { 1805,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1805 = PseudoSELECTFP_T_I
  { 1806,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1806 = PseudoSELECTFP_T_I64
  { 1807,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1807 = PseudoSELECTFP_T_S
  { 1808,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo263, -1 ,nullptr },  // Inst #1808 = PseudoSELECT_D32
  { 1809,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo264, -1 ,nullptr },  // Inst #1809 = PseudoSELECT_D64
  { 1810,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo265, -1 ,nullptr },  // Inst #1810 = PseudoSELECT_I
  { 1811,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo266, -1 ,nullptr },  // Inst #1811 = PseudoSELECT_I64
  { 1812,	4,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo267, -1 ,nullptr },  // Inst #1812 = PseudoSELECT_S
  { 1813,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo268, -1 ,nullptr },  // Inst #1813 = PseudoTRUNC_W_D
  { 1814,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo269, -1 ,nullptr },  // Inst #1814 = PseudoTRUNC_W_D32
  { 1815,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo270, -1 ,nullptr },  // Inst #1815 = PseudoTRUNC_W_S
  { 1816,	3,	1,	4,	62,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1816 = PseudoUDIV
  { 1817,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1817 = RADDU_W_QB
  { 1818,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo250, -1 ,nullptr },  // Inst #1818 = RADDU_W_QB_MM
  { 1819,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1819 = RDDSP
  { 1820,	2,	1,	4,	0,	0|(1ULL<<MCID::MayLoad), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #1820 = RDDSP_MM
  { 1821,	2,	1,	4,	211,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo271, -1 ,nullptr },  // Inst #1821 = RDHWR
  { 1822,	2,	1,	4,	211,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo272, -1 ,nullptr },  // Inst #1822 = RDHWR64
  { 1823,	2,	1,	4,	211,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo271, -1 ,nullptr },  // Inst #1823 = RDHWR_MM
  { 1824,	3,	1,	4,	211,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo273, -1 ,nullptr },  // Inst #1824 = RDHWR_MMR6
  { 1825,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1825 = RDPGPR_MMR6
  { 1826,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1826 = RECIP_D_MMR6
  { 1827,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1827 = RECIP_S_MMR6
  { 1828,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1828 = REPLV_PH
  { 1829,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1829 = REPLV_PH_MM
  { 1830,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1830 = REPLV_QB
  { 1831,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo274, -1 ,nullptr },  // Inst #1831 = REPLV_QB_MM
  { 1832,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1832 = REPL_PH
  { 1833,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1833 = REPL_PH_MM
  { 1834,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1834 = REPL_QB
  { 1835,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo275, -1 ,nullptr },  // Inst #1835 = REPL_QB_MM
  { 1836,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1836 = RINT_D
  { 1837,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1837 = RINT_D_MMR6
  { 1838,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1838 = RINT_S
  { 1839,	2,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1839 = RINT_S_MMR6
  { 1840,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1840 = ROL
  { 1841,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1841 = ROLImm
  { 1842,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1842 = ROR
  { 1843,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1843 = RORImm
  { 1844,	3,	1,	4,	213,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1844 = ROTR
  { 1845,	3,	1,	4,	214,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1845 = ROTRV
  { 1846,	3,	1,	4,	214,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1846 = ROTRV_MM
  { 1847,	3,	1,	4,	213,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1847 = ROTR_MM
  { 1848,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1848 = ROUND_L_D64
  { 1849,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1849 = ROUND_L_D_MMR6
  { 1850,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1850 = ROUND_L_S
  { 1851,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #1851 = ROUND_L_S_MMR6
  { 1852,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1852 = ROUND_W_D32
  { 1853,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #1853 = ROUND_W_D64
  { 1854,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #1854 = ROUND_W_D_MMR6
  { 1855,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1855 = ROUND_W_MM
  { 1856,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1856 = ROUND_W_S
  { 1857,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1857 = ROUND_W_S_MM
  { 1858,	2,	1,	4,	212,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1858 = ROUND_W_S_MMR6
  { 1859,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #1859 = RSQRT_D_MMR6
  { 1860,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #1860 = RSQRT_S_MMR6
  { 1861,	0,	0,	2,	216,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1861 = Restore16
  { 1862,	0,	0,	2,	216,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #1862 = RestoreX16
  { 1863,	0,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator), 0x10ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1863 = RetRA
  { 1864,	0,	0,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x0ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #1864 = RetRA16
  { 1865,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1865 = SAT_S_B
  { 1866,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1866 = SAT_S_D
  { 1867,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1867 = SAT_S_H
  { 1868,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1868 = SAT_S_W
  { 1869,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1869 = SAT_U_B
  { 1870,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #1870 = SAT_U_D
  { 1871,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1871 = SAT_U_H
  { 1872,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1872 = SAT_U_W
  { 1873,	3,	0,	4,	217,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1873 = SB
  { 1874,	3,	0,	2,	217,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1874 = SB16_MM
  { 1875,	3,	0,	2,	217,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1875 = SB16_MMR6
  { 1876,	3,	0,	4,	217,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1876 = SB64
  { 1877,	3,	0,	4,	218,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1877 = SBE
  { 1878,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1878 = SBE_MM
  { 1879,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1879 = SBE_MMR6
  { 1880,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1880 = SB_MM
  { 1881,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1881 = SB_MMR6
  { 1882,	4,	1,	4,	219,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1882 = SC
  { 1883,	4,	1,	4,	219,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1883 = SC64
  { 1884,	4,	1,	4,	219,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1884 = SC64_R6
  { 1885,	4,	1,	4,	219,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1885 = SCD
  { 1886,	4,	1,	4,	220,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo278, -1 ,nullptr },  // Inst #1886 = SCD_R6
  { 1887,	4,	1,	4,	221,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1887 = SCE
  { 1888,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1888 = SCE_MM
  { 1889,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1889 = SCE_MMR6
  { 1890,	4,	1,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1890 = SC_MM
  { 1891,	4,	1,	4,	219,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo277, -1 ,nullptr },  // Inst #1891 = SC_R6
  { 1892,	3,	0,	4,	222,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1892 = SD
  { 1893,	1,	0,	4,	223,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1893 = SDBBP
  { 1894,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1894 = SDBBP16_MM
  { 1895,	1,	0,	2,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1895 = SDBBP16_MMR6
  { 1896,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1896 = SDBBP_MM
  { 1897,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1897 = SDBBP_MMR6
  { 1898,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #1898 = SDBBP_R6
  { 1899,	3,	0,	4,	224,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1899 = SDC1
  { 1900,	3,	0,	4,	224,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1900 = SDC164
  { 1901,	3,	0,	4,	224,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo174, -1 ,nullptr },  // Inst #1901 = SDC1_D64_MMR6
  { 1902,	3,	0,	4,	224,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo173, -1 ,nullptr },  // Inst #1902 = SDC1_MM
  { 1903,	3,	0,	4,	225,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1903 = SDC2
  { 1904,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #1904 = SDC2_MMR6
  { 1905,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #1905 = SDC2_R6
  { 1906,	3,	0,	4,	226,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #1906 = SDC3
  { 1907,	2,	0,	4,	61,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1907 = SDIV
  { 1908,	2,	0,	4,	61,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #1908 = SDIV_MM
  { 1909,	3,	1,	4,	61,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #1909 = SDIV_MM_Pseudo
  { 1910,	3,	0,	4,	227,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1910 = SDL
  { 1911,	3,	0,	4,	228,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1911 = SDR
  { 1912,	3,	0,	4,	229,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #1912 = SDXC1
  { 1913,	3,	0,	4,	229,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #1913 = SDXC164
  { 1914,	3,	0,	4,	222,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1914 = SD_MM64R6
  { 1915,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1915 = SDivMacro
  { 1916,	2,	1,	4,	230,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1916 = SEB
  { 1917,	2,	1,	4,	230,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1917 = SEB64
  { 1918,	2,	1,	4,	230,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1918 = SEB_MM
  { 1919,	2,	1,	4,	230,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1919 = SEB_MMR6
  { 1920,	2,	1,	4,	231,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1920 = SEH
  { 1921,	2,	1,	4,	231,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #1921 = SEH64
  { 1922,	2,	1,	4,	231,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1922 = SEH_MM
  { 1923,	2,	1,	4,	231,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #1923 = SEH_MMR6
  { 1924,	3,	1,	4,	232,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1924 = SELEQZ
  { 1925,	3,	1,	4,	232,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1925 = SELEQZ64
  { 1926,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1926 = SELEQZ_D
  { 1927,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1927 = SELEQZ_D_MMR6
  { 1928,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1928 = SELEQZ_MMR6
  { 1929,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1929 = SELEQZ_S
  { 1930,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1930 = SELEQZ_S_MMR6
  { 1931,	3,	1,	4,	232,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1931 = SELNEZ
  { 1932,	3,	1,	4,	232,	0, 0x6ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1932 = SELNEZ64
  { 1933,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1933 = SELNEZ_D
  { 1934,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo127, -1 ,nullptr },  // Inst #1934 = SELNEZ_D_MMR6
  { 1935,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1935 = SELNEZ_MMR6
  { 1936,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1936 = SELNEZ_S
  { 1937,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo128, -1 ,nullptr },  // Inst #1937 = SELNEZ_S_MMR6
  { 1938,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1938 = SEL_D
  { 1939,	4,	1,	4,	0,	0|(1ULL<<MCID::UsesCustomInserter), 0x6ULL, nullptr, nullptr, OperandInfo279, -1 ,nullptr },  // Inst #1939 = SEL_D_MMR6
  { 1940,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1940 = SEL_S
  { 1941,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo280, -1 ,nullptr },  // Inst #1941 = SEL_S_MMR6
  { 1942,	3,	1,	4,	233,	0, 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #1942 = SEQ
  { 1943,	3,	1,	4,	234,	0, 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #1943 = SEQi
  { 1944,	3,	0,	4,	235,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1944 = SH
  { 1945,	3,	0,	2,	235,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1945 = SH16_MM
  { 1946,	3,	0,	2,	235,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #1946 = SH16_MMR6
  { 1947,	3,	0,	4,	235,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #1947 = SH64
  { 1948,	3,	0,	4,	236,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1948 = SHE
  { 1949,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1949 = SHE_MM
  { 1950,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #1950 = SHE_MMR6
  { 1951,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #1951 = SHF_B
  { 1952,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #1952 = SHF_H
  { 1953,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #1953 = SHF_W
  { 1954,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1954 = SHILO
  { 1955,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo243, -1 ,nullptr },  // Inst #1955 = SHILOV
  { 1956,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo243, -1 ,nullptr },  // Inst #1956 = SHILOV_MM
  { 1957,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo281, -1 ,nullptr },  // Inst #1957 = SHILO_MM
  { 1958,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo282, -1 ,nullptr },  // Inst #1958 = SHLLV_PH
  { 1959,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo282, -1 ,nullptr },  // Inst #1959 = SHLLV_PH_MM
  { 1960,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo282, -1 ,nullptr },  // Inst #1960 = SHLLV_QB
  { 1961,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo282, -1 ,nullptr },  // Inst #1961 = SHLLV_QB_MM
  { 1962,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo282, -1 ,nullptr },  // Inst #1962 = SHLLV_S_PH
  { 1963,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo282, -1 ,nullptr },  // Inst #1963 = SHLLV_S_PH_MM
  { 1964,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo17, -1 ,nullptr },  // Inst #1964 = SHLLV_S_W
  { 1965,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo17, -1 ,nullptr },  // Inst #1965 = SHLLV_S_W_MM
  { 1966,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo283, -1 ,nullptr },  // Inst #1966 = SHLL_PH
  { 1967,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo283, -1 ,nullptr },  // Inst #1967 = SHLL_PH_MM
  { 1968,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo283, -1 ,nullptr },  // Inst #1968 = SHLL_QB
  { 1969,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo283, -1 ,nullptr },  // Inst #1969 = SHLL_QB_MM
  { 1970,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo283, -1 ,nullptr },  // Inst #1970 = SHLL_S_PH
  { 1971,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo283, -1 ,nullptr },  // Inst #1971 = SHLL_S_PH_MM
  { 1972,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo22, -1 ,nullptr },  // Inst #1972 = SHLL_S_W
  { 1973,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList32, OperandInfo22, -1 ,nullptr },  // Inst #1973 = SHLL_S_W_MM
  { 1974,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1974 = SHRAV_PH
  { 1975,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1975 = SHRAV_PH_MM
  { 1976,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1976 = SHRAV_QB
  { 1977,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1977 = SHRAV_QB_MMR2
  { 1978,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1978 = SHRAV_R_PH
  { 1979,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1979 = SHRAV_R_PH_MM
  { 1980,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1980 = SHRAV_R_QB
  { 1981,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1981 = SHRAV_R_QB_MMR2
  { 1982,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1982 = SHRAV_R_W
  { 1983,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #1983 = SHRAV_R_W_MM
  { 1984,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1984 = SHRA_PH
  { 1985,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1985 = SHRA_PH_MM
  { 1986,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1986 = SHRA_QB
  { 1987,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1987 = SHRA_QB_MMR2
  { 1988,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1988 = SHRA_R_PH
  { 1989,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1989 = SHRA_R_PH_MM
  { 1990,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1990 = SHRA_R_QB
  { 1991,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1991 = SHRA_R_QB_MMR2
  { 1992,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1992 = SHRA_R_W
  { 1993,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #1993 = SHRA_R_W_MM
  { 1994,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1994 = SHRLV_PH
  { 1995,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1995 = SHRLV_PH_MMR2
  { 1996,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1996 = SHRLV_QB
  { 1997,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo282, -1 ,nullptr },  // Inst #1997 = SHRLV_QB_MM
  { 1998,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1998 = SHRL_PH
  { 1999,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #1999 = SHRL_PH_MMR2
  { 2000,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #2000 = SHRL_QB
  { 2001,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo283, -1 ,nullptr },  // Inst #2001 = SHRL_QB_MM
  { 2002,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2002 = SH_MM
  { 2003,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2003 = SH_MMR6
  { 2004,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo58, -1 ,nullptr },  // Inst #2004 = SLDI_B
  { 2005,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo59, -1 ,nullptr },  // Inst #2005 = SLDI_D
  { 2006,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo60, -1 ,nullptr },  // Inst #2006 = SLDI_H
  { 2007,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo61, -1 ,nullptr },  // Inst #2007 = SLDI_W
  { 2008,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo284, -1 ,nullptr },  // Inst #2008 = SLD_B
  { 2009,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo285, -1 ,nullptr },  // Inst #2009 = SLD_D
  { 2010,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo286, -1 ,nullptr },  // Inst #2010 = SLD_H
  { 2011,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo287, -1 ,nullptr },  // Inst #2011 = SLD_W
  { 2012,	3,	1,	4,	237,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2012 = SLL
  { 2013,	3,	1,	2,	237,	0, 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #2013 = SLL16_MM
  { 2014,	3,	1,	2,	237,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #2014 = SLL16_MMR6
  { 2015,	2,	1,	4,	237,	0, 0x1ULL, nullptr, nullptr, OperandInfo118, -1 ,nullptr },  // Inst #2015 = SLL64_32
  { 2016,	2,	1,	4,	237,	0, 0x1ULL, nullptr, nullptr, OperandInfo99, -1 ,nullptr },  // Inst #2016 = SLL64_64
  { 2017,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2017 = SLLI_B
  { 2018,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2018 = SLLI_D
  { 2019,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2019 = SLLI_H
  { 2020,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2020 = SLLI_W
  { 2021,	3,	1,	4,	238,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2021 = SLLV
  { 2022,	3,	1,	4,	238,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2022 = SLLV_MM
  { 2023,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2023 = SLL_B
  { 2024,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2024 = SLL_D
  { 2025,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2025 = SLL_H
  { 2026,	3,	1,	4,	237,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2026 = SLL_MM
  { 2027,	3,	1,	4,	237,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2027 = SLL_MMR6
  { 2028,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2028 = SLL_W
  { 2029,	3,	1,	4,	239,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2029 = SLT
  { 2030,	3,	1,	4,	239,	0, 0x1ULL, nullptr, nullptr, OperandInfo288, -1 ,nullptr },  // Inst #2030 = SLT64
  { 2031,	3,	1,	4,	239,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2031 = SLT_MM
  { 2032,	3,	1,	4,	240,	0, 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2032 = SLTi
  { 2033,	3,	1,	4,	240,	0, 0x2ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #2033 = SLTi64
  { 2034,	3,	1,	4,	240,	0, 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2034 = SLTi_MM
  { 2035,	3,	1,	4,	240,	0, 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2035 = SLTiu
  { 2036,	3,	1,	4,	240,	0, 0x2ULL, nullptr, nullptr, OperandInfo289, -1 ,nullptr },  // Inst #2036 = SLTiu64
  { 2037,	3,	1,	4,	240,	0, 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2037 = SLTiu_MM
  { 2038,	3,	1,	4,	239,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2038 = SLTu
  { 2039,	3,	1,	4,	239,	0, 0x1ULL, nullptr, nullptr, OperandInfo288, -1 ,nullptr },  // Inst #2039 = SLTu64
  { 2040,	3,	1,	4,	239,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2040 = SLTu_MM
  { 2041,	3,	1,	4,	233,	0, 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #2041 = SNE
  { 2042,	3,	1,	4,	234,	0, 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #2042 = SNEi
  { 2043,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #2043 = SNZ_B_PSEUDO
  { 2044,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #2044 = SNZ_D_PSEUDO
  { 2045,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #2045 = SNZ_H_PSEUDO
  { 2046,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #2046 = SNZ_V_PSEUDO
  { 2047,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2047 = SNZ_W_PSEUDO
  { 2048,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2048 = SPLATI_B
  { 2049,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2049 = SPLATI_D
  { 2050,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2050 = SPLATI_H
  { 2051,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2051 = SPLATI_W
  { 2052,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo294, -1 ,nullptr },  // Inst #2052 = SPLAT_B
  { 2053,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo295, -1 ,nullptr },  // Inst #2053 = SPLAT_D
  { 2054,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo296, -1 ,nullptr },  // Inst #2054 = SPLAT_H
  { 2055,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo297, -1 ,nullptr },  // Inst #2055 = SPLAT_W
  { 2056,	2,	1,	4,	108,	0, 0x4ULL, nullptr, nullptr, OperandInfo15, -1 ,nullptr },  // Inst #2056 = SQRT_D_MMR6
  { 2057,	2,	1,	4,	109,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2057 = SQRT_S_MMR6
  { 2058,	3,	1,	4,	241,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2058 = SRA
  { 2059,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2059 = SRAI_B
  { 2060,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2060 = SRAI_D
  { 2061,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2061 = SRAI_H
  { 2062,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2062 = SRAI_W
  { 2063,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2063 = SRARI_B
  { 2064,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2064 = SRARI_D
  { 2065,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2065 = SRARI_H
  { 2066,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2066 = SRARI_W
  { 2067,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2067 = SRAR_B
  { 2068,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2068 = SRAR_D
  { 2069,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2069 = SRAR_H
  { 2070,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2070 = SRAR_W
  { 2071,	3,	1,	4,	242,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2071 = SRAV
  { 2072,	3,	1,	4,	242,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2072 = SRAV_MM
  { 2073,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2073 = SRA_B
  { 2074,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2074 = SRA_D
  { 2075,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2075 = SRA_H
  { 2076,	3,	1,	4,	241,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2076 = SRA_MM
  { 2077,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2077 = SRA_W
  { 2078,	3,	1,	4,	243,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2078 = SRL
  { 2079,	3,	1,	2,	243,	0, 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #2079 = SRL16_MM
  { 2080,	3,	1,	2,	243,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo20, -1 ,nullptr },  // Inst #2080 = SRL16_MMR6
  { 2081,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2081 = SRLI_B
  { 2082,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2082 = SRLI_D
  { 2083,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2083 = SRLI_H
  { 2084,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2084 = SRLI_W
  { 2085,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2085 = SRLRI_B
  { 2086,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2086 = SRLRI_D
  { 2087,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2087 = SRLRI_H
  { 2088,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2088 = SRLRI_W
  { 2089,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2089 = SRLR_B
  { 2090,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2090 = SRLR_D
  { 2091,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2091 = SRLR_H
  { 2092,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2092 = SRLR_W
  { 2093,	3,	1,	4,	244,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2093 = SRLV
  { 2094,	3,	1,	4,	244,	0, 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2094 = SRLV_MM
  { 2095,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2095 = SRL_B
  { 2096,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2096 = SRL_D
  { 2097,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2097 = SRL_H
  { 2098,	3,	1,	4,	243,	0, 0x1ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2098 = SRL_MM
  { 2099,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2099 = SRL_W
  { 2100,	0,	0,	4,	245,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2100 = SSNOP
  { 2101,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2101 = SSNOP_MM
  { 2102,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2102 = SSNOP_MMR6
  { 2103,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo189, -1 ,nullptr },  // Inst #2103 = STORE_ACC128
  { 2104,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo190, -1 ,nullptr },  // Inst #2104 = STORE_ACC64
  { 2105,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo191, -1 ,nullptr },  // Inst #2105 = STORE_ACC64DSP
  { 2106,	3,	0,	4,	0,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo192, -1 ,nullptr },  // Inst #2106 = STORE_CCOND_DSP
  { 2107,	3,	0,	4,	295,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo185, -1 ,nullptr },  // Inst #2107 = ST_B
  { 2108,	3,	0,	4,	295,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo186, -1 ,nullptr },  // Inst #2108 = ST_D
  { 2109,	3,	0,	4,	295,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo187, -1 ,nullptr },  // Inst #2109 = ST_H
  { 2110,	3,	0,	4,	295,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo188, -1 ,nullptr },  // Inst #2110 = ST_W
  { 2111,	3,	1,	4,	246,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2111 = SUB
  { 2112,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2112 = SUBQH_PH
  { 2113,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2113 = SUBQH_PH_MMR2
  { 2114,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2114 = SUBQH_R_PH
  { 2115,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2115 = SUBQH_R_PH_MMR2
  { 2116,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2116 = SUBQH_R_W
  { 2117,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2117 = SUBQH_R_W_MMR2
  { 2118,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2118 = SUBQH_W
  { 2119,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2119 = SUBQH_W_MMR2
  { 2120,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2120 = SUBQ_PH
  { 2121,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2121 = SUBQ_PH_MM
  { 2122,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2122 = SUBQ_S_PH
  { 2123,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2123 = SUBQ_S_PH_MM
  { 2124,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #2124 = SUBQ_S_W
  { 2125,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo17, -1 ,nullptr },  // Inst #2125 = SUBQ_S_W_MM
  { 2126,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2126 = SUBSUS_U_B
  { 2127,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2127 = SUBSUS_U_D
  { 2128,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2128 = SUBSUS_U_H
  { 2129,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2129 = SUBSUS_U_W
  { 2130,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2130 = SUBSUU_S_B
  { 2131,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2131 = SUBSUU_S_D
  { 2132,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2132 = SUBSUU_S_H
  { 2133,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2133 = SUBSUU_S_W
  { 2134,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2134 = SUBS_S_B
  { 2135,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2135 = SUBS_S_D
  { 2136,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2136 = SUBS_S_H
  { 2137,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2137 = SUBS_S_W
  { 2138,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2138 = SUBS_U_B
  { 2139,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2139 = SUBS_U_D
  { 2140,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2140 = SUBS_U_H
  { 2141,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2141 = SUBS_U_W
  { 2142,	3,	1,	2,	247,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #2142 = SUBU16_MM
  { 2143,	3,	1,	2,	247,	0, 0x0ULL, nullptr, nullptr, OperandInfo28, -1 ,nullptr },  // Inst #2143 = SUBU16_MMR6
  { 2144,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2144 = SUBUH_QB
  { 2145,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2145 = SUBUH_QB_MMR2
  { 2146,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2146 = SUBUH_R_QB
  { 2147,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo23, -1 ,nullptr },  // Inst #2147 = SUBUH_R_QB_MMR2
  { 2148,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2148 = SUBU_MMR6
  { 2149,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2149 = SUBU_PH
  { 2150,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2150 = SUBU_PH_MMR2
  { 2151,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2151 = SUBU_QB
  { 2152,	3,	1,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2152 = SUBU_QB_MM
  { 2153,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2153 = SUBU_S_PH
  { 2154,	3,	1,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2154 = SUBU_S_PH_MMR2
  { 2155,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2155 = SUBU_S_QB
  { 2156,	3,	1,	4,	0,	0, 0x6ULL, nullptr, ImplicitList1, OperandInfo23, -1 ,nullptr },  // Inst #2156 = SUBU_S_QB_MM
  { 2157,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2157 = SUBVI_B
  { 2158,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo30, -1 ,nullptr },  // Inst #2158 = SUBVI_D
  { 2159,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo31, -1 ,nullptr },  // Inst #2159 = SUBVI_H
  { 2160,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo32, -1 ,nullptr },  // Inst #2160 = SUBVI_W
  { 2161,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2161 = SUBV_B
  { 2162,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2162 = SUBV_D
  { 2163,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2163 = SUBV_H
  { 2164,	3,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2164 = SUBV_W
  { 2165,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2165 = SUB_MM
  { 2166,	3,	1,	4,	0,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2166 = SUB_MMR6
  { 2167,	3,	1,	4,	247,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2167 = SUBu
  { 2168,	3,	1,	4,	247,	0|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2168 = SUBu_MM
  { 2169,	3,	0,	4,	248,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #2169 = SUXC1
  { 2170,	3,	0,	4,	248,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo184, -1 ,nullptr },  // Inst #2170 = SUXC164
  { 2171,	3,	0,	4,	248,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x5ULL, nullptr, nullptr, OperandInfo183, -1 ,nullptr },  // Inst #2171 = SUXC1_MM
  { 2172,	3,	0,	4,	249,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2172 = SW
  { 2173,	3,	0,	2,	249,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #2173 = SW16_MM
  { 2174,	3,	0,	2,	249,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo276, -1 ,nullptr },  // Inst #2174 = SW16_MMR6
  { 2175,	3,	0,	4,	249,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #2175 = SW64
  { 2176,	3,	0,	4,	250,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #2176 = SWC1
  { 2177,	3,	0,	4,	250,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo196, -1 ,nullptr },  // Inst #2177 = SWC1_MM
  { 2178,	3,	0,	4,	251,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #2178 = SWC2
  { 2179,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x6ULL, nullptr, nullptr, OperandInfo176, -1 ,nullptr },  // Inst #2179 = SWC2_MMR6
  { 2180,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo175, -1 ,nullptr },  // Inst #2180 = SWC2_R6
  { 2181,	3,	0,	4,	252,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo177, -1 ,nullptr },  // Inst #2181 = SWC3
  { 2182,	3,	0,	4,	253,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2182 = SWE
  { 2183,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2183 = SWE_MM
  { 2184,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2184 = SWE_MMR6
  { 2185,	3,	0,	4,	254,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2185 = SWL
  { 2186,	3,	0,	4,	254,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #2186 = SWL64
  { 2187,	4,	1,	4,	255,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #2187 = SWLE
  { 2188,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2188 = SWLE_MM
  { 2189,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2189 = SWL_MM
  { 2190,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #2190 = SWM16_MM
  { 2191,	3,	0,	2,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo199, -1 ,nullptr },  // Inst #2191 = SWM16_MMR6
  { 2192,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #2192 = SWM32_MM
  { 2193,	3,	0,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo200, -1 ,nullptr },  // Inst #2193 = SWM_MM
  { 2194,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #2194 = SWP_MM
  { 2195,	4,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo201, -1 ,nullptr },  // Inst #2195 = SWP_MMR6
  { 2196,	3,	0,	4,	256,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2196 = SWR
  { 2197,	3,	0,	4,	256,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo170, -1 ,nullptr },  // Inst #2197 = SWR64
  { 2198,	4,	1,	4,	257,	0|(1ULL<<MCID::FoldableAsLoad)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo198, -1 ,nullptr },  // Inst #2198 = SWRE
  { 2199,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2199 = SWRE_MM
  { 2200,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2200 = SWR_MM
  { 2201,	3,	0,	2,	249,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #2201 = SWSP_MM
  { 2202,	3,	0,	2,	249,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo202, -1 ,nullptr },  // Inst #2202 = SWSP_MMR6
  { 2203,	3,	0,	4,	258,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #2203 = SWXC1
  { 2204,	3,	0,	4,	258,	0|(1ULL<<MCID::MayStore), 0x5ULL, nullptr, nullptr, OperandInfo203, -1 ,nullptr },  // Inst #2204 = SWXC1_MM
  { 2205,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2205 = SW_MM
  { 2206,	3,	0,	4,	0,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x2ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2206 = SW_MMR6
  { 2207,	1,	0,	4,	259,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2207 = SYNC
  { 2208,	2,	0,	4,	260,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo298, -1 ,nullptr },  // Inst #2208 = SYNCI
  { 2209,	2,	0,	4,	260,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo298, -1 ,nullptr },  // Inst #2209 = SYNCI_MMR6
  { 2210,	1,	0,	4,	259,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2210 = SYNC_MM
  { 2211,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2211 = SYNC_MMR6
  { 2212,	1,	0,	4,	261,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2212 = SYSCALL
  { 2213,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2213 = SYSCALL_MM
  { 2214,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #2214 = SZ_B_PSEUDO
  { 2215,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo291, -1 ,nullptr },  // Inst #2215 = SZ_D_PSEUDO
  { 2216,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo292, -1 ,nullptr },  // Inst #2216 = SZ_H_PSEUDO
  { 2217,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo290, -1 ,nullptr },  // Inst #2217 = SZ_V_PSEUDO
  { 2218,	2,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo293, -1 ,nullptr },  // Inst #2218 = SZ_W_PSEUDO
  { 2219,	0,	0,	2,	262,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #2219 = Save16
  { 2220,	0,	0,	2,	262,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::Variadic)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, ImplicitList3, ImplicitList3, nullptr, -1 ,nullptr },  // Inst #2220 = SaveX16
  { 2221,	3,	0,	4,	217,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #2221 = SbRxRyOffMemX16
  { 2222,	2,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo299, -1 ,nullptr },  // Inst #2222 = SebRx16
  { 2223,	2,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo299, -1 ,nullptr },  // Inst #2223 = SehRx16
  { 2224,	4,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo300, -1 ,nullptr },  // Inst #2224 = SelBeqZ
  { 2225,	4,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo300, -1 ,nullptr },  // Inst #2225 = SelBneZ
  { 2226,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo301, -1 ,nullptr },  // Inst #2226 = SelTBteqZCmp
  { 2227,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo302, -1 ,nullptr },  // Inst #2227 = SelTBteqZCmpi
  { 2228,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo301, -1 ,nullptr },  // Inst #2228 = SelTBteqZSlt
  { 2229,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo302, -1 ,nullptr },  // Inst #2229 = SelTBteqZSlti
  { 2230,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo302, -1 ,nullptr },  // Inst #2230 = SelTBteqZSltiu
  { 2231,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo301, -1 ,nullptr },  // Inst #2231 = SelTBteqZSltu
  { 2232,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo301, -1 ,nullptr },  // Inst #2232 = SelTBtneZCmp
  { 2233,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo302, -1 ,nullptr },  // Inst #2233 = SelTBtneZCmpi
  { 2234,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo301, -1 ,nullptr },  // Inst #2234 = SelTBtneZSlt
  { 2235,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo302, -1 ,nullptr },  // Inst #2235 = SelTBtneZSlti
  { 2236,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo302, -1 ,nullptr },  // Inst #2236 = SelTBtneZSltiu
  { 2237,	5,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo301, -1 ,nullptr },  // Inst #2237 = SelTBtneZSltu
  { 2238,	3,	0,	4,	235,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #2238 = ShRxRyOffMemX16
  { 2239,	3,	1,	4,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo303, -1 ,nullptr },  // Inst #2239 = SllX16
  { 2240,	3,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #2240 = SllvRxRy16
  { 2241,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2241 = SltCCRxRy16
  { 2242,	2,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #2242 = SltRxRy16
  { 2243,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo303, -1 ,nullptr },  // Inst #2243 = SltiCCRxImmX16
  { 2244,	2,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #2244 = SltiRxImm16
  { 2245,	2,	0,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #2245 = SltiRxImmX16
  { 2246,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo303, -1 ,nullptr },  // Inst #2246 = SltiuCCRxImmX16
  { 2247,	2,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #2247 = SltiuRxImm16
  { 2248,	2,	0,	4,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo42, -1 ,nullptr },  // Inst #2248 = SltiuRxImmX16
  { 2249,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2249 = SltuCCRxRy16
  { 2250,	2,	0,	2,	14,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo96, -1 ,nullptr },  // Inst #2250 = SltuRxRy16
  { 2251,	3,	1,	2,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, ImplicitList7, OperandInfo45, -1 ,nullptr },  // Inst #2251 = SltuRxRyRz16
  { 2252,	3,	1,	4,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo303, -1 ,nullptr },  // Inst #2252 = SraX16
  { 2253,	3,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #2253 = SravRxRy16
  { 2254,	3,	1,	4,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo303, -1 ,nullptr },  // Inst #2254 = SrlX16
  { 2255,	3,	1,	2,	14,	0, 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #2255 = SrlvRxRy16
  { 2256,	3,	1,	2,	14,	0|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo45, -1 ,nullptr },  // Inst #2256 = SubuRxRyRz16
  { 2257,	3,	0,	4,	249,	0|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo204, -1 ,nullptr },  // Inst #2257 = SwRxRyOffMemX16
  { 2258,	3,	0,	4,	249,	0|(1ULL<<MCID::MayStore), 0x0ULL, nullptr, nullptr, OperandInfo44, -1 ,nullptr },  // Inst #2258 = SwRxSpImmX16
  { 2259,	1,	0,	4,	112,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList4, OperandInfo2, -1 ,nullptr },  // Inst #2259 = TAILCALL
  { 2260,	1,	0,	4,	120,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList4, OperandInfo167, -1 ,nullptr },  // Inst #2260 = TAILCALL64_R
  { 2261,	1,	0,	4,	120,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Return)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::DelaySlot)|(1ULL<<MCID::Call)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::ExtraSrcRegAllocReq), 0x10ULL, nullptr, ImplicitList4, OperandInfo70, -1 ,nullptr },  // Inst #2261 = TAILCALL_R
  { 2262,	3,	0,	4,	263,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2262 = TEQ
  { 2263,	2,	0,	4,	264,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2263 = TEQI
  { 2264,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2264 = TEQI_MM
  { 2265,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2265 = TEQ_MM
  { 2266,	3,	0,	4,	265,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2266 = TGE
  { 2267,	2,	0,	4,	266,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2267 = TGEI
  { 2268,	2,	0,	4,	267,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2268 = TGEIU
  { 2269,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2269 = TGEIU_MM
  { 2270,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2270 = TGEI_MM
  { 2271,	3,	0,	4,	268,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2271 = TGEU
  { 2272,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2272 = TGEU_MM
  { 2273,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2273 = TGE_MM
  { 2274,	0,	0,	4,	269,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2274 = TLBINV
  { 2275,	0,	0,	4,	270,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2275 = TLBINVF
  { 2276,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2276 = TLBINVF_MMR6
  { 2277,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2277 = TLBINV_MMR6
  { 2278,	0,	0,	4,	271,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2278 = TLBP
  { 2279,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2279 = TLBP_MM
  { 2280,	0,	0,	4,	272,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2280 = TLBR
  { 2281,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2281 = TLBR_MM
  { 2282,	0,	0,	4,	273,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2282 = TLBWI
  { 2283,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2283 = TLBWI_MM
  { 2284,	0,	0,	4,	274,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2284 = TLBWR
  { 2285,	0,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2285 = TLBWR_MM
  { 2286,	3,	0,	4,	275,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2286 = TLT
  { 2287,	2,	0,	4,	276,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2287 = TLTI
  { 2288,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2288 = TLTIU_MM
  { 2289,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2289 = TLTI_MM
  { 2290,	3,	0,	4,	277,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2290 = TLTU
  { 2291,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2291 = TLTU_MM
  { 2292,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2292 = TLT_MM
  { 2293,	3,	0,	4,	278,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2293 = TNE
  { 2294,	2,	0,	4,	279,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2294 = TNEI
  { 2295,	2,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2295 = TNEI_MM
  { 2296,	3,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x12ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2296 = TNE_MM
  { 2297,	0,	0,	4,	280,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::Barrier)|(1ULL<<MCID::Terminator)|(1ULL<<MCID::UnmodeledSideEffects), 0x10ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2297 = TRAP
  { 2298,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #2298 = TRUNC_L_D64
  { 2299,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo77, -1 ,nullptr },  // Inst #2299 = TRUNC_L_D_MMR6
  { 2300,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #2300 = TRUNC_L_S
  { 2301,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo78, -1 ,nullptr },  // Inst #2301 = TRUNC_L_S_MMR6
  { 2302,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #2302 = TRUNC_W_D32
  { 2303,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo80, -1 ,nullptr },  // Inst #2303 = TRUNC_W_D64
  { 2304,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #2304 = TRUNC_W_D_MMR6
  { 2305,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo79, -1 ,nullptr },  // Inst #2305 = TRUNC_W_MM
  { 2306,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2306 = TRUNC_W_S
  { 2307,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2307 = TRUNC_W_S_MM
  { 2308,	2,	1,	4,	215,	0, 0x4ULL, nullptr, nullptr, OperandInfo16, -1 ,nullptr },  // Inst #2308 = TRUNC_W_S_MMR6
  { 2309,	2,	0,	4,	281,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2309 = TTLTIU
  { 2310,	2,	0,	4,	62,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #2310 = UDIV
  { 2311,	2,	0,	4,	62,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList12, OperandInfo13, -1 ,nullptr },  // Inst #2311 = UDIV_MM
  { 2312,	3,	1,	4,	62,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UsesCustomInserter)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo261, -1 ,nullptr },  // Inst #2312 = UDIV_MM_Pseudo
  { 2313,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2313 = UDivMacro
  { 2314,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2314 = Ulh
  { 2315,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2315 = Ulhu
  { 2316,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo)|(1ULL<<MCID::UnmodeledSideEffects), 0x0ULL, nullptr, nullptr, OperandInfo169, -1 ,nullptr },  // Inst #2316 = Ulw
  { 2317,	3,	1,	4,	74,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList33, OperandInfo35, -1 ,nullptr },  // Inst #2317 = V3MULU
  { 2318,	3,	1,	4,	74,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList25, OperandInfo35, -1 ,nullptr },  // Inst #2318 = VMM0
  { 2319,	3,	1,	4,	74,	0|(1ULL<<MCID::Rematerializable)|(1ULL<<MCID::UnmodeledSideEffects), 0x1ULL, nullptr, ImplicitList34, OperandInfo35, -1 ,nullptr },  // Inst #2319 = VMULU
  { 2320,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo62, -1 ,nullptr },  // Inst #2320 = VSHF_B
  { 2321,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo63, -1 ,nullptr },  // Inst #2321 = VSHF_D
  { 2322,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo64, -1 ,nullptr },  // Inst #2322 = VSHF_H
  { 2323,	4,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo65, -1 ,nullptr },  // Inst #2323 = VSHF_W
  { 2324,	0,	0,	4,	282,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x16ULL, nullptr, nullptr, nullptr, -1 ,nullptr },  // Inst #2324 = WAIT
  { 2325,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2325 = WAIT_MM
  { 2326,	1,	0,	4,	0,	0|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo2, -1 ,nullptr },  // Inst #2326 = WAIT_MMR6
  { 2327,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2327 = WRDSP
  { 2328,	2,	0,	4,	0,	0|(1ULL<<MCID::MayLoad)|(1ULL<<MCID::MayStore)|(1ULL<<MCID::UnmodeledSideEffects), 0x6ULL, nullptr, nullptr, OperandInfo18, -1 ,nullptr },  // Inst #2328 = WRDSP_MM
  { 2329,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2329 = WRPGPR_MMR6
  { 2330,	2,	1,	4,	283,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2330 = WSBH
  { 2331,	2,	1,	4,	283,	0, 0x1ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2331 = WSBH_MM
  { 2332,	2,	1,	4,	0,	0, 0x6ULL, nullptr, nullptr, OperandInfo13, -1 ,nullptr },  // Inst #2332 = WSBH_MMR6
  { 2333,	3,	1,	4,	284,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2333 = XOR
  { 2334,	3,	1,	2,	284,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #2334 = XOR16_MM
  { 2335,	3,	1,	2,	284,	0|(1ULL<<MCID::Commutable), 0x0ULL, nullptr, nullptr, OperandInfo34, -1 ,nullptr },  // Inst #2335 = XOR16_MMR6
  { 2336,	3,	1,	4,	284,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo35, -1 ,nullptr },  // Inst #2336 = XOR64
  { 2337,	3,	1,	4,	294,	0, 0x6ULL, nullptr, nullptr, OperandInfo29, -1 ,nullptr },  // Inst #2337 = XORI_B
  { 2338,	3,	1,	4,	285,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2338 = XORI_MMR6
  { 2339,	3,	1,	4,	284,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2339 = XOR_MM
  { 2340,	3,	1,	4,	284,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x1ULL, nullptr, nullptr, OperandInfo17, -1 ,nullptr },  // Inst #2340 = XOR_MMR6
  { 2341,	3,	1,	4,	293,	0, 0x6ULL, nullptr, nullptr, OperandInfo24, -1 ,nullptr },  // Inst #2341 = XOR_V
  { 2342,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo25, -1 ,nullptr },  // Inst #2342 = XOR_V_D_PSEUDO
  { 2343,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo26, -1 ,nullptr },  // Inst #2343 = XOR_V_H_PSEUDO
  { 2344,	3,	1,	4,	1,	0|(1ULL<<MCID::Pseudo), 0x0ULL, nullptr, nullptr, OperandInfo27, -1 ,nullptr },  // Inst #2344 = XOR_V_W_PSEUDO
  { 2345,	3,	1,	4,	285,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2345 = XORi
  { 2346,	3,	1,	4,	284,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo36, -1 ,nullptr },  // Inst #2346 = XORi64
  { 2347,	3,	1,	4,	285,	0|(1ULL<<MCID::Rematerializable), 0x2ULL, nullptr, nullptr, OperandInfo22, -1 ,nullptr },  // Inst #2347 = XORi_MM
  { 2348,	3,	1,	2,	14,	0|(1ULL<<MCID::Commutable)|(1ULL<<MCID::Rematerializable), 0x0ULL, nullptr, nullptr, OperandInfo46, -1 ,nullptr },  // Inst #2348 = XorRxRxRy16
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
  /* 535 */ 'P', 's', 'e', 'u', 'd', 'o', 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '3', '2', 0,
  /* 553 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '3', '2', 0,
  /* 565 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '3', '2', 0,
  /* 576 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '3', '2', 0,
  /* 588 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '3', '2', 0,
  /* 598 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 0,
  /* 607 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '3', '2', 0,
  /* 627 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '3', '2', 0,
  /* 647 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 668 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '3', '2', 0,
  /* 688 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 704 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '3', '2', 0,
  /* 724 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 744 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '3', '2', 0,
  /* 763 */ 'D', 'S', 'L', 'L', '3', '2', 0,
  /* 770 */ 'D', 'S', 'R', 'L', '3', '2', 0,
  /* 777 */ 'D', 'R', 'O', 'T', 'R', '3', '2', 0,
  /* 785 */ 'C', 'I', 'N', 'S', '3', '2', 0,
  /* 792 */ 'E', 'X', 'T', 'S', '3', '2', 0,
  /* 799 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', 0,
  /* 808 */ 'D', 'S', 'L', 'L', '6', '4', '_', '3', '2', 0,
  /* 818 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '3', '2', 0,
  /* 832 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '3', '2', 0,
  /* 842 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '3', '2', 0,
  /* 856 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '3', '2', 0,
  /* 872 */ 'L', 'w', 'C', 'o', 'n', 's', 't', 'a', 'n', 't', '3', '2', 0,
  /* 885 */ 'L', 'D', 'C', '2', 0,
  /* 890 */ 'S', 'D', 'C', '2', 0,
  /* 895 */ 'D', 'M', 'F', 'C', '2', 0,
  /* 901 */ 'D', 'M', 'T', 'C', '2', 0,
  /* 907 */ 'L', 'W', 'C', '2', 0,
  /* 912 */ 'S', 'W', 'C', '2', 0,
  /* 917 */ 'M', 'T', 'M', '2', 0,
  /* 922 */ 'M', 'T', 'P', '2', 0,
  /* 927 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 940 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 958 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 972 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 986 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1004 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1019 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1035 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1051 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1067 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1082 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1100 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', '_', 'M', 'M', 'R', '2', 0,
  /* 1114 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', '_', 'M', 'M', 'R', '2', 0,
  /* 1127 */ 'A', 'P', 'P', 'E', 'N', 'D', '_', 'M', 'M', 'R', '2', 0,
  /* 1139 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1156 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1170 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1184 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1197 */ 'M', 'U', 'L', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1209 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1225 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1241 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1255 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1270 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1285 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1300 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1313 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1326 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1340 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1354 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1370 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1389 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1408 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1422 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1440 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1458 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1473 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 'R', '2', 0,
  /* 1488 */ 'B', 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', 'R', '2', 0,
  /* 1500 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1520 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1542 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1555 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1568 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1583 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1598 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1613 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 'R', '2', 0,
  /* 1627 */ 'L', 'D', 'C', '3', 0,
  /* 1632 */ 'S', 'D', 'C', '3', 0,
  /* 1637 */ 'L', 'W', 'C', '3', 0,
  /* 1642 */ 'S', 'W', 'C', '3', 0,
  /* 1647 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', 'C', '_', 'M', 'M', 'R', '3', 0,
  /* 1662 */ 'L', 'D', 'C', '1', '6', '4', 0,
  /* 1669 */ 'S', 'D', 'C', '1', '6', '4', 0,
  /* 1676 */ 'L', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 1684 */ 'S', 'D', 'X', 'C', '1', '6', '4', 0,
  /* 1692 */ 'L', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 1700 */ 'S', 'U', 'X', 'C', '1', '6', '4', 0,
  /* 1708 */ 'S', 'E', 'B', '6', '4', 0,
  /* 1714 */ 'L', 'B', '6', '4', 0,
  /* 1719 */ 'S', 'B', '6', '4', 0,
  /* 1724 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1735 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 0,
  /* 1747 */ 'J', 'I', 'C', '6', '4', 0,
  /* 1753 */ 'J', 'I', 'A', 'L', 'C', '6', '4', 0,
  /* 1761 */ 'S', 'C', '6', '4', 0,
  /* 1766 */ 'A', 'N', 'D', '6', '4', 0,
  /* 1772 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1782 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', 0,
  /* 1792 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1805 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'D', '6', '4', 0,
  /* 1818 */ 'F', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1827 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '6', '4', 0,
  /* 1837 */ 'F', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1846 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '6', '4', 0,
  /* 1856 */ 'C', '_', 'N', 'G', 'E', '_', 'D', '6', '4', 0,
  /* 1866 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1877 */ 'C', '_', 'O', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1887 */ 'C', '_', 'U', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1897 */ 'C', '_', 'L', 'E', '_', 'D', '6', '4', 0,
  /* 1906 */ 'C', '_', 'S', 'F', '_', 'D', '6', '4', 0,
  /* 1915 */ 'M', 'O', 'V', 'F', '_', 'D', '6', '4', 0,
  /* 1924 */ 'C', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1932 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'D', '6', '4', 0,
  /* 1953 */ 'F', 'N', 'E', 'G', '_', 'D', '6', '4', 0,
  /* 1962 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1973 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '6', '4', 0,
  /* 1984 */ 'C', '_', 'N', 'G', 'L', '_', 'D', '6', '4', 0,
  /* 1994 */ 'F', 'M', 'U', 'L', '_', 'D', '6', '4', 0,
  /* 2003 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '6', '4', 0,
  /* 2015 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '6', '4', 0,
  /* 2027 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '6', '4', 0,
  /* 2038 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '6', '4', 0,
  /* 2050 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', 0,
  /* 2060 */ 'C', '_', 'U', 'N', '_', 'D', '6', '4', 0,
  /* 2069 */ 'F', 'C', 'M', 'P', '_', 'D', '6', '4', 0,
  /* 2078 */ 'C', '_', 'S', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 2088 */ 'C', '_', 'U', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 2098 */ 'C', '_', 'E', 'Q', '_', 'D', '6', '4', 0,
  /* 2107 */ 'F', 'A', 'B', 'S', '_', 'D', '6', '4', 0,
  /* 2116 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '6', '4', 0,
  /* 2126 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'D', '6', '4', 0,
  /* 2143 */ 'C', '_', 'N', 'G', 'T', '_', 'D', '6', '4', 0,
  /* 2153 */ 'C', '_', 'O', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 2163 */ 'C', '_', 'U', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 2173 */ 'C', '_', 'L', 'T', '_', 'D', '6', '4', 0,
  /* 2182 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', '6', '4', 0,
  /* 2192 */ 'M', 'O', 'V', 'T', '_', 'D', '6', '4', 0,
  /* 2201 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'D', '6', '4', 0,
  /* 2222 */ 'F', 'D', 'I', 'V', '_', 'D', '6', '4', 0,
  /* 2231 */ 'F', 'M', 'O', 'V', '_', 'D', '6', '4', 0,
  /* 2240 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2252 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2264 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2275 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2287 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '6', '4', 0,
  /* 2297 */ 'B', 'N', 'E', '6', '4', 0,
  /* 2303 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', 0,
  /* 2316 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', 0,
  /* 2334 */ 'S', 'E', 'H', '6', '4', 0,
  /* 2340 */ 'L', 'H', '6', '4', 0,
  /* 2345 */ 'S', 'H', '6', '4', 0,
  /* 2350 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', '6', '4', 0,
  /* 2363 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '6', '4', 0,
  /* 2378 */ 'M', 'T', 'H', 'I', '6', '4', 0,
  /* 2385 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 2398 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', '6', '4', 0,
  /* 2411 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '6', '4', 0,
  /* 2431 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '6', '4', 0,
  /* 2451 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 2472 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '6', '4', 0,
  /* 2492 */ 'M', 'O', 'V', 'F', '_', 'I', '6', '4', 0,
  /* 2501 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', '6', '4', 0,
  /* 2522 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', '6', '4', 0,
  /* 2533 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', '6', '4', 0,
  /* 2544 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 2560 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '6', '4', 0,
  /* 2580 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 2600 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '6', '4', 0,
  /* 2619 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', '6', '4', 0,
  /* 2636 */ 'M', 'O', 'V', 'T', '_', 'I', '6', '4', 0,
  /* 2645 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', '6', '4', 0,
  /* 2666 */ 'L', 'L', '6', '4', 0,
  /* 2671 */ 'L', 'W', 'L', '6', '4', 0,
  /* 2677 */ 'S', 'W', 'L', '6', '4', 0,
  /* 2683 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', '6', '4', 0,
  /* 2696 */ 'M', 'T', 'L', 'O', '6', '4', 0,
  /* 2703 */ 'B', 'E', 'Q', '6', '4', 0,
  /* 2709 */ 'J', 'R', '6', '4', 0,
  /* 2714 */ 'J', 'A', 'L', 'R', '6', '4', 0,
  /* 2721 */ 'N', 'O', 'R', '6', '4', 0,
  /* 2727 */ 'X', 'O', 'R', '6', '4', 0,
  /* 2733 */ 'R', 'D', 'H', 'W', 'R', '6', '4', 0,
  /* 2741 */ 'L', 'W', 'R', '6', '4', 0,
  /* 2747 */ 'S', 'W', 'R', '6', '4', 0,
  /* 2753 */ 'S', 'L', 'T', '6', '4', 0,
  /* 2759 */ 'L', 'W', '6', '4', 0,
  /* 2764 */ 'S', 'W', '6', '4', 0,
  /* 2769 */ 'B', 'G', 'E', 'Z', '6', '4', 0,
  /* 2776 */ 'B', 'L', 'E', 'Z', '6', '4', 0,
  /* 2783 */ 'S', 'E', 'L', 'N', 'E', 'Z', '6', '4', 0,
  /* 2792 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '6', '4', 0,
  /* 2801 */ 'B', 'G', 'T', 'Z', '6', '4', 0,
  /* 2808 */ 'B', 'L', 'T', 'Z', '6', '4', 0,
  /* 2815 */ 'B', 'u', 'i', 'l', 'd', 'P', 'a', 'i', 'r', 'F', '6', '4', '_', '6', '4', 0,
  /* 2831 */ 'E', 'x', 't', 'r', 'a', 'c', 't', 'E', 'l', 'e', 'm', 'e', 'n', 't', 'F', '6', '4', '_', '6', '4', 0,
  /* 2852 */ 'S', 'L', 'L', '6', '4', '_', '6', '4', 0,
  /* 2861 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'R', 'e', 'g', '6', '4', 0,
  /* 2875 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', '6', '4', 0,
  /* 2898 */ 'A', 'N', 'D', 'i', '6', '4', 0,
  /* 2905 */ 'X', 'O', 'R', 'i', '6', '4', 0,
  /* 2912 */ 'S', 'L', 'T', 'i', '6', '4', 0,
  /* 2919 */ 'L', 'U', 'i', '6', '4', 0,
  /* 2925 */ 'L', 'o', 'a', 'd', 'I', 'm', 'm', '6', '4', 0,
  /* 2935 */ 'L', 'o', 'a', 'd', 'A', 'd', 'd', 'r', 'I', 'm', 'm', '6', '4', 0,
  /* 2949 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2964 */ 'M', 'I', 'P', 'S', 'e', 'h', '_', 'r', 'e', 't', 'u', 'r', 'n', '6', '4', 0,
  /* 2980 */ 'L', 'B', 'u', '6', '4', 0,
  /* 2986 */ 'L', 'H', 'u', '6', '4', 0,
  /* 2992 */ 'S', 'L', 'T', 'u', '6', '4', 0,
  /* 2999 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '6', '4', 0,
  /* 3011 */ 'S', 'L', 'T', 'i', 'u', '6', '4', 0,
  /* 3019 */ 'M', 'o', 'v', 'e', 'R', '3', '2', '1', '6', 0,
  /* 3029 */ 'R', 'e', 't', 'R', 'A', '1', '6', 0,
  /* 3037 */ 'J', 'a', 'l', 'B', '1', '6', 0,
  /* 3044 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '1', '6', 0,
  /* 3064 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '1', '6', 0,
  /* 3084 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 3105 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '1', '6', 0,
  /* 3125 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 3141 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '1', '6', 0,
  /* 3161 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 3181 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '1', '6', 0,
  /* 3200 */ 'M', 'o', 'v', 'e', '3', '2', 'R', '1', '6', 0,
  /* 3210 */ 'S', 'r', 'a', 'X', '1', '6', 0,
  /* 3217 */ 'R', 'e', 's', 't', 'o', 'r', 'e', 'X', '1', '6', 0,
  /* 3228 */ 'S', 'a', 'v', 'e', 'X', '1', '6', 0,
  /* 3236 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 3251 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'i', 'X', '1', '6', 0,
  /* 3266 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 3281 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'X', '1', '6', 0,
  /* 3296 */ 'S', 'l', 'l', 'X', '1', '6', 0,
  /* 3303 */ 'S', 'r', 'l', 'X', '1', '6', 0,
  /* 3310 */ 'L', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3326 */ 'S', 'b', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3342 */ 'L', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3358 */ 'S', 'h', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3374 */ 'L', 'b', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3391 */ 'L', 'h', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3408 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3427 */ 'L', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3443 */ 'S', 'w', 'R', 'x', 'R', 'y', 'O', 'f', 'f', 'M', 'e', 'm', 'X', '1', '6', 0,
  /* 3459 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'P', 'c', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3475 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3489 */ 'L', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3502 */ 'S', 'w', 'R', 'x', 'S', 'p', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3515 */ 'S', 'l', 't', 'i', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3530 */ 'S', 'l', 't', 'i', 'u', 'C', 'C', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3546 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3557 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3570 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3583 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3597 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3611 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3627 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3640 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', 'X', '1', '6', 0,
  /* 3653 */ 'B', 'i', 'm', 'm', 'X', '1', '6', 0,
  /* 3661 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', 'A', 'l', 'i', 'g', 'n', 'X', '1', '6', 0,
  /* 3677 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', 'X', '1', '6', 0,
  /* 3690 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 3704 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'C', 'm', 'p', 'X', '1', '6', 0,
  /* 3718 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 3732 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'X', '1', '6', 0,
  /* 3746 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3762 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'i', 'u', 'X', '1', '6', 0,
  /* 3778 */ 'B', 't', 'n', 'e', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3793 */ 'B', 't', 'e', 'q', 'z', 'T', '8', 'S', 'l', 't', 'u', 'X', '1', '6', 0,
  /* 3808 */ 'B', 't', 'n', 'e', 'z', 'X', '1', '6', 0,
  /* 3817 */ 'B', 't', 'e', 'q', 'z', 'X', '1', '6', 0,
  /* 3826 */ 'J', 'r', 'c', 'R', 'a', '1', '6', 0,
  /* 3834 */ 'J', 'r', 'R', 'a', '1', '6', 0,
  /* 3841 */ 'R', 'e', 's', 't', 'o', 'r', 'e', '1', '6', 0,
  /* 3851 */ 'G', 'o', 't', 'P', 'r', 'o', 'l', 'o', 'g', 'u', 'e', '1', '6', 0,
  /* 3865 */ 'S', 'a', 'v', 'e', '1', '6', 0,
  /* 3872 */ 'J', 'u', 'm', 'p', 'L', 'i', 'n', 'k', 'R', 'e', 'g', '1', '6', 0,
  /* 3886 */ 'M', 'f', 'h', 'i', '1', '6', 0,
  /* 3893 */ 'B', 'r', 'e', 'a', 'k', '1', '6', 0,
  /* 3901 */ 'J', 'a', 'l', '1', '6', 0,
  /* 3907 */ 'A', 'd', 'd', 'i', 'u', 'S', 'p', 'I', 'm', 'm', '1', '6', 0,
  /* 3920 */ 'L', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3930 */ 'C', 'm', 'p', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3942 */ 'S', 'l', 't', 'i', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3954 */ 'S', 'l', 't', 'i', 'u', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3967 */ 'A', 'd', 'd', 'i', 'u', 'R', 'x', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3982 */ 'B', 'n', 'e', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 3994 */ 'B', 'e', 'q', 'z', 'R', 'x', 'I', 'm', 'm', '1', '6', 0,
  /* 4006 */ 'B', 'i', 'm', 'm', '1', '6', 0,
  /* 4013 */ 'M', 'f', 'l', 'o', '1', '6', 0,
  /* 4020 */ 'L', 'w', 'R', 'x', 'P', 'c', 'T', 'c', 'p', '1', '6', 0,
  /* 4032 */ 'S', 'e', 'b', 'R', 'x', '1', '6', 0,
  /* 4040 */ 'J', 'r', 'c', 'R', 'x', '1', '6', 0,
  /* 4048 */ 'S', 'e', 'h', 'R', 'x', '1', '6', 0,
  /* 4056 */ 'S', 'l', 't', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4068 */ 'S', 'l', 't', 'u', 'C', 'C', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4081 */ 'N', 'e', 'g', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4091 */ 'C', 'm', 'p', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4101 */ 'S', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4111 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4122 */ 'N', 'o', 't', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4132 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4143 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4155 */ 'D', 'i', 'v', 'u', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4166 */ 'S', 'r', 'a', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4177 */ 'D', 'i', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4187 */ 'S', 'l', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4198 */ 'S', 'r', 'l', 'v', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4209 */ 'A', 'n', 'd', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4221 */ 'O', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4232 */ 'X', 'o', 'r', 'R', 'x', 'R', 'x', 'R', 'y', '1', '6', 0,
  /* 4244 */ 'M', 'u', 'l', 't', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4257 */ 'S', 'u', 'b', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4270 */ 'A', 'd', 'd', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4283 */ 'S', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4296 */ 'M', 'u', 'l', 't', 'u', 'R', 'x', 'R', 'y', 'R', 'z', '1', '6', 0,
  /* 4310 */ 'B', 't', 'n', 'e', 'z', '1', '6', 0,
  /* 4318 */ 'B', 't', 'e', 'q', 'z', '1', '6', 0,
  /* 4326 */ 'D', 'M', 'F', 'C', '0', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4339 */ 'D', 'M', 'T', 'C', '0', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4352 */ 'D', 'M', 'F', 'C', '1', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4365 */ 'D', 'M', 'T', 'C', '1', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4378 */ 'D', 'S', 'R', 'A', '3', '2', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4392 */ 'D', 'S', 'L', 'L', '3', '2', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4406 */ 'D', 'S', 'R', 'L', '3', '2', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4420 */ 'D', 'R', 'O', 'T', 'R', '3', '2', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4435 */ 'D', 'M', 'F', 'C', '2', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4448 */ 'D', 'M', 'T', 'C', '2', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4461 */ 'D', 'S', 'R', 'A', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4473 */ 'D', 'S', 'U', 'B', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4485 */ 'L', 'D', 'P', 'C', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4497 */ 'D', 'A', 'D', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4509 */ 'D', 'S', 'H', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4521 */ 'L', 'L', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4532 */ 'D', 'M', 'O', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4544 */ 'S', 'D', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4554 */ 'D', 'S', 'B', 'H', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4566 */ 'D', 'M', 'U', 'H', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4578 */ 'D', 'A', 'H', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4590 */ 'D', 'A', 'T', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4602 */ 'D', 'A', 'U', 'I', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4614 */ 'D', 'S', 'L', 'L', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4626 */ 'D', 'S', 'R', 'L', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4638 */ 'D', 'M', 'U', 'L', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4650 */ 'D', 'I', 'N', 'S', 'M', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4663 */ 'D', 'E', 'X', 'T', 'M', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4676 */ 'D', 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4690 */ 'D', 'C', 'L', 'O', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4702 */ 'D', 'R', 'O', 'T', 'R', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4715 */ 'D', 'I', 'N', 'S', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4727 */ 'D', 'E', 'X', 'T', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4739 */ 'D', 'S', 'U', 'B', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4752 */ 'D', 'A', 'D', 'D', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4765 */ 'D', 'M', 'O', 'D', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4778 */ 'D', 'M', 'U', 'H', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4791 */ 'D', 'A', 'D', 'D', 'I', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4805 */ 'D', 'M', 'U', 'L', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4818 */ 'D', 'I', 'N', 'S', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4831 */ 'D', 'E', 'X', 'T', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4844 */ 'D', 'D', 'I', 'V', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4857 */ 'L', 'W', 'U', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4868 */ 'D', 'S', 'R', 'A', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4881 */ 'D', 'D', 'I', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4893 */ 'D', 'S', 'L', 'L', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4906 */ 'D', 'S', 'R', 'L', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4919 */ 'D', 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4933 */ 'D', 'C', 'L', 'Z', '_', 'M', 'M', '6', '4', 'R', '6', 0,
  /* 4945 */ 'M', 'F', 'C', '0', '_', 'M', 'M', 'R', '6', 0,
  /* 4955 */ 'M', 'F', 'H', 'C', '0', '_', 'M', 'M', 'R', '6', 0,
  /* 4966 */ 'M', 'T', 'H', 'C', '0', '_', 'M', 'M', 'R', '6', 0,
  /* 4977 */ 'M', 'T', 'C', '0', '_', 'M', 'M', 'R', '6', 0,
  /* 4987 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 'R', '6', 0,
  /* 4997 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 'R', '6', 0,
  /* 5007 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '3', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5022 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '3', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5037 */ 'L', 'D', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5047 */ 'S', 'D', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5057 */ 'M', 'F', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5067 */ 'M', 'F', 'H', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5078 */ 'M', 'T', 'H', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5089 */ 'M', 'T', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5099 */ 'L', 'W', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5109 */ 'S', 'W', 'C', '2', '_', 'M', 'M', 'R', '6', 0,
  /* 5119 */ 'L', 'D', 'C', '1', '_', 'D', '6', '4', '_', 'M', 'M', 'R', '6', 0,
  /* 5133 */ 'S', 'D', 'C', '1', '_', 'D', '6', '4', '_', 'M', 'M', 'R', '6', 0,
  /* 5147 */ 'M', 'F', 'H', 'C', '1', '_', 'D', '6', '4', '_', 'M', 'M', 'R', '6', 0,
  /* 5162 */ 'M', 'T', 'H', 'C', '1', '_', 'D', '6', '4', '_', 'M', 'M', 'R', '6', 0,
  /* 5177 */ 'S', 'B', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5187 */ 'B', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5197 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5208 */ 'J', 'A', 'L', 'R', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5221 */ 'B', 'N', 'E', 'Z', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5234 */ 'B', 'E', 'Q', 'Z', 'C', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5247 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5258 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5270 */ 'S', 'H', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5280 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5292 */ 'L', 'I', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5302 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5315 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5326 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5337 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5348 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5359 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5372 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5383 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5394 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5406 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5418 */ 'S', 'W', '1', '6', '_', 'M', 'M', 'R', '6', 0,
  /* 5428 */ 'L', 'S', 'A', '_', 'M', 'M', 'R', '6', 0,
  /* 5437 */ 'S', 'E', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 5446 */ 'E', 'H', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 5455 */ 'J', 'A', 'L', 'R', 'C', '_', 'H', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 5469 */ 'L', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 5477 */ 'S', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 5485 */ 'S', 'U', 'B', '_', 'M', 'M', 'R', '6', 0,
  /* 5494 */ 'B', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5502 */ 'B', 'G', 'E', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5512 */ 'B', 'N', 'E', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5522 */ 'J', 'I', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5531 */ 'B', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5541 */ 'J', 'I', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5552 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5565 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5578 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5591 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5604 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5617 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5630 */ 'E', 'R', 'E', 'T', 'N', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5642 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5652 */ 'A', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5663 */ 'A', 'L', 'U', 'I', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5675 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5688 */ 'L', 'W', 'P', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5698 */ 'B', 'E', 'Q', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5708 */ 'J', 'A', 'L', 'R', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5719 */ 'B', 'L', 'T', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5729 */ 'B', 'G', 'E', 'U', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5740 */ 'B', 'L', 'T', 'U', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5751 */ 'B', 'N', 'V', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5761 */ 'B', 'O', 'V', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5771 */ 'B', 'C', '1', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5784 */ 'B', 'C', '2', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5797 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5808 */ 'B', 'C', '1', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5821 */ 'B', 'C', '2', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5834 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 'R', '6', 0,
  /* 5845 */ 'A', 'D', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5854 */ 'A', 'N', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5863 */ 'M', 'O', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5872 */ 'M', 'I', 'N', 'A', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5884 */ 'M', 'A', 'X', 'A', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5896 */ 'F', 'S', 'U', 'B', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5908 */ 'F', 'A', 'D', 'D', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5920 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5935 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5951 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5966 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5980 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 5995 */ 'C', 'M', 'P', '_', 'A', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6009 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6022 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6035 */ 'F', 'N', 'E', 'G', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6047 */ 'S', 'E', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6058 */ 'F', 'M', 'U', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6070 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6085 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6100 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6114 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6129 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6142 */ 'M', 'I', 'N', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6153 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6168 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6182 */ 'R', 'E', 'C', 'I', 'P', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6195 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6210 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6226 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6241 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6255 */ 'A', 'B', 'S', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6266 */ 'C', 'L', 'A', 'S', 'S', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6279 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6292 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6307 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6323 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6338 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6352 */ 'R', 'I', 'N', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6364 */ 'R', 'S', 'Q', 'R', 'T', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6377 */ 'F', 'D', 'I', 'V', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6389 */ 'F', 'M', 'O', 'V', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6401 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6416 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6431 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6445 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6460 */ 'C', 'V', 'T', '_', 'W', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6473 */ 'M', 'A', 'X', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6484 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6498 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', '_', 'M', 'M', 'R', '6', 0,
  /* 6512 */ 'L', 'B', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6521 */ 'S', 'B', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6530 */ 'S', 'C', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6539 */ 'C', 'A', 'C', 'H', 'E', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6551 */ 'P', 'R', 'E', 'F', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6562 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6573 */ 'S', 'H', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6582 */ 'L', 'L', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6591 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6602 */ 'L', 'B', 'U', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6612 */ 'L', 'W', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6621 */ 'S', 'W', 'E', '_', 'M', 'M', 'R', '6', 0,
  /* 6630 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 'R', '6', 0,
  /* 6640 */ 'T', 'L', 'B', 'I', 'N', 'V', 'F', '_', 'M', 'M', 'R', '6', 0,
  /* 6653 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 6663 */ 'S', 'E', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 6672 */ 'S', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 6680 */ 'M', 'U', 'H', '_', 'M', 'M', 'R', '6', 0,
  /* 6689 */ 'S', 'Y', 'N', 'C', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 6700 */ 'A', 'N', 'D', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 6710 */ 'E', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 6718 */ 'X', 'O', 'R', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 6728 */ 'A', 'U', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 6737 */ 'L', 'U', 'I', '_', 'M', 'M', 'R', '6', 0,
  /* 6746 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 'R', '6', 0,
  /* 6757 */ 'S', 'L', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 6766 */ 'M', 'U', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 6775 */ 'C', 'V', 'T', '_', 'D', '_', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 6788 */ 'C', 'V', 'T', '_', 'S', '_', 'L', '_', 'M', 'M', 'R', '6', 0,
  /* 6801 */ 'A', 'L', 'I', 'G', 'N', '_', 'M', 'M', 'R', '6', 0,
  /* 6812 */ 'C', 'L', 'O', '_', 'M', 'M', 'R', '6', 0,
  /* 6821 */ 'B', 'I', 'T', 'S', 'W', 'A', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6834 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6845 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6856 */ 'J', 'R', 'C', 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6872 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6882 */ 'D', 'V', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6891 */ 'E', 'V', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6900 */ 'L', 'W', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6909 */ 'S', 'W', 'P', '_', 'M', 'M', 'R', '6', 0,
  /* 6918 */ 'N', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 6927 */ 'X', 'O', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 6936 */ 'R', 'D', 'P', 'G', 'P', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 6948 */ 'W', 'R', 'P', 'G', 'P', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 6960 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 'R', '6', 0,
  /* 6971 */ 'I', 'N', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6980 */ 'M', 'I', 'N', 'A', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 6992 */ 'M', 'A', 'X', 'A', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7004 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7016 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7028 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7041 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7056 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7072 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7087 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7101 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7116 */ 'C', 'M', 'P', '_', 'A', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7130 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7143 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7156 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7168 */ 'S', 'E', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7179 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7191 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7206 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7221 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7235 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7250 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7263 */ 'M', 'I', 'N', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7274 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7289 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7303 */ 'R', 'E', 'C', 'I', 'P', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7316 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7331 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7347 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7362 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7376 */ 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7387 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7400 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7415 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7431 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7446 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7460 */ 'R', 'I', 'N', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7472 */ 'R', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7485 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7497 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7509 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7524 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7539 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7553 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7568 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7581 */ 'M', 'A', 'X', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7592 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7606 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', '_', 'M', 'M', 'R', '6', 0,
  /* 7620 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 7631 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 7641 */ 'E', 'X', 'T', '_', 'M', 'M', 'R', '6', 0,
  /* 7650 */ 'L', 'B', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7659 */ 'S', 'U', 'B', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7669 */ 'A', 'D', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7679 */ 'M', 'O', 'D', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7689 */ 'M', 'U', 'H', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7699 */ 'A', 'D', 'D', 'I', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7710 */ 'M', 'U', 'L', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7720 */ 'D', 'I', 'V', 'U', '_', 'M', 'M', 'R', '6', 0,
  /* 7730 */ 'D', 'I', 'V', '_', 'M', 'M', 'R', '6', 0,
  /* 7739 */ 'T', 'L', 'B', 'I', 'N', 'V', '_', 'M', 'M', 'R', '6', 0,
  /* 7751 */ 'L', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 7759 */ 'S', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 7767 */ 'C', 'V', 'T', '_', 'D', '_', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 7780 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 'R', '6', 0,
  /* 7793 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 7805 */ 'C', 'L', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 7814 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'M', 'M', 'R', '6', 0,
  /* 7826 */ 'L', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 7834 */ 'S', 'D', 'C', '2', '_', 'R', '6', 0,
  /* 7842 */ 'L', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 7850 */ 'S', 'W', 'C', '2', '_', 'R', '6', 0,
  /* 7858 */ 'S', 'C', '6', '4', '_', 'R', '6', 0,
  /* 7866 */ 'L', 'L', '6', '4', '_', 'R', '6', 0,
  /* 7874 */ 'D', 'L', 'S', 'A', '_', 'R', '6', 0,
  /* 7882 */ 'J', 'R', '_', 'H', 'B', '_', 'R', '6', 0,
  /* 7891 */ 'S', 'C', '_', 'R', '6', 0,
  /* 7897 */ 'S', 'C', 'D', '_', 'R', '6', 0,
  /* 7904 */ 'L', 'L', 'D', '_', 'R', '6', 0,
  /* 7911 */ 'C', 'A', 'C', 'H', 'E', '_', 'R', '6', 0,
  /* 7920 */ 'P', 'R', 'E', 'F', '_', 'R', '6', 0,
  /* 7928 */ 'L', 'L', '_', 'R', '6', 0,
  /* 7934 */ 'D', 'M', 'U', 'L', '_', 'R', '6', 0,
  /* 7942 */ 'D', 'C', 'L', 'O', '_', 'R', '6', 0,
  /* 7950 */ 'S', 'D', 'B', 'B', 'P', '_', 'R', '6', 0,
  /* 7959 */ 'D', 'C', 'L', 'Z', '_', 'R', '6', 0,
  /* 7967 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 7979 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '1', '2', '8', 0,
  /* 7992 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'S', 'U', 'B', '_', 'I', '8', 0,
  /* 8011 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'D', 'D', '_', 'I', '8', 0,
  /* 8030 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'N', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 8050 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'A', 'N', 'D', '_', 'I', '8', 0,
  /* 8069 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 8084 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'C', 'M', 'P', '_', 'S', 'W', 'A', 'P', '_', 'I', '8', 0,
  /* 8103 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'X', 'O', 'R', '_', 'I', '8', 0,
  /* 8122 */ 'A', 'T', 'O', 'M', 'I', 'C', '_', 'L', 'O', 'A', 'D', '_', 'O', 'R', '_', 'I', '8', 0,
  /* 8140 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 8155 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', 0,
  /* 8171 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 8186 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', 0,
  /* 8202 */ 'D', 'S', 'R', 'A', 0,
  /* 8207 */ 'R', 'e', 't', 'R', 'A', 0,
  /* 8213 */ 'D', 'L', 'S', 'A', 0,
  /* 8218 */ 'C', 'F', 'C', 'M', 'S', 'A', 0,
  /* 8225 */ 'C', 'T', 'C', 'M', 'S', 'A', 0,
  /* 8232 */ 'S', 'E', 'B', 0,
  /* 8236 */ 'E', 'H', 'B', 0,
  /* 8240 */ 'J', 'R', '_', 'H', 'B', 0,
  /* 8246 */ 'J', 'A', 'L', 'R', '_', 'H', 'B', 0,
  /* 8254 */ 'L', 'B', 0,
  /* 8257 */ 'S', 'H', 'R', 'A', '_', 'Q', 'B', 0,
  /* 8265 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 8278 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 8290 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', 0,
  /* 8307 */ 'S', 'U', 'B', 'U', 'H', '_', 'Q', 'B', 0,
  /* 8316 */ 'A', 'D', 'D', 'U', 'H', '_', 'Q', 'B', 0,
  /* 8325 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'Q', 'B', 0,
  /* 8339 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', 0,
  /* 8347 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', 0,
  /* 8355 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', 0,
  /* 8363 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 8376 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 8388 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', 0,
  /* 8405 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'Q', 'B', 0,
  /* 8415 */ 'S', 'U', 'B', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 8426 */ 'A', 'D', 'D', 'U', 'H', '_', 'R', '_', 'Q', 'B', 0,
  /* 8437 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'Q', 'B', 0,
  /* 8448 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'Q', 'B', 0,
  /* 8458 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 8468 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', 0,
  /* 8478 */ 'C', 'M', 'P', 'G', 'D', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 8491 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 8503 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', 0,
  /* 8520 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', 0,
  /* 8528 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', 0,
  /* 8536 */ 'S', 'H', 'R', 'A', 'V', '_', 'Q', 'B', 0,
  /* 8545 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', 0,
  /* 8554 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', 0,
  /* 8563 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', 0,
  /* 8572 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', 0,
  /* 8583 */ 'S', 'B', 0,
  /* 8586 */ 'M', 'O', 'D', 'S', 'U', 'B', 0,
  /* 8593 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 0,
  /* 8604 */ 'S', 'R', 'A', '_', 'B', 0,
  /* 8610 */ 'A', 'D', 'D', '_', 'A', '_', 'B', 0,
  /* 8618 */ 'M', 'I', 'N', '_', 'A', '_', 'B', 0,
  /* 8626 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'B', 0,
  /* 8635 */ 'M', 'A', 'X', '_', 'A', '_', 'B', 0,
  /* 8643 */ 'N', 'L', 'O', 'C', '_', 'B', 0,
  /* 8650 */ 'N', 'L', 'Z', 'C', '_', 'B', 0,
  /* 8657 */ 'S', 'L', 'D', '_', 'B', 0,
  /* 8663 */ 'P', 'C', 'K', 'O', 'D', '_', 'B', 0,
  /* 8671 */ 'I', 'L', 'V', 'O', 'D', '_', 'B', 0,
  /* 8679 */ 'I', 'N', 'S', 'V', 'E', '_', 'B', 0,
  /* 8687 */ 'V', 'S', 'H', 'F', '_', 'B', 0,
  /* 8694 */ 'B', 'N', 'E', 'G', '_', 'B', 0,
  /* 8701 */ 'S', 'R', 'A', 'I', '_', 'B', 0,
  /* 8708 */ 'S', 'L', 'D', 'I', '_', 'B', 0,
  /* 8715 */ 'A', 'N', 'D', 'I', '_', 'B', 0,
  /* 8722 */ 'B', 'N', 'E', 'G', 'I', '_', 'B', 0,
  /* 8730 */ 'B', 'S', 'E', 'L', 'I', '_', 'B', 0,
  /* 8738 */ 'S', 'L', 'L', 'I', '_', 'B', 0,
  /* 8745 */ 'S', 'R', 'L', 'I', '_', 'B', 0,
  /* 8752 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'B', 0,
  /* 8761 */ 'C', 'E', 'Q', 'I', '_', 'B', 0,
  /* 8768 */ 'S', 'R', 'A', 'R', 'I', '_', 'B', 0,
  /* 8776 */ 'B', 'C', 'L', 'R', 'I', '_', 'B', 0,
  /* 8784 */ 'S', 'R', 'L', 'R', 'I', '_', 'B', 0,
  /* 8792 */ 'N', 'O', 'R', 'I', '_', 'B', 0,
  /* 8799 */ 'X', 'O', 'R', 'I', '_', 'B', 0,
  /* 8806 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'B', 0,
  /* 8815 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'B', 0,
  /* 8824 */ 'B', 'S', 'E', 'T', 'I', '_', 'B', 0,
  /* 8832 */ 'S', 'U', 'B', 'V', 'I', '_', 'B', 0,
  /* 8840 */ 'A', 'D', 'D', 'V', 'I', '_', 'B', 0,
  /* 8848 */ 'B', 'M', 'Z', 'I', '_', 'B', 0,
  /* 8855 */ 'B', 'M', 'N', 'Z', 'I', '_', 'B', 0,
  /* 8863 */ 'F', 'I', 'L', 'L', '_', 'B', 0,
  /* 8870 */ 'S', 'L', 'L', '_', 'B', 0,
  /* 8876 */ 'S', 'R', 'L', '_', 'B', 0,
  /* 8882 */ 'B', 'I', 'N', 'S', 'L', '_', 'B', 0,
  /* 8890 */ 'I', 'L', 'V', 'L', '_', 'B', 0,
  /* 8897 */ 'C', 'E', 'Q', '_', 'B', 0,
  /* 8903 */ 'S', 'R', 'A', 'R', '_', 'B', 0,
  /* 8910 */ 'B', 'C', 'L', 'R', '_', 'B', 0,
  /* 8917 */ 'S', 'R', 'L', 'R', '_', 'B', 0,
  /* 8924 */ 'B', 'I', 'N', 'S', 'R', '_', 'B', 0,
  /* 8932 */ 'I', 'L', 'V', 'R', '_', 'B', 0,
  /* 8939 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'B', 0,
  /* 8948 */ 'M', 'O', 'D', '_', 'S', '_', 'B', 0,
  /* 8956 */ 'C', 'L', 'E', '_', 'S', '_', 'B', 0,
  /* 8964 */ 'A', 'V', 'E', '_', 'S', '_', 'B', 0,
  /* 8972 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'B', 0,
  /* 8981 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'B', 0,
  /* 8990 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'B', 0,
  /* 8999 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'B', 0,
  /* 9008 */ 'M', 'I', 'N', '_', 'S', '_', 'B', 0,
  /* 9016 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'B', 0,
  /* 9025 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'B', 0,
  /* 9034 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'B', 0,
  /* 9043 */ 'S', 'A', 'T', '_', 'S', '_', 'B', 0,
  /* 9051 */ 'C', 'L', 'T', '_', 'S', '_', 'B', 0,
  /* 9059 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'B', 0,
  /* 9070 */ 'D', 'I', 'V', '_', 'S', '_', 'B', 0,
  /* 9078 */ 'M', 'A', 'X', '_', 'S', '_', 'B', 0,
  /* 9086 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'B', 0,
  /* 9095 */ 'S', 'P', 'L', 'A', 'T', '_', 'B', 0,
  /* 9103 */ 'B', 'S', 'E', 'T', '_', 'B', 0,
  /* 9110 */ 'P', 'C', 'N', 'T', '_', 'B', 0,
  /* 9117 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', 0,
  /* 9126 */ 'S', 'T', '_', 'B', 0,
  /* 9131 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'B', 0,
  /* 9140 */ 'M', 'O', 'D', '_', 'U', '_', 'B', 0,
  /* 9148 */ 'C', 'L', 'E', '_', 'U', '_', 'B', 0,
  /* 9156 */ 'A', 'V', 'E', '_', 'U', '_', 'B', 0,
  /* 9164 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'B', 0,
  /* 9173 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'B', 0,
  /* 9182 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'B', 0,
  /* 9191 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'B', 0,
  /* 9200 */ 'M', 'I', 'N', '_', 'U', '_', 'B', 0,
  /* 9208 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'B', 0,
  /* 9217 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'B', 0,
  /* 9226 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'B', 0,
  /* 9235 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'B', 0,
  /* 9246 */ 'S', 'A', 'T', '_', 'U', '_', 'B', 0,
  /* 9254 */ 'C', 'L', 'T', '_', 'U', '_', 'B', 0,
  /* 9262 */ 'D', 'I', 'V', '_', 'U', '_', 'B', 0,
  /* 9270 */ 'M', 'A', 'X', '_', 'U', '_', 'B', 0,
  /* 9278 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'B', 0,
  /* 9287 */ 'M', 'S', 'U', 'B', 'V', '_', 'B', 0,
  /* 9295 */ 'M', 'A', 'D', 'D', 'V', '_', 'B', 0,
  /* 9303 */ 'P', 'C', 'K', 'E', 'V', '_', 'B', 0,
  /* 9311 */ 'I', 'L', 'V', 'E', 'V', '_', 'B', 0,
  /* 9319 */ 'M', 'U', 'L', 'V', '_', 'B', 0,
  /* 9326 */ 'B', 'Z', '_', 'B', 0,
  /* 9331 */ 'B', 'N', 'Z', '_', 'B', 0,
  /* 9337 */ 'B', 'C', 0,
  /* 9340 */ 'B', 'G', 'E', 'C', 0,
  /* 9345 */ 'B', 'N', 'E', 'C', 0,
  /* 9350 */ 'J', 'I', 'C', 0,
  /* 9354 */ 'B', 'A', 'L', 'C', 0,
  /* 9359 */ 'J', 'I', 'A', 'L', 'C', 0,
  /* 9365 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 9373 */ 'B', 'L', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 9381 */ 'B', 'N', 'E', 'Z', 'A', 'L', 'C', 0,
  /* 9389 */ 'B', 'E', 'Q', 'Z', 'A', 'L', 'C', 0,
  /* 9397 */ 'B', 'G', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 9405 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'C', 0,
  /* 9413 */ 'E', 'R', 'E', 'T', 'N', 'C', 0,
  /* 9420 */ 'S', 'Y', 'N', 'C', 0,
  /* 9425 */ 'L', 'D', 'P', 'C', 0,
  /* 9430 */ 'A', 'U', 'I', 'P', 'C', 0,
  /* 9436 */ 'A', 'L', 'U', 'I', 'P', 'C', 0,
  /* 9443 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', 0,
  /* 9451 */ 'L', 'W', 'U', 'P', 'C', 0,
  /* 9457 */ 'L', 'W', 'P', 'C', 0,
  /* 9462 */ 'B', 'E', 'Q', 'C', 0,
  /* 9467 */ 'A', 'D', 'D', 'S', 'C', 0,
  /* 9473 */ 'B', 'L', 'T', 'C', 0,
  /* 9478 */ 'B', 'G', 'E', 'U', 'C', 0,
  /* 9484 */ 'B', 'L', 'T', 'U', 'C', 0,
  /* 9490 */ 'B', 'N', 'V', 'C', 0,
  /* 9495 */ 'B', 'O', 'V', 'C', 0,
  /* 9500 */ 'A', 'D', 'D', 'W', 'C', 0,
  /* 9506 */ 'B', 'G', 'E', 'Z', 'C', 0,
  /* 9512 */ 'B', 'L', 'E', 'Z', 'C', 0,
  /* 9518 */ 'B', 'N', 'E', 'Z', 'C', 0,
  /* 9524 */ 'B', 'E', 'Q', 'Z', 'C', 0,
  /* 9530 */ 'B', 'G', 'T', 'Z', 'C', 0,
  /* 9536 */ 'B', 'L', 'T', 'Z', 'C', 0,
  /* 9542 */ 'S', 'C', 'D', 0,
  /* 9546 */ 'D', 'A', 'D', 'D', 0,
  /* 9551 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 0,
  /* 9562 */ 'G', '_', 'A', 'D', 'D', 0,
  /* 9568 */ 'D', 'S', 'H', 'D', 0,
  /* 9573 */ 'L', 'L', 'D', 0,
  /* 9577 */ 'A', 'N', 'D', 0,
  /* 9581 */ 'P', 'R', 'E', 'P', 'E', 'N', 'D', 0,
  /* 9589 */ 'A', 'P', 'P', 'E', 'N', 'D', 0,
  /* 9596 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'E', 'N', 'D', 0,
  /* 9609 */ 'D', 'M', 'O', 'D', 0,
  /* 9614 */ 'L', 'O', 'A', 'D', '_', 'S', 'T', 'A', 'C', 'K', '_', 'G', 'U', 'A', 'R', 'D', 0,
  /* 9631 */ 'S', 'D', 0,
  /* 9634 */ 'F', 'L', 'O', 'G', '2', '_', 'D', 0,
  /* 9642 */ 'F', 'E', 'X', 'P', '2', '_', 'D', 0,
  /* 9650 */ 'M', 'I', 'N', 'A', '_', 'D', 0,
  /* 9657 */ 'S', 'R', 'A', '_', 'D', 0,
  /* 9663 */ 'M', 'A', 'X', 'A', '_', 'D', 0,
  /* 9670 */ 'A', 'D', 'D', '_', 'A', '_', 'D', 0,
  /* 9678 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'D', 0,
  /* 9687 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'D', 0,
  /* 9696 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'D', 0,
  /* 9705 */ 'F', 'S', 'U', 'B', '_', 'D', 0,
  /* 9712 */ 'F', 'M', 'S', 'U', 'B', '_', 'D', 0,
  /* 9720 */ 'N', 'L', 'O', 'C', '_', 'D', 0,
  /* 9727 */ 'N', 'L', 'Z', 'C', '_', 'D', 0,
  /* 9734 */ 'F', 'A', 'D', 'D', '_', 'D', 0,
  /* 9741 */ 'F', 'M', 'A', 'D', 'D', '_', 'D', 0,
  /* 9749 */ 'S', 'L', 'D', '_', 'D', 0,
  /* 9755 */ 'P', 'C', 'K', 'O', 'D', '_', 'D', 0,
  /* 9763 */ 'I', 'L', 'V', 'O', 'D', '_', 'D', 0,
  /* 9771 */ 'F', 'C', 'L', 'E', '_', 'D', 0,
  /* 9778 */ 'F', 'S', 'L', 'E', '_', 'D', 0,
  /* 9785 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'D', 0,
  /* 9795 */ 'F', 'C', 'U', 'L', 'E', '_', 'D', 0,
  /* 9803 */ 'F', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 9811 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'D', 0,
  /* 9822 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'D', 0,
  /* 9832 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'D', 0,
  /* 9841 */ 'F', 'C', 'N', 'E', '_', 'D', 0,
  /* 9848 */ 'F', 'S', 'N', 'E', '_', 'D', 0,
  /* 9855 */ 'F', 'C', 'U', 'N', 'E', '_', 'D', 0,
  /* 9863 */ 'F', 'S', 'U', 'N', 'E', '_', 'D', 0,
  /* 9871 */ 'I', 'N', 'S', 'V', 'E', '_', 'D', 0,
  /* 9879 */ 'F', 'C', 'A', 'F', '_', 'D', 0,
  /* 9886 */ 'F', 'S', 'A', 'F', '_', 'D', 0,
  /* 9893 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'D', 0,
  /* 9903 */ 'M', 'S', 'U', 'B', 'F', '_', 'D', 0,
  /* 9911 */ 'M', 'A', 'D', 'D', 'F', '_', 'D', 0,
  /* 9919 */ 'V', 'S', 'H', 'F', '_', 'D', 0,
  /* 9926 */ 'C', 'M', 'P', '_', 'F', '_', 'D', 0,
  /* 9934 */ 'B', 'N', 'E', 'G', '_', 'D', 0,
  /* 9941 */ 'S', 'R', 'A', 'I', '_', 'D', 0,
  /* 9948 */ 'S', 'L', 'D', 'I', '_', 'D', 0,
  /* 9955 */ 'B', 'N', 'E', 'G', 'I', '_', 'D', 0,
  /* 9963 */ 'S', 'L', 'L', 'I', '_', 'D', 0,
  /* 9970 */ 'S', 'R', 'L', 'I', '_', 'D', 0,
  /* 9977 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'D', 0,
  /* 9986 */ 'C', 'E', 'Q', 'I', '_', 'D', 0,
  /* 9993 */ 'S', 'R', 'A', 'R', 'I', '_', 'D', 0,
  /* 10001 */ 'B', 'C', 'L', 'R', 'I', '_', 'D', 0,
  /* 10009 */ 'S', 'R', 'L', 'R', 'I', '_', 'D', 0,
  /* 10017 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'D', 0,
  /* 10026 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'D', 0,
  /* 10035 */ 'B', 'S', 'E', 'T', 'I', '_', 'D', 0,
  /* 10043 */ 'S', 'U', 'B', 'V', 'I', '_', 'D', 0,
  /* 10051 */ 'A', 'D', 'D', 'V', 'I', '_', 'D', 0,
  /* 10059 */ 'S', 'E', 'L', '_', 'D', 0,
  /* 10065 */ 'F', 'I', 'L', 'L', '_', 'D', 0,
  /* 10072 */ 'S', 'L', 'L', '_', 'D', 0,
  /* 10078 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'D', 0,
  /* 10087 */ 'F', 'F', 'Q', 'L', '_', 'D', 0,
  /* 10094 */ 'S', 'R', 'L', '_', 'D', 0,
  /* 10100 */ 'B', 'I', 'N', 'S', 'L', '_', 'D', 0,
  /* 10108 */ 'F', 'M', 'U', 'L', '_', 'D', 0,
  /* 10115 */ 'I', 'L', 'V', 'L', '_', 'D', 0,
  /* 10122 */ 'F', 'M', 'I', 'N', '_', 'D', 0,
  /* 10129 */ 'F', 'C', 'U', 'N', '_', 'D', 0,
  /* 10136 */ 'F', 'S', 'U', 'N', '_', 'D', 0,
  /* 10143 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'D', 0,
  /* 10153 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'D', 0,
  /* 10162 */ 'F', 'R', 'C', 'P', '_', 'D', 0,
  /* 10169 */ 'F', 'C', 'E', 'Q', '_', 'D', 0,
  /* 10176 */ 'F', 'S', 'E', 'Q', '_', 'D', 0,
  /* 10183 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'D', 0,
  /* 10193 */ 'F', 'C', 'U', 'E', 'Q', '_', 'D', 0,
  /* 10201 */ 'F', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 10209 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'D', 0,
  /* 10220 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'D', 0,
  /* 10230 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'D', 0,
  /* 10239 */ 'S', 'R', 'A', 'R', '_', 'D', 0,
  /* 10246 */ 'B', 'C', 'L', 'R', '_', 'D', 0,
  /* 10253 */ 'S', 'R', 'L', 'R', '_', 'D', 0,
  /* 10260 */ 'F', 'C', 'O', 'R', '_', 'D', 0,
  /* 10267 */ 'F', 'S', 'O', 'R', '_', 'D', 0,
  /* 10274 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'D', 0,
  /* 10283 */ 'F', 'F', 'Q', 'R', '_', 'D', 0,
  /* 10290 */ 'B', 'I', 'N', 'S', 'R', '_', 'D', 0,
  /* 10298 */ 'I', 'L', 'V', 'R', '_', 'D', 0,
  /* 10305 */ 'F', 'A', 'B', 'S', '_', 'D', 0,
  /* 10312 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'D', 0,
  /* 10321 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 10330 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 10339 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'D', 0,
  /* 10349 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'D', 0,
  /* 10360 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 10369 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'D', 0,
  /* 10379 */ 'M', 'O', 'D', '_', 'S', '_', 'D', 0,
  /* 10387 */ 'C', 'L', 'E', '_', 'S', '_', 'D', 0,
  /* 10395 */ 'A', 'V', 'E', '_', 'S', '_', 'D', 0,
  /* 10403 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'D', 0,
  /* 10412 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'D', 0,
  /* 10421 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'D', 0,
  /* 10430 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'D', 0,
  /* 10439 */ 'M', 'I', 'N', '_', 'S', '_', 'D', 0,
  /* 10447 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'D', 0,
  /* 10456 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'D', 0,
  /* 10465 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'D', 0,
  /* 10474 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'D', 0,
  /* 10483 */ 'S', 'A', 'T', '_', 'S', '_', 'D', 0,
  /* 10491 */ 'C', 'L', 'T', '_', 'S', '_', 'D', 0,
  /* 10499 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 10509 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'D', 0,
  /* 10519 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'D', 0,
  /* 10530 */ 'D', 'I', 'V', '_', 'S', '_', 'D', 0,
  /* 10538 */ 'M', 'A', 'X', '_', 'S', '_', 'D', 0,
  /* 10546 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'D', 0,
  /* 10555 */ 'S', 'P', 'L', 'A', 'T', '_', 'D', 0,
  /* 10563 */ 'B', 'S', 'E', 'T', '_', 'D', 0,
  /* 10570 */ 'F', 'C', 'L', 'T', '_', 'D', 0,
  /* 10577 */ 'F', 'S', 'L', 'T', '_', 'D', 0,
  /* 10584 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'D', 0,
  /* 10594 */ 'F', 'C', 'U', 'L', 'T', '_', 'D', 0,
  /* 10602 */ 'F', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 10610 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'D', 0,
  /* 10621 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'D', 0,
  /* 10631 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'D', 0,
  /* 10640 */ 'P', 'C', 'N', 'T', '_', 'D', 0,
  /* 10647 */ 'F', 'R', 'I', 'N', 'T', '_', 'D', 0,
  /* 10655 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', 0,
  /* 10664 */ 'F', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 10672 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'D', 0,
  /* 10681 */ 'S', 'T', '_', 'D', 0,
  /* 10686 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 10695 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 10704 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'D', 0,
  /* 10714 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'D', 0,
  /* 10725 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 10734 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'D', 0,
  /* 10744 */ 'M', 'O', 'D', '_', 'U', '_', 'D', 0,
  /* 10752 */ 'C', 'L', 'E', '_', 'U', '_', 'D', 0,
  /* 10760 */ 'A', 'V', 'E', '_', 'U', '_', 'D', 0,
  /* 10768 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'D', 0,
  /* 10777 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'D', 0,
  /* 10786 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'D', 0,
  /* 10795 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'D', 0,
  /* 10804 */ 'M', 'I', 'N', '_', 'U', '_', 'D', 0,
  /* 10812 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'D', 0,
  /* 10821 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'D', 0,
  /* 10830 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'D', 0,
  /* 10839 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'D', 0,
  /* 10848 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'D', 0,
  /* 10859 */ 'S', 'A', 'T', '_', 'U', '_', 'D', 0,
  /* 10867 */ 'C', 'L', 'T', '_', 'U', '_', 'D', 0,
  /* 10875 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 10885 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'D', 0,
  /* 10895 */ 'D', 'I', 'V', '_', 'U', '_', 'D', 0,
  /* 10903 */ 'M', 'A', 'X', '_', 'U', '_', 'D', 0,
  /* 10911 */ 'M', 'S', 'U', 'B', 'V', '_', 'D', 0,
  /* 10919 */ 'M', 'A', 'D', 'D', 'V', '_', 'D', 0,
  /* 10927 */ 'P', 'C', 'K', 'E', 'V', '_', 'D', 0,
  /* 10935 */ 'I', 'L', 'V', 'E', 'V', '_', 'D', 0,
  /* 10943 */ 'F', 'D', 'I', 'V', '_', 'D', 0,
  /* 10950 */ 'M', 'U', 'L', 'V', '_', 'D', 0,
  /* 10957 */ 'P', 's', 'e', 'u', 'd', 'o', 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'D', 0,
  /* 10973 */ 'F', 'M', 'A', 'X', '_', 'D', 0,
  /* 10980 */ 'B', 'Z', '_', 'D', 0,
  /* 10985 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'D', 0,
  /* 10994 */ 'B', 'N', 'Z', '_', 'D', 0,
  /* 11000 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'D', 0,
  /* 11009 */ 'L', 'B', 'E', 0,
  /* 11013 */ 'S', 'B', 'E', 0,
  /* 11017 */ 'R', 'E', 'G', '_', 'S', 'E', 'Q', 'U', 'E', 'N', 'C', 'E', 0,
  /* 11030 */ 'S', 'C', 'E', 0,
  /* 11034 */ 'C', 'A', 'C', 'H', 'E', 'E', 0,
  /* 11041 */ 'P', 'R', 'E', 'F', 'E', 0,
  /* 11047 */ 'B', 'G', 'E', 0,
  /* 11051 */ 'T', 'G', 'E', 0,
  /* 11055 */ 'C', 'A', 'C', 'H', 'E', 0,
  /* 11061 */ 'L', 'H', 'E', 0,
  /* 11065 */ 'S', 'H', 'E', 0,
  /* 11069 */ 'B', 'L', 'E', 0,
  /* 11073 */ 'B', 'U', 'N', 'D', 'L', 'E', 0,
  /* 11080 */ 'L', 'L', 'E', 0,
  /* 11084 */ 'L', 'W', 'L', 'E', 0,
  /* 11089 */ 'S', 'W', 'L', 'E', 0,
  /* 11094 */ 'B', 'N', 'E', 0,
  /* 11098 */ 'S', 'N', 'E', 0,
  /* 11102 */ 'T', 'N', 'E', 0,
  /* 11106 */ 'L', 'O', 'C', 'A', 'L', '_', 'E', 'S', 'C', 'A', 'P', 'E', 0,
  /* 11119 */ 'L', 'W', 'R', 'E', 0,
  /* 11124 */ 'S', 'W', 'R', 'E', 0,
  /* 11129 */ 'P', 'A', 'U', 'S', 'E', 0,
  /* 11135 */ 'D', 'B', 'G', '_', 'V', 'A', 'L', 'U', 'E', 0,
  /* 11145 */ 'L', 'W', 'E', 0,
  /* 11149 */ 'S', 'W', 'E', 0,
  /* 11153 */ 'L', 'B', 'u', 'E', 0,
  /* 11158 */ 'L', 'H', 'u', 'E', 0,
  /* 11163 */ 'B', 'C', '1', 'F', 0,
  /* 11168 */ 'I', 'M', 'P', 'L', 'I', 'C', 'I', 'T', '_', 'D', 'E', 'F', 0,
  /* 11181 */ 'P', 'R', 'E', 'F', 0,
  /* 11186 */ 'T', 'L', 'B', 'I', 'N', 'V', 'F', 0,
  /* 11194 */ 'E', 'X', 'T', 'R', 'A', 'C', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 11209 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'S', 'U', 'B', 'R', 'E', 'G', 0,
  /* 11223 */ 'S', 'U', 'B', 'R', 'E', 'G', '_', 'T', 'O', '_', 'R', 'E', 'G', 0,
  /* 11237 */ 'D', 'S', 'B', 'H', 0,
  /* 11242 */ 'W', 'S', 'B', 'H', 0,
  /* 11247 */ 'S', 'E', 'H', 0,
  /* 11251 */ 'L', 'H', 0,
  /* 11254 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', 0,
  /* 11262 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 11275 */ 'P', 'R', 'E', 'C', 'R', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 11287 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', 0,
  /* 11303 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', 0,
  /* 11319 */ 'S', 'U', 'B', 'Q', 'H', '_', 'P', 'H', 0,
  /* 11328 */ 'A', 'D', 'D', 'Q', 'H', '_', 'P', 'H', 0,
  /* 11337 */ 'P', 's', 'e', 'u', 'd', 'o', 'P', 'I', 'C', 'K', '_', 'P', 'H', 0,
  /* 11351 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', 0,
  /* 11359 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', 0,
  /* 11367 */ 'S', 'H', 'R', 'L', '_', 'P', 'H', 0,
  /* 11375 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', 0,
  /* 11385 */ 'M', 'U', 'L', '_', 'P', 'H', 0,
  /* 11392 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', 0,
  /* 11400 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', 0,
  /* 11408 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', 0,
  /* 11424 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', 0,
  /* 11434 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 11445 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'P', 'H', 0,
  /* 11456 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', 0,
  /* 11467 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', 0,
  /* 11478 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 11488 */ 'M', 'U', 'L', '_', 'S', '_', 'P', 'H', 0,
  /* 11497 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 11507 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 11517 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 11527 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', 0,
  /* 11537 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 11547 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'P', 'H', 0,
  /* 11557 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', 0,
  /* 11568 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', 0,
  /* 11584 */ 'S', 'U', 'B', 'U', '_', 'P', 'H', 0,
  /* 11592 */ 'A', 'D', 'D', 'U', '_', 'P', 'H', 0,
  /* 11600 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', 0,
  /* 11609 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', 0,
  /* 11618 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', 0,
  /* 11627 */ 'S', 'H', 'R', 'L', 'V', '_', 'P', 'H', 0,
  /* 11636 */ 'D', 'P', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 11645 */ 'M', 'U', 'L', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 11656 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 11670 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 0,
  /* 11684 */ 'D', 'P', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 11693 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 11705 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 11719 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 11731 */ 'D', 'P', 'A', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 11744 */ 'D', 'P', 'S', 'Q', 'X', '_', 'S', '_', 'W', '_', 'P', 'H', 0,
  /* 11757 */ 'D', 'P', 'A', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 11767 */ 'D', 'P', 'S', 'X', '_', 'W', '_', 'P', 'H', 0,
  /* 11777 */ 'S', 'H', 0,
  /* 11780 */ 'D', 'M', 'U', 'H', 0,
  /* 11785 */ 'S', 'R', 'A', '_', 'H', 0,
  /* 11791 */ 'A', 'D', 'D', '_', 'A', '_', 'H', 0,
  /* 11799 */ 'M', 'I', 'N', '_', 'A', '_', 'H', 0,
  /* 11807 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'H', 0,
  /* 11816 */ 'M', 'A', 'X', '_', 'A', '_', 'H', 0,
  /* 11824 */ 'N', 'L', 'O', 'C', '_', 'H', 0,
  /* 11831 */ 'N', 'L', 'Z', 'C', '_', 'H', 0,
  /* 11838 */ 'S', 'L', 'D', '_', 'H', 0,
  /* 11844 */ 'P', 'C', 'K', 'O', 'D', '_', 'H', 0,
  /* 11852 */ 'I', 'L', 'V', 'O', 'D', '_', 'H', 0,
  /* 11860 */ 'I', 'N', 'S', 'V', 'E', '_', 'H', 0,
  /* 11868 */ 'V', 'S', 'H', 'F', '_', 'H', 0,
  /* 11875 */ 'B', 'N', 'E', 'G', '_', 'H', 0,
  /* 11882 */ 'S', 'R', 'A', 'I', '_', 'H', 0,
  /* 11889 */ 'S', 'L', 'D', 'I', '_', 'H', 0,
  /* 11896 */ 'B', 'N', 'E', 'G', 'I', '_', 'H', 0,
  /* 11904 */ 'S', 'L', 'L', 'I', '_', 'H', 0,
  /* 11911 */ 'S', 'R', 'L', 'I', '_', 'H', 0,
  /* 11918 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'H', 0,
  /* 11927 */ 'C', 'E', 'Q', 'I', '_', 'H', 0,
  /* 11934 */ 'S', 'R', 'A', 'R', 'I', '_', 'H', 0,
  /* 11942 */ 'B', 'C', 'L', 'R', 'I', '_', 'H', 0,
  /* 11950 */ 'S', 'R', 'L', 'R', 'I', '_', 'H', 0,
  /* 11958 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'H', 0,
  /* 11967 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'H', 0,
  /* 11976 */ 'B', 'S', 'E', 'T', 'I', '_', 'H', 0,
  /* 11984 */ 'S', 'U', 'B', 'V', 'I', '_', 'H', 0,
  /* 11992 */ 'A', 'D', 'D', 'V', 'I', '_', 'H', 0,
  /* 12000 */ 'F', 'I', 'L', 'L', '_', 'H', 0,
  /* 12007 */ 'S', 'L', 'L', '_', 'H', 0,
  /* 12013 */ 'S', 'R', 'L', '_', 'H', 0,
  /* 12019 */ 'B', 'I', 'N', 'S', 'L', '_', 'H', 0,
  /* 12027 */ 'I', 'L', 'V', 'L', '_', 'H', 0,
  /* 12034 */ 'F', 'E', 'X', 'D', 'O', '_', 'H', 0,
  /* 12042 */ 'C', 'E', 'Q', '_', 'H', 0,
  /* 12048 */ 'F', 'T', 'Q', '_', 'H', 0,
  /* 12054 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'H', 0,
  /* 12063 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'H', 0,
  /* 12072 */ 'M', 'U', 'L', '_', 'Q', '_', 'H', 0,
  /* 12080 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'H', 0,
  /* 12090 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'H', 0,
  /* 12100 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'H', 0,
  /* 12109 */ 'S', 'R', 'A', 'R', '_', 'H', 0,
  /* 12116 */ 'B', 'C', 'L', 'R', '_', 'H', 0,
  /* 12123 */ 'S', 'R', 'L', 'R', '_', 'H', 0,
  /* 12130 */ 'B', 'I', 'N', 'S', 'R', '_', 'H', 0,
  /* 12138 */ 'I', 'L', 'V', 'R', '_', 'H', 0,
  /* 12145 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 12154 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 12163 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'H', 0,
  /* 12173 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 12182 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'H', 0,
  /* 12192 */ 'M', 'O', 'D', '_', 'S', '_', 'H', 0,
  /* 12200 */ 'C', 'L', 'E', '_', 'S', '_', 'H', 0,
  /* 12208 */ 'A', 'V', 'E', '_', 'S', '_', 'H', 0,
  /* 12216 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'H', 0,
  /* 12225 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'H', 0,
  /* 12234 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'H', 0,
  /* 12243 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'H', 0,
  /* 12252 */ 'M', 'I', 'N', '_', 'S', '_', 'H', 0,
  /* 12260 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'H', 0,
  /* 12269 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'H', 0,
  /* 12278 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', 0,
  /* 12287 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'H', 0,
  /* 12296 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'H', 0,
  /* 12305 */ 'S', 'A', 'T', '_', 'S', '_', 'H', 0,
  /* 12313 */ 'C', 'L', 'T', '_', 'S', '_', 'H', 0,
  /* 12321 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'H', 0,
  /* 12332 */ 'D', 'I', 'V', '_', 'S', '_', 'H', 0,
  /* 12340 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', 0,
  /* 12350 */ 'M', 'A', 'X', '_', 'S', '_', 'H', 0,
  /* 12358 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'H', 0,
  /* 12367 */ 'S', 'P', 'L', 'A', 'T', '_', 'H', 0,
  /* 12375 */ 'B', 'S', 'E', 'T', '_', 'H', 0,
  /* 12382 */ 'P', 'C', 'N', 'T', '_', 'H', 0,
  /* 12389 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', 0,
  /* 12398 */ 'S', 'T', '_', 'H', 0,
  /* 12403 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 12412 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 12421 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'H', 0,
  /* 12431 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 12440 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'H', 0,
  /* 12450 */ 'M', 'O', 'D', '_', 'U', '_', 'H', 0,
  /* 12458 */ 'C', 'L', 'E', '_', 'U', '_', 'H', 0,
  /* 12466 */ 'A', 'V', 'E', '_', 'U', '_', 'H', 0,
  /* 12474 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'H', 0,
  /* 12483 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'H', 0,
  /* 12492 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'H', 0,
  /* 12501 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'H', 0,
  /* 12510 */ 'M', 'I', 'N', '_', 'U', '_', 'H', 0,
  /* 12518 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'H', 0,
  /* 12527 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'H', 0,
  /* 12536 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'H', 0,
  /* 12545 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'H', 0,
  /* 12554 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'H', 0,
  /* 12565 */ 'S', 'A', 'T', '_', 'U', '_', 'H', 0,
  /* 12573 */ 'C', 'L', 'T', '_', 'U', '_', 'H', 0,
  /* 12581 */ 'D', 'I', 'V', '_', 'U', '_', 'H', 0,
  /* 12589 */ 'M', 'A', 'X', '_', 'U', '_', 'H', 0,
  /* 12597 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'H', 0,
  /* 12606 */ 'M', 'S', 'U', 'B', 'V', '_', 'H', 0,
  /* 12614 */ 'M', 'A', 'D', 'D', 'V', '_', 'H', 0,
  /* 12622 */ 'P', 'C', 'K', 'E', 'V', '_', 'H', 0,
  /* 12630 */ 'I', 'L', 'V', 'E', 'V', '_', 'H', 0,
  /* 12638 */ 'M', 'U', 'L', 'V', '_', 'H', 0,
  /* 12645 */ 'B', 'Z', '_', 'H', 0,
  /* 12650 */ 'B', 'N', 'Z', '_', 'H', 0,
  /* 12656 */ 'S', 'Y', 'N', 'C', 'I', 0,
  /* 12662 */ 'D', 'I', 0,
  /* 12665 */ 'T', 'G', 'E', 'I', 0,
  /* 12670 */ 'T', 'N', 'E', 'I', 0,
  /* 12675 */ 'D', 'A', 'H', 'I', 0,
  /* 12680 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'H', 'I', 0,
  /* 12691 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', 0,
  /* 12704 */ 'P', 'H', 'I', 0,
  /* 12708 */ 'M', 'T', 'H', 'I', 0,
  /* 12713 */ 'T', 'E', 'Q', 'I', 0,
  /* 12718 */ 'D', 'A', 'T', 'I', 0,
  /* 12723 */ 'T', 'L', 'T', 'I', 0,
  /* 12728 */ 'D', 'A', 'U', 'I', 0,
  /* 12733 */ 'T', 'L', 'B', 'W', 'I', 0,
  /* 12739 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'I', 0,
  /* 12750 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'I', 0,
  /* 12761 */ 'M', 'O', 'V', 'F', '_', 'I', 0,
  /* 12768 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'I', 0,
  /* 12787 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'I', 0,
  /* 12796 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'I', 0,
  /* 12805 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'I', 0,
  /* 12820 */ 'M', 'O', 'V', 'T', '_', 'I', 0,
  /* 12827 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'I', 0,
  /* 12846 */ 'J', 0,
  /* 12848 */ 'B', 'R', 'E', 'A', 'K', 0,
  /* 12854 */ 'B', 'A', 'L', 0,
  /* 12858 */ 'J', 'A', 'L', 0,
  /* 12862 */ 'B', 'G', 'E', 'Z', 'A', 'L', 0,
  /* 12869 */ 'B', 'L', 'T', 'Z', 'A', 'L', 0,
  /* 12876 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 12891 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 12905 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 0,
  /* 12920 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 12931 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', 0,
  /* 12942 */ 'L', 'D', 'L', 0,
  /* 12946 */ 'S', 'D', 'L', 0,
  /* 12950 */ 'G', 'C', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 12959 */ 'E', 'H', '_', 'L', 'A', 'B', 'E', 'L', 0,
  /* 12968 */ 'B', 'G', 'E', 'L', 0,
  /* 12973 */ 'B', 'L', 'E', 'L', 0,
  /* 12978 */ 'B', 'N', 'E', 'L', 0,
  /* 12983 */ 'B', 'C', '1', 'F', 'L', 0,
  /* 12989 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 13002 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 13015 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 13027 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', 0,
  /* 13041 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', 0,
  /* 13050 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', 0,
  /* 13058 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'L', 0,
  /* 13066 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'L', 0,
  /* 13074 */ 'K', 'I', 'L', 'L', 0,
  /* 13079 */ 'D', 'S', 'L', 'L', 0,
  /* 13084 */ 'D', 'R', 'O', 'L', 0,
  /* 13089 */ 'B', 'E', 'Q', 'L', 0,
  /* 13094 */ 'D', 'S', 'R', 'L', 0,
  /* 13099 */ 'B', 'C', '1', 'T', 'L', 0,
  /* 13105 */ 'B', 'G', 'T', 'L', 0,
  /* 13110 */ 'B', 'L', 'T', 'L', 0,
  /* 13115 */ 'B', 'G', 'E', 'U', 'L', 0,
  /* 13121 */ 'B', 'L', 'E', 'U', 'L', 0,
  /* 13127 */ 'D', 'M', 'U', 'L', 0,
  /* 13132 */ 'B', 'G', 'T', 'U', 'L', 0,
  /* 13138 */ 'B', 'L', 'T', 'U', 'L', 0,
  /* 13144 */ 'L', 'W', 'L', 0,
  /* 13148 */ 'S', 'W', 'L', 0,
  /* 13152 */ 'B', 'G', 'E', 'Z', 'L', 0,
  /* 13158 */ 'B', 'L', 'E', 'Z', 'L', 0,
  /* 13164 */ 'B', 'G', 'T', 'Z', 'L', 0,
  /* 13170 */ 'B', 'L', 'T', 'Z', 'L', 0,
  /* 13176 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'L', 0,
  /* 13192 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'L', 0,
  /* 13206 */ 'L', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 13214 */ 'S', 'D', 'C', '1', '_', 'M', 'M', 0,
  /* 13222 */ 'C', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 13230 */ 'M', 'F', 'C', '1', '_', 'M', 'M', 0,
  /* 13238 */ 'M', 'F', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 13247 */ 'M', 'T', 'H', 'C', '1', '_', 'M', 'M', 0,
  /* 13256 */ 'C', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 13264 */ 'M', 'T', 'C', '1', '_', 'M', 'M', 0,
  /* 13272 */ 'L', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 13280 */ 'S', 'W', 'C', '1', '_', 'M', 'M', 0,
  /* 13288 */ 'L', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 13297 */ 'S', 'U', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 13306 */ 'L', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 13315 */ 'S', 'W', 'X', 'C', '1', '_', 'M', 'M', 0,
  /* 13324 */ 'N', 'M', 'S', 'U', 'B', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13337 */ 'N', 'M', 'A', 'D', 'D', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13350 */ 'M', 'O', 'V', 'F', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13362 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13376 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13390 */ 'F', 'C', 'M', 'P', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13402 */ 'C', 'V', 'T', '_', 'S', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13415 */ 'M', 'O', 'V', 'T', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13427 */ 'F', 'M', 'O', 'V', '_', 'D', '3', '2', '_', 'M', 'M', 0,
  /* 13439 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'M', 'M', 0,
  /* 13451 */ 'L', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 13460 */ 'S', 'W', 'M', '3', '2', '_', 'M', 'M', 0,
  /* 13469 */ 'F', 'C', 'M', 'P', '_', 'S', '3', '2', '_', 'M', 'M', 0,
  /* 13481 */ 'A', 'D', 'D', 'I', 'U', 'R', '2', '_', 'M', 'M', 0,
  /* 13492 */ 'C', 'V', 'T', '_', 'L', '_', 'D', '6', '4', '_', 'M', 'M', 0,
  /* 13505 */ 'A', 'D', 'D', 'I', 'U', 'S', '5', '_', 'M', 'M', 0,
  /* 13516 */ 'S', 'B', '1', '6', '_', 'M', 'M', 0,
  /* 13524 */ 'J', 'R', 'C', '1', '6', '_', 'M', 'M', 0,
  /* 13533 */ 'A', 'N', 'D', '1', '6', '_', 'M', 'M', 0,
  /* 13542 */ 'M', 'O', 'V', 'E', '1', '6', '_', 'M', 'M', 0,
  /* 13552 */ 'S', 'H', '1', '6', '_', 'M', 'M', 0,
  /* 13560 */ 'A', 'N', 'D', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 13570 */ 'M', 'F', 'H', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 13580 */ 'L', 'I', '1', '6', '_', 'M', 'M', 0,
  /* 13588 */ 'B', 'R', 'E', 'A', 'K', '1', '6', '_', 'M', 'M', 0,
  /* 13599 */ 'S', 'L', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 13608 */ 'S', 'R', 'L', '1', '6', '_', 'M', 'M', 0,
  /* 13617 */ 'L', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 13626 */ 'S', 'W', 'M', '1', '6', '_', 'M', 'M', 0,
  /* 13635 */ 'M', 'F', 'L', 'O', '1', '6', '_', 'M', 'M', 0,
  /* 13645 */ 'S', 'D', 'B', 'B', 'P', '1', '6', '_', 'M', 'M', 0,
  /* 13656 */ 'J', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 13664 */ 'J', 'A', 'L', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 13674 */ 'X', 'O', 'R', '1', '6', '_', 'M', 'M', 0,
  /* 13683 */ 'J', 'A', 'L', 'R', 'S', '1', '6', '_', 'M', 'M', 0,
  /* 13694 */ 'N', 'O', 'T', '1', '6', '_', 'M', 'M', 0,
  /* 13703 */ 'L', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 13712 */ 'S', 'U', 'B', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 13722 */ 'A', 'D', 'D', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 13732 */ 'L', 'H', 'U', '1', '6', '_', 'M', 'M', 0,
  /* 13741 */ 'L', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 13749 */ 'S', 'W', '1', '6', '_', 'M', 'M', 0,
  /* 13757 */ 'B', 'N', 'E', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 13767 */ 'B', 'E', 'Q', 'Z', '1', '6', '_', 'M', 'M', 0,
  /* 13777 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', '_', 'M', 'M', 0,
  /* 13795 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', 'A', '_', 'M', 'M', 0,
  /* 13814 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', '_', 'M', 'M', 0,
  /* 13832 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 'A', '_', 'M', 'M', 0,
  /* 13851 */ 'S', 'R', 'A', '_', 'M', 'M', 0,
  /* 13858 */ 'S', 'E', 'B', '_', 'M', 'M', 0,
  /* 13865 */ 'E', 'H', 'B', '_', 'M', 'M', 0,
  /* 13872 */ 'L', 'B', '_', 'M', 'M', 0,
  /* 13878 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'E', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13893 */ 'C', 'M', 'P', 'U', '_', 'L', 'E', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13907 */ 'P', 'I', 'C', 'K', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13918 */ 'S', 'H', 'L', 'L', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13929 */ 'R', 'E', 'P', 'L', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13940 */ 'S', 'H', 'R', 'L', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13951 */ 'C', 'M', 'P', 'G', 'U', '_', 'E', 'Q', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13966 */ 'C', 'M', 'P', 'U', '_', 'E', 'Q', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13980 */ 'S', 'U', 'B', 'U', '_', 'S', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 13993 */ 'A', 'D', 'D', 'U', '_', 'S', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14006 */ 'C', 'M', 'P', 'G', 'U', '_', 'L', 'T', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14021 */ 'C', 'M', 'P', 'U', '_', 'L', 'T', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14035 */ 'S', 'U', 'B', 'U', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14046 */ 'A', 'D', 'D', 'U', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14057 */ 'S', 'H', 'L', 'L', 'V', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14069 */ 'R', 'E', 'P', 'L', 'V', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14081 */ 'S', 'H', 'R', 'L', 'V', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14093 */ 'R', 'A', 'D', 'D', 'U', '_', 'W', '_', 'Q', 'B', '_', 'M', 'M', 0,
  /* 14107 */ 'S', 'B', '_', 'M', 'M', 0,
  /* 14113 */ 'M', 'O', 'D', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 14123 */ 'F', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 14131 */ 'M', 'S', 'U', 'B', '_', 'M', 'M', 0,
  /* 14139 */ 'S', 'Y', 'N', 'C', '_', 'M', 'M', 0,
  /* 14147 */ 'A', 'D', 'D', 'I', 'U', 'P', 'C', '_', 'M', 'M', 0,
  /* 14158 */ 'A', 'D', 'D', 'S', 'C', '_', 'M', 'M', 0,
  /* 14167 */ 'A', 'D', 'D', 'W', 'C', '_', 'M', 'M', 0,
  /* 14176 */ 'B', 'N', 'E', 'Z', 'C', '_', 'M', 'M', 0,
  /* 14185 */ 'B', 'E', 'Q', 'Z', 'C', '_', 'M', 'M', 0,
  /* 14194 */ 'F', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 14202 */ 'M', 'A', 'D', 'D', '_', 'M', 'M', 0,
  /* 14210 */ 'A', 'N', 'D', '_', 'M', 'M', 0,
  /* 14217 */ 'L', 'B', 'E', '_', 'M', 'M', 0,
  /* 14224 */ 'S', 'B', 'E', '_', 'M', 'M', 0,
  /* 14231 */ 'S', 'C', 'E', '_', 'M', 'M', 0,
  /* 14238 */ 'C', 'A', 'C', 'H', 'E', 'E', '_', 'M', 'M', 0,
  /* 14248 */ 'P', 'R', 'E', 'F', 'E', '_', 'M', 'M', 0,
  /* 14257 */ 'T', 'G', 'E', '_', 'M', 'M', 0,
  /* 14264 */ 'C', 'A', 'C', 'H', 'E', '_', 'M', 'M', 0,
  /* 14273 */ 'L', 'H', 'E', '_', 'M', 'M', 0,
  /* 14280 */ 'S', 'H', 'E', '_', 'M', 'M', 0,
  /* 14287 */ 'L', 'L', 'E', '_', 'M', 'M', 0,
  /* 14294 */ 'L', 'W', 'L', 'E', '_', 'M', 'M', 0,
  /* 14302 */ 'S', 'W', 'L', 'E', '_', 'M', 'M', 0,
  /* 14310 */ 'B', 'N', 'E', '_', 'M', 'M', 0,
  /* 14317 */ 'T', 'N', 'E', '_', 'M', 'M', 0,
  /* 14324 */ 'L', 'W', 'R', 'E', '_', 'M', 'M', 0,
  /* 14332 */ 'S', 'W', 'R', 'E', '_', 'M', 'M', 0,
  /* 14340 */ 'P', 'A', 'U', 'S', 'E', '_', 'M', 'M', 0,
  /* 14349 */ 'L', 'W', 'E', '_', 'M', 'M', 0,
  /* 14356 */ 'S', 'W', 'E', '_', 'M', 'M', 0,
  /* 14363 */ 'L', 'B', 'u', 'E', '_', 'M', 'M', 0,
  /* 14371 */ 'L', 'H', 'u', 'E', '_', 'M', 'M', 0,
  /* 14379 */ 'B', 'C', '1', 'F', '_', 'M', 'M', 0,
  /* 14387 */ 'P', 'R', 'E', 'F', '_', 'M', 'M', 0,
  /* 14395 */ 'F', 'N', 'E', 'G', '_', 'M', 'M', 0,
  /* 14403 */ 'W', 'S', 'B', 'H', '_', 'M', 'M', 0,
  /* 14411 */ 'S', 'E', 'H', '_', 'M', 'M', 0,
  /* 14418 */ 'L', 'H', '_', 'M', 'M', 0,
  /* 14424 */ 'S', 'H', 'R', 'A', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14435 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'Q', 'B', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14451 */ 'P', 'R', 'E', 'C', 'R', 'Q', 'U', '_', 'S', '_', 'Q', 'B', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14470 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14483 */ 'P', 'I', 'C', 'K', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14494 */ 'S', 'H', 'L', 'L', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14505 */ 'R', 'E', 'P', 'L', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14516 */ 'P', 'A', 'C', 'K', 'R', 'L', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14529 */ 'S', 'U', 'B', 'Q', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14540 */ 'A', 'D', 'D', 'Q', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14551 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14564 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14577 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14591 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14605 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14618 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14631 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14644 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14657 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14671 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14684 */ 'S', 'H', 'R', 'A', 'V', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14696 */ 'S', 'H', 'L', 'L', 'V', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14708 */ 'R', 'E', 'P', 'L', 'V', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14720 */ 'D', 'P', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14735 */ 'M', 'U', 'L', 'S', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14752 */ 'D', 'P', 'S', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', '_', 'M', 'M', 0,
  /* 14767 */ 'S', 'H', '_', 'M', 'M', 0,
  /* 14773 */ 'E', 'X', 'T', 'R', '_', 'S', '_', 'H', '_', 'M', 'M', 0,
  /* 14785 */ 'E', 'X', 'T', 'R', 'V', '_', 'S', '_', 'H', '_', 'M', 'M', 0,
  /* 14798 */ 'D', 'I', '_', 'M', 'M', 0,
  /* 14804 */ 'T', 'G', 'E', 'I', '_', 'M', 'M', 0,
  /* 14812 */ 'T', 'N', 'E', 'I', '_', 'M', 'M', 0,
  /* 14820 */ 'M', 'F', 'H', 'I', '_', 'M', 'M', 0,
  /* 14828 */ 'M', 'T', 'H', 'I', '_', 'M', 'M', 0,
  /* 14836 */ 'T', 'E', 'Q', 'I', '_', 'M', 'M', 0,
  /* 14844 */ 'T', 'L', 'T', 'I', '_', 'M', 'M', 0,
  /* 14852 */ 'T', 'L', 'B', 'W', 'I', '_', 'M', 'M', 0,
  /* 14861 */ 'M', 'O', 'V', 'F', '_', 'I', '_', 'M', 'M', 0,
  /* 14871 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'M', 'M', 0,
  /* 14881 */ 'M', 'O', 'V', 'T', '_', 'I', '_', 'M', 'M', 0,
  /* 14891 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'M', 'M', 0,
  /* 14901 */ 'J', '_', 'M', 'M', 0,
  /* 14906 */ 'B', 'R', 'E', 'A', 'K', '_', 'M', 'M', 0,
  /* 14915 */ 'J', 'A', 'L', '_', 'M', 'M', 0,
  /* 14922 */ 'B', 'G', 'E', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 14932 */ 'B', 'L', 'T', 'Z', 'A', 'L', '_', 'M', 'M', 0,
  /* 14942 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 14960 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 14977 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 14995 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 15009 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'L', '_', 'M', 'M', 0,
  /* 15023 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 15039 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 15055 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 15070 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'L', '_', 'M', 'M', 0,
  /* 15087 */ 'S', 'Y', 'S', 'C', 'A', 'L', 'L', '_', 'M', 'M', 0,
  /* 15098 */ 'S', 'L', 'L', '_', 'M', 'M', 0,
  /* 15105 */ 'S', 'R', 'L', '_', 'M', 'M', 0,
  /* 15112 */ 'F', 'M', 'U', 'L', '_', 'M', 'M', 0,
  /* 15120 */ 'L', 'W', 'L', '_', 'M', 'M', 0,
  /* 15127 */ 'S', 'W', 'L', '_', 'M', 'M', 0,
  /* 15134 */ 'L', 'W', 'M', '_', 'M', 'M', 0,
  /* 15141 */ 'S', 'W', 'M', '_', 'M', 'M', 0,
  /* 15148 */ 'C', 'L', 'O', '_', 'M', 'M', 0,
  /* 15155 */ 'M', 'F', 'L', 'O', '_', 'M', 'M', 0,
  /* 15163 */ 'S', 'H', 'I', 'L', 'O', '_', 'M', 'M', 0,
  /* 15172 */ 'M', 'T', 'L', 'O', '_', 'M', 'M', 0,
  /* 15180 */ 'S', 'D', 'B', 'B', 'P', '_', 'M', 'M', 0,
  /* 15189 */ 'T', 'L', 'B', 'P', '_', 'M', 'M', 0,
  /* 15197 */ 'E', 'X', 'T', 'P', 'D', 'P', '_', 'M', 'M', 0,
  /* 15207 */ 'M', 'O', 'V', 'E', 'P', '_', 'M', 'M', 0,
  /* 15216 */ 'L', 'W', 'G', 'P', '_', 'M', 'M', 0,
  /* 15224 */ 'M', 'T', 'H', 'L', 'I', 'P', '_', 'M', 'M', 0,
  /* 15234 */ 'S', 'S', 'N', 'O', 'P', '_', 'M', 'M', 0,
  /* 15243 */ 'A', 'D', 'D', 'I', 'U', 'R', '1', 'S', 'P', '_', 'M', 'M', 0,
  /* 15256 */ 'R', 'D', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15265 */ 'W', 'R', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15274 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15286 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15298 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15310 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15322 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15334 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15346 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15358 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15371 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15384 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', '_', 'M', 'M', 0,
  /* 15397 */ 'A', 'D', 'D', 'I', 'U', 'S', 'P', '_', 'M', 'M', 0,
  /* 15408 */ 'L', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 15416 */ 'S', 'W', 'S', 'P', '_', 'M', 'M', 0,
  /* 15424 */ 'E', 'X', 'T', 'P', '_', 'M', 'M', 0,
  /* 15432 */ 'L', 'W', 'P', '_', 'M', 'M', 0,
  /* 15439 */ 'S', 'W', 'P', '_', 'M', 'M', 0,
  /* 15446 */ 'B', 'E', 'Q', '_', 'M', 'M', 0,
  /* 15453 */ 'T', 'E', 'Q', '_', 'M', 'M', 0,
  /* 15460 */ 'T', 'L', 'B', 'R', '_', 'M', 'M', 0,
  /* 15468 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 15486 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 15503 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 15521 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 15535 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', '_', 'M', 'M', 0,
  /* 15549 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 15565 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 15581 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 15596 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', '_', 'M', 'M', 0,
  /* 15613 */ 'J', 'R', '_', 'M', 'M', 0,
  /* 15619 */ 'J', 'A', 'L', 'R', '_', 'M', 'M', 0,
  /* 15627 */ 'N', 'O', 'R', '_', 'M', 'M', 0,
  /* 15634 */ 'X', 'O', 'R', '_', 'M', 'M', 0,
  /* 15641 */ 'R', 'O', 'T', 'R', '_', 'M', 'M', 0,
  /* 15649 */ 'T', 'L', 'B', 'W', 'R', '_', 'M', 'M', 0,
  /* 15658 */ 'R', 'D', 'H', 'W', 'R', '_', 'M', 'M', 0,
  /* 15667 */ 'L', 'W', 'R', '_', 'M', 'M', 0,
  /* 15674 */ 'S', 'W', 'R', '_', 'M', 'M', 0,
  /* 15681 */ 'F', 'A', 'B', 'S', '_', 'M', 'M', 0,
  /* 15689 */ 'J', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 15697 */ 'B', 'G', 'E', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 15708 */ 'B', 'L', 'T', 'Z', 'A', 'L', 'S', '_', 'M', 'M', 0,
  /* 15719 */ 'I', 'N', 'S', '_', 'M', 'M', 0,
  /* 15726 */ 'J', 'A', 'L', 'R', 'S', '_', 'M', 'M', 0,
  /* 15735 */ 'L', 'W', 'X', 'S', '_', 'M', 'M', 0,
  /* 15743 */ 'F', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 15753 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', '_', 'M', 'M', 0,
  /* 15764 */ 'F', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 15774 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 15785 */ 'C', 'V', 'T', '_', 'D', '_', 'S', '_', 'M', 'M', 0,
  /* 15796 */ 'M', 'O', 'V', 'F', '_', 'S', '_', 'M', 'M', 0,
  /* 15806 */ 'F', 'N', 'E', 'G', '_', 'S', '_', 'M', 'M', 0,
  /* 15816 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 15828 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', '_', 'M', 'M', 0,
  /* 15840 */ 'F', 'M', 'U', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 15850 */ 'C', 'V', 'T', '_', 'L', '_', 'S', '_', 'M', 'M', 0,
  /* 15861 */ 'F', 'A', 'B', 'S', '_', 'S', '_', 'M', 'M', 0,
  /* 15871 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 15882 */ 'M', 'O', 'V', 'T', '_', 'S', '_', 'M', 'M', 0,
  /* 15892 */ 'F', 'D', 'I', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 15902 */ 'F', 'M', 'O', 'V', '_', 'S', '_', 'M', 'M', 0,
  /* 15912 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 15925 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 15938 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 15950 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 15963 */ 'C', 'V', 'T', '_', 'W', '_', 'S', '_', 'M', 'M', 0,
  /* 15974 */ 'B', 'C', '1', 'T', '_', 'M', 'M', 0,
  /* 15982 */ 'D', 'E', 'R', 'E', 'T', '_', 'M', 'M', 0,
  /* 15991 */ 'W', 'A', 'I', 'T', '_', 'M', 'M', 0,
  /* 15999 */ 'S', 'L', 'T', '_', 'M', 'M', 0,
  /* 16006 */ 'T', 'L', 'T', '_', 'M', 'M', 0,
  /* 16013 */ 'M', 'U', 'L', 'T', '_', 'M', 'M', 0,
  /* 16021 */ 'F', 'S', 'Q', 'R', 'T', '_', 'M', 'M', 0,
  /* 16030 */ 'E', 'X', 'T', '_', 'M', 'M', 0,
  /* 16037 */ 'M', 'S', 'U', 'B', 'U', '_', 'M', 'M', 0,
  /* 16046 */ 'M', 'A', 'D', 'D', 'U', '_', 'M', 'M', 0,
  /* 16055 */ 'T', 'G', 'E', 'U', '_', 'M', 'M', 0,
  /* 16063 */ 'T', 'G', 'E', 'I', 'U', '_', 'M', 'M', 0,
  /* 16072 */ 'T', 'L', 'T', 'I', 'U', '_', 'M', 'M', 0,
  /* 16081 */ 'T', 'L', 'T', 'U', '_', 'M', 'M', 0,
  /* 16089 */ 'L', 'W', 'U', '_', 'M', 'M', 0,
  /* 16096 */ 'S', 'R', 'A', 'V', '_', 'M', 'M', 0,
  /* 16104 */ 'B', 'I', 'T', 'R', 'E', 'V', '_', 'M', 'M', 0,
  /* 16114 */ 'F', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 16122 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 16130 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', 0,
  /* 16138 */ 'S', 'L', 'L', 'V', '_', 'M', 'M', 0,
  /* 16146 */ 'S', 'R', 'L', 'V', '_', 'M', 'M', 0,
  /* 16154 */ 'S', 'H', 'I', 'L', 'O', 'V', '_', 'M', 'M', 0,
  /* 16164 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', '_', 'M', 'M', 0,
  /* 16175 */ 'E', 'X', 'T', 'P', 'V', '_', 'M', 'M', 0,
  /* 16184 */ 'R', 'O', 'T', 'R', 'V', '_', 'M', 'M', 0,
  /* 16193 */ 'I', 'N', 'S', 'V', '_', 'M', 'M', 0,
  /* 16201 */ 'L', 'W', '_', 'M', 'M', 0,
  /* 16207 */ 'S', 'W', '_', 'M', 'M', 0,
  /* 16213 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', '_', 'M', 'M', 0,
  /* 16226 */ 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'M', 'M', 0,
  /* 16237 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'M', 'M', 0,
  /* 16248 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 0,
  /* 16263 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', '_', 'M', 'M', 0,
  /* 16281 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 16291 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 16306 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', '_', 'M', 'M', 0,
  /* 16321 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 16332 */ 'E', 'X', 'T', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 16342 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 16354 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 16366 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 16379 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', '_', 'M', 'M', 0,
  /* 16392 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16405 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16419 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16431 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16443 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16455 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16467 */ 'C', 'V', 'T', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16478 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', '_', 'M', 'M', 0,
  /* 16491 */ 'C', 'V', 'T', '_', 'W', '_', 'M', 'M', 0,
  /* 16500 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', '_', 'M', 'M', 0,
  /* 16511 */ 'P', 'R', 'E', 'F', 'X', '_', 'M', 'M', 0,
  /* 16520 */ 'L', 'H', 'X', '_', 'M', 'M', 0,
  /* 16527 */ 'J', 'A', 'L', 'X', '_', 'M', 'M', 0,
  /* 16535 */ 'L', 'B', 'U', 'X', '_', 'M', 'M', 0,
  /* 16543 */ 'L', 'W', 'X', '_', 'M', 'M', 0,
  /* 16550 */ 'B', 'G', 'E', 'Z', '_', 'M', 'M', 0,
  /* 16558 */ 'B', 'L', 'E', 'Z', '_', 'M', 'M', 0,
  /* 16566 */ 'C', 'L', 'Z', '_', 'M', 'M', 0,
  /* 16573 */ 'B', 'G', 'T', 'Z', '_', 'M', 'M', 0,
  /* 16581 */ 'B', 'L', 'T', 'Z', '_', 'M', 'M', 0,
  /* 16589 */ 'A', 'D', 'D', 'i', '_', 'M', 'M', 0,
  /* 16597 */ 'A', 'N', 'D', 'i', '_', 'M', 'M', 0,
  /* 16605 */ 'X', 'O', 'R', 'i', '_', 'M', 'M', 0,
  /* 16613 */ 'S', 'L', 'T', 'i', '_', 'M', 'M', 0,
  /* 16621 */ 'L', 'U', 'i', '_', 'M', 'M', 0,
  /* 16628 */ 'L', 'B', 'u', '_', 'M', 'M', 0,
  /* 16635 */ 'S', 'U', 'B', 'u', '_', 'M', 'M', 0,
  /* 16643 */ 'A', 'D', 'D', 'u', '_', 'M', 'M', 0,
  /* 16651 */ 'L', 'H', 'u', '_', 'M', 'M', 0,
  /* 16658 */ 'S', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 16666 */ 'M', 'U', 'L', 'T', 'u', '_', 'M', 'M', 0,
  /* 16675 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', '_', 'M', 'M', 0,
  /* 16688 */ 'S', 'L', 'T', 'i', 'u', '_', 'M', 'M', 0,
  /* 16697 */ 'I', 'N', 'L', 'I', 'N', 'E', 'A', 'S', 'M', 0,
  /* 16707 */ 'D', 'I', 'N', 'S', 'M', 0,
  /* 16713 */ 'D', 'E', 'X', 'T', 'M', 0,
  /* 16719 */ 'B', 'A', 'L', 'I', 'G', 'N', 0,
  /* 16726 */ 'D', 'A', 'L', 'I', 'G', 'N', 0,
  /* 16733 */ 'D', 'M', 'F', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 16746 */ 'D', 'M', 'T', 'C', '2', '_', 'O', 'C', 'T', 'E', 'O', 'N', 0,
  /* 16759 */ 'C', 'F', 'I', '_', 'I', 'N', 'S', 'T', 'R', 'U', 'C', 'T', 'I', 'O', 'N', 0,
  /* 16775 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'D', 'O', 'W', 'N', 0,
  /* 16792 */ 'F', 'E', 'X', 'P', '2', '_', 'D', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16809 */ 'F', 'E', 'X', 'P', '2', '_', 'W', '_', '1', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16826 */ 'B', 'P', 'O', 'S', 'G', 'E', '3', '2', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16842 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16865 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16889 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16912 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16935 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16959 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '6', '4', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16982 */ 'S', 'N', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 16995 */ 'S', 'Z', '_', 'B', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17007 */ 'B', 'S', 'E', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17022 */ 'F', 'I', 'L', 'L', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17037 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17054 */ 'C', 'O', 'P', 'Y', '_', 'F', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17069 */ 'B', 'S', 'E', 'L', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17083 */ 'A', 'N', 'D', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17098 */ 'N', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17113 */ 'X', 'O', 'R', '_', 'V', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17128 */ 'S', 'N', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17141 */ 'S', 'Z', '_', 'D', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17153 */ 'B', 'S', 'E', 'L', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17167 */ 'A', 'N', 'D', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17182 */ 'N', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17197 */ 'X', 'O', 'R', '_', 'V', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17212 */ 'S', 'N', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17225 */ 'S', 'Z', '_', 'H', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17237 */ 'S', 'N', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17250 */ 'S', 'Z', '_', 'V', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17262 */ 'B', 'S', 'E', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17277 */ 'F', 'I', 'L', 'L', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17292 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17309 */ 'C', 'O', 'P', 'Y', '_', 'F', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17324 */ 'B', 'S', 'E', 'L', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17338 */ 'A', 'N', 'D', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17353 */ 'N', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17368 */ 'X', 'O', 'R', '_', 'V', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17383 */ 'S', 'N', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17396 */ 'S', 'Z', '_', 'W', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17408 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'B', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17429 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17451 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'D', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17472 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'H', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17493 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'F', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17515 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', '_', 'V', 'I', 'D', 'X', '_', 'P', 'S', 'E', 'U', 'D', 'O', 0,
  /* 17536 */ 'D', 'C', 'L', 'O', 0,
  /* 17541 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'F', 'L', 'O', 0,
  /* 17552 */ 'S', 'H', 'I', 'L', 'O', 0,
  /* 17558 */ 'M', 'T', 'L', 'O', 0,
  /* 17563 */ 'S', 'T', 'A', 'C', 'K', 'M', 'A', 'P', 0,
  /* 17572 */ 'T', 'R', 'A', 'P', 0,
  /* 17577 */ 'D', 'B', 'I', 'T', 'S', 'W', 'A', 'P', 0,
  /* 17586 */ 'S', 'D', 'B', 'B', 'P', 0,
  /* 17592 */ 'T', 'L', 'B', 'P', 0,
  /* 17597 */ 'E', 'X', 'T', 'P', 'D', 'P', 0,
  /* 17604 */ 'M', 'T', 'H', 'L', 'I', 'P', 0,
  /* 17611 */ 'S', 'S', 'N', 'O', 'P', 0,
  /* 17617 */ 'D', 'P', 'O', 'P', 0,
  /* 17622 */ 'F', 'A', 'U', 'L', 'T', 'I', 'N', 'G', '_', 'L', 'O', 'A', 'D', '_', 'O', 'P', 0,
  /* 17639 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'O', 'P', 0,
  /* 17652 */ 'L', 'O', 'A', 'D', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 17666 */ 'S', 'T', 'O', 'R', 'E', '_', 'A', 'C', 'C', '6', '4', 'D', 'S', 'P', 0,
  /* 17681 */ 'R', 'D', 'D', 'S', 'P', 0,
  /* 17687 */ 'W', 'R', 'D', 'S', 'P', 0,
  /* 17693 */ 'M', 'S', 'U', 'B', '_', 'D', 'S', 'P', 0,
  /* 17702 */ 'M', 'A', 'D', 'D', '_', 'D', 'S', 'P', 0,
  /* 17711 */ 'L', 'O', 'A', 'D', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 17726 */ 'S', 'T', 'O', 'R', 'E', '_', 'C', 'C', 'O', 'N', 'D', '_', 'D', 'S', 'P', 0,
  /* 17742 */ 'M', 'F', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 17751 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'T', 'L', 'O', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 17768 */ 'M', 'T', 'H', 'I', '_', 'D', 'S', 'P', 0,
  /* 17777 */ 'M', 'F', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 17786 */ 'M', 'T', 'L', 'O', '_', 'D', 'S', 'P', 0,
  /* 17795 */ 'M', 'U', 'L', 'T', '_', 'D', 'S', 'P', 0,
  /* 17804 */ 'M', 'S', 'U', 'B', 'U', '_', 'D', 'S', 'P', 0,
  /* 17814 */ 'M', 'A', 'D', 'D', 'U', '_', 'D', 'S', 'P', 0,
  /* 17824 */ 'M', 'U', 'L', 'T', 'U', '_', 'D', 'S', 'P', 0,
  /* 17834 */ 'J', 'R', 'A', 'D', 'D', 'I', 'U', 'S', 'P', 0,
  /* 17844 */ 'E', 'X', 'T', 'P', 0,
  /* 17849 */ 'A', 'D', 'J', 'C', 'A', 'L', 'L', 'S', 'T', 'A', 'C', 'K', 'U', 'P', 0,
  /* 17864 */ 'B', 'E', 'Q', 0,
  /* 17868 */ 'S', 'E', 'Q', 0,
  /* 17872 */ 'T', 'E', 'Q', 0,
  /* 17876 */ 'T', 'L', 'B', 'R', 0,
  /* 17881 */ 'M', 'U', 'L', 'E', 'U', '_', 'S', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 17896 */ 'P', 'R', 'E', 'C', 'E', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 17910 */ 'P', 'R', 'E', 'C', 'E', 'Q', 'U', '_', 'P', 'H', '_', 'Q', 'B', 'R', 0,
  /* 17925 */ 'D', 'P', 'A', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 17936 */ 'D', 'P', 'S', 'U', '_', 'H', '_', 'Q', 'B', 'R', 0,
  /* 17947 */ 'G', '_', 'B', 'R', 0,
  /* 17952 */ 'B', 'A', 'L', '_', 'B', 'R', 0,
  /* 17959 */ 'L', 'D', 'R', 0,
  /* 17963 */ 'S', 'D', 'R', 0,
  /* 17967 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'F', 'U', 'N', 'C', 'T', 'I', 'O', 'N', '_', 'E', 'N', 'T', 'E', 'R', 0,
  /* 17992 */ 'M', 'A', 'Q', '_', 'S', 'A', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 18005 */ 'P', 'R', 'E', 'C', 'E', 'Q', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 18018 */ 'M', 'A', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 18030 */ 'M', 'U', 'L', 'E', 'Q', '_', 'S', '_', 'W', '_', 'P', 'H', 'R', 0,
  /* 18044 */ 'J', 'R', 0,
  /* 18047 */ 'J', 'A', 'L', 'R', 0,
  /* 18052 */ 'N', 'O', 'R', 0,
  /* 18056 */ 'D', 'R', 'O', 'R', 0,
  /* 18061 */ 'X', 'O', 'R', 0,
  /* 18065 */ 'G', '_', 'O', 'R', 0,
  /* 18070 */ 'D', 'R', 'O', 'T', 'R', 0,
  /* 18076 */ 'T', 'L', 'B', 'W', 'R', 0,
  /* 18082 */ 'R', 'D', 'H', 'W', 'R', 0,
  /* 18088 */ 'L', 'W', 'R', 0,
  /* 18092 */ 'S', 'W', 'R', 0,
  /* 18096 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '6', '4', '_', 'R', 0,
  /* 18109 */ 'T', 'A', 'I', 'L', 'C', 'A', 'L', 'L', '_', 'R', 0,
  /* 18120 */ 'C', 'I', 'N', 'S', 0,
  /* 18125 */ 'D', 'I', 'N', 'S', 0,
  /* 18130 */ 'C', 'O', 'P', 'Y', '_', 'T', 'O', '_', 'R', 'E', 'G', 'C', 'L', 'A', 'S', 'S', 0,
  /* 18147 */ 'E', 'X', 'T', 'S', 0,
  /* 18152 */ 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'S', 0,
  /* 18162 */ 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'S', 0,
  /* 18172 */ 'M', 'O', 'V', 'N', '_', 'I', '6', '4', '_', 'S', 0,
  /* 18183 */ 'M', 'O', 'V', 'Z', '_', 'I', '6', '4', '_', 'S', 0,
  /* 18194 */ 'M', 'I', 'N', 'A', '_', 'S', 0,
  /* 18201 */ 'M', 'A', 'X', 'A', '_', 'S', 0,
  /* 18208 */ 'F', 'S', 'U', 'B', '_', 'S', 0,
  /* 18215 */ 'N', 'M', 'S', 'U', 'B', '_', 'S', 0,
  /* 18223 */ 'F', 'A', 'D', 'D', '_', 'S', 0,
  /* 18230 */ 'N', 'M', 'A', 'D', 'D', '_', 'S', 0,
  /* 18238 */ 'C', '_', 'N', 'G', 'E', '_', 'S', 0,
  /* 18246 */ 'C', '_', 'N', 'G', 'L', 'E', '_', 'S', 0,
  /* 18255 */ 'C', '_', 'O', 'L', 'E', '_', 'S', 0,
  /* 18263 */ 'C', 'M', 'P', '_', 'S', 'L', 'E', '_', 'S', 0,
  /* 18273 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'E', '_', 'S', 0,
  /* 18284 */ 'C', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 18292 */ 'C', 'M', 'P', '_', 'U', 'L', 'E', '_', 'S', 0,
  /* 18302 */ 'C', '_', 'L', 'E', '_', 'S', 0,
  /* 18309 */ 'C', 'M', 'P', '_', 'L', 'E', '_', 'S', 0,
  /* 18318 */ 'C', 'M', 'P', '_', 'S', 'A', 'F', '_', 'S', 0,
  /* 18328 */ 'M', 'S', 'U', 'B', 'F', '_', 'S', 0,
  /* 18336 */ 'M', 'A', 'D', 'D', 'F', '_', 'S', 0,
  /* 18344 */ 'C', '_', 'S', 'F', '_', 'S', 0,
  /* 18351 */ 'M', 'O', 'V', 'F', '_', 'S', 0,
  /* 18358 */ 'C', '_', 'F', '_', 'S', 0,
  /* 18364 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'F', '_', 'S', 0,
  /* 18383 */ 'C', 'M', 'P', '_', 'F', '_', 'S', 0,
  /* 18391 */ 'F', 'N', 'E', 'G', '_', 'S', 0,
  /* 18398 */ 'M', 'O', 'V', 'N', '_', 'I', '_', 'S', 0,
  /* 18407 */ 'M', 'O', 'V', 'Z', '_', 'I', '_', 'S', 0,
  /* 18416 */ 'S', 'E', 'L', '_', 'S', 0,
  /* 18422 */ 'C', '_', 'N', 'G', 'L', '_', 'S', 0,
  /* 18430 */ 'F', 'M', 'U', 'L', '_', 'S', 0,
  /* 18437 */ 'T', 'R', 'U', 'N', 'C', '_', 'L', '_', 'S', 0,
  /* 18447 */ 'R', 'O', 'U', 'N', 'D', '_', 'L', '_', 'S', 0,
  /* 18457 */ 'C', 'E', 'I', 'L', '_', 'L', '_', 'S', 0,
  /* 18466 */ 'F', 'L', 'O', 'O', 'R', '_', 'L', '_', 'S', 0,
  /* 18476 */ 'C', 'V', 'T', '_', 'L', '_', 'S', 0,
  /* 18484 */ 'M', 'I', 'N', '_', 'S', 0,
  /* 18490 */ 'C', 'M', 'P', '_', 'S', 'U', 'N', '_', 'S', 0,
  /* 18500 */ 'C', '_', 'U', 'N', '_', 'S', 0,
  /* 18507 */ 'C', 'M', 'P', '_', 'U', 'N', '_', 'S', 0,
  /* 18516 */ 'C', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 18524 */ 'C', 'M', 'P', '_', 'S', 'E', 'Q', '_', 'S', 0,
  /* 18534 */ 'C', 'M', 'P', '_', 'S', 'U', 'E', 'Q', '_', 'S', 0,
  /* 18545 */ 'C', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 18553 */ 'C', 'M', 'P', '_', 'U', 'E', 'Q', '_', 'S', 0,
  /* 18563 */ 'C', '_', 'E', 'Q', '_', 'S', 0,
  /* 18570 */ 'C', 'M', 'P', '_', 'E', 'Q', '_', 'S', 0,
  /* 18579 */ 'F', 'A', 'B', 'S', '_', 'S', 0,
  /* 18586 */ 'C', 'L', 'A', 'S', 'S', '_', 'S', 0,
  /* 18594 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', '_', 'S', 0,
  /* 18609 */ 'C', '_', 'N', 'G', 'T', '_', 'S', 0,
  /* 18617 */ 'C', '_', 'O', 'L', 'T', '_', 'S', 0,
  /* 18625 */ 'C', 'M', 'P', '_', 'S', 'L', 'T', '_', 'S', 0,
  /* 18635 */ 'C', 'M', 'P', '_', 'S', 'U', 'L', 'T', '_', 'S', 0,
  /* 18646 */ 'C', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 18654 */ 'C', 'M', 'P', '_', 'U', 'L', 'T', '_', 'S', 0,
  /* 18664 */ 'C', '_', 'L', 'T', '_', 'S', 0,
  /* 18671 */ 'C', 'M', 'P', '_', 'L', 'T', '_', 'S', 0,
  /* 18680 */ 'R', 'I', 'N', 'T', '_', 'S', 0,
  /* 18687 */ 'F', 'S', 'Q', 'R', 'T', '_', 'S', 0,
  /* 18695 */ 'M', 'O', 'V', 'T', '_', 'S', 0,
  /* 18702 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'E', 'L', 'E', 'C', 'T', 'F', 'P', '_', 'T', '_', 'S', 0,
  /* 18721 */ 'F', 'D', 'I', 'V', '_', 'S', 0,
  /* 18728 */ 'F', 'M', 'O', 'V', '_', 'S', 0,
  /* 18735 */ 'P', 's', 'e', 'u', 'd', 'o', 'T', 'R', 'U', 'N', 'C', '_', 'W', '_', 'S', 0,
  /* 18751 */ 'R', 'O', 'U', 'N', 'D', '_', 'W', '_', 'S', 0,
  /* 18761 */ 'C', 'E', 'I', 'L', '_', 'W', '_', 'S', 0,
  /* 18770 */ 'F', 'L', 'O', 'O', 'R', '_', 'W', '_', 'S', 0,
  /* 18780 */ 'C', 'V', 'T', '_', 'W', '_', 'S', 0,
  /* 18788 */ 'M', 'A', 'X', '_', 'S', 0,
  /* 18794 */ 'S', 'E', 'L', 'N', 'E', 'Z', '_', 'S', 0,
  /* 18803 */ 'S', 'E', 'L', 'E', 'Q', 'Z', '_', 'S', 0,
  /* 18812 */ 'B', 'C', '1', 'T', 0,
  /* 18817 */ 'D', 'E', 'R', 'E', 'T', 0,
  /* 18823 */ 'P', 'A', 'T', 'C', 'H', 'A', 'B', 'L', 'E', '_', 'R', 'E', 'T', 0,
  /* 18837 */ 'B', 'G', 'T', 0,
  /* 18841 */ 'W', 'A', 'I', 'T', 0,
  /* 18846 */ 'B', 'L', 'T', 0,
  /* 18850 */ 'S', 'L', 'T', 0,
  /* 18854 */ 'T', 'L', 'T', 0,
  /* 18858 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 0,
  /* 18870 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 0,
  /* 18881 */ 'S', 'T', 'A', 'T', 'E', 'P', 'O', 'I', 'N', 'T', 0,
  /* 18892 */ 'P', 'A', 'T', 'C', 'H', 'P', 'O', 'I', 'N', 'T', 0,
  /* 18903 */ 'L', 'I', 'F', 'E', 'T', 'I', 'M', 'E', '_', 'S', 'T', 'A', 'R', 'T', 0,
  /* 18918 */ 'D', 'E', 'X', 'T', 0,
  /* 18923 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'S', 'U', 'B', 'U', 0,
  /* 18935 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'A', 'D', 'D', 'U', 0,
  /* 18947 */ 'D', 'M', 'O', 'D', 'U', 0,
  /* 18953 */ 'B', 'G', 'E', 'U', 0,
  /* 18958 */ 'T', 'G', 'E', 'U', 0,
  /* 18963 */ 'B', 'L', 'E', 'U', 0,
  /* 18968 */ 'D', 'M', 'U', 'H', 'U', 0,
  /* 18974 */ 'T', 'G', 'E', 'I', 'U', 0,
  /* 18980 */ 'T', 'T', 'L', 'T', 'I', 'U', 0,
  /* 18987 */ 'V', '3', 'M', 'U', 'L', 'U', 0,
  /* 18994 */ 'D', 'M', 'U', 'L', 'U', 0,
  /* 19000 */ 'V', 'M', 'U', 'L', 'U', 0,
  /* 19006 */ 'D', 'I', 'N', 'S', 'U', 0,
  /* 19012 */ 'B', 'G', 'T', 'U', 0,
  /* 19017 */ 'B', 'L', 'T', 'U', 0,
  /* 19022 */ 'T', 'L', 'T', 'U', 0,
  /* 19027 */ 'D', 'E', 'X', 'T', 'U', 0,
  /* 19033 */ 'D', 'D', 'I', 'V', 'U', 0,
  /* 19039 */ 'D', 'S', 'R', 'A', 'V', 0,
  /* 19045 */ 'B', 'I', 'T', 'R', 'E', 'V', 0,
  /* 19052 */ 'D', 'D', 'I', 'V', 0,
  /* 19057 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'S', 'D', 'I', 'V', 0,
  /* 19069 */ 'P', 's', 'e', 'u', 'd', 'o', 'S', 'D', 'I', 'V', 0,
  /* 19080 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'U', 'D', 'I', 'V', 0,
  /* 19092 */ 'P', 's', 'e', 'u', 'd', 'o', 'U', 'D', 'I', 'V', 0,
  /* 19103 */ 'D', 'S', 'L', 'L', 'V', 0,
  /* 19109 */ 'D', 'S', 'R', 'L', 'V', 0,
  /* 19115 */ 'T', 'L', 'B', 'I', 'N', 'V', 0,
  /* 19122 */ 'S', 'H', 'I', 'L', 'O', 'V', 0,
  /* 19129 */ 'E', 'X', 'T', 'P', 'D', 'P', 'V', 0,
  /* 19137 */ 'E', 'X', 'T', 'P', 'V', 0,
  /* 19143 */ 'D', 'R', 'O', 'T', 'R', 'V', 0,
  /* 19150 */ 'I', 'N', 'S', 'V', 0,
  /* 19155 */ 'A', 'N', 'D', '_', 'V', 0,
  /* 19161 */ 'M', 'O', 'V', 'E', '_', 'V', 0,
  /* 19168 */ 'B', 'S', 'E', 'L', '_', 'V', 0,
  /* 19175 */ 'N', 'O', 'R', '_', 'V', 0,
  /* 19181 */ 'X', 'O', 'R', '_', 'V', 0,
  /* 19187 */ 'B', 'Z', '_', 'V', 0,
  /* 19192 */ 'B', 'M', 'Z', '_', 'V', 0,
  /* 19198 */ 'B', 'N', 'Z', '_', 'V', 0,
  /* 19204 */ 'B', 'M', 'N', 'Z', '_', 'V', 0,
  /* 19211 */ 'L', 'W', 0,
  /* 19214 */ 'S', 'W', 0,
  /* 19217 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '3', '2', '_', 'W', 0,
  /* 19233 */ 'F', 'L', 'O', 'G', '2', '_', 'W', 0,
  /* 19241 */ 'F', 'E', 'X', 'P', '2', '_', 'W', 0,
  /* 19249 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'D', '6', '4', '_', 'W', 0,
  /* 19265 */ 'S', 'R', 'A', '_', 'W', 0,
  /* 19271 */ 'A', 'D', 'D', '_', 'A', '_', 'W', 0,
  /* 19279 */ 'F', 'M', 'I', 'N', '_', 'A', '_', 'W', 0,
  /* 19288 */ 'A', 'D', 'D', 'S', '_', 'A', '_', 'W', 0,
  /* 19297 */ 'F', 'M', 'A', 'X', '_', 'A', '_', 'W', 0,
  /* 19306 */ 'F', 'S', 'U', 'B', '_', 'W', 0,
  /* 19313 */ 'F', 'M', 'S', 'U', 'B', '_', 'W', 0,
  /* 19321 */ 'N', 'L', 'O', 'C', '_', 'W', 0,
  /* 19328 */ 'N', 'L', 'Z', 'C', '_', 'W', 0,
  /* 19335 */ 'F', 'A', 'D', 'D', '_', 'W', 0,
  /* 19342 */ 'F', 'M', 'A', 'D', 'D', '_', 'W', 0,
  /* 19350 */ 'S', 'L', 'D', '_', 'W', 0,
  /* 19356 */ 'P', 'C', 'K', 'O', 'D', '_', 'W', 0,
  /* 19364 */ 'I', 'L', 'V', 'O', 'D', '_', 'W', 0,
  /* 19372 */ 'F', 'C', 'L', 'E', '_', 'W', 0,
  /* 19379 */ 'F', 'S', 'L', 'E', '_', 'W', 0,
  /* 19386 */ 'F', 'C', 'U', 'L', 'E', '_', 'W', 0,
  /* 19394 */ 'F', 'S', 'U', 'L', 'E', '_', 'W', 0,
  /* 19402 */ 'F', 'C', 'N', 'E', '_', 'W', 0,
  /* 19409 */ 'F', 'S', 'N', 'E', '_', 'W', 0,
  /* 19416 */ 'F', 'C', 'U', 'N', 'E', '_', 'W', 0,
  /* 19424 */ 'F', 'S', 'U', 'N', 'E', '_', 'W', 0,
  /* 19432 */ 'I', 'N', 'S', 'V', 'E', '_', 'W', 0,
  /* 19440 */ 'F', 'C', 'A', 'F', '_', 'W', 0,
  /* 19447 */ 'F', 'S', 'A', 'F', '_', 'W', 0,
  /* 19454 */ 'V', 'S', 'H', 'F', '_', 'W', 0,
  /* 19461 */ 'B', 'N', 'E', 'G', '_', 'W', 0,
  /* 19468 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'P', 'H', '_', 'W', 0,
  /* 19483 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'P', 'H', '_', 'W', 0,
  /* 19495 */ 'P', 'R', 'E', 'C', 'R', '_', 'S', 'R', 'A', '_', 'R', '_', 'P', 'H', '_', 'W', 0,
  /* 19512 */ 'P', 'R', 'E', 'C', 'R', 'Q', '_', 'R', 'S', '_', 'P', 'H', '_', 'W', 0,
  /* 19527 */ 'S', 'U', 'B', 'Q', 'H', '_', 'W', 0,
  /* 19535 */ 'A', 'D', 'D', 'Q', 'H', '_', 'W', 0,
  /* 19543 */ 'S', 'R', 'A', 'I', '_', 'W', 0,
  /* 19550 */ 'S', 'L', 'D', 'I', '_', 'W', 0,
  /* 19557 */ 'B', 'N', 'E', 'G', 'I', '_', 'W', 0,
  /* 19565 */ 'S', 'L', 'L', 'I', '_', 'W', 0,
  /* 19572 */ 'S', 'R', 'L', 'I', '_', 'W', 0,
  /* 19579 */ 'B', 'I', 'N', 'S', 'L', 'I', '_', 'W', 0,
  /* 19588 */ 'C', 'E', 'Q', 'I', '_', 'W', 0,
  /* 19595 */ 'S', 'R', 'A', 'R', 'I', '_', 'W', 0,
  /* 19603 */ 'B', 'C', 'L', 'R', 'I', '_', 'W', 0,
  /* 19611 */ 'S', 'R', 'L', 'R', 'I', '_', 'W', 0,
  /* 19619 */ 'B', 'I', 'N', 'S', 'R', 'I', '_', 'W', 0,
  /* 19628 */ 'S', 'P', 'L', 'A', 'T', 'I', '_', 'W', 0,
  /* 19637 */ 'B', 'S', 'E', 'T', 'I', '_', 'W', 0,
  /* 19645 */ 'S', 'U', 'B', 'V', 'I', '_', 'W', 0,
  /* 19653 */ 'A', 'D', 'D', 'V', 'I', '_', 'W', 0,
  /* 19661 */ 'F', 'I', 'L', 'L', '_', 'W', 0,
  /* 19668 */ 'S', 'L', 'L', '_', 'W', 0,
  /* 19674 */ 'F', 'E', 'X', 'U', 'P', 'L', '_', 'W', 0,
  /* 19683 */ 'F', 'F', 'Q', 'L', '_', 'W', 0,
  /* 19690 */ 'S', 'R', 'L', '_', 'W', 0,
  /* 19696 */ 'B', 'I', 'N', 'S', 'L', '_', 'W', 0,
  /* 19704 */ 'F', 'M', 'U', 'L', '_', 'W', 0,
  /* 19711 */ 'I', 'L', 'V', 'L', '_', 'W', 0,
  /* 19718 */ 'D', 'P', 'A', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 19730 */ 'D', 'P', 'S', 'Q', '_', 'S', 'A', '_', 'L', '_', 'W', 0,
  /* 19742 */ 'F', 'M', 'I', 'N', '_', 'W', 0,
  /* 19749 */ 'F', 'C', 'U', 'N', '_', 'W', 0,
  /* 19756 */ 'F', 'S', 'U', 'N', '_', 'W', 0,
  /* 19763 */ 'F', 'E', 'X', 'D', 'O', '_', 'W', 0,
  /* 19771 */ 'F', 'R', 'C', 'P', '_', 'W', 0,
  /* 19778 */ 'F', 'C', 'E', 'Q', '_', 'W', 0,
  /* 19785 */ 'F', 'S', 'E', 'Q', '_', 'W', 0,
  /* 19792 */ 'F', 'C', 'U', 'E', 'Q', '_', 'W', 0,
  /* 19800 */ 'F', 'S', 'U', 'E', 'Q', '_', 'W', 0,
  /* 19808 */ 'F', 'T', 'Q', '_', 'W', 0,
  /* 19814 */ 'M', 'S', 'U', 'B', '_', 'Q', '_', 'W', 0,
  /* 19823 */ 'M', 'A', 'D', 'D', '_', 'Q', '_', 'W', 0,
  /* 19832 */ 'M', 'U', 'L', '_', 'Q', '_', 'W', 0,
  /* 19840 */ 'M', 'S', 'U', 'B', 'R', '_', 'Q', '_', 'W', 0,
  /* 19850 */ 'M', 'A', 'D', 'D', 'R', '_', 'Q', '_', 'W', 0,
  /* 19860 */ 'M', 'U', 'L', 'R', '_', 'Q', '_', 'W', 0,
  /* 19869 */ 'S', 'R', 'A', 'R', '_', 'W', 0,
  /* 19876 */ 'B', 'C', 'L', 'R', '_', 'W', 0,
  /* 19883 */ 'S', 'R', 'L', 'R', '_', 'W', 0,
  /* 19890 */ 'F', 'C', 'O', 'R', '_', 'W', 0,
  /* 19897 */ 'F', 'S', 'O', 'R', '_', 'W', 0,
  /* 19904 */ 'F', 'E', 'X', 'U', 'P', 'R', '_', 'W', 0,
  /* 19913 */ 'F', 'F', 'Q', 'R', '_', 'W', 0,
  /* 19920 */ 'B', 'I', 'N', 'S', 'R', '_', 'W', 0,
  /* 19928 */ 'E', 'X', 'T', 'R', '_', 'W', 0,
  /* 19935 */ 'I', 'L', 'V', 'R', '_', 'W', 0,
  /* 19942 */ 'S', 'H', 'R', 'A', '_', 'R', '_', 'W', 0,
  /* 19951 */ 'S', 'U', 'B', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 19961 */ 'A', 'D', 'D', 'Q', 'H', '_', 'R', '_', 'W', 0,
  /* 19971 */ 'E', 'X', 'T', 'R', '_', 'R', '_', 'W', 0,
  /* 19980 */ 'S', 'H', 'R', 'A', 'V', '_', 'R', '_', 'W', 0,
  /* 19990 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', '_', 'W', 0,
  /* 20000 */ 'F', 'A', 'B', 'S', '_', 'W', 0,
  /* 20007 */ 'M', 'U', 'L', 'Q', '_', 'R', 'S', '_', 'W', 0,
  /* 20017 */ 'E', 'X', 'T', 'R', '_', 'R', 'S', '_', 'W', 0,
  /* 20027 */ 'E', 'X', 'T', 'R', 'V', '_', 'R', 'S', '_', 'W', 0,
  /* 20038 */ 'F', 'C', 'L', 'A', 'S', 'S', '_', 'W', 0,
  /* 20047 */ 'A', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 20056 */ 'H', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 20065 */ 'D', 'P', 'S', 'U', 'B', '_', 'S', '_', 'W', 0,
  /* 20075 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'S', '_', 'W', 0,
  /* 20086 */ 'H', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 20095 */ 'D', 'P', 'A', 'D', 'D', '_', 'S', '_', 'W', 0,
  /* 20105 */ 'M', 'O', 'D', '_', 'S', '_', 'W', 0,
  /* 20113 */ 'C', 'L', 'E', '_', 'S', '_', 'W', 0,
  /* 20121 */ 'A', 'V', 'E', '_', 'S', '_', 'W', 0,
  /* 20129 */ 'C', 'L', 'E', 'I', '_', 'S', '_', 'W', 0,
  /* 20138 */ 'M', 'I', 'N', 'I', '_', 'S', '_', 'W', 0,
  /* 20147 */ 'C', 'L', 'T', 'I', '_', 'S', '_', 'W', 0,
  /* 20156 */ 'M', 'A', 'X', 'I', '_', 'S', '_', 'W', 0,
  /* 20165 */ 'S', 'H', 'L', 'L', '_', 'S', '_', 'W', 0,
  /* 20174 */ 'M', 'I', 'N', '_', 'S', '_', 'W', 0,
  /* 20182 */ 'D', 'O', 'T', 'P', '_', 'S', '_', 'W', 0,
  /* 20191 */ 'S', 'U', 'B', 'Q', '_', 'S', '_', 'W', 0,
  /* 20200 */ 'A', 'D', 'D', 'Q', '_', 'S', '_', 'W', 0,
  /* 20209 */ 'M', 'U', 'L', 'Q', '_', 'S', '_', 'W', 0,
  /* 20218 */ 'A', 'B', 'S', 'Q', '_', 'S', '_', 'W', 0,
  /* 20227 */ 'A', 'V', 'E', 'R', '_', 'S', '_', 'W', 0,
  /* 20236 */ 'S', 'U', 'B', 'S', '_', 'S', '_', 'W', 0,
  /* 20245 */ 'A', 'D', 'D', 'S', '_', 'S', '_', 'W', 0,
  /* 20254 */ 'S', 'A', 'T', '_', 'S', '_', 'W', 0,
  /* 20262 */ 'C', 'L', 'T', '_', 'S', '_', 'W', 0,
  /* 20270 */ 'F', 'F', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 20280 */ 'F', 'T', 'I', 'N', 'T', '_', 'S', '_', 'W', 0,
  /* 20290 */ 'P', 's', 'e', 'u', 'd', 'o', 'C', 'V', 'T', '_', 'S', '_', 'W', 0,
  /* 20304 */ 'S', 'U', 'B', 'S', 'U', 'U', '_', 'S', '_', 'W', 0,
  /* 20315 */ 'D', 'I', 'V', '_', 'S', '_', 'W', 0,
  /* 20323 */ 'S', 'H', 'L', 'L', 'V', '_', 'S', '_', 'W', 0,
  /* 20333 */ 'M', 'A', 'X', '_', 'S', '_', 'W', 0,
  /* 20341 */ 'C', 'O', 'P', 'Y', '_', 'S', '_', 'W', 0,
  /* 20350 */ 'S', 'P', 'L', 'A', 'T', '_', 'W', 0,
  /* 20358 */ 'B', 'S', 'E', 'T', '_', 'W', 0,
  /* 20365 */ 'F', 'C', 'L', 'T', '_', 'W', 0,
  /* 20372 */ 'F', 'S', 'L', 'T', '_', 'W', 0,
  /* 20379 */ 'F', 'C', 'U', 'L', 'T', '_', 'W', 0,
  /* 20387 */ 'F', 'S', 'U', 'L', 'T', '_', 'W', 0,
  /* 20395 */ 'P', 'C', 'N', 'T', '_', 'W', 0,
  /* 20402 */ 'F', 'R', 'I', 'N', 'T', '_', 'W', 0,
  /* 20410 */ 'I', 'N', 'S', 'E', 'R', 'T', '_', 'W', 0,
  /* 20419 */ 'F', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 20427 */ 'F', 'R', 'S', 'Q', 'R', 'T', '_', 'W', 0,
  /* 20436 */ 'S', 'T', '_', 'W', 0,
  /* 20441 */ 'A', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 20450 */ 'H', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 20459 */ 'D', 'P', 'S', 'U', 'B', '_', 'U', '_', 'W', 0,
  /* 20469 */ 'F', 'T', 'R', 'U', 'N', 'C', '_', 'U', '_', 'W', 0,
  /* 20480 */ 'H', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 20489 */ 'D', 'P', 'A', 'D', 'D', '_', 'U', '_', 'W', 0,
  /* 20499 */ 'M', 'O', 'D', '_', 'U', '_', 'W', 0,
  /* 20507 */ 'C', 'L', 'E', '_', 'U', '_', 'W', 0,
  /* 20515 */ 'A', 'V', 'E', '_', 'U', '_', 'W', 0,
  /* 20523 */ 'C', 'L', 'E', 'I', '_', 'U', '_', 'W', 0,
  /* 20532 */ 'M', 'I', 'N', 'I', '_', 'U', '_', 'W', 0,
  /* 20541 */ 'C', 'L', 'T', 'I', '_', 'U', '_', 'W', 0,
  /* 20550 */ 'M', 'A', 'X', 'I', '_', 'U', '_', 'W', 0,
  /* 20559 */ 'M', 'I', 'N', '_', 'U', '_', 'W', 0,
  /* 20567 */ 'D', 'O', 'T', 'P', '_', 'U', '_', 'W', 0,
  /* 20576 */ 'A', 'V', 'E', 'R', '_', 'U', '_', 'W', 0,
  /* 20585 */ 'S', 'U', 'B', 'S', '_', 'U', '_', 'W', 0,
  /* 20594 */ 'A', 'D', 'D', 'S', '_', 'U', '_', 'W', 0,
  /* 20603 */ 'S', 'U', 'B', 'S', 'U', 'S', '_', 'U', '_', 'W', 0,
  /* 20614 */ 'S', 'A', 'T', '_', 'U', '_', 'W', 0,
  /* 20622 */ 'C', 'L', 'T', '_', 'U', '_', 'W', 0,
  /* 20630 */ 'F', 'F', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 20640 */ 'F', 'T', 'I', 'N', 'T', '_', 'U', '_', 'W', 0,
  /* 20650 */ 'D', 'I', 'V', '_', 'U', '_', 'W', 0,
  /* 20658 */ 'M', 'A', 'X', '_', 'U', '_', 'W', 0,
  /* 20666 */ 'C', 'O', 'P', 'Y', '_', 'U', '_', 'W', 0,
  /* 20675 */ 'M', 'S', 'U', 'B', 'V', '_', 'W', 0,
  /* 20683 */ 'M', 'A', 'D', 'D', 'V', '_', 'W', 0,
  /* 20691 */ 'P', 'C', 'K', 'E', 'V', '_', 'W', 0,
  /* 20699 */ 'I', 'L', 'V', 'E', 'V', '_', 'W', 0,
  /* 20707 */ 'F', 'D', 'I', 'V', '_', 'W', 0,
  /* 20714 */ 'M', 'U', 'L', 'V', '_', 'W', 0,
  /* 20721 */ 'E', 'X', 'T', 'R', 'V', '_', 'W', 0,
  /* 20729 */ 'F', 'M', 'A', 'X', '_', 'W', 0,
  /* 20736 */ 'B', 'Z', '_', 'W', 0,
  /* 20741 */ 'B', 'N', 'Z', '_', 'W', 0,
  /* 20747 */ 'L', 'H', 'X', 0,
  /* 20751 */ 'J', 'A', 'L', 'X', 0,
  /* 20756 */ 'L', 'B', 'U', 'X', 0,
  /* 20761 */ 'L', 'W', 'X', 0,
  /* 20765 */ 'C', 'O', 'P', 'Y', 0,
  /* 20770 */ 'C', 'O', 'N', 'S', 'T', 'P', 'O', 'O', 'L', '_', 'E', 'N', 'T', 'R', 'Y', 0,
  /* 20786 */ 'B', 'G', 'E', 'Z', 0,
  /* 20791 */ 'B', 'L', 'E', 'Z', 0,
  /* 20796 */ 'B', 'C', '1', 'N', 'E', 'Z', 0,
  /* 20803 */ 'B', 'C', '2', 'N', 'E', 'Z', 0,
  /* 20810 */ 'S', 'E', 'L', 'N', 'E', 'Z', 0,
  /* 20817 */ 'D', 'C', 'L', 'Z', 0,
  /* 20822 */ 'B', 'C', '1', 'E', 'Q', 'Z', 0,
  /* 20829 */ 'B', 'C', '2', 'E', 'Q', 'Z', 0,
  /* 20836 */ 'S', 'E', 'L', 'E', 'Q', 'Z', 0,
  /* 20843 */ 'B', 'G', 'T', 'Z', 0,
  /* 20848 */ 'B', 'L', 'T', 'Z', 0,
  /* 20853 */ 'S', 'e', 'l', 'B', 'n', 'e', 'Z', 0,
  /* 20861 */ 'S', 'e', 'l', 'B', 'e', 'q', 'Z', 0,
  /* 20869 */ 'J', 'a', 'l', 'O', 'n', 'e', 'R', 'e', 'g', 0,
  /* 20879 */ 'J', 'a', 'l', 'T', 'w', 'o', 'R', 'e', 'g', 0,
  /* 20889 */ 'P', 's', 'e', 'u', 'd', 'o', 'I', 'n', 'd', 'i', 'r', 'e', 'c', 't', 'B', 'r', 'a', 'n', 'c', 'h', 0,
  /* 20910 */ 'U', 'l', 'h', 0,
  /* 20914 */ 'D', 'A', 'D', 'D', 'i', 0,
  /* 20920 */ 'A', 'N', 'D', 'i', 0,
  /* 20925 */ 'S', 'N', 'E', 'i', 0,
  /* 20930 */ 'S', 'E', 'Q', 'i', 0,
  /* 20935 */ 'X', 'O', 'R', 'i', 0,
  /* 20940 */ 'S', 'L', 'T', 'i', 0,
  /* 20945 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'L', 'U', 'i', 0,
  /* 20961 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 20975 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 'i', 0,
  /* 20989 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 0,
  /* 21003 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 0,
  /* 21017 */ 'D', 'R', 'O', 'L', 'I', 'm', 'm', 0,
  /* 21025 */ 'N', 'O', 'R', 'I', 'm', 'm', 0,
  /* 21032 */ 'D', 'R', 'O', 'R', 'I', 'm', 'm', 0,
  /* 21040 */ 'B', 'n', 'e', 'I', 'm', 'm', 0,
  /* 21047 */ 'B', 'e', 'q', 'I', 'm', 'm', 0,
  /* 21054 */ 'P', 's', 'e', 'u', 'd', 'o', 'R', 'e', 't', 'u', 'r', 'n', 0,
  /* 21067 */ 'J', 'A', 'L', 'R', '6', '4', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 21080 */ 'J', 'A', 'L', 'R', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 21091 */ 'B', '_', 'M', 'M', 'R', '6', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 21105 */ 'B', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 21117 */ 'S', 'D', 'I', 'V', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 21132 */ 'U', 'D', 'I', 'V', '_', 'M', 'M', '_', 'P', 's', 'e', 'u', 'd', 'o', 0,
  /* 21147 */ 'A', 'B', 'S', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21156 */ 'B', 'G', 'E', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21168 */ 'B', 'L', 'E', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21180 */ 'B', 'G', 'E', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21193 */ 'B', 'L', 'E', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21206 */ 'B', 'G', 'T', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21219 */ 'B', 'L', 'T', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21232 */ 'B', 'G', 'E', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21246 */ 'B', 'L', 'E', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21260 */ 'B', 'G', 'T', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21274 */ 'B', 'L', 'T', 'U', 'L', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21288 */ 'B', 'G', 'T', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21300 */ 'B', 'L', 'T', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21312 */ 'B', 'G', 'E', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21325 */ 'B', 'L', 'E', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21338 */ 'B', 'G', 'T', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21351 */ 'B', 'L', 'T', 'U', 'I', 'm', 'm', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21364 */ 'D', 'S', 'D', 'i', 'v', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21375 */ 'D', 'U', 'D', 'i', 'v', 'M', 'a', 'c', 'r', 'o', 0,
  /* 21386 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'C', 'm', 'p', 0,
  /* 21399 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'C', 'm', 'p', 0,
  /* 21412 */ 'E', 'R', 'e', 't', 0,
  /* 21417 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 0,
  /* 21430 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 0,
  /* 21443 */ 'L', 'B', 'u', 0,
  /* 21447 */ 'D', 'S', 'U', 'B', 'u', 0,
  /* 21453 */ 'B', 'A', 'D', 'D', 'u', 0,
  /* 21459 */ 'D', 'A', 'D', 'D', 'u', 0,
  /* 21465 */ 'L', 'H', 'u', 0,
  /* 21469 */ 'S', 'L', 'T', 'u', 0,
  /* 21474 */ 'P', 's', 'e', 'u', 'd', 'o', 'D', 'M', 'U', 'L', 'T', 'u', 0,
  /* 21487 */ 'P', 's', 'e', 'u', 'd', 'o', 'M', 'U', 'L', 'T', 'u', 0,
  /* 21499 */ 'L', 'W', 'u', 0,
  /* 21503 */ 'U', 'l', 'h', 'u', 0,
  /* 21508 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'D', 'A', 'D', 'D', 'i', 'u', 0,
  /* 21527 */ 'L', 'E', 'A', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 21537 */ 'L', 'O', 'N', 'G', '_', 'B', 'R', 'A', 'N', 'C', 'H', '_', 'A', 'D', 'D', 'i', 'u', 0,
  /* 21555 */ 'S', 'L', 'T', 'i', 'u', 0,
  /* 21561 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 21576 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'i', 'u', 0,
  /* 21591 */ 'S', 'e', 'l', 'T', 'B', 't', 'n', 'e', 'Z', 'S', 'l', 't', 'u', 0,
  /* 21605 */ 'S', 'e', 'l', 'T', 'B', 't', 'e', 'q', 'Z', 'S', 'l', 't', 'u', 0,
  /* 21619 */ 'U', 'l', 'w', 0,
};

extern const unsigned MipsInstrNameIndices[] = {
    12704U, 16697U, 16759U, 12959U, 12950U, 13074U, 11194U, 11209U, 
    11168U, 11223U, 18130U, 11135U, 11017U, 20765U, 11073U, 18903U, 
    9596U, 17563U, 18892U, 9614U, 18881U, 11106U, 17622U, 17639U, 
    17967U, 18823U, 9562U, 18065U, 17947U, 21147U, 11527U, 14644U, 
    8448U, 1067U, 20218U, 16455U, 6255U, 7376U, 9547U, 9443U, 
    14147U, 5675U, 15243U, 13481U, 13505U, 15397U, 7699U, 11328U, 
    1170U, 11445U, 1225U, 19961U, 1583U, 19535U, 1555U, 11400U, 
    14540U, 11507U, 14631U, 20200U, 16443U, 9467U, 14158U, 8626U, 
    9687U, 11807U, 19288U, 9034U, 10474U, 12296U, 20245U, 9226U, 
    10839U, 12545U, 20594U, 13722U, 5406U, 8316U, 972U, 8426U, 
    1035U, 7669U, 11592U, 1313U, 8528U, 14046U, 11547U, 1285U, 
    8468U, 13993U, 8840U, 10051U, 11992U, 19653U, 9296U, 10920U, 
    12615U, 20684U, 9500U, 14167U, 8610U, 9670U, 11791U, 19271U, 
    14195U, 5845U, 20915U, 16589U, 21521U, 16679U, 21454U, 16643U, 
    16775U, 17849U, 16720U, 6801U, 9436U, 5663U, 9577U, 13533U, 
    5247U, 1766U, 13560U, 5280U, 8715U, 6700U, 14210U, 5854U, 
    19155U, 17083U, 17167U, 17338U, 20920U, 2898U, 16597U, 9589U, 
    1127U, 8939U, 10321U, 12145U, 20047U, 9131U, 10686U, 12403U, 
    20441U, 3141U, 704U, 2560U, 8084U, 3064U, 627U, 2431U, 
    8011U, 3105U, 668U, 2472U, 8050U, 3084U, 647U, 2451U, 
    8030U, 3181U, 744U, 2600U, 8122U, 3044U, 607U, 2411U, 
    7992U, 3161U, 724U, 2580U, 8103U, 3125U, 688U, 2544U, 
    8069U, 12729U, 9430U, 5652U, 6728U, 9016U, 10456U, 12269U, 
    20227U, 9208U, 10821U, 12527U, 20576U, 8964U, 10395U, 12208U, 
    20121U, 9156U, 10760U, 12466U, 20515U, 3583U, 3459U, 3967U, 
    3611U, 3408U, 3907U, 3475U, 4270U, 4209U, 8234U, 13517U, 
    21453U, 12854U, 9354U, 5531U, 16719U, 1488U, 17952U, 27U, 
    127U, 121U, 135U, 9337U, 5187U, 20822U, 5808U, 11163U, 
    12983U, 14379U, 20796U, 5771U, 18812U, 13099U, 15974U, 20829U, 
    5821U, 20803U, 5784U, 8776U, 10001U, 11942U, 19603U, 8910U, 
    10246U, 12116U, 19876U, 5494U, 17864U, 2703U, 9462U, 5698U, 
    13089U, 13767U, 9389U, 5591U, 9524U, 5234U, 14185U, 5834U, 
    15446U, 11047U, 9340U, 5502U, 21156U, 12968U, 21180U, 18953U, 
    9478U, 5729U, 21312U, 13115U, 21232U, 20786U, 2769U, 12862U, 
    9365U, 5552U, 13058U, 15697U, 14922U, 9506U, 13152U, 16550U, 
    18837U, 21288U, 13105U, 21206U, 19012U, 21338U, 13132U, 21260U, 
    20843U, 2801U, 9397U, 5604U, 9530U, 13164U, 16573U, 8752U, 
    9977U, 11918U, 19579U, 8882U, 10100U, 12019U, 19696U, 8806U, 
    10017U, 11958U, 19619U, 8924U, 10290U, 12130U, 19920U, 19045U, 
    16104U, 17578U, 6821U, 11069U, 21168U, 12973U, 21193U, 18963U, 
    21325U, 13121U, 21246U, 20791U, 2776U, 9373U, 5565U, 9512U, 
    13158U, 16558U, 18846U, 9473U, 5719U, 21300U, 13110U, 21219U, 
    19017U, 9484U, 5740U, 21351U, 13138U, 21274U, 20848U, 2808U, 
    12869U, 9405U, 5617U, 13066U, 15708U, 14932U, 9536U, 13170U, 
    16581U, 8855U, 19204U, 8848U, 19192U, 11094U, 2297U, 9345U, 
    5512U, 8722U, 9955U, 11896U, 19557U, 8694U, 9934U, 11875U, 
    19461U, 12978U, 13757U, 9381U, 5578U, 9518U, 5221U, 14176U, 
    5797U, 14310U, 9490U, 5751U, 9331U, 10994U, 12650U, 19198U, 
    20741U, 9495U, 5761U, 598U, 1647U, 13439U, 16826U, 12848U, 
    13588U, 5302U, 14906U, 6746U, 8730U, 17069U, 17007U, 17262U, 
    17153U, 19168U, 17324U, 8824U, 10035U, 11976U, 19637U, 9103U, 
    10563U, 12375U, 20358U, 9326U, 10980U, 12645U, 19187U, 20736U, 
    21091U, 21105U, 21047U, 3994U, 3640U, 4006U, 3653U, 21040U, 
    3982U, 3627U, 3893U, 4318U, 3704U, 3251U, 3732U, 3281U, 
    3762U, 3793U, 3817U, 4310U, 3690U, 3236U, 3718U, 3266U, 
    3746U, 3778U, 3808U, 2303U, 2815U, 11055U, 11034U, 14238U, 
    6539U, 14264U, 6562U, 7911U, 2027U, 6100U, 18457U, 7221U, 
    565U, 2264U, 6431U, 16281U, 18761U, 15938U, 7539U, 8761U, 
    9986U, 11927U, 19588U, 8897U, 10170U, 12042U, 19779U, 43U, 
    13222U, 8218U, 18120U, 785U, 10313U, 6266U, 18586U, 7387U, 
    8972U, 10403U, 12216U, 20129U, 9164U, 10768U, 12474U, 20523U, 
    8956U, 10387U, 12200U, 20113U, 9148U, 10752U, 12458U, 20507U, 
    17537U, 15148U, 6812U, 7943U, 8990U, 10421U, 12234U, 20147U, 
    9182U, 10786U, 12492U, 20541U, 9051U, 10491U, 12313U, 20262U, 
    9254U, 10867U, 12573U, 20622U, 20818U, 16566U, 7805U, 7960U, 
    8363U, 986U, 8265U, 940U, 8478U, 1082U, 8376U, 13951U, 
    8278U, 13878U, 8491U, 14006U, 8394U, 13966U, 8296U, 13893U, 
    8509U, 14021U, 5995U, 7116U, 10230U, 6241U, 11414U, 14551U, 
    18570U, 7362U, 9926U, 18383U, 9832U, 5966U, 11309U, 14470U, 
    18309U, 7087U, 10631U, 6338U, 11574U, 14671U, 18671U, 7446U, 
    9893U, 5980U, 18318U, 7101U, 10183U, 6195U, 18524U, 7316U, 
    9785U, 5920U, 18263U, 7041U, 10584U, 6292U, 18625U, 7400U, 
    10209U, 6210U, 18534U, 7331U, 9811U, 5935U, 18273U, 7056U, 
    10610U, 6307U, 18635U, 7415U, 10143U, 6153U, 18490U, 7274U, 
    10220U, 6226U, 18553U, 7347U, 9822U, 5951U, 18292U, 7072U, 
    10621U, 6323U, 18654U, 7431U, 10153U, 6168U, 18507U, 7289U, 
    20770U, 17054U, 17309U, 9086U, 10546U, 12358U, 20341U, 9278U, 
    12597U, 20666U, 54U, 13256U, 8225U, 18152U, 19223U, 16213U, 
    13182U, 18162U, 19255U, 6775U, 15785U, 7028U, 7767U, 2050U, 
    13492U, 6129U, 18476U, 15850U, 7250U, 411U, 13402U, 2116U, 
    6279U, 13198U, 6788U, 20296U, 16467U, 7780U, 588U, 2287U, 
    6460U, 16491U, 18780U, 15963U, 7568U, 393U, 2098U, 18563U, 
    276U, 1924U, 18358U, 249U, 1897U, 18302U, 468U, 2173U, 
    18664U, 208U, 1856U, 18238U, 218U, 1866U, 18246U, 336U, 
    1984U, 18422U, 438U, 2143U, 18609U, 229U, 1877U, 18255U, 
    448U, 2153U, 18617U, 373U, 2078U, 18516U, 258U, 1906U, 
    18344U, 383U, 2088U, 18545U, 239U, 1887U, 18284U, 458U, 
    2163U, 18646U, 355U, 2060U, 18500U, 4091U, 3930U, 3557U, 
    874U, 9546U, 4791U, 4752U, 4497U, 20914U, 21520U, 21459U, 
    12675U, 4578U, 16726U, 4676U, 12718U, 4590U, 12728U, 4602U, 
    17577U, 17536U, 4690U, 7942U, 20817U, 4933U, 7959U, 19052U, 
    19033U, 4844U, 4881U, 18817U, 15982U, 7620U, 18918U, 16713U, 
    4663U, 19027U, 4831U, 4727U, 12662U, 18125U, 16707U, 4650U, 
    19006U, 4818U, 4715U, 19053U, 19034U, 7720U, 7730U, 9070U, 
    10530U, 12332U, 20315U, 9262U, 10895U, 12581U, 20650U, 14798U, 
    6702U, 8213U, 7874U, 0U, 4326U, 48U, 4352U, 895U, 
    4435U, 16733U, 9609U, 18947U, 4765U, 4532U, 6U, 4339U, 
    59U, 4365U, 901U, 4448U, 16746U, 11780U, 18968U, 4778U, 
    4566U, 13127U, 18864U, 21480U, 18994U, 4805U, 4638U, 7934U, 
    10447U, 12260U, 20182U, 10812U, 12518U, 20567U, 10369U, 12182U, 
    20095U, 10734U, 12440U, 20489U, 11656U, 1370U, 11731U, 1422U, 
    19718U, 16291U, 11693U, 14720U, 12920U, 14995U, 17925U, 15521U, 
    11757U, 1458U, 11636U, 1340U, 17617U, 11670U, 1389U, 11744U, 
    1440U, 19730U, 16306U, 11719U, 14752U, 10339U, 12163U, 20065U, 
    10704U, 12421U, 20459U, 12931U, 15009U, 17936U, 15535U, 11767U, 
    1473U, 11684U, 1408U, 13084U, 21017U, 18056U, 21032U, 18070U, 
    777U, 4420U, 19143U, 4919U, 4702U, 11237U, 4554U, 19063U, 
    21364U, 9568U, 4509U, 13079U, 763U, 4392U, 808U, 19103U, 
    4893U, 4614U, 8202U, 143U, 4378U, 19039U, 4868U, 4461U, 
    13094U, 770U, 4406U, 19109U, 4906U, 4626U, 8588U, 4739U, 
    4473U, 21447U, 19086U, 21375U, 6882U, 4177U, 4155U, 8236U, 
    13865U, 5446U, 12667U, 14806U, 6710U, 18818U, 9413U, 5630U, 
    15983U, 7621U, 21412U, 6891U, 18919U, 17844U, 17597U, 19129U, 
    16164U, 15197U, 19137U, 16175U, 15424U, 20027U, 16405U, 19990U, 
    16379U, 12340U, 14785U, 20721U, 16500U, 20017U, 16392U, 19971U, 
    16354U, 12278U, 14773U, 19928U, 16332U, 18147U, 792U, 16030U, 
    7641U, 2316U, 2831U, 10305U, 402U, 2107U, 15681U, 18579U, 
    15861U, 20000U, 9734U, 189U, 1837U, 5908U, 14194U, 18223U, 
    15764U, 7016U, 19335U, 9879U, 19440U, 10169U, 19778U, 10312U, 
    20038U, 9771U, 19372U, 10570U, 20365U, 364U, 13390U, 2069U, 
    799U, 13469U, 9841U, 19402U, 10260U, 19890U, 10193U, 19792U, 
    9795U, 19386U, 10594U, 20379U, 9855U, 19416U, 10129U, 19749U, 
    10943U, 517U, 2222U, 6377U, 16114U, 18721U, 15892U, 7485U, 
    20707U, 12034U, 19763U, 9642U, 16792U, 19241U, 16809U, 10078U, 
    19674U, 10274U, 19904U, 10499U, 20270U, 10875U, 20630U, 10087U, 
    19683U, 10283U, 19913U, 8863U, 10065U, 17022U, 17277U, 12000U, 
    19661U, 9634U, 19233U, 2038U, 6114U, 18466U, 7235U, 576U, 
    2275U, 6445U, 16321U, 18770U, 15950U, 7553U, 9741U, 19342U, 
    9696U, 19297U, 10973U, 20729U, 9678U, 19279U, 10122U, 19742U, 
    526U, 13427U, 2231U, 6389U, 18728U, 15902U, 7497U, 9712U, 
    19313U, 10108U, 346U, 1994U, 6058U, 15112U, 18430U, 15840U, 
    7179U, 19704U, 305U, 1953U, 6035U, 14395U, 18391U, 15806U, 
    7156U, 10162U, 19771U, 10647U, 20402U, 10672U, 20427U, 9886U, 
    19447U, 10176U, 19785U, 9778U, 19379U, 10577U, 20372U, 9848U, 
    19409U, 10267U, 19897U, 10664U, 477U, 2182U, 16021U, 18687U, 
    15871U, 20419U, 9705U, 170U, 1818U, 5896U, 14123U, 18208U, 
    15743U, 7004U, 19306U, 10201U, 19800U, 9803U, 19394U, 10602U, 
    20387U, 9863U, 19424U, 10136U, 19756U, 10509U, 20280U, 10885U, 
    20640U, 12048U, 19808U, 10349U, 20075U, 10714U, 20469U, 3851U, 
    10360U, 12173U, 20086U, 10725U, 12431U, 20480U, 10330U, 12154U, 
    20056U, 10695U, 12412U, 20450U, 9311U, 10935U, 12630U, 20699U, 
    8890U, 10115U, 12027U, 19711U, 8671U, 9763U, 11852U, 19364U, 
    8932U, 10298U, 12138U, 19935U, 18121U, 9117U, 16842U, 17408U, 
    10655U, 16889U, 17451U, 17037U, 16865U, 17429U, 17292U, 16935U, 
    17493U, 12389U, 16912U, 17472U, 20410U, 16959U, 17515U, 19150U, 
    8679U, 9871U, 11860U, 19432U, 16193U, 15719U, 6971U, 12846U, 
    12858U, 18047U, 13664U, 2714U, 21067U, 5208U, 5455U, 5708U, 
    21080U, 13683U, 15726U, 8246U, 15619U, 15689U, 20751U, 16527U, 
    14915U, 9359U, 1753U, 5541U, 9350U, 1747U, 5522U, 18044U, 
    13656U, 2709U, 17834U, 13524U, 5197U, 6856U, 8240U, 7882U, 
    15613U, 14901U, 3901U, 3037U, 20869U, 20879U, 3834U, 3826U, 
    4040U, 3872U, 8254U, 1714U, 11009U, 14217U, 6512U, 13703U, 
    6602U, 20756U, 16535U, 7650U, 13872U, 5469U, 21443U, 2980U, 
    11153U, 14363U, 16628U, 9574U, 33U, 1662U, 5119U, 13206U, 
    885U, 5037U, 7826U, 1627U, 8709U, 9949U, 11890U, 19551U, 
    12942U, 9425U, 4485U, 17959U, 75U, 1676U, 8658U, 9750U, 
    11839U, 4522U, 19351U, 21527U, 2999U, 16675U, 11251U, 2340U, 
    11061U, 14273U, 13732U, 20747U, 16520U, 14418U, 21465U, 2986U, 
    11158U, 14371U, 16651U, 13580U, 5292U, 13047U, 2666U, 7866U, 
    9573U, 4521U, 7904U, 11080U, 14287U, 6582U, 15092U, 7928U, 
    7967U, 1724U, 17652U, 17711U, 21537U, 21508U, 20945U, 8214U, 
    5428U, 7875U, 6737U, 87U, 1692U, 13288U, 20957U, 2919U, 
    16621U, 19211U, 13741U, 2759U, 65U, 13272U, 907U, 5099U, 
    7842U, 1637U, 11145U, 14349U, 6612U, 15216U, 13144U, 2671U, 
    11084U, 14294U, 15120U, 13617U, 5337U, 13451U, 15134U, 9457U, 
    5688U, 15432U, 6900U, 18088U, 2741U, 11119U, 14324U, 15667U, 
    15408U, 9451U, 16089U, 4857U, 20761U, 99U, 13306U, 15735U, 
    16543U, 16201U, 7751U, 21499U, 3310U, 3374U, 3342U, 3391U, 
    3920U, 3661U, 3546U, 842U, 2935U, 818U, 2861U, 832U, 
    2925U, 872U, 4020U, 3677U, 3427U, 3489U, 9557U, 9911U, 
    6022U, 18336U, 7143U, 12090U, 19850U, 18941U, 17814U, 15371U, 
    16046U, 9295U, 10919U, 12614U, 20683U, 199U, 13338U, 1847U, 
    17702U, 15286U, 14202U, 12063U, 19823U, 18231U, 15775U, 12989U, 
    15023U, 17992U, 15549U, 13015U, 15055U, 18018U, 15581U, 9663U, 
    5884U, 18201U, 6992U, 8999U, 10430U, 12243U, 20156U, 9191U, 
    10795U, 12501U, 20550U, 8635U, 9697U, 11816U, 19298U, 10974U, 
    6473U, 18788U, 9078U, 10538U, 12350U, 7581U, 20333U, 9270U, 
    10903U, 12589U, 20658U, 1U, 4945U, 49U, 13230U, 4987U, 
    896U, 5057U, 4955U, 150U, 5007U, 1772U, 5147U, 13238U, 
    5067U, 12686U, 13570U, 2356U, 17742U, 15298U, 14820U, 17547U, 
    13635U, 2689U, 17777U, 15322U, 15155U, 9650U, 5872U, 18194U, 
    6980U, 8981U, 10412U, 12225U, 20138U, 9173U, 10777U, 12483U, 
    20532U, 8618U, 9679U, 11799U, 19280U, 10123U, 6142U, 18484U, 
    9008U, 10439U, 12252U, 7263U, 20174U, 9200U, 10804U, 12510U, 
    20559U, 856U, 2964U, 9610U, 8586U, 14113U, 18948U, 7679U, 
    5863U, 8948U, 10379U, 12192U, 20105U, 9140U, 10744U, 12450U, 
    20499U, 13542U, 5258U, 15207U, 19161U, 267U, 13350U, 1915U, 
    12761U, 2492U, 14861U, 18351U, 15796U, 1792U, 12739U, 2385U, 
    18172U, 314U, 13362U, 1962U, 12787U, 2522U, 14871U, 18398U, 
    15816U, 487U, 13415U, 2192U, 12820U, 2636U, 14881U, 18695U, 
    15882U, 1805U, 12750U, 2398U, 18183U, 325U, 13376U, 1973U, 
    12796U, 2533U, 14891U, 18407U, 15828U, 8599U, 9903U, 6009U, 
    18328U, 7130U, 12080U, 19840U, 18929U, 17804U, 15358U, 16037U, 
    9287U, 10911U, 12606U, 20675U, 180U, 13325U, 1828U, 17693U, 
    15274U, 14131U, 12054U, 19814U, 18216U, 15754U, 7U, 4977U, 
    60U, 13264U, 4997U, 902U, 5089U, 4966U, 160U, 5022U, 
    1782U, 5162U, 13247U, 5078U, 12708U, 2378U, 17768U, 15310U, 
    14828U, 17604U, 15224U, 17558U, 2696U, 17786U, 15334U, 15172U, 
    17U, 111U, 917U, 22U, 116U, 922U, 11781U, 18969U, 
    7689U, 6680U, 13128U, 13027U, 15070U, 18030U, 15596U, 12876U, 
    14942U, 17881U, 15468U, 11467U, 14591U, 20007U, 1598U, 11517U, 
    1255U, 20209U, 1613U, 12100U, 19860U, 11705U, 14735U, 11645U, 
    1354U, 18865U, 17824U, 15384U, 17795U, 15346U, 16013U, 21481U, 
    16666U, 18989U, 7710U, 9319U, 10950U, 12638U, 20714U, 15113U, 
    6766U, 11385U, 1197U, 12072U, 19832U, 7935U, 11488U, 1241U, 
    3886U, 4013U, 3200U, 3019U, 4111U, 4244U, 4143U, 4296U, 
    8643U, 9720U, 11824U, 19321U, 8650U, 9727U, 11831U, 19328U, 
    198U, 13337U, 1846U, 18230U, 15774U, 179U, 13324U, 1827U, 
    18215U, 15753U, 17613U, 18052U, 2721U, 8792U, 21025U, 15627U, 
    6918U, 19175U, 17098U, 17182U, 17353U, 13694U, 5383U, 4081U, 
    4122U, 18053U, 13675U, 5373U, 2722U, 8793U, 6719U, 15628U, 
    6919U, 19176U, 17099U, 17183U, 17354U, 20936U, 2906U, 16606U, 
    4221U, 11375U, 14516U, 11129U, 14340U, 6591U, 9303U, 10927U, 
    12622U, 20691U, 8663U, 9755U, 11844U, 19356U, 9110U, 10640U, 
    12382U, 20395U, 11343U, 14483U, 8331U, 13907U, 17618U, 12905U, 
    8155U, 13795U, 14977U, 17910U, 8186U, 13832U, 15503U, 13002U, 
    15039U, 18005U, 15565U, 12891U, 8140U, 13777U, 14960U, 17896U, 
    8171U, 13814U, 15486U, 11287U, 14451U, 19483U, 16248U, 11262U, 
    14435U, 19512U, 16263U, 11275U, 1139U, 19468U, 1500U, 19495U, 
    1520U, 11181U, 11041U, 14248U, 6551U, 16511U, 14387U, 6630U, 
    7920U, 9581U, 1114U, 8388U, 8290U, 8503U, 11408U, 11303U, 
    11568U, 19217U, 13176U, 19249U, 13192U, 20290U, 18858U, 21474U, 
    19057U, 19080U, 20889U, 2875U, 9551U, 18935U, 12680U, 2350U, 
    17541U, 2683U, 8593U, 18923U, 12691U, 2363U, 17751U, 18870U, 
    21487U, 11337U, 8325U, 21054U, 2949U, 19069U, 284U, 1932U, 
    12768U, 2501U, 18364U, 496U, 2201U, 12827U, 2645U, 18702U, 
    421U, 2126U, 12805U, 2619U, 18594U, 10957U, 535U, 18735U, 
    19092U, 8572U, 14093U, 17681U, 15256U, 18082U, 2733U, 15658U, 
    6960U, 6936U, 6182U, 7303U, 11618U, 14708U, 8554U, 14069U, 
    11359U, 14505U, 8347U, 13929U, 10648U, 6352U, 18680U, 7460U, 
    13085U, 21018U, 18057U, 21033U, 18071U, 19144U, 16184U, 15641U, 
    2015U, 6085U, 18447U, 7206U, 553U, 2252U, 6416U, 16237U, 
    18751U, 15925U, 7524U, 6364U, 7472U, 3841U, 3217U, 8207U, 
    3029U, 9043U, 10483U, 12305U, 20254U, 9246U, 10859U, 12565U, 
    20614U, 8583U, 13516U, 5177U, 1719U, 11013U, 14224U, 6521U, 
    14107U, 5477U, 9470U, 1761U, 7858U, 9542U, 7897U, 11030U, 
    14231U, 6530U, 14161U, 7891U, 9631U, 17586U, 13645U, 5359U, 
    15180U, 6834U, 7950U, 38U, 1669U, 5133U, 13214U, 890U, 
    5047U, 7834U, 1632U, 19064U, 16122U, 21117U, 12946U, 17963U, 
    81U, 1684U, 4544U, 21365U, 8232U, 1708U, 13858U, 5437U, 
    11247U, 2334U, 14411U, 6663U, 20836U, 2792U, 11000U, 6498U, 
    7814U, 18803U, 7606U, 20810U, 2783U, 10985U, 6484U, 7793U, 
    18794U, 7592U, 10059U, 6047U, 18416U, 7168U, 17868U, 20930U, 
    11777U, 13552U, 5270U, 2345U, 11065U, 14280U, 6573U, 8688U, 
    11869U, 19455U, 17552U, 19122U, 16154U, 15163U, 11609U, 14696U, 
    8545U, 14057U, 11557U, 14657U, 20323U, 16478U, 11351U, 14494U, 
    8339U, 13918U, 11478U, 14605U, 20165U, 16419U, 11600U, 14684U, 
    8536U, 1100U, 11456U, 14577U, 8437U, 1051U, 19980U, 16366U, 
    11254U, 14424U, 8257U, 927U, 11424U, 14564U, 8405U, 1004U, 
    19942U, 16342U, 11627U, 1326U, 8563U, 14081U, 11367U, 1184U, 
    8355U, 13940U, 14767U, 6672U, 8708U, 9948U, 11889U, 19550U, 
    8657U, 9749U, 11838U, 19350U, 13080U, 13599U, 5315U, 809U, 
    2852U, 8738U, 9963U, 11904U, 19565U, 19104U, 16138U, 8870U, 
    10072U, 12007U, 15098U, 6757U, 19668U, 18850U, 2753U, 15999U, 
    20940U, 2912U, 16613U, 21555U, 3011U, 16688U, 21469U, 2992U, 
    16658U, 11098U, 20925U, 16982U, 17128U, 17212U, 17237U, 17383U, 
    8815U, 10026U, 11967U, 19628U, 9095U, 10555U, 12367U, 20350U, 
    6365U, 7473U, 8203U, 8701U, 9941U, 11882U, 19543U, 8768U, 
    9993U, 11934U, 19595U, 8903U, 10239U, 12109U, 19869U, 19040U, 
    16096U, 8604U, 9657U, 11785U, 13851U, 19265U, 13095U, 13608U, 
    5326U, 8745U, 9970U, 11911U, 19572U, 8784U, 10009U, 11950U, 
    19611U, 8917U, 10253U, 12123U, 19883U, 19110U, 16146U, 8876U, 
    10094U, 12013U, 15105U, 19690U, 17611U, 15234U, 6845U, 7979U, 
    1735U, 17666U, 17726U, 9126U, 10681U, 12398U, 20436U, 8589U, 
    11319U, 1156U, 11434U, 1209U, 19951U, 1568U, 19527U, 1542U, 
    11392U, 14529U, 11497U, 14618U, 20191U, 16431U, 9235U, 10848U, 
    12554U, 20603U, 9059U, 10519U, 12321U, 20304U, 9025U, 10465U, 
    12287U, 20236U, 9217U, 10830U, 12536U, 20585U, 13712U, 5394U, 
    8307U, 958U, 8415U, 1019U, 7659U, 11584U, 1300U, 8520U, 
    14035U, 11537U, 1270U, 8458U, 13980U, 8832U, 10043U, 11984U, 
    19645U, 9288U, 10912U, 12607U, 20676U, 14116U, 5485U, 21448U, 
    16635U, 93U, 1700U, 13297U, 19214U, 13749U, 5418U, 2764U, 
    70U, 13280U, 912U, 5109U, 7850U, 1642U, 11149U, 14356U, 
    6621U, 13148U, 2677U, 11089U, 14302U, 15127U, 13626U, 5348U, 
    13460U, 15141U, 15439U, 6909U, 18092U, 2747U, 11124U, 14332U, 
    15674U, 15416U, 6872U, 105U, 13315U, 16207U, 7759U, 9420U, 
    12656U, 6689U, 14139U, 5642U, 13050U, 15087U, 16995U, 17141U, 
    17225U, 17250U, 17396U, 3865U, 3228U, 3326U, 4032U, 4048U, 
    20861U, 20853U, 21399U, 20975U, 21430U, 21003U, 21576U, 21605U, 
    21386U, 20961U, 21417U, 20989U, 21561U, 21591U, 3358U, 3296U, 
    4187U, 4056U, 4101U, 3515U, 3942U, 3570U, 3530U, 3954U, 
    3597U, 4068U, 4132U, 4283U, 3210U, 4166U, 3303U, 4198U, 
    4257U, 3443U, 3502U, 13041U, 18096U, 18109U, 17872U, 12713U, 
    14836U, 15453U, 11051U, 12665U, 18974U, 16063U, 14804U, 18958U, 
    16055U, 14257U, 19115U, 11186U, 6640U, 7739U, 17592U, 15189U, 
    17876U, 15460U, 12733U, 14852U, 18076U, 15649U, 18854U, 12723U, 
    16072U, 14844U, 19022U, 16081U, 16006U, 11102U, 12670U, 14812U, 
    14317U, 17572U, 2003U, 6070U, 18437U, 7191U, 541U, 2240U, 
    6401U, 16226U, 18741U, 15912U, 7509U, 18980U, 19087U, 16130U, 
    21132U, 21376U, 20910U, 21503U, 21619U, 18987U, 12U, 19000U, 
    8687U, 9919U, 11868U, 19454U, 18841U, 15991U, 7631U, 17687U, 
    15265U, 6948U, 11242U, 14403U, 6653U, 18061U, 13674U, 5372U, 
    2727U, 8799U, 6718U, 15634U, 6927U, 19181U, 17113U, 17197U, 
    17368U, 20935U, 2905U, 16605U, 4232U, 
};

static inline void InitMipsMCInstrInfo(MCInstrInfo *II) {
  II->InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 2349);
}

} // end llvm namespace
#endif // GET_INSTRINFO_MC_DESC

#ifdef GET_INSTRINFO_HEADER
#undef GET_INSTRINFO_HEADER
namespace llvm {
struct MipsGenInstrInfo : public TargetInstrInfo {
  explicit MipsGenInstrInfo(int CFSetupOpcode = -1, int CFDestroyOpcode = -1, int CatchRetOpcode = -1, int ReturnOpcode = -1);
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
MipsGenInstrInfo::MipsGenInstrInfo(int CFSetupOpcode, int CFDestroyOpcode, int CatchRetOpcode, int ReturnOpcode)
  : TargetInstrInfo(CFSetupOpcode, CFDestroyOpcode, CatchRetOpcode, ReturnOpcode) {
  InitMCInstrInfo(MipsInsts, MipsInstrNameIndices, MipsInstrNameData, 2349);
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
  brtarget1SImm16 = 5,
  brtarget21 = 6,
  brtarget21_mm = 7,
  brtarget26 = 8,
  brtarget26_mm = 9,
  brtarget7_mm = 10,
  brtarget_mm = 11,
  brtargetr6 = 12,
  calloffset16 = 13,
  calltarget = 14,
  calltarget_mm = 15,
  condcode = 16,
  cpinst_operand = 17,
  f32imm = 18,
  f64imm = 19,
  i16imm = 20,
  i1imm = 21,
  i32imm = 22,
  i64imm = 23,
  i8imm = 24,
  imm64 = 25,
  jmpoffset16 = 26,
  jmptarget = 27,
  jmptarget_mm = 28,
  li16_imm = 29,
  mem = 30,
  mem16 = 31,
  mem16_ea = 32,
  mem16sp = 33,
  mem_ea = 34,
  mem_mm_11 = 35,
  mem_mm_12 = 36,
  mem_mm_16 = 37,
  mem_mm_4 = 38,
  mem_mm_4_lsl1 = 39,
  mem_mm_4_lsl2 = 40,
  mem_mm_4sp = 41,
  mem_mm_9 = 42,
  mem_mm_gp_simm7_lsl2 = 43,
  mem_mm_sp_imm5_lsl2 = 44,
  mem_msa = 45,
  mem_simm10 = 46,
  mem_simm10_lsl1 = 47,
  mem_simm10_lsl2 = 48,
  mem_simm10_lsl3 = 49,
  mem_simm11 = 50,
  mem_simm12 = 51,
  mem_simm16 = 52,
  mem_simm9 = 53,
  movep_regpair = 54,
  pcrel16 = 55,
  reglist = 56,
  reglist16 = 57,
  regpair = 58,
  simm10 = 59,
  simm10_64 = 60,
  simm10_lsl1 = 61,
  simm10_lsl2 = 62,
  simm10_lsl3 = 63,
  simm11 = 64,
  simm12 = 65,
  simm16 = 66,
  simm16_64 = 67,
  simm16_relaxed = 68,
  simm18_lsl3 = 69,
  simm19_lsl2 = 70,
  simm23_lsl2 = 71,
  simm32 = 72,
  simm32_relaxed = 73,
  simm3_lsa2 = 74,
  simm4 = 75,
  simm5 = 76,
  simm6 = 77,
  simm7_lsl2 = 78,
  simm9 = 79,
  simm9_addiusp = 80,
  size_ins = 81,
  uimm1 = 82,
  uimm10 = 83,
  uimm16 = 84,
  uimm16_64 = 85,
  uimm16_64_relaxed = 86,
  uimm16_relaxed = 87,
  uimm1_ptr = 88,
  uimm2 = 89,
  uimm20 = 90,
  uimm26 = 91,
  uimm2_plus1 = 92,
  uimm2_ptr = 93,
  uimm3 = 94,
  uimm3_ptr = 95,
  uimm3_shift = 96,
  uimm4 = 97,
  uimm4_andi = 98,
  uimm4_ptr = 99,
  uimm5 = 100,
  uimm5_64 = 101,
  uimm5_64_report_uimm6 = 102,
  uimm5_inssize_plus1 = 103,
  uimm5_lsl2 = 104,
  uimm5_plus1 = 105,
  uimm5_plus32 = 106,
  uimm5_plus32_normalize = 107,
  uimm5_plus32_normalize_64 = 108,
  uimm5_plus33 = 109,
  uimm5_report_uimm6 = 110,
  uimm6 = 111,
  uimm6_lsl2 = 112,
  uimm7 = 113,
  uimm8 = 114,
  uimm_range_2_64 = 115,
  uimmz = 116,
  vsplat_simm10 = 117,
  vsplat_simm5 = 118,
  vsplat_uimm1 = 119,
  vsplat_uimm2 = 120,
  vsplat_uimm3 = 121,
  vsplat_uimm4 = 122,
  vsplat_uimm5 = 123,
  vsplat_uimm6 = 124,
  vsplat_uimm8 = 125,
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
  { Mips::APPEND, Mips::APPEND, Mips::APPEND_MMR2 },
  { Mips::BALIGN, Mips::BALIGN, Mips::BALIGN_MMR2 },
  { Mips::BITREV, Mips::BITREV, Mips::BITREV_MM },
  { Mips::BPOSGE32, Mips::BPOSGE32, Mips::BPOSGE32_MM },
  { Mips::CMPGDU_EQ_QB, Mips::CMPGDU_EQ_QB, Mips::CMPGDU_EQ_QB_MMR2 },
  { Mips::CMPGDU_LE_QB, Mips::CMPGDU_LE_QB, Mips::CMPGDU_LE_QB_MMR2 },
  { Mips::CMPGDU_LT_QB, Mips::CMPGDU_LT_QB, Mips::CMPGDU_LT_QB_MMR2 },
  { Mips::CMPGU_EQ_QB, Mips::CMPGU_EQ_QB, Mips::CMPGU_EQ_QB_MM },
  { Mips::CMPGU_LE_QB, Mips::CMPGU_LE_QB, Mips::CMPGU_LE_QB_MM },
  { Mips::CMPGU_LT_QB, Mips::CMPGU_LT_QB, Mips::CMPGU_LT_QB_MM },
  { Mips::CMPU_EQ_QB, Mips::CMPU_EQ_QB, Mips::CMPU_EQ_QB_MM },
  { Mips::CMPU_LE_QB, Mips::CMPU_LE_QB, Mips::CMPU_LE_QB_MM },
  { Mips::CMPU_LT_QB, Mips::CMPU_LT_QB, Mips::CMPU_LT_QB_MM },
  { Mips::CMP_EQ_PH, Mips::CMP_EQ_PH, Mips::CMP_EQ_PH_MM },
  { Mips::CMP_LE_PH, Mips::CMP_LE_PH, Mips::CMP_LE_PH_MM },
  { Mips::CMP_LT_PH, Mips::CMP_LT_PH, Mips::CMP_LT_PH_MM },
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
  { Mips::MODSUB, Mips::MODSUB, Mips::MODSUB_MM },
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
  { Mips::MULSAQ_S_W_PH, Mips::MULSAQ_S_W_PH, Mips::MULSAQ_S_W_PH_MM },
  { Mips::MULSA_W_PH, Mips::MULSA_W_PH, Mips::MULSA_W_PH_MMR2 },
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
  unsigned end = 158;
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
  { Mips::BEQC, Mips::BEQC, Mips::BEQC_MMR6 },
  { Mips::BEQZALC, Mips::BEQZALC, Mips::BEQZALC_MMR6 },
  { Mips::BEQZC, Mips::BEQZC, Mips::BEQZC_MMR6 },
  { Mips::BGEC, Mips::BGEC, Mips::BGEC_MMR6 },
  { Mips::BGEUC, Mips::BGEUC, Mips::BGEUC_MMR6 },
  { Mips::BGEZALC, Mips::BGEZALC, Mips::BGEZALC_MMR6 },
  { Mips::BGTZALC, Mips::BGTZALC, Mips::BGTZALC_MMR6 },
  { Mips::BITSWAP, Mips::BITSWAP, Mips::BITSWAP_MMR6 },
  { Mips::BLEZALC, Mips::BLEZALC, Mips::BLEZALC_MMR6 },
  { Mips::BLTC, Mips::BLTC, Mips::BLTC_MMR6 },
  { Mips::BLTUC, Mips::BLTUC, Mips::BLTUC_MMR6 },
  { Mips::BLTZALC, Mips::BLTZALC, Mips::BLTZALC_MMR6 },
  { Mips::BNEC, Mips::BNEC, Mips::BNEC_MMR6 },
  { Mips::BNEZALC, Mips::BNEZALC, Mips::BNEZALC_MMR6 },
  { Mips::BNEZC, Mips::BNEZC, Mips::BNEZC_MMR6 },
  { Mips::BNVC, Mips::BNVC, Mips::BNVC_MMR6 },
  { Mips::BOVC, Mips::BOVC, Mips::BOVC_MMR6 },
  { Mips::CACHE_R6, Mips::CACHE_R6, Mips::CACHE_MMR6 },
  { Mips::CLO_R6, Mips::CLO_R6, Mips::CLO_MMR6 },
  { Mips::CLZ_R6, Mips::CLZ_R6, Mips::CLZ_MMR6 },
  { Mips::CMP_EQ_D, Mips::CMP_EQ_D, Mips::CMP_EQ_D_MMR6 },
  { Mips::CMP_EQ_S, Mips::CMP_EQ_S, Mips::CMP_EQ_S_MMR6 },
  { Mips::CMP_F_D, Mips::CMP_F_D, Mips::CMP_AF_D_MMR6 },
  { Mips::CMP_F_S, Mips::CMP_F_S, Mips::CMP_AF_S_MMR6 },
  { Mips::CMP_LE_D, Mips::CMP_LE_D, Mips::CMP_LE_D_MMR6 },
  { Mips::CMP_LE_S, Mips::CMP_LE_S, Mips::CMP_LE_S_MMR6 },
  { Mips::CMP_LT_D, Mips::CMP_LT_D, Mips::CMP_LT_D_MMR6 },
  { Mips::CMP_LT_S, Mips::CMP_LT_S, Mips::CMP_LT_S_MMR6 },
  { Mips::CMP_SAF_D, Mips::CMP_SAF_D, Mips::CMP_SAF_D_MMR6 },
  { Mips::CMP_SAF_S, Mips::CMP_SAF_S, Mips::CMP_SAF_S_MMR6 },
  { Mips::CMP_SEQ_D, Mips::CMP_SEQ_D, Mips::CMP_SEQ_D_MMR6 },
  { Mips::CMP_SEQ_S, Mips::CMP_SEQ_S, Mips::CMP_SEQ_S_MMR6 },
  { Mips::CMP_SLE_D, Mips::CMP_SLE_D, Mips::CMP_SLE_D_MMR6 },
  { Mips::CMP_SLE_S, Mips::CMP_SLE_S, Mips::CMP_SLE_S_MMR6 },
  { Mips::CMP_SLT_D, Mips::CMP_SLT_D, Mips::CMP_SLT_D_MMR6 },
  { Mips::CMP_SLT_S, Mips::CMP_SLT_S, Mips::CMP_SLT_S_MMR6 },
  { Mips::CMP_SUEQ_D, Mips::CMP_SUEQ_D, Mips::CMP_SUEQ_D_MMR6 },
  { Mips::CMP_SUEQ_S, Mips::CMP_SUEQ_S, Mips::CMP_SUEQ_S_MMR6 },
  { Mips::CMP_SULE_D, Mips::CMP_SULE_D, Mips::CMP_SULE_D_MMR6 },
  { Mips::CMP_SULE_S, Mips::CMP_SULE_S, Mips::CMP_SULE_S_MMR6 },
  { Mips::CMP_SULT_D, Mips::CMP_SULT_D, Mips::CMP_SULT_D_MMR6 },
  { Mips::CMP_SULT_S, Mips::CMP_SULT_S, Mips::CMP_SULT_S_MMR6 },
  { Mips::CMP_SUN_D, Mips::CMP_SUN_D, Mips::CMP_SUN_D_MMR6 },
  { Mips::CMP_SUN_S, Mips::CMP_SUN_S, Mips::CMP_SUN_S_MMR6 },
  { Mips::CMP_UEQ_D, Mips::CMP_UEQ_D, Mips::CMP_UEQ_D_MMR6 },
  { Mips::CMP_UEQ_S, Mips::CMP_UEQ_S, Mips::CMP_UEQ_S_MMR6 },
  { Mips::CMP_ULE_D, Mips::CMP_ULE_D, Mips::CMP_ULE_D_MMR6 },
  { Mips::CMP_ULE_S, Mips::CMP_ULE_S, Mips::CMP_ULE_S_MMR6 },
  { Mips::CMP_ULT_D, Mips::CMP_ULT_D, Mips::CMP_ULT_D_MMR6 },
  { Mips::CMP_ULT_S, Mips::CMP_ULT_S, Mips::CMP_ULT_S_MMR6 },
  { Mips::CMP_UN_D, Mips::CMP_UN_D, Mips::CMP_UN_D_MMR6 },
  { Mips::CMP_UN_S, Mips::CMP_UN_S, Mips::CMP_UN_S_MMR6 },
  { Mips::DCLO_R6, Mips::DCLO_R6, Mips::DCLO_MM64R6 },
  { Mips::DCLZ_R6, Mips::DCLZ_R6, Mips::DCLZ_MM64R6 },
  { Mips::DIV, Mips::DIV, Mips::DIV_MMR6 },
  { Mips::DIVU, Mips::DIVU, Mips::DIVU_MMR6 },
  { Mips::JIALC, Mips::JIALC, Mips::JIALC_MMR6 },
  { Mips::JIC, Mips::JIC, Mips::JIC_MMR6 },
  { Mips::LDPC, Mips::LDPC, Mips::LDPC_MM64R6 },
  { Mips::LLD_R6, Mips::LLD_R6, Mips::LLD_MM64R6 },
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
  { Mips::SELEQZ_D, Mips::SELEQZ_D, Mips::SELEQZ_D_MMR6 },
  { Mips::SELEQZ_S, Mips::SELEQZ_S, Mips::SELEQZ_S_MMR6 },
  { Mips::SELNEZ, Mips::SELNEZ, Mips::SELNEZ_MMR6 },
  { Mips::SELNEZ_D, Mips::SELNEZ_D, Mips::SELNEZ_D_MMR6 },
  { Mips::SELNEZ_S, Mips::SELNEZ_S, Mips::SELNEZ_S_MMR6 },
  { Mips::SEL_D, Mips::SEL_D, Mips::SEL_D_MMR6 },
  { Mips::SEL_S, Mips::SEL_S, Mips::SEL_S_MMR6 },
}; // End of MipsR62MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 84;
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
  { Mips::LWu, Mips::LWu, Mips::LWU_MM },
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
  unsigned end = 180;
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
  { Mips::DADD, Mips::DADD, Mips::DADD_MM64R6 },
  { Mips::DADDiu, Mips::DADDiu, Mips::DADDIU_MM64R6 },
  { Mips::DADDu, Mips::DADDu, Mips::DADDU_MM64R6 },
  { Mips::DCLO, Mips::DCLO, Mips::DCLO_MM64R6 },
  { Mips::DCLZ, Mips::DCLZ, Mips::DCLZ_MM64R6 },
  { Mips::DI, Mips::DI, Mips::DI_MMR6 },
  { Mips::DROTR, Mips::DROTR, Mips::DROTR_MM64R6 },
  { Mips::DROTR32, Mips::DROTR32, Mips::DROTR32_MM64R6 },
  { Mips::DROTRV, Mips::DROTRV, Mips::DROTRV_MM64R6 },
  { Mips::DSLL, Mips::DSLL, Mips::DSLL_MM64R6 },
  { Mips::DSLL32, Mips::DSLL32, Mips::DSLL32_MM64R6 },
  { Mips::DSLLV, Mips::DSLLV, Mips::DSLLV_MM64R6 },
  { Mips::DSRA, Mips::DSRA, Mips::DSRA_MM64R6 },
  { Mips::DSRA32, Mips::DSRA32, Mips::DSRA32_MM64R6 },
  { Mips::DSRAV, Mips::DSRAV, Mips::DSRAV_MM64R6 },
  { Mips::DSRL, Mips::DSRL, Mips::DSRL_MM64R6 },
  { Mips::DSRL32, Mips::DSRL32, Mips::DSRL32_MM64R6 },
  { Mips::DSRLV, Mips::DSRLV, Mips::DSRLV_MM64R6 },
  { Mips::DSUB, Mips::DSUB, Mips::DSUB_MM64R6 },
  { Mips::DSUBu, Mips::DSUBu, Mips::DSUBU_MM64R6 },
  { Mips::EI, Mips::EI, Mips::EI_MMR6 },
  { Mips::EXT, Mips::EXT, Mips::EXT_MMR6 },
  { Mips::FLOOR_W_D64, Mips::FLOOR_W_D64, Mips::FLOOR_W_D_MMR6 },
  { Mips::FLOOR_W_S, Mips::FLOOR_W_S, Mips::FLOOR_W_S_MMR6 },
  { Mips::FSQRT_S, Mips::FSQRT_S, Mips::SQRT_S_MMR6 },
  { Mips::INS, Mips::INS, Mips::INS_MMR6 },
  { Mips::LD, Mips::LD, Mips::LD_MM64R6 },
  { Mips::LDC1, Mips::LDC1, (uint16_t)-1U },
  { Mips::LDC164, Mips::LDC164, Mips::LDC1_D64_MMR6 },
  { Mips::LDC2, Mips::LDC2, Mips::LDC2_MMR6 },
  { Mips::LLD, Mips::LLD, Mips::LLD_MM64R6 },
  { Mips::LW, Mips::LW, Mips::LW_MMR6 },
  { Mips::LWC2, Mips::LWC2, Mips::LWC2_MMR6 },
  { Mips::LWu, Mips::LWu, Mips::LWU_MM64R6 },
  { Mips::MTHC1_D32, Mips::MTHC1_D32, Mips::MTHC1_D32_MMR6 },
  { Mips::NOR, Mips::NOR, Mips::NOR_MMR6 },
  { Mips::OR, Mips::OR, Mips::OR_MMR6 },
  { Mips::ORi, Mips::ORi, Mips::ORI_MMR6 },
  { Mips::PAUSE, Mips::PAUSE, Mips::PAUSE_MMR6 },
  { Mips::ROUND_W_D64, Mips::ROUND_W_D64, Mips::ROUND_W_D_MMR6 },
  { Mips::ROUND_W_S, Mips::ROUND_W_S, Mips::ROUND_W_S_MMR6 },
  { Mips::SB, Mips::SB, Mips::SB_MMR6 },
  { Mips::SD, Mips::SD, Mips::SD_MM64R6 },
  { Mips::SDC164, Mips::SDC164, Mips::SDC1_D64_MMR6 },
  { Mips::SDC2, Mips::SDC2, Mips::SDC2_MMR6 },
  { Mips::SEB, Mips::SEB, Mips::SEB_MMR6 },
  { Mips::SEH, Mips::SEH, Mips::SEH_MMR6 },
  { Mips::SSNOP, Mips::SSNOP, Mips::SSNOP_MMR6 },
  { Mips::SUB, Mips::SUB, Mips::SUB_MMR6 },
  { Mips::SUBu, Mips::SUBu, Mips::SUBU_MMR6 },
  { Mips::SWC2, Mips::SWC2, Mips::SWC2_MMR6 },
  { Mips::SYNC, Mips::SYNC, Mips::SYNC_MMR6 },
  { Mips::SYNCI, Mips::SYNCI, Mips::SYNCI_MMR6 },
  { Mips::TRUNC_W_D64, Mips::TRUNC_W_D64, Mips::TRUNC_W_D_MMR6 },
  { Mips::TRUNC_W_S, Mips::TRUNC_W_S, Mips::TRUNC_W_S_MMR6 },
  { Mips::XOR, Mips::XOR, Mips::XOR_MMR6 },
  { Mips::XORi, Mips::XORi, Mips::XORI_MMR6 },
}; // End of Std2MicroMipsR6Table

  unsigned mid;
  unsigned start = 0;
  unsigned end = 66;
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

