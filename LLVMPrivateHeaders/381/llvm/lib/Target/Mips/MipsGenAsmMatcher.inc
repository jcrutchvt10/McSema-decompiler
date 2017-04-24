/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Assembly Matcher Source Fragment                                           *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/


#ifdef GET_ASSEMBLER_HEADER
#undef GET_ASSEMBLER_HEADER
  // This should be included into the middle of the declaration of
  // your subclasses implementation of MCTargetAsmParser.
  uint64_t ComputeAvailableFeatures(const FeatureBitset& FB) const;
  void convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                       const OperandVector &Operands);
  void convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) override;
  bool mnemonicIsValid(StringRef Mnemonic, unsigned VariantID);
  unsigned MatchInstructionImpl(const OperandVector &Operands,
                                MCInst &Inst,
                                uint64_t &ErrorInfo, bool matchingInlineAsm,
                                unsigned VariantID = 0);

  enum OperandMatchResultTy {
    MatchOperand_Success,    // operand matched successfully
    MatchOperand_NoMatch,    // operand did not match
    MatchOperand_ParseFail   // operand matched but had errors
  };
  OperandMatchResultTy MatchOperandParserImpl(
    OperandVector &Operands,
    StringRef Mnemonic);
  OperandMatchResultTy tryCustomParseOperand(
    OperandVector &Operands,
    unsigned MCK);

#endif // GET_ASSEMBLER_HEADER_INFO


#ifdef GET_OPERAND_DIAGNOSTIC_TYPES
#undef GET_OPERAND_DIAGNOSTIC_TYPES

  Match_Immz,
  Match_SImm6,
  Match_UImm10_0,
  Match_UImm1_0,
  Match_UImm2_0,
  Match_UImm2_1,
  Match_UImm3_0,
  Match_UImm4_0,
  Match_UImm5_0,
  Match_UImm5_0_Report_UImm6,
  Match_UImm5_1,
  Match_UImm5_32,
  Match_UImm5_33,
  Match_UImm5_Lsl2,
  Match_UImm6_0,
  Match_UImm7_0,
  Match_UImm8_0,
  END_OPERAND_DIAGNOSTIC_TYPES
#endif // GET_OPERAND_DIAGNOSTIC_TYPES


#ifdef GET_REGISTER_MATCHER
#undef GET_REGISTER_MATCHER

// Flags for subtarget features that participate in instruction matching.
enum SubtargetFeatureFlag : uint64_t {
  Feature_HasMips2 = (1ULL << 8),
  Feature_HasMips3_32 = (1ULL << 14),
  Feature_HasMips3_32r2 = (1ULL << 15),
  Feature_HasMips3 = (1ULL << 9),
  Feature_HasMips4_32 = (1ULL << 16),
  Feature_NotMips4_32 = (1ULL << 34),
  Feature_HasMips4_32r2 = (1ULL << 17),
  Feature_HasMips5_32r2 = (1ULL << 18),
  Feature_HasMips32 = (1ULL << 10),
  Feature_HasMips32r2 = (1ULL << 11),
  Feature_HasMips32r5 = (1ULL << 12),
  Feature_HasMips32r6 = (1ULL << 13),
  Feature_NotMips32r6 = (1ULL << 33),
  Feature_IsGP64bit = (1ULL << 27),
  Feature_IsGP32bit = (1ULL << 26),
  Feature_HasMips64 = (1ULL << 19),
  Feature_NotMips64 = (1ULL << 35),
  Feature_HasMips64r2 = (1ULL << 20),
  Feature_HasMips64r6 = (1ULL << 21),
  Feature_NotMips64r6 = (1ULL << 36),
  Feature_HasMicroMips32r6 = (1ULL << 6),
  Feature_HasMicroMips64r6 = (1ULL << 7),
  Feature_InMips16Mode = (1ULL << 24),
  Feature_HasCnMips = (1ULL << 0),
  Feature_HasStdEnc = (1ULL << 22),
  Feature_InMicroMips = (1ULL << 23),
  Feature_NotInMicroMips = (1ULL << 32),
  Feature_HasEVA = (1ULL << 4),
  Feature_HasMSA = (1ULL << 5),
  Feature_IsFP64bit = (1ULL << 25),
  Feature_NotFP64bit = (1ULL << 31),
  Feature_IsSingleFloat = (1ULL << 30),
  Feature_IsNotSingleFloat = (1ULL << 28),
  Feature_IsNotSoftFloat = (1ULL << 29),
  Feature_HasDSP = (1ULL << 1),
  Feature_HasDSPR2 = (1ULL << 2),
  Feature_HasDSPR3 = (1ULL << 3),
  Feature_None = 0
};

#endif // GET_REGISTER_MATCHER


#ifdef GET_SUBTARGET_FEATURE_NAME
#undef GET_SUBTARGET_FEATURE_NAME

// User-level names for subtarget features that participate in
// instruction matching.
static const char *getSubtargetFeatureName(uint64_t Val) {
  switch(Val) {
  case Feature_HasMips2: return "";
  case Feature_HasMips3_32: return "";
  case Feature_HasMips3_32r2: return "";
  case Feature_HasMips3: return "";
  case Feature_HasMips4_32: return "";
  case Feature_NotMips4_32: return "";
  case Feature_HasMips4_32r2: return "";
  case Feature_HasMips5_32r2: return "";
  case Feature_HasMips32: return "";
  case Feature_HasMips32r2: return "";
  case Feature_HasMips32r5: return "";
  case Feature_HasMips32r6: return "";
  case Feature_NotMips32r6: return "";
  case Feature_IsGP64bit: return "";
  case Feature_IsGP32bit: return "";
  case Feature_HasMips64: return "";
  case Feature_NotMips64: return "";
  case Feature_HasMips64r2: return "";
  case Feature_HasMips64r6: return "";
  case Feature_NotMips64r6: return "";
  case Feature_HasMicroMips32r6: return "";
  case Feature_HasMicroMips64r6: return "";
  case Feature_InMips16Mode: return "";
  case Feature_HasCnMips: return "";
  case Feature_HasStdEnc: return "";
  case Feature_InMicroMips: return "";
  case Feature_NotInMicroMips: return "";
  case Feature_HasEVA: return "";
  case Feature_HasMSA: return "";
  case Feature_IsFP64bit: return "";
  case Feature_NotFP64bit: return "";
  case Feature_IsSingleFloat: return "";
  case Feature_IsNotSingleFloat: return "";
  case Feature_IsNotSoftFloat: return "";
  case Feature_HasDSP: return "";
  case Feature_HasDSPR2: return "";
  case Feature_HasDSPR3: return "";
  default: return "(unknown)";
  }
}

#endif // GET_SUBTARGET_FEATURE_NAME


#ifdef GET_MATCHER_IMPLEMENTATION
#undef GET_MATCHER_IMPLEMENTATION

namespace {
enum OperatorConversionKind {
  CVT_Done,
  CVT_Reg,
  CVT_Tied,
  CVT_95_addAFGR64AsmRegOperands,
  CVT_95_addFGR64AsmRegOperands,
  CVT_95_addFGR32AsmRegOperands,
  CVT_95_addGPR32AsmRegOperands,
  CVT_95_addImmOperands,
  CVT_95_addMSA128AsmRegOperands,
  CVT_95_Reg,
  CVT_95_addGPRMM16AsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_,
  CVT_regZERO,
  CVT_95_addGPR64AsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_,
  CVT_regFCC0,
  CVT_95_addFCCAsmRegOperands,
  CVT_95_addCOP2AsmRegOperands,
  CVT_imm_95_0,
  CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_,
  CVT_95_addMemOperands,
  CVT_95_addCCRAsmRegOperands,
  CVT_95_addMSACtrlAsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_,
  CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_,
  CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_,
  CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_,
  CVT_95_addCOP0AsmRegOperands,
  CVT_regZERO_64,
  CVT_95_addACC64DSPAsmRegOperands,
  CVT_95_addConstantUImmOperands_LT_1_GT_,
  CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_,
  CVT_regRA,
  CVT_95_addMicroMipsMemOperands,
  CVT_95_addCOP3AsmRegOperands,
  CVT_95_addRegListOperands,
  CVT_95_addRegPairOperands,
  CVT_95_addMovePRegPairOperands,
  CVT_95_addGPRMM16AsmRegMovePOperands,
  CVT_95_addHI32DSPAsmRegOperands,
  CVT_95_addLO32DSPAsmRegOperands,
  CVT_95_addHWRegsAsmRegOperands,
  CVT_95_addGPRMM16AsmRegZeroOperands,
  CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_,
  CVT_imm_95_2,
  CVT_imm_95_6,
  CVT_imm_95_4,
  CVT_imm_95_5,
  CVT_imm_95_31,
  CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_,
  CVT_NUM_CONVERTERS
};

enum InstructionConversionKind {
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__Reg1_0__Imm1_1,
  Convert__Imm1_1,
  Convert__Reg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Imm1_2,
  Convert__Reg1_0__Tie0__Imm1_1,
  Convert__GPR32AsmReg1_0__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__Imm1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__Imm1_1,
  Convert__Imm1_0,
  Convert__Reg1_0__Reg1_1__Reg1_2,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3,
  Convert__GPR32AsmReg1_0__Imm1_1,
  Convert__Reg1_0__Tie0__Reg1_1,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0,
  Convert__JumpTarget1_0,
  Convert__regZERO__regZERO__JumpTarget1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__regZERO__JumpTarget1_0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0,
  Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2,
  Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2,
  Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2,
  Convert__FGR64AsmReg1_0__JumpTarget1_1,
  Convert__regFCC0__JumpTarget1_0,
  Convert__FCCAsmReg1_0__JumpTarget1_1,
  Convert__COP2AsmReg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2,
  Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2,
  Convert__Reg1_0__JumpTarget1_1,
  Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1,
  Convert__GPRMM16AsmReg1_0__JumpTarget1_1,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2,
  Convert__MSA128AsmReg1_0__JumpTarget1_1,
  Convert__imm_95_0__imm_95_0,
  Convert_NoOperands,
  Convert__ConstantUImm10_01_0__imm_95_0,
  Convert__ConstantUImm10_01_0__ConstantUImm10_01_1,
  Convert__ConstantUImm4_01_0,
  Convert__MemOffsetSimm92_1__ConstantUImm5_01_0,
  Convert__Mem2_1__ConstantUImm5_01_0,
  Convert__FGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__CCRAsmReg1_1,
  Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3,
  Convert__Reg1_0__Reg1_1,
  Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__CCRAsmReg1_1__GPR32AsmReg1_0,
  Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__Tie0__Imm1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR64AsmReg1_1__GPR64AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3,
  Convert__regZERO,
  Convert__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2__Imm1_3__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__Imm1_3__Tie0,
  Convert__Reg1_1__Reg1_2,
  Convert__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__Mem2_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3,
  Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__COP0AsmReg1_1__Imm1_2,
  Convert__GPR64AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0,
  Convert__GPR64AsmReg1_0__COP2AsmReg1_1__Imm1_2,
  Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0,
  Convert__COP0AsmReg1_1__GPR64AsmReg1_0__Imm1_2,
  Convert__FGR64AsmReg1_1__GPR64AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0,
  Convert__COP2AsmReg1_1__GPR64AsmReg1_0__Imm1_2,
  Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__GPR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0,
  Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2,
  Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2,
  Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm4_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm1_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm3_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__MSA128AsmReg1_0__Tie0__ConstantUImm2_01_2__MSA128AsmReg1_4__ConstantImmz1_6,
  Convert__regRA__GPR32AsmReg1_0,
  Convert__Reg1_0,
  Convert__regZERO__GPR32AsmReg1_0,
  Convert__regZERO_64__GPR64AsmReg1_0,
  Convert__UImm5Lsl21_0,
  Convert__GPR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__MemOffsetSimm92_1,
  Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__MSA128AsmReg1_0__Mem2_1,
  Convert__AFGR64AsmReg1_0__Mem2_1,
  Convert__FGR64AsmReg1_0__Mem2_1,
  Convert__COP2AsmReg1_0__MemOffsetSimm112_1,
  Convert__COP2AsmReg1_0__Mem2_1,
  Convert__COP3AsmReg1_0__Mem2_1,
  Convert__MSA128AsmReg1_0__Imm1_1,
  Convert__GPR64AsmReg1_0__Mem2_1__Tie0,
  Convert__GPR64AsmReg1_0__JumpTarget1_1,
  Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__GPR64AsmReg1_0__MemOffsetSimm92_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3,
  Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__ConstantUImm2_11_3,
  Convert__Reg1_0__Imm1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1,
  Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2,
  Convert__Reg1_0__Reg1_3__Imm1_1,
  Convert__FGR32AsmReg1_0__Mem2_1,
  Convert__GPR32AsmReg1_0__Mem2_1__Tie0,
  Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0,
  Convert__RegList1_0__Mem2_1,
  Convert__RegList161_0__MemOffsetUimm42_1,
  Convert__RegPair2_0__Mem2_1,
  Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3,
  Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2,
  Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__COP0AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__FGR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__COP2AsmReg1_1__Imm1_2,
  Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__FGR64AsmReg1_1,
  Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO,
  Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64,
  Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0,
  Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0,
  Convert__COP0AsmReg1_1__GPR32AsmReg1_0__Imm1_2,
  Convert__FGR32AsmReg1_1__GPR32AsmReg1_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0,
  Convert__COP2AsmReg1_1__GPR32AsmReg1_0__Imm1_2,
  Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0,
  Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0,
  Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0,
  Convert__GPR64AsmReg1_0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1,
  Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0,
  Convert__regZERO__regZERO__imm_95_0,
  Convert__regZERO__regZERO,
  Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0,
  Convert__GPR32AsmReg1_3__GPR32AsmReg1_1__ConstantUImm5_01_0,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__imm_95_0,
  Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__ConstantUImm3_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2,
  Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3,
  Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1,
  Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1,
  Convert__GPR32AsmReg1_0__Tie0__Mem2_1,
  Convert__GPR64AsmReg1_0__Tie0__MemOffsetSimm92_1,
  Convert__GPR64AsmReg1_0__Tie0__Mem2_1,
  Convert__imm_95_0,
  Convert__Reg1_0__Tie0,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2,
  Convert__ACC64DSPAsmReg1_0__ConstantSImm61_1__Tie0,
  Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm1_01_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_3,
  Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm2_01_3,
  Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3,
  Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2,
  Convert__GPR32AsmReg1_0__MemOffsetSimm9GPR2_1,
  Convert__MemOffsetSimm162_0,
  Convert__imm_95_2,
  Convert__imm_95_6,
  Convert__imm_95_4,
  Convert__imm_95_5,
  Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0,
  Convert__ConstantUImm10_01_0,
  Convert__GPR32AsmReg1_0__imm_95_31,
  Convert__GPR32AsmReg1_0__ConstantUImm7_01_1,
  Convert__GPR32AsmReg1_0__ConstantUImm10_01_1,
  CVT_NUM_SIGNATURES
};

} // end anonymous namespace

