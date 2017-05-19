/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Subtarget Enumeration Source Fragment                                      *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_SUBTARGETINFO_ENUM
#undef GET_SUBTARGETINFO_ENUM

namespace llvm {
namespace Mips {
enum {
  FeatureCnMips = 0,
  FeatureDSP = 1,
  FeatureDSPR2 = 2,
  FeatureDSPR3 = 3,
  FeatureEVA = 4,
  FeatureFP64Bit = 5,
  FeatureFPXX = 6,
  FeatureGP64Bit = 7,
  FeatureMSA = 8,
  FeatureMicroMips = 9,
  FeatureMips1 = 10,
  FeatureMips2 = 11,
  FeatureMips3 = 12,
  FeatureMips3_32 = 13,
  FeatureMips3_32r2 = 14,
  FeatureMips4 = 15,
  FeatureMips4_32 = 16,
  FeatureMips4_32r2 = 17,
  FeatureMips5 = 18,
  FeatureMips5_32r2 = 19,
  FeatureMips16 = 20,
  FeatureMips32 = 21,
  FeatureMips32r2 = 22,
  FeatureMips32r3 = 23,
  FeatureMips32r5 = 24,
  FeatureMips32r6 = 25,
  FeatureMips64 = 26,
  FeatureMips64r2 = 27,
  FeatureMips64r3 = 28,
  FeatureMips64r5 = 29,
  FeatureMips64r6 = 30,
  FeatureNaN2008 = 31,
  FeatureNoABICalls = 32,
  FeatureNoOddSPReg = 33,
  FeaturePTR64Bit = 34,
  FeatureSingleFloat = 35,
  FeatureSoftFloat = 36,
  FeatureUseTCCInDIV = 37,
  FeatureVFPU = 38,
  ImplP5600 = 39
};
} // end namespace Mips
} // end namespace llvm

#endif // GET_SUBTARGETINFO_ENUM


#ifdef GET_SUBTARGETINFO_MC_DESC
#undef GET_SUBTARGETINFO_MC_DESC