static const uint8_t ConversionTable[CVT_NUM_SIGNATURES][11] = {
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_1
  { CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Imm1_2
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Tie0__Imm1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Imm1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Imm1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Reg1_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_95_addGPRMM16AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__Reg1_0__Tie0__Reg1_1
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_95_Reg, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Tied, 0, CVT_Done },
  // Convert__JumpTarget1_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__regZERO__JumpTarget1_0
  { CVT_regZERO, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__regFCC0__JumpTarget1_0
  { CVT_regFCC0, 0, CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__FCCAsmReg1_0__JumpTarget1_1
  { CVT_95_addFCCAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__JumpTarget1_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__JumpTarget1_1
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addMSA128AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__JumpTarget1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__imm_95_0__imm_95_0
  { CVT_imm_95_0, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert_NoOperands
  { CVT_Done },
  // Convert__ConstantUImm10_01_0__imm_95_0
  { CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__ConstantUImm10_01_0__ConstantUImm10_01_1
  { CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 1, CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 2, CVT_Done },
  // Convert__ConstantUImm4_01_0
  { CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 1, CVT_Done },
  // Convert__MemOffsetSimm92_1__ConstantUImm5_01_0
  { CVT_95_addMemOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__Mem2_1__ConstantUImm5_01_0
  { CVT_95_addMemOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__CCRAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCCRAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSACtrlAsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__CCRAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addCCRAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSACtrlAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_1__GPR64AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Done },
  // Convert__regZERO
  { CVT_regZERO, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2__Imm1_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__Imm1_3__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__Reg1_1__Reg1_2
  { CVT_95_Reg, 2, CVT_95_Reg, 3, CVT_Done },
  // Convert__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__Imm1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP0AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__COP2AsmReg1_1__Imm1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR64AsmReg1_0__Imm1_2
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR64AsmReg1_1__GPR64AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR64AsmReg1_0__Imm1_2
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR32AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__GPR64AsmReg1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_95_addImmOperands, 4, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR64AsmRegOperands, 5, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm4_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm1_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm3_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__ConstantUImm2_01_2__MSA128AsmReg1_4__ConstantImmz1_6
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 3, CVT_95_addMSA128AsmRegOperands, 5, CVT_95_addConstantUImmOperands_LT_1_GT_, 7, CVT_Done },
  // Convert__regRA__GPR32AsmReg1_0
  { CVT_regRA, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__Reg1_0
  { CVT_95_Reg, 1, CVT_Done },
  // Convert__regZERO__GPR32AsmReg1_0
  { CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO_64__GPR64AsmReg1_0
  { CVT_regZERO_64, 0, CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__UImm5Lsl21_0
  { CVT_95_addImmOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm92_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Mem2_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__Mem2_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__Mem2_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__MemOffsetSimm112_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP2AsmReg1_0__Mem2_1
  { CVT_95_addCOP2AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__COP3AsmReg1_0__Mem2_1
  { CVT_95_addCOP3AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MSA128AsmReg1_0__Imm1_1
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__JumpTarget1_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__MemOffsetSimm92_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__ConstantUImm2_11_3
  { CVT_95_addGPR32AsmRegOperands, 3, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Imm1_1__imm_95_0
  { CVT_95_Reg, 1, CVT_95_addImmOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_3__Imm1_1
  { CVT_95_Reg, 1, CVT_95_Reg, 4, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__Mem2_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Mem2_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__RegList1_0__Mem2_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegList161_0__MemOffsetUimm42_1
  { CVT_95_addRegListOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__RegPair2_0__Mem2_1
  { CVT_95_addRegPairOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addAFGR64AsmRegOperands, 3, CVT_95_addAFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_95_addFGR64AsmRegOperands, 4, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_95_addFGR32AsmRegOperands, 4, CVT_Done },
  // Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFGR64AsmRegOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFGR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP0AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__COP2AsmReg1_1__Imm1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__FGR64AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addACC64DSPAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_regZERO, 0, CVT_Done },
  // Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_95_addGPR64AsmRegOperands, 2, CVT_regZERO_64, 0, CVT_Done },
  // Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2
  { CVT_95_addMovePRegPairOperands, 1, CVT_95_addGPRMM16AsmRegMovePOperands, 2, CVT_95_addGPRMM16AsmRegMovePOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addFCCAsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addAFGR64AsmRegOperands, 1, CVT_95_addAFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR64AsmRegOperands, 1, CVT_95_addFGR64AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0
  { CVT_95_addFGR32AsmRegOperands, 1, CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Tied, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP0AsmReg1_1__GPR32AsmReg1_0__Imm1_2
  { CVT_95_addCOP0AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__FGR32AsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addFGR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_0, 0, CVT_Done },
  // Convert__COP2AsmReg1_1__GPR32AsmReg1_0__Imm1_2
  { CVT_95_addCOP2AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addAFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0
  { CVT_95_addFGR64AsmRegOperands, 2, CVT_Tied, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addHI32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_Done },
  // Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0
  { CVT_95_addLO32DSPAsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR64AsmReg1_0
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_regZERO, 0, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__regZERO__regZERO__imm_95_0
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_imm_95_0, 0, CVT_Done },
  // Convert__regZERO__regZERO
  { CVT_regZERO, 0, CVT_regZERO, 0, CVT_Done },
  // Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1
  { CVT_95_addGPRMM16AsmRegOperands, 1, CVT_95_addGPRMM16AsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_Done },
  // Convert__GPR32AsmReg1_3__GPR32AsmReg1_1__ConstantUImm5_01_0
  { CVT_95_addGPR32AsmRegOperands, 4, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addHWRegsAsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addImmOperands, 3, CVT_95_Reg, 4, CVT_Done },
  // Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1
  { CVT_95_addGPRMM16AsmRegZeroOperands, 1, CVT_95_addMicroMipsMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__MemOffsetSimm92_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__GPR64AsmReg1_0__Tie0__Mem2_1
  { CVT_95_addGPR64AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__imm_95_0
  { CVT_imm_95_0, 0, CVT_Done },
  // Convert__Reg1_0__Tie0
  { CVT_95_Reg, 1, CVT_Tied, 0, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_, 3, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__ConstantSImm61_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0
  { CVT_95_addACC64DSPAsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_Tied, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm1_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm2_01_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_Tied, 0, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_, 4, CVT_Done },
  // Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2
  { CVT_95_Reg, 1, CVT_95_Reg, 2, CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_, 3, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addGPR32AsmRegOperands, 4, CVT_Done },
  // Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3
  { CVT_95_addMSA128AsmRegOperands, 1, CVT_95_addMSA128AsmRegOperands, 2, CVT_95_addImmOperands, 4, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addImmOperands, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_95_addImmOperands, 3, CVT_Done },
  // Convert__GPR32AsmReg1_0__MemOffsetSimm9GPR2_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addMemOperands, 2, CVT_Done },
  // Convert__MemOffsetSimm162_0
  { CVT_95_addMemOperands, 1, CVT_Done },
  // Convert__imm_95_2
  { CVT_imm_95_2, 0, CVT_Done },
  // Convert__imm_95_6
  { CVT_imm_95_6, 0, CVT_Done },
  // Convert__imm_95_4
  { CVT_imm_95_4, 0, CVT_Done },
  // Convert__imm_95_5
  { CVT_imm_95_5, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addGPR32AsmRegOperands, 2, CVT_imm_95_0, 0, CVT_Done },
  // Convert__ConstantUImm10_01_0
  { CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 1, CVT_Done },
  // Convert__GPR32AsmReg1_0__imm_95_31
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_imm_95_31, 0, CVT_Done },
  // Convert__GPR32AsmReg1_0__ConstantUImm7_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_, 2, CVT_Done },
  // Convert__GPR32AsmReg1_0__ConstantUImm10_01_1
  { CVT_95_addGPR32AsmRegOperands, 1, CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_, 2, CVT_Done },
};

void MipsAsmParser::
convertToMCInst(unsigned Kind, MCInst &Inst, unsigned Opcode,
                const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  const uint8_t *Converter = ConversionTable[Kind];
  Inst.setOpcode(Opcode);
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_Tied:
      Inst.addOperand(Inst.getOperand(*(p + 1)));
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addAFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addFGR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFGR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPR32AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR32AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addImmOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addImmOperands(Inst, 1);
      break;
    case CVT_95_addMSA128AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSA128AsmRegOperands(Inst, 1);
      break;
    case CVT_95_Reg:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<2, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<5, 0>(Inst, 1);
      break;
    case CVT_regZERO:
      Inst.addOperand(MCOperand::createReg(Mips::ZERO));
      break;
    case CVT_95_addGPR64AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPR64AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<5, 32, -32>(Inst, 1);
      break;
    case CVT_regFCC0:
      Inst.addOperand(MCOperand::createReg(Mips::FCC0));
      break;
    case CVT_95_addFCCAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addFCCAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addCOP2AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP2AsmRegOperands(Inst, 1);
      break;
    case CVT_imm_95_0:
      Inst.addOperand(MCOperand::createImm(0));
      break;
    case CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<10, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<4, 0>(Inst, 1);
      break;
    case CVT_95_addMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMemOperands(Inst, 2);
      break;
    case CVT_95_addCCRAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCCRAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMSACtrlAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<3, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<5, 1>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<5, 33>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<5, 32>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<6, 0>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<2, 1>(Inst, 1);
      break;
    case CVT_95_addCOP0AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP0AsmRegOperands(Inst, 1);
      break;
    case CVT_regZERO_64:
      Inst.addOperand(MCOperand::createReg(Mips::ZERO_64));
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addACC64DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_1_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<1>(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<1, 0>(Inst, 1);
      break;
    case CVT_regRA:
      Inst.addOperand(MCOperand::createReg(Mips::RA));
      break;
    case CVT_95_addMicroMipsMemOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMicroMipsMemOperands(Inst, 2);
      break;
    case CVT_95_addCOP3AsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addCOP3AsmRegOperands(Inst, 1);
      break;
    case CVT_95_addRegListOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegListOperands(Inst, 1);
      break;
    case CVT_95_addRegPairOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addRegPairOperands(Inst, 2);
      break;
    case CVT_95_addMovePRegPairOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addMovePRegPairOperands(Inst, 2);
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegMovePOperands(Inst, 1);
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHI32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addLO32DSPAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addHWRegsAsmRegOperands(Inst, 1);
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addGPRMM16AsmRegZeroOperands(Inst, 1);
      break;
    case CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<8, 0>(Inst, 1);
      break;
    case CVT_imm_95_2:
      Inst.addOperand(MCOperand::createImm(2));
      break;
    case CVT_imm_95_6:
      Inst.addOperand(MCOperand::createImm(6));
      break;
    case CVT_imm_95_4:
      Inst.addOperand(MCOperand::createImm(4));
      break;
    case CVT_imm_95_5:
      Inst.addOperand(MCOperand::createImm(5));
      break;
    case CVT_imm_95_31:
      Inst.addOperand(MCOperand::createImm(31));
      break;
    case CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_:
      static_cast<MipsOperand&>(*Operands[*(p + 1)]).addConstantUImmOperands<7, 0>(Inst, 1);
      break;
    }
  }
}

void MipsAsmParser::
convertToMapAndConstraints(unsigned Kind,
                           const OperandVector &Operands) {
  assert(Kind < CVT_NUM_SIGNATURES && "Invalid signature!");
  unsigned NumMCOperands = 0;
  const uint8_t *Converter = ConversionTable[Kind];
  for (const uint8_t *p = Converter; *p; p+= 2) {
    switch (*p) {
    default: llvm_unreachable("invalid conversion entry!");
    case CVT_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      ++NumMCOperands;
      break;
    case CVT_Tied:
      ++NumMCOperands;
      break;
    case CVT_95_addAFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addFGR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPR32AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addImmOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSA128AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_Reg:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("r");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addGPR64AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_44__32__MINUS_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regFCC0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addFCCAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP2AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_0:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addConstantUImmOperands_LT_10_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_4_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCCRAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addMSACtrlAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_3_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_33_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_5_44__32_32_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_6_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_2_44__32_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addCOP0AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regZERO_64:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addACC64DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_1_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_1_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_regRA:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      ++NumMCOperands;
      break;
    case CVT_95_addMicroMipsMemOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addCOP3AsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegListOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addMovePRegPairOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 2;
      break;
    case CVT_95_addGPRMM16AsmRegMovePOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHI32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addLO32DSPAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addHWRegsAsmRegOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addGPRMM16AsmRegZeroOperands:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_95_addConstantUImmOperands_LT_8_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    case CVT_imm_95_2:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_6:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_4:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_5:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_imm_95_31:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("");
      ++NumMCOperands;
      break;
    case CVT_95_addConstantUImmOperands_LT_7_44__32_0_GT_:
      Operands[*(p + 1)]->setMCOperandNum(NumMCOperands);
      Operands[*(p + 1)]->setConstraint("m");
      NumMCOperands += 1;
      break;
    }
  }
}

namespace {

/// MatchClassKind - The kinds of classes which participate in
/// instruction matching.
enum MatchClassKind {
  InvalidMatchClass = 0,
  MCK__35_, // '#'
  MCK__40_, // '('
  MCK__41_, // ')'
  MCK__41__59_, // ');'
  MCK_0, // '0'
  MCK_16, // '16'
  MCK__91_, // '['
  MCK__93_, // ']'
  MCK_bit, // 'bit'
  MCK_inst, // 'inst'
  MCK_ZERO, // register class 'ZERO'
  MCK_Reg9, // derived register class
  MCK_Reg4, // derived register class
  MCK_Reg7, // derived register class
  MCK_Reg8, // derived register class
  MCK_CPU16Regs, // register class 'CPU16Regs,GPRMM16'
  MCK_CPUSPReg, // register class 'CPUSPReg,SP'
  MCK_CPU16RegsPlusSP, // register class 'CPU16RegsPlusSP'
  MCK_GPRMM16MoveP, // register class 'GPRMM16MoveP'
  MCK_GPRMM16Zero, // register class 'GPRMM16Zero'
  MCK_CPURAReg, // register class 'CPURAReg,RA'
  MCK_DSPR, // register class 'DSPR,GPR32'
  MCK_Reg20, // derived register class
  MCK_Reg15, // derived register class
  MCK_Reg18, // derived register class
  MCK_Reg13, // derived register class
  MCK_Reg19, // derived register class
  MCK_Reg14, // derived register class
  MCK_Reg16, // derived register class
  MCK_Reg21, // derived register class
  MCK_Reg17, // derived register class
  MCK_Reg22, // derived register class
  MCK_GPR64, // register class 'GPR64'
  MCK_Reg24, // derived register class
  MCK_FGR32, // register class 'FGR32,FGRCC'
  MCK_Reg27, // derived register class
  MCK_FGRH32, // register class 'FGRH32'
  MCK_Reg29, // derived register class
  MCK_Reg32, // derived register class
  MCK_Reg30, // derived register class
  MCK_AFGR64, // register class 'AFGR64'
  MCK_FGR64, // register class 'FGR64'
  MCK_OddSP, // register class 'OddSP'
  MCK_MSA128WEvens, // register class 'MSA128WEvens'
  MCK_Reg35, // derived register class
  MCK_MSA128B, // register class 'MSA128B,MSA128D,MSA128H,MSA128W'
  MCK_HI32, // register class 'HI32'
  MCK_HI32DSP, // register class 'HI32DSP'
  MCK_LO32, // register class 'LO32'
  MCK_LO32DSP, // register class 'LO32DSP'
  MCK_HI64, // register class 'HI64'
  MCK_LO64, // register class 'LO64'
  MCK_CCR, // register class 'CCR'
  MCK_FCC, // register class 'FCC'
  MCK_COP0, // register class 'COP0'
  MCK_COP2, // register class 'COP2'
  MCK_COP3, // register class 'COP3'
  MCK_PC, // register class 'PC'
  MCK_HWRegs, // register class 'HWRegs'
  MCK_ACC64, // register class 'ACC64'
  MCK_ACC64DSP, // register class 'ACC64DSP'
  MCK_ACC128, // register class 'ACC128'
  MCK_DSPCC, // register class 'DSPCC'
  MCK_MSACtrl, // register class 'MSACtrl'
  MCK_OCTEON_MPL, // register class 'OCTEON_MPL'
  MCK_OCTEON_P, // register class 'OCTEON_P'
  MCK_ACC64DSPAsmReg, // user defined class 'ACC64DSPAsmOperand'
  MCK_AFGR64AsmReg, // user defined class 'AFGR64AsmOperand'
  MCK_CCRAsmReg, // user defined class 'CCRAsmOperand'
  MCK_COP0AsmReg, // user defined class 'COP0AsmOperand'
  MCK_COP2AsmReg, // user defined class 'COP2AsmOperand'
  MCK_COP3AsmReg, // user defined class 'COP3AsmOperand'
  MCK_ConstantImmz, // user defined class 'ConstantImmzAsmOperandClass'
  MCK_ConstantSImm6, // user defined class 'ConstantSImm6AsmOperandClass'
  MCK_ConstantUImm1_0, // user defined class 'ConstantUImm1AsmOperandClass'
  MCK_ConstantUImm2_0, // user defined class 'ConstantUImm2AsmOperandClass'
  MCK_ConstantUImm2_1, // user defined class 'ConstantUImm2Plus1AsmOperandClass'
  MCK_ConstantUImm3_0, // user defined class 'ConstantUImm3AsmOperandClass'
  MCK_ConstantUImm4_0, // user defined class 'ConstantUImm4AsmOperandClass'
  MCK_ConstantUImm5_0, // user defined class 'ConstantUImm5AsmOperandClass'
  MCK_UImm5Lsl2, // user defined class 'ConstantUImm5Lsl2AsmOperandClass'
  MCK_ConstantUImm5_1, // user defined class 'ConstantUImm5Plus1AsmOperandClass'
  MCK_ConstantUImm5_32, // user defined class 'ConstantUImm5Plus32AsmOperandClass'
  MCK_ConstantUImm5_32_Norm, // user defined class 'ConstantUImm5Plus32NormalizeAsmOperandClass'
  MCK_ConstantUImm5_33, // user defined class 'ConstantUImm5Plus33AsmOperandClass'
  MCK_ConstantUImm5_0_Report_UImm6, // user defined class 'ConstantUImm5ReportUImm6AsmOperandClass'
  MCK_ConstantUImm6_0, // user defined class 'ConstantUImm6AsmOperandClass'
  MCK_ConstantUImm7_0, // user defined class 'ConstantUImm7AsmOperandClass'
  MCK_ConstantUImm8_0, // user defined class 'ConstantUImm8AsmOperandClass'
  MCK_ConstantUImm10_0, // user defined class 'ConstantUImm10AsmOperandClass'
  MCK_FCCAsmReg, // user defined class 'FCCRegsAsmOperand'
  MCK_FGR32AsmReg, // user defined class 'FGR32AsmOperand'
  MCK_FGR64AsmReg, // user defined class 'FGR64AsmOperand'
  MCK_FGRH32AsmReg, // user defined class 'FGRH32AsmOperand'
  MCK_GPR32AsmReg, // user defined class 'GPR32AsmOperand'
  MCK_GPR64AsmReg, // user defined class 'GPR64AsmOperand'
  MCK_GPRMM16AsmReg, // user defined class 'GPRMM16AsmOperand'
  MCK_GPRMM16AsmRegMoveP, // user defined class 'GPRMM16AsmOperandMoveP'
  MCK_GPRMM16AsmRegZero, // user defined class 'GPRMM16AsmOperandZero'
  MCK_HI32DSPAsmReg, // user defined class 'HI32DSPAsmOperand'
  MCK_HWRegsAsmReg, // user defined class 'HWRegsAsmOperand'
  MCK_Imm, // user defined class 'ImmAsmOperand'
  MCK_LO32DSPAsmReg, // user defined class 'LO32DSPAsmOperand'
  MCK_MSA128AsmReg, // user defined class 'MSA128AsmOperand'
  MCK_MSACtrlAsmReg, // user defined class 'MSACtrlAsmOperand'
  MCK_MicroMipsMem, // user defined class 'MicroMipsMemGPRMM16AsmOperand'
  MCK_MicroMipsMemSP, // user defined class 'MicroMipsMemSPAsmOperand'
  MCK_InvNum, // user defined class 'MipsInvertedImmoperand'
  MCK_JumpTarget, // user defined class 'MipsJumpTargetAsmOperand'
  MCK_MemOffsetSimm11, // user defined class 'MipsMemSimm11AsmOperand'
  MCK_MemOffsetSimm16, // user defined class 'MipsMemSimm16AsmOperand'
  MCK_MemOffsetSimm9, // user defined class 'MipsMemSimm9AsmOperand'
  MCK_MemOffsetSimm9GPR, // user defined class 'MipsMemSimm9GPRAsmOperand'
  MCK_MemOffsetUimm4, // user defined class 'MipsMemUimm4AsmOperand'
  MCK_Mem, // user defined class 'MipsMemAsmOperand'
  MCK_MovePRegPair, // user defined class 'MovePRegPairAsmOperand'
  MCK_RegList16, // user defined class 'RegList16AsmOperand'
  MCK_RegList, // user defined class 'RegListAsmOperand'
  MCK_RegPair, // user defined class 'RegPairAsmOperand'
  NumMatchClassKinds
};

}

static MatchClassKind matchTokenString(StringRef Name) {
  switch (Name.size()) {
  default: break;
  case 1:	 // 6 strings to match.
    switch (Name[0]) {
    default: break;
    case '#':	 // 1 string to match.
      return MCK__35_;	 // "#"
    case '(':	 // 1 string to match.
      return MCK__40_;	 // "("
    case ')':	 // 1 string to match.
      return MCK__41_;	 // ")"
    case '0':	 // 1 string to match.
      return MCK_0;	 // "0"
    case '[':	 // 1 string to match.
      return MCK__91_;	 // "["
    case ']':	 // 1 string to match.
      return MCK__93_;	 // "]"
    }
    break;
  case 2:	 // 2 strings to match.
    switch (Name[0]) {
    default: break;
    case ')':	 // 1 string to match.
      if (Name[1] != ';')
        break;
      return MCK__41__59_;	 // ");"
    case '1':	 // 1 string to match.
      if (Name[1] != '6')
        break;
      return MCK_16;	 // "16"
    }
    break;
  case 3:	 // 1 string to match.
    if (memcmp(Name.data()+0, "bit", 3))
      break;
    return MCK_bit;	 // "bit"
  case 4:	 // 1 string to match.
    if (memcmp(Name.data()+0, "inst", 4))
      break;
    return MCK_inst;	 // "inst"
  }
  return InvalidMatchClass;
}

/// isSubclass - Compute whether \p A is a subclass of \p B.
static bool isSubclass(MatchClassKind A, MatchClassKind B) {
  if (A == B)
    return true;

  switch (A) {
  default:
    return false;

  case MCK_ZERO:
    switch (B) {
    default: return false;
    case MCK_Reg4: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg9:
    switch (B) {
    default: return false;
    case MCK_Reg4: return true;
    case MCK_Reg7: return true;
    case MCK_Reg8: return true;
    case MCK_CPU16Regs: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg4:
    switch (B) {
    default: return false;
    case MCK_GPRMM16MoveP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg7:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_GPRMM16Zero: return true;
    case MCK_DSPR: return true;
    }

  case MCK_Reg8:
    switch (B) {
    default: return false;
    case MCK_CPU16Regs: return true;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_GPRMM16MoveP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16Regs:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPUSPReg:
    switch (B) {
    default: return false;
    case MCK_CPU16RegsPlusSP: return true;
    case MCK_DSPR: return true;
    }

  case MCK_CPU16RegsPlusSP:
    return B == MCK_DSPR;

  case MCK_GPRMM16MoveP:
    return B == MCK_DSPR;

  case MCK_GPRMM16Zero:
    return B == MCK_DSPR;

  case MCK_CPURAReg:
    return B == MCK_DSPR;

  case MCK_Reg20:
    switch (B) {
    default: return false;
    case MCK_Reg15: return true;
    case MCK_Reg18: return true;
    case MCK_Reg13: return true;
    case MCK_Reg19: return true;
    case MCK_Reg14: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg15:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_Reg14: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg18:
    switch (B) {
    default: return false;
    case MCK_Reg13: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg13:
    return B == MCK_GPR64;

  case MCK_Reg19:
    switch (B) {
    default: return false;
    case MCK_Reg14: return true;
    case MCK_Reg16: return true;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg14:
    return B == MCK_GPR64;

  case MCK_Reg16:
    switch (B) {
    default: return false;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg21:
    switch (B) {
    default: return false;
    case MCK_Reg17: return true;
    case MCK_GPR64: return true;
    }

  case MCK_Reg17:
    return B == MCK_GPR64;

  case MCK_Reg22:
    return B == MCK_GPR64;

  case MCK_Reg24:
    switch (B) {
    default: return false;
    case MCK_FGR32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg27:
    switch (B) {
    default: return false;
    case MCK_FGRH32: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg29:
    switch (B) {
    default: return false;
    case MCK_Reg30: return true;
    case MCK_AFGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg32:
    switch (B) {
    default: return false;
    case MCK_Reg30: return true;
    case MCK_FGR64: return true;
    case MCK_OddSP: return true;
    }

  case MCK_Reg30:
    return B == MCK_OddSP;

  case MCK_MSA128WEvens:
    return B == MCK_MSA128B;

  case MCK_Reg35:
    return B == MCK_MSA128B;

  case MCK_HI32:
    return B == MCK_HI32DSP;

  case MCK_LO32:
    return B == MCK_LO32DSP;

  case MCK_ACC64:
    return B == MCK_ACC64DSP;

  case MCK_ConstantImmz:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm1_0: return true;
    case MCK_ConstantUImm2_0: return true;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantSImm6:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm1_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm2_0: return true;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm2_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm2_1:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm3_0: return true;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm3_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm4_0: return true;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm4_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm5_0: return true;
    case MCK_ConstantUImm5_32: return true;
    case MCK_ConstantUImm5_32_Norm: return true;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm5_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_UImm5Lsl2:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm5_1:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm5_32:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm5_32_Norm:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm5_33:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm5_0_Report_UImm6:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm6_0: return true;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm6_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm7_0: return true;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm7_0:
    switch (B) {
    default: return false;
    case MCK_ConstantUImm8_0: return true;
    case MCK_ConstantUImm10_0: return true;
    }

  case MCK_ConstantUImm8_0:
    return B == MCK_ConstantUImm10_0;

  case MCK_MemOffsetSimm11:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm16:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm9:
    return B == MCK_Mem;

  case MCK_MemOffsetSimm9GPR:
    return B == MCK_Mem;

  case MCK_MemOffsetUimm4:
    return B == MCK_Mem;
  }
}

static unsigned validateOperandClass(MCParsedAsmOperand &GOp, MatchClassKind Kind) {
  MipsOperand &Operand = (MipsOperand&)GOp;
  if (Kind == InvalidMatchClass)
    return MCTargetAsmParser::Match_InvalidOperand;

  if (Operand.isToken())
    return isSubclass(matchTokenString(Operand.getToken()), Kind) ?
             MCTargetAsmParser::Match_Success :
             MCTargetAsmParser::Match_InvalidOperand;

  // 'ACC64DSPAsmReg' class
  if (Kind == MCK_ACC64DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'AFGR64AsmReg' class
  if (Kind == MCK_AFGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'CCRAsmReg' class
  if (Kind == MCK_CCRAsmReg) {
    if (Operand.isCCRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP0AsmReg' class
  if (Kind == MCK_COP0AsmReg) {
    if (Operand.isCOP0AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP2AsmReg' class
  if (Kind == MCK_COP2AsmReg) {
    if (Operand.isCOP2AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'COP3AsmReg' class
  if (Kind == MCK_COP3AsmReg) {
    if (Operand.isCOP3AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'ConstantImmz' class
  if (Kind == MCK_ConstantImmz) {
    if (Operand.isConstantImmz())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_Immz;
  }

  // 'ConstantSImm6' class
  if (Kind == MCK_ConstantSImm6) {
    if (Operand.isConstantSImm<6>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_SImm6;
  }

  // 'ConstantUImm1_0' class
  if (Kind == MCK_ConstantUImm1_0) {
    if (Operand.isConstantUImm<1, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm1_0;
  }

  // 'ConstantUImm2_0' class
  if (Kind == MCK_ConstantUImm2_0) {
    if (Operand.isConstantUImm<2, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm2_0;
  }

  // 'ConstantUImm2_1' class
  if (Kind == MCK_ConstantUImm2_1) {
    if (Operand.isConstantUImm<2, 1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm2_1;
  }

  // 'ConstantUImm3_0' class
  if (Kind == MCK_ConstantUImm3_0) {
    if (Operand.isConstantUImm<3, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm3_0;
  }

  // 'ConstantUImm4_0' class
  if (Kind == MCK_ConstantUImm4_0) {
    if (Operand.isConstantUImm<4, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm4_0;
  }

  // 'ConstantUImm5_0' class
  if (Kind == MCK_ConstantUImm5_0) {
    if (Operand.isConstantUImm<5, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_0;
  }

  // 'UImm5Lsl2' class
  if (Kind == MCK_UImm5Lsl2) {
    if (Operand.isScaledUImm<5, 2>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_Lsl2;
  }

  // 'ConstantUImm5_1' class
  if (Kind == MCK_ConstantUImm5_1) {
    if (Operand.isConstantUImm<5, 1>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_1;
  }

  // 'ConstantUImm5_32' class
  if (Kind == MCK_ConstantUImm5_32) {
    if (Operand.isConstantUImm<5, 32>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_32;
  }

  // 'ConstantUImm5_32_Norm' class
  if (Kind == MCK_ConstantUImm5_32_Norm) {
    if (Operand.isConstantUImm<5, 32>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_32;
  }

  // 'ConstantUImm5_33' class
  if (Kind == MCK_ConstantUImm5_33) {
    if (Operand.isConstantUImm<5, 33>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_33;
  }

  // 'ConstantUImm5_0_Report_UImm6' class
  if (Kind == MCK_ConstantUImm5_0_Report_UImm6) {
    if (Operand.isConstantUImm<5, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm5_0_Report_UImm6;
  }

  // 'ConstantUImm6_0' class
  if (Kind == MCK_ConstantUImm6_0) {
    if (Operand.isConstantUImm<6, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm6_0;
  }

  // 'ConstantUImm7_0' class
  if (Kind == MCK_ConstantUImm7_0) {
    if (Operand.isConstantUImm<7, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm7_0;
  }

  // 'ConstantUImm8_0' class
  if (Kind == MCK_ConstantUImm8_0) {
    if (Operand.isConstantUImm<8, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm8_0;
  }

  // 'ConstantUImm10_0' class
  if (Kind == MCK_ConstantUImm10_0) {
    if (Operand.isConstantUImm<10, 0>())
      return MCTargetAsmParser::Match_Success;
    return MipsAsmParser::Match_UImm10_0;
  }

  // 'FCCAsmReg' class
  if (Kind == MCK_FCCAsmReg) {
    if (Operand.isFCCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR32AsmReg' class
  if (Kind == MCK_FGR32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGR64AsmReg' class
  if (Kind == MCK_FGR64AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'FGRH32AsmReg' class
  if (Kind == MCK_FGRH32AsmReg) {
    if (Operand.isFGRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR32AsmReg' class
  if (Kind == MCK_GPR32AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPR64AsmReg' class
  if (Kind == MCK_GPR64AsmReg) {
    if (Operand.isGPRAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmReg' class
  if (Kind == MCK_GPRMM16AsmReg) {
    if (Operand.isMM16AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmRegMoveP' class
  if (Kind == MCK_GPRMM16AsmRegMoveP) {
    if (Operand.isMM16AsmRegMoveP())
      return MCTargetAsmParser::Match_Success;
  }

  // 'GPRMM16AsmRegZero' class
  if (Kind == MCK_GPRMM16AsmRegZero) {
    if (Operand.isMM16AsmRegZero())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HI32DSPAsmReg' class
  if (Kind == MCK_HI32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'HWRegsAsmReg' class
  if (Kind == MCK_HWRegsAsmReg) {
    if (Operand.isHWRegsAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Imm' class
  if (Kind == MCK_Imm) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'LO32DSPAsmReg' class
  if (Kind == MCK_LO32DSPAsmReg) {
    if (Operand.isACCAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSA128AsmReg' class
  if (Kind == MCK_MSA128AsmReg) {
    if (Operand.isMSA128AsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MSACtrlAsmReg' class
  if (Kind == MCK_MSACtrlAsmReg) {
    if (Operand.isMSACtrlAsmReg())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MicroMipsMem' class
  if (Kind == MCK_MicroMipsMem) {
    if (Operand.isMemWithGRPMM16Base())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MicroMipsMemSP' class
  if (Kind == MCK_MicroMipsMemSP) {
    if (Operand.isMemWithUimmWordAlignedOffsetSP<7>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'InvNum' class
  if (Kind == MCK_InvNum) {
    if (Operand.isInvNum())
      return MCTargetAsmParser::Match_Success;
  }

  // 'JumpTarget' class
  if (Kind == MCK_JumpTarget) {
    if (Operand.isImm())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm11' class
  if (Kind == MCK_MemOffsetSimm11) {
    if (Operand.isMemWithSimmOffset<11>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm16' class
  if (Kind == MCK_MemOffsetSimm16) {
    if (Operand.isMemWithSimmOffset<16>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm9' class
  if (Kind == MCK_MemOffsetSimm9) {
    if (Operand.isMemWithSimmOffset<9>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetSimm9GPR' class
  if (Kind == MCK_MemOffsetSimm9GPR) {
    if (Operand.isMemWithSimmOffsetGPR<9>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MemOffsetUimm4' class
  if (Kind == MCK_MemOffsetUimm4) {
    if (Operand.isMemWithUimmOffsetSP<6>())
      return MCTargetAsmParser::Match_Success;
  }

  // 'Mem' class
  if (Kind == MCK_Mem) {
    if (Operand.isMem())
      return MCTargetAsmParser::Match_Success;
  }

  // 'MovePRegPair' class
  if (Kind == MCK_MovePRegPair) {
    if (Operand.isMovePRegPair())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList16' class
  if (Kind == MCK_RegList16) {
    if (Operand.isRegList16())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegList' class
  if (Kind == MCK_RegList) {
    if (Operand.isRegList())
      return MCTargetAsmParser::Match_Success;
  }

  // 'RegPair' class
  if (Kind == MCK_RegPair) {
    if (Operand.isRegPair())
      return MCTargetAsmParser::Match_Success;
  }

  if (Operand.isReg()) {
    MatchClassKind OpKind;
    switch (Operand.getReg()) {
    default: OpKind = InvalidMatchClass; break;
    case Mips::ZERO: OpKind = MCK_ZERO; break;
    case Mips::AT: OpKind = MCK_DSPR; break;
    case Mips::V0: OpKind = MCK_Reg9; break;
    case Mips::V1: OpKind = MCK_Reg9; break;
    case Mips::A0: OpKind = MCK_Reg7; break;
    case Mips::A1: OpKind = MCK_Reg7; break;
    case Mips::A2: OpKind = MCK_Reg7; break;
    case Mips::A3: OpKind = MCK_Reg7; break;
    case Mips::T0: OpKind = MCK_DSPR; break;
    case Mips::T1: OpKind = MCK_DSPR; break;
    case Mips::T2: OpKind = MCK_DSPR; break;
    case Mips::T3: OpKind = MCK_DSPR; break;
    case Mips::T4: OpKind = MCK_DSPR; break;
    case Mips::T5: OpKind = MCK_DSPR; break;
    case Mips::T6: OpKind = MCK_DSPR; break;
    case Mips::T7: OpKind = MCK_DSPR; break;
    case Mips::S0: OpKind = MCK_Reg8; break;
    case Mips::S1: OpKind = MCK_Reg9; break;
    case Mips::S2: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S3: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S4: OpKind = MCK_GPRMM16MoveP; break;
    case Mips::S5: OpKind = MCK_DSPR; break;
    case Mips::S6: OpKind = MCK_DSPR; break;
    case Mips::S7: OpKind = MCK_DSPR; break;
    case Mips::T8: OpKind = MCK_DSPR; break;
    case Mips::T9: OpKind = MCK_DSPR; break;
    case Mips::K0: OpKind = MCK_DSPR; break;
    case Mips::K1: OpKind = MCK_DSPR; break;
    case Mips::GP: OpKind = MCK_DSPR; break;
    case Mips::SP: OpKind = MCK_CPUSPReg; break;
    case Mips::FP: OpKind = MCK_DSPR; break;
    case Mips::RA: OpKind = MCK_CPURAReg; break;
    case Mips::ZERO_64: OpKind = MCK_Reg15; break;
    case Mips::AT_64: OpKind = MCK_GPR64; break;
    case Mips::V0_64: OpKind = MCK_Reg20; break;
    case Mips::V1_64: OpKind = MCK_Reg20; break;
    case Mips::A0_64: OpKind = MCK_Reg18; break;
    case Mips::A1_64: OpKind = MCK_Reg18; break;
    case Mips::A2_64: OpKind = MCK_Reg18; break;
    case Mips::A3_64: OpKind = MCK_Reg18; break;
    case Mips::T0_64: OpKind = MCK_GPR64; break;
    case Mips::T1_64: OpKind = MCK_GPR64; break;
    case Mips::T2_64: OpKind = MCK_GPR64; break;
    case Mips::T3_64: OpKind = MCK_GPR64; break;
    case Mips::T4_64: OpKind = MCK_GPR64; break;
    case Mips::T5_64: OpKind = MCK_GPR64; break;
    case Mips::T6_64: OpKind = MCK_GPR64; break;
    case Mips::T7_64: OpKind = MCK_GPR64; break;
    case Mips::S0_64: OpKind = MCK_Reg19; break;
    case Mips::S1_64: OpKind = MCK_Reg20; break;
    case Mips::S2_64: OpKind = MCK_Reg14; break;
    case Mips::S3_64: OpKind = MCK_Reg14; break;
    case Mips::S4_64: OpKind = MCK_Reg14; break;
    case Mips::S5_64: OpKind = MCK_GPR64; break;
    case Mips::S6_64: OpKind = MCK_GPR64; break;
    case Mips::S7_64: OpKind = MCK_GPR64; break;
    case Mips::T8_64: OpKind = MCK_GPR64; break;
    case Mips::T9_64: OpKind = MCK_GPR64; break;
    case Mips::K0_64: OpKind = MCK_GPR64; break;
    case Mips::K1_64: OpKind = MCK_GPR64; break;
    case Mips::GP_64: OpKind = MCK_GPR64; break;
    case Mips::SP_64: OpKind = MCK_Reg21; break;
    case Mips::FP_64: OpKind = MCK_GPR64; break;
    case Mips::RA_64: OpKind = MCK_Reg22; break;
    case Mips::F0: OpKind = MCK_FGR32; break;
    case Mips::F1: OpKind = MCK_Reg24; break;
    case Mips::F2: OpKind = MCK_FGR32; break;
    case Mips::F3: OpKind = MCK_Reg24; break;
    case Mips::F4: OpKind = MCK_FGR32; break;
    case Mips::F5: OpKind = MCK_Reg24; break;
    case Mips::F6: OpKind = MCK_FGR32; break;
    case Mips::F7: OpKind = MCK_Reg24; break;
    case Mips::F8: OpKind = MCK_FGR32; break;
    case Mips::F9: OpKind = MCK_Reg24; break;
    case Mips::F10: OpKind = MCK_FGR32; break;
    case Mips::F11: OpKind = MCK_Reg24; break;
    case Mips::F12: OpKind = MCK_FGR32; break;
    case Mips::F13: OpKind = MCK_Reg24; break;
    case Mips::F14: OpKind = MCK_FGR32; break;
    case Mips::F15: OpKind = MCK_Reg24; break;
    case Mips::F16: OpKind = MCK_FGR32; break;
    case Mips::F17: OpKind = MCK_Reg24; break;
    case Mips::F18: OpKind = MCK_FGR32; break;
    case Mips::F19: OpKind = MCK_Reg24; break;
    case Mips::F20: OpKind = MCK_FGR32; break;
    case Mips::F21: OpKind = MCK_Reg24; break;
    case Mips::F22: OpKind = MCK_FGR32; break;
    case Mips::F23: OpKind = MCK_Reg24; break;
    case Mips::F24: OpKind = MCK_FGR32; break;
    case Mips::F25: OpKind = MCK_Reg24; break;
    case Mips::F26: OpKind = MCK_FGR32; break;
    case Mips::F27: OpKind = MCK_Reg24; break;
    case Mips::F28: OpKind = MCK_FGR32; break;
    case Mips::F29: OpKind = MCK_Reg24; break;
    case Mips::F30: OpKind = MCK_FGR32; break;
    case Mips::F31: OpKind = MCK_Reg24; break;
    case Mips::F_HI0: OpKind = MCK_FGRH32; break;
    case Mips::F_HI1: OpKind = MCK_Reg27; break;
    case Mips::F_HI2: OpKind = MCK_FGRH32; break;
    case Mips::F_HI3: OpKind = MCK_Reg27; break;
    case Mips::F_HI4: OpKind = MCK_FGRH32; break;
    case Mips::F_HI5: OpKind = MCK_Reg27; break;
    case Mips::F_HI6: OpKind = MCK_FGRH32; break;
    case Mips::F_HI7: OpKind = MCK_Reg27; break;
    case Mips::F_HI8: OpKind = MCK_FGRH32; break;
    case Mips::F_HI9: OpKind = MCK_Reg27; break;
    case Mips::F_HI10: OpKind = MCK_FGRH32; break;
    case Mips::F_HI11: OpKind = MCK_Reg27; break;
    case Mips::F_HI12: OpKind = MCK_FGRH32; break;
    case Mips::F_HI13: OpKind = MCK_Reg27; break;
    case Mips::F_HI14: OpKind = MCK_FGRH32; break;
    case Mips::F_HI15: OpKind = MCK_Reg27; break;
    case Mips::F_HI16: OpKind = MCK_FGRH32; break;
    case Mips::F_HI17: OpKind = MCK_Reg27; break;
    case Mips::F_HI18: OpKind = MCK_FGRH32; break;
    case Mips::F_HI19: OpKind = MCK_Reg27; break;
    case Mips::F_HI20: OpKind = MCK_FGRH32; break;
    case Mips::F_HI21: OpKind = MCK_Reg27; break;
    case Mips::F_HI22: OpKind = MCK_FGRH32; break;
    case Mips::F_HI23: OpKind = MCK_Reg27; break;
    case Mips::F_HI24: OpKind = MCK_FGRH32; break;
    case Mips::F_HI25: OpKind = MCK_Reg27; break;
    case Mips::F_HI26: OpKind = MCK_FGRH32; break;
    case Mips::F_HI27: OpKind = MCK_Reg27; break;
    case Mips::F_HI28: OpKind = MCK_FGRH32; break;
    case Mips::F_HI29: OpKind = MCK_Reg27; break;
    case Mips::F_HI30: OpKind = MCK_FGRH32; break;
    case Mips::F_HI31: OpKind = MCK_Reg27; break;
    case Mips::D0: OpKind = MCK_AFGR64; break;
    case Mips::D1: OpKind = MCK_Reg29; break;
    case Mips::D2: OpKind = MCK_AFGR64; break;
    case Mips::D3: OpKind = MCK_Reg29; break;
    case Mips::D4: OpKind = MCK_AFGR64; break;
    case Mips::D5: OpKind = MCK_Reg29; break;
    case Mips::D6: OpKind = MCK_AFGR64; break;
    case Mips::D7: OpKind = MCK_Reg29; break;
    case Mips::D8: OpKind = MCK_AFGR64; break;
    case Mips::D9: OpKind = MCK_Reg29; break;
    case Mips::D10: OpKind = MCK_AFGR64; break;
    case Mips::D11: OpKind = MCK_Reg29; break;
    case Mips::D12: OpKind = MCK_AFGR64; break;
    case Mips::D13: OpKind = MCK_Reg29; break;
    case Mips::D14: OpKind = MCK_AFGR64; break;
    case Mips::D15: OpKind = MCK_Reg29; break;
    case Mips::D0_64: OpKind = MCK_FGR64; break;
    case Mips::D1_64: OpKind = MCK_Reg32; break;
    case Mips::D2_64: OpKind = MCK_FGR64; break;
    case Mips::D3_64: OpKind = MCK_Reg32; break;
    case Mips::D4_64: OpKind = MCK_FGR64; break;
    case Mips::D5_64: OpKind = MCK_Reg32; break;
    case Mips::D6_64: OpKind = MCK_FGR64; break;
    case Mips::D7_64: OpKind = MCK_Reg32; break;
    case Mips::D8_64: OpKind = MCK_FGR64; break;
    case Mips::D9_64: OpKind = MCK_Reg32; break;
    case Mips::D10_64: OpKind = MCK_FGR64; break;
    case Mips::D11_64: OpKind = MCK_Reg32; break;
    case Mips::D12_64: OpKind = MCK_FGR64; break;
    case Mips::D13_64: OpKind = MCK_Reg32; break;
    case Mips::D14_64: OpKind = MCK_FGR64; break;
    case Mips::D15_64: OpKind = MCK_Reg32; break;
    case Mips::D16_64: OpKind = MCK_FGR64; break;
    case Mips::D17_64: OpKind = MCK_Reg32; break;
    case Mips::D18_64: OpKind = MCK_FGR64; break;
    case Mips::D19_64: OpKind = MCK_Reg32; break;
    case Mips::D20_64: OpKind = MCK_FGR64; break;
    case Mips::D21_64: OpKind = MCK_Reg32; break;
    case Mips::D22_64: OpKind = MCK_FGR64; break;
    case Mips::D23_64: OpKind = MCK_Reg32; break;
    case Mips::D24_64: OpKind = MCK_FGR64; break;
    case Mips::D25_64: OpKind = MCK_Reg32; break;
    case Mips::D26_64: OpKind = MCK_FGR64; break;
    case Mips::D27_64: OpKind = MCK_Reg32; break;
    case Mips::D28_64: OpKind = MCK_FGR64; break;
    case Mips::D29_64: OpKind = MCK_Reg32; break;
    case Mips::D30_64: OpKind = MCK_FGR64; break;
    case Mips::D31_64: OpKind = MCK_Reg32; break;
    case Mips::W0: OpKind = MCK_MSA128WEvens; break;
    case Mips::W1: OpKind = MCK_Reg35; break;
    case Mips::W2: OpKind = MCK_MSA128WEvens; break;
    case Mips::W3: OpKind = MCK_Reg35; break;
    case Mips::W4: OpKind = MCK_MSA128WEvens; break;
    case Mips::W5: OpKind = MCK_Reg35; break;
    case Mips::W6: OpKind = MCK_MSA128WEvens; break;
    case Mips::W7: OpKind = MCK_Reg35; break;
    case Mips::W8: OpKind = MCK_MSA128WEvens; break;
    case Mips::W9: OpKind = MCK_Reg35; break;
    case Mips::W10: OpKind = MCK_MSA128WEvens; break;
    case Mips::W11: OpKind = MCK_Reg35; break;
    case Mips::W12: OpKind = MCK_MSA128WEvens; break;
    case Mips::W13: OpKind = MCK_Reg35; break;
    case Mips::W14: OpKind = MCK_MSA128WEvens; break;
    case Mips::W15: OpKind = MCK_Reg35; break;
    case Mips::W16: OpKind = MCK_MSA128WEvens; break;
    case Mips::W17: OpKind = MCK_Reg35; break;
    case Mips::W18: OpKind = MCK_MSA128WEvens; break;
    case Mips::W19: OpKind = MCK_Reg35; break;
    case Mips::W20: OpKind = MCK_MSA128WEvens; break;
    case Mips::W21: OpKind = MCK_Reg35; break;
    case Mips::W22: OpKind = MCK_MSA128WEvens; break;
    case Mips::W23: OpKind = MCK_Reg35; break;
    case Mips::W24: OpKind = MCK_MSA128WEvens; break;
    case Mips::W25: OpKind = MCK_Reg35; break;
    case Mips::W26: OpKind = MCK_MSA128WEvens; break;
    case Mips::W27: OpKind = MCK_Reg35; break;
    case Mips::W28: OpKind = MCK_MSA128WEvens; break;
    case Mips::W29: OpKind = MCK_Reg35; break;
    case Mips::W30: OpKind = MCK_MSA128WEvens; break;
    case Mips::W31: OpKind = MCK_Reg35; break;
    case Mips::HI0: OpKind = MCK_HI32; break;
    case Mips::HI1: OpKind = MCK_HI32DSP; break;
    case Mips::HI2: OpKind = MCK_HI32DSP; break;
    case Mips::HI3: OpKind = MCK_HI32DSP; break;
    case Mips::LO0: OpKind = MCK_LO32; break;
    case Mips::LO1: OpKind = MCK_LO32DSP; break;
    case Mips::LO2: OpKind = MCK_LO32DSP; break;
    case Mips::LO3: OpKind = MCK_LO32DSP; break;
    case Mips::HI0_64: OpKind = MCK_HI64; break;
    case Mips::LO0_64: OpKind = MCK_LO64; break;
    case Mips::FCR0: OpKind = MCK_CCR; break;
    case Mips::FCR1: OpKind = MCK_CCR; break;
    case Mips::FCR2: OpKind = MCK_CCR; break;
    case Mips::FCR3: OpKind = MCK_CCR; break;
    case Mips::FCR4: OpKind = MCK_CCR; break;
    case Mips::FCR5: OpKind = MCK_CCR; break;
    case Mips::FCR6: OpKind = MCK_CCR; break;
    case Mips::FCR7: OpKind = MCK_CCR; break;
    case Mips::FCR8: OpKind = MCK_CCR; break;
    case Mips::FCR9: OpKind = MCK_CCR; break;
    case Mips::FCR10: OpKind = MCK_CCR; break;
    case Mips::FCR11: OpKind = MCK_CCR; break;
    case Mips::FCR12: OpKind = MCK_CCR; break;
    case Mips::FCR13: OpKind = MCK_CCR; break;
    case Mips::FCR14: OpKind = MCK_CCR; break;
    case Mips::FCR15: OpKind = MCK_CCR; break;
    case Mips::FCR16: OpKind = MCK_CCR; break;
    case Mips::FCR17: OpKind = MCK_CCR; break;
    case Mips::FCR18: OpKind = MCK_CCR; break;
    case Mips::FCR19: OpKind = MCK_CCR; break;
    case Mips::FCR20: OpKind = MCK_CCR; break;
    case Mips::FCR21: OpKind = MCK_CCR; break;
    case Mips::FCR22: OpKind = MCK_CCR; break;
    case Mips::FCR23: OpKind = MCK_CCR; break;
    case Mips::FCR24: OpKind = MCK_CCR; break;
    case Mips::FCR25: OpKind = MCK_CCR; break;
    case Mips::FCR26: OpKind = MCK_CCR; break;
    case Mips::FCR27: OpKind = MCK_CCR; break;
    case Mips::FCR28: OpKind = MCK_CCR; break;
    case Mips::FCR29: OpKind = MCK_CCR; break;
    case Mips::FCR30: OpKind = MCK_CCR; break;
    case Mips::FCR31: OpKind = MCK_CCR; break;
    case Mips::FCC0: OpKind = MCK_FCC; break;
    case Mips::FCC1: OpKind = MCK_FCC; break;
    case Mips::FCC2: OpKind = MCK_FCC; break;
    case Mips::FCC3: OpKind = MCK_FCC; break;
    case Mips::FCC4: OpKind = MCK_FCC; break;
    case Mips::FCC5: OpKind = MCK_FCC; break;
    case Mips::FCC6: OpKind = MCK_FCC; break;
    case Mips::FCC7: OpKind = MCK_FCC; break;
    case Mips::COP00: OpKind = MCK_COP0; break;
    case Mips::COP01: OpKind = MCK_COP0; break;
    case Mips::COP02: OpKind = MCK_COP0; break;
    case Mips::COP03: OpKind = MCK_COP0; break;
    case Mips::COP04: OpKind = MCK_COP0; break;
    case Mips::COP05: OpKind = MCK_COP0; break;
    case Mips::COP06: OpKind = MCK_COP0; break;
    case Mips::COP07: OpKind = MCK_COP0; break;
    case Mips::COP08: OpKind = MCK_COP0; break;
    case Mips::COP09: OpKind = MCK_COP0; break;
    case Mips::COP010: OpKind = MCK_COP0; break;
    case Mips::COP011: OpKind = MCK_COP0; break;
    case Mips::COP012: OpKind = MCK_COP0; break;
    case Mips::COP013: OpKind = MCK_COP0; break;
    case Mips::COP014: OpKind = MCK_COP0; break;
    case Mips::COP015: OpKind = MCK_COP0; break;
    case Mips::COP016: OpKind = MCK_COP0; break;
    case Mips::COP017: OpKind = MCK_COP0; break;
    case Mips::COP018: OpKind = MCK_COP0; break;
    case Mips::COP019: OpKind = MCK_COP0; break;
    case Mips::COP020: OpKind = MCK_COP0; break;
    case Mips::COP021: OpKind = MCK_COP0; break;
    case Mips::COP022: OpKind = MCK_COP0; break;
    case Mips::COP023: OpKind = MCK_COP0; break;
    case Mips::COP024: OpKind = MCK_COP0; break;
    case Mips::COP025: OpKind = MCK_COP0; break;
    case Mips::COP026: OpKind = MCK_COP0; break;
    case Mips::COP027: OpKind = MCK_COP0; break;
    case Mips::COP028: OpKind = MCK_COP0; break;
    case Mips::COP029: OpKind = MCK_COP0; break;
    case Mips::COP030: OpKind = MCK_COP0; break;
    case Mips::COP031: OpKind = MCK_COP0; break;
    case Mips::COP20: OpKind = MCK_COP2; break;
    case Mips::COP21: OpKind = MCK_COP2; break;
    case Mips::COP22: OpKind = MCK_COP2; break;
    case Mips::COP23: OpKind = MCK_COP2; break;
    case Mips::COP24: OpKind = MCK_COP2; break;
    case Mips::COP25: OpKind = MCK_COP2; break;
    case Mips::COP26: OpKind = MCK_COP2; break;
    case Mips::COP27: OpKind = MCK_COP2; break;
    case Mips::COP28: OpKind = MCK_COP2; break;
    case Mips::COP29: OpKind = MCK_COP2; break;
    case Mips::COP210: OpKind = MCK_COP2; break;
    case Mips::COP211: OpKind = MCK_COP2; break;
    case Mips::COP212: OpKind = MCK_COP2; break;
    case Mips::COP213: OpKind = MCK_COP2; break;
    case Mips::COP214: OpKind = MCK_COP2; break;
    case Mips::COP215: OpKind = MCK_COP2; break;
    case Mips::COP216: OpKind = MCK_COP2; break;
    case Mips::COP217: OpKind = MCK_COP2; break;
    case Mips::COP218: OpKind = MCK_COP2; break;
    case Mips::COP219: OpKind = MCK_COP2; break;
    case Mips::COP220: OpKind = MCK_COP2; break;
    case Mips::COP221: OpKind = MCK_COP2; break;
    case Mips::COP222: OpKind = MCK_COP2; break;
    case Mips::COP223: OpKind = MCK_COP2; break;
    case Mips::COP224: OpKind = MCK_COP2; break;
    case Mips::COP225: OpKind = MCK_COP2; break;
    case Mips::COP226: OpKind = MCK_COP2; break;
    case Mips::COP227: OpKind = MCK_COP2; break;
    case Mips::COP228: OpKind = MCK_COP2; break;
    case Mips::COP229: OpKind = MCK_COP2; break;
    case Mips::COP230: OpKind = MCK_COP2; break;
    case Mips::COP231: OpKind = MCK_COP2; break;
    case Mips::COP30: OpKind = MCK_COP3; break;
    case Mips::COP31: OpKind = MCK_COP3; break;
    case Mips::COP32: OpKind = MCK_COP3; break;
    case Mips::COP33: OpKind = MCK_COP3; break;
    case Mips::COP34: OpKind = MCK_COP3; break;
    case Mips::COP35: OpKind = MCK_COP3; break;
    case Mips::COP36: OpKind = MCK_COP3; break;
    case Mips::COP37: OpKind = MCK_COP3; break;
    case Mips::COP38: OpKind = MCK_COP3; break;
    case Mips::COP39: OpKind = MCK_COP3; break;
    case Mips::COP310: OpKind = MCK_COP3; break;
    case Mips::COP311: OpKind = MCK_COP3; break;
    case Mips::COP312: OpKind = MCK_COP3; break;
    case Mips::COP313: OpKind = MCK_COP3; break;
    case Mips::COP314: OpKind = MCK_COP3; break;
    case Mips::COP315: OpKind = MCK_COP3; break;
    case Mips::COP316: OpKind = MCK_COP3; break;
    case Mips::COP317: OpKind = MCK_COP3; break;
    case Mips::COP318: OpKind = MCK_COP3; break;
    case Mips::COP319: OpKind = MCK_COP3; break;
    case Mips::COP320: OpKind = MCK_COP3; break;
    case Mips::COP321: OpKind = MCK_COP3; break;
    case Mips::COP322: OpKind = MCK_COP3; break;
    case Mips::COP323: OpKind = MCK_COP3; break;
    case Mips::COP324: OpKind = MCK_COP3; break;
    case Mips::COP325: OpKind = MCK_COP3; break;
    case Mips::COP326: OpKind = MCK_COP3; break;
    case Mips::COP327: OpKind = MCK_COP3; break;
    case Mips::COP328: OpKind = MCK_COP3; break;
    case Mips::COP329: OpKind = MCK_COP3; break;
    case Mips::COP330: OpKind = MCK_COP3; break;
    case Mips::COP331: OpKind = MCK_COP3; break;
    case Mips::PC: OpKind = MCK_PC; break;
    case Mips::HWR0: OpKind = MCK_HWRegs; break;
    case Mips::HWR1: OpKind = MCK_HWRegs; break;
    case Mips::HWR2: OpKind = MCK_HWRegs; break;
    case Mips::HWR3: OpKind = MCK_HWRegs; break;
    case Mips::HWR4: OpKind = MCK_HWRegs; break;
    case Mips::HWR5: OpKind = MCK_HWRegs; break;
    case Mips::HWR6: OpKind = MCK_HWRegs; break;
    case Mips::HWR7: OpKind = MCK_HWRegs; break;
    case Mips::HWR8: OpKind = MCK_HWRegs; break;
    case Mips::HWR9: OpKind = MCK_HWRegs; break;
    case Mips::HWR10: OpKind = MCK_HWRegs; break;
    case Mips::HWR11: OpKind = MCK_HWRegs; break;
    case Mips::HWR12: OpKind = MCK_HWRegs; break;
    case Mips::HWR13: OpKind = MCK_HWRegs; break;
    case Mips::HWR14: OpKind = MCK_HWRegs; break;
    case Mips::HWR15: OpKind = MCK_HWRegs; break;
    case Mips::HWR16: OpKind = MCK_HWRegs; break;
    case Mips::HWR17: OpKind = MCK_HWRegs; break;
    case Mips::HWR18: OpKind = MCK_HWRegs; break;
    case Mips::HWR19: OpKind = MCK_HWRegs; break;
    case Mips::HWR20: OpKind = MCK_HWRegs; break;
    case Mips::HWR21: OpKind = MCK_HWRegs; break;
    case Mips::HWR22: OpKind = MCK_HWRegs; break;
    case Mips::HWR23: OpKind = MCK_HWRegs; break;
    case Mips::HWR24: OpKind = MCK_HWRegs; break;
    case Mips::HWR25: OpKind = MCK_HWRegs; break;
    case Mips::HWR26: OpKind = MCK_HWRegs; break;
    case Mips::HWR27: OpKind = MCK_HWRegs; break;
    case Mips::HWR28: OpKind = MCK_HWRegs; break;
    case Mips::HWR29: OpKind = MCK_HWRegs; break;
    case Mips::HWR30: OpKind = MCK_HWRegs; break;
    case Mips::HWR31: OpKind = MCK_HWRegs; break;
    case Mips::AC0: OpKind = MCK_ACC64; break;
    case Mips::AC1: OpKind = MCK_ACC64DSP; break;
    case Mips::AC2: OpKind = MCK_ACC64DSP; break;
    case Mips::AC3: OpKind = MCK_ACC64DSP; break;
    case Mips::AC0_64: OpKind = MCK_ACC128; break;
    case Mips::DSPCCond: OpKind = MCK_DSPCC; break;
    case Mips::MSAIR: OpKind = MCK_MSACtrl; break;
    case Mips::MSACSR: OpKind = MCK_MSACtrl; break;
    case Mips::MSAAccess: OpKind = MCK_MSACtrl; break;
    case Mips::MSASave: OpKind = MCK_MSACtrl; break;
    case Mips::MSAModify: OpKind = MCK_MSACtrl; break;
    case Mips::MSARequest: OpKind = MCK_MSACtrl; break;
    case Mips::MSAMap: OpKind = MCK_MSACtrl; break;
    case Mips::MSAUnmap: OpKind = MCK_MSACtrl; break;
    case Mips::MPL0: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL1: OpKind = MCK_OCTEON_MPL; break;
    case Mips::MPL2: OpKind = MCK_OCTEON_MPL; break;
    case Mips::P0: OpKind = MCK_OCTEON_P; break;
    case Mips::P1: OpKind = MCK_OCTEON_P; break;
    case Mips::P2: OpKind = MCK_OCTEON_P; break;
    }
    return isSubclass(OpKind, Kind) ? MCTargetAsmParser::Match_Success :
                                      MCTargetAsmParser::Match_InvalidOperand;
  }

  return MCTargetAsmParser::Match_InvalidOperand;
}

uint64_t MipsAsmParser::
ComputeAvailableFeatures(const FeatureBitset& FB) const {
  uint64_t Features = 0;
  if ((FB[Mips::FeatureMips2]))
    Features |= Feature_HasMips2;
  if ((FB[Mips::FeatureMips3_32]))
    Features |= Feature_HasMips3_32;
  if ((FB[Mips::FeatureMips3_32r2]))
    Features |= Feature_HasMips3_32r2;
  if ((FB[Mips::FeatureMips3]))
    Features |= Feature_HasMips3;
  if ((FB[Mips::FeatureMips4_32]))
    Features |= Feature_HasMips4_32;
  if ((!FB[Mips::FeatureMips4_32]))
    Features |= Feature_NotMips4_32;
  if ((FB[Mips::FeatureMips4_32r2]))
    Features |= Feature_HasMips4_32r2;
  if ((FB[Mips::FeatureMips5_32r2]))
    Features |= Feature_HasMips5_32r2;
  if ((FB[Mips::FeatureMips32]))
    Features |= Feature_HasMips32;
  if ((FB[Mips::FeatureMips32r2]))
    Features |= Feature_HasMips32r2;
  if ((FB[Mips::FeatureMips32r5]))
    Features |= Feature_HasMips32r5;
  if ((FB[Mips::FeatureMips32r6]))
    Features |= Feature_HasMips32r6;
  if ((!FB[Mips::FeatureMips32r6]))
    Features |= Feature_NotMips32r6;
  if ((FB[Mips::FeatureGP64Bit]))
    Features |= Feature_IsGP64bit;
  if ((!FB[Mips::FeatureGP64Bit]))
    Features |= Feature_IsGP32bit;
  if ((FB[Mips::FeatureMips64]))
    Features |= Feature_HasMips64;
  if ((!FB[Mips::FeatureMips64]))
    Features |= Feature_NotMips64;
  if ((FB[Mips::FeatureMips64r2]))
    Features |= Feature_HasMips64r2;
  if ((FB[Mips::FeatureMips64r6]))
    Features |= Feature_HasMips64r6;
  if ((!FB[Mips::FeatureMips64r6]))
    Features |= Feature_NotMips64r6;
  if ((FB[Mips::FeatureMicroMips]) && (FB[Mips::FeatureMips32r6]))
    Features |= Feature_HasMicroMips32r6;
  if ((FB[Mips::FeatureMicroMips]) && (FB[Mips::FeatureMips64r6]))
    Features |= Feature_HasMicroMips64r6;
  if ((FB[Mips::FeatureMips16]))
    Features |= Feature_InMips16Mode;
  if ((FB[Mips::FeatureCnMips]))
    Features |= Feature_HasCnMips;
  if ((!FB[Mips::FeatureMips16]))
    Features |= Feature_HasStdEnc;
  if ((FB[Mips::FeatureMicroMips]))
    Features |= Feature_InMicroMips;
  if ((!FB[Mips::FeatureMicroMips]))
    Features |= Feature_NotInMicroMips;
  if ((FB[Mips::FeatureEVA]) && (FB[Mips::FeatureMips32r2]))
    Features |= Feature_HasEVA;
  if ((FB[Mips::FeatureMSA]))
    Features |= Feature_HasMSA;
  if ((FB[Mips::FeatureFP64Bit]))
    Features |= Feature_IsFP64bit;
  if ((!FB[Mips::FeatureFP64Bit]))
    Features |= Feature_NotFP64bit;
  if ((FB[Mips::FeatureSingleFloat]))
    Features |= Feature_IsSingleFloat;
  if ((!FB[Mips::FeatureSingleFloat]))
    Features |= Feature_IsNotSingleFloat;
  if ((!FB[Mips::FeatureSoftFloat]))
    Features |= Feature_IsNotSoftFloat;
  if ((FB[Mips::FeatureDSP]))
    Features |= Feature_HasDSP;
  if ((FB[Mips::FeatureDSPR2]))
    Features |= Feature_HasDSPR2;
  if ((FB[Mips::FeatureDSPR3]))
    Features |= Feature_HasDSPR3;
  return Features;
}

static const char *const MnemonicTable =
    "\005abs.d\005abs.s\tabsq_s.ph\tabsq_s.qb\010absq_s.w\003add\005add.d\005"
    "add.s\007add_a.b\007add_a.d\007add_a.h\007add_a.w\004addi\005addiu\007a"
    "ddiupc\taddiur1sp\007addiur2\007addius5\007addiusp\007addq.ph\taddq_s.p"
    "h\010addq_s.w\010addqh.ph\007addqh.w\naddqh_r.ph\taddqh_r.w\010adds_a.b"
    "\010adds_a.d\010adds_a.h\010adds_a.w\010adds_s.b\010adds_s.d\010adds_s."
    "h\010adds_s.w\010adds_u.b\010adds_u.d\010adds_u.h\010adds_u.w\005addsc\004"
    "addu\007addu.ph\007addu.qb\006addu16\taddu_s.ph\taddu_s.qb\010adduh.qb\n"
    "adduh_r.qb\006addv.b\006addv.d\006addv.h\006addv.w\007addvi.b\007addvi."
    "d\007addvi.h\007addvi.w\005addwc\005align\006aluipc\003and\005and.v\005"
    "and16\004andi\006andi.b\006andi16\006append\010asub_s.b\010asub_s.d\010"
    "asub_s.h\010asub_s.w\010asub_u.b\010asub_u.d\010asub_u.h\010asub_u.w\003"
    "aui\005auipc\007ave_s.b\007ave_s.d\007ave_s.h\007ave_s.w\007ave_u.b\007"
    "ave_u.d\007ave_u.h\007ave_u.w\010aver_s.b\010aver_s.d\010aver_s.h\010av"
    "er_s.w\010aver_u.b\010aver_u.d\010aver_u.h\010aver_u.w\001b\003b16\005b"
    "addu\003bal\004balc\006balign\005bbit0\007bbit032\005bbit1\007bbit132\002"
    "bc\004bc16\006bc1eqz\004bc1f\005bc1fl\006bc1nez\004bc1t\005bc1tl\006bc2"
    "eqz\006bc2nez\006bclr.b\006bclr.d\006bclr.h\006bclr.w\007bclri.b\007bcl"
    "ri.d\007bclri.h\007bclri.w\003beq\004beqc\004beql\004beqz\006beqz16\007"
    "beqzalc\005beqzc\007beqzc16\005beqzl\003bge\004bgec\004bgel\004bgeu\005"
    "bgeuc\005bgeul\004bgez\006bgezal\007bgezalc\007bgezall\007bgezals\005bg"
    "ezc\005bgezl\003bgt\004bgtl\004bgtu\005bgtul\004bgtz\007bgtzalc\005bgtz"
    "c\005bgtzl\007binsl.b\007binsl.d\007binsl.h\007binsl.w\010binsli.b\010b"
    "insli.d\010binsli.h\010binsli.w\007binsr.b\007binsr.d\007binsr.h\007bin"
    "sr.w\010binsri.b\010binsri.d\010binsri.h\010binsri.w\006bitrev\007bitsw"
    "ap\003ble\004blel\004bleu\005bleul\004blez\007blezalc\005blezc\005blezl"
    "\003blt\004bltc\004bltl\004bltu\005bltuc\005bltul\004bltz\006bltzal\007"
    "bltzalc\007bltzall\007bltzals\005bltzc\005bltzl\006bmnz.v\007bmnzi.b\005"
    "bmz.v\006bmzi.b\003bne\004bnec\006bneg.b\006bneg.d\006bneg.h\006bneg.w\007"
    "bnegi.b\007bnegi.d\007bnegi.h\007bnegi.w\004bnel\004bnez\006bnez16\007b"
    "nezalc\005bnezc\007bnezc16\005bnezl\004bnvc\005bnz.b\005bnz.d\005bnz.h\005"
    "bnz.v\005bnz.w\004bovc\010bposge32\005break\007break16\006bsel.v\007bse"
    "li.b\006bset.b\006bset.d\006bset.h\006bset.w\007bseti.b\007bseti.d\007b"
    "seti.h\007bseti.w\005bteqz\005btnez\004bz.b\004bz.d\004bz.h\004bz.v\004"
    "bz.w\006c.eq.d\006c.eq.s\005c.f.d\005c.f.s\006c.le.d\006c.le.s\006c.lt."
    "d\006c.lt.s\007c.nge.d\007c.nge.s\007c.ngl.d\007c.ngl.s\010c.ngle.d\010"
    "c.ngle.s\007c.ngt.d\007c.ngt.s\007c.ole.d\007c.ole.s\007c.olt.d\007c.ol"
    "t.s\007c.seq.d\007c.seq.s\006c.sf.d\006c.sf.s\007c.ueq.d\007c.ueq.s\007"
    "c.ule.d\007c.ule.s\007c.ult.d\007c.ult.s\006c.un.d\006c.un.s\005cache\006"
    "cachee\010ceil.l.d\010ceil.l.s\010ceil.w.d\010ceil.w.s\005ceq.b\005ceq."
    "d\005ceq.h\005ceq.w\006ceqi.b\006ceqi.d\006ceqi.h\006ceqi.w\004cfc1\006"
    "cfcmsa\004cins\006cins32\007class.d\007class.s\007cle_s.b\007cle_s.d\007"
    "cle_s.h\007cle_s.w\007cle_u.b\007cle_u.d\007cle_u.h\007cle_u.w\010clei_"
    "s.b\010clei_s.d\010clei_s.h\010clei_s.w\010clei_u.b\010clei_u.d\010clei"
    "_u.h\010clei_u.w\003clo\007clt_s.b\007clt_s.d\007clt_s.h\007clt_s.w\007"
    "clt_u.b\007clt_u.d\007clt_u.h\007clt_u.w\010clti_s.b\010clti_s.d\010clt"
    "i_s.h\010clti_s.w\010clti_u.b\010clti_u.d\010clti_u.h\010clti_u.w\003cl"
    "z\003cmp\010cmp.af.d\010cmp.af.s\010cmp.eq.d\tcmp.eq.ph\010cmp.eq.s\010"
    "cmp.le.d\tcmp.le.ph\010cmp.le.s\010cmp.lt.d\tcmp.lt.ph\010cmp.lt.s\tcmp"
    ".saf.d\tcmp.saf.s\tcmp.seq.d\tcmp.seq.s\tcmp.sle.d\tcmp.sle.s\tcmp.slt."
    "d\tcmp.slt.s\ncmp.sueq.d\ncmp.sueq.s\ncmp.sule.d\ncmp.sule.s\ncmp.sult."
    "d\ncmp.sult.s\tcmp.sun.d\tcmp.sun.s\tcmp.ueq.d\tcmp.ueq.s\tcmp.ule.d\tc"
    "mp.ule.s\tcmp.ult.d\tcmp.ult.s\010cmp.un.d\010cmp.un.s\014cmpgdu.eq.qb\014"
    "cmpgdu.le.qb\014cmpgdu.lt.qb\013cmpgu.eq.qb\013cmpgu.le.qb\013cmpgu.lt."
    "qb\004cmpi\ncmpu.eq.qb\ncmpu.le.qb\ncmpu.lt.qb\010copy_s.b\010copy_s.d\010"
    "copy_s.h\010copy_s.w\010copy_u.b\010copy_u.h\010copy_u.w\004ctc1\006ctc"
    "msa\007cvt.d.l\007cvt.d.s\007cvt.d.w\007cvt.l.d\007cvt.l.s\007cvt.s.d\007"
    "cvt.s.l\007cvt.s.w\007cvt.w.d\007cvt.w.s\004dadd\005daddi\006daddiu\005"
    "daddu\004dahi\006dalign\004dati\004daui\010dbitswap\004dclo\004dclz\004"
    "ddiv\005ddivu\005deret\004dext\005dextm\005dextu\002di\004dins\005dinsm"
    "\005dinsu\003div\005div.d\005div.s\007div_s.b\007div_s.d\007div_s.h\007"
    "div_s.w\007div_u.b\007div_u.d\007div_u.h\007div_u.w\004divu\003dla\003d"
    "li\004dlsa\005dmfc0\005dmfc1\005dmfc2\004dmod\005dmodu\005dmtc0\005dmtc"
    "1\005dmtc2\004dmuh\005dmuhu\004dmul\005dmult\006dmultu\005dmulu\004dneg"
    "\005dnegu\010dotp_s.d\010dotp_s.h\010dotp_s.w\010dotp_u.d\010dotp_u.h\010"
    "dotp_u.w\010dpa.w.ph\tdpadd_s.d\tdpadd_s.h\tdpadd_s.w\tdpadd_u.d\tdpadd"
    "_u.h\tdpadd_u.w\013dpaq_s.w.ph\013dpaq_sa.l.w\014dpaqx_s.w.ph\015dpaqx_"
    "sa.w.ph\ndpau.h.qbl\ndpau.h.qbr\tdpax.w.ph\004dpop\010dps.w.ph\013dpsq_"
    "s.w.ph\013dpsq_sa.l.w\014dpsqx_s.w.ph\015dpsqx_sa.w.ph\ndpsu.h.qbl\ndps"
    "u.h.qbr\tdpsub_s.d\tdpsub_s.h\tdpsub_s.w\tdpsub_u.d\tdpsub_u.h\tdpsub_u"
    ".w\tdpsx.w.ph\004drol\004dror\005drotr\007drotr32\006drotrv\004dsbh\004"
    "dshd\004dsll\006dsll32\005dsllv\004dsra\006dsra32\005dsrav\004dsrl\006d"
    "srl32\005dsrlv\004dsub\005dsubi\005dsubu\003ehb\002ei\004eret\006eretnc"
    "\003ext\004extp\006extpdp\007extpdpv\005extpv\006extr.w\010extr_r.w\tex"
    "tr_rs.w\010extr_s.h\007extrv.w\textrv_r.w\nextrv_rs.w\textrv_s.h\004ext"
    "s\006exts32\006fadd.d\006fadd.w\006fcaf.d\006fcaf.w\006fceq.d\006fceq.w"
    "\010fclass.d\010fclass.w\006fcle.d\006fcle.w\006fclt.d\006fclt.w\006fcn"
    "e.d\006fcne.w\006fcor.d\006fcor.w\007fcueq.d\007fcueq.w\007fcule.d\007f"
    "cule.w\007fcult.d\007fcult.w\006fcun.d\006fcun.w\007fcune.d\007fcune.w\006"
    "fdiv.d\006fdiv.w\007fexdo.h\007fexdo.w\007fexp2.d\007fexp2.w\010fexupl."
    "d\010fexupl.w\010fexupr.d\010fexupr.w\tffint_s.d\tffint_s.w\tffint_u.d\t"
    "ffint_u.w\006ffql.d\006ffql.w\006ffqr.d\006ffqr.w\006fill.b\006fill.d\006"
    "fill.h\006fill.w\007flog2.d\007flog2.w\tfloor.l.d\tfloor.l.s\tfloor.w.d"
    "\tfloor.w.s\007fmadd.d\007fmadd.w\006fmax.d\006fmax.w\010fmax_a.d\010fm"
    "ax_a.w\006fmin.d\006fmin.w\010fmin_a.d\010fmin_a.w\007fmsub.d\007fmsub."
    "w\006fmul.d\006fmul.w\006frcp.d\006frcp.w\007frint.d\007frint.w\010frsq"
    "rt.d\010frsqrt.w\006fsaf.d\006fsaf.w\006fseq.d\006fseq.w\006fsle.d\006f"
    "sle.w\006fslt.d\006fslt.w\006fsne.d\006fsne.w\006fsor.d\006fsor.w\007fs"
    "qrt.d\007fsqrt.w\006fsub.d\006fsub.w\007fsueq.d\007fsueq.w\007fsule.d\007"
    "fsule.w\007fsult.d\007fsult.w\006fsun.d\006fsun.w\007fsune.d\007fsune.w"
    "\tftint_s.d\tftint_s.w\tftint_u.d\tftint_u.w\005ftq.h\005ftq.w\nftrunc_"
    "s.d\nftrunc_s.w\nftrunc_u.d\nftrunc_u.w\010hadd_s.d\010hadd_s.h\010hadd"
    "_s.w\010hadd_u.d\010hadd_u.h\010hadd_u.w\010hsub_s.d\010hsub_s.h\010hsu"
    "b_s.w\010hsub_u.d\010hsub_u.h\010hsub_u.w\007ilvev.b\007ilvev.d\007ilve"
    "v.h\007ilvev.w\006ilvl.b\006ilvl.d\006ilvl.h\006ilvl.w\007ilvod.b\007il"
    "vod.d\007ilvod.h\007ilvod.w\006ilvr.b\006ilvr.d\006ilvr.h\006ilvr.w\003"
    "ins\010insert.b\010insert.d\010insert.h\010insert.w\004insv\007insve.b\007"
    "insve.d\007insve.h\007insve.w\001j\003jal\004jalr\007jalr.hb\005jalrc\005"
    "jalrs\007jalrs16\004jals\004jalx\005jialc\003jic\002jr\005jr.hb\004jr16"
    "\tjraddiusp\003jrc\005jrc16\njrcaddiusp\002la\002lb\003lbe\003lbu\005lb"
    "u16\004lbue\004lbux\002ld\004ld.b\004ld.d\004ld.h\004ld.w\004ldc1\004ld"
    "c2\004ldc3\005ldi.b\005ldi.d\005ldi.h\005ldi.w\003ldl\004ldpc\003ldr\005"
    "ldxc1\002lh\003lhe\003lhu\005lhu16\004lhue\003lhx\002li\004li16\002ll\003"
    "lld\003lle\003lsa\003lui\005luxc1\002lw\004lw16\004lwc1\004lwc2\004lwc3"
    "\003lwe\003lwl\004lwle\003lwm\005lwm16\005lwm32\003lwp\004lwpc\003lwr\004"
    "lwre\003lwu\005lwupc\003lwx\005lwxc1\004lwxs\004madd\006madd.d\006madd."
    "s\010madd_q.h\010madd_q.w\007maddf.d\007maddf.s\tmaddr_q.h\tmaddr_q.w\005"
    "maddu\007maddv.b\007maddv.d\007maddv.h\007maddv.w\013maq_s.w.phl\013maq"
    "_s.w.phr\014maq_sa.w.phl\014maq_sa.w.phr\005max.d\005max.s\007max_a.b\007"
    "max_a.d\007max_a.h\007max_a.w\007max_s.b\007max_s.d\007max_s.h\007max_s"
    ".w\007max_u.b\007max_u.d\007max_u.h\007max_u.w\006maxa.d\006maxa.s\010m"
    "axi_s.b\010maxi_s.d\010maxi_s.h\010maxi_s.w\010maxi_u.b\010maxi_u.d\010"
    "maxi_u.h\010maxi_u.w\004mfc0\004mfc1\004mfc2\005mfhc1\004mfhi\004mflo\005"
    "min.d\005min.s\007min_a.b\007min_a.d\007min_a.h\007min_a.w\007min_s.b\007"
    "min_s.d\007min_s.h\007min_s.w\007min_u.b\007min_u.d\007min_u.h\007min_u"
    ".w\006mina.d\006mina.s\010mini_s.b\010mini_s.d\010mini_s.h\010mini_s.w\010"
    "mini_u.b\010mini_u.d\010mini_u.h\010mini_u.w\003mod\007mod_s.b\007mod_s"
    ".d\007mod_s.h\007mod_s.w\007mod_u.b\007mod_u.d\007mod_u.h\007mod_u.w\006"
    "modsub\004modu\005mov.d\005mov.s\004move\006move.v\006move16\005movep\004"
    "movf\006movf.d\006movf.s\004movn\006movn.d\006movn.s\004movt\006movt.d\006"
    "movt.s\004movz\006movz.d\006movz.s\004msub\006msub.d\006msub.s\010msub_"
    "q.h\010msub_q.w\007msubf.d\007msubf.s\tmsubr_q.h\tmsubr_q.w\005msubu\007"
    "msubv.b\007msubv.d\007msubv.h\007msubv.w\004mtc0\004mtc1\004mtc2\005mth"
    "c1\004mthi\006mthlip\004mtlo\004mtm0\004mtm1\004mtm2\004mtp0\004mtp1\004"
    "mtp2\003muh\004muhu\003mul\005mul.d\006mul.ph\005mul.s\007mul_q.h\007mu"
    "l_q.w\010mul_s.ph\015muleq_s.w.phl\015muleq_s.w.phr\016muleu_s.ph.qbl\016"
    "muleu_s.ph.qbr\nmulq_rs.ph\tmulq_rs.w\tmulq_s.ph\010mulq_s.w\010mulr_q."
    "h\010mulr_q.w\nmulsa.w.ph\015mulsaq_s.w.ph\004mult\005multu\004mulu\006"
    "mulv.b\006mulv.d\006mulv.h\006mulv.w\003neg\005neg.d\005neg.s\004negu\006"
    "nloc.b\006nloc.d\006nloc.h\006nloc.w\006nlzc.b\006nlzc.d\006nlzc.h\006n"
    "lzc.w\007nmadd.d\007nmadd.s\007nmsub.d\007nmsub.s\003nop\003nor\005nor."
    "v\006nori.b\003not\005not16\002or\004or.v\004or16\003ori\005ori.b\tpack"
    "rl.ph\005pause\007pckev.b\007pckev.d\007pckev.h\007pckev.w\007pckod.b\007"
    "pckod.d\007pckod.h\007pckod.w\006pcnt.b\006pcnt.d\006pcnt.h\006pcnt.w\007"
    "pick.ph\007pick.qb\003pop\014preceq.w.phl\014preceq.w.phr\016precequ.ph"
    ".qbl\017precequ.ph.qbla\016precequ.ph.qbr\017precequ.ph.qbra\015preceu."
    "ph.qbl\016preceu.ph.qbla\015preceu.ph.qbr\016preceu.ph.qbra\013precr.qb"
    ".ph\016precr_sra.ph.w\020precr_sra_r.ph.w\013precrq.ph.w\014precrq.qb.p"
    "h\016precrq_rs.ph.w\017precrqu_s.qb.ph\004pref\005prefe\005prefx\007pre"
    "pend\nraddu.w.qb\005rddsp\005rdhwr\006rdpgpr\007recip.d\007recip.s\007r"
    "epl.ph\007repl.qb\010replv.ph\010replv.qb\006rint.d\006rint.s\003rol\003"
    "ror\004rotr\005rotrv\tround.l.d\tround.l.s\tround.w.d\tround.w.s\007rsq"
    "rt.d\007rsqrt.s\007sat_s.b\007sat_s.d\007sat_s.h\007sat_s.w\007sat_u.b\007"
    "sat_u.d\007sat_u.h\007sat_u.w\002sb\004sb16\003sbe\002sc\003scd\003sce\002"
    "sd\005sdbbp\007sdbbp16\004sdc1\004sdc2\004sdc3\003sdl\003sdr\005sdxc1\003"
    "seb\003seh\005sel.d\005sel.s\006seleqz\010seleqz.d\010seleqz.s\006selne"
    "z\010selnez.d\010selnez.s\003seq\004seqi\002sh\004sh16\003she\005shf.b\005"
    "shf.h\005shf.w\005shilo\006shilov\007shll.ph\007shll.qb\tshll_s.ph\010s"
    "hll_s.w\010shllv.ph\010shllv.qb\nshllv_s.ph\tshllv_s.w\007shra.ph\007sh"
    "ra.qb\tshra_r.ph\tshra_r.qb\010shra_r.w\010shrav.ph\010shrav.qb\nshrav_"
    "r.ph\nshrav_r.qb\tshrav_r.w\007shrl.ph\007shrl.qb\010shrlv.ph\010shrlv."
    "qb\005sld.b\005sld.d\005sld.h\005sld.w\006sldi.b\006sldi.d\006sldi.h\006"
    "sldi.w\003sll\005sll.b\005sll.d\005sll.h\005sll.w\005sll16\006slli.b\006"
    "slli.d\006slli.h\006slli.w\004sllv\003slt\004slti\005sltiu\004sltu\003s"
    "ne\004snei\007splat.b\007splat.d\007splat.h\007splat.w\010splati.b\010s"
    "plati.d\010splati.h\010splati.w\006sqrt.d\006sqrt.s\003sra\005sra.b\005"
    "sra.d\005sra.h\005sra.w\006srai.b\006srai.d\006srai.h\006srai.w\006srar"
    ".b\006srar.d\006srar.h\006srar.w\007srari.b\007srari.d\007srari.h\007sr"
    "ari.w\004srav\003srl\005srl.b\005srl.d\005srl.h\005srl.w\005srl16\006sr"
    "li.b\006srli.d\006srli.h\006srli.w\006srlr.b\006srlr.d\006srlr.h\006srl"
    "r.w\007srlri.b\007srlri.d\007srlri.h\007srlri.w\004srlv\005ssnop\004st."
    "b\004st.d\004st.h\004st.w\003sub\005sub.d\005sub.s\007subq.ph\tsubq_s.p"
    "h\010subq_s.w\010subqh.ph\007subqh.w\nsubqh_r.ph\tsubqh_r.w\010subs_s.b"
    "\010subs_s.d\010subs_s.h\010subs_s.w\010subs_u.b\010subs_u.d\010subs_u."
    "h\010subs_u.w\nsubsus_u.b\nsubsus_u.d\nsubsus_u.h\nsubsus_u.w\nsubsuu_s"
    ".b\nsubsuu_s.d\nsubsuu_s.h\nsubsuu_s.w\004subu\007subu.ph\007subu.qb\006"
    "subu16\tsubu_s.ph\tsubu_s.qb\010subuh.qb\nsubuh_r.qb\006subv.b\006subv."
    "d\006subv.h\006subv.w\007subvi.b\007subvi.d\007subvi.h\007subvi.w\005su"
    "xc1\002sw\004sw16\004swc1\004swc2\004swc3\003swe\003swl\004swle\003swm\005"
    "swm16\005swm32\003swp\003swr\004swre\005swxc1\004sync\005synci\nsynciob"
    "dma\005syncs\005syncw\006syncws\007syscall\003teq\004teqi\003tge\004tge"
    "i\005tgeiu\004tgeu\006tlbinv\007tlbinvf\004tlbp\004tlbr\005tlbwi\005tlb"
    "wr\003tlt\004tlti\005tltiu\004tltu\003tne\004tnei\ttrunc.l.d\ttrunc.l.s"
    "\ttrunc.w.d\ttrunc.w.s\003ulh\004ulhu\003ulw\006v3mulu\004vmm0\005vmulu"
    "\006vshf.b\006vshf.d\006vshf.h\006vshf.w\004wait\005wrdsp\006wrpgpr\004"
    "wsbh\003xor\005xor.v\005xor16\004xori\006xori.b";

namespace {
  struct MatchEntry {
    uint16_t Mnemonic;
    uint16_t Opcode;
    uint16_t ConvertFn;
    uint64_t RequiredFeatures;
    uint8_t Classes[8];
    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcode {
    bool operator()(const MatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic() < RHS;
    }
    bool operator()(StringRef LHS, const MatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const MatchEntry &LHS, const MatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const MatchEntry MatchTable0[] = {
  { 0 /* abs.d */, Mips::ABS_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 0 /* abs.d */, Mips::FABS_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 0 /* abs.d */, Mips::FABS_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6 /* abs.s */, Mips::ABS_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6 /* abs.s */, Mips::FABS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 12 /* absq_s.ph */, Mips::ABSQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 22 /* absq_s.qb */, Mips::ABSQ_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 32 /* absq_s.w */, Mips::ABSQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 41 /* add */, Mips::ADD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 41 /* add */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 45 /* add.d */, Mips::FADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 45 /* add.d */, Mips::FADD_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 45 /* add.d */, Mips::FADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 51 /* add.s */, Mips::FADD_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 51 /* add.s */, Mips::FADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 57 /* add_a.b */, Mips::ADD_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 65 /* add_a.d */, Mips::ADD_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 73 /* add_a.h */, Mips::ADD_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 81 /* add_a.w */, Mips::ADD_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 89 /* addi */, Mips::ADDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuSpImmX16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDIU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16RegsPlusSP, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxPcImmX16, Convert__Reg1_0__Imm1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_PC, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDIU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::ADDiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 94 /* addiu */, Mips::AddiuRxRxImm16, Convert__Reg1_0__Tie0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 94 /* addiu */, Mips::AddiuSpImm16, Convert__Imm1_1, Feature_InMips16Mode, { MCK_CPUSPReg, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 100 /* addiupc */, Mips::ADDIUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 100 /* addiupc */, Mips::ADDIUPC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 100 /* addiupc */, Mips::ADDIUPC_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 108 /* addiur1sp */, Mips::ADDIUR1SP_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 118 /* addiur2 */, Mips::ADDIUR2_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 126 /* addius5 */, Mips::ADDIUS5_MM, Convert__GPR32AsmReg1_0__Tie0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 134 /* addiusp */, Mips::ADDIUSP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 142 /* addq.ph */, Mips::ADDQ_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 142 /* addq.ph */, Mips::ADDQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 150 /* addq_s.ph */, Mips::ADDQ_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 150 /* addq_s.ph */, Mips::ADDQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 160 /* addq_s.w */, Mips::ADDQ_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 160 /* addq_s.w */, Mips::ADDQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 169 /* addqh.ph */, Mips::ADDQH_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 169 /* addqh.ph */, Mips::ADDQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 178 /* addqh.w */, Mips::ADDQH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 178 /* addqh.w */, Mips::ADDQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 186 /* addqh_r.ph */, Mips::ADDQH_R_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 186 /* addqh_r.ph */, Mips::ADDQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 197 /* addqh_r.w */, Mips::ADDQH_R_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 197 /* addqh_r.w */, Mips::ADDQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 207 /* adds_a.b */, Mips::ADDS_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 216 /* adds_a.d */, Mips::ADDS_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 225 /* adds_a.h */, Mips::ADDS_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 234 /* adds_a.w */, Mips::ADDS_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 243 /* adds_s.b */, Mips::ADDS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 252 /* adds_s.d */, Mips::ADDS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 261 /* adds_s.h */, Mips::ADDS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 270 /* adds_s.w */, Mips::ADDS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 279 /* adds_u.b */, Mips::ADDS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 288 /* adds_u.d */, Mips::ADDS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 297 /* adds_u.h */, Mips::ADDS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 306 /* adds_u.w */, Mips::ADDS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 315 /* addsc */, Mips::ADDSC_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 315 /* addsc */, Mips::ADDSC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 321 /* addu */, Mips::AdduRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 321 /* addu */, Mips::ADDU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 321 /* addu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 326 /* addu.ph */, Mips::ADDU_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 326 /* addu.ph */, Mips::ADDU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 334 /* addu.qb */, Mips::ADDU_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 334 /* addu.qb */, Mips::ADDU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 342 /* addu16 */, Mips::ADDU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 342 /* addu16 */, Mips::ADDU16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 349 /* addu_s.ph */, Mips::ADDU_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 349 /* addu_s.ph */, Mips::ADDU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 359 /* addu_s.qb */, Mips::ADDU_S_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 359 /* addu_s.qb */, Mips::ADDU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 369 /* adduh.qb */, Mips::ADDUH_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 369 /* adduh.qb */, Mips::ADDUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 378 /* adduh_r.qb */, Mips::ADDUH_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 378 /* adduh_r.qb */, Mips::ADDUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 389 /* addv.b */, Mips::ADDV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 396 /* addv.d */, Mips::ADDV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 403 /* addv.h */, Mips::ADDV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 410 /* addv.w */, Mips::ADDV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 417 /* addvi.b */, Mips::ADDVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 425 /* addvi.d */, Mips::ADDVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 433 /* addvi.h */, Mips::ADDVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 441 /* addvi.w */, Mips::ADDVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 449 /* addwc */, Mips::ADDWC_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 449 /* addwc */, Mips::ADDWC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 455 /* align */, Mips::ALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 455 /* align */, Mips::ALIGN_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 461 /* aluipc */, Mips::ALUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 461 /* aluipc */, Mips::ALUIPC_MMR6, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AndRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 468 /* and */, Mips::AND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::AND_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 468 /* and */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 472 /* and.v */, Mips::AND_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 478 /* and16 */, Mips::AND16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 478 /* and16 */, Mips::AND16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 484 /* andi */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 484 /* andi */, Mips::ANDi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 489 /* andi.b */, Mips::ANDI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 496 /* andi16 */, Mips::ANDI16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 496 /* andi16 */, Mips::ANDI16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 503 /* append */, Mips::APPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 510 /* asub_s.b */, Mips::ASUB_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 519 /* asub_s.d */, Mips::ASUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 528 /* asub_s.h */, Mips::ASUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 537 /* asub_s.w */, Mips::ASUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 546 /* asub_u.b */, Mips::ASUB_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 555 /* asub_u.d */, Mips::ASUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 564 /* asub_u.h */, Mips::ASUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 573 /* asub_u.w */, Mips::ASUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 582 /* aui */, Mips::AUI, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 582 /* aui */, Mips::AUI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 586 /* auipc */, Mips::AUIPC, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 586 /* auipc */, Mips::AUIPC_MMR6, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 592 /* ave_s.b */, Mips::AVE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 600 /* ave_s.d */, Mips::AVE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 608 /* ave_s.h */, Mips::AVE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 616 /* ave_s.w */, Mips::AVE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 624 /* ave_u.b */, Mips::AVE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 632 /* ave_u.d */, Mips::AVE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 640 /* ave_u.h */, Mips::AVE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 648 /* ave_u.w */, Mips::AVE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 656 /* aver_s.b */, Mips::AVER_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 665 /* aver_s.d */, Mips::AVER_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 674 /* aver_s.h */, Mips::AVER_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 683 /* aver_s.w */, Mips::AVER_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 692 /* aver_u.b */, Mips::AVER_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 701 /* aver_u.d */, Mips::AVER_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 710 /* aver_u.h */, Mips::AVER_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 719 /* aver_u.w */, Mips::AVER_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 728 /* b */, Mips::B_MM_Pseudo, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::BimmX16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::BEQ, Convert__regZERO__regZERO__JumpTarget1_0, Feature_NotInMicroMips, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::B_MMR6_Pseudo, Convert__JumpTarget1_0, 0, { MCK_JumpTarget }, },
  { 728 /* b */, Mips::Bimm16, Convert__JumpTarget1_0, Feature_InMips16Mode, { MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 730 /* b16 */, Mips::B16_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 734 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 734 /* baddu */, Mips::BADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 740 /* bal */, Mips::BAL, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 740 /* bal */, Mips::BGEZAL, Convert__regZERO__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 744 /* balc */, Mips::BALC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 744 /* balc */, Mips::BALC_MMR6, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 749 /* balign */, Mips::BALIGN, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm2_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_0 }, },
  { 756 /* bbit0 */, Mips::BBIT032, Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_JumpTarget }, },
  { 756 /* bbit0 */, Mips::BBIT0, Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0_Report_UImm6, MCK_JumpTarget }, },
  { 762 /* bbit032 */, Mips::BBIT032, Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_JumpTarget }, },
  { 770 /* bbit1 */, Mips::BBIT132, Convert__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_JumpTarget }, },
  { 770 /* bbit1 */, Mips::BBIT1, Convert__GPR64AsmReg1_0__ConstantUImm5_0_Report_UImm61_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0_Report_UImm6, MCK_JumpTarget }, },
  { 776 /* bbit132 */, Mips::BBIT132, Convert__GPR64AsmReg1_0__ConstantUImm5_01_1__JumpTarget1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_JumpTarget }, },
  { 784 /* bc */, Mips::BC, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_JumpTarget }, },
  { 784 /* bc */, Mips::BC_MMR6, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 787 /* bc16 */, Mips::BC16_MMR6, Convert__JumpTarget1_0, Feature_HasMicroMips32r6, { MCK_JumpTarget }, },
  { 792 /* bc1eqz */, Mips::BC1EQZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 799 /* bc1f */, Mips::BC1F, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 799 /* bc1f */, Mips::BC1F, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 804 /* bc1fl */, Mips::BC1FL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 804 /* bc1fl */, Mips::BC1FL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 810 /* bc1nez */, Mips::BC1NEZ, Convert__FGR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_JumpTarget }, },
  { 817 /* bc1t */, Mips::BC1T, Convert__regFCC0__JumpTarget1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 817 /* bc1t */, Mips::BC1T, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 822 /* bc1tl */, Mips::BC1TL, Convert__regFCC0__JumpTarget1_0, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_JumpTarget }, },
  { 822 /* bc1tl */, Mips::BC1TL, Convert__FCCAsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FCCAsmReg, MCK_JumpTarget }, },
  { 828 /* bc2eqz */, Mips::BC2EQZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 835 /* bc2nez */, Mips::BC2NEZ, Convert__COP2AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_JumpTarget }, },
  { 842 /* bclr.b */, Mips::BCLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 849 /* bclr.d */, Mips::BCLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 856 /* bclr.h */, Mips::BCLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 863 /* bclr.w */, Mips::BCLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 870 /* bclri.b */, Mips::BCLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 878 /* bclri.d */, Mips::BCLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 886 /* bclri.h */, Mips::BCLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 894 /* bclri.w */, Mips::BCLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 902 /* beq */, Mips::BEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 902 /* beq */, Mips::BEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 902 /* beq */, Mips::BeqImm, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 906 /* beqc */, Mips::BEQC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 911 /* beql */, Mips::BEQL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 916 /* beqz */, Mips::BeqzRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 916 /* beqz */, Mips::BEQ, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 916 /* beqz */, Mips::BeqzRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 921 /* beqz16 */, Mips::BEQZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 928 /* beqzalc */, Mips::BEQZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 928 /* beqzalc */, Mips::BEQZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 936 /* beqzc */, Mips::BEQZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 936 /* beqzc */, Mips::BEQZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 942 /* beqzc16 */, Mips::BEQZC16_MMR6, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 950 /* beqzl */, Mips::BEQL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 956 /* bge */, Mips::BGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 956 /* bge */, Mips::BGEImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 960 /* bgec */, Mips::BGEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 965 /* bgel */, Mips::BGEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 965 /* bgel */, Mips::BGELImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 970 /* bgeu */, Mips::BGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 970 /* bgeu */, Mips::BGEUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 975 /* bgeuc */, Mips::BGEUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 981 /* bgeul */, Mips::BGEUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 981 /* bgeul */, Mips::BGEULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 987 /* bgez */, Mips::BGEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 987 /* bgez */, Mips::BGEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 992 /* bgezal */, Mips::BGEZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 992 /* bgezal */, Mips::BGEZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 999 /* bgezalc */, Mips::BGEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 999 /* bgezalc */, Mips::BGEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1007 /* bgezall */, Mips::BGEZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1015 /* bgezals */, Mips::BGEZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1023 /* bgezc */, Mips::BGEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1029 /* bgezl */, Mips::BGEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1035 /* bgt */, Mips::BGT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1035 /* bgt */, Mips::BGTImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1039 /* bgtl */, Mips::BGTL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1039 /* bgtl */, Mips::BGTLImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1044 /* bgtu */, Mips::BGTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1044 /* bgtu */, Mips::BGTUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1049 /* bgtul */, Mips::BGTUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1049 /* bgtul */, Mips::BGTULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1055 /* bgtz */, Mips::BGTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1055 /* bgtz */, Mips::BGTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1060 /* bgtzalc */, Mips::BGTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1060 /* bgtzalc */, Mips::BGTZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1068 /* bgtzc */, Mips::BGTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1074 /* bgtzl */, Mips::BGTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1080 /* binsl.b */, Mips::BINSL_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1088 /* binsl.d */, Mips::BINSL_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1096 /* binsl.h */, Mips::BINSL_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1104 /* binsl.w */, Mips::BINSL_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1112 /* binsli.b */, Mips::BINSLI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1121 /* binsli.d */, Mips::BINSLI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1130 /* binsli.h */, Mips::BINSLI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1139 /* binsli.w */, Mips::BINSLI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1148 /* binsr.b */, Mips::BINSR_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1156 /* binsr.d */, Mips::BINSR_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1164 /* binsr.h */, Mips::BINSR_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1172 /* binsr.w */, Mips::BINSR_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1180 /* binsri.b */, Mips::BINSRI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1189 /* binsri.d */, Mips::BINSRI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1198 /* binsri.h */, Mips::BINSRI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1207 /* binsri.w */, Mips::BINSRI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1216 /* bitrev */, Mips::BITREV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1223 /* bitswap */, Mips::BITSWAP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1223 /* bitswap */, Mips::BITSWAP_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 1231 /* ble */, Mips::BLE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1231 /* ble */, Mips::BLEImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1235 /* blel */, Mips::BLEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1235 /* blel */, Mips::BLELImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1240 /* bleu */, Mips::BLEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1240 /* bleu */, Mips::BLEUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1245 /* bleul */, Mips::BLEUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1245 /* bleul */, Mips::BLEULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1251 /* blez */, Mips::BLEZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1251 /* blez */, Mips::BLEZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1256 /* blezalc */, Mips::BLEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1256 /* blezalc */, Mips::BLEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1264 /* blezc */, Mips::BLEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1270 /* blezl */, Mips::BLEZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1276 /* blt */, Mips::BLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1276 /* blt */, Mips::BLTImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1280 /* bltc */, Mips::BLTC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1285 /* bltl */, Mips::BLTL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1285 /* bltl */, Mips::BLTLImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1290 /* bltu */, Mips::BLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1290 /* bltu */, Mips::BLTUImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1295 /* bltuc */, Mips::BLTUC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1301 /* bltul */, Mips::BLTUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1301 /* bltul */, Mips::BLTULImmMacro, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1307 /* bltz */, Mips::BLTZ, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1307 /* bltz */, Mips::BLTZ_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1312 /* bltzal */, Mips::BLTZAL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1312 /* bltzal */, Mips::BLTZAL_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1319 /* bltzalc */, Mips::BLTZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1319 /* bltzalc */, Mips::BLTZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1327 /* bltzall */, Mips::BLTZALL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1335 /* bltzals */, Mips::BLTZALS_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1343 /* bltzc */, Mips::BLTZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1349 /* bltzl */, Mips::BLTZL, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1355 /* bmnz.v */, Mips::BMNZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1362 /* bmnzi.b */, Mips::BMNZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1370 /* bmz.v */, Mips::BMZ_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1376 /* bmzi.b */, Mips::BMZI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1383 /* bne */, Mips::BNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1383 /* bne */, Mips::BNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1383 /* bne */, Mips::BneImm, Convert__GPR32AsmReg1_0__Imm1_1__JumpTarget1_2, 0, { MCK_GPR32AsmReg, MCK_Imm, MCK_JumpTarget }, },
  { 1387 /* bnec */, Mips::BNEC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1392 /* bneg.b */, Mips::BNEG_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1399 /* bneg.d */, Mips::BNEG_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1406 /* bneg.h */, Mips::BNEG_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1413 /* bneg.w */, Mips::BNEG_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1420 /* bnegi.b */, Mips::BNEGI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1428 /* bnegi.d */, Mips::BNEGI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1436 /* bnegi.h */, Mips::BNEGI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1444 /* bnegi.w */, Mips::BNEGI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1452 /* bnel */, Mips::BNEL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1457 /* bnez */, Mips::BnezRxImmX16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget }, },
  { 1457 /* bnez */, Mips::BNE, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1457 /* bnez */, Mips::BnezRxImm16, Convert__Reg1_0__JumpTarget1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_JumpTarget, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1462 /* bnez16 */, Mips::BNEZ16_MM, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 1469 /* bnezalc */, Mips::BNEZALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1469 /* bnezalc */, Mips::BNEZALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1477 /* bnezc */, Mips::BNEZC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1477 /* bnezc */, Mips::BNEZC_MM, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1483 /* bnezc16 */, Mips::BNEZC16_MMR6, Convert__GPRMM16AsmReg1_0__JumpTarget1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_JumpTarget }, },
  { 1491 /* bnezl */, Mips::BNEL, Convert__GPR32AsmReg1_0__regZERO__JumpTarget1_1, 0, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1497 /* bnvc */, Mips::BNVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1502 /* bnz.b */, Mips::BNZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1508 /* bnz.d */, Mips::BNZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1514 /* bnz.h */, Mips::BNZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1520 /* bnz.v */, Mips::BNZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1526 /* bnz.w */, Mips::BNZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1532 /* bovc */, Mips::BOVC, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__JumpTarget1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 1537 /* bposge32 */, Mips::BPOSGE32, Convert__JumpTarget1_0, Feature_HasDSP, { MCK_JumpTarget }, },
  { 1546 /* break */, Mips::BREAK, Convert__imm_95_0__imm_95_0, 0, {  }, },
  { 1546 /* break */, Mips::Break16, Convert_NoOperands, Feature_InMips16Mode, { MCK_0 }, },
  { 1546 /* break */, Mips::BREAK, Convert__ConstantUImm10_01_0__imm_95_0, 0, { MCK_ConstantUImm10_0 }, },
  { 1546 /* break */, Mips::BREAK, Convert__ConstantUImm10_01_0__ConstantUImm10_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_ConstantUImm10_0, MCK_ConstantUImm10_0 }, },
  { 1546 /* break */, Mips::BREAK_MMR6, Convert__ConstantUImm10_01_0__ConstantUImm10_01_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm10_0, MCK_ConstantUImm10_0 }, },
  { 1546 /* break */, Mips::BREAK_MM, Convert__ConstantUImm10_01_0__ConstantUImm10_01_1, Feature_InMicroMips, { MCK_ConstantUImm10_0, MCK_ConstantUImm10_0 }, },
  { 1552 /* break16 */, Mips::BREAK16_MM, Convert__ConstantUImm4_01_0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm4_0 }, },
  { 1552 /* break16 */, Mips::BREAK16_MMR6, Convert__ConstantUImm4_01_0, Feature_HasMicroMips32r6, { MCK_ConstantUImm4_0 }, },
  { 1560 /* bsel.v */, Mips::BSEL_V, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1567 /* bseli.b */, Mips::BSELI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1575 /* bset.b */, Mips::BSET_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1582 /* bset.d */, Mips::BSET_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1589 /* bset.h */, Mips::BSET_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1596 /* bset.w */, Mips::BSET_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1603 /* bseti.b */, Mips::BSETI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1611 /* bseti.d */, Mips::BSETI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1619 /* bseti.h */, Mips::BSETI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1627 /* bseti.w */, Mips::BSETI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1635 /* bteqz */, Mips::BteqzX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1635 /* bteqz */, Mips::Bteqz16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1641 /* btnez */, Mips::BtnezX16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm }, },
  { 1641 /* btnez */, Mips::Btnez16, Convert__Imm1_0, Feature_InMips16Mode, { MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 1647 /* bz.b */, Mips::BZ_B, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1652 /* bz.d */, Mips::BZ_D, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1657 /* bz.h */, Mips::BZ_H, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1662 /* bz.v */, Mips::BZ_V, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1667 /* bz.w */, Mips::BZ_W, Convert__MSA128AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_JumpTarget }, },
  { 1672 /* c.eq.d */, Mips::C_EQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1672 /* c.eq.d */, Mips::C_EQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1679 /* c.eq.s */, Mips::C_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1686 /* c.f.d */, Mips::C_F_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1686 /* c.f.d */, Mips::C_F_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1692 /* c.f.s */, Mips::C_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1698 /* c.le.d */, Mips::C_LE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1698 /* c.le.d */, Mips::C_LE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1705 /* c.le.s */, Mips::C_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1712 /* c.lt.d */, Mips::C_LT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1712 /* c.lt.d */, Mips::C_LT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1719 /* c.lt.s */, Mips::C_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1726 /* c.nge.d */, Mips::C_NGE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1726 /* c.nge.d */, Mips::C_NGE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1734 /* c.nge.s */, Mips::C_NGE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1742 /* c.ngl.d */, Mips::C_NGL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1742 /* c.ngl.d */, Mips::C_NGL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1750 /* c.ngl.s */, Mips::C_NGL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1758 /* c.ngle.d */, Mips::C_NGLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1758 /* c.ngle.d */, Mips::C_NGLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1767 /* c.ngle.s */, Mips::C_NGLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1776 /* c.ngt.d */, Mips::C_NGT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1776 /* c.ngt.d */, Mips::C_NGT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1784 /* c.ngt.s */, Mips::C_NGT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1792 /* c.ole.d */, Mips::C_OLE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1792 /* c.ole.d */, Mips::C_OLE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1800 /* c.ole.s */, Mips::C_OLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1808 /* c.olt.d */, Mips::C_OLT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1808 /* c.olt.d */, Mips::C_OLT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1816 /* c.olt.s */, Mips::C_OLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1824 /* c.seq.d */, Mips::C_SEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1824 /* c.seq.d */, Mips::C_SEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1832 /* c.seq.s */, Mips::C_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1840 /* c.sf.d */, Mips::C_SF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1840 /* c.sf.d */, Mips::C_SF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1847 /* c.sf.s */, Mips::C_SF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1854 /* c.ueq.d */, Mips::C_UEQ_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1854 /* c.ueq.d */, Mips::C_UEQ_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1862 /* c.ueq.s */, Mips::C_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1870 /* c.ule.d */, Mips::C_ULE_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1870 /* c.ule.d */, Mips::C_ULE_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1878 /* c.ule.s */, Mips::C_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1886 /* c.ult.d */, Mips::C_ULT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1886 /* c.ult.d */, Mips::C_ULT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1894 /* c.ult.s */, Mips::C_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1902 /* c.un.d */, Mips::C_UN_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 1902 /* c.un.d */, Mips::C_UN_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1909 /* c.un.s */, Mips::C_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1916 /* cache */, Mips::CACHE_R6, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 1916 /* cache */, Mips::CACHE, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1916 /* cache */, Mips::CACHE_MMR6, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1916 /* cache */, Mips::CACHE_MM, Convert__Mem2_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1922 /* cachee */, Mips::CACHEE, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasEVA, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1922 /* cachee */, Mips::CACHEE_MMR6, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1922 /* cachee */, Mips::CACHEE_MM, Convert__Mem2_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 1929 /* ceil.l.d */, Mips::CEIL_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1929 /* ceil.l.d */, Mips::CEIL_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 1938 /* ceil.l.s */, Mips::CEIL_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1938 /* ceil.l.s */, Mips::CEIL_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 1947 /* ceil.w.d */, Mips::CEIL_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1947 /* ceil.w.d */, Mips::CEIL_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 1947 /* ceil.w.d */, Mips::CEIL_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 1956 /* ceil.w.s */, Mips::CEIL_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1956 /* ceil.w.s */, Mips::CEIL_W_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1956 /* ceil.w.s */, Mips::CEIL_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 1965 /* ceq.b */, Mips::CEQ_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1971 /* ceq.d */, Mips::CEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1977 /* ceq.h */, Mips::CEQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1983 /* ceq.w */, Mips::CEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 1989 /* ceqi.b */, Mips::CEQI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 1996 /* ceqi.d */, Mips::CEQI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2003 /* ceqi.h */, Mips::CEQI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2010 /* ceqi.w */, Mips::CEQI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2017 /* cfc1 */, Mips::CFC1, Convert__GPR32AsmReg1_0__CCRAsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2022 /* cfcmsa */, Mips::CFCMSA, Convert__GPR32AsmReg1_0__MSACtrlAsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSACtrlAsmReg }, },
  { 2029 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2029 /* cins */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 2029 /* cins */, Mips::CINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2029 /* cins */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 2034 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2034 /* cins32 */, Mips::CINS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 2041 /* class.d */, Mips::CLASS_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2041 /* class.d */, Mips::CLASS_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2049 /* class.s */, Mips::CLASS_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2049 /* class.s */, Mips::CLASS_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2057 /* cle_s.b */, Mips::CLE_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2065 /* cle_s.d */, Mips::CLE_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2073 /* cle_s.h */, Mips::CLE_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2081 /* cle_s.w */, Mips::CLE_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2089 /* cle_u.b */, Mips::CLE_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2097 /* cle_u.d */, Mips::CLE_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2105 /* cle_u.h */, Mips::CLE_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2113 /* cle_u.w */, Mips::CLE_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2121 /* clei_s.b */, Mips::CLEI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2130 /* clei_s.d */, Mips::CLEI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2139 /* clei_s.h */, Mips::CLEI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2148 /* clei_s.w */, Mips::CLEI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2157 /* clei_u.b */, Mips::CLEI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2166 /* clei_u.d */, Mips::CLEI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2175 /* clei_u.h */, Mips::CLEI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2184 /* clei_u.w */, Mips::CLEI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2193 /* clo */, Mips::CLO, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2193 /* clo */, Mips::CLO_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2193 /* clo */, Mips::CLO_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2193 /* clo */, Mips::CLO_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2197 /* clt_s.b */, Mips::CLT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2205 /* clt_s.d */, Mips::CLT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2213 /* clt_s.h */, Mips::CLT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2221 /* clt_s.w */, Mips::CLT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2229 /* clt_u.b */, Mips::CLT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2237 /* clt_u.d */, Mips::CLT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2245 /* clt_u.h */, Mips::CLT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2253 /* clt_u.w */, Mips::CLT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 2261 /* clti_s.b */, Mips::CLTI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2270 /* clti_s.d */, Mips::CLTI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2279 /* clti_s.h */, Mips::CLTI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2288 /* clti_s.w */, Mips::CLTI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2297 /* clti_u.b */, Mips::CLTI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2306 /* clti_u.d */, Mips::CLTI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2315 /* clti_u.h */, Mips::CLTI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2324 /* clti_u.w */, Mips::CLTI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 2333 /* clz */, Mips::CLZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2333 /* clz */, Mips::CLZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2333 /* clz */, Mips::CLZ_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2333 /* clz */, Mips::CLZ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2337 /* cmp */, Mips::CmpRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 2341 /* cmp.af.d */, Mips::CMP_F_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2341 /* cmp.af.d */, Mips::CMP_AF_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2350 /* cmp.af.s */, Mips::CMP_F_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2350 /* cmp.af.s */, Mips::CMP_AF_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2359 /* cmp.eq.d */, Mips::CMP_EQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2359 /* cmp.eq.d */, Mips::CMP_EQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2368 /* cmp.eq.ph */, Mips::CMP_EQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2378 /* cmp.eq.s */, Mips::CMP_EQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2378 /* cmp.eq.s */, Mips::CMP_EQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2387 /* cmp.le.d */, Mips::CMP_LE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2387 /* cmp.le.d */, Mips::CMP_LE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2396 /* cmp.le.ph */, Mips::CMP_LE_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2406 /* cmp.le.s */, Mips::CMP_LE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2406 /* cmp.le.s */, Mips::CMP_LE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2415 /* cmp.lt.d */, Mips::CMP_LT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2415 /* cmp.lt.d */, Mips::CMP_LT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2424 /* cmp.lt.ph */, Mips::CMP_LT_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2434 /* cmp.lt.s */, Mips::CMP_LT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2434 /* cmp.lt.s */, Mips::CMP_LT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2443 /* cmp.saf.d */, Mips::CMP_SAF_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2443 /* cmp.saf.d */, Mips::CMP_SAF_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2453 /* cmp.saf.s */, Mips::CMP_SAF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2453 /* cmp.saf.s */, Mips::CMP_SAF_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2463 /* cmp.seq.d */, Mips::CMP_SEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2463 /* cmp.seq.d */, Mips::CMP_SEQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2473 /* cmp.seq.s */, Mips::CMP_SEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2473 /* cmp.seq.s */, Mips::CMP_SEQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2483 /* cmp.sle.d */, Mips::CMP_SLE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2483 /* cmp.sle.d */, Mips::CMP_SLE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2493 /* cmp.sle.s */, Mips::CMP_SLE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2493 /* cmp.sle.s */, Mips::CMP_SLE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2503 /* cmp.slt.d */, Mips::CMP_SLT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2503 /* cmp.slt.d */, Mips::CMP_SLT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2513 /* cmp.slt.s */, Mips::CMP_SLT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2513 /* cmp.slt.s */, Mips::CMP_SLT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2523 /* cmp.sueq.d */, Mips::CMP_SUEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2523 /* cmp.sueq.d */, Mips::CMP_SUEQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2534 /* cmp.sueq.s */, Mips::CMP_SUEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2534 /* cmp.sueq.s */, Mips::CMP_SUEQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2545 /* cmp.sule.d */, Mips::CMP_SULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2545 /* cmp.sule.d */, Mips::CMP_SULE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2556 /* cmp.sule.s */, Mips::CMP_SULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2556 /* cmp.sule.s */, Mips::CMP_SULE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2567 /* cmp.sult.d */, Mips::CMP_SULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2567 /* cmp.sult.d */, Mips::CMP_SULT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2578 /* cmp.sult.s */, Mips::CMP_SULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2578 /* cmp.sult.s */, Mips::CMP_SULT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2589 /* cmp.sun.d */, Mips::CMP_SUN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2589 /* cmp.sun.d */, Mips::CMP_SUN_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2599 /* cmp.sun.s */, Mips::CMP_SUN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2599 /* cmp.sun.s */, Mips::CMP_SUN_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2609 /* cmp.ueq.d */, Mips::CMP_UEQ_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2609 /* cmp.ueq.d */, Mips::CMP_UEQ_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2619 /* cmp.ueq.s */, Mips::CMP_UEQ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2619 /* cmp.ueq.s */, Mips::CMP_UEQ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2629 /* cmp.ule.d */, Mips::CMP_ULE_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2629 /* cmp.ule.d */, Mips::CMP_ULE_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2639 /* cmp.ule.s */, Mips::CMP_ULE_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2639 /* cmp.ule.s */, Mips::CMP_ULE_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2649 /* cmp.ult.d */, Mips::CMP_ULT_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2649 /* cmp.ult.d */, Mips::CMP_ULT_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2659 /* cmp.ult.s */, Mips::CMP_ULT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2659 /* cmp.ult.s */, Mips::CMP_ULT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2669 /* cmp.un.d */, Mips::CMP_UN_D, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2669 /* cmp.un.d */, Mips::CMP_UN_D_MMR6, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2678 /* cmp.un.s */, Mips::CMP_UN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2678 /* cmp.un.s */, Mips::CMP_UN_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2687 /* cmpgdu.eq.qb */, Mips::CMPGDU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2700 /* cmpgdu.le.qb */, Mips::CMPGDU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2713 /* cmpgdu.lt.qb */, Mips::CMPGDU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2726 /* cmpgu.eq.qb */, Mips::CMPGU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2738 /* cmpgu.le.qb */, Mips::CMPGU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2750 /* cmpgu.lt.qb */, Mips::CMPGU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2762 /* cmpi */, Mips::CmpiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 2762 /* cmpi */, Mips::CmpiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 2767 /* cmpu.eq.qb */, Mips::CMPU_EQ_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2778 /* cmpu.le.qb */, Mips::CMPU_LE_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2789 /* cmpu.lt.qb */, Mips::CMPU_LT_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 2800 /* copy_s.b */, Mips::COPY_S_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2809 /* copy_s.d */, Mips::COPY_S_D, Convert__GPR64AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2818 /* copy_s.h */, Mips::COPY_S_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2827 /* copy_s.w */, Mips::COPY_S_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2836 /* copy_u.b */, Mips::COPY_U_B, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2845 /* copy_u.h */, Mips::COPY_U_H, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2854 /* copy_u.w */, Mips::COPY_U_W, Convert__GPR32AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_GPR32AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 2863 /* ctc1 */, Mips::CTC1, Convert__CCRAsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_CCRAsmReg }, },
  { 2868 /* ctcmsa */, Mips::CTCMSA, Convert__MSACtrlAsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSACtrlAsmReg, MCK_GPR32AsmReg }, },
  { 2875 /* cvt.d.l */, Mips::CVT_D_L_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2875 /* cvt.d.l */, Mips::CVT_D64_L, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2883 /* cvt.d.s */, Mips::CVT_D32_S, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2883 /* cvt.d.s */, Mips::CVT_D_S_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2883 /* cvt.d.s */, Mips::CVT_D64_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2891 /* cvt.d.w */, Mips::CVT_D32_W, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2891 /* cvt.d.w */, Mips::CVT_D_W_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2891 /* cvt.d.w */, Mips::CVT_D64_W, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2899 /* cvt.l.d */, Mips::CVT_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2899 /* cvt.l.d */, Mips::CVT_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 2907 /* cvt.l.s */, Mips::CVT_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2907 /* cvt.l.s */, Mips::CVT_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2915 /* cvt.s.d */, Mips::CVT_S_D_MMR6, Convert__AFGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2915 /* cvt.s.d */, Mips::CVT_S_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2915 /* cvt.s.d */, Mips::CVT_S_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2923 /* cvt.s.l */, Mips::CVT_S_L, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2923 /* cvt.s.l */, Mips::CVT_S_L_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 2931 /* cvt.s.w */, Mips::CVT_S_W_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2931 /* cvt.s.w */, Mips::CVT_S_W, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2939 /* cvt.w.d */, Mips::CVT_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2939 /* cvt.w.d */, Mips::CVT_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 2939 /* cvt.w.d */, Mips::CVT_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 2947 /* cvt.w.s */, Mips::CVT_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2947 /* cvt.w.s */, Mips::CVT_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 2955 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2955 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2955 /* dadd */, Mips::DADD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2955 /* dadd */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2960 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2960 /* daddi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2966 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2966 /* daddiu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2973 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2973 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2973 /* daddu */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 2973 /* daddu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2979 /* dahi */, Mips::DAHI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2979 /* dahi */, Mips::DAHI_MM64R6, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2984 /* dalign */, Mips::DALIGN, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm3_0 }, },
  { 2984 /* dalign */, Mips::DALIGN_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm3_0 }, },
  { 2991 /* dati */, Mips::DATI, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2991 /* dati */, Mips::DATI_MM64R6, Convert__GPR64AsmReg1_0__Tie0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 2996 /* daui */, Mips::DAUI, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 2996 /* daui */, Mips::DAUI_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 3001 /* dbitswap */, Mips::DBITSWAP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3010 /* dclo */, Mips::DCLO, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3010 /* dclo */, Mips::DCLO_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3015 /* dclz */, Mips::DCLZ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3015 /* dclz */, Mips::DCLZ_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3020 /* ddiv */, Mips::DDIV_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3020 /* ddiv */, Mips::DSDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3020 /* ddiv */, Mips::DSDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3020 /* ddiv */, Mips::DDIV_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3020 /* ddiv */, Mips::DDIV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3025 /* ddivu */, Mips::DDIVU_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3025 /* ddivu */, Mips::DUDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3025 /* ddivu */, Mips::DUDIV, Convert__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3025 /* ddivu */, Mips::DDIVU_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3025 /* ddivu */, Mips::DDIVU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3031 /* deret */, Mips::DERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32|Feature_NotInMicroMips, {  }, },
  { 3031 /* deret */, Mips::DERET_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3031 /* deret */, Mips::DERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3037 /* dext */, Mips::DEXT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3037 /* dext */, Mips::DEXT_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3042 /* dextm */, Mips::DEXTM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_33 }, },
  { 3042 /* dextm */, Mips::DEXTM_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_331_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_33 }, },
  { 3048 /* dextu */, Mips::DEXTU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_ConstantUImm5_1 }, },
  { 3048 /* dextu */, Mips::DEXTU_MM64R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_ConstantUImm5_1 }, },
  { 3054 /* di */, Mips::DI, Convert__regZERO, Feature_HasMips32r2|Feature_NotInMicroMips, {  }, },
  { 3054 /* di */, Mips::DI_MM, Convert__regZERO, Feature_InMicroMips, {  }, },
  { 3054 /* di */, Mips::DI_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3054 /* di */, Mips::DI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 3054 /* di */, Mips::DI_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3054 /* di */, Mips::DI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3057 /* dins */, Mips::DINS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0, MCK_Imm }, },
  { 3062 /* dinsm */, Mips::DINSM, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_Imm }, },
  { 3068 /* dinsu */, Mips::DINSU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_321_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32, MCK_Imm }, },
  { 3074 /* div */, Mips::DIV_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3074 /* div */, Mips::SDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3074 /* div */, Mips::DivRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3074 /* div */, Mips::SDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3074 /* div */, Mips::SDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3074 /* div */, Mips::DIV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3074 /* div */, Mips::DIV_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3078 /* div.d */, Mips::FDIV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 3078 /* div.d */, Mips::FDIV_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 3078 /* div.d */, Mips::FDIV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 3084 /* div.s */, Mips::FDIV_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3084 /* div.s */, Mips::FDIV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 3090 /* div_s.b */, Mips::DIV_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3098 /* div_s.d */, Mips::DIV_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3106 /* div_s.h */, Mips::DIV_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3114 /* div_s.w */, Mips::DIV_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3122 /* div_u.b */, Mips::DIV_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3130 /* div_u.d */, Mips::DIV_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3138 /* div_u.h */, Mips::DIV_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3146 /* div_u.w */, Mips::DIV_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3154 /* divu */, Mips::DIVU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3154 /* divu */, Mips::UDivMacro, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3154 /* divu */, Mips::DivuRxRy16, Convert__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_ZERO, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 3154 /* divu */, Mips::UDIV, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3154 /* divu */, Mips::UDIV_MM, Convert__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_ZERO, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3154 /* divu */, Mips::DIVU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3154 /* divu */, Mips::DIVU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3159 /* dla */, Mips::LoadAddrImm64, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3159 /* dla */, Mips::LoadAddrReg64, Convert__GPR64AsmReg1_0__Mem2_1, 0, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 3163 /* dli */, Mips::LoadImm64, Convert__GPR64AsmReg1_0__Imm1_1, 0, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3167 /* dlsa */, Mips::DLSA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm2_1 }, },
  { 3167 /* dlsa */, Mips::DLSA_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm2_1 }, },
  { 3172 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3172 /* dmfc0 */, Mips::DMFC0, Convert__GPR64AsmReg1_0__COP0AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 3178 /* dmfc1 */, Mips::DMFC1, Convert__GPR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3184 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__COP2AsmReg1_1__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3184 /* dmfc2 */, Mips::DMFC2_OCTEON, Convert__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3184 /* dmfc2 */, Mips::DMFC2, Convert__GPR64AsmReg1_0__COP2AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 3190 /* dmod */, Mips::DMOD_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3190 /* dmod */, Mips::DMOD_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3190 /* dmod */, Mips::DMOD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3195 /* dmodu */, Mips::DMODU_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3195 /* dmodu */, Mips::DMODU_MM64R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3195 /* dmodu */, Mips::DMODU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3201 /* dmtc0 */, Mips::DMTC0, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP0AsmReg }, },
  { 3201 /* dmtc0 */, Mips::DMTC0, Convert__COP0AsmReg1_1__GPR64AsmReg1_0__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 3207 /* dmtc1 */, Mips::DMTC1, Convert__FGR64AsmReg1_1__GPR64AsmReg1_0, Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, { MCK_GPR64AsmReg, MCK_FGR64AsmReg }, },
  { 3213 /* dmtc2 */, Mips::DMTC2, Convert__COP2AsmReg1_1__GPR64AsmReg1_0__imm_95_0, 0, { MCK_GPR64AsmReg, MCK_COP2AsmReg }, },
  { 3213 /* dmtc2 */, Mips::DMTC2_OCTEON, Convert__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 3213 /* dmtc2 */, Mips::DMTC2, Convert__COP2AsmReg1_1__GPR64AsmReg1_0__Imm1_2, Feature_HasMips64, { MCK_GPR64AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 3219 /* dmuh */, Mips::DMUH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3224 /* dmuhu */, Mips::DMUHU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3230 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3230 /* dmul */, Mips::DMUL_R6, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3230 /* dmul */, Mips::DMUL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3235 /* dmult */, Mips::DMULT, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3241 /* dmultu */, Mips::DMULTu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3248 /* dmulu */, Mips::DMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3254 /* dneg */, Mips::DSUB, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_0, Feature_HasMips3, { MCK_GPR64AsmReg }, },
  { 3254 /* dneg */, Mips::DSUB, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3259 /* dnegu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__regZERO_64__GPR64AsmReg1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3265 /* dotp_s.d */, Mips::DOTP_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3274 /* dotp_s.h */, Mips::DOTP_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3283 /* dotp_s.w */, Mips::DOTP_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3292 /* dotp_u.d */, Mips::DOTP_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3301 /* dotp_u.h */, Mips::DOTP_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3310 /* dotp_u.w */, Mips::DOTP_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3319 /* dpa.w.ph */, Mips::DPA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3319 /* dpa.w.ph */, Mips::DPA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3328 /* dpadd_s.d */, Mips::DPADD_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3338 /* dpadd_s.h */, Mips::DPADD_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3348 /* dpadd_s.w */, Mips::DPADD_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3358 /* dpadd_u.d */, Mips::DPADD_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3368 /* dpadd_u.h */, Mips::DPADD_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3378 /* dpadd_u.w */, Mips::DPADD_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3388 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3388 /* dpaq_s.w.ph */, Mips::DPAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3400 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3400 /* dpaq_sa.l.w */, Mips::DPAQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3412 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3412 /* dpaqx_s.w.ph */, Mips::DPAQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3425 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3425 /* dpaqx_sa.w.ph */, Mips::DPAQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3439 /* dpau.h.qbl */, Mips::DPAU_H_QBL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3439 /* dpau.h.qbl */, Mips::DPAU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3450 /* dpau.h.qbr */, Mips::DPAU_H_QBR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3450 /* dpau.h.qbr */, Mips::DPAU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3461 /* dpax.w.ph */, Mips::DPAX_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3461 /* dpax.w.ph */, Mips::DPAX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3471 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 3471 /* dpop */, Mips::DPOP, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3476 /* dps.w.ph */, Mips::DPS_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3476 /* dps.w.ph */, Mips::DPS_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3485 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3485 /* dpsq_s.w.ph */, Mips::DPSQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3497 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3497 /* dpsq_sa.l.w */, Mips::DPSQ_SA_L_W, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3509 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3509 /* dpsqx_s.w.ph */, Mips::DPSQX_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3522 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3522 /* dpsqx_sa.w.ph */, Mips::DPSQX_SA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3536 /* dpsu.h.qbl */, Mips::DPSU_H_QBL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3536 /* dpsu.h.qbl */, Mips::DPSU_H_QBL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3547 /* dpsu.h.qbr */, Mips::DPSU_H_QBR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3547 /* dpsu.h.qbr */, Mips::DPSU_H_QBR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3558 /* dpsub_s.d */, Mips::DPSUB_S_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3568 /* dpsub_s.h */, Mips::DPSUB_S_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3578 /* dpsub_s.w */, Mips::DPSUB_S_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3588 /* dpsub_u.d */, Mips::DPSUB_U_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3598 /* dpsub_u.h */, Mips::DPSUB_U_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3608 /* dpsub_u.w */, Mips::DPSUB_U_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3618 /* dpsx.w.ph */, Mips::DPSX_W_PH_MMR2, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3618 /* dpsx.w.ph */, Mips::DPSX_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3628 /* drol */, Mips::DROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3628 /* drol */, Mips::DROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 3628 /* drol */, Mips::DROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3628 /* drol */, Mips::DROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 3633 /* dror */, Mips::DROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3633 /* dror */, Mips::DRORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 3633 /* dror */, Mips::DROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 3633 /* dror */, Mips::DRORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasMips64, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 3638 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3638 /* drotr */, Mips::DROTR, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3644 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3644 /* drotr32 */, Mips::DROTR32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3652 /* drotrv */, Mips::DROTRV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3659 /* dsbh */, Mips::DSBH, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3664 /* dshd */, Mips::DSHD, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips64r2, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3669 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3669 /* dsll */, Mips::DSLL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3669 /* dsll */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3674 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3674 /* dsll32 */, Mips::DSLL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3681 /* dsllv */, Mips::DSLLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3687 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3687 /* dsra */, Mips::DSRA, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3687 /* dsra */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3692 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3692 /* dsra32 */, Mips::DSRA32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3699 /* dsrav */, Mips::DSRAV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3705 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm6_01_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3705 /* dsrl */, Mips::DSRL, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm6_0 }, },
  { 3705 /* dsrl */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3710 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3710 /* dsrl32 */, Mips::DSRL32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0 }, },
  { 3717 /* dsrlv */, Mips::DSRLV, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR32AsmReg }, },
  { 3723 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3723 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3723 /* dsub */, Mips::DSUB, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3723 /* dsub */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3728 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3728 /* dsubi */, Mips::DADDi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3734 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3734 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__InvNum1_1, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3734 /* dsubu */, Mips::DSUBu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 3734 /* dsubu */, Mips::DADDiu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__InvNum1_2, Feature_HasMips3, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_InvNum }, },
  { 3740 /* ehb */, Mips::EHB_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3740 /* ehb */, Mips::EHB, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 3740 /* ehb */, Mips::EHB_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3744 /* ei */, Mips::EI, Convert__regZERO, Feature_HasMips32r2|Feature_NotInMicroMips, {  }, },
  { 3744 /* ei */, Mips::EI_MM, Convert__regZERO, Feature_InMicroMips, {  }, },
  { 3744 /* ei */, Mips::EI_MMR6, Convert__regZERO, Feature_HasMicroMips32r6, {  }, },
  { 3744 /* ei */, Mips::EI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 3744 /* ei */, Mips::EI_MMR6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 3744 /* ei */, Mips::EI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 3747 /* eret */, Mips::ERET, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotInMicroMips, {  }, },
  { 3747 /* eret */, Mips::ERET_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3747 /* eret */, Mips::ERET_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 3752 /* eretnc */, Mips::ERETNC, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r5|Feature_NotInMicroMips, {  }, },
  { 3752 /* eretnc */, Mips::ERETNC_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 3759 /* ext */, Mips::EXT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3759 /* ext */, Mips::EXT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_11_3, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_1 }, },
  { 3763 /* extp */, Mips::EXTP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3763 /* extp */, Mips::EXTP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3768 /* extpdp */, Mips::EXTPDP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3768 /* extpdp */, Mips::EXTPDP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3775 /* extpdpv */, Mips::EXTPDPV_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3775 /* extpdpv */, Mips::EXTPDPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3783 /* extpv */, Mips::EXTPV_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3783 /* extpv */, Mips::EXTPV, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3789 /* extr.w */, Mips::EXTR_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3789 /* extr.w */, Mips::EXTR_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3796 /* extr_r.w */, Mips::EXTR_R_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3796 /* extr_r.w */, Mips::EXTR_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3805 /* extr_rs.w */, Mips::EXTR_RS_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3805 /* extr_rs.w */, Mips::EXTR_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3815 /* extr_s.h */, Mips::EXTR_S_H_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_ConstantUImm5_0 }, },
  { 3815 /* extr_s.h */, Mips::EXTR_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__Imm1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_Imm }, },
  { 3824 /* extrv.w */, Mips::EXTRV_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3824 /* extrv.w */, Mips::EXTRV_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3832 /* extrv_r.w */, Mips::EXTRV_R_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3832 /* extrv_r.w */, Mips::EXTRV_R_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3842 /* extrv_rs.w */, Mips::EXTRV_RS_W_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3842 /* extrv_rs.w */, Mips::EXTRV_RS_W, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3853 /* extrv_s.h */, Mips::EXTRV_S_H_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3853 /* extrv_s.h */, Mips::EXTRV_S_H, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 3863 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3863 /* exts */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_32_Norm1_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 3863 /* exts */, Mips::EXTS, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3863 /* exts */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_32_Norm1_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_32_Norm, MCK_ConstantUImm5_0 }, },
  { 3868 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__ConstantUImm5_01_1__ConstantUImm5_01_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3868 /* exts32 */, Mips::EXTS32, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__ConstantUImm5_01_2__ConstantUImm5_01_3, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_ConstantUImm5_0, MCK_ConstantUImm5_0 }, },
  { 3875 /* fadd.d */, Mips::FADD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3882 /* fadd.w */, Mips::FADD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3889 /* fcaf.d */, Mips::FCAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3896 /* fcaf.w */, Mips::FCAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3903 /* fceq.d */, Mips::FCEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3910 /* fceq.w */, Mips::FCEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3917 /* fclass.d */, Mips::FCLASS_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3926 /* fclass.w */, Mips::FCLASS_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3935 /* fcle.d */, Mips::FCLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3942 /* fcle.w */, Mips::FCLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3949 /* fclt.d */, Mips::FCLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3956 /* fclt.w */, Mips::FCLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3963 /* fcne.d */, Mips::FCNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3970 /* fcne.w */, Mips::FCNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3977 /* fcor.d */, Mips::FCOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3984 /* fcor.w */, Mips::FCOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3991 /* fcueq.d */, Mips::FCUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 3999 /* fcueq.w */, Mips::FCUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4007 /* fcule.d */, Mips::FCULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4015 /* fcule.w */, Mips::FCULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4023 /* fcult.d */, Mips::FCULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4031 /* fcult.w */, Mips::FCULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4039 /* fcun.d */, Mips::FCUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4046 /* fcun.w */, Mips::FCUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4053 /* fcune.d */, Mips::FCUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4061 /* fcune.w */, Mips::FCUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4069 /* fdiv.d */, Mips::FDIV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4076 /* fdiv.w */, Mips::FDIV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4083 /* fexdo.h */, Mips::FEXDO_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4091 /* fexdo.w */, Mips::FEXDO_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4099 /* fexp2.d */, Mips::FEXP2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4107 /* fexp2.w */, Mips::FEXP2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4115 /* fexupl.d */, Mips::FEXUPL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4124 /* fexupl.w */, Mips::FEXUPL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4133 /* fexupr.d */, Mips::FEXUPR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4142 /* fexupr.w */, Mips::FEXUPR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4151 /* ffint_s.d */, Mips::FFINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4161 /* ffint_s.w */, Mips::FFINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4171 /* ffint_u.d */, Mips::FFINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4181 /* ffint_u.w */, Mips::FFINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4191 /* ffql.d */, Mips::FFQL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4198 /* ffql.w */, Mips::FFQL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4205 /* ffqr.d */, Mips::FFQR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4212 /* ffqr.w */, Mips::FFQR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4219 /* fill.b */, Mips::FILL_B, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4226 /* fill.d */, Mips::FILL_D, Convert__MSA128AsmReg1_0__GPR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK_GPR64AsmReg }, },
  { 4233 /* fill.h */, Mips::FILL_H, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4240 /* fill.w */, Mips::FILL_W, Convert__MSA128AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_GPR32AsmReg }, },
  { 4247 /* flog2.d */, Mips::FLOG2_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4255 /* flog2.w */, Mips::FLOG2_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4263 /* floor.l.d */, Mips::FLOOR_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4263 /* floor.l.d */, Mips::FLOOR_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 4273 /* floor.l.s */, Mips::FLOOR_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4273 /* floor.l.s */, Mips::FLOOR_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 4283 /* floor.w.d */, Mips::FLOOR_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4283 /* floor.w.d */, Mips::FLOOR_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 4283 /* floor.w.d */, Mips::FLOOR_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 4293 /* floor.w.s */, Mips::FLOOR_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4293 /* floor.w.s */, Mips::FLOOR_W_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4293 /* floor.w.s */, Mips::FLOOR_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 4303 /* fmadd.d */, Mips::FMADD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4311 /* fmadd.w */, Mips::FMADD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4319 /* fmax.d */, Mips::FMAX_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4326 /* fmax.w */, Mips::FMAX_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4333 /* fmax_a.d */, Mips::FMAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4342 /* fmax_a.w */, Mips::FMAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4351 /* fmin.d */, Mips::FMIN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4358 /* fmin.w */, Mips::FMIN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4365 /* fmin_a.d */, Mips::FMIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4374 /* fmin_a.w */, Mips::FMIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4383 /* fmsub.d */, Mips::FMSUB_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4391 /* fmsub.w */, Mips::FMSUB_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4399 /* fmul.d */, Mips::FMUL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4406 /* fmul.w */, Mips::FMUL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4413 /* frcp.d */, Mips::FRCP_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4420 /* frcp.w */, Mips::FRCP_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4427 /* frint.d */, Mips::FRINT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4435 /* frint.w */, Mips::FRINT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4443 /* frsqrt.d */, Mips::FRSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4452 /* frsqrt.w */, Mips::FRSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4461 /* fsaf.d */, Mips::FSAF_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4468 /* fsaf.w */, Mips::FSAF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4475 /* fseq.d */, Mips::FSEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4482 /* fseq.w */, Mips::FSEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4489 /* fsle.d */, Mips::FSLE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4496 /* fsle.w */, Mips::FSLE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4503 /* fslt.d */, Mips::FSLT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4510 /* fslt.w */, Mips::FSLT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4517 /* fsne.d */, Mips::FSNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4524 /* fsne.w */, Mips::FSNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4531 /* fsor.d */, Mips::FSOR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4538 /* fsor.w */, Mips::FSOR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4545 /* fsqrt.d */, Mips::FSQRT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4553 /* fsqrt.w */, Mips::FSQRT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4561 /* fsub.d */, Mips::FSUB_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4568 /* fsub.w */, Mips::FSUB_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4575 /* fsueq.d */, Mips::FSUEQ_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4583 /* fsueq.w */, Mips::FSUEQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4591 /* fsule.d */, Mips::FSULE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4599 /* fsule.w */, Mips::FSULE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4607 /* fsult.d */, Mips::FSULT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4615 /* fsult.w */, Mips::FSULT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4623 /* fsun.d */, Mips::FSUN_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4630 /* fsun.w */, Mips::FSUN_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4637 /* fsune.d */, Mips::FSUNE_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4645 /* fsune.w */, Mips::FSUNE_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4653 /* ftint_s.d */, Mips::FTINT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4663 /* ftint_s.w */, Mips::FTINT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4673 /* ftint_u.d */, Mips::FTINT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4683 /* ftint_u.w */, Mips::FTINT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4693 /* ftq.h */, Mips::FTQ_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4699 /* ftq.w */, Mips::FTQ_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4705 /* ftrunc_s.d */, Mips::FTRUNC_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4716 /* ftrunc_s.w */, Mips::FTRUNC_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4727 /* ftrunc_u.d */, Mips::FTRUNC_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4738 /* ftrunc_u.w */, Mips::FTRUNC_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4749 /* hadd_s.d */, Mips::HADD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4758 /* hadd_s.h */, Mips::HADD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4767 /* hadd_s.w */, Mips::HADD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4776 /* hadd_u.d */, Mips::HADD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4785 /* hadd_u.h */, Mips::HADD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4794 /* hadd_u.w */, Mips::HADD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4803 /* hsub_s.d */, Mips::HSUB_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4812 /* hsub_s.h */, Mips::HSUB_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4821 /* hsub_s.w */, Mips::HSUB_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4830 /* hsub_u.d */, Mips::HSUB_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4839 /* hsub_u.h */, Mips::HSUB_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4848 /* hsub_u.w */, Mips::HSUB_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4857 /* ilvev.b */, Mips::ILVEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4865 /* ilvev.d */, Mips::ILVEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4873 /* ilvev.h */, Mips::ILVEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4881 /* ilvev.w */, Mips::ILVEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4889 /* ilvl.b */, Mips::ILVL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4896 /* ilvl.d */, Mips::ILVL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4903 /* ilvl.h */, Mips::ILVL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4910 /* ilvl.w */, Mips::ILVL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4917 /* ilvod.b */, Mips::ILVOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4925 /* ilvod.d */, Mips::ILVOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4933 /* ilvod.h */, Mips::ILVOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4941 /* ilvod.w */, Mips::ILVOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4949 /* ilvr.b */, Mips::ILVR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4956 /* ilvr.d */, Mips::ILVR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4963 /* ilvr.h */, Mips::ILVR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4970 /* ilvr.w */, Mips::ILVR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 4977 /* ins */, Mips::INS, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_Imm }, },
  { 4977 /* ins */, Mips::INS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Imm1_3__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0, MCK_Imm }, },
  { 4981 /* insert.b */, Mips::INSERT_B, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 4990 /* insert.d */, Mips::INSERT_D, Convert__MSA128AsmReg1_0__Tie0__GPR64AsmReg1_4__Imm1_2, Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR64AsmReg }, },
  { 4999 /* insert.h */, Mips::INSERT_H, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 5008 /* insert.w */, Mips::INSERT_W, Convert__MSA128AsmReg1_0__Tie0__GPR32AsmReg1_4__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_, MCK_GPR32AsmReg }, },
  { 5017 /* insv */, Mips::INSV_MM, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5017 /* insv */, Mips::INSV, Convert__GPR32AsmReg1_0__Tie0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5022 /* insve.b */, Mips::INSVE_B, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm4_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5030 /* insve.d */, Mips::INSVE_D, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm1_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5038 /* insve.h */, Mips::INSVE_H, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm3_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5046 /* insve.w */, Mips::INSVE_W, Convert__MSA128AsmReg1_0__Tie0__ConstantUImm2_01_2__MSA128AsmReg1_4__ConstantImmz1_6, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantImmz, MCK__93_ }, },
  { 5054 /* j */, Mips::JR, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 5054 /* j */, Mips::J_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5054 /* j */, Mips::J, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 5056 /* jal */, Mips::JalOneReg, Convert__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 5056 /* jal */, Mips::JAL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5056 /* jal */, Mips::JAL, Convert__JumpTarget1_0, Feature_HasStdEnc, { MCK_JumpTarget }, },
  { 5056 /* jal */, Mips::JalTwoReg, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5060 /* jalr */, Mips::JALR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips|Feature_NotMips32r6, { MCK_GPR32AsmReg }, },
  { 5060 /* jalr */, Mips::JALRC16_MMR6, Convert__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 5060 /* jalr */, Mips::JALR, Convert__regRA__GPR32AsmReg1_0, Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5060 /* jalr */, Mips::JALR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5060 /* jalr */, Mips::JALR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5065 /* jalr.hb */, Mips::JALR_HB, Convert__regRA__GPR32AsmReg1_0, Feature_HasMips32, { MCK_GPR32AsmReg }, },
  { 5065 /* jalr.hb */, Mips::JALR_HB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5073 /* jalrc */, Mips::JumpLinkReg16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5079 /* jalrs */, Mips::JALRS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5085 /* jalrs16 */, Mips::JALRS16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5093 /* jals */, Mips::JALS_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 5098 /* jalx */, Mips::JALX, Convert__JumpTarget1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_JumpTarget }, },
  { 5098 /* jalx */, Mips::JALX_MM, Convert__JumpTarget1_0, Feature_InMicroMips, { MCK_JumpTarget }, },
  { 5103 /* jialc */, Mips::JIALC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5103 /* jialc */, Mips::JIALC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5109 /* jic */, Mips::JIC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5109 /* jic */, Mips::JIC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5113 /* jr */, Mips::JrRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5113 /* jr */, Mips::JR, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 5113 /* jr */, Mips::JR_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5113 /* jr */, Mips::JALR, Convert__regZERO__GPR32AsmReg1_0, Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 5113 /* jr */, Mips::JALR64, Convert__regZERO_64__GPR64AsmReg1_0, Feature_HasMips64r6, { MCK_GPR64AsmReg }, },
  { 5116 /* jr.hb */, Mips::JR_HB, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 5116 /* jr.hb */, Mips::JR_HB_R6, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg }, },
  { 5122 /* jr16 */, Mips::JR16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5127 /* jraddiusp */, Mips::JRADDIUSP, Convert__UImm5Lsl21_0, Feature_InMicroMips, { MCK_UImm5Lsl2 }, },
  { 5137 /* jrc */, Mips::JrcRx16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5137 /* jrc */, Mips::JrcRa16, Convert_NoOperands, Feature_InMips16Mode, { MCK_CPURAReg }, },
  { 5137 /* jrc */, Mips::JRC16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5141 /* jrc16 */, Mips::JRC16_MMR6, Convert__GPR32AsmReg1_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg }, },
  { 5147 /* jrcaddiusp */, Mips::JRCADDIUSP_MMR6, Convert__UImm5Lsl21_0, Feature_HasMicroMips32r6, { MCK_UImm5Lsl2 }, },
  { 5158 /* la */, Mips::LoadAddrImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5158 /* la */, Mips::LoadAddrReg32, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5161 /* lb */, Mips::LB_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5161 /* lb */, Mips::LB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5161 /* lb */, Mips::LB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5164 /* lbe */, Mips::LBE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5164 /* lbe */, Mips::LBE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5164 /* lbe */, Mips::LBE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5168 /* lbu */, Mips::LBU_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5168 /* lbu */, Mips::LBu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5168 /* lbu */, Mips::LBu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5172 /* lbu16 */, Mips::LBU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5178 /* lbue */, Mips::LBuE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5178 /* lbue */, Mips::LBUE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5178 /* lbue */, Mips::LBuE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5183 /* lbux */, Mips::LBUX_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5183 /* lbux */, Mips::LBUX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5188 /* ld */, Mips::LD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5191 /* ld.b */, Mips::LD_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5196 /* ld.d */, Mips::LD_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5201 /* ld.h */, Mips::LD_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5206 /* ld.w */, Mips::LD_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 5211 /* ldc1 */, Mips::LDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 5211 /* ldc1 */, Mips::LDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 5216 /* ldc2 */, Mips::LDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5216 /* ldc2 */, Mips::LDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5221 /* ldc3 */, Mips::LDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5226 /* ldi.b */, Mips::LDI_B, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5232 /* ldi.d */, Mips::LDI_D, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5238 /* ldi.h */, Mips::LDI_H, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5244 /* ldi.w */, Mips::LDI_W, Convert__MSA128AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Imm }, },
  { 5250 /* ldl */, Mips::LDL, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5254 /* ldpc */, Mips::LDPC, Convert__GPR64AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips64r6, { MCK_GPR64AsmReg, MCK_JumpTarget }, },
  { 5259 /* ldr */, Mips::LDR, Convert__GPR64AsmReg1_0__Mem2_1__Tie0, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5263 /* ldxc1 */, Mips::LDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5263 /* ldxc1 */, Mips::LDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5269 /* lh */, Mips::LH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5269 /* lh */, Mips::LH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5272 /* lhe */, Mips::LHE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5272 /* lhe */, Mips::LHE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5276 /* lhu */, Mips::LHu, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5276 /* lhu */, Mips::LHu_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5280 /* lhu16 */, Mips::LHU16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5286 /* lhue */, Mips::LHuE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5286 /* lhue */, Mips::LHuE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5291 /* lhx */, Mips::LHX_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5291 /* lhx */, Mips::LHX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5295 /* li */, Mips::LiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5295 /* li */, Mips::LoadImm32, Convert__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5295 /* li */, Mips::LiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5298 /* li16 */, Mips::LI16_MM, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 5298 /* li16 */, Mips::LI16_MMR6, Convert__GPRMM16AsmReg1_0__Imm1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 5303 /* ll */, Mips::LL_R6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5303 /* ll */, Mips::LL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5303 /* ll */, Mips::LL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5306 /* lld */, Mips::LLD_R6, Convert__GPR64AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm9 }, },
  { 5306 /* lld */, Mips::LLD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5310 /* lle */, Mips::LLE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5310 /* lle */, Mips::LLE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5310 /* lle */, Mips::LLE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5314 /* lsa */, Mips::LSA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_1 }, },
  { 5314 /* lsa */, Mips::LSA_MMR6, Convert__GPR32AsmReg1_2__GPR32AsmReg1_1__GPR32AsmReg1_0__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_1 }, },
  { 5314 /* lsa */, Mips::LSA_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__ConstantUImm2_11_3, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm2_1 }, },
  { 5318 /* lui */, Mips::LUI_MMR6, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5318 /* lui */, Mips::LUi, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5318 /* lui */, Mips::LUi_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 5322 /* luxc1 */, Mips::LUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5322 /* luxc1 */, Mips::LUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5328 /* lw */, Mips::LwRxPcTcpX16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 5328 /* lw */, Mips::LWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 5328 /* lw */, Mips::LW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5328 /* lw */, Mips::LW_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5328 /* lw */, Mips::LW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5328 /* lw */, Mips::LWGP_MM, Convert__GPRMM16AsmReg1_0__Reg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_CPU16Regs, MCK_Imm }, },
  { 5328 /* lw */, Mips::LwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 5328 /* lw */, Mips::LwRxPcTcp16, Convert__Reg1_0__Imm1_1__imm_95_0, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 5331 /* lw16 */, Mips::LW16_MM, Convert__GPRMM16AsmReg1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_MicroMipsMem }, },
  { 5336 /* lwc1 */, Mips::LWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 5341 /* lwc2 */, Mips::LWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 5341 /* lwc2 */, Mips::LWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 5346 /* lwc3 */, Mips::LWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 5351 /* lwe */, Mips::LWE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5351 /* lwe */, Mips::LWE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5351 /* lwe */, Mips::LWE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5355 /* lwl */, Mips::LWL, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5355 /* lwl */, Mips::LWL_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5359 /* lwle */, Mips::LWLE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5359 /* lwle */, Mips::LWLE_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5364 /* lwm */, Mips::LWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5368 /* lwm16 */, Mips::LWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips|Feature_NotMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 5368 /* lwm16 */, Mips::LWM16_MMR6, Convert__RegList161_0__MemOffsetUimm42_1, Feature_HasMicroMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 5374 /* lwm32 */, Mips::LWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 5380 /* lwp */, Mips::LWP_MM, Convert__RegPair2_0__Mem2_1, Feature_InMicroMips, { MCK_RegPair, MCK_Mem }, },
  { 5384 /* lwpc */, Mips::LWPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5384 /* lwpc */, Mips::LWPC_MMR6, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5389 /* lwr */, Mips::LWR, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5389 /* lwr */, Mips::LWR_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5393 /* lwre */, Mips::LWRE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 5393 /* lwre */, Mips::LWRE_MM, Convert__GPR32AsmReg1_0__Mem2_1__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5398 /* lwu */, Mips::LWU_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 5398 /* lwu */, Mips::LWu, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 5402 /* lwupc */, Mips::LWUPC, Convert__GPR32AsmReg1_0__JumpTarget1_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_JumpTarget }, },
  { 5408 /* lwx */, Mips::LWX_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5408 /* lwx */, Mips::LWX, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5412 /* lwxc1 */, Mips::LWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5418 /* lwxs */, Mips::LWXS_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 5423 /* madd */, Mips::MADD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5423 /* madd */, Mips::MADD_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5423 /* madd */, Mips::MADD_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5423 /* madd */, Mips::MADD_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5428 /* madd.d */, Mips::MADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 5428 /* madd.d */, Mips::MADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5435 /* madd.s */, Mips::MADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5442 /* madd_q.h */, Mips::MADD_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5451 /* madd_q.w */, Mips::MADD_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5460 /* maddf.d */, Mips::MADDF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5460 /* maddf.d */, Mips::MADDF_D_MMR6, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5468 /* maddf.s */, Mips::MADDF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5468 /* maddf.s */, Mips::MADDF_S_MMR6, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5476 /* maddr_q.h */, Mips::MADDR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5486 /* maddr_q.w */, Mips::MADDR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5496 /* maddu */, Mips::MADDU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5496 /* maddu */, Mips::MADDU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5496 /* maddu */, Mips::MADDU_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5496 /* maddu */, Mips::MADDU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5502 /* maddv.b */, Mips::MADDV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5510 /* maddv.d */, Mips::MADDV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5518 /* maddv.h */, Mips::MADDV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5526 /* maddv.w */, Mips::MADDV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5534 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5534 /* maq_s.w.phl */, Mips::MAQ_S_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5546 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5546 /* maq_s.w.phr */, Mips::MAQ_S_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5558 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5558 /* maq_sa.w.phl */, Mips::MAQ_SA_W_PHL, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5571 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5571 /* maq_sa.w.phr */, Mips::MAQ_SA_W_PHR, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 5584 /* max.d */, Mips::MAX_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5584 /* max.d */, Mips::MAX_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5590 /* max.s */, Mips::MAX_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5590 /* max.s */, Mips::MAX_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5596 /* max_a.b */, Mips::MAX_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5604 /* max_a.d */, Mips::MAX_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5612 /* max_a.h */, Mips::MAX_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5620 /* max_a.w */, Mips::MAX_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5628 /* max_s.b */, Mips::MAX_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5636 /* max_s.d */, Mips::MAX_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5644 /* max_s.h */, Mips::MAX_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5652 /* max_s.w */, Mips::MAX_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5660 /* max_u.b */, Mips::MAX_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5668 /* max_u.d */, Mips::MAX_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5676 /* max_u.h */, Mips::MAX_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5684 /* max_u.w */, Mips::MAX_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5692 /* maxa.d */, Mips::MAXA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5692 /* maxa.d */, Mips::MAXA_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5699 /* maxa.s */, Mips::MAXA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5699 /* maxa.s */, Mips::MAXA_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5706 /* maxi_s.b */, Mips::MAXI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5715 /* maxi_s.d */, Mips::MAXI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5724 /* maxi_s.h */, Mips::MAXI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5733 /* maxi_s.w */, Mips::MAXI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5742 /* maxi_u.b */, Mips::MAXI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5751 /* maxi_u.d */, Mips::MAXI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5760 /* maxi_u.h */, Mips::MAXI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5769 /* maxi_u.w */, Mips::MAXI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5778 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 5778 /* mfc0 */, Mips::MFC0, Convert__GPR32AsmReg1_0__COP0AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 5783 /* mfc1 */, Mips::MFC1, Convert__GPR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 5788 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__COP2AsmReg1_1__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 5788 /* mfc2 */, Mips::MFC2, Convert__GPR32AsmReg1_0__COP2AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 5793 /* mfhc1 */, Mips::MFHC1_D32, Convert__GPR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 5793 /* mfhc1 */, Mips::MFHC1_D64, Convert__GPR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 5799 /* mfhi */, Mips::Mfhi16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5799 /* mfhi */, Mips::MFHI, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5799 /* mfhi */, Mips::MFHI16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5799 /* mfhi */, Mips::MFHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5799 /* mfhi */, Mips::MFHI_DSP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5799 /* mfhi */, Mips::MFHI_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5804 /* mflo */, Mips::Mflo16, Convert__Reg1_0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 5804 /* mflo */, Mips::MFLO, Convert__GPR32AsmReg1_0, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 5804 /* mflo */, Mips::MFLO16_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5804 /* mflo */, Mips::MFLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 5804 /* mflo */, Mips::MFLO_DSP_MM, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5804 /* mflo */, Mips::MFLO_DSP, Convert__GPR32AsmReg1_0__ACC64DSPAsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 5809 /* min.d */, Mips::MIN_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5809 /* min.d */, Mips::MIN_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5815 /* min.s */, Mips::MIN_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5815 /* min.s */, Mips::MIN_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5821 /* min_a.b */, Mips::MIN_A_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5829 /* min_a.d */, Mips::MIN_A_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5837 /* min_a.h */, Mips::MIN_A_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5845 /* min_a.w */, Mips::MIN_A_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5853 /* min_s.b */, Mips::MIN_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5861 /* min_s.d */, Mips::MIN_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5869 /* min_s.h */, Mips::MIN_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5877 /* min_s.w */, Mips::MIN_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5885 /* min_u.b */, Mips::MIN_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5893 /* min_u.d */, Mips::MIN_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5901 /* min_u.h */, Mips::MIN_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5909 /* min_u.w */, Mips::MIN_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 5917 /* mina.d */, Mips::MINA_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5917 /* mina.d */, Mips::MINA_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 5924 /* mina.s */, Mips::MINA_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5924 /* mina.s */, Mips::MINA_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 5931 /* mini_s.b */, Mips::MINI_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5940 /* mini_s.d */, Mips::MINI_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5949 /* mini_s.h */, Mips::MINI_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5958 /* mini_s.w */, Mips::MINI_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5967 /* mini_u.b */, Mips::MINI_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5976 /* mini_u.d */, Mips::MINI_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5985 /* mini_u.h */, Mips::MINI_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 5994 /* mini_u.w */, Mips::MINI_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6003 /* mod */, Mips::MOD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6003 /* mod */, Mips::MOD, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6003 /* mod */, Mips::MOD_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6007 /* mod_s.b */, Mips::MOD_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6015 /* mod_s.d */, Mips::MOD_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6023 /* mod_s.h */, Mips::MOD_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6031 /* mod_s.w */, Mips::MOD_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6039 /* mod_u.b */, Mips::MOD_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6047 /* mod_u.d */, Mips::MOD_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6055 /* mod_u.h */, Mips::MOD_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6063 /* mod_u.w */, Mips::MOD_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6071 /* modsub */, Mips::MODSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6078 /* modu */, Mips::MODU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6078 /* modu */, Mips::MODU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6078 /* modu */, Mips::MODU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6083 /* mov.d */, Mips::FMOV_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6083 /* mov.d */, Mips::FMOV_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6083 /* mov.d */, Mips::FMOV_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6089 /* mov.s */, Mips::FMOV_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6089 /* mov.s */, Mips::FMOV_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6095 /* move */, Mips::MoveR3216, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_DSPR }, },
  { 6095 /* move */, Mips::Move32R16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_DSPR, MCK_CPU16Regs }, },
  { 6095 /* move */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6095 /* move */, Mips::ADDu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, Feature_IsGP32bit|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6095 /* move */, Mips::MOVE16_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6095 /* move */, Mips::OR64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 6095 /* move */, Mips::DADDu, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__regZERO_64, Feature_IsGP64bit, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 6100 /* move.v */, Mips::MOVE_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6107 /* move16 */, Mips::MOVE16_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6114 /* movep */, Mips::MOVEP_MM, Convert__MovePRegPair2_0__GPRMM16AsmRegMoveP1_1__GPRMM16AsmRegMoveP1_2, Feature_InMicroMips, { MCK_MovePRegPair, MCK_GPRMM16AsmRegMoveP, MCK_GPRMM16AsmRegMoveP }, },
  { 6120 /* movf */, Mips::MOVF_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6120 /* movf */, Mips::MOVF_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6125 /* movf.d */, Mips::MOVF_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 6125 /* movf.d */, Mips::MOVF_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 6132 /* movf.s */, Mips::MOVF_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 6139 /* movn */, Mips::MOVN_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6139 /* movn */, Mips::MOVN_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6144 /* movn.d */, Mips::MOVN_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6144 /* movn.d */, Mips::MOVN_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6151 /* movn.s */, Mips::MOVN_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6158 /* movt */, Mips::MOVT_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6158 /* movt */, Mips::MOVT_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_FCCAsmReg }, },
  { 6163 /* movt.d */, Mips::MOVT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_FCCAsmReg }, },
  { 6163 /* movt.d */, Mips::MOVT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FCCAsmReg }, },
  { 6170 /* movt.s */, Mips::MOVT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FCCAsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FCCAsmReg }, },
  { 6177 /* movz */, Mips::MOVZ_I_I, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6177 /* movz */, Mips::MOVZ_I_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6182 /* movz.d */, Mips::MOVZ_I_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6182 /* movz.d */, Mips::MOVZ_I_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_GPR32AsmReg }, },
  { 6189 /* movz.s */, Mips::MOVZ_I_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_GPR32AsmReg }, },
  { 6196 /* msub */, Mips::MSUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6196 /* msub */, Mips::MSUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6196 /* msub */, Mips::MSUB_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6196 /* msub */, Mips::MSUB_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6201 /* msub.d */, Mips::MSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6201 /* msub.d */, Mips::MSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6208 /* msub.s */, Mips::MSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6215 /* msub_q.h */, Mips::MSUB_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6224 /* msub_q.w */, Mips::MSUB_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6233 /* msubf.d */, Mips::MSUBF_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6233 /* msubf.d */, Mips::MSUBF_D_MMR6, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6241 /* msubf.s */, Mips::MSUBF_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6241 /* msubf.s */, Mips::MSUBF_S_MMR6, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6249 /* msubr_q.h */, Mips::MSUBR_Q_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6259 /* msubr_q.w */, Mips::MSUBR_Q_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6269 /* msubu */, Mips::MSUBU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6269 /* msubu */, Mips::MSUBU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6269 /* msubu */, Mips::MSUBU_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6269 /* msubu */, Mips::MSUBU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6275 /* msubv.b */, Mips::MSUBV_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6283 /* msubv.d */, Mips::MSUBV_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6291 /* msubv.h */, Mips::MSUBV_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6299 /* msubv.w */, Mips::MSUBV_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6307 /* mtc0 */, Mips::MTC0, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP0AsmReg }, },
  { 6307 /* mtc0 */, Mips::MTC0, Convert__COP0AsmReg1_1__GPR32AsmReg1_0__Imm1_2, Feature_HasStdEnc|Feature_HasMips32, { MCK_GPR32AsmReg, MCK_COP0AsmReg, MCK_Imm }, },
  { 6312 /* mtc1 */, Mips::MTC1, Convert__FGR32AsmReg1_1__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR32AsmReg }, },
  { 6317 /* mtc2 */, Mips::MTC2, Convert__COP2AsmReg1_1__GPR32AsmReg1_0__imm_95_0, 0, { MCK_GPR32AsmReg, MCK_COP2AsmReg }, },
  { 6317 /* mtc2 */, Mips::MTC2, Convert__COP2AsmReg1_1__GPR32AsmReg1_0__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_COP2AsmReg, MCK_Imm }, },
  { 6322 /* mthc1 */, Mips::MTHC1_D32, Convert__AFGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_AFGR64AsmReg }, },
  { 6322 /* mthc1 */, Mips::MTHC1_D64, Convert__FGR64AsmReg1_1__Tie0__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, { MCK_GPR32AsmReg, MCK_FGR64AsmReg }, },
  { 6328 /* mthi */, Mips::MTHI, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6328 /* mthi */, Mips::MTHI_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6328 /* mthi */, Mips::MTHI_DSP_MM, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6328 /* mthi */, Mips::MTHI_DSP, Convert__HI32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_HI32DSPAsmReg }, },
  { 6333 /* mthlip */, Mips::MTHLIP_MM, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6333 /* mthlip */, Mips::MTHLIP, Convert__ACC64DSPAsmReg1_1__GPR32AsmReg1_0__Tie0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_ACC64DSPAsmReg }, },
  { 6340 /* mtlo */, Mips::MTLO, Convert__GPR32AsmReg1_0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg }, },
  { 6340 /* mtlo */, Mips::MTLO_MM, Convert__GPR32AsmReg1_0, Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 6340 /* mtlo */, Mips::MTLO_DSP_MM, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6340 /* mtlo */, Mips::MTLO_DSP, Convert__LO32DSPAsmReg1_1__GPR32AsmReg1_0, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_LO32DSPAsmReg }, },
  { 6345 /* mtm0 */, Mips::MTM0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6350 /* mtm1 */, Mips::MTM1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6355 /* mtm2 */, Mips::MTM2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6360 /* mtp0 */, Mips::MTP0, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6365 /* mtp1 */, Mips::MTP1, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6370 /* mtp2 */, Mips::MTP2, Convert__GPR64AsmReg1_0, Feature_HasCnMips, { MCK_GPR64AsmReg }, },
  { 6375 /* muh */, Mips::MUH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6375 /* muh */, Mips::MUH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6375 /* muh */, Mips::MUH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6379 /* muhu */, Mips::MUHU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6379 /* muhu */, Mips::MUHU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6379 /* muhu */, Mips::MUHU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL_R6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6384 /* mul */, Mips::MUL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6388 /* mul.d */, Mips::FMUL_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6388 /* mul.d */, Mips::FMUL_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6388 /* mul.d */, Mips::FMUL_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6394 /* mul.ph */, Mips::MUL_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6394 /* mul.ph */, Mips::MUL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6401 /* mul.s */, Mips::FMUL_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6401 /* mul.s */, Mips::FMUL_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6407 /* mul_q.h */, Mips::MUL_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6415 /* mul_q.w */, Mips::MUL_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6423 /* mul_s.ph */, Mips::MUL_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6423 /* mul_s.ph */, Mips::MUL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6432 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6432 /* muleq_s.w.phl */, Mips::MULEQ_S_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6446 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6446 /* muleq_s.w.phr */, Mips::MULEQ_S_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6460 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6460 /* muleu_s.ph.qbl */, Mips::MULEU_S_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6475 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6475 /* muleu_s.ph.qbr */, Mips::MULEU_S_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6490 /* mulq_rs.ph */, Mips::MULQ_RS_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6490 /* mulq_rs.ph */, Mips::MULQ_RS_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6501 /* mulq_rs.w */, Mips::MULQ_RS_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6501 /* mulq_rs.w */, Mips::MULQ_RS_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6511 /* mulq_s.ph */, Mips::MULQ_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6511 /* mulq_s.ph */, Mips::MULQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6521 /* mulq_s.w */, Mips::MULQ_S_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6521 /* mulq_s.w */, Mips::MULQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6530 /* mulr_q.h */, Mips::MULR_Q_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6539 /* mulr_q.w */, Mips::MULR_Q_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6548 /* mulsa.w.ph */, Mips::MULSA_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSPR2, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6559 /* mulsaq_s.w.ph */, Mips::MULSAQ_S_W_PH, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6573 /* mult */, Mips::MULT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6573 /* mult */, Mips::MULT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6573 /* mult */, Mips::MULT_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6573 /* mult */, Mips::MULT_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6578 /* multu */, Mips::MULTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6578 /* multu */, Mips::MULTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6578 /* multu */, Mips::MULTU_DSP_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6578 /* multu */, Mips::MULTU_DSP, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6584 /* mulu */, Mips::MULU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6584 /* mulu */, Mips::MULU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6584 /* mulu */, Mips::MULU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6589 /* mulv.b */, Mips::MULV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6596 /* mulv.d */, Mips::MULV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6603 /* mulv.h */, Mips::MULV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6610 /* mulv.w */, Mips::MULV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6617 /* neg */, Mips::NegRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6617 /* neg */, Mips::SUB, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6621 /* neg.d */, Mips::FNEG_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6621 /* neg.d */, Mips::FNEG_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6621 /* neg.d */, Mips::FNEG_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6627 /* neg.s */, Mips::FNEG_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6627 /* neg.s */, Mips::FNEG_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6633 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_0, 0, { MCK_GPR32AsmReg }, },
  { 6633 /* negu */, Mips::SUBu, Convert__GPR32AsmReg1_0__regZERO__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6638 /* nloc.b */, Mips::NLOC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6645 /* nloc.d */, Mips::NLOC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6652 /* nloc.h */, Mips::NLOC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6659 /* nloc.w */, Mips::NLOC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6666 /* nlzc.b */, Mips::NLZC_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6673 /* nlzc.d */, Mips::NLZC_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6680 /* nlzc.h */, Mips::NLZC_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6687 /* nlzc.w */, Mips::NLZC_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6694 /* nmadd.d */, Mips::NMADD_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6694 /* nmadd.d */, Mips::NMADD_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6702 /* nmadd.s */, Mips::NMADD_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6710 /* nmsub.d */, Mips::NMSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2__AFGR64AsmReg1_3, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 6710 /* nmsub.d */, Mips::NMSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2__FGR64AsmReg1_3, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 6718 /* nmsub.s */, Mips::NMSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2__FGR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 6726 /* nop */, Mips::SLL_MM, Convert__regZERO__regZERO__imm_95_0, Feature_InMicroMips, {  }, },
  { 6726 /* nop */, Mips::MOVE16_MM, Convert__regZERO__regZERO, Feature_InMicroMips, {  }, },
  { 6726 /* nop */, Mips::SLL_MMR6, Convert__regZERO__regZERO__imm_95_0, Feature_HasMicroMips32r6, {  }, },
  { 6726 /* nop */, Mips::SLL, Convert__regZERO__regZERO__imm_95_0, Feature_NotInMicroMips, {  }, },
  { 6730 /* nor */, Mips::NOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6730 /* nor */, Mips::NOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6730 /* nor */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6730 /* nor */, Mips::NOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6730 /* nor */, Mips::NORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6734 /* nor.v */, Mips::NOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6740 /* nori.b */, Mips::NORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6747 /* not */, Mips::NotRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6747 /* not */, Mips::NOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__regZERO, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6751 /* not16 */, Mips::NOT16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6751 /* not16 */, Mips::NOT16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6757 /* or */, Mips::OrRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 6757 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6757 /* or */, Mips::OR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6757 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6757 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6757 /* or */, Mips::OR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6757 /* or */, Mips::OR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6757 /* or */, Mips::OR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6757 /* or */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6760 /* or.v */, Mips::OR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6765 /* or16 */, Mips::OR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6765 /* or16 */, Mips::OR16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 6770 /* ori */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6770 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6770 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 6770 /* ori */, Mips::ORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6770 /* ori */, Mips::ORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6770 /* ori */, Mips::ORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 6774 /* ori.b */, Mips::ORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 6780 /* packrl.ph */, Mips::PACKRL_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6780 /* packrl.ph */, Mips::PACKRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6790 /* pause */, Mips::PAUSE, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMips32r2, {  }, },
  { 6790 /* pause */, Mips::PAUSE_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 6790 /* pause */, Mips::PAUSE_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 6796 /* pckev.b */, Mips::PCKEV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6804 /* pckev.d */, Mips::PCKEV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6812 /* pckev.h */, Mips::PCKEV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6820 /* pckev.w */, Mips::PCKEV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6828 /* pckod.b */, Mips::PCKOD_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6836 /* pckod.d */, Mips::PCKOD_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6844 /* pckod.h */, Mips::PCKOD_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6852 /* pckod.w */, Mips::PCKOD_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6860 /* pcnt.b */, Mips::PCNT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6867 /* pcnt.d */, Mips::PCNT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6874 /* pcnt.h */, Mips::PCNT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6881 /* pcnt.w */, Mips::PCNT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 6888 /* pick.ph */, Mips::PICK_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6888 /* pick.ph */, Mips::PICK_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6896 /* pick.qb */, Mips::PICK_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6896 /* pick.qb */, Mips::PICK_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6904 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0, Feature_HasCnMips, { MCK_GPR32AsmReg }, },
  { 6904 /* pop */, Mips::POP, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasCnMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6908 /* preceq.w.phl */, Mips::PRECEQ_W_PHL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6908 /* preceq.w.phl */, Mips::PRECEQ_W_PHL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6921 /* preceq.w.phr */, Mips::PRECEQ_W_PHR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6921 /* preceq.w.phr */, Mips::PRECEQ_W_PHR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6934 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6934 /* precequ.ph.qbl */, Mips::PRECEQU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6949 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6949 /* precequ.ph.qbla */, Mips::PRECEQU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6965 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6965 /* precequ.ph.qbr */, Mips::PRECEQU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6980 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6980 /* precequ.ph.qbra */, Mips::PRECEQU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6996 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 6996 /* preceu.ph.qbl */, Mips::PRECEU_PH_QBL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7010 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7010 /* preceu.ph.qbla */, Mips::PRECEU_PH_QBLA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7025 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7025 /* preceu.ph.qbr */, Mips::PRECEU_PH_QBR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7039 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7039 /* preceu.ph.qbra */, Mips::PRECEU_PH_QBRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7054 /* precr.qb.ph */, Mips::PRECR_QB_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7054 /* precr.qb.ph */, Mips::PRECR_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7066 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7066 /* precr_sra.ph.w */, Mips::PRECR_SRA_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7081 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7081 /* precr_sra_r.ph.w */, Mips::PRECR_SRA_R_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7098 /* precrq.ph.w */, Mips::PRECRQ_PH_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7098 /* precrq.ph.w */, Mips::PRECRQ_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7110 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7110 /* precrq.qb.ph */, Mips::PRECRQ_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7123 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7123 /* precrq_rs.ph.w */, Mips::PRECRQ_RS_PH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7138 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7138 /* precrqu_s.qb.ph */, Mips::PRECRQU_S_QB_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7154 /* pref */, Mips::PREF_R6, Convert__MemOffsetSimm92_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_ConstantUImm5_0, MCK_MemOffsetSimm9 }, },
  { 7154 /* pref */, Mips::PREF, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7154 /* pref */, Mips::PREF_MMR6, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7154 /* pref */, Mips::PREF_MM, Convert__Mem2_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7159 /* prefe */, Mips::PREFE, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasEVA, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7159 /* prefe */, Mips::PREFE_MMR6, Convert__Mem2_1__ConstantUImm5_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7159 /* prefe */, Mips::PREFE_MM, Convert__Mem2_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_Mem }, },
  { 7165 /* prefx */, Mips::PREFX_MM, Convert__GPR32AsmReg1_3__GPR32AsmReg1_1__ConstantUImm5_01_0, Feature_InMicroMips, { MCK_ConstantUImm5_0, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7171 /* prepend */, Mips::PREPEND_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7171 /* prepend */, Mips::PREPEND, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2__Tie0, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7179 /* raddu.w.qb */, Mips::RADDU_W_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7179 /* raddu.w.qb */, Mips::RADDU_W_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7190 /* rddsp */, Mips::RDDSP_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7190 /* rddsp */, Mips::RDDSP, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7196 /* rdhwr */, Mips::RDHWR_MM, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7196 /* rdhwr */, Mips::RDHWR, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7196 /* rdhwr */, Mips::RDHWR_MMR6, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__imm_95_0, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg }, },
  { 7196 /* rdhwr */, Mips::RDHWR_MMR6, Convert__GPR32AsmReg1_0__HWRegsAsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_HWRegsAsmReg, MCK_ConstantUImm3_0 }, },
  { 7202 /* rdpgpr */, Mips::RDPGPR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7209 /* recip.d */, Mips::RECIP_D_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7217 /* recip.s */, Mips::RECIP_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7225 /* repl.ph */, Mips::REPL_PH_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7225 /* repl.ph */, Mips::REPL_PH, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7233 /* repl.qb */, Mips::REPL_QB_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7233 /* repl.qb */, Mips::REPL_QB, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7241 /* replv.ph */, Mips::REPLV_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7241 /* replv.ph */, Mips::REPLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7250 /* replv.qb */, Mips::REPLV_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7250 /* replv.qb */, Mips::REPLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7259 /* rint.d */, Mips::RINT_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7259 /* rint.d */, Mips::RINT_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7266 /* rint.s */, Mips::RINT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7266 /* rint.s */, Mips::RINT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7273 /* rol */, Mips::ROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7273 /* rol */, Mips::ROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7273 /* rol */, Mips::ROL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7273 /* rol */, Mips::ROLImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7277 /* ror */, Mips::ROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7277 /* ror */, Mips::RORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 7277 /* ror */, Mips::ROR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7277 /* ror */, Mips::RORImm, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7281 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7281 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7281 /* rotr */, Mips::ROTR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7281 /* rotr */, Mips::ROTR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7286 /* rotrv */, Mips::ROTRV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7286 /* rotrv */, Mips::ROTRV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7292 /* round.l.d */, Mips::ROUND_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7292 /* round.l.d */, Mips::ROUND_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7302 /* round.l.s */, Mips::ROUND_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 7302 /* round.l.s */, Mips::ROUND_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 7312 /* round.w.d */, Mips::ROUND_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 7312 /* round.w.d */, Mips::ROUND_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 7312 /* round.w.d */, Mips::ROUND_W_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7322 /* round.w.s */, Mips::ROUND_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7322 /* round.w.s */, Mips::ROUND_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7332 /* rsqrt.d */, Mips::RSQRT_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 7340 /* rsqrt.s */, Mips::RSQRT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7348 /* sat_s.b */, Mips::SAT_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 7356 /* sat_s.d */, Mips::SAT_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 7364 /* sat_s.h */, Mips::SAT_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 7372 /* sat_s.w */, Mips::SAT_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 7380 /* sat_u.b */, Mips::SAT_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 7388 /* sat_u.d */, Mips::SAT_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 7396 /* sat_u.h */, Mips::SAT_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 7404 /* sat_u.w */, Mips::SAT_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 7412 /* sb */, Mips::SB_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7412 /* sb */, Mips::SB, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7412 /* sb */, Mips::SB_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7412 /* sb */, Mips::SbRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7415 /* sb16 */, Mips::SB16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7415 /* sb16 */, Mips::SB16_MMR6, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7420 /* sbe */, Mips::SBE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7420 /* sbe */, Mips::SBE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7420 /* sbe */, Mips::SBE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7424 /* sc */, Mips::SC_R6, Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7424 /* sc */, Mips::SC, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7424 /* sc */, Mips::SC_MM, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7427 /* scd */, Mips::SCD_R6, Convert__GPR64AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_MemOffsetSimm9 }, },
  { 7427 /* scd */, Mips::SCD, Convert__GPR64AsmReg1_0__Tie0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7431 /* sce */, Mips::SCE, Convert__GPR32AsmReg1_0__Tie0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7431 /* sce */, Mips::SCE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7431 /* sce */, Mips::SCE_MM, Convert__GPR32AsmReg1_0__Tie0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7435 /* sd */, Mips::SD, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7438 /* sdbbp */, Mips::SDBBP, Convert__imm_95_0, Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, {  }, },
  { 7438 /* sdbbp */, Mips::SDBBP_R6, Convert__imm_95_0, Feature_HasMips32r6|Feature_NotInMicroMips, {  }, },
  { 7438 /* sdbbp */, Mips::SDBBP_MMR6, Convert__imm_95_0, Feature_HasMicroMips32r6, {  }, },
  { 7438 /* sdbbp */, Mips::SDBBP, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_Imm }, },
  { 7438 /* sdbbp */, Mips::SDBBP_R6, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32r6|Feature_NotInMicroMips, { MCK_Imm }, },
  { 7438 /* sdbbp */, Mips::SDBBP_MMR6, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_Imm }, },
  { 7438 /* sdbbp */, Mips::SDBBP_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 7444 /* sdbbp16 */, Mips::SDBBP16_MM, Convert__ConstantUImm4_01_0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_ConstantUImm4_0 }, },
  { 7444 /* sdbbp16 */, Mips::SDBBP16_MMR6, Convert__ConstantUImm4_01_0, Feature_HasMicroMips32r6, { MCK_ConstantUImm4_0 }, },
  { 7452 /* sdc1 */, Mips::SDC1, Convert__AFGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_Mem }, },
  { 7452 /* sdc1 */, Mips::SDC164, Convert__FGR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_Mem }, },
  { 7457 /* sdc2 */, Mips::SDC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 7457 /* sdc2 */, Mips::SDC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 7462 /* sdc3 */, Mips::SDC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 7467 /* sdl */, Mips::SDL, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7471 /* sdr */, Mips::SDR, Convert__GPR64AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR64AsmReg, MCK_Mem }, },
  { 7475 /* sdxc1 */, Mips::SDXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7475 /* sdxc1 */, Mips::SDXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 7481 /* seb */, Mips::SebRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7481 /* seb */, Mips::SEB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7481 /* seb */, Mips::SEB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7481 /* seb */, Mips::SEB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7485 /* seh */, Mips::SehRx16, Convert__Reg1_0__Tie0, Feature_InMips16Mode, { MCK_CPU16Regs }, },
  { 7485 /* seh */, Mips::SEH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7485 /* seh */, Mips::SEH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7485 /* seh */, Mips::SEH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7489 /* sel.d */, Mips::SEL_D, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7489 /* sel.d */, Mips::SEL_D_MMR6, Convert__FGR64AsmReg1_0__Tie0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7495 /* sel.s */, Mips::SEL_S, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7495 /* sel.s */, Mips::SEL_S_MMR6, Convert__FGR32AsmReg1_0__Tie0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7501 /* seleqz */, Mips::SELEQZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7501 /* seleqz */, Mips::SELEQZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7501 /* seleqz */, Mips::SELEQZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7508 /* seleqz.d */, Mips::SELEQZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7508 /* seleqz.d */, Mips::SELEQZ_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7517 /* seleqz.s */, Mips::SELEQZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7517 /* seleqz.s */, Mips::SELEQZ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7526 /* selnez */, Mips::SELNEZ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7526 /* selnez */, Mips::SELNEZ_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7526 /* selnez */, Mips::SELNEZ64, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7533 /* selnez.d */, Mips::SELNEZ_D, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7533 /* selnez.d */, Mips::SELENZ_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 7542 /* selnez.s */, Mips::SELNEZ_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7542 /* selnez.s */, Mips::SELENZ_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 7551 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7551 /* seq */, Mips::SEQ, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7555 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7555 /* seqi */, Mips::SEQi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7560 /* sh */, Mips::SH_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7560 /* sh */, Mips::SH, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7560 /* sh */, Mips::SH_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7560 /* sh */, Mips::ShRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 7563 /* sh16 */, Mips::SH16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7563 /* sh16 */, Mips::SH16_MMR6, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 7568 /* she */, Mips::SHE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 7568 /* she */, Mips::SHE_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7568 /* she */, Mips::SHE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 7572 /* shf.b */, Mips::SHF_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 7578 /* shf.h */, Mips::SHF_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 7584 /* shf.w */, Mips::SHF_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm8_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm8_0 }, },
  { 7590 /* shilo */, Mips::SHILO_MM, Convert__ACC64DSPAsmReg1_0__ConstantSImm61_1__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_ConstantSImm6 }, },
  { 7590 /* shilo */, Mips::SHILO, Convert__ACC64DSPAsmReg1_0__ConstantSImm61_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_ConstantSImm6 }, },
  { 7596 /* shilov */, Mips::SHILOV_MM, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP|Feature_InMicroMips, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7596 /* shilov */, Mips::SHILOV, Convert__ACC64DSPAsmReg1_0__GPR32AsmReg1_1__Tie0, Feature_HasDSP, { MCK_ACC64DSPAsmReg, MCK_GPR32AsmReg }, },
  { 7603 /* shll.ph */, Mips::SHLL_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7603 /* shll.ph */, Mips::SHLL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7611 /* shll.qb */, Mips::SHLL_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7611 /* shll.qb */, Mips::SHLL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7619 /* shll_s.ph */, Mips::SHLL_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7619 /* shll_s.ph */, Mips::SHLL_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7629 /* shll_s.w */, Mips::SHLL_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7629 /* shll_s.w */, Mips::SHLL_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7638 /* shllv.ph */, Mips::SHLLV_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7638 /* shllv.ph */, Mips::SHLLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7647 /* shllv.qb */, Mips::SHLLV_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7647 /* shllv.qb */, Mips::SHLLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7656 /* shllv_s.ph */, Mips::SHLLV_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7656 /* shllv_s.ph */, Mips::SHLLV_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7667 /* shllv_s.w */, Mips::SHLLV_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7667 /* shllv_s.w */, Mips::SHLLV_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7677 /* shra.ph */, Mips::SHRA_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7677 /* shra.ph */, Mips::SHRA_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7685 /* shra.qb */, Mips::SHRA_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7685 /* shra.qb */, Mips::SHRA_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7693 /* shra_r.ph */, Mips::SHRA_R_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7693 /* shra_r.ph */, Mips::SHRA_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7703 /* shra_r.qb */, Mips::SHRA_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7703 /* shra_r.qb */, Mips::SHRA_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7713 /* shra_r.w */, Mips::SHRA_R_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7713 /* shra_r.w */, Mips::SHRA_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7722 /* shrav.ph */, Mips::SHRAV_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7722 /* shrav.ph */, Mips::SHRAV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7731 /* shrav.qb */, Mips::SHRAV_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7731 /* shrav.qb */, Mips::SHRAV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7740 /* shrav_r.ph */, Mips::SHRAV_R_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7740 /* shrav_r.ph */, Mips::SHRAV_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7751 /* shrav_r.qb */, Mips::SHRAV_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7751 /* shrav_r.qb */, Mips::SHRAV_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7762 /* shrav_r.w */, Mips::SHRAV_R_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7762 /* shrav_r.w */, Mips::SHRAV_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7772 /* shrl.ph */, Mips::SHRL_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7772 /* shrl.ph */, Mips::SHRL_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm4_01_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm4_0 }, },
  { 7780 /* shrl.qb */, Mips::SHRL_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7780 /* shrl.qb */, Mips::SHRL_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm3_01_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm3_0 }, },
  { 7788 /* shrlv.ph */, Mips::SHRLV_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7788 /* shrlv.ph */, Mips::SHRLV_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7797 /* shrlv.qb */, Mips::SHRLV_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7797 /* shrlv.qb */, Mips::SHRLV_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7806 /* sld.b */, Mips::SLD_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7812 /* sld.d */, Mips::SLD_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7818 /* sld.h */, Mips::SLD_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7824 /* sld.w */, Mips::SLD_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7830 /* sldi.b */, Mips::SLDI_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm4_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm4_0, MCK__93_ }, },
  { 7837 /* sldi.d */, Mips::SLDI_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm1_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm1_0, MCK__93_ }, },
  { 7844 /* sldi.h */, Mips::SLDI_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm3_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm3_0, MCK__93_ }, },
  { 7851 /* sldi.w */, Mips::SLDI_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__ConstantUImm2_01_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_ConstantUImm2_0, MCK__93_ }, },
  { 7858 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SLL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SllX16, Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SLL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SLL_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SLL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 7858 /* sll */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7862 /* sll.b */, Mips::SLL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7868 /* sll.d */, Mips::SLL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7874 /* sll.h */, Mips::SLL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7880 /* sll.w */, Mips::SLL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 7886 /* sll16 */, Mips::SLL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7886 /* sll16 */, Mips::SLL16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 7892 /* slli.b */, Mips::SLLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7899 /* slli.d */, Mips::SLLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7906 /* slli.h */, Mips::SLLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7913 /* slli.w */, Mips::SLLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 7920 /* sllv */, Mips::SllvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7920 /* sllv */, Mips::SLLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7920 /* sllv */, Mips::SLLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7925 /* slt */, Mips::SltRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7925 /* slt */, Mips::SLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7925 /* slt */, Mips::SLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7925 /* slt */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7929 /* slti */, Mips::SltiRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7929 /* slti */, Mips::SLTi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7929 /* slti */, Mips::SLTi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7929 /* slti */, Mips::SltiRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7934 /* sltiu */, Mips::SltiuRxImmX16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm }, },
  { 7934 /* sltiu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7934 /* sltiu */, Mips::SLTiu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7934 /* sltiu */, Mips::SltiuRxImm16, Convert__Reg1_0__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__35_, MCK_16, MCK_bit, MCK_inst }, },
  { 7940 /* sltu */, Mips::SltuRxRy16, Convert__Reg1_0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 7940 /* sltu */, Mips::SLTu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7940 /* sltu */, Mips::SLTu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 7940 /* sltu */, Mips::SLTiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 7945 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7945 /* sne */, Mips::SNE, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 7949 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__Imm1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_Imm }, },
  { 7949 /* snei */, Mips::SNEi, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__Imm1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_Imm }, },
  { 7954 /* splat.b */, Mips::SPLAT_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7962 /* splat.d */, Mips::SPLAT_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7970 /* splat.h */, Mips::SPLAT_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7978 /* splat.w */, Mips::SPLAT_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__GPR32AsmReg1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_GPR32AsmReg, MCK__93_ }, },
  { 7986 /* splati.b */, Mips::SPLATI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 7995 /* splati.d */, Mips::SPLATI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 8004 /* splati.h */, Mips::SPLATI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 8013 /* splati.w */, Mips::SPLATI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_3, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK__91_, MCK_Imm, MCK__93_ }, },
  { 8022 /* sqrt.d */, Mips::FSQRT_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8022 /* sqrt.d */, Mips::SQRT_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8022 /* sqrt.d */, Mips::FSQRT_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8029 /* sqrt.s */, Mips::FSQRT_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8029 /* sqrt.s */, Mips::FSQRT_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8029 /* sqrt.s */, Mips::SQRT_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8036 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8036 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8036 /* sra */, Mips::SraX16, Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_ConstantUImm5_0 }, },
  { 8036 /* sra */, Mips::SRA, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8036 /* sra */, Mips::SRA_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8036 /* sra */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8040 /* sra.b */, Mips::SRA_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8046 /* sra.d */, Mips::SRA_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8052 /* sra.h */, Mips::SRA_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8058 /* sra.w */, Mips::SRA_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8064 /* srai.b */, Mips::SRAI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8071 /* srai.d */, Mips::SRAI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8078 /* srai.h */, Mips::SRAI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8085 /* srai.w */, Mips::SRAI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8092 /* srar.b */, Mips::SRAR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8099 /* srar.d */, Mips::SRAR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8106 /* srar.h */, Mips::SRAR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8113 /* srar.w */, Mips::SRAR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8120 /* srari.b */, Mips::SRARI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8128 /* srari.d */, Mips::SRARI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8136 /* srari.h */, Mips::SRARI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8144 /* srari.w */, Mips::SRARI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8152 /* srav */, Mips::SravRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8152 /* srav */, Mips::SRAV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8152 /* srav */, Mips::SRAV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8157 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8157 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__ConstantUImm5_01_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8157 /* srl */, Mips::SrlX16, Convert__Reg1_0__Reg1_1__ConstantUImm5_01_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_ConstantUImm5_0 }, },
  { 8157 /* srl */, Mips::SRL, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8157 /* srl */, Mips::SRL_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__ConstantUImm5_01_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_ConstantUImm5_0 }, },
  { 8157 /* srl */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8161 /* srl.b */, Mips::SRL_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8167 /* srl.d */, Mips::SRL_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8173 /* srl.h */, Mips::SRL_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8179 /* srl.w */, Mips::SRL_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8185 /* srl16 */, Mips::SRL16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 8185 /* srl16 */, Mips::SRL16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Imm1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_Imm }, },
  { 8191 /* srli.b */, Mips::SRLI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8198 /* srli.d */, Mips::SRLI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8205 /* srli.h */, Mips::SRLI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8212 /* srli.w */, Mips::SRLI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8219 /* srlr.b */, Mips::SRLR_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8226 /* srlr.d */, Mips::SRLR_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8233 /* srlr.h */, Mips::SRLR_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8240 /* srlr.w */, Mips::SRLR_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8247 /* srlri.b */, Mips::SRLRI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm3_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm3_0 }, },
  { 8255 /* srlri.d */, Mips::SRLRI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm6_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm6_0 }, },
  { 8263 /* srlri.h */, Mips::SRLRI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm4_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm4_0 }, },
  { 8271 /* srlri.w */, Mips::SRLRI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__ConstantUImm5_01_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_ConstantUImm5_0 }, },
  { 8279 /* srlv */, Mips::SrlvRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8279 /* srlv */, Mips::SRLV, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8279 /* srlv */, Mips::SRLV_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8284 /* ssnop */, Mips::SSNOP_MMR6, Convert_NoOperands, Feature_HasStdEnc|Feature_HasMicroMips32r6, {  }, },
  { 8284 /* ssnop */, Mips::SSNOP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8284 /* ssnop */, Mips::SSNOP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8290 /* st.b */, Mips::ST_B, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8295 /* st.d */, Mips::ST_D, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8300 /* st.h */, Mips::ST_H, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8305 /* st.w */, Mips::ST_W, Convert__MSA128AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_Mem }, },
  { 8310 /* sub */, Mips::SUB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8310 /* sub */, Mips::SUB_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* sub */, Mips::SUB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* sub */, Mips::SUB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8310 /* sub */, Mips::ADDi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8314 /* sub.d */, Mips::FSUB_D32, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_1__AFGR64AsmReg1_2, Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8314 /* sub.d */, Mips::FSUB_D_MMR6, Convert__AFGR64AsmReg1_0__AFGR64AsmReg1_2__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_AFGR64AsmReg, MCK_AFGR64AsmReg }, },
  { 8314 /* sub.d */, Mips::FSUB_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1__FGR64AsmReg1_2, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8320 /* sub.s */, Mips::FSUB_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_2__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8320 /* sub.s */, Mips::FSUB_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1__FGR32AsmReg1_2, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8326 /* subq.ph */, Mips::SUBQ_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8326 /* subq.ph */, Mips::SUBQ_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8334 /* subq_s.ph */, Mips::SUBQ_S_PH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8334 /* subq_s.ph */, Mips::SUBQ_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8344 /* subq_s.w */, Mips::SUBQ_S_W_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8344 /* subq_s.w */, Mips::SUBQ_S_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8353 /* subqh.ph */, Mips::SUBQH_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8353 /* subqh.ph */, Mips::SUBQH_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8362 /* subqh.w */, Mips::SUBQH_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8362 /* subqh.w */, Mips::SUBQH_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8370 /* subqh_r.ph */, Mips::SUBQH_R_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8370 /* subqh_r.ph */, Mips::SUBQH_R_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8381 /* subqh_r.w */, Mips::SUBQH_R_W_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8381 /* subqh_r.w */, Mips::SUBQH_R_W, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8391 /* subs_s.b */, Mips::SUBS_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8400 /* subs_s.d */, Mips::SUBS_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8409 /* subs_s.h */, Mips::SUBS_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8418 /* subs_s.w */, Mips::SUBS_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8427 /* subs_u.b */, Mips::SUBS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8436 /* subs_u.d */, Mips::SUBS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8445 /* subs_u.h */, Mips::SUBS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8454 /* subs_u.w */, Mips::SUBS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8463 /* subsus_u.b */, Mips::SUBSUS_U_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8474 /* subsus_u.d */, Mips::SUBSUS_U_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8485 /* subsus_u.h */, Mips::SUBSUS_U_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8496 /* subsus_u.w */, Mips::SUBSUS_U_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8507 /* subsuu_s.b */, Mips::SUBSUU_S_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8518 /* subsuu_s.d */, Mips::SUBSUU_S_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8529 /* subsuu_s.h */, Mips::SUBSUU_S_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8540 /* subsuu_s.w */, Mips::SUBSUU_S_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8551 /* subu */, Mips::SUBU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8551 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8551 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8551 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__InvNum1_1, 0, { MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8551 /* subu */, Mips::SubuRxRyRz16, Convert__Reg1_0__Reg1_1__Reg1_2, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 8551 /* subu */, Mips::SUBU_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8551 /* subu */, Mips::SUBu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8551 /* subu */, Mips::SUBu_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8551 /* subu */, Mips::ADDiu, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__InvNum1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_InvNum }, },
  { 8556 /* subu.ph */, Mips::SUBU_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8556 /* subu.ph */, Mips::SUBU_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8564 /* subu.qb */, Mips::SUBU_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8564 /* subu.qb */, Mips::SUBU_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8572 /* subu16 */, Mips::SUBU16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8572 /* subu16 */, Mips::SUBU16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__GPRMM16AsmReg1_2, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 8579 /* subu_s.ph */, Mips::SUBU_S_PH_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8579 /* subu_s.ph */, Mips::SUBU_S_PH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8589 /* subu_s.qb */, Mips::SUBU_S_QB_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8589 /* subu_s.qb */, Mips::SUBU_S_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSP, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8599 /* subuh.qb */, Mips::SUBUH_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8599 /* subuh.qb */, Mips::SUBUH_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8608 /* subuh_r.qb */, Mips::SUBUH_R_QB_MMR2, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8608 /* subuh_r.qb */, Mips::SUBUH_R_QB, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasDSPR2, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8619 /* subv.b */, Mips::SUBV_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8626 /* subv.d */, Mips::SUBV_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8633 /* subv.h */, Mips::SUBV_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8640 /* subv.w */, Mips::SUBV_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8647 /* subvi.b */, Mips::SUBVI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8655 /* subvi.d */, Mips::SUBVI_D, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8663 /* subvi.h */, Mips::SUBVI_H, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8671 /* subvi.w */, Mips::SUBVI_W, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
  { 8679 /* suxc1 */, Mips::SUXC1, Convert__AFGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_AFGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8679 /* suxc1 */, Mips::SUXC164, Convert__FGR64AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8685 /* sw */, Mips::SWSP_MM, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 8685 /* sw */, Mips::SWSP_MMR6, Convert__GPR32AsmReg1_0__MicroMipsMemSP2_1, Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MicroMipsMemSP }, },
  { 8685 /* sw */, Mips::SW, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8685 /* sw */, Mips::SW_MMR6, Convert__GPR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8685 /* sw */, Mips::SW_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8685 /* sw */, Mips::SwRxRyOffMemX16, Convert__Reg1_0__Reg1_1__Imm1_2__Reg1_3, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs, MCK_Imm, MCK_CPU16RegsPlusSP }, },
  { 8685 /* sw */, Mips::SwRxSpImmX16, Convert__Reg1_0__Reg1_3__Imm1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_Imm, MCK__40_, MCK_CPUSPReg, MCK__41__59_ }, },
  { 8688 /* sw16 */, Mips::SW16_MM, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_InMicroMips, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 8688 /* sw16 */, Mips::SW16_MMR6, Convert__GPRMM16AsmRegZero1_0__MicroMipsMem2_1, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmRegZero, MCK_MicroMipsMem }, },
  { 8693 /* swc1 */, Mips::SWC1, Convert__FGR32AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_Mem }, },
  { 8698 /* swc2 */, Mips::SWC2_R6, Convert__COP2AsmReg1_0__MemOffsetSimm112_1, Feature_HasStdEnc|Feature_HasMips32r6, { MCK_COP2AsmReg, MCK_MemOffsetSimm11 }, },
  { 8698 /* swc2 */, Mips::SWC2, Convert__COP2AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_COP2AsmReg, MCK_Mem }, },
  { 8703 /* swc3 */, Mips::SWC3, Convert__COP3AsmReg1_0__Mem2_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_COP3AsmReg, MCK_Mem }, },
  { 8708 /* swe */, Mips::SWE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8708 /* swe */, Mips::SWE_MMR6, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8708 /* swe */, Mips::SWE_MM, Convert__GPR32AsmReg1_0__MemOffsetSimm9GPR2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9GPR }, },
  { 8712 /* swl */, Mips::SWL, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8712 /* swl */, Mips::SWL_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8716 /* swle */, Mips::SWLE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8716 /* swle */, Mips::SWLE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8721 /* swm */, Mips::SWM_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8725 /* swm16 */, Mips::SWM16_MM, Convert__RegList161_0__MemOffsetUimm42_1, Feature_InMicroMips|Feature_NotMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 8725 /* swm16 */, Mips::SWM16_MMR6, Convert__RegList161_0__MemOffsetUimm42_1, Feature_HasMicroMips32r6, { MCK_RegList16, MCK_MemOffsetUimm4 }, },
  { 8731 /* swm32 */, Mips::SWM32_MM, Convert__RegList1_0__Mem2_1, Feature_InMicroMips, { MCK_RegList, MCK_Mem }, },
  { 8737 /* swp */, Mips::SWP_MM, Convert__RegPair2_0__Mem2_1, Feature_InMicroMips, { MCK_RegPair, MCK_Mem }, },
  { 8741 /* swr */, Mips::SWR, Convert__GPR32AsmReg1_0__Mem2_1, Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8741 /* swr */, Mips::SWR_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8745 /* swre */, Mips::SWRE, Convert__GPR32AsmReg1_0__MemOffsetSimm92_1__Tie0, Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_MemOffsetSimm9 }, },
  { 8745 /* swre */, Mips::SWRE_MM, Convert__GPR32AsmReg1_0__Mem2_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8750 /* swxc1 */, Mips::SWXC1, Convert__FGR32AsmReg1_0__GPR32AsmReg1_3__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_GPR32AsmReg, MCK__40_, MCK_GPR32AsmReg, MCK__41_ }, },
  { 8756 /* sync */, Mips::SYNC_MMR6, Convert__imm_95_0, Feature_HasMicroMips32r6, {  }, },
  { 8756 /* sync */, Mips::SYNC, Convert__imm_95_0, Feature_HasMips2, {  }, },
  { 8756 /* sync */, Mips::SYNC, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMips32, { MCK_Imm }, },
  { 8756 /* sync */, Mips::SYNC_MMR6, Convert__Imm1_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_Imm }, },
  { 8756 /* sync */, Mips::SYNC_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8761 /* synci */, Mips::SYNCI, Convert__MemOffsetSimm162_0, Feature_HasStdEnc|Feature_HasMips32r2, { MCK_MemOffsetSimm16 }, },
  { 8761 /* synci */, Mips::SYNCI_MMR6, Convert__MemOffsetSimm162_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_MemOffsetSimm16 }, },
  { 8767 /* synciobdma */, Mips::SYNC, Convert__imm_95_2, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8778 /* syncs */, Mips::SYNC, Convert__imm_95_6, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8784 /* syncw */, Mips::SYNC, Convert__imm_95_4, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8790 /* syncws */, Mips::SYNC, Convert__imm_95_5, Feature_HasMips64|Feature_HasCnMips, {  }, },
  { 8797 /* syscall */, Mips::SYSCALL, Convert__imm_95_0, 0, {  }, },
  { 8797 /* syscall */, Mips::SYSCALL, Convert__Imm1_0, Feature_HasStdEnc, { MCK_Imm }, },
  { 8797 /* syscall */, Mips::SYSCALL_MM, Convert__Imm1_0, Feature_InMicroMips, { MCK_Imm }, },
  { 8805 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8805 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8805 /* teq */, Mips::TEQ, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8805 /* teq */, Mips::TEQ_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8809 /* teqi */, Mips::TEQI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8809 /* teqi */, Mips::TEQI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8814 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8814 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8814 /* tge */, Mips::TGE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8814 /* tge */, Mips::TGE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8818 /* tgei */, Mips::TGEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8818 /* tgei */, Mips::TGEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8823 /* tgeiu */, Mips::TGEIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8823 /* tgeiu */, Mips::TGEIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8829 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8829 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8829 /* tgeu */, Mips::TGEU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8829 /* tgeu */, Mips::TGEU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8834 /* tlbinv */, Mips::TLBINV, Convert_NoOperands, Feature_HasStdEnc|Feature_HasEVA, {  }, },
  { 8841 /* tlbinvf */, Mips::TLBINVF, Convert_NoOperands, Feature_HasStdEnc|Feature_HasEVA, {  }, },
  { 8849 /* tlbp */, Mips::TLBP, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8849 /* tlbp */, Mips::TLBP_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8854 /* tlbr */, Mips::TLBR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8854 /* tlbr */, Mips::TLBR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8859 /* tlbwi */, Mips::TLBWI, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8859 /* tlbwi */, Mips::TLBWI_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8865 /* tlbwr */, Mips::TLBWR, Convert_NoOperands, Feature_HasStdEnc, {  }, },
  { 8865 /* tlbwr */, Mips::TLBWR_MM, Convert_NoOperands, Feature_InMicroMips, {  }, },
  { 8871 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8871 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8871 /* tlt */, Mips::TLT, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8871 /* tlt */, Mips::TLT_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8875 /* tlti */, Mips::TLTI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8875 /* tlti */, Mips::TLTI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8880 /* tltiu */, Mips::TTLTIU, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8880 /* tltiu */, Mips::TLTIU_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8886 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8886 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8886 /* tltu */, Mips::TLTU, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8886 /* tltu */, Mips::TLTU_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8891 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8891 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__imm_95_0, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 8891 /* tne */, Mips::TNE, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8891 /* tne */, Mips::TNE_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 8895 /* tnei */, Mips::TNEI, Convert__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8895 /* tnei */, Mips::TNEI_MM, Convert__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 8900 /* trunc.l.d */, Mips::TRUNC_L_D64, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8900 /* trunc.l.d */, Mips::TRUNC_L_D_MMR6, Convert__FGR64AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR64AsmReg }, },
  { 8910 /* trunc.l.s */, Mips::TRUNC_L_S, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 8910 /* trunc.l.s */, Mips::TRUNC_L_S_MMR6, Convert__FGR64AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR64AsmReg, MCK_FGR32AsmReg }, },
  { 8920 /* trunc.w.d */, Mips::TRUNC_W_D32, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 8920 /* trunc.w.d */, Mips::TRUNC_W_D_MMR6, Convert__FGR32AsmReg1_0__AFGR64AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_AFGR64AsmReg }, },
  { 8920 /* trunc.w.d */, Mips::TRUNC_W_D64, Convert__FGR32AsmReg1_0__FGR64AsmReg1_1, Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR64AsmReg }, },
  { 8930 /* trunc.w.s */, Mips::TRUNC_W_S, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8930 /* trunc.w.s */, Mips::TRUNC_W_S_MM, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8930 /* trunc.w.s */, Mips::TRUNC_W_S_MMR6, Convert__FGR32AsmReg1_0__FGR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, { MCK_FGR32AsmReg, MCK_FGR32AsmReg }, },
  { 8940 /* ulh */, Mips::Ulh, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8944 /* ulhu */, Mips::Ulhu, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8949 /* ulw */, Mips::Ulw, Convert__GPR32AsmReg1_0__Mem2_1, 0, { MCK_GPR32AsmReg, MCK_Mem }, },
  { 8953 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8953 /* v3mulu */, Mips::V3MULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8960 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8960 /* vmm0 */, Mips::VMM0, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8965 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_0__GPR64AsmReg1_1, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8965 /* vmulu */, Mips::VMULU, Convert__GPR64AsmReg1_0__GPR64AsmReg1_1__GPR64AsmReg1_2, Feature_HasCnMips, { MCK_GPR64AsmReg, MCK_GPR64AsmReg, MCK_GPR64AsmReg }, },
  { 8971 /* vshf.b */, Mips::VSHF_B, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8978 /* vshf.d */, Mips::VSHF_D, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8985 /* vshf.h */, Mips::VSHF_H, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8992 /* vshf.w */, Mips::VSHF_W, Convert__MSA128AsmReg1_0__Tie0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 8999 /* wait */, Mips::WAIT, Convert_NoOperands, Feature_NotInMicroMips, {  }, },
  { 8999 /* wait */, Mips::WAIT_MM, Convert__imm_95_0, Feature_InMicroMips, {  }, },
  { 8999 /* wait */, Mips::WAIT_MMR6, Convert__ConstantUImm10_01_0, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_ConstantUImm10_0 }, },
  { 8999 /* wait */, Mips::WAIT_MM, Convert__ConstantUImm10_01_0, Feature_InMicroMips, { MCK_ConstantUImm10_0 }, },
  { 9004 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__imm_95_31, Feature_HasDSP|Feature_NotInMicroMips, { MCK_GPR32AsmReg }, },
  { 9004 /* wrdsp */, Mips::WRDSP_MM, Convert__GPR32AsmReg1_0__imm_95_31, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg }, },
  { 9004 /* wrdsp */, Mips::WRDSP_MM, Convert__GPR32AsmReg1_0__ConstantUImm7_01_1, Feature_HasDSP|Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm7_0 }, },
  { 9004 /* wrdsp */, Mips::WRDSP, Convert__GPR32AsmReg1_0__ConstantUImm10_01_1, Feature_HasDSP|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_ConstantUImm10_0 }, },
  { 9010 /* wrpgpr */, Mips::WRPGPR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9017 /* wsbh */, Mips::WSBH, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9017 /* wsbh */, Mips::WSBH_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9017 /* wsbh */, Mips::WSBH_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XorRxRxRy16, Convert__Reg1_0__Tie0__Reg1_1, Feature_InMips16Mode, { MCK_CPU16Regs, MCK_CPU16Regs }, },
  { 9022 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__GPR32AsmReg1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, 0, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 9022 /* xor */, Mips::XOR, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_NotInMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XOR_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XOR_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__GPR32AsmReg1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_GPR32AsmReg }, },
  { 9022 /* xor */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, 0, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 9026 /* xor.v */, Mips::XOR_V, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__MSA128AsmReg1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_MSA128AsmReg }, },
  { 9032 /* xor16 */, Mips::XOR16_MM, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 9032 /* xor16 */, Mips::XOR16_MMR6, Convert__GPRMM16AsmReg1_0__GPRMM16AsmReg1_1__Tie0, Feature_HasMicroMips32r6, { MCK_GPRMM16AsmReg, MCK_GPRMM16AsmReg }, },
  { 9038 /* xori */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 9038 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 9038 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_0__Imm1_1, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_Imm }, },
  { 9038 /* xori */, Mips::XORI_MMR6, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMicroMips32r6, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 9038 /* xori */, Mips::XORi, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_HasStdEnc, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 9038 /* xori */, Mips::XORi_MM, Convert__GPR32AsmReg1_0__GPR32AsmReg1_1__Imm1_2, Feature_InMicroMips, { MCK_GPR32AsmReg, MCK_GPR32AsmReg, MCK_Imm }, },
  { 9043 /* xori.b */, Mips::XORI_B, Convert__MSA128AsmReg1_0__MSA128AsmReg1_1__Imm1_2, Feature_HasStdEnc|Feature_HasMSA, { MCK_MSA128AsmReg, MCK_MSA128AsmReg, MCK_Imm }, },
};

bool MipsAsmParser::
mnemonicIsValid(StringRef Mnemonic, unsigned VariantID) {
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());
  return MnemonicRange.first != MnemonicRange.second;
}

unsigned MipsAsmParser::
MatchInstructionImpl(const OperandVector &Operands,
                     MCInst &Inst, uint64_t &ErrorInfo,
                     bool matchingInlineAsm, unsigned VariantID) {
  // Eliminate obvious mismatches.
  if (Operands.size() > 9) {
    ErrorInfo = 9;
    return Match_InvalidOperand;
  }

  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the instruction mnemonic, which is the first token.
  StringRef Mnemonic = ((MipsOperand&)*Operands[0]).getToken();

  // Some state to try to produce better error messages.
  bool HadMatchOtherThanFeatures = false;
  bool HadMatchOtherThanPredicate = false;
  unsigned RetCode = Match_InvalidOperand;
  uint64_t MissingFeatures = ~0ULL;
  // Set ErrorInfo to the operand that mismatches if it is
  // wrong for all instances of the instruction.
  ErrorInfo = ~0ULL;
  // Find the appropriate table for this asm variant.
  const MatchEntry *Start, *End;
  switch (VariantID) {
  default: llvm_unreachable("invalid variant!");
  case 0: Start = std::begin(MatchTable0); End = std::end(MatchTable0); break;
  }
  // Search the table.
  auto MnemonicRange = std::equal_range(Start, End, Mnemonic, LessOpcode());

  // Return a more specific error code if no mnemonics match.
  if (MnemonicRange.first == MnemonicRange.second)
    return Match_MnemonicFail;

  for (const MatchEntry *it = MnemonicRange.first, *ie = MnemonicRange.second;
       it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());
    bool OperandsValid = true;
    for (unsigned i = 0; i != 8; ++i) {
      auto Formal = static_cast<MatchClassKind>(it->Classes[i]);
      if (i+1 >= Operands.size()) {
        OperandsValid = (Formal == InvalidMatchClass);
        if (!OperandsValid) ErrorInfo = i+1;
        break;
      }
      MCParsedAsmOperand &Actual = *Operands[i+1];
      unsigned Diag = validateOperandClass(Actual, Formal);
      if (Diag == Match_Success)
        continue;
      // If the generic handler indicates an invalid operand
      // failure, check for a special case.
      if (Diag == Match_InvalidOperand) {
        Diag = validateTargetOperandClass(Actual, Formal);
        if (Diag == Match_Success)
          continue;
      }
      // If this operand is broken for all of the instances of this
      // mnemonic, keep track of it so we can report loc info.
      // If we already had a match that only failed due to a
      // target predicate, that diagnostic is preferred.
      if (!HadMatchOtherThanPredicate &&
          (it == MnemonicRange.first || ErrorInfo <= i+1)) {
        ErrorInfo = i+1;
        // InvalidOperand is the default. Prefer specificity.
        if (Diag != Match_InvalidOperand)
          RetCode = Diag;
      }
      // Otherwise, just reject this instance of the mnemonic.
      OperandsValid = false;
      break;
    }

    if (!OperandsValid) continue;
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      HadMatchOtherThanFeatures = true;
      uint64_t NewMissingFeatures = it->RequiredFeatures & ~AvailableFeatures;
      if (countPopulation(NewMissingFeatures) <=
          countPopulation(MissingFeatures))
        MissingFeatures = NewMissingFeatures;
      continue;
    }

    Inst.clear();

    if (matchingInlineAsm) {
      Inst.setOpcode(it->Opcode);
      convertToMapAndConstraints(it->ConvertFn, Operands);
      return Match_Success;
    }

    // We have selected a definite instruction, convert the parsed
    // operands into the appropriate MCInst.
    convertToMCInst(it->ConvertFn, Inst, it->Opcode, Operands);

    // We have a potential match. Check the target predicate to
    // handle any context sensitive constraints.
    unsigned MatchResult;
    if ((MatchResult = checkTargetMatchPredicate(Inst)) != Match_Success) {
      Inst.clear();
      RetCode = MatchResult;
      HadMatchOtherThanPredicate = true;
      continue;
    }

    return Match_Success;
  }

  // Okay, we had no match.  Try to return a useful error code.
  if (HadMatchOtherThanPredicate || !HadMatchOtherThanFeatures)
    return RetCode;

  // Missing feature matches return which features were missing
  ErrorInfo = MissingFeatures;
  return Match_MissingFeature;
}