namespace llvm {
// Sorted (by key) array of values for CPU features.
extern const llvm::SubtargetFeatureKV MipsFeatureKV[] = {
  { "cnmips", "Octeon cnMIPS Support", { Mips::FeatureCnMips }, { Mips::FeatureMips64r2 } },
  { "dsp", "Mips DSP ASE", { Mips::FeatureDSP }, { } },
  { "dspr2", "Mips DSP-R2 ASE", { Mips::FeatureDSPR2 }, { Mips::FeatureDSP } },
  { "dspr3", "Mips DSP-R3 ASE", { Mips::FeatureDSPR3 }, { Mips::FeatureDSP, Mips::FeatureDSPR2 } },
  { "eva", "Mips EVA ASE", { Mips::FeatureEVA }, { } },
  { "fp64", "Support 64-bit FP registers", { Mips::FeatureFP64Bit }, { } },
  { "fpxx", "Support for FPXX", { Mips::FeatureFPXX }, { } },
  { "gp64", "General Purpose Registers are 64-bit wide", { Mips::FeatureGP64Bit }, { } },
  { "micromips", "microMips mode", { Mips::FeatureMicroMips }, { } },
  { "mips1", "Mips I ISA Support [highly experimental]", { Mips::FeatureMips1 }, { } },
  { "mips16", "Mips16 mode", { Mips::FeatureMips16 }, { } },
  { "mips2", "Mips II ISA Support [highly experimental]", { Mips::FeatureMips2 }, { Mips::FeatureMips1 } },
  { "mips3", "MIPS III ISA Support [highly experimental]", { Mips::FeatureMips3 }, { Mips::FeatureMips2, Mips::FeatureMips3_32, Mips::FeatureMips3_32r2, Mips::FeatureGP64Bit, Mips::FeatureFP64Bit } },
  { "mips32", "Mips32 ISA Support", { Mips::FeatureMips32 }, { Mips::FeatureMips2, Mips::FeatureMips3_32, Mips::FeatureMips4_32 } },
  { "mips32r2", "Mips32r2 ISA Support", { Mips::FeatureMips32r2 }, { Mips::FeatureMips3_32r2, Mips::FeatureMips4_32r2, Mips::FeatureMips5_32r2, Mips::FeatureMips32 } },
  { "mips32r3", "Mips32r3 ISA Support", { Mips::FeatureMips32r3 }, { Mips::FeatureMips32r2 } },
  { "mips32r5", "Mips32r5 ISA Support", { Mips::FeatureMips32r5 }, { Mips::FeatureMips32r3 } },
  { "mips32r6", "Mips32r6 ISA Support [experimental]", { Mips::FeatureMips32r6 }, { Mips::FeatureMips32r5, Mips::FeatureFP64Bit, Mips::FeatureNaN2008 } },
  { "mips3_32", "Subset of MIPS-III that is also in MIPS32 [highly experimental]", { Mips::FeatureMips3_32 }, { } },
  { "mips3_32r2", "Subset of MIPS-III that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips3_32r2 }, { } },
  { "mips4", "MIPS IV ISA Support", { Mips::FeatureMips4 }, { Mips::FeatureMips3, Mips::FeatureMips4_32, Mips::FeatureMips4_32r2 } },
  { "mips4_32", "Subset of MIPS-IV that is also in MIPS32 [highly experimental]", { Mips::FeatureMips4_32 }, { } },
  { "mips4_32r2", "Subset of MIPS-IV that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips4_32r2 }, { } },
  { "mips5", "MIPS V ISA Support [highly experimental]", { Mips::FeatureMips5 }, { Mips::FeatureMips4, Mips::FeatureMips5_32r2 } },
  { "mips5_32r2", "Subset of MIPS-V that is also in MIPS32r2 [highly experimental]", { Mips::FeatureMips5_32r2 }, { } },
  { "mips64", "Mips64 ISA Support", { Mips::FeatureMips64 }, { Mips::FeatureMips5, Mips::FeatureMips32 } },
  { "mips64r2", "Mips64r2 ISA Support", { Mips::FeatureMips64r2 }, { Mips::FeatureMips64, Mips::FeatureMips32r2 } },
  { "mips64r3", "Mips64r3 ISA Support", { Mips::FeatureMips64r3 }, { Mips::FeatureMips64r2, Mips::FeatureMips32r3 } },
  { "mips64r5", "Mips64r5 ISA Support", { Mips::FeatureMips64r5 }, { Mips::FeatureMips64r3, Mips::FeatureMips32r5 } },
  { "mips64r6", "Mips64r6 ISA Support [experimental]", { Mips::FeatureMips64r6 }, { Mips::FeatureMips32r6, Mips::FeatureMips64r5, Mips::FeatureNaN2008 } },
  { "msa", "Mips MSA ASE", { Mips::FeatureMSA }, { } },
  { "nan2008", "IEEE 754-2008 NaN encoding", { Mips::FeatureNaN2008 }, { } },
  { "noabicalls", "Disable SVR4-style position-independent code", { Mips::FeatureNoABICalls }, { } },
  { "nooddspreg", "Disable odd numbered single-precision registers", { Mips::FeatureNoOddSPReg }, { } },
  { "p5600", "The P5600 Processor", { Mips::ImplP5600 }, { Mips::FeatureMips32r5 } },
  { "ptr64", "Pointers are 64-bit wide", { Mips::FeaturePTR64Bit }, { } },
  { "single-float", "Only supports single precision float", { Mips::FeatureSingleFloat }, { } },
  { "soft-float", "Does not support floating point instructions", { Mips::FeatureSoftFloat }, { } },
  { "use-tcc-in-div", "Force the assembler to use trapping", { Mips::FeatureUseTCCInDIV }, { } },
  { "vfpu", "Enable vector FPU instructions", { Mips::FeatureVFPU }, { } }
};

// Sorted (by key) array of values for CPU subtype.
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[] = {
  { "mips1", "Select the mips1 processor", { Mips::FeatureMips1 }, { } },
  { "mips2", "Select the mips2 processor", { Mips::FeatureMips2 }, { } },
  { "mips3", "Select the mips3 processor", { Mips::FeatureMips3 }, { } },
  { "mips32", "Select the mips32 processor", { Mips::FeatureMips32 }, { } },
  { "mips32r2", "Select the mips32r2 processor", { Mips::FeatureMips32r2 }, { } },
  { "mips32r3", "Select the mips32r3 processor", { Mips::FeatureMips32r3 }, { } },
  { "mips32r5", "Select the mips32r5 processor", { Mips::FeatureMips32r5 }, { } },
  { "mips32r6", "Select the mips32r6 processor", { Mips::FeatureMips32r6 }, { } },
  { "mips4", "Select the mips4 processor", { Mips::FeatureMips4 }, { } },
  { "mips5", "Select the mips5 processor", { Mips::FeatureMips5 }, { } },
  { "mips64", "Select the mips64 processor", { Mips::FeatureMips64 }, { } },
  { "mips64r2", "Select the mips64r2 processor", { Mips::FeatureMips64r2 }, { } },
  { "mips64r3", "Select the mips64r3 processor", { Mips::FeatureMips64r3 }, { } },
  { "mips64r5", "Select the mips64r5 processor", { Mips::FeatureMips64r5 }, { } },
  { "mips64r6", "Select the mips64r6 processor", { Mips::FeatureMips64r6 }, { } },
  { "octeon", "Select the octeon processor", { Mips::FeatureMips64r2, Mips::FeatureCnMips }, { } },
  { "p5600", "Select the p5600 processor", { Mips::ImplP5600 }, { } }
};

#ifdef DBGFIELD
#error "<target>GenSubtargetInfo.inc requires a DBGFIELD macro"
#endif
#ifndef NDEBUG
#define DBGFIELD(x) x,
#else
#define DBGFIELD(x)
#endif

// Functional units for "MipsGenericItineraries"
namespace MipsGenericItinerariesFU {
  const unsigned ALU = 1 << 0;
  const unsigned IMULDIV = 1 << 1;
} // end namespace MipsGenericItinerariesFU

extern const llvm::InstrStage MipsStages[] = {
  { 0, 0, 0, llvm::InstrStage::Required }, // No itinerary
  { 1, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 1
  { 2, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 2
  { 3, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 3
  { 38, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 4
  { 17, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 5
  { 4, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 6
  { 36, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 7
  { 23, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 8
  { 8, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 9
  { 7, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 10
  { 12, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 11
  { 54, MipsGenericItinerariesFU::ALU, -1, (llvm::InstrStage::ReservationKinds)0 }, // 12
  { 1, MipsGenericItinerariesFU::IMULDIV, -1, (llvm::InstrStage::ReservationKinds)0 }, // 13
  { 0, 0, 0, llvm::InstrStage::Required } // End stages
};
extern const unsigned MipsOperandCycles[] = {
  0, // No itinerary
  0 // End operand cycles
};
extern const unsigned MipsForwardingPaths[] = {
 0, // No itinerary
 0 // End bypass tables
};

static const llvm::InstrItinerary MipsGenericItineraries[] = {
  { 0, 0, 0, 0, 0 }, // 0 NoInstrModel
  { 1, 1, 2, 0, 0 }, // 1 IIPseudo
  { 1, 1, 2, 0, 0 }, // 2 II_ABS
  { 1, 1, 2, 0, 0 }, // 3 II_ADD
  { 1, 1, 2, 0, 0 }, // 4 II_ADDIUPC
  { 1, 1, 2, 0, 0 }, // 5 II_ADDIU
  { 1, 1, 2, 0, 0 }, // 6 II_ADDU
  { 1, 1, 2, 0, 0 }, // 7 II_ADDI
  { 1, 1, 2, 0, 0 }, // 8 II_ALIGN
  { 1, 1, 2, 0, 0 }, // 9 II_ALUIPC
  { 1, 1, 2, 0, 0 }, // 10 II_AND
  { 1, 1, 2, 0, 0 }, // 11 II_ANDI
  { 1, 1, 2, 0, 0 }, // 12 II_AUI
  { 1, 1, 2, 0, 0 }, // 13 II_AUIPC
  { 1, 1, 2, 0, 0 }, // 14 IIM16Alu
  { 1, 1, 2, 0, 0 }, // 15 II_B
  { 1, 1, 2, 0, 0 }, // 16 II_BADDU
  { 1, 1, 2, 0, 0 }, // 17 II_BC
  { 1, 1, 2, 0, 0 }, // 18 II_BALC
  { 1, 1, 2, 0, 0 }, // 19 II_BCCZAL
  { 1, 1, 2, 0, 0 }, // 20 II_BBIT
  { 1, 1, 2, 0, 0 }, // 21 II_BC1CCZ
  { 1, 1, 2, 0, 0 }, // 22 II_BC1F
  { 1, 1, 2, 0, 0 }, // 23 II_BC1FL
  { 1, 1, 2, 0, 0 }, // 24 II_BC1T
  { 1, 1, 2, 0, 0 }, // 25 II_BC1TL
  { 1, 1, 2, 0, 0 }, // 26 II_BCC
  { 1, 1, 2, 0, 0 }, // 27 II_BCCC
  { 1, 1, 2, 0, 0 }, // 28 II_BCCZ
  { 1, 1, 2, 0, 0 }, // 29 II_BCCZC
  { 1, 1, 2, 0, 0 }, // 30 II_BCCZALS
  { 1, 1, 2, 0, 0 }, // 31 II_BITSWAP
  { 1, 1, 2, 0, 0 }, // 32 II_BREAK
  { 1, 2, 3, 0, 0 }, // 33 II_MTC1
  { 1, 1, 2, 0, 0 }, // 34 II_CACHE
  { 1, 1, 2, 0, 0 }, // 35 II_CACHEE
  { 1, 1, 2, 0, 0 }, // 36 II_CEIL
  { 1, 2, 3, 0, 0 }, // 37 II_CFC1
  { 1, 1, 2, 0, 0 }, // 38 II_CLO
  { 1, 1, 2, 0, 0 }, // 39 II_CLZ
  { 1, 2, 3, 0, 0 }, // 40 II_CTC1
  { 1, 1, 2, 0, 0 }, // 41 II_CVT
  { 1, 3, 4, 0, 0 }, // 42 II_C_CC_D
  { 1, 3, 4, 0, 0 }, // 43 II_C_CC_S
  { 1, 1, 2, 0, 0 }, // 44 II_DADD
  { 1, 1, 2, 0, 0 }, // 45 II_DADDIU
  { 1, 1, 2, 0, 0 }, // 46 II_DADDU
  { 1, 1, 2, 0, 0 }, // 47 II_DADDI
  { 1, 1, 2, 0, 0 }, // 48 II_DAHI
  { 1, 1, 2, 0, 0 }, // 49 II_DALIGN
  { 1, 1, 2, 0, 0 }, // 50 II_DATI
  { 1, 1, 2, 0, 0 }, // 51 II_DAUI
  { 1, 1, 2, 0, 0 }, // 52 II_DBITSWAP
  { 1, 1, 2, 0, 0 }, // 53 II_DCLO
  { 1, 1, 2, 0, 0 }, // 54 II_DCLZ
  { 1, 4, 5, 0, 0 }, // 55 II_DDIV
  { 1, 4, 5, 0, 0 }, // 56 II_DDIVU
  { 1, 1, 2, 0, 0 }, // 57 II_DERET
  { 1, 1, 2, 0, 0 }, // 58 II_EXT
  { 1, 1, 2, 0, 0 }, // 59 II_DI
  { 1, 1, 2, 0, 0 }, // 60 II_INS
  { 1, 4, 5, 0, 0 }, // 61 II_DIV
  { 1, 4, 5, 0, 0 }, // 62 II_DIVU
  { 1, 1, 2, 0, 0 }, // 63 II_DLSA
  { 1, 2, 3, 0, 0 }, // 64 II_DMFC0
  { 1, 2, 3, 0, 0 }, // 65 II_DMFC1
  { 1, 2, 3, 0, 0 }, // 66 II_DMFC2
  { 1, 5, 6, 0, 0 }, // 67 II_DMOD
  { 1, 5, 6, 0, 0 }, // 68 II_DMODU
  { 1, 2, 3, 0, 0 }, // 69 II_DMTC0
  { 1, 2, 3, 0, 0 }, // 70 II_DMTC1
  { 1, 2, 3, 0, 0 }, // 71 II_DMTC2
  { 1, 5, 6, 0, 0 }, // 72 II_DMUH
  { 1, 5, 6, 0, 0 }, // 73 II_DMUHU
  { 1, 5, 6, 0, 0 }, // 74 II_DMUL
  { 1, 5, 6, 0, 0 }, // 75 II_DMULT
  { 1, 5, 6, 0, 0 }, // 76 II_DMULTU
  { 1, 5, 6, 0, 0 }, // 77 II_DMULU
  { 1, 1, 2, 0, 0 }, // 78 II_POP
  { 1, 1, 2, 0, 0 }, // 79 II_DROTR
  { 1, 1, 2, 0, 0 }, // 80 II_DROTR32
  { 1, 1, 2, 0, 0 }, // 81 II_DROTRV
  { 1, 1, 2, 0, 0 }, // 82 II_DSLL
  { 1, 1, 2, 0, 0 }, // 83 II_DSLL32
  { 1, 1, 2, 0, 0 }, // 84 II_DSLLV
  { 1, 1, 2, 0, 0 }, // 85 II_DSRA
  { 1, 1, 2, 0, 0 }, // 86 II_DSRA32
  { 1, 1, 2, 0, 0 }, // 87 II_DSRAV
  { 1, 1, 2, 0, 0 }, // 88 II_DSRL
  { 1, 1, 2, 0, 0 }, // 89 II_DSRL32
  { 1, 1, 2, 0, 0 }, // 90 II_DSRLV
  { 1, 1, 2, 0, 0 }, // 91 II_DSUB
  { 1, 1, 2, 0, 0 }, // 92 II_DSUBU
  { 1, 1, 2, 0, 0 }, // 93 II_EHB
  { 1, 1, 2, 0, 0 }, // 94 II_EI
  { 1, 1, 2, 0, 0 }, // 95 II_ERET
  { 1, 1, 2, 0, 0 }, // 96 II_ERETNC
  { 1, 2, 3, 0, 0 }, // 97 II_MFC1
  { 1, 6, 7, 0, 0 }, // 98 II_ADD_D
  { 1, 6, 7, 0, 0 }, // 99 II_ADD_S
  { 1, 7, 8, 0, 0 }, // 100 II_DIV_D
  { 1, 8, 9, 0, 0 }, // 101 II_DIV_S
  { 1, 1, 2, 0, 0 }, // 102 II_FLOOR
  { 1, 2, 3, 0, 0 }, // 103 II_MOV_D
  { 1, 2, 3, 0, 0 }, // 104 II_MOV_S
  { 1, 9, 10, 0, 0 }, // 105 II_MUL_D
  { 1, 10, 11, 0, 0 }, // 106 II_MUL_S
  { 1, 1, 2, 0, 0 }, // 107 II_NEG
  { 1, 11, 12, 0, 0 }, // 108 II_SQRT_D
  { 1, 12, 13, 0, 0 }, // 109 II_SQRT_S
  { 1, 6, 7, 0, 0 }, // 110 II_SUB_D
  { 1, 6, 7, 0, 0 }, // 111 II_SUB_S
  { 1, 1, 2, 0, 0 }, // 112 II_J
  { 1, 1, 2, 0, 0 }, // 113 II_JAL
  { 1, 1, 2, 0, 0 }, // 114 II_JALR
  { 1, 1, 2, 0, 0 }, // 115 II_JALRC
  { 1, 1, 2, 0, 0 }, // 116 II_JALRS
  { 1, 1, 2, 0, 0 }, // 117 II_JALR_HB
  { 1, 1, 2, 0, 0 }, // 118 II_JALS
  { 1, 1, 2, 0, 0 }, // 119 II_JIALC
  { 1, 1, 2, 0, 0 }, // 120 II_JR
  { 1, 1, 2, 0, 0 }, // 121 II_JRADDIUSP
  { 1, 1, 2, 0, 0 }, // 122 II_JRC
  { 1, 1, 2, 0, 0 }, // 123 II_JR_HB
  { 1, 3, 4, 0, 0 }, // 124 II_LB
  { 1, 3, 4, 0, 0 }, // 125 II_LBE
  { 1, 3, 4, 0, 0 }, // 126 II_LBU
  { 1, 3, 4, 0, 0 }, // 127 II_LBUE
  { 1, 3, 4, 0, 0 }, // 128 II_LD
  { 1, 3, 4, 0, 0 }, // 129 II_LDC1
  { 1, 3, 4, 0, 0 }, // 130 II_LDC2
  { 1, 3, 4, 0, 0 }, // 131 II_LDC3
  { 1, 3, 4, 0, 0 }, // 132 II_LDL
  { 1, 3, 4, 0, 0 }, // 133 II_LDPC
  { 1, 3, 4, 0, 0 }, // 134 II_LDR
  { 1, 3, 4, 0, 0 }, // 135 II_LDXC1
  { 1, 3, 4, 0, 0 }, // 136 II_LH
  { 0, 0, 0, 0, 0 }, // 137 II_LHE
  { 1, 3, 4, 0, 0 }, // 138 II_LHU
  { 1, 3, 4, 0, 0 }, // 139 II_LHUE
  { 1, 3, 4, 0, 0 }, // 140 II_LL
  { 1, 3, 4, 0, 0 }, // 141 II_LLD
  { 1, 3, 4, 0, 0 }, // 142 II_LLE
  { 1, 1, 2, 0, 0 }, // 143 II_LSA
  { 1, 1, 2, 0, 0 }, // 144 II_LUI
  { 1, 3, 4, 0, 0 }, // 145 II_LUXC1
  { 1, 3, 4, 0, 0 }, // 146 II_LW
  { 1, 3, 4, 0, 0 }, // 147 II_LWC1
  { 1, 3, 4, 0, 0 }, // 148 II_LWC2
  { 1, 3, 4, 0, 0 }, // 149 II_LWC3
  { 0, 0, 0, 0, 0 }, // 150 II_LWE
  { 1, 3, 4, 0, 0 }, // 151 II_LWL
  { 1, 3, 4, 0, 0 }, // 152 II_LWLE
  { 1, 3, 4, 0, 0 }, // 153 II_LWPC
  { 1, 3, 4, 0, 0 }, // 154 II_LWR
  { 1, 3, 4, 0, 0 }, // 155 II_LWRE
  { 1, 3, 4, 0, 0 }, // 156 II_LWUPC
  { 0, 0, 0, 0, 0 }, // 157 II_LWU
  { 1, 3, 4, 0, 0 }, // 158 II_LWXC1
  { 1, 5, 6, 0, 0 }, // 159 II_MADD
  { 1, 9, 10, 0, 0 }, // 160 II_MADDF_D
  { 1, 10, 11, 0, 0 }, // 161 II_MADDF_S
  { 1, 5, 6, 0, 0 }, // 162 II_MADDU
  { 1, 9, 10, 0, 0 }, // 163 II_MADD_D
  { 1, 10, 11, 0, 0 }, // 164 II_MADD_S
  { 1, 2, 3, 0, 0 }, // 165 II_MFC0
  { 1, 2, 3, 0, 0 }, // 166 II_MFC2
  { 1, 2, 3, 0, 0 }, // 167 II_MFHC1
  { 1, 13, 14, 0, 0 }, // 168 II_MFHI_MFLO
  { 1, 4, 5, 0, 0 }, // 169 II_MOD
  { 1, 4, 5, 0, 0 }, // 170 II_MODU
  { 1, 2, 3, 0, 0 }, // 171 II_MOVF_D
  { 1, 1, 2, 0, 0 }, // 172 II_MOVF
  { 1, 2, 3, 0, 0 }, // 173 II_MOVF_S
  { 1, 1, 2, 0, 0 }, // 174 II_MOVN_D
  { 1, 1, 2, 0, 0 }, // 175 II_MOVN
  { 1, 1, 2, 0, 0 }, // 176 II_MOVN_S
  { 1, 2, 3, 0, 0 }, // 177 II_MOVT_D
  { 1, 1, 2, 0, 0 }, // 178 II_MOVT
  { 1, 2, 3, 0, 0 }, // 179 II_MOVT_S
  { 1, 2, 3, 0, 0 }, // 180 II_MOVZ_D
  { 1, 1, 2, 0, 0 }, // 181 II_MOVZ
  { 1, 2, 3, 0, 0 }, // 182 II_MOVZ_S
  { 1, 5, 6, 0, 0 }, // 183 II_MSUB
  { 1, 9, 10, 0, 0 }, // 184 II_MSUBF_D
  { 1, 10, 11, 0, 0 }, // 185 II_MSUBF_S
  { 1, 5, 6, 0, 0 }, // 186 II_MSUBU
  { 1, 9, 10, 0, 0 }, // 187 II_MSUB_D
  { 1, 10, 11, 0, 0 }, // 188 II_MSUB_S
  { 1, 2, 3, 0, 0 }, // 189 II_MTC0
  { 1, 2, 3, 0, 0 }, // 190 II_MTC2
  { 1, 2, 3, 0, 0 }, // 191 II_MTHC1
  { 1, 13, 14, 0, 0 }, // 192 II_MTHI_MTLO
  { 1, 5, 6, 0, 0 }, // 193 II_MUH
  { 1, 5, 6, 0, 0 }, // 194 II_MUHU
  { 1, 5, 6, 0, 0 }, // 195 II_MUL
  { 1, 5, 6, 0, 0 }, // 196 II_MULT
  { 1, 5, 6, 0, 0 }, // 197 II_MULTU
  { 1, 5, 6, 0, 0 }, // 198 II_MULU
  { 1, 9, 10, 0, 0 }, // 199 II_NMADD_D
  { 1, 10, 11, 0, 0 }, // 200 II_NMADD_S
  { 1, 9, 10, 0, 0 }, // 201 II_NMSUB_D
  { 1, 10, 11, 0, 0 }, // 202 II_NMSUB_S
  { 1, 1, 2, 0, 0 }, // 203 II_NOR
  { 1, 1, 2, 0, 0 }, // 204 II_OR
  { 1, 1, 2, 0, 0 }, // 205 II_ORI
  { 1, 1, 2, 0, 0 }, // 206 II_PAUSE
  { 1, 1, 2, 0, 0 }, // 207 II_PREF
  { 1, 1, 2, 0, 0 }, // 208 II_PREFE
  { 1, 1, 2, 0, 0 }, // 209 II_IndirectBranchPseudo
  { 1, 1, 2, 0, 0 }, // 210 II_ReturnPseudo
  { 1, 1, 2, 0, 0 }, // 211 II_RDHWR
  { 1, 1, 2, 0, 0 }, // 212 II_ROUND
  { 1, 1, 2, 0, 0 }, // 213 II_ROTR
  { 1, 1, 2, 0, 0 }, // 214 II_ROTRV
  { 1, 1, 2, 0, 0 }, // 215 II_TRUNC
  { 1, 3, 4, 0, 0 }, // 216 II_RESTORE
  { 1, 1, 2, 0, 0 }, // 217 II_SB
  { 0, 0, 0, 0, 0 }, // 218 II_SBE
  { 1, 1, 2, 0, 0 }, // 219 II_SC
  { 1, 1, 2, 0, 0 }, // 220 II_SCD
  { 1, 1, 2, 0, 0 }, // 221 II_SCE
  { 1, 1, 2, 0, 0 }, // 222 II_SD
  { 1, 1, 2, 0, 0 }, // 223 II_SDBBP
  { 1, 1, 2, 0, 0 }, // 224 II_SDC1
  { 1, 1, 2, 0, 0 }, // 225 II_SDC2
  { 1, 1, 2, 0, 0 }, // 226 II_SDC3
  { 1, 1, 2, 0, 0 }, // 227 II_SDL
  { 1, 1, 2, 0, 0 }, // 228 II_SDR
  { 1, 1, 2, 0, 0 }, // 229 II_SDXC1
  { 0, 0, 0, 0, 0 }, // 230 II_SEB
  { 0, 0, 0, 0, 0 }, // 231 II_SEH
  { 1, 1, 2, 0, 0 }, // 232 II_SELCCZ
  { 1, 1, 2, 0, 0 }, // 233 II_SEQ_SNE
  { 1, 1, 2, 0, 0 }, // 234 II_SEQI_SNEI
  { 1, 1, 2, 0, 0 }, // 235 II_SH
  { 1, 1, 2, 0, 0 }, // 236 II_SHE
  { 1, 1, 2, 0, 0 }, // 237 II_SLL
  { 1, 1, 2, 0, 0 }, // 238 II_SLLV
  { 1, 1, 2, 0, 0 }, // 239 II_SLT_SLTU
  { 1, 1, 2, 0, 0 }, // 240 II_SLTI_SLTIU
  { 1, 1, 2, 0, 0 }, // 241 II_SRA
  { 1, 1, 2, 0, 0 }, // 242 II_SRAV
  { 1, 1, 2, 0, 0 }, // 243 II_SRL
  { 1, 1, 2, 0, 0 }, // 244 II_SRLV
  { 1, 1, 2, 0, 0 }, // 245 II_SSNOP
  { 1, 1, 2, 0, 0 }, // 246 II_SUB
  { 1, 1, 2, 0, 0 }, // 247 II_SUBU
  { 1, 1, 2, 0, 0 }, // 248 II_SUXC1
  { 1, 1, 2, 0, 0 }, // 249 II_SW
  { 1, 1, 2, 0, 0 }, // 250 II_SWC1
  { 1, 1, 2, 0, 0 }, // 251 II_SWC2
  { 1, 1, 2, 0, 0 }, // 252 II_SWC3
  { 0, 0, 0, 0, 0 }, // 253 II_SWE
  { 1, 1, 2, 0, 0 }, // 254 II_SWL
  { 0, 0, 0, 0, 0 }, // 255 II_SWLE
  { 1, 1, 2, 0, 0 }, // 256 II_SWR
  { 0, 0, 0, 0, 0 }, // 257 II_SWRE
  { 1, 1, 2, 0, 0 }, // 258 II_SWXC1
  { 1, 1, 2, 0, 0 }, // 259 II_SYNC
  { 1, 1, 2, 0, 0 }, // 260 II_SYNCI
  { 1, 1, 2, 0, 0 }, // 261 II_SYSCALL
  { 1, 1, 2, 0, 0 }, // 262 II_SAVE
  { 1, 1, 2, 0, 0 }, // 263 II_TEQ
  { 1, 1, 2, 0, 0 }, // 264 II_TEQI
  { 1, 1, 2, 0, 0 }, // 265 II_TGE
  { 1, 1, 2, 0, 0 }, // 266 II_TGEI
  { 1, 1, 2, 0, 0 }, // 267 II_TGEIU
  { 1, 1, 2, 0, 0 }, // 268 II_TGEU
  { 1, 1, 2, 0, 0 }, // 269 II_TLBINV
  { 1, 1, 2, 0, 0 }, // 270 II_TLBINVF
  { 1, 1, 2, 0, 0 }, // 271 II_TLBP
  { 1, 1, 2, 0, 0 }, // 272 II_TLBR
  { 1, 1, 2, 0, 0 }, // 273 II_TLBWI
  { 1, 1, 2, 0, 0 }, // 274 II_TLBWR
  { 1, 1, 2, 0, 0 }, // 275 II_TLT
  { 1, 1, 2, 0, 0 }, // 276 II_TLTI
  { 1, 1, 2, 0, 0 }, // 277 II_TLTU
  { 1, 1, 2, 0, 0 }, // 278 II_TNE
  { 1, 1, 2, 0, 0 }, // 279 II_TNEI
  { 1, 1, 2, 0, 0 }, // 280 II_TRAP
  { 1, 1, 2, 0, 0 }, // 281 II_TTLTIU
  { 1, 1, 2, 0, 0 }, // 282 II_WAIT
  { 1, 1, 2, 0, 0 }, // 283 II_WSBH
  { 1, 1, 2, 0, 0 }, // 284 II_XOR
  { 1, 1, 2, 0, 0 }, // 285 II_XORI
  { 0, 0, 0, 0, 0 }, // 286 ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W
  { 0, 0, 0, 0, 0 }, // 287 ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W
  { 0, 0, 0, 0, 0 }, // 288 ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W
  { 0, 0, 0, 0, 0 }, // 289 ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W
  { 0, 0, 0, 0, 0 }, // 290 AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W
  { 0, 0, 0, 0, 0 }, // 291 MOVE_V
  { 0, 0, 0, 0, 0 }, // 292 LDI_B_LDI_D_LDI_H_LDI_W
  { 0, 0, 0, 0, 0 }, // 293 AND_V_NOR_V_OR_V_XOR_V
  { 0, 0, 0, 0, 0 }, // 294 ANDI_B_NORI_B_ORI_B_XORI_B
  { 0, 0, 0, 0, 0 }, // 295 ST_B_ST_D_ST_H_ST_W
  { 0, 0, 0, 0, 0 }, // 296 LD_B_LD_D_LD_H_LD_W
  { 0, ~0U, ~0U, ~0U, ~0U } // end marker
};

// ===============================================================
// Data tables for the new per-operand machine model.

// {ProcResourceIdx, Cycles}
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[] = {
  { 0,  0}, // Invalid
  { 5,  1}, // #1
  {12,  1}, // #2
  { 3,  1}, // #3
  { 8,  1}, // #4
  { 1,  1}, // #5
  { 4,  1}, // #6
  { 9,  1}, // #7
  { 1,  1}, // #8
  { 5,  1}, // #9
  {12,  1}, // #10
  {13,  1}, // #11
  { 5,  1}, // #12
  {10,  1}, // #13
  { 1,  1}, // #14
  { 7,  1}, // #15
  { 1,  1}, // #16
  { 2, 34}, // #17
  { 7,  1}, // #18
  { 5,  1}, // #19
  { 6, 31}, // #20
  {10,  1}, // #21
  { 5,  1}, // #22
  { 6, 23}, // #23
  {10,  1}, // #24
  { 5,  1}, // #25
  { 6, 35}, // #26
  {10,  1}, // #27
  { 5,  1}, // #28
  { 6, 27}, // #29
  {10,  1}, // #30
  { 1,  1}, // #31
  {13,  1}, // #32
  { 1,  1}, // #33
  { 5,  1}, // #34
  {11,  1}, // #35
  {13,  1}, // #36
  { 1,  1}, // #37
  { 4,  1}, // #38
  {13,  1}, // #39
  { 1,  1}, // #40
  { 4,  1}, // #41
  { 7,  1}, // #42
  { 1,  1}, // #43
  { 5,  1}, // #44
  {10,  1}, // #45
  {13,  1}, // #46
  { 1,  1}, // #47
  { 4,  3}, // #48
  {13,  1} // #49
}; // MipsWriteProcResTable

// {Cycles, WriteResourceID}
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[] = {
  { 0,  0}, // Invalid
  { 1,  0}, // #1 P5600WriteFPUS_P5600WriteALU_P5600WriteJump_P5600WriteMoveOtherUnitsToFPU_P5600WriteAL2_P5600WriteStore_P5600WriteStoreFromOtherUnits_P5600WriteMSAShortLogic
  { 2,  0}, // #2 P5600WriteGPRFromBypass_P5600WriteAL2BitExt_P5600WriteJumpAndLink_P5600WriteStoreFromOtherUnits_P5600WriteAL2CondMov_P5600WriteAL2ShadowMov_P5600WriteMSAShortInt
  { 4,  0}, // #3 P5600WriteFPUL_P5600WriteLoad_P5600WriteLoadOtherUnitsToFPU_P5600WriteLoadShifted
  {34,  0}, // #4 P5600WriteAL2Div_P5600WriteAL2DivU
  {31,  0}, // #5 P5600WriteFPUDivD
  {23,  0}, // #6 P5600WriteFPUDivS
  {35,  0}, // #7 P5600WriteFPUSqrtD
  {27,  0}, // #8 P5600WriteFPUSqrtS
  { 5,  0}, // #9 P5600WriteAL2MAdd_P5600WriteAL2Mult
  { 6,  0}, // #10 P5600WriteFPUL_MADDSUB
  { 3,  0} // #11 P5600WriteAL2Mul
}; // MipsWriteLatencyTable

// {UseIdx, WriteResourceID, Cycles}
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[] = {
  {0,  0,  0}, // Invalid
  {0,  0,  5} // #1
}; // MipsReadAdvanceTable

// {Name, NumMicroOps, BeginGroup, EndGroup, WriteProcResIdx,#, WriteLatencyIdx,#, ReadAdvanceIdx,#}
static const llvm::MCSchedClassDesc MipsP5600ModelSchedClasses[] = {
  {DBGFIELD("InvalidSchedClass")  65535, false, false,  0, 0,  0, 0,  0, 0},
  {DBGFIELD("IIPseudo")           0, false, false,  0, 0,  0, 0,  0, 0}, // #1
  {DBGFIELD("II_ABS")             1, false, false,  1, 2,  1, 1,  0, 0}, // #2
  {DBGFIELD("II_ADD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #3
  {DBGFIELD("II_ADDIUPC")         0, false, false,  0, 0,  0, 0,  0, 0}, // #4
  {DBGFIELD("II_ADDIU")           65534, false, false,  0, 0,  0, 0,  0, 0}, // #5
  {DBGFIELD("II_ADDU")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #6
  {DBGFIELD("II_ADDI")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #7
  {DBGFIELD("II_ALIGN")           0, false, false,  0, 0,  0, 0,  0, 0}, // #8
  {DBGFIELD("II_ALUIPC")          0, false, false,  0, 0,  0, 0,  0, 0}, // #9
  {DBGFIELD("II_AND")             1, false, false,  3, 2,  1, 1,  0, 0}, // #10
  {DBGFIELD("II_ANDI")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #11
  {DBGFIELD("II_AUI")             0, false, false,  0, 0,  0, 0,  0, 0}, // #12
  {DBGFIELD("II_AUIPC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #13
  {DBGFIELD("IIM16Alu")           0, false, false,  0, 0,  0, 0,  0, 0}, // #14
  {DBGFIELD("II_B")               1, false, false,  5, 3,  1, 1,  0, 0}, // #15
  {DBGFIELD("II_BADDU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #16
  {DBGFIELD("II_BC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #17
  {DBGFIELD("II_BALC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #18
  {DBGFIELD("II_BCCZAL")          1, false, false,  5, 3,  1, 1,  0, 0}, // #19
  {DBGFIELD("II_BBIT")            0, false, false,  0, 0,  0, 0,  0, 0}, // #20
  {DBGFIELD("II_BC1CCZ")          0, false, false,  0, 0,  0, 0,  0, 0}, // #21
  {DBGFIELD("II_BC1F")            2, false, false,  8, 4,  2, 1,  0, 0}, // #22
  {DBGFIELD("II_BC1FL")           0, false, false,  0, 0,  0, 0,  0, 0}, // #23
  {DBGFIELD("II_BC1T")            2, false, false,  8, 4,  2, 1,  0, 0}, // #24
  {DBGFIELD("II_BC1TL")           0, false, false,  0, 0,  0, 0,  0, 0}, // #25
  {DBGFIELD("II_BCC")             1, false, false,  5, 3,  1, 1,  0, 0}, // #26
  {DBGFIELD("II_BCCC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #27
  {DBGFIELD("II_BCCZ")            1, false, false,  5, 3,  1, 1,  0, 0}, // #28
  {DBGFIELD("II_BCCZC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #29
  {DBGFIELD("II_BCCZALS")         0, false, false,  0, 0,  0, 0,  0, 0}, // #30
  {DBGFIELD("II_BITSWAP")         0, false, false,  0, 0,  0, 0,  0, 0}, // #31
  {DBGFIELD("II_BREAK")           0, false, false,  0, 0,  0, 0,  0, 0}, // #32
  {DBGFIELD("II_MTC1")            2, false, false,  8, 4,  1, 1,  0, 0}, // #33
  {DBGFIELD("II_CACHE")           0, false, false,  0, 0,  0, 0,  0, 0}, // #34
  {DBGFIELD("II_CACHEE")          0, false, false,  0, 0,  0, 0,  0, 0}, // #35
  {DBGFIELD("II_CEIL")            1, false, false, 12, 2,  3, 1,  0, 0}, // #36
  {DBGFIELD("II_CFC1")            2, false, false,  8, 4,  2, 1,  0, 0}, // #37
  {DBGFIELD("II_CLO")             1, false, false, 14, 2,  1, 1,  0, 0}, // #38
  {DBGFIELD("II_CLZ")             1, false, false, 14, 2,  1, 1,  0, 0}, // #39
  {DBGFIELD("II_CTC1")            2, false, false,  8, 4,  1, 1,  0, 0}, // #40
  {DBGFIELD("II_CVT")             1, false, false, 12, 2,  3, 1,  0, 0}, // #41
  {DBGFIELD("II_C_CC_D")          1, false, false, 12, 2,  3, 1,  0, 0}, // #42
  {DBGFIELD("II_C_CC_S")          1, false, false, 12, 2,  3, 1,  0, 0}, // #43
  {DBGFIELD("II_DADD")            0, false, false,  0, 0,  0, 0,  0, 0}, // #44
  {DBGFIELD("II_DADDIU")          0, false, false,  0, 0,  0, 0,  0, 0}, // #45
  {DBGFIELD("II_DADDU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #46
  {DBGFIELD("II_DADDI")           0, false, false,  0, 0,  0, 0,  0, 0}, // #47
  {DBGFIELD("II_DAHI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #48
  {DBGFIELD("II_DALIGN")          0, false, false,  0, 0,  0, 0,  0, 0}, // #49
  {DBGFIELD("II_DATI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #50
  {DBGFIELD("II_DAUI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #51
  {DBGFIELD("II_DBITSWAP")        0, false, false,  0, 0,  0, 0,  0, 0}, // #52
  {DBGFIELD("II_DCLO")            0, false, false,  0, 0,  0, 0,  0, 0}, // #53
  {DBGFIELD("II_DCLZ")            0, false, false,  0, 0,  0, 0,  0, 0}, // #54
  {DBGFIELD("II_DDIV")            0, false, false,  0, 0,  0, 0,  0, 0}, // #55
  {DBGFIELD("II_DDIVU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #56
  {DBGFIELD("II_DERET")           0, false, false,  0, 0,  0, 0,  0, 0}, // #57
  {DBGFIELD("II_EXT")             1, false, false, 14, 2,  2, 1,  0, 0}, // #58
  {DBGFIELD("II_DI")              0, false, false,  0, 0,  0, 0,  0, 0}, // #59
  {DBGFIELD("II_INS")             1, false, false, 14, 2,  2, 1,  0, 0}, // #60
  {DBGFIELD("II_DIV")             1, false, false, 16, 3,  4, 1,  0, 0}, // #61
  {DBGFIELD("II_DIVU")            1, false, false, 16, 3,  4, 1,  0, 0}, // #62
  {DBGFIELD("II_DLSA")            0, false, false,  0, 0,  0, 0,  0, 0}, // #63
  {DBGFIELD("II_DMFC0")           0, false, false,  0, 0,  0, 0,  0, 0}, // #64
  {DBGFIELD("II_DMFC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #65
  {DBGFIELD("II_DMFC2")           0, false, false,  0, 0,  0, 0,  0, 0}, // #66
  {DBGFIELD("II_DMOD")            0, false, false,  0, 0,  0, 0,  0, 0}, // #67
  {DBGFIELD("II_DMODU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #68
  {DBGFIELD("II_DMTC0")           0, false, false,  0, 0,  0, 0,  0, 0}, // #69
  {DBGFIELD("II_DMTC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #70
  {DBGFIELD("II_DMTC2")           0, false, false,  0, 0,  0, 0,  0, 0}, // #71
  {DBGFIELD("II_DMUH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #72
  {DBGFIELD("II_DMUHU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #73
  {DBGFIELD("II_DMUL")            0, false, false,  0, 0,  0, 0,  0, 0}, // #74
  {DBGFIELD("II_DMULT")           0, false, false,  0, 0,  0, 0,  0, 0}, // #75
  {DBGFIELD("II_DMULTU")          0, false, false,  0, 0,  0, 0,  0, 0}, // #76
  {DBGFIELD("II_DMULU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #77
  {DBGFIELD("II_POP")             0, false, false,  0, 0,  0, 0,  0, 0}, // #78
  {DBGFIELD("II_DROTR")           0, false, false,  0, 0,  0, 0,  0, 0}, // #79
  {DBGFIELD("II_DROTR32")         0, false, false,  0, 0,  0, 0,  0, 0}, // #80
  {DBGFIELD("II_DROTRV")          0, false, false,  0, 0,  0, 0,  0, 0}, // #81
  {DBGFIELD("II_DSLL")            0, false, false,  0, 0,  0, 0,  0, 0}, // #82
  {DBGFIELD("II_DSLL32")          0, false, false,  0, 0,  0, 0,  0, 0}, // #83
  {DBGFIELD("II_DSLLV")           0, false, false,  0, 0,  0, 0,  0, 0}, // #84
  {DBGFIELD("II_DSRA")            0, false, false,  0, 0,  0, 0,  0, 0}, // #85
  {DBGFIELD("II_DSRA32")          0, false, false,  0, 0,  0, 0,  0, 0}, // #86
  {DBGFIELD("II_DSRAV")           0, false, false,  0, 0,  0, 0,  0, 0}, // #87
  {DBGFIELD("II_DSRL")            0, false, false,  0, 0,  0, 0,  0, 0}, // #88
  {DBGFIELD("II_DSRL32")          0, false, false,  0, 0,  0, 0,  0, 0}, // #89
  {DBGFIELD("II_DSRLV")           0, false, false,  0, 0,  0, 0,  0, 0}, // #90
  {DBGFIELD("II_DSUB")            0, false, false,  0, 0,  0, 0,  0, 0}, // #91
  {DBGFIELD("II_DSUBU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #92
  {DBGFIELD("II_EHB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #93
  {DBGFIELD("II_EI")              0, false, false,  0, 0,  0, 0,  0, 0}, // #94
  {DBGFIELD("II_ERET")            0, false, false,  0, 0,  0, 0,  0, 0}, // #95
  {DBGFIELD("II_ERETNC")          0, false, false,  0, 0,  0, 0,  0, 0}, // #96
  {DBGFIELD("II_MFC1")            2, false, false,  8, 4,  2, 1,  0, 0}, // #97
  {DBGFIELD("II_ADD_D")           1, false, false, 12, 2,  3, 1,  0, 0}, // #98
  {DBGFIELD("II_ADD_S")           1, false, false, 12, 2,  3, 1,  0, 0}, // #99
  {DBGFIELD("II_DIV_D")           1, false, false, 19, 3,  5, 1,  0, 0}, // #100
  {DBGFIELD("II_DIV_S")           1, false, false, 22, 3,  6, 1,  0, 0}, // #101
  {DBGFIELD("II_FLOOR")           1, false, false, 12, 2,  3, 1,  0, 0}, // #102
  {DBGFIELD("II_MOV_D")           1, false, false,  1, 2,  1, 1,  0, 0}, // #103
  {DBGFIELD("II_MOV_S")           1, false, false,  1, 2,  1, 1,  0, 0}, // #104
  {DBGFIELD("II_MUL_D")           1, false, false, 12, 2,  3, 1,  0, 0}, // #105
  {DBGFIELD("II_MUL_S")           1, false, false, 12, 2,  3, 1,  0, 0}, // #106
  {DBGFIELD("II_NEG")             1, false, false,  1, 2,  1, 1,  0, 0}, // #107
  {DBGFIELD("II_SQRT_D")          1, false, false, 25, 3,  7, 1,  0, 0}, // #108
  {DBGFIELD("II_SQRT_S")          1, false, false, 28, 3,  8, 1,  0, 0}, // #109
  {DBGFIELD("II_SUB_D")           1, false, false, 12, 2,  3, 1,  0, 0}, // #110
  {DBGFIELD("II_SUB_S")           1, false, false, 12, 2,  3, 1,  0, 0}, // #111
  {DBGFIELD("II_J")               1, false, false,  5, 3,  1, 1,  0, 0}, // #112
  {DBGFIELD("II_JAL")             1, false, false,  5, 3,  2, 1,  0, 0}, // #113
  {DBGFIELD("II_JALR")            1, false, false,  5, 3,  2, 1,  0, 0}, // #114
  {DBGFIELD("II_JALRC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #115
  {DBGFIELD("II_JALRS")           0, false, false,  0, 0,  0, 0,  0, 0}, // #116
  {DBGFIELD("II_JALR_HB")         0, false, false,  0, 0,  0, 0,  0, 0}, // #117
  {DBGFIELD("II_JALS")            0, false, false,  0, 0,  0, 0,  0, 0}, // #118
  {DBGFIELD("II_JIALC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #119
  {DBGFIELD("II_JR")              1, false, false,  5, 3,  1, 1,  0, 0}, // #120
  {DBGFIELD("II_JRADDIUSP")       0, false, false,  0, 0,  0, 0,  0, 0}, // #121
  {DBGFIELD("II_JRC")             0, false, false,  0, 0,  0, 0,  0, 0}, // #122
  {DBGFIELD("II_JR_HB")           0, false, false,  0, 0,  0, 0,  0, 0}, // #123
  {DBGFIELD("II_LB")              1, false, false, 31, 2,  3, 1,  0, 0}, // #124
  {DBGFIELD("II_LBE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #125
  {DBGFIELD("II_LBU")             1, false, false, 31, 2,  3, 1,  0, 0}, // #126
  {DBGFIELD("II_LBUE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #127
  {DBGFIELD("II_LD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #128
  {DBGFIELD("II_LDC1")            2, false, false, 33, 4,  3, 1,  0, 0}, // #129
  {DBGFIELD("II_LDC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #130
  {DBGFIELD("II_LDC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #131
  {DBGFIELD("II_LDL")             0, false, false,  0, 0,  0, 0,  0, 0}, // #132
  {DBGFIELD("II_LDPC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #133
  {DBGFIELD("II_LDR")             0, false, false,  0, 0,  0, 0,  0, 0}, // #134
  {DBGFIELD("II_LDXC1")           2, false, false, 33, 4,  3, 1,  0, 0}, // #135
  {DBGFIELD("II_LH")              1, false, false, 31, 2,  3, 1,  0, 0}, // #136
  {DBGFIELD("II_LHE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #137
  {DBGFIELD("II_LHU")             1, false, false, 31, 2,  3, 1,  0, 0}, // #138
  {DBGFIELD("II_LHUE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #139
  {DBGFIELD("II_LL")              0, false, false,  0, 0,  0, 0,  0, 0}, // #140
  {DBGFIELD("II_LLD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #141
  {DBGFIELD("II_LLE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #142
  {DBGFIELD("II_LSA")             0, false, false,  0, 0,  0, 0,  0, 0}, // #143
  {DBGFIELD("II_LUI")             1, false, false,  3, 2,  1, 1,  0, 0}, // #144
  {DBGFIELD("II_LUXC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #145
  {DBGFIELD("II_LW")              1, false, false, 31, 2,  3, 1,  0, 0}, // #146
  {DBGFIELD("II_LWC1")            2, false, false, 33, 4,  3, 1,  0, 0}, // #147
  {DBGFIELD("II_LWC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #148
  {DBGFIELD("II_LWC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #149
  {DBGFIELD("II_LWE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #150
  {DBGFIELD("II_LWL")             1, false, false, 37, 3,  3, 1,  0, 0}, // #151
  {DBGFIELD("II_LWLE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #152
  {DBGFIELD("II_LWPC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #153
  {DBGFIELD("II_LWR")             1, false, false, 37, 3,  3, 1,  0, 0}, // #154
  {DBGFIELD("II_LWRE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #155
  {DBGFIELD("II_LWUPC")           0, false, false,  0, 0,  0, 0,  0, 0}, // #156
  {DBGFIELD("II_LWU")             1, false, false, 31, 2,  3, 1,  0, 0}, // #157
  {DBGFIELD("II_LWXC1")           2, false, false, 33, 4,  3, 1,  0, 0}, // #158
  {DBGFIELD("II_MADD")            1, false, false, 40, 3,  9, 1,  0, 0}, // #159
  {DBGFIELD("II_MADDF_D")         0, false, false,  0, 0,  0, 0,  0, 0}, // #160
  {DBGFIELD("II_MADDF_S")         0, false, false,  0, 0,  0, 0,  0, 0}, // #161
  {DBGFIELD("II_MADDU")           1, false, false, 40, 3,  9, 1,  0, 0}, // #162
  {DBGFIELD("II_MADD_D")          1, false, false, 12, 2, 10, 1,  1, 1}, // #163
  {DBGFIELD("II_MADD_S")          1, false, false, 12, 2, 10, 1,  1, 1}, // #164
  {DBGFIELD("II_MFC0")            0, false, false,  0, 0,  0, 0,  0, 0}, // #165
  {DBGFIELD("II_MFC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #166
  {DBGFIELD("II_MFHC1")           2, false, false,  8, 4,  2, 1,  0, 0}, // #167
  {DBGFIELD("II_MFHI_MFLO")       1, false, false, 14, 2,  1, 1,  0, 0}, // #168
  {DBGFIELD("II_MOD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #169
  {DBGFIELD("II_MODU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #170
  {DBGFIELD("II_MOVF_D")          1, false, false,  1, 2,  1, 1,  0, 0}, // #171
  {DBGFIELD("II_MOVF")            2, false, false,  8, 4,  2, 1,  0, 0}, // #172
  {DBGFIELD("II_MOVF_S")          1, false, false,  1, 2,  1, 1,  0, 0}, // #173
  {DBGFIELD("II_MOVN_D")          2, false, false, 43, 4,  2, 1,  0, 0}, // #174
  {DBGFIELD("II_MOVN")            1, false, false, 40, 3,  2, 1,  0, 0}, // #175
  {DBGFIELD("II_MOVN_S")          2, false, false, 43, 4,  2, 1,  0, 0}, // #176
  {DBGFIELD("II_MOVT_D")          1, false, false,  1, 2,  1, 1,  0, 0}, // #177
  {DBGFIELD("II_MOVT")            2, false, false,  8, 4,  2, 1,  0, 0}, // #178
  {DBGFIELD("II_MOVT_S")          1, false, false,  1, 2,  1, 1,  0, 0}, // #179
  {DBGFIELD("II_MOVZ_D")          2, false, false, 43, 4,  2, 1,  0, 0}, // #180
  {DBGFIELD("II_MOVZ")            1, false, false, 40, 3,  2, 1,  0, 0}, // #181
  {DBGFIELD("II_MOVZ_S")          2, false, false, 43, 4,  2, 1,  0, 0}, // #182
  {DBGFIELD("II_MSUB")            1, false, false, 40, 3,  9, 1,  0, 0}, // #183
  {DBGFIELD("II_MSUBF_D")         0, false, false,  0, 0,  0, 0,  0, 0}, // #184
  {DBGFIELD("II_MSUBF_S")         0, false, false,  0, 0,  0, 0,  0, 0}, // #185
  {DBGFIELD("II_MSUBU")           1, false, false, 40, 3,  9, 1,  0, 0}, // #186
  {DBGFIELD("II_MSUB_D")          1, false, false, 12, 2, 10, 1,  1, 1}, // #187
  {DBGFIELD("II_MSUB_S")          1, false, false, 12, 2, 10, 1,  1, 1}, // #188
  {DBGFIELD("II_MTC0")            0, false, false,  0, 0,  0, 0,  0, 0}, // #189
  {DBGFIELD("II_MTC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #190
  {DBGFIELD("II_MTHC1")           2, false, false,  8, 4,  1, 1,  0, 0}, // #191
  {DBGFIELD("II_MTHI_MTLO")       1, false, false, 40, 3,  9, 1,  0, 0}, // #192
  {DBGFIELD("II_MUH")             0, false, false,  0, 0,  0, 0,  0, 0}, // #193
  {DBGFIELD("II_MUHU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #194
  {DBGFIELD("II_MUL")             1, false, false, 14, 2, 11, 1,  0, 0}, // #195
  {DBGFIELD("II_MULT")            1, false, false, 14, 2,  9, 1,  0, 0}, // #196
  {DBGFIELD("II_MULTU")           1, false, false, 14, 2,  9, 1,  0, 0}, // #197
  {DBGFIELD("II_MULU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #198
  {DBGFIELD("II_NMADD_D")         1, false, false, 12, 2, 10, 1,  1, 1}, // #199
  {DBGFIELD("II_NMADD_S")         1, false, false, 12, 2, 10, 1,  1, 1}, // #200
  {DBGFIELD("II_NMSUB_D")         1, false, false, 12, 2, 10, 1,  1, 1}, // #201
  {DBGFIELD("II_NMSUB_S")         1, false, false, 12, 2, 10, 1,  1, 1}, // #202
  {DBGFIELD("II_NOR")             1, false, false,  3, 2,  1, 1,  0, 0}, // #203
  {DBGFIELD("II_OR")              1, false, false,  3, 2,  1, 1,  0, 0}, // #204
  {DBGFIELD("II_ORI")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #205
  {DBGFIELD("II_PAUSE")           0, false, false,  0, 0,  0, 0,  0, 0}, // #206
  {DBGFIELD("II_PREF")            0, false, false,  0, 0,  0, 0,  0, 0}, // #207
  {DBGFIELD("II_PREFE")           0, false, false,  0, 0,  0, 0,  0, 0}, // #208
  {DBGFIELD("II_IndirectBranchPseudo") 0, false, false,  0, 0,  0, 0,  0, 0}, // #209
  {DBGFIELD("II_ReturnPseudo")    0, false, false,  0, 0,  0, 0,  0, 0}, // #210
  {DBGFIELD("II_RDHWR")           1, false, false, 14, 2,  2, 1,  0, 0}, // #211
  {DBGFIELD("II_ROUND")           1, false, false, 12, 2,  3, 1,  0, 0}, // #212
  {DBGFIELD("II_ROTR")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #213
  {DBGFIELD("II_ROTRV")           65534, false, false,  0, 0,  0, 0,  0, 0}, // #214
  {DBGFIELD("II_TRUNC")           1, false, false, 12, 2,  3, 1,  0, 0}, // #215
  {DBGFIELD("II_RESTORE")         0, false, false,  0, 0,  0, 0,  0, 0}, // #216
  {DBGFIELD("II_SB")              1, false, false, 47, 3,  1, 1,  0, 0}, // #217
  {DBGFIELD("II_SBE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #218
  {DBGFIELD("II_SC")              0, false, false,  0, 0,  0, 0,  0, 0}, // #219
  {DBGFIELD("II_SCD")             0, false, false,  0, 0,  0, 0,  0, 0}, // #220
  {DBGFIELD("II_SCE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #221
  {DBGFIELD("II_SD")              0, false, false,  0, 0,  0, 0,  0, 0}, // #222
  {DBGFIELD("II_SDBBP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #223
  {DBGFIELD("II_SDC1")            0, false, false,  0, 0,  0, 0,  0, 0}, // #224
  {DBGFIELD("II_SDC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #225
  {DBGFIELD("II_SDC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #226
  {DBGFIELD("II_SDL")             0, false, false,  0, 0,  0, 0,  0, 0}, // #227
  {DBGFIELD("II_SDR")             0, false, false,  0, 0,  0, 0,  0, 0}, // #228
  {DBGFIELD("II_SDXC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #229
  {DBGFIELD("II_SEB")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #230
  {DBGFIELD("II_SEH")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #231
  {DBGFIELD("II_SELCCZ")          0, false, false,  0, 0,  0, 0,  0, 0}, // #232
  {DBGFIELD("II_SEQ_SNE")         0, false, false,  0, 0,  0, 0,  0, 0}, // #233
  {DBGFIELD("II_SEQI_SNEI")       0, false, false,  0, 0,  0, 0,  0, 0}, // #234
  {DBGFIELD("II_SH")              1, false, false, 47, 3,  1, 1,  0, 0}, // #235
  {DBGFIELD("II_SHE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #236
  {DBGFIELD("II_SLL")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #237
  {DBGFIELD("II_SLLV")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #238
  {DBGFIELD("II_SLT_SLTU")        65534, false, false,  0, 0,  0, 0,  0, 0}, // #239
  {DBGFIELD("II_SLTI_SLTIU")      1, false, false,  3, 2,  1, 1,  0, 0}, // #240
  {DBGFIELD("II_SRA")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #241
  {DBGFIELD("II_SRAV")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #242
  {DBGFIELD("II_SRL")             65534, false, false,  0, 0,  0, 0,  0, 0}, // #243
  {DBGFIELD("II_SRLV")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #244
  {DBGFIELD("II_SSNOP")           0, false, false,  0, 0,  0, 0,  0, 0}, // #245
  {DBGFIELD("II_SUB")             0, false, false,  0, 0,  0, 0,  0, 0}, // #246
  {DBGFIELD("II_SUBU")            1, false, false,  3, 2,  1, 1,  0, 0}, // #247
  {DBGFIELD("II_SUXC1")           0, false, false,  0, 0,  0, 0,  0, 0}, // #248
  {DBGFIELD("II_SW")              1, false, false, 47, 3,  1, 1,  0, 0}, // #249
  {DBGFIELD("II_SWC1")            2, false, false,  8, 4,  1, 1,  0, 0}, // #250
  {DBGFIELD("II_SWC2")            0, false, false,  0, 0,  0, 0,  0, 0}, // #251
  {DBGFIELD("II_SWC3")            0, false, false,  0, 0,  0, 0,  0, 0}, // #252
  {DBGFIELD("II_SWE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #253
  {DBGFIELD("II_SWL")             1, false, false, 47, 3,  1, 1,  0, 0}, // #254
  {DBGFIELD("II_SWLE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #255
  {DBGFIELD("II_SWR")             1, false, false, 47, 3,  1, 1,  0, 0}, // #256
  {DBGFIELD("II_SWRE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #257
  {DBGFIELD("II_SWXC1")           2, false, false,  8, 4,  1, 1,  0, 0}, // #258
  {DBGFIELD("II_SYNC")            0, false, false,  0, 0,  0, 0,  0, 0}, // #259
  {DBGFIELD("II_SYNCI")           0, false, false,  0, 0,  0, 0,  0, 0}, // #260
  {DBGFIELD("II_SYSCALL")         0, false, false,  0, 0,  0, 0,  0, 0}, // #261
  {DBGFIELD("II_SAVE")            0, false, false,  0, 0,  0, 0,  0, 0}, // #262
  {DBGFIELD("II_TEQ")             0, false, false,  0, 0,  0, 0,  0, 0}, // #263
  {DBGFIELD("II_TEQI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #264
  {DBGFIELD("II_TGE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #265
  {DBGFIELD("II_TGEI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #266
  {DBGFIELD("II_TGEIU")           0, false, false,  0, 0,  0, 0,  0, 0}, // #267
  {DBGFIELD("II_TGEU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #268
  {DBGFIELD("II_TLBINV")          0, false, false,  0, 0,  0, 0,  0, 0}, // #269
  {DBGFIELD("II_TLBINVF")         0, false, false,  0, 0,  0, 0,  0, 0}, // #270
  {DBGFIELD("II_TLBP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #271
  {DBGFIELD("II_TLBR")            0, false, false,  0, 0,  0, 0,  0, 0}, // #272
  {DBGFIELD("II_TLBWI")           0, false, false,  0, 0,  0, 0,  0, 0}, // #273
  {DBGFIELD("II_TLBWR")           0, false, false,  0, 0,  0, 0,  0, 0}, // #274
  {DBGFIELD("II_TLT")             0, false, false,  0, 0,  0, 0,  0, 0}, // #275
  {DBGFIELD("II_TLTI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #276
  {DBGFIELD("II_TLTU")            0, false, false,  0, 0,  0, 0,  0, 0}, // #277
  {DBGFIELD("II_TNE")             0, false, false,  0, 0,  0, 0,  0, 0}, // #278
  {DBGFIELD("II_TNEI")            0, false, false,  0, 0,  0, 0,  0, 0}, // #279
  {DBGFIELD("II_TRAP")            0, false, false,  0, 0,  0, 0,  0, 0}, // #280
  {DBGFIELD("II_TTLTIU")          0, false, false,  0, 0,  0, 0,  0, 0}, // #281
  {DBGFIELD("II_WAIT")            0, false, false,  0, 0,  0, 0,  0, 0}, // #282
  {DBGFIELD("II_WSBH")            0, false, false,  0, 0,  0, 0,  0, 0}, // #283
  {DBGFIELD("II_XOR")             1, false, false,  3, 2,  1, 1,  0, 0}, // #284
  {DBGFIELD("II_XORI")            65534, false, false,  0, 0,  0, 0,  0, 0}, // #285
  {DBGFIELD("ADD_A_B_ADD_A_D_ADD_A_H_ADD_A_W") 1, false, false,  1, 2,  2, 1,  0, 0}, // #286
  {DBGFIELD("ADDS_A_B_ADDS_A_D_ADDS_A_H_ADDS_A_W_ADDS_S_B_ADDS_S_D_ADDS_S_H_ADDS_S_W_ADDS_U_B_ADDS_U_D_ADDS_U_H_ADDS_U_W") 1, false, false,  1, 2,  2, 1,  0, 0}, // #287
  {DBGFIELD("ADDVI_B_ADDVI_D_ADDVI_H_ADDVI_W_ADDV_B_ADDV_D_ADDV_H_ADDV_W") 1, false, false,  1, 2,  2, 1,  0, 0}, // #288
  {DBGFIELD("ASUB_S_B_ASUB_S_D_ASUB_S_H_ASUB_S_W_ASUB_U_B_ASUB_U_D_ASUB_U_H_ASUB_U_W") 1, false, false,  1, 2,  2, 1,  0, 0}, // #289
  {DBGFIELD("AVER_S_B_AVER_S_D_AVER_S_H_AVER_S_W_AVER_U_B_AVER_U_D_AVER_U_H_AVER_U_W_AVE_S_B_AVE_S_D_AVE_S_H_AVE_S_W_AVE_U_B_AVE_U_D_AVE_U_H_AVE_U_W") 1, false, false,  1, 2,  2, 1,  0, 0}, // #290
  {DBGFIELD("MOVE_V")             1, false, false,  1, 2,  1, 1,  0, 0}, // #291
  {DBGFIELD("LDI_B_LDI_D_LDI_H_LDI_W") 1, false, false,  1, 2,  1, 1,  0, 0}, // #292
  {DBGFIELD("AND_V_NOR_V_OR_V_XOR_V") 1, false, false,  1, 2,  1, 1,  0, 0}, // #293
  {DBGFIELD("ANDI_B_NORI_B_ORI_B_XORI_B") 1, false, false,  1, 2,  1, 1,  0, 0}, // #294
  {DBGFIELD("ST_B_ST_D_ST_H_ST_W") 2, false, false,  8, 4,  1, 1,  0, 0}, // #295
  {DBGFIELD("LD_B_LD_D_LD_H_LD_W") 2, false, false, 33, 4,  3, 1,  0, 0}, // #296
  {DBGFIELD("P5600WriteALU")      1, false, false,  3, 2,  1, 1,  0, 0}, // #297
  {DBGFIELD("P5600WriteAL2")      1, false, false, 14, 2,  1, 1,  0, 0} // #298
}; // MipsP5600ModelSchedClasses

static const llvm::MCSchedModel NoSchedModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  0, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  nullptr}; // No Itinerary

static const llvm::MCSchedModel MipsGenericItinerariesModel = {
  MCSchedModel::DefaultIssueWidth,
  MCSchedModel::DefaultMicroOpBufferSize,
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  MCSchedModel::DefaultLoadLatency,
  MCSchedModel::DefaultHighLatency,
  MCSchedModel::DefaultMispredictPenalty,
  false, // PostRAScheduler
  false, // CompleteModel
  1, // Processor ID
  nullptr, nullptr, 0, 0, // No instruction-level machine model.
  MipsGenericItineraries};

// {Name, NumUnits, SuperIdx, IsBuffered}
static const llvm::MCProcResourceDesc MipsP5600ModelProcResources[] = {
  {DBGFIELD("InvalidUnit")     0, 0, 0},
  {DBGFIELD("P5600AGQ")        3, 0, 16}, // #1
  {DBGFIELD("P5600AL2Div")     1, 0, -1}, // #2
  {DBGFIELD("P5600ALQ")        1, 0, 16}, // #3
  {DBGFIELD("P5600CTISTD")     1, 0, -1}, // #4
  {DBGFIELD("P5600FPQ")        3, 0, 16}, // #5
  {DBGFIELD("P5600FPUDivSqrt") 2, 0, -1}, // #6
  {DBGFIELD("P5600IssueAL2")   1, 1, -1}, // #7, Super=P5600AGQ
  {DBGFIELD("P5600IssueALU")   1, 3, -1}, // #8, Super=P5600ALQ
  {DBGFIELD("P5600IssueCTISTD") 1, 1, -1}, // #9, Super=P5600AGQ
  {DBGFIELD("P5600IssueFPUL")  1, 5, -1}, // #10, Super=P5600FPQ
  {DBGFIELD("P5600IssueFPULoad") 1, 5, -1}, // #11, Super=P5600FPQ
  {DBGFIELD("P5600IssueFPUS")  1, 5, -1}, // #12, Super=P5600FPQ
  {DBGFIELD("P5600IssueLDST")  1, 1, -1}  // #13, Super=P5600AGQ
};

static const llvm::MCSchedModel MipsP5600Model = {
  2, // IssueWidth
  48, // MicroOpBufferSize
  MCSchedModel::DefaultLoopMicroOpBufferSize,
  4, // LoadLatency
  MCSchedModel::DefaultHighLatency,
  8, // MispredictPenalty
  false, // PostRAScheduler
  false, // CompleteModel
  2, // Processor ID
  MipsP5600ModelProcResources,
  MipsP5600ModelSchedClasses,
  14,
  299,
  nullptr}; // No Itinerary

// Sorted (by key) array of itineraries for CPU subtype.
extern const llvm::SubtargetInfoKV MipsProcSchedKV[] = {
  { "mips1", (const void *)&MipsGenericItinerariesModel },
  { "mips2", (const void *)&MipsGenericItinerariesModel },
  { "mips3", (const void *)&MipsGenericItinerariesModel },
  { "mips32", (const void *)&MipsGenericItinerariesModel },
  { "mips32r2", (const void *)&MipsGenericItinerariesModel },
  { "mips32r3", (const void *)&MipsGenericItinerariesModel },
  { "mips32r5", (const void *)&MipsGenericItinerariesModel },
  { "mips32r6", (const void *)&MipsGenericItinerariesModel },
  { "mips4", (const void *)&MipsGenericItinerariesModel },
  { "mips5", (const void *)&MipsGenericItinerariesModel },
  { "mips64", (const void *)&MipsGenericItinerariesModel },
  { "mips64r2", (const void *)&MipsGenericItinerariesModel },
  { "mips64r3", (const void *)&MipsGenericItinerariesModel },
  { "mips64r5", (const void *)&MipsGenericItinerariesModel },
  { "mips64r6", (const void *)&MipsGenericItinerariesModel },
  { "octeon", (const void *)&MipsGenericItinerariesModel },
  { "p5600", (const void *)&MipsP5600Model }
};
#undef DBGFIELD
static inline MCSubtargetInfo *createMipsMCSubtargetInfoImpl(const Triple &TT, StringRef CPU, StringRef FS) {
  return new MCSubtargetInfo(TT, CPU, FS, MipsFeatureKV, MipsSubTypeKV, 
                      MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                      MipsStages, MipsOperandCycles, MipsForwardingPaths);
}

} // end namespace llvm

#endif // GET_SUBTARGETINFO_MC_DESC


#ifdef GET_SUBTARGETINFO_TARGET_DESC
#undef GET_SUBTARGETINFO_TARGET_DESC

#include "llvm/Support/Debug.h"
#include "llvm/Support/raw_ostream.h"

// ParseSubtargetFeatures - Parses features string setting specified
// subtarget options.
void llvm::MipsSubtarget::ParseSubtargetFeatures(StringRef CPU, StringRef FS) {
  DEBUG(dbgs() << "\nFeatures:" << FS);
  DEBUG(dbgs() << "\nCPU:" << CPU << "\n\n");
  InitMCProcessorInfo(CPU, FS);
  const FeatureBitset& Bits = getFeatureBits();
  if (Bits[Mips::FeatureCnMips]) HasCnMips = true;
  if (Bits[Mips::FeatureDSP]) HasDSP = true;
  if (Bits[Mips::FeatureDSPR2]) HasDSPR2 = true;
  if (Bits[Mips::FeatureDSPR3]) HasDSPR3 = true;
  if (Bits[Mips::FeatureEVA]) HasEVA = true;
  if (Bits[Mips::FeatureFP64Bit]) IsFP64bit = true;
  if (Bits[Mips::FeatureFPXX]) IsFPXX = true;
  if (Bits[Mips::FeatureGP64Bit]) IsGP64bit = true;
  if (Bits[Mips::FeatureMSA]) HasMSA = true;
  if (Bits[Mips::FeatureMicroMips]) InMicroMipsMode = true;
  if (Bits[Mips::FeatureMips1] && MipsArchVersion < Mips1) MipsArchVersion = Mips1;
  if (Bits[Mips::FeatureMips2] && MipsArchVersion < Mips2) MipsArchVersion = Mips2;
  if (Bits[Mips::FeatureMips3] && MipsArchVersion < Mips3) MipsArchVersion = Mips3;
  if (Bits[Mips::FeatureMips3_32]) HasMips3_32 = true;
  if (Bits[Mips::FeatureMips3_32r2]) HasMips3_32r2 = true;
  if (Bits[Mips::FeatureMips4] && MipsArchVersion < Mips4) MipsArchVersion = Mips4;
  if (Bits[Mips::FeatureMips4_32]) HasMips4_32 = true;
  if (Bits[Mips::FeatureMips4_32r2]) HasMips4_32r2 = true;
  if (Bits[Mips::FeatureMips5] && MipsArchVersion < Mips5) MipsArchVersion = Mips5;
  if (Bits[Mips::FeatureMips5_32r2]) HasMips5_32r2 = true;
  if (Bits[Mips::FeatureMips16]) InMips16Mode = true;
  if (Bits[Mips::FeatureMips32] && MipsArchVersion < Mips32) MipsArchVersion = Mips32;
  if (Bits[Mips::FeatureMips32r2] && MipsArchVersion < Mips32r2) MipsArchVersion = Mips32r2;
  if (Bits[Mips::FeatureMips32r3] && MipsArchVersion < Mips32r3) MipsArchVersion = Mips32r3;
  if (Bits[Mips::FeatureMips32r5] && MipsArchVersion < Mips32r5) MipsArchVersion = Mips32r5;
  if (Bits[Mips::FeatureMips32r6] && MipsArchVersion < Mips32r6) MipsArchVersion = Mips32r6;
  if (Bits[Mips::FeatureMips64] && MipsArchVersion < Mips64) MipsArchVersion = Mips64;
  if (Bits[Mips::FeatureMips64r2] && MipsArchVersion < Mips64r2) MipsArchVersion = Mips64r2;
  if (Bits[Mips::FeatureMips64r3] && MipsArchVersion < Mips64r3) MipsArchVersion = Mips64r3;
  if (Bits[Mips::FeatureMips64r5] && MipsArchVersion < Mips64r5) MipsArchVersion = Mips64r5;
  if (Bits[Mips::FeatureMips64r6] && MipsArchVersion < Mips64r6) MipsArchVersion = Mips64r6;
  if (Bits[Mips::FeatureNaN2008]) IsNaN2008bit = true;
  if (Bits[Mips::FeatureNoABICalls]) NoABICalls = true;
  if (Bits[Mips::FeatureNoOddSPReg]) UseOddSPReg = false;
  if (Bits[Mips::FeaturePTR64Bit]) IsPTR64bit = true;
  if (Bits[Mips::FeatureSingleFloat]) IsSingleFloat = true;
  if (Bits[Mips::FeatureSoftFloat]) IsSoftFloat = true;
  if (Bits[Mips::FeatureUseTCCInDIV]) UseTCCInDIV = false;
  if (Bits[Mips::FeatureVFPU]) HasVFPU = true;
  if (Bits[Mips::ImplP5600] && ProcImpl < MipsSubtarget::CPU::P5600) ProcImpl = MipsSubtarget::CPU::P5600;
}
#endif // GET_SUBTARGETINFO_TARGET_DESC


#ifdef GET_SUBTARGETINFO_HEADER
#undef GET_SUBTARGETINFO_HEADER

namespace llvm {
class DFAPacketizer;
struct MipsGenSubtargetInfo : public TargetSubtargetInfo {
  explicit MipsGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS);
public:
  unsigned resolveSchedClass(unsigned SchedClass,  const MachineInstr *DefMI, const TargetSchedModel *SchedModel) const override;
  DFAPacketizer *createDFAPacketizer(const InstrItineraryData *IID) const;
};
} // end namespace llvm

#endif // GET_SUBTARGETINFO_HEADER


#ifdef GET_SUBTARGETINFO_CTOR
#undef GET_SUBTARGETINFO_CTOR

#include "llvm/CodeGen/TargetSchedule.h"

namespace llvm {
extern const llvm::SubtargetFeatureKV MipsFeatureKV[];
extern const llvm::SubtargetFeatureKV MipsSubTypeKV[];
extern const llvm::SubtargetInfoKV MipsProcSchedKV[];
extern const llvm::MCWriteProcResEntry MipsWriteProcResTable[];
extern const llvm::MCWriteLatencyEntry MipsWriteLatencyTable[];
extern const llvm::MCReadAdvanceEntry MipsReadAdvanceTable[];
extern const llvm::InstrStage MipsStages[];
extern const unsigned MipsOperandCycles[];
extern const unsigned MipsForwardingPaths[];
MipsGenSubtargetInfo::MipsGenSubtargetInfo(const Triple &TT, StringRef CPU, StringRef FS)
  : TargetSubtargetInfo(TT, CPU, FS, makeArrayRef(MipsFeatureKV, 40), makeArrayRef(MipsSubTypeKV, 17), 
                        MipsProcSchedKV, MipsWriteProcResTable, MipsWriteLatencyTable, MipsReadAdvanceTable, 
                        MipsStages, MipsOperandCycles, MipsForwardingPaths) {}

unsigned MipsGenSubtargetInfo
::resolveSchedClass(unsigned SchedClass, const MachineInstr *MI, const TargetSchedModel *SchedModel) const {
  switch (SchedClass) {
  case 5: // II_ADDIU
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 6: // II_ADDU
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 7: // II_ADDI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 11: // II_ANDI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 205: // II_ORI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 213: // II_ROTR
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 214: // II_ROTRV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 230: // II_SEB
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 231: // II_SEH
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 237: // II_SLL
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 238: // II_SLLV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 239: // II_SLT_SLTU
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 241: // II_SRA
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 242: // II_SRAV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 243: // II_SRL
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 244: // II_SRLV
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  case 285: // II_XORI
    if (SchedModel->getProcessorID() == 2) { // MipsP5600Model
      if ((1))
        return 297; // P5600WriteALU
      if ((0))
        return 298; // P5600WriteAL2
    }
    break;
  };
  report_fatal_error("Expected a variant SchedClass");
} // MipsGenSubtargetInfo::resolveSchedClass
} // end namespace llvm

#endif // GET_SUBTARGETINFO_CTOR