namespace {
  struct OperandMatchEntry {
    uint64_t RequiredFeatures;
    uint16_t Mnemonic;
    uint8_t Class;
    uint8_t OperandMask;

    StringRef getMnemonic() const {
      return StringRef(MnemonicTable + Mnemonic + 1,
                       MnemonicTable[Mnemonic]);
    }
  };

  // Predicate for searching for an opcode.
  struct LessOpcodeOperand {
    bool operator()(const OperandMatchEntry &LHS, StringRef RHS) {
      return LHS.getMnemonic()  < RHS;
    }
    bool operator()(StringRef LHS, const OperandMatchEntry &RHS) {
      return LHS < RHS.getMnemonic();
    }
    bool operator()(const OperandMatchEntry &LHS, const OperandMatchEntry &RHS) {
      return LHS.getMnemonic() < RHS.getMnemonic();
    }
  };
} // end anonymous namespace.

static const OperandMatchEntry OperandMatchTable[2468] = {
  /* Operand List Mask, Mnemonic, Operand Class, Features */
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 0 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 0 /* abs.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 0 /* abs.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6 /* abs.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 12 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 12 /* absq_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 22 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 22 /* absq_s.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 32 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 32 /* absq_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 41 /* add */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 41 /* add */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 45 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 45 /* add.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 45 /* add.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 51 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 51 /* add.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 57 /* add_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 65 /* add_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 73 /* add_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 81 /* add_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 89 /* addi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 94 /* addiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 100 /* addiupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 100 /* addiupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 100 /* addiupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 100 /* addiupc */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 108 /* addiur1sp */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 118 /* addiur2 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 126 /* addius5 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 142 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 142 /* addq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 150 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 150 /* addq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 160 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 160 /* addq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 169 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 169 /* addqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 178 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 178 /* addqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 186 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 186 /* addqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 197 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 197 /* addqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 207 /* adds_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 216 /* adds_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 225 /* adds_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 234 /* adds_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 243 /* adds_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 252 /* adds_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 261 /* adds_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 270 /* adds_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 279 /* adds_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 288 /* adds_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 297 /* adds_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 306 /* adds_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 315 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 315 /* addsc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 321 /* addu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 321 /* addu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 326 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 326 /* addu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 334 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 334 /* addu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 342 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMicroMips32r6, 342 /* addu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 349 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 349 /* addu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 359 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 359 /* addu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 369 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 369 /* adduh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 378 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 378 /* adduh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 389 /* addv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 396 /* addv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 403 /* addv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 410 /* addv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 417 /* addvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 425 /* addvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 433 /* addvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 441 /* addvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 449 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 449 /* addwc */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 455 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 455 /* align */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 461 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 461 /* aluipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 468 /* and */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 468 /* and */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 472 /* and.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 478 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 478 /* and16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 484 /* andi */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 489 /* andi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 496 /* andi16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 496 /* andi16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 503 /* append */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 510 /* asub_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 519 /* asub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 528 /* asub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 537 /* asub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 546 /* asub_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 555 /* asub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 564 /* asub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 573 /* asub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 582 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 582 /* aui */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 586 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 586 /* auipc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 592 /* ave_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 600 /* ave_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 608 /* ave_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 616 /* ave_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 624 /* ave_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 632 /* ave_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 640 /* ave_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 648 /* ave_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 656 /* aver_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 665 /* aver_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 674 /* aver_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 683 /* aver_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 692 /* aver_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 701 /* aver_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 710 /* aver_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 719 /* aver_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotInMicroMips, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMips16Mode, 728 /* b */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 730 /* b16 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasCnMips, 734 /* baddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 734 /* baddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 740 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 740 /* bal */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 744 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 744 /* balc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasDSPR2, 749 /* balign */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 756 /* bbit0 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 762 /* bbit032 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 762 /* bbit032 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 770 /* bbit1 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasCnMips, 776 /* bbit132 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 776 /* bbit132 */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 784 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 784 /* bc */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 787 /* bc16 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 792 /* bc1eqz */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 792 /* bc1eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 799 /* bc1f */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 799 /* bc1f */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 799 /* bc1f */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 804 /* bc1fl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 804 /* bc1fl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 804 /* bc1fl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 810 /* bc1nez */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat, 810 /* bc1nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 817 /* bc1t */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 817 /* bc1t */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 817 /* bc1t */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 822 /* bc1tl */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 822 /* bc1tl */, MCK_FCCAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 822 /* bc1tl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 828 /* bc2eqz */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 828 /* bc2eqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 835 /* bc2nez */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 835 /* bc2nez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 842 /* bclr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 849 /* bclr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 856 /* bclr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 863 /* bclr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 870 /* bclri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 878 /* bclri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 886 /* bclri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 894 /* bclri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 902 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 902 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 902 /* beq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 902 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 902 /* beq */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 902 /* beq */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 906 /* beqc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 906 /* beqc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 911 /* beql */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 911 /* beql */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 916 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 916 /* beqz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 916 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 916 /* beqz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 921 /* beqz16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 921 /* beqz16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 928 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 928 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 928 /* beqzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 928 /* beqzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 936 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 936 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 936 /* beqzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 936 /* beqzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 942 /* beqzc16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 942 /* beqzc16 */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 950 /* beqzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 950 /* beqzl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 956 /* bge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 956 /* bge */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 956 /* bge */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 956 /* bge */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 960 /* bgec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 960 /* bgec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 965 /* bgel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 965 /* bgel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 965 /* bgel */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 965 /* bgel */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 970 /* bgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 970 /* bgeu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 970 /* bgeu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 970 /* bgeu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 975 /* bgeuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 975 /* bgeuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 981 /* bgeul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 981 /* bgeul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 981 /* bgeul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 981 /* bgeul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 987 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 987 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 987 /* bgez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 987 /* bgez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 992 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 992 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 992 /* bgezal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 992 /* bgezal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 999 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 999 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 999 /* bgezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 999 /* bgezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1007 /* bgezall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1007 /* bgezall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1015 /* bgezals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1015 /* bgezals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1023 /* bgezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1023 /* bgezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1029 /* bgezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1029 /* bgezl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1035 /* bgt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1035 /* bgt */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1035 /* bgt */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1035 /* bgt */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1039 /* bgtl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1039 /* bgtl */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1039 /* bgtl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1039 /* bgtl */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1044 /* bgtu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1044 /* bgtu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1044 /* bgtu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1044 /* bgtu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1049 /* bgtul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1049 /* bgtul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1049 /* bgtul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1049 /* bgtul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1055 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1055 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1055 /* bgtz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1055 /* bgtz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1060 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1060 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1060 /* bgtzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1060 /* bgtzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1068 /* bgtzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1068 /* bgtzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1074 /* bgtzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1074 /* bgtzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1080 /* binsl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1088 /* binsl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1096 /* binsl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1104 /* binsl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1112 /* binsli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1121 /* binsli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1130 /* binsli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1139 /* binsli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1148 /* binsr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1156 /* binsr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1164 /* binsr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1172 /* binsr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1180 /* binsri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1189 /* binsri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1198 /* binsri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1207 /* binsri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 1216 /* bitrev */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1223 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1223 /* bitswap */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1231 /* ble */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1231 /* ble */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1231 /* ble */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1231 /* ble */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1235 /* blel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1235 /* blel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1235 /* blel */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1235 /* blel */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1240 /* bleu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1240 /* bleu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1240 /* bleu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1240 /* bleu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1245 /* bleul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1245 /* bleul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1245 /* bleul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1245 /* bleul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1251 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1251 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1251 /* blez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1251 /* blez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1256 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1256 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1256 /* blezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1256 /* blezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1264 /* blezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1264 /* blezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1270 /* blezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1270 /* blezl */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1276 /* blt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1276 /* blt */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1276 /* blt */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1276 /* blt */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1280 /* bltc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1280 /* bltc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1285 /* bltl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1285 /* bltl */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1285 /* bltl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1285 /* bltl */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1290 /* bltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 1290 /* bltu */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1290 /* bltu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1290 /* bltu */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1295 /* bltuc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1295 /* bltuc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1301 /* bltul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1301 /* bltul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1301 /* bltul */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1301 /* bltul */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc, 1307 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 1307 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1307 /* bltz */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1307 /* bltz */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1312 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 1312 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1312 /* bltzal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1312 /* bltzal */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1319 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1319 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1319 /* bltzalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1319 /* bltzalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1327 /* bltzall */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1327 /* bltzall */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1335 /* bltzals */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1335 /* bltzals */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1343 /* bltzc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1343 /* bltzc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1349 /* bltzl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1349 /* bltzl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1355 /* bmnz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1362 /* bmnzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1370 /* bmz.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1376 /* bmzi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1383 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 1383 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMicroMips, 1383 /* bne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 1383 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { 0, 1383 /* bne */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1383 /* bne */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1387 /* bnec */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1387 /* bnec */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1392 /* bneg.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1399 /* bneg.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1406 /* bneg.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1413 /* bneg.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1420 /* bnegi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1428 /* bnegi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1436 /* bnegi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1444 /* bnegi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1452 /* bnel */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 1452 /* bnel */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_InMips16Mode, 1457 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1457 /* bnez */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1457 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMips16Mode, 1457 /* bnez */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1462 /* bnez16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1462 /* bnez16 */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1469 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1469 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1469 /* bnezalc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1469 /* bnezalc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1477 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1477 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_InMicroMips, 1477 /* bnezc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 1477 /* bnezc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 1483 /* bnezc16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 1483 /* bnezc16 */, MCK_JumpTarget, 2 /* 1 */ },
  { 0, 1491 /* bnezl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 1491 /* bnezl */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1497 /* bnvc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1497 /* bnvc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1502 /* bnz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1502 /* bnz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1508 /* bnz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1508 /* bnz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1514 /* bnz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1514 /* bnz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1520 /* bnz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1520 /* bnz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1526 /* bnz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1526 /* bnz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1532 /* bovc */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1532 /* bovc */, MCK_JumpTarget, 4 /* 2 */ },
  { Feature_HasDSP, 1537 /* bposge32 */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1560 /* bsel.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1567 /* bseli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1575 /* bset.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1582 /* bset.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1589 /* bset.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1596 /* bset.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1603 /* bseti.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1611 /* bseti.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1619 /* bseti.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1627 /* bseti.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1647 /* bz.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1647 /* bz.b */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1652 /* bz.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1652 /* bz.d */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1657 /* bz.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1657 /* bz.h */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1662 /* bz.v */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1662 /* bz.v */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1667 /* bz.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1667 /* bz.w */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1672 /* c.eq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1672 /* c.eq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1679 /* c.eq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1686 /* c.f.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1686 /* c.f.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1692 /* c.f.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1698 /* c.le.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1698 /* c.le.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1705 /* c.le.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1712 /* c.lt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1712 /* c.lt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1719 /* c.lt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1726 /* c.nge.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1726 /* c.nge.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1734 /* c.nge.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1742 /* c.ngl.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1742 /* c.ngl.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1750 /* c.ngl.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1758 /* c.ngle.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1758 /* c.ngle.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1767 /* c.ngle.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1776 /* c.ngt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1776 /* c.ngt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1784 /* c.ngt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1792 /* c.ole.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1792 /* c.ole.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1800 /* c.ole.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1808 /* c.olt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1808 /* c.olt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1816 /* c.olt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1824 /* c.seq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1824 /* c.seq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1832 /* c.seq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1840 /* c.sf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1840 /* c.sf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1847 /* c.sf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1854 /* c.ueq.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1854 /* c.ueq.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1862 /* c.ueq.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1870 /* c.ule.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1870 /* c.ule.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1878 /* c.ule.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1886 /* c.ult.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1886 /* c.ult.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1894 /* c.ult.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1902 /* c.un.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1902 /* c.un.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 1909 /* c.un.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 1916 /* cache */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 1916 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1916 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1916 /* cache */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 1922 /* cachee */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 1922 /* cachee */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 1922 /* cachee */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 1929 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1929 /* ceil.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 1938 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 1938 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1938 /* ceil.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1938 /* ceil.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1947 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1947 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1947 /* ceil.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1947 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1947 /* ceil.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 1947 /* ceil.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 1956 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 1956 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 1956 /* ceil.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1965 /* ceq.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1971 /* ceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1977 /* ceq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1983 /* ceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1989 /* ceqi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 1996 /* ceqi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2003 /* ceqi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2010 /* ceqi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2017 /* cfc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2017 /* cfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2022 /* cfcmsa */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2022 /* cfcmsa */, MCK_MSACtrlAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 2029 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 2029 /* cins */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 2029 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 2029 /* cins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 2034 /* cins32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 2034 /* cins32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2041 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2041 /* class.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2049 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2049 /* class.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2057 /* cle_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2065 /* cle_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2073 /* cle_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2081 /* cle_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2089 /* cle_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2097 /* cle_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2105 /* cle_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2113 /* cle_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2121 /* clei_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2130 /* clei_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2139 /* clei_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2148 /* clei_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2157 /* clei_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2166 /* clei_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2175 /* clei_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2184 /* clei_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2193 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2193 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2193 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2193 /* clo */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2197 /* clt_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2205 /* clt_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2213 /* clt_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2221 /* clt_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2229 /* clt_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2237 /* clt_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2245 /* clt_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2253 /* clt_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2261 /* clti_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2270 /* clti_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2279 /* clti_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2288 /* clti_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2297 /* clti_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2306 /* clti_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2315 /* clti_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2324 /* clti_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 2333 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 2333 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 2333 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 2333 /* clz */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2341 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2341 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2341 /* cmp.af.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2341 /* cmp.af.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2350 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2350 /* cmp.af.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2359 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2359 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2359 /* cmp.eq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2359 /* cmp.eq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2368 /* cmp.eq.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2378 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2378 /* cmp.eq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2387 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2387 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2387 /* cmp.le.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2387 /* cmp.le.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2396 /* cmp.le.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2406 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2406 /* cmp.le.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2415 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2415 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2415 /* cmp.lt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2415 /* cmp.lt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 2424 /* cmp.lt.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2434 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2434 /* cmp.lt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2443 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2443 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2443 /* cmp.saf.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2443 /* cmp.saf.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2453 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2453 /* cmp.saf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2463 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2463 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2463 /* cmp.seq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2463 /* cmp.seq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2473 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2473 /* cmp.seq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2483 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2483 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2483 /* cmp.sle.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2483 /* cmp.sle.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2493 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2493 /* cmp.sle.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2503 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2503 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2503 /* cmp.slt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2503 /* cmp.slt.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2513 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2513 /* cmp.slt.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2523 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2523 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2523 /* cmp.sueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2523 /* cmp.sueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2534 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2534 /* cmp.sueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2545 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2545 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2545 /* cmp.sule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2545 /* cmp.sule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2556 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2556 /* cmp.sule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2567 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2567 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2567 /* cmp.sult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2567 /* cmp.sult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2578 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2578 /* cmp.sult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2589 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2589 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2589 /* cmp.sun.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2589 /* cmp.sun.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2599 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2599 /* cmp.sun.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2609 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2609 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2609 /* cmp.ueq.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2609 /* cmp.ueq.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2619 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2619 /* cmp.ueq.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2629 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2629 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2629 /* cmp.ule.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2629 /* cmp.ule.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2639 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2639 /* cmp.ule.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2649 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2649 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2649 /* cmp.ult.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2649 /* cmp.ult.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2659 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2659 /* cmp.ult.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2669 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2669 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2669 /* cmp.un.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2669 /* cmp.un.d */, MCK_FGR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2678 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2678 /* cmp.un.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2687 /* cmpgdu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2700 /* cmpgdu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 2713 /* cmpgdu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2726 /* cmpgu.eq.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2738 /* cmpgu.le.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2750 /* cmpgu.lt.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 2767 /* cmpu.eq.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2778 /* cmpu.le.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 2789 /* cmpu.lt.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2800 /* copy_s.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2800 /* copy_s.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2809 /* copy_s.d */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2809 /* copy_s.d */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2818 /* copy_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2818 /* copy_s.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2827 /* copy_s.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2827 /* copy_s.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2836 /* copy_u.b */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2836 /* copy_u.b */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2845 /* copy_u.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2845 /* copy_u.h */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2854 /* copy_u.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 2854 /* copy_u.w */, MCK_MSA128AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2863 /* ctc1 */, MCK_CCRAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2863 /* ctc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2868 /* ctcmsa */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 2868 /* ctcmsa */, MCK_MSACtrlAsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2875 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2875 /* cvt.d.l */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2883 /* cvt.d.s */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2883 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2883 /* cvt.d.s */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2883 /* cvt.d.s */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2883 /* cvt.d.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2883 /* cvt.d.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2891 /* cvt.d.w */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2891 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2891 /* cvt.d.w */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2891 /* cvt.d.w */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2891 /* cvt.d.w */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2891 /* cvt.d.w */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2899 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2899 /* cvt.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2907 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32r2|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2907 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2907 /* cvt.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2907 /* cvt.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2915 /* cvt.s.d */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2915 /* cvt.s.d */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2915 /* cvt.s.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2915 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2915 /* cvt.s.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2915 /* cvt.s.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2923 /* cvt.s.l */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 2923 /* cvt.s.l */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2923 /* cvt.s.l */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2923 /* cvt.s.l */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2931 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2931 /* cvt.s.w */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2939 /* cvt.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2939 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 2939 /* cvt.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 2947 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 2947 /* cvt.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2955 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2955 /* dadd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2955 /* dadd */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2955 /* dadd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2960 /* daddi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 2960 /* daddi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2966 /* daddiu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2966 /* daddiu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2973 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 2973 /* daddu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 2973 /* daddu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 2973 /* daddu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 2979 /* dahi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 2979 /* dahi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 2984 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 2984 /* dalign */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 2991 /* dati */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 2991 /* dati */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6|Feature_NotInMicroMips, 2996 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 2996 /* daui */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3001 /* dbitswap */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 3010 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3010 /* dclo */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64|Feature_NotMips64r6, 3015 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3015 /* dclz */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3020 /* ddiv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 3020 /* ddiv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3020 /* ddiv */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3020 /* ddiv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3020 /* ddiv */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3025 /* ddivu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 3025 /* ddivu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3025 /* ddivu */, MCK_GPR64AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3025 /* ddivu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3025 /* ddivu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3037 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3037 /* dext */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3042 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3042 /* dextm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3048 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3048 /* dextu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3054 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3054 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3054 /* di */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3057 /* dins */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3062 /* dinsm */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3068 /* dinsu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3074 /* div */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 3074 /* div */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 3074 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3074 /* div */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3074 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3074 /* div */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 3078 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 3078 /* div.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 3078 /* div.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 3084 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 3084 /* div.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3090 /* div_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3098 /* div_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3106 /* div_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3114 /* div_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3122 /* div_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3130 /* div_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3138 /* div_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3146 /* div_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3154 /* divu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 3154 /* divu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 3154 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 3154 /* divu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 3154 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3154 /* divu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3159 /* dla */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3159 /* dla */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3159 /* dla */, MCK_Mem, 2 /* 1 */ },
  { 0, 3163 /* dli */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 3167 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3167 /* dlsa */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3172 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 3172 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3172 /* dmfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3172 /* dmfc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3178 /* dmfc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3178 /* dmfc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3184 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 3184 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3184 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3184 /* dmfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3184 /* dmfc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3190 /* dmod */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3190 /* dmod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3190 /* dmod */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3195 /* dmodu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips64r6, 3195 /* dmodu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3195 /* dmodu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 3201 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 3201 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3201 /* dmtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3201 /* dmtc0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3207 /* dmtc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_IsNotSoftFloat, 3207 /* dmtc1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { 0, 3213 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 3213 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3213 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3213 /* dmtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasMips64, 3213 /* dmtc2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3219 /* dmuh */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3224 /* dmuhu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3230 /* dmul */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3230 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 3230 /* dmul */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3235 /* dmult */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3241 /* dmultu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 3248 /* dmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 3254 /* dneg */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3254 /* dneg */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3259 /* dnegu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3265 /* dotp_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3274 /* dotp_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3283 /* dotp_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3292 /* dotp_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3301 /* dotp_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3310 /* dotp_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3319 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3319 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3319 /* dpa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3319 /* dpa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3328 /* dpadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3338 /* dpadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3348 /* dpadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3358 /* dpadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3368 /* dpadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3378 /* dpadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3388 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3388 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3388 /* dpaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3388 /* dpaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3400 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3400 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3400 /* dpaq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3400 /* dpaq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3412 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3412 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3412 /* dpaqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3412 /* dpaqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3425 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3425 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3425 /* dpaqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3425 /* dpaqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3439 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3439 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3439 /* dpau.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3439 /* dpau.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3450 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3450 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3450 /* dpau.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3450 /* dpau.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3461 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3461 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3461 /* dpax.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3461 /* dpax.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasCnMips, 3471 /* dpop */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3471 /* dpop */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3476 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3476 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3476 /* dps.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3476 /* dps.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3485 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3485 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3485 /* dpsq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3485 /* dpsq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3497 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3497 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3497 /* dpsq_sa.l.w */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3497 /* dpsq_sa.l.w */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3509 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3509 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3509 /* dpsqx_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3509 /* dpsqx_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3522 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3522 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3522 /* dpsqx_sa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3522 /* dpsqx_sa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3536 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3536 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3536 /* dpsu.h.qbl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3536 /* dpsu.h.qbl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3547 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3547 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 3547 /* dpsu.h.qbr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3547 /* dpsu.h.qbr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3558 /* dpsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3568 /* dpsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3578 /* dpsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3588 /* dpsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3598 /* dpsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3608 /* dpsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3618 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 3618 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSPR2, 3618 /* dpsx.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 3618 /* dpsx.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasMips64, 3628 /* drol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3628 /* drol */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3628 /* drol */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 3628 /* drol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3633 /* dror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips64, 3633 /* dror */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64, 3633 /* dror */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips64, 3633 /* dror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3638 /* drotr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3638 /* drotr */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3644 /* drotr32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3644 /* drotr32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3652 /* drotrv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3652 /* drotrv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3659 /* dsbh */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r2, 3664 /* dshd */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3669 /* dsll */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3669 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3669 /* dsll */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3669 /* dsll */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3674 /* dsll32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3674 /* dsll32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3681 /* dsllv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3681 /* dsllv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3687 /* dsra */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3687 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3687 /* dsra */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3687 /* dsra */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3692 /* dsra32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3692 /* dsra32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3699 /* dsrav */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3699 /* dsrav */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3705 /* dsrl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3705 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3705 /* dsrl */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasMips3, 3705 /* dsrl */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3710 /* dsrl32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3710 /* dsrl32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3717 /* dsrlv */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3717 /* dsrlv */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3723 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3723 /* dsub */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3723 /* dsub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3723 /* dsub */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3723 /* dsub */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3723 /* dsub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3728 /* dsubi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3728 /* dsubi */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3728 /* dsubi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 3728 /* dsubi */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3734 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3734 /* dsubu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasMips3, 3734 /* dsubu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 3734 /* dsubu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMips3, 3734 /* dsubu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips3, 3734 /* dsubu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 3744 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 3744 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 3744 /* ei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 3759 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 3759 /* ext */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3763 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3763 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3763 /* extp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3763 /* extp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3768 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3768 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3768 /* extpdp */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3768 /* extpdp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3775 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3775 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3775 /* extpdpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3775 /* extpdpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3783 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3783 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3783 /* extpv */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3783 /* extpv */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3789 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3789 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3789 /* extr.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3789 /* extr.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3796 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3796 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3796 /* extr_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3796 /* extr_r.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3805 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3805 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3805 /* extr_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3805 /* extr_rs.w */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3815 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3815 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 3815 /* extr_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3815 /* extr_s.h */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3824 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3824 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3824 /* extrv.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3824 /* extrv.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3832 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3832 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3832 /* extrv_r.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3832 /* extrv_r.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3842 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3842 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3842 /* extrv_rs.w */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3842 /* extrv_rs.w */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3853 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 3853 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasDSP, 3853 /* extrv_s.h */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 3853 /* extrv_s.h */, MCK_GPR32AsmReg, 5 /* 0, 2 */ },
  { Feature_HasCnMips, 3863 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3863 /* exts */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3863 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3863 /* exts */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 3868 /* exts32 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 3868 /* exts32 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3875 /* fadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3882 /* fadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3889 /* fcaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3896 /* fcaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3903 /* fceq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3910 /* fceq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3917 /* fclass.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3926 /* fclass.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3935 /* fcle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3942 /* fcle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3949 /* fclt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3956 /* fclt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3963 /* fcne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3970 /* fcne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3977 /* fcor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3984 /* fcor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3991 /* fcueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 3999 /* fcueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4007 /* fcule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4015 /* fcule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4023 /* fcult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4031 /* fcult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4039 /* fcun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4046 /* fcun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4053 /* fcune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4061 /* fcune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4069 /* fdiv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4076 /* fdiv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4083 /* fexdo.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4091 /* fexdo.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4099 /* fexp2.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4107 /* fexp2.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4115 /* fexupl.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4124 /* fexupl.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4133 /* fexupr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4142 /* fexupr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4151 /* ffint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4161 /* ffint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4171 /* ffint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4181 /* ffint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4191 /* ffql.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4198 /* ffql.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4205 /* ffqr.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4212 /* ffqr.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4219 /* fill.b */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4219 /* fill.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 4226 /* fill.d */, MCK_GPR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 4226 /* fill.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4233 /* fill.h */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4233 /* fill.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4240 /* fill.w */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4240 /* fill.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4247 /* flog2.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4255 /* flog2.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 4263 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4263 /* floor.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 4273 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 4273 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4273 /* floor.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4273 /* floor.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4283 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4283 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4283 /* floor.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4283 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4283 /* floor.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 4283 /* floor.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 4293 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 4293 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 4293 /* floor.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4303 /* fmadd.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4311 /* fmadd.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4319 /* fmax.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4326 /* fmax.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4333 /* fmax_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4342 /* fmax_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4351 /* fmin.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4358 /* fmin.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4365 /* fmin_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4374 /* fmin_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4383 /* fmsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4391 /* fmsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4399 /* fmul.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4406 /* fmul.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4413 /* frcp.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4420 /* frcp.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4427 /* frint.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4435 /* frint.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4443 /* frsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4452 /* frsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4461 /* fsaf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4468 /* fsaf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4475 /* fseq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4482 /* fseq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4489 /* fsle.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4496 /* fsle.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4503 /* fslt.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4510 /* fslt.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4517 /* fsne.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4524 /* fsne.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4531 /* fsor.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4538 /* fsor.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4545 /* fsqrt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4553 /* fsqrt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4561 /* fsub.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4568 /* fsub.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4575 /* fsueq.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4583 /* fsueq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4591 /* fsule.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4599 /* fsule.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4607 /* fsult.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4615 /* fsult.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4623 /* fsun.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4630 /* fsun.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4637 /* fsune.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4645 /* fsune.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4653 /* ftint_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4663 /* ftint_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4673 /* ftint_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4683 /* ftint_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4693 /* ftq.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4699 /* ftq.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4705 /* ftrunc_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4716 /* ftrunc_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4727 /* ftrunc_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4738 /* ftrunc_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4749 /* hadd_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4758 /* hadd_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4767 /* hadd_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4776 /* hadd_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4785 /* hadd_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4794 /* hadd_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4803 /* hsub_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4812 /* hsub_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4821 /* hsub_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4830 /* hsub_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4839 /* hsub_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4848 /* hsub_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4857 /* ilvev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4865 /* ilvev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4873 /* ilvev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4881 /* ilvev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4889 /* ilvl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4896 /* ilvl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4903 /* ilvl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4910 /* ilvl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4917 /* ilvod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4925 /* ilvod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4933 /* ilvod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4941 /* ilvod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4949 /* ilvr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4956 /* ilvr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4963 /* ilvr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4970 /* ilvr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 4977 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 4977 /* ins */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4981 /* insert.b */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4981 /* insert.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 4990 /* insert.d */, MCK_GPR64AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA|Feature_HasMips64, 4990 /* insert.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4999 /* insert.h */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 4999 /* insert.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5008 /* insert.w */, MCK_GPR32AsmReg, 16 /* 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5008 /* insert.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5017 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 5017 /* insv */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5022 /* insve.b */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5030 /* insve.d */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5038 /* insve.h */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5046 /* insve.w */, MCK_MSA128AsmReg, 17 /* 0, 4 */ },
  { 0, 5054 /* j */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5054 /* j */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 5056 /* jal */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5056 /* jal */, MCK_JumpTarget, 1 /* 0 */ },
  { 0, 5056 /* jal */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 5060 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5060 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotInMicroMips, 5060 /* jalr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5060 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5060 /* jalr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips32, 5065 /* jalr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5065 /* jalr.hb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5079 /* jalrs */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5085 /* jalrs16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5098 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_InMicroMips, 5098 /* jalx */, MCK_JumpTarget, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5103 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5103 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5103 /* jialc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5103 /* jialc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5109 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5109 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5109 /* jic */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5109 /* jic */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 5113 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5113 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips32r6, 5113 /* jr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips64r6, 5113 /* jr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5116 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5116 /* jr.hb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5122 /* jr16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5137 /* jrc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5141 /* jrc16 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5158 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5158 /* la */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5158 /* la */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5161 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5161 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5161 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5161 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5161 /* lb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5161 /* lb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5164 /* lbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5164 /* lbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5164 /* lbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5164 /* lbe */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5164 /* lbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5164 /* lbe */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5168 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5168 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5168 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5168 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5168 /* lbu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5168 /* lbu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5172 /* lbu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5172 /* lbu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5178 /* lbue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5178 /* lbue */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5178 /* lbue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5178 /* lbue */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5178 /* lbue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5178 /* lbue */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5183 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasDSP, 5183 /* lbux */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5188 /* ld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5188 /* ld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5191 /* ld.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5191 /* ld.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5196 /* ld.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5196 /* ld.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5201 /* ld.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5201 /* ld.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5206 /* ld.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5206 /* ld.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5211 /* ldc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5211 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5211 /* ldc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 5211 /* ldc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5216 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5216 /* ldc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5216 /* ldc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5216 /* ldc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5221 /* ldc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 5221 /* ldc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5226 /* ldi.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5232 /* ldi.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5238 /* ldi.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5244 /* ldi.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5250 /* ldl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5250 /* ldl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5254 /* ldpc */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips64r6, 5254 /* ldpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5259 /* ldr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5259 /* ldr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5263 /* ldxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5263 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5263 /* ldxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5263 /* ldxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc, 5269 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5269 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5269 /* lh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5269 /* lh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5272 /* lhe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5272 /* lhe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5272 /* lhe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5272 /* lhe */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 5276 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5276 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5276 /* lhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5276 /* lhu */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5280 /* lhu16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5280 /* lhu16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5286 /* lhue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 5286 /* lhue */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5286 /* lhue */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5286 /* lhue */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5291 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasDSP, 5291 /* lhx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { 0, 5295 /* li */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5298 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5298 /* li16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5303 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5303 /* ll */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5303 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5303 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5303 /* ll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5303 /* ll */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5306 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5306 /* lld */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5306 /* lld */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 5306 /* lld */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5310 /* lle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5310 /* lle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5310 /* lle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5310 /* lle */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5310 /* lle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5310 /* lle */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5314 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5314 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5314 /* lsa */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5318 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5318 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5318 /* lui */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5322 /* luxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5322 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5322 /* luxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5322 /* luxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5328 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5328 /* lw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5328 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5328 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5328 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5328 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5328 /* lw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5328 /* lw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5328 /* lw */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5331 /* lw16 */, MCK_GPRMM16AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5331 /* lw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5336 /* lwc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5336 /* lwc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5341 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5341 /* lwc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5341 /* lwc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5341 /* lwc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5346 /* lwc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 5346 /* lwc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5351 /* lwe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 5351 /* lwe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5351 /* lwe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5351 /* lwe */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5351 /* lwe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5351 /* lwe */, MCK_Mem, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5355 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5355 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5355 /* lwl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5355 /* lwl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5359 /* lwle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5359 /* lwle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5359 /* lwle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5359 /* lwle */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5364 /* lwm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5364 /* lwm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 5368 /* lwm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 5368 /* lwm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 5368 /* lwm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 5368 /* lwm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 5374 /* lwm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5374 /* lwm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 5380 /* lwp */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5380 /* lwp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5384 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5384 /* lwpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5384 /* lwpc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 5384 /* lwpc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5389 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5389 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5389 /* lwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5389 /* lwr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5393 /* lwre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 5393 /* lwre */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 5393 /* lwre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5393 /* lwre */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 5398 /* lwu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5398 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5398 /* lwu */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 5398 /* lwu */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5402 /* lwupc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 5402 /* lwupc */, MCK_JumpTarget, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5408 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasDSP, 5408 /* lwx */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5412 /* lwxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5412 /* lwxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 5418 /* lwxs */, MCK_GPR32AsmReg, 11 /* 0, 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5423 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5423 /* madd */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5423 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5423 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5423 /* madd */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5423 /* madd */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5428 /* madd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5428 /* madd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 5435 /* madd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5442 /* madd_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5451 /* madd_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5460 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5460 /* maddf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5468 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5468 /* maddf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5476 /* maddr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5486 /* maddr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 5496 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 5496 /* maddu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5496 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5496 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5496 /* maddu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5496 /* maddu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5502 /* maddv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5510 /* maddv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5518 /* maddv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5526 /* maddv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5534 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5534 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5534 /* maq_s.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5534 /* maq_s.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5546 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5546 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5546 /* maq_s.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5546 /* maq_s.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5558 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5558 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5558 /* maq_sa.w.phl */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5558 /* maq_sa.w.phl */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5571 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5571 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 5571 /* maq_sa.w.phr */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5571 /* maq_sa.w.phr */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5584 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5584 /* max.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5590 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5590 /* max.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5596 /* max_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5604 /* max_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5612 /* max_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5620 /* max_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5628 /* max_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5636 /* max_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5644 /* max_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5652 /* max_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5660 /* max_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5668 /* max_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5676 /* max_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5684 /* max_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5692 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5692 /* maxa.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5699 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5699 /* maxa.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5706 /* maxi_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5715 /* maxi_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5724 /* maxi_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5733 /* maxi_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5742 /* maxi_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5751 /* maxi_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5760 /* maxi_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5769 /* maxi_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 5778 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 5778 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5778 /* mfc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 5778 /* mfc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5783 /* mfc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 5783 /* mfc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 5788 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 5788 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 5788 /* mfc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 5788 /* mfc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5793 /* mfhc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5793 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5793 /* mfhc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 5793 /* mfhc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5799 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5799 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5799 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5799 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5799 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5799 /* mfhi */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5799 /* mfhi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 5804 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5804 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 5804 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5804 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 5804 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 5804 /* mflo */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 5804 /* mflo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5809 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5809 /* min.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5815 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5815 /* min.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5821 /* min_a.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5829 /* min_a.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5837 /* min_a.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5845 /* min_a.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5853 /* min_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5861 /* min_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5869 /* min_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5877 /* min_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5885 /* min_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5893 /* min_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5901 /* min_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5909 /* min_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5917 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5917 /* mina.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 5924 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 5924 /* mina.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5931 /* mini_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5940 /* mini_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5949 /* mini_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5958 /* mini_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5967 /* mini_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5976 /* mini_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5985 /* mini_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 5994 /* mini_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6003 /* mod */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6003 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6003 /* mod */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6007 /* mod_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6015 /* mod_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6023 /* mod_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6031 /* mod_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6039 /* mod_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6047 /* mod_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6055 /* mod_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6063 /* mod_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6071 /* modsub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6078 /* modu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6078 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6078 /* modu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6083 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6083 /* mov.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6083 /* mov.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6089 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6089 /* mov.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 6095 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP32bit|Feature_NotInMicroMips, 6095 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6095 /* move */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit, 6095 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_IsGP64bit, 6095 /* move */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6100 /* move.v */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6107 /* move16 */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6114 /* movep */, MCK_GPRMM16AsmRegMoveP, 6 /* 1, 2 */ },
  { Feature_InMicroMips, 6114 /* movep */, MCK_MovePRegPair, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6120 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6120 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6120 /* movf */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 6120 /* movf */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6125 /* movf.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6125 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6125 /* movf.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6125 /* movf.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6132 /* movf.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6132 /* movf.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 6139 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6139 /* movn */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6144 /* movn.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6144 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6144 /* movn.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6144 /* movn.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6151 /* movn.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6151 /* movn.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6158 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6158 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6158 /* movt */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_InMicroMips, 6158 /* movt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6163 /* movt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6163 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6163 /* movt.d */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6163 /* movt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6170 /* movt.s */, MCK_FCCAsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6170 /* movt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6, 6177 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6177 /* movz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6182 /* movz.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6182 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6182 /* movz.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6182 /* movz.d */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6189 /* movz.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6189 /* movz.s */, MCK_GPR32AsmReg, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6196 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6196 /* msub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6196 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6196 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6196 /* msub */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6196 /* msub */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6201 /* msub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6201 /* msub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6208 /* msub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6215 /* msub_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6224 /* msub_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6233 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6233 /* msubf.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 6241 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6241 /* msubf.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6249 /* msubr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6259 /* msubr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6269 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6269 /* msubu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6269 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6269 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6269 /* msubu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6269 /* msubu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6275 /* msubv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6283 /* msubv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6291 /* msubv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6299 /* msubv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6307 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { 0, 6307 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 6307 /* mtc0 */, MCK_COP0AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32, 6307 /* mtc0 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6312 /* mtc1 */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6312 /* mtc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6317 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { 0, 6317 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6317 /* mtc2 */, MCK_COP2AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc, 6317 /* mtc2 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6322 /* mthc1 */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6322 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6322 /* mthc1 */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips32r2|Feature_IsNotSoftFloat, 6322 /* mthc1 */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6328 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6328 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6328 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6328 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6328 /* mthi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6328 /* mthi */, MCK_HI32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6333 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6333 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6333 /* mthlip */, MCK_ACC64DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6333 /* mthlip */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6340 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6340 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6340 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6340 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 6340 /* mtlo */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6340 /* mtlo */, MCK_LO32DSPAsmReg, 2 /* 1 */ },
  { Feature_HasCnMips, 6345 /* mtm0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6350 /* mtm1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6355 /* mtm2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6360 /* mtp0 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6365 /* mtp1 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6370 /* mtp2 */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6375 /* muh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6375 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6375 /* muh */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6379 /* muhu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6379 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6379 /* muhu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6384 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6384 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6384 /* mul */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32|Feature_NotMips32r6|Feature_NotMips64r6, 6384 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6384 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6384 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6384 /* mul */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6388 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6388 /* mul.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6388 /* mul.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6394 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6394 /* mul.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6401 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6401 /* mul.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6407 /* mul_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6415 /* mul_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6423 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6423 /* mul_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6432 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6432 /* muleq_s.w.phl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6446 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6446 /* muleq_s.w.phr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6460 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6460 /* muleu_s.ph.qbl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6475 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6475 /* muleu_s.ph.qbr */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6490 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6490 /* mulq_rs.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6501 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6501 /* mulq_rs.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6511 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6511 /* mulq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 6521 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6521 /* mulq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6530 /* mulr_q.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6539 /* mulr_q.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 6548 /* mulsa.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSPR2, 6548 /* mulsa.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6559 /* mulsaq_s.w.ph */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6559 /* mulsaq_s.w.ph */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6573 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6573 /* mult */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6573 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6573 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6573 /* mult */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6573 /* mult */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6, 6578 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6578 /* multu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6578 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6578 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasDSP, 6578 /* multu */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 6578 /* multu */, MCK_GPR32AsmReg, 6 /* 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6584 /* mulu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 6584 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6584 /* mulu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6589 /* mulv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6596 /* mulv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6603 /* mulv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6610 /* mulv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6617 /* neg */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 6621 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6621 /* neg.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 6621 /* neg.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 6627 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 6627 /* neg.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6633 /* negu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 6633 /* negu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6638 /* nloc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6645 /* nloc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6652 /* nloc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6659 /* nloc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6666 /* nlzc.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6673 /* nlzc.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6680 /* nlzc.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6687 /* nlzc.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6694 /* nmadd.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6694 /* nmadd.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6702 /* nmadd.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6710 /* nmsub.d */, MCK_AFGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6710 /* nmsub.d */, MCK_FGR64AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 6718 /* nmsub.s */, MCK_FGR32AsmReg, 15 /* 0, 1, 2, 3 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6730 /* nor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6730 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 6730 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6730 /* nor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6730 /* nor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6734 /* nor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6740 /* nori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { 0, 6747 /* not */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 6751 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 6751 /* not16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6757 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6757 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6757 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 6757 /* or */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 6757 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6757 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 6757 /* or */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 6757 /* or */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6760 /* or.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 6765 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6765 /* or16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6770 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 6770 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 6770 /* ori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 6770 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 6770 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 6770 /* ori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6774 /* ori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6780 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6780 /* packrl.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6796 /* pckev.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6804 /* pckev.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6812 /* pckev.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6820 /* pckev.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6828 /* pckod.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6836 /* pckod.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6844 /* pckod.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6852 /* pckod.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6860 /* pcnt.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6867 /* pcnt.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6874 /* pcnt.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 6881 /* pcnt.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6888 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6888 /* pick.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6896 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 6896 /* pick.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 6904 /* pop */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 6904 /* pop */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6908 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6908 /* preceq.w.phl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6921 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6921 /* preceq.w.phr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6934 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6934 /* precequ.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6949 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6949 /* precequ.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6965 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6965 /* precequ.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6980 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6980 /* precequ.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 6996 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 6996 /* preceu.ph.qbl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7010 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7010 /* preceu.ph.qbla */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7025 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7025 /* preceu.ph.qbr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7039 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7039 /* preceu.ph.qbra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7054 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7054 /* precr.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7066 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7066 /* precr_sra.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7081 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7081 /* precr_sra_r.ph.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7098 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7098 /* precrq.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7110 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7110 /* precrq.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7123 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7123 /* precrq_rs.ph.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7138 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7138 /* precrqu_s.qb.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7154 /* pref */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3_32|Feature_NotMips32r6|Feature_NotMips64r6, 7154 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7154 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7154 /* pref */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7159 /* prefe */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7159 /* prefe */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7159 /* prefe */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7165 /* prefx */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7171 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7171 /* prepend */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7179 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7179 /* raddu.w.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7190 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7190 /* rddsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, 7196 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_InMicroMips|Feature_NotMips32r6, 7196 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7196 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7196 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 7196 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7196 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7196 /* rdhwr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7196 /* rdhwr */, MCK_HWRegsAsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7202 /* rdpgpr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7209 /* recip.d */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7217 /* recip.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7225 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7225 /* repl.ph */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7233 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7233 /* repl.qb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7241 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7241 /* replv.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7250 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7250 /* replv.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7259 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7259 /* rint.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7266 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7266 /* rint.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7273 /* rol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7273 /* rol */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7273 /* rol */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7273 /* rol */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7277 /* ror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7277 /* ror */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 7277 /* ror */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7277 /* ror */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7281 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7281 /* rotr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7281 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7281 /* rotr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7286 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7286 /* rotrv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7292 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7292 /* round.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7302 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7302 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7302 /* round.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7302 /* round.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7312 /* round.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7312 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7312 /* round.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7312 /* round.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7312 /* round.w.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 7322 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7322 /* round.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7332 /* rsqrt.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7332 /* rsqrt.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 7340 /* rsqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7348 /* sat_s.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7356 /* sat_s.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7364 /* sat_s.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7372 /* sat_s.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7380 /* sat_u.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7388 /* sat_u.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7396 /* sat_u.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7404 /* sat_u.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7412 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7412 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 7412 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7412 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7412 /* sb */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7412 /* sb */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7415 /* sb16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7415 /* sb16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 7415 /* sb16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7415 /* sb16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7420 /* sbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7420 /* sbe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7420 /* sbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7420 /* sbe */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7420 /* sbe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7420 /* sbe */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7424 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7424 /* sc */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7424 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7424 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7424 /* sc */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7424 /* sc */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7427 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7427 /* scd */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7427 /* scd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7427 /* scd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 7431 /* sce */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 7431 /* sce */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7431 /* sce */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7431 /* sce */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7431 /* sce */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7431 /* sce */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7435 /* sd */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3, 7435 /* sd */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7452 /* sdc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7452 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7452 /* sdc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 7452 /* sdc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7457 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 7457 /* sdc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7457 /* sdc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 7457 /* sdc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7462 /* sdc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 7462 /* sdc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7467 /* sdl */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7467 /* sdl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7471 /* sdr */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips3|Feature_NotMips32r6|Feature_NotMips64r6, 7471 /* sdr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7475 /* sdxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7475 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 7475 /* sdxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 7475 /* sdxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7481 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7481 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7481 /* seb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 7485 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7485 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7485 /* seh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7489 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7489 /* sel.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7495 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7495 /* sel.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7501 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7501 /* seleqz */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7501 /* seleqz */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7508 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7508 /* seleqz.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7517 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7517 /* seleqz.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP32bit|Feature_HasMips32r6, 7526 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7526 /* selnez */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsGP64bit|Feature_HasMips32r6, 7526 /* selnez */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7533 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7533 /* selnez.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 7542 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7542 /* selnez.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7551 /* seq */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7551 /* seq */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7555 /* seqi */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7555 /* seqi */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7560 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7560 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc, 7560 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 7560 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7560 /* sh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7560 /* sh */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7563 /* sh16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 7563 /* sh16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 7563 /* sh16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 7563 /* sh16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7568 /* she */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA, 7568 /* she */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7568 /* she */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7568 /* she */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 7568 /* she */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7568 /* she */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7572 /* shf.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7578 /* shf.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7584 /* shf.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7590 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7590 /* shilo */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7596 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7596 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP, 7596 /* shilov */, MCK_ACC64DSPAsmReg, 1 /* 0 */ },
  { Feature_HasDSP, 7596 /* shilov */, MCK_GPR32AsmReg, 2 /* 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7603 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7603 /* shll.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7611 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7611 /* shll.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7619 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7619 /* shll_s.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7629 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7629 /* shll_s.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7638 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7638 /* shllv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7647 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7647 /* shllv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7656 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7656 /* shllv_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7667 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7667 /* shllv_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7677 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7677 /* shra.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7685 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7685 /* shra.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7693 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7693 /* shra_r.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7703 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7703 /* shra_r.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7713 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7713 /* shra_r.w */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7722 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7722 /* shrav.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7731 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7731 /* shrav.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7740 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7740 /* shrav_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7751 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7751 /* shrav_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7762 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7762 /* shrav_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7772 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2, 7772 /* shrl.ph */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7780 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSP, 7780 /* shrl.qb */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 7788 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 7788 /* shrlv.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 7797 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 7797 /* shrlv.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7806 /* sld.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7806 /* sld.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7812 /* sld.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7812 /* sld.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7818 /* sld.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7818 /* sld.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7824 /* sld.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7824 /* sld.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7830 /* sldi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7837 /* sldi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7844 /* sldi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7851 /* sldi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7858 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7858 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 7858 /* sll */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 7858 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 7858 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7858 /* sll */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 7858 /* sll */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7862 /* sll.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7868 /* sll.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7874 /* sll.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7880 /* sll.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 7886 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 7886 /* sll16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7892 /* slli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7899 /* slli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7906 /* slli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7913 /* slli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7920 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7920 /* sllv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 7925 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7925 /* slt */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7925 /* slt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7929 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7929 /* slti */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7934 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 7934 /* sltiu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 7940 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 7940 /* sltu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 7940 /* sltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7945 /* sne */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 7945 /* sne */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 7949 /* snei */, MCK_GPR64AsmReg, 1 /* 0 */ },
  { Feature_HasCnMips, 7949 /* snei */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7954 /* splat.b */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7954 /* splat.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7962 /* splat.d */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7962 /* splat.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7970 /* splat.h */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7970 /* splat.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7978 /* splat.w */, MCK_GPR32AsmReg, 8 /* 3 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7978 /* splat.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7986 /* splati.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 7995 /* splati.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8004 /* splati.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8013 /* splati.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8022 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8022 /* sqrt.d */, MCK_AFGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8022 /* sqrt.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 8029 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 8029 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8029 /* sqrt.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8036 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8036 /* sra */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 8036 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8036 /* sra */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8036 /* sra */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8040 /* sra.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8046 /* sra.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8052 /* sra.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8058 /* sra.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8064 /* srai.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8071 /* srai.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8078 /* srai.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8085 /* srai.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8092 /* srar.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8099 /* srar.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8106 /* srar.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8113 /* srar.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8120 /* srari.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8128 /* srari.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8136 /* srari.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8144 /* srari.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8152 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8152 /* srav */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8157 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8157 /* srl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8157 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8157 /* srl */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8157 /* srl */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8161 /* srl.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8167 /* srl.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8173 /* srl.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8179 /* srl.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 8185 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 8185 /* srl16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8191 /* srli.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8198 /* srli.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8205 /* srli.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8212 /* srli.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8219 /* srlr.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8226 /* srlr.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8233 /* srlr.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8240 /* srlr.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8247 /* srlri.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8255 /* srlri.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8263 /* srlri.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8271 /* srlri.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8279 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8279 /* srlv */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8290 /* st.b */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8290 /* st.b */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8295 /* st.d */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8295 /* st.d */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8300 /* st.h */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8300 /* st.h */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8305 /* st.w */, MCK_MSA128AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8305 /* st.w */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8310 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 8310 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8310 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8310 /* sub */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8310 /* sub */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8310 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc, 8310 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8310 /* sub */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8310 /* sub */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6, 8310 /* sub */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_IsNotSoftFloat, 8314 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8314 /* sub.d */, MCK_AFGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat, 8314 /* sub.d */, MCK_FGR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8320 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8320 /* sub.s */, MCK_FGR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8326 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8326 /* subq.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8334 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8334 /* subq_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8344 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8344 /* subq_s.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8353 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8353 /* subqh.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8362 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8362 /* subqh.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8370 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8370 /* subqh_r.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8381 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8381 /* subqh_r.w */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8391 /* subs_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8400 /* subs_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8409 /* subs_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8418 /* subs_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8427 /* subs_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8436 /* subs_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8445 /* subs_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8454 /* subs_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8463 /* subsus_u.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8474 /* subsus_u.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8485 /* subsus_u.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8496 /* subsus_u.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8507 /* subsuu_s.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8518 /* subsuu_s.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8529 /* subsuu_s.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8540 /* subsuu_s.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8551 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8551 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8551 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8551 /* subu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8551 /* subu */, MCK_InvNum, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8551 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8551 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 8551 /* subu */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 8551 /* subu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8551 /* subu */, MCK_InvNum, 4 /* 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8556 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8556 /* subu.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8564 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8564 /* subu.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 8572 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasMicroMips32r6, 8572 /* subu16 */, MCK_GPRMM16AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8579 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8579 /* subu_s.ph */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_InMicroMips, 8589 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP, 8589 /* subu_s.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8599 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8599 /* subuh.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2|Feature_InMicroMips, 8608 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSPR2, 8608 /* subuh_r.qb */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8619 /* subv.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8626 /* subv.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8633 /* subv.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8640 /* subv.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8647 /* subvi.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8655 /* subvi.d */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8663 /* subvi.h */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8671 /* subvi.w */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8679 /* suxc1 */, MCK_AFGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8679 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8679 /* suxc1 */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips5_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8679 /* suxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_InMicroMips, 8685 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8685 /* sw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 8685 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 8685 /* sw */, MCK_MicroMipsMemSP, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8685 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8685 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8685 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8685 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8685 /* sw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8685 /* sw */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8688 /* sw16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_InMicroMips, 8688 /* sw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 8688 /* sw16 */, MCK_GPRMM16AsmRegZero, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 8688 /* sw16 */, MCK_MicroMipsMem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8693 /* swc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat, 8693 /* swc1 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8698 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips32r6, 8698 /* swc2 */, MCK_MemOffsetSimm11, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8698 /* swc2 */, MCK_COP2AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8698 /* swc2 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8703 /* swc3 */, MCK_COP3AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 8703 /* swc3 */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 8708 /* swe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasEVA|Feature_NotInMicroMips, 8708 /* swe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8708 /* swe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8708 /* swe */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8708 /* swe */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8708 /* swe */, MCK_MemOffsetSimm9GPR, 2 /* 1 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8712 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8712 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8712 /* swl */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8712 /* swl */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8716 /* swle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8716 /* swle */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8716 /* swle */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8716 /* swle */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8721 /* swm */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8721 /* swm */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 8725 /* swm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_InMicroMips|Feature_NotMips32r6, 8725 /* swm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_HasMicroMips32r6, 8725 /* swm16 */, MCK_MemOffsetUimm4, 2 /* 1 */ },
  { Feature_HasMicroMips32r6, 8725 /* swm16 */, MCK_RegList16, 1 /* 0 */ },
  { Feature_InMicroMips, 8731 /* swm32 */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8731 /* swm32 */, MCK_RegList, 1 /* 0 */ },
  { Feature_InMicroMips, 8737 /* swp */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8737 /* swp */, MCK_RegPair, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8741 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_NotMips32r6|Feature_NotMips64r6|Feature_NotInMicroMips, 8741 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_InMicroMips, 8741 /* swr */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8741 /* swr */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8745 /* swre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotMips32r6|Feature_NotMips64r6|Feature_HasEVA|Feature_NotInMicroMips, 8745 /* swre */, MCK_MemOffsetSimm9, 2 /* 1 */ },
  { Feature_InMicroMips, 8745 /* swre */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8745 /* swre */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8750 /* swxc1 */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips4_32r2|Feature_NotMips32r6|Feature_NotMips64r6|Feature_IsNotSoftFloat, 8750 /* swxc1 */, MCK_GPR32AsmReg, 10 /* 1, 3 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2, 8761 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 8761 /* synci */, MCK_MemOffsetSimm16, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8805 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8805 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8805 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8805 /* teq */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8809 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8809 /* teqi */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8814 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8814 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8814 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8814 /* tge */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8818 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8818 /* tgei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8823 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8823 /* tgeiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8829 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8829 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8829 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8829 /* tgeu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8871 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8871 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8871 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8871 /* tlt */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8875 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8875 /* tlti */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8880 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8880 /* tltiu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8886 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8886 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8886 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8886 /* tltu */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMips2|Feature_NotInMicroMips, 8891 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8891 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotInMicroMips, 8891 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 8891 /* tne */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_NotMips32r6|Feature_NotMips64r6, 8895 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 8895 /* tnei */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 8900 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8900 /* trunc.l.d */, MCK_FGR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 8910 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_IsNotSoftFloat|Feature_NotInMicroMips, 8910 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8910 /* trunc.l.s */, MCK_FGR32AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8910 /* trunc.l.s */, MCK_FGR64AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8920 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_NotFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8920 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8920 /* trunc.w.d */, MCK_AFGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8920 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8920 /* trunc.w.d */, MCK_FGR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_IsFP64bit|Feature_HasMips2|Feature_IsNotSoftFloat, 8920 /* trunc.w.d */, MCK_FGR64AsmReg, 2 /* 1 */ },
  { Feature_HasStdEnc|Feature_HasMips2|Feature_IsNotSoftFloat, 8930 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_IsNotSoftFloat|Feature_InMicroMips, 8930 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6|Feature_IsNotSoftFloat, 8930 /* trunc.w.s */, MCK_FGR32AsmReg, 3 /* 0, 1 */ },
  { 0, 8940 /* ulh */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8940 /* ulh */, MCK_Mem, 2 /* 1 */ },
  { 0, 8944 /* ulhu */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8944 /* ulhu */, MCK_Mem, 2 /* 1 */ },
  { 0, 8949 /* ulw */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { 0, 8949 /* ulw */, MCK_Mem, 2 /* 1 */ },
  { Feature_HasCnMips, 8953 /* v3mulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8953 /* v3mulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8960 /* vmm0 */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8960 /* vmm0 */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasCnMips, 8965 /* vmulu */, MCK_GPR64AsmReg, 3 /* 0, 1 */ },
  { Feature_HasCnMips, 8965 /* vmulu */, MCK_GPR64AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8971 /* vshf.b */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8978 /* vshf.d */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8985 /* vshf.h */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 8992 /* vshf.w */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasDSP|Feature_NotInMicroMips, 9004 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 9004 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_InMicroMips, 9004 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasDSP|Feature_NotInMicroMips, 9004 /* wrdsp */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9010 /* wrpgpr */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMips32r2|Feature_NotInMicroMips, 9017 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9017 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9017 /* wsbh */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 9022 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9022 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9022 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { 0, 9022 /* xor */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_NotInMicroMips, 9022 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9022 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips, 9022 /* xor */, MCK_GPR32AsmReg, 7 /* 0, 1, 2 */ },
  { 0, 9022 /* xor */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9026 /* xor.v */, MCK_MSA128AsmReg, 7 /* 0, 1, 2 */ },
  { Feature_InMicroMips|Feature_NotMips32r6|Feature_NotMips64r6, 9032 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasMicroMips32r6, 9032 /* xor16 */, MCK_GPRMM16AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9038 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc, 9038 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_InMicroMips, 9038 /* xori */, MCK_GPR32AsmReg, 1 /* 0 */ },
  { Feature_HasStdEnc|Feature_HasMicroMips32r6, 9038 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc, 9038 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_InMicroMips, 9038 /* xori */, MCK_GPR32AsmReg, 3 /* 0, 1 */ },
  { Feature_HasStdEnc|Feature_HasMSA, 9043 /* xori.b */, MCK_MSA128AsmReg, 3 /* 0, 1 */ },
};

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
tryCustomParseOperand(OperandVector &Operands,
                      unsigned MCK) {

  switch(MCK) {
  case MCK_ACC64DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_AFGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_CCRAsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP0AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP2AsmReg:
    return parseAnyRegister(Operands);
  case MCK_COP3AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FCCAsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_FGRH32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR32AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPR64AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmReg:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegMoveP:
    return parseAnyRegister(Operands);
  case MCK_GPRMM16AsmRegZero:
    return parseAnyRegister(Operands);
  case MCK_HI32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_HWRegsAsmReg:
    return parseAnyRegister(Operands);
  case MCK_LO32DSPAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSA128AsmReg:
    return parseAnyRegister(Operands);
  case MCK_MSACtrlAsmReg:
    return parseAnyRegister(Operands);
  case MCK_MicroMipsMem:
    return parseMemOperand(Operands);
  case MCK_MicroMipsMemSP:
    return parseMemOperand(Operands);
  case MCK_InvNum:
    return parseInvNum(Operands);
  case MCK_JumpTarget:
    return parseJumpTarget(Operands);
  case MCK_MemOffsetSimm11:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm16:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm9:
    return parseMemOperand(Operands);
  case MCK_MemOffsetSimm9GPR:
    return parseMemOperand(Operands);
  case MCK_MemOffsetUimm4:
    return parseMemOperand(Operands);
  case MCK_Mem:
    return parseMemOperand(Operands);
  case MCK_MovePRegPair:
    return parseMovePRegPair(Operands);
  case MCK_RegList16:
    return parseRegisterList(Operands);
  case MCK_RegList:
    return parseRegisterList(Operands);
  case MCK_RegPair:
    return parseRegisterPair(Operands);
  default:
    return MatchOperand_NoMatch;
  }
  return MatchOperand_NoMatch;
}

MipsAsmParser::OperandMatchResultTy MipsAsmParser::
MatchOperandParserImpl(OperandVector &Operands,
                       StringRef Mnemonic) {
  // Get the current feature set.
  uint64_t AvailableFeatures = getAvailableFeatures();

  // Get the next operand index.
  unsigned NextOpNum = Operands.size() - 1;
  // Search the table.
  auto MnemonicRange =
    std::equal_range(std::begin(OperandMatchTable), std::end(OperandMatchTable),
                     Mnemonic, LessOpcodeOperand());

  if (MnemonicRange.first == MnemonicRange.second)
    return MatchOperand_NoMatch;

  for (const OperandMatchEntry *it = MnemonicRange.first,
       *ie = MnemonicRange.second; it != ie; ++it) {
    // equal_range guarantees that instruction mnemonic matches.
    assert(Mnemonic == it->getMnemonic());

    // check if the available features match
    if ((AvailableFeatures & it->RequiredFeatures) != it->RequiredFeatures) {
      continue;
    }

    // check if the operand in question has a custom parser.
    if (!(it->OperandMask & (1 << NextOpNum)))
      continue;

    // call custom parse method to handle the operand
    OperandMatchResultTy Result = tryCustomParseOperand(Operands, it->Class);
    if (Result != MatchOperand_NoMatch)
      return Result;
  }

  // Okay, we had no match.
  return MatchOperand_NoMatch;
}

#endif // GET_MATCHER_IMPLEMENTATION

