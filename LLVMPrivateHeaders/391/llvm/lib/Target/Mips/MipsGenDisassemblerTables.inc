/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|*  * Mips Disassembler                                                       *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#include "llvm/MC/MCInst.h"
#include "llvm/Support/Debug.h"
#include "llvm/Support/DataTypes.h"
#include "llvm/Support/LEB128.h"
#include "llvm/Support/raw_ostream.h"
#include <assert.h>

namespace llvm {

// Helper function for extracting fields from encoded instructions.
template<typename InsnType>
static InsnType fieldFromInstruction(InsnType insn, unsigned startBit,
                                     unsigned numBits) {
    assert(startBit + numBits <= (sizeof(InsnType)*8) &&
           "Instruction field out of bounds!");
    InsnType fieldMask;
    if (numBits == sizeof(InsnType)*8)
      fieldMask = (InsnType)(-1LL);
    else
      fieldMask = (((InsnType)1 << numBits) - 1) << startBit;
    return (insn & fieldMask) >> startBit;
}

static const uint8_t DecoderTable16[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 0, 245, 1, // Skip to: 512
/* 11 */      MCD::OPC_Decode, 165, 3, 0, // Opcode: Bimm16
/* 15 */      MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 0, 233, 1, // Skip to: 512
/* 23 */      MCD::OPC_Decode, 163, 3, 1, // Opcode: BeqzRxImm16
/* 27 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 0, 221, 1, // Skip to: 512
/* 35 */      MCD::OPC_Decode, 168, 3, 1, // Opcode: BnezRxImm16
/* 39 */      MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 0, 209, 1, // Skip to: 512
/* 47 */      MCD::OPC_Decode, 199, 1, 2, // Opcode: AddiuRxRxImm16
/* 51 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 63
/* 55 */      MCD::OPC_CheckPredicate, 0, 197, 1, // Skip to: 512
/* 59 */      MCD::OPC_Decode, 196, 17, 1, // Opcode: SltiRxImm16
/* 63 */      MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 75
/* 67 */      MCD::OPC_CheckPredicate, 0, 185, 1, // Skip to: 512
/* 71 */      MCD::OPC_Decode, 199, 17, 1, // Opcode: SltiuRxImm16
/* 75 */      MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 142
/* 79 */      MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 82 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 94
/* 86 */      MCD::OPC_CheckPredicate, 0, 166, 1, // Skip to: 512
/* 90 */      MCD::OPC_Decode, 171, 3, 0, // Opcode: Bteqz16
/* 94 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 0, 154, 1, // Skip to: 512
/* 102 */     MCD::OPC_Decode, 179, 3, 0, // Opcode: Btnez16
/* 106 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 118
/* 110 */     MCD::OPC_CheckPredicate, 0, 142, 1, // Skip to: 512
/* 114 */     MCD::OPC_Decode, 202, 1, 0, // Opcode: AddiuSpImm16
/* 118 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 0, 130, 1, // Skip to: 512
/* 126 */     MCD::OPC_Decode, 234, 12, 3, // Opcode: Move32R16
/* 130 */     MCD::OPC_FilterValue, 7, 122, 1, // Skip to: 512
/* 134 */     MCD::OPC_CheckPredicate, 0, 118, 1, // Skip to: 512
/* 138 */     MCD::OPC_Decode, 235, 12, 4, // Opcode: MoveR3216
/* 142 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 154
/* 146 */     MCD::OPC_CheckPredicate, 0, 106, 1, // Skip to: 512
/* 150 */     MCD::OPC_Decode, 192, 10, 1, // Opcode: LiRxImm16
/* 154 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 166
/* 158 */     MCD::OPC_CheckPredicate, 0, 94, 1, // Skip to: 512
/* 162 */     MCD::OPC_Decode, 190, 5, 1, // Opcode: CmpiRxImm16
/* 166 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 178
/* 170 */     MCD::OPC_CheckPredicate, 0, 82, 1, // Skip to: 512
/* 174 */     MCD::OPC_Decode, 202, 10, 1, // Opcode: LwRxPcTcp16
/* 178 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 209
/* 182 */     MCD::OPC_ExtractField, 0, 2,  // Inst{1-0} ...
/* 185 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 197
/* 189 */     MCD::OPC_CheckPredicate, 0, 63, 1, // Skip to: 512
/* 193 */     MCD::OPC_Decode, 204, 1, 5, // Opcode: AdduRxRyRz16
/* 197 */     MCD::OPC_FilterValue, 3, 55, 1, // Skip to: 512
/* 201 */     MCD::OPC_CheckPredicate, 0, 51, 1, // Skip to: 512
/* 205 */     MCD::OPC_Decode, 208, 17, 5, // Opcode: SubuRxRyRz16
/* 209 */     MCD::OPC_FilterValue, 29, 43, 1, // Skip to: 512
/* 213 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 216 */     MCD::OPC_FilterValue, 0, 63, 0, // Skip to: 283
/* 220 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 223 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 235
/* 227 */     MCD::OPC_CheckPredicate, 0, 25, 1, // Skip to: 512
/* 231 */     MCD::OPC_Decode, 185, 9, 0, // Opcode: JumpLinkReg16
/* 235 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 253
/* 239 */     MCD::OPC_CheckPredicate, 0, 13, 1, // Skip to: 512
/* 243 */     MCD::OPC_CheckField, 8, 3, 0, 7, 1, // Skip to: 512
/* 249 */     MCD::OPC_Decode, 182, 9, 0, // Opcode: JrRa16
/* 253 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 265
/* 257 */     MCD::OPC_CheckPredicate, 0, 251, 0, // Skip to: 512
/* 261 */     MCD::OPC_Decode, 184, 9, 1, // Opcode: JrcRx16
/* 265 */     MCD::OPC_FilterValue, 7, 243, 0, // Skip to: 512
/* 269 */     MCD::OPC_CheckPredicate, 0, 239, 0, // Skip to: 512
/* 273 */     MCD::OPC_CheckField, 8, 3, 0, 233, 0, // Skip to: 512
/* 279 */     MCD::OPC_Decode, 183, 9, 0, // Opcode: JrcRa16
/* 283 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 295
/* 287 */     MCD::OPC_CheckPredicate, 0, 221, 0, // Skip to: 512
/* 291 */     MCD::OPC_Decode, 194, 17, 6, // Opcode: SltRxRy16
/* 295 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 307
/* 299 */     MCD::OPC_CheckPredicate, 0, 209, 0, // Skip to: 512
/* 303 */     MCD::OPC_Decode, 202, 17, 6, // Opcode: SltuRxRy16
/* 307 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 0, 197, 0, // Skip to: 512
/* 315 */     MCD::OPC_Decode, 192, 17, 7, // Opcode: SllvRxRy16
/* 319 */     MCD::OPC_FilterValue, 5, 14, 0, // Skip to: 337
/* 323 */     MCD::OPC_CheckPredicate, 0, 185, 0, // Skip to: 512
/* 327 */     MCD::OPC_CheckField, 5, 6, 0, 179, 0, // Skip to: 512
/* 333 */     MCD::OPC_Decode, 170, 3, 0, // Opcode: Break16
/* 337 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 0, 167, 0, // Skip to: 512
/* 345 */     MCD::OPC_Decode, 207, 17, 7, // Opcode: SrlvRxRy16
/* 349 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 0, 155, 0, // Skip to: 512
/* 357 */     MCD::OPC_Decode, 205, 17, 7, // Opcode: SravRxRy16
/* 361 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 373
/* 365 */     MCD::OPC_CheckPredicate, 0, 143, 0, // Skip to: 512
/* 369 */     MCD::OPC_Decode, 189, 5, 6, // Opcode: CmpRxRy16
/* 373 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 385
/* 377 */     MCD::OPC_CheckPredicate, 0, 131, 0, // Skip to: 512
/* 381 */     MCD::OPC_Decode, 205, 1, 7, // Opcode: AndRxRxRy16
/* 385 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 397
/* 389 */     MCD::OPC_CheckPredicate, 0, 119, 0, // Skip to: 512
/* 393 */     MCD::OPC_Decode, 160, 13, 7, // Opcode: OrRxRxRy16
/* 397 */     MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 0, 107, 0, // Skip to: 512
/* 405 */     MCD::OPC_Decode, 172, 18, 7, // Opcode: XorRxRxRy16
/* 409 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 0, 95, 0, // Skip to: 512
/* 417 */     MCD::OPC_Decode, 144, 13, 6, // Opcode: NotRxRy16
/* 421 */     MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 0, 83, 0, // Skip to: 512
/* 429 */     MCD::OPC_Decode, 232, 12, 1, // Opcode: Mfhi16
/* 433 */     MCD::OPC_FilterValue, 17, 27, 0, // Skip to: 464
/* 437 */     MCD::OPC_ExtractField, 5, 3,  // Inst{7-5} ...
/* 440 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 452
/* 444 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 512
/* 448 */     MCD::OPC_Decode, 174, 17, 2, // Opcode: SebRx16
/* 452 */     MCD::OPC_FilterValue, 5, 56, 0, // Skip to: 512
/* 456 */     MCD::OPC_CheckPredicate, 0, 52, 0, // Skip to: 512
/* 460 */     MCD::OPC_Decode, 175, 17, 2, // Opcode: SehRx16
/* 464 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 476
/* 468 */     MCD::OPC_CheckPredicate, 0, 40, 0, // Skip to: 512
/* 472 */     MCD::OPC_Decode, 233, 12, 1, // Opcode: Mflo16
/* 476 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 488
/* 480 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 512
/* 484 */     MCD::OPC_Decode, 245, 6, 6, // Opcode: DivRxRy16
/* 488 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 500
/* 492 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 512
/* 496 */     MCD::OPC_Decode, 246, 6, 6, // Opcode: DivuRxRy16
/* 500 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 512
/* 504 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 512
/* 508 */     MCD::OPC_Decode, 143, 13, 6, // Opcode: NegRxRy16
/* 512 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTable32[] = {
/* 0 */       MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3 */       MCD::OPC_FilterValue, 1, 20, 0, // Skip to: 27
/* 7 */       MCD::OPC_CheckPredicate, 0, 186, 1, // Skip to: 453
/* 11 */      MCD::OPC_CheckField, 27, 5, 30, 180, 1, // Skip to: 453
/* 17 */      MCD::OPC_CheckField, 5, 3, 0, 174, 1, // Skip to: 453
/* 23 */      MCD::OPC_Decode, 198, 1, 1, // Opcode: AddiuRxPcImmX16
/* 27 */      MCD::OPC_FilterValue, 2, 20, 0, // Skip to: 51
/* 31 */      MCD::OPC_CheckPredicate, 0, 162, 1, // Skip to: 453
/* 35 */      MCD::OPC_CheckField, 27, 5, 30, 156, 1, // Skip to: 453
/* 41 */      MCD::OPC_CheckField, 5, 6, 0, 150, 1, // Skip to: 453
/* 47 */      MCD::OPC_Decode, 166, 3, 8, // Opcode: BimmX16
/* 51 */      MCD::OPC_FilterValue, 4, 20, 0, // Skip to: 75
/* 55 */      MCD::OPC_CheckPredicate, 0, 138, 1, // Skip to: 453
/* 59 */      MCD::OPC_CheckField, 27, 5, 30, 132, 1, // Skip to: 453
/* 65 */      MCD::OPC_CheckField, 5, 3, 0, 126, 1, // Skip to: 453
/* 71 */      MCD::OPC_Decode, 164, 3, 1, // Opcode: BeqzRxImmX16
/* 75 */      MCD::OPC_FilterValue, 5, 20, 0, // Skip to: 99
/* 79 */      MCD::OPC_CheckPredicate, 0, 114, 1, // Skip to: 453
/* 83 */      MCD::OPC_CheckField, 27, 5, 30, 108, 1, // Skip to: 453
/* 89 */      MCD::OPC_CheckField, 5, 3, 0, 102, 1, // Skip to: 453
/* 95 */      MCD::OPC_Decode, 169, 3, 1, // Opcode: BnezRxImmX16
/* 99 */      MCD::OPC_FilterValue, 6, 92, 0, // Skip to: 195
/* 103 */     MCD::OPC_ExtractField, 27, 5,  // Inst{31-27} ...
/* 106 */     MCD::OPC_FilterValue, 30, 87, 1, // Skip to: 453
/* 110 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 113 */     MCD::OPC_FilterValue, 0, 39, 0, // Skip to: 156
/* 117 */     MCD::OPC_ExtractField, 0, 5,  // Inst{4-0} ...
/* 120 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 132
/* 124 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 156
/* 128 */     MCD::OPC_Decode, 191, 17, 6, // Opcode: SllX16
/* 132 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 144
/* 136 */     MCD::OPC_CheckPredicate, 0, 16, 0, // Skip to: 156
/* 140 */     MCD::OPC_Decode, 206, 17, 6, // Opcode: SrlX16
/* 144 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 156
/* 148 */     MCD::OPC_CheckPredicate, 0, 4, 0, // Skip to: 156
/* 152 */     MCD::OPC_Decode, 204, 17, 6, // Opcode: SraX16
/* 156 */     MCD::OPC_ExtractField, 5, 6,  // Inst{10-5} ...
/* 159 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 171
/* 163 */     MCD::OPC_CheckPredicate, 0, 30, 1, // Skip to: 453
/* 167 */     MCD::OPC_Decode, 178, 3, 0, // Opcode: BteqzX16
/* 171 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 183
/* 175 */     MCD::OPC_CheckPredicate, 0, 18, 1, // Skip to: 453
/* 179 */     MCD::OPC_Decode, 186, 3, 0, // Opcode: BtnezX16
/* 183 */     MCD::OPC_FilterValue, 24, 10, 1, // Skip to: 453
/* 187 */     MCD::OPC_CheckPredicate, 0, 6, 1, // Skip to: 453
/* 191 */     MCD::OPC_Decode, 203, 1, 0, // Opcode: AddiuSpImmX16
/* 195 */     MCD::OPC_FilterValue, 8, 20, 0, // Skip to: 219
/* 199 */     MCD::OPC_CheckPredicate, 0, 250, 0, // Skip to: 453
/* 203 */     MCD::OPC_CheckField, 27, 5, 30, 244, 0, // Skip to: 453
/* 209 */     MCD::OPC_CheckField, 4, 1, 0, 238, 0, // Skip to: 453
/* 215 */     MCD::OPC_Decode, 201, 1, 9, // Opcode: AddiuRxRyOffMemX16
/* 219 */     MCD::OPC_FilterValue, 9, 20, 0, // Skip to: 243
/* 223 */     MCD::OPC_CheckPredicate, 0, 226, 0, // Skip to: 453
/* 227 */     MCD::OPC_CheckField, 27, 5, 30, 220, 0, // Skip to: 453
/* 233 */     MCD::OPC_CheckField, 5, 3, 0, 214, 0, // Skip to: 453
/* 239 */     MCD::OPC_Decode, 197, 1, 1, // Opcode: AddiuRxImmX16
/* 243 */     MCD::OPC_FilterValue, 10, 20, 0, // Skip to: 267
/* 247 */     MCD::OPC_CheckPredicate, 0, 202, 0, // Skip to: 453
/* 251 */     MCD::OPC_CheckField, 27, 5, 30, 196, 0, // Skip to: 453
/* 257 */     MCD::OPC_CheckField, 5, 3, 0, 190, 0, // Skip to: 453
/* 263 */     MCD::OPC_Decode, 197, 17, 1, // Opcode: SltiRxImmX16
/* 267 */     MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 291
/* 271 */     MCD::OPC_CheckPredicate, 0, 178, 0, // Skip to: 453
/* 275 */     MCD::OPC_CheckField, 27, 5, 30, 172, 0, // Skip to: 453
/* 281 */     MCD::OPC_CheckField, 5, 3, 0, 166, 0, // Skip to: 453
/* 287 */     MCD::OPC_Decode, 200, 17, 1, // Opcode: SltiuRxImmX16
/* 291 */     MCD::OPC_FilterValue, 13, 20, 0, // Skip to: 315
/* 295 */     MCD::OPC_CheckPredicate, 0, 154, 0, // Skip to: 453
/* 299 */     MCD::OPC_CheckField, 27, 5, 30, 148, 0, // Skip to: 453
/* 305 */     MCD::OPC_CheckField, 5, 3, 0, 142, 0, // Skip to: 453
/* 311 */     MCD::OPC_Decode, 194, 10, 1, // Opcode: LiRxImmX16
/* 315 */     MCD::OPC_FilterValue, 14, 20, 0, // Skip to: 339
/* 319 */     MCD::OPC_CheckPredicate, 0, 130, 0, // Skip to: 453
/* 323 */     MCD::OPC_CheckField, 27, 5, 30, 124, 0, // Skip to: 453
/* 329 */     MCD::OPC_CheckField, 5, 3, 0, 118, 0, // Skip to: 453
/* 335 */     MCD::OPC_Decode, 191, 5, 1, // Opcode: CmpiRxImmX16
/* 339 */     MCD::OPC_FilterValue, 18, 14, 0, // Skip to: 357
/* 343 */     MCD::OPC_CheckPredicate, 0, 106, 0, // Skip to: 453
/* 347 */     MCD::OPC_CheckField, 27, 5, 30, 100, 0, // Skip to: 453
/* 353 */     MCD::OPC_Decode, 205, 10, 9, // Opcode: LwRxSpImmX16
/* 357 */     MCD::OPC_FilterValue, 22, 20, 0, // Skip to: 381
/* 361 */     MCD::OPC_CheckPredicate, 0, 88, 0, // Skip to: 453
/* 365 */     MCD::OPC_CheckField, 27, 5, 30, 82, 0, // Skip to: 453
/* 371 */     MCD::OPC_CheckField, 5, 3, 0, 76, 0, // Skip to: 453
/* 377 */     MCD::OPC_Decode, 203, 10, 1, // Opcode: LwRxPcTcpX16
/* 381 */     MCD::OPC_FilterValue, 24, 14, 0, // Skip to: 399
/* 385 */     MCD::OPC_CheckPredicate, 0, 64, 0, // Skip to: 453
/* 389 */     MCD::OPC_CheckField, 27, 5, 30, 58, 0, // Skip to: 453
/* 395 */     MCD::OPC_Decode, 173, 17, 9, // Opcode: SbRxRyOffMemX16
/* 399 */     MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 417
/* 403 */     MCD::OPC_CheckPredicate, 0, 46, 0, // Skip to: 453
/* 407 */     MCD::OPC_CheckField, 27, 5, 30, 40, 0, // Skip to: 453
/* 413 */     MCD::OPC_Decode, 190, 17, 9, // Opcode: ShRxRyOffMemX16
/* 417 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 435
/* 421 */     MCD::OPC_CheckPredicate, 0, 28, 0, // Skip to: 453
/* 425 */     MCD::OPC_CheckField, 27, 5, 30, 22, 0, // Skip to: 453
/* 431 */     MCD::OPC_Decode, 210, 17, 9, // Opcode: SwRxSpImmX16
/* 435 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 0, 10, 0, // Skip to: 453
/* 443 */     MCD::OPC_CheckField, 27, 5, 30, 4, 0, // Skip to: 453
/* 449 */     MCD::OPC_Decode, 209, 17, 9, // Opcode: SwRxRyOffMemX16
/* 453 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCOP3_32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 15
/* 7 */       MCD::OPC_CheckPredicate, 1, 40, 0, // Skip to: 51
/* 11 */      MCD::OPC_Decode, 153, 10, 10, // Opcode: LWC3
/* 15 */      MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 27
/* 19 */      MCD::OPC_CheckPredicate, 2, 28, 0, // Skip to: 51
/* 23 */      MCD::OPC_Decode, 211, 9, 10, // Opcode: LDC3
/* 27 */      MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 39
/* 31 */      MCD::OPC_CheckPredicate, 1, 16, 0, // Skip to: 51
/* 35 */      MCD::OPC_Decode, 133, 17, 10, // Opcode: SWC3
/* 39 */      MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 51
/* 43 */      MCD::OPC_CheckPredicate, 2, 4, 0, // Skip to: 51
/* 47 */      MCD::OPC_Decode, 242, 14, 10, // Opcode: SDC3
/* 51 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableCnMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 18, 27, 0, // Skip to: 34
/* 7 */       MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 22
/* 14 */      MCD::OPC_CheckPredicate, 3, 169, 1, // Skip to: 443
/* 18 */      MCD::OPC_Decode, 129, 6, 11, // Opcode: DMFC2_OCTEON
/* 22 */      MCD::OPC_FilterValue, 5, 161, 1, // Skip to: 443
/* 26 */      MCD::OPC_CheckPredicate, 3, 157, 1, // Skip to: 443
/* 30 */      MCD::OPC_Decode, 140, 6, 11, // Opcode: DMTC2_OCTEON
/* 34 */      MCD::OPC_FilterValue, 28, 101, 1, // Skip to: 395
/* 38 */      MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 41 */      MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 59
/* 45 */      MCD::OPC_CheckPredicate, 3, 138, 1, // Skip to: 443
/* 49 */      MCD::OPC_CheckField, 6, 5, 0, 132, 1, // Skip to: 443
/* 55 */      MCD::OPC_Decode, 145, 6, 12, // Opcode: DMUL
/* 59 */      MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 77
/* 63 */      MCD::OPC_CheckPredicate, 3, 120, 1, // Skip to: 443
/* 67 */      MCD::OPC_CheckField, 6, 15, 0, 114, 1, // Skip to: 443
/* 73 */      MCD::OPC_Decode, 176, 12, 13, // Opcode: MTM0
/* 77 */      MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 95
/* 81 */      MCD::OPC_CheckPredicate, 3, 102, 1, // Skip to: 443
/* 85 */      MCD::OPC_CheckField, 6, 15, 0, 96, 1, // Skip to: 443
/* 91 */      MCD::OPC_Decode, 179, 12, 13, // Opcode: MTP0
/* 95 */      MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 113
/* 99 */      MCD::OPC_CheckPredicate, 3, 84, 1, // Skip to: 443
/* 103 */     MCD::OPC_CheckField, 6, 15, 0, 78, 1, // Skip to: 443
/* 109 */     MCD::OPC_Decode, 180, 12, 13, // Opcode: MTP1
/* 113 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 131
/* 117 */     MCD::OPC_CheckPredicate, 3, 66, 1, // Skip to: 443
/* 121 */     MCD::OPC_CheckField, 6, 15, 0, 60, 1, // Skip to: 443
/* 127 */     MCD::OPC_Decode, 181, 12, 13, // Opcode: MTP2
/* 131 */     MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 149
/* 135 */     MCD::OPC_CheckPredicate, 3, 48, 1, // Skip to: 443
/* 139 */     MCD::OPC_CheckField, 6, 15, 0, 42, 1, // Skip to: 443
/* 145 */     MCD::OPC_Decode, 177, 12, 13, // Opcode: MTM1
/* 149 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 167
/* 153 */     MCD::OPC_CheckPredicate, 3, 30, 1, // Skip to: 443
/* 157 */     MCD::OPC_CheckField, 6, 15, 0, 24, 1, // Skip to: 443
/* 163 */     MCD::OPC_Decode, 178, 12, 13, // Opcode: MTM2
/* 167 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 185
/* 171 */     MCD::OPC_CheckPredicate, 3, 12, 1, // Skip to: 443
/* 175 */     MCD::OPC_CheckField, 6, 5, 0, 6, 1, // Skip to: 443
/* 181 */     MCD::OPC_Decode, 143, 18, 12, // Opcode: VMULU
/* 185 */     MCD::OPC_FilterValue, 16, 14, 0, // Skip to: 203
/* 189 */     MCD::OPC_CheckPredicate, 3, 250, 0, // Skip to: 443
/* 193 */     MCD::OPC_CheckField, 6, 5, 0, 244, 0, // Skip to: 443
/* 199 */     MCD::OPC_Decode, 142, 18, 12, // Opcode: VMM0
/* 203 */     MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 221
/* 207 */     MCD::OPC_CheckPredicate, 3, 232, 0, // Skip to: 443
/* 211 */     MCD::OPC_CheckField, 6, 5, 0, 226, 0, // Skip to: 443
/* 217 */     MCD::OPC_Decode, 141, 18, 12, // Opcode: V3MULU
/* 221 */     MCD::OPC_FilterValue, 40, 14, 0, // Skip to: 239
/* 225 */     MCD::OPC_CheckPredicate, 3, 214, 0, // Skip to: 443
/* 229 */     MCD::OPC_CheckField, 6, 5, 0, 208, 0, // Skip to: 443
/* 235 */     MCD::OPC_Decode, 208, 1, 12, // Opcode: BADDu
/* 239 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 257
/* 243 */     MCD::OPC_CheckPredicate, 3, 196, 0, // Skip to: 443
/* 247 */     MCD::OPC_CheckField, 6, 5, 0, 190, 0, // Skip to: 443
/* 253 */     MCD::OPC_Decode, 150, 15, 12, // Opcode: SEQ
/* 257 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 275
/* 261 */     MCD::OPC_CheckPredicate, 3, 178, 0, // Skip to: 443
/* 265 */     MCD::OPC_CheckField, 6, 5, 0, 172, 0, // Skip to: 443
/* 271 */     MCD::OPC_Decode, 249, 15, 12, // Opcode: SNE
/* 275 */     MCD::OPC_FilterValue, 44, 20, 0, // Skip to: 299
/* 279 */     MCD::OPC_CheckPredicate, 3, 160, 0, // Skip to: 443
/* 283 */     MCD::OPC_CheckField, 16, 5, 0, 154, 0, // Skip to: 443
/* 289 */     MCD::OPC_CheckField, 6, 5, 0, 148, 0, // Skip to: 443
/* 295 */     MCD::OPC_Decode, 182, 13, 14, // Opcode: POP
/* 299 */     MCD::OPC_FilterValue, 45, 20, 0, // Skip to: 323
/* 303 */     MCD::OPC_CheckPredicate, 3, 136, 0, // Skip to: 443
/* 307 */     MCD::OPC_CheckField, 16, 5, 0, 130, 0, // Skip to: 443
/* 313 */     MCD::OPC_CheckField, 6, 5, 0, 124, 0, // Skip to: 443
/* 319 */     MCD::OPC_Decode, 180, 6, 15, // Opcode: DPOP
/* 323 */     MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 335
/* 327 */     MCD::OPC_CheckPredicate, 3, 112, 0, // Skip to: 443
/* 331 */     MCD::OPC_Decode, 151, 15, 16, // Opcode: SEQi
/* 335 */     MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 347
/* 339 */     MCD::OPC_CheckPredicate, 3, 100, 0, // Skip to: 443
/* 343 */     MCD::OPC_Decode, 250, 15, 16, // Opcode: SNEi
/* 347 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 359
/* 351 */     MCD::OPC_CheckPredicate, 3, 88, 0, // Skip to: 443
/* 355 */     MCD::OPC_Decode, 218, 3, 17, // Opcode: CINS
/* 359 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 371
/* 363 */     MCD::OPC_CheckPredicate, 3, 76, 0, // Skip to: 443
/* 367 */     MCD::OPC_Decode, 219, 3, 17, // Opcode: CINS32
/* 371 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 383
/* 375 */     MCD::OPC_CheckPredicate, 3, 64, 0, // Skip to: 443
/* 379 */     MCD::OPC_Decode, 157, 7, 17, // Opcode: EXTS
/* 383 */     MCD::OPC_FilterValue, 59, 56, 0, // Skip to: 443
/* 387 */     MCD::OPC_CheckPredicate, 3, 52, 0, // Skip to: 443
/* 391 */     MCD::OPC_Decode, 158, 7, 17, // Opcode: EXTS32
/* 395 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 407
/* 399 */     MCD::OPC_CheckPredicate, 3, 40, 0, // Skip to: 443
/* 403 */     MCD::OPC_Decode, 215, 1, 18, // Opcode: BBIT0
/* 407 */     MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 419
/* 411 */     MCD::OPC_CheckPredicate, 3, 28, 0, // Skip to: 443
/* 415 */     MCD::OPC_Decode, 216, 1, 18, // Opcode: BBIT032
/* 419 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 431
/* 423 */     MCD::OPC_CheckPredicate, 3, 16, 0, // Skip to: 443
/* 427 */     MCD::OPC_Decode, 217, 1, 18, // Opcode: BBIT1
/* 431 */     MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 443
/* 435 */     MCD::OPC_CheckPredicate, 3, 4, 0, // Skip to: 443
/* 439 */     MCD::OPC_Decode, 218, 1, 18, // Opcode: BBIT132
/* 443 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips16[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 21
/* 14 */      MCD::OPC_CheckPredicate, 4, 19, 2, // Skip to: 549
/* 18 */      MCD::OPC_Decode, 75, 19, // Opcode: ADDU16_MM
/* 21 */      MCD::OPC_FilterValue, 1, 12, 2, // Skip to: 549
/* 25 */      MCD::OPC_CheckPredicate, 4, 8, 2, // Skip to: 549
/* 29 */      MCD::OPC_Decode, 222, 16, 19, // Opcode: SUBU16_MM
/* 33 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 5, 252, 1, // Skip to: 549
/* 41 */      MCD::OPC_Decode, 191, 9, 20, // Opcode: LBU16_MM
/* 45 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 57
/* 49 */      MCD::OPC_CheckPredicate, 5, 240, 1, // Skip to: 549
/* 53 */      MCD::OPC_Decode, 209, 11, 21, // Opcode: MOVE16_MM
/* 57 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 88
/* 61 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 64 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 76
/* 68 */      MCD::OPC_CheckPredicate, 4, 221, 1, // Skip to: 549
/* 72 */      MCD::OPC_Decode, 221, 15, 22, // Opcode: SLL16_MM
/* 76 */      MCD::OPC_FilterValue, 1, 213, 1, // Skip to: 549
/* 80 */      MCD::OPC_CheckPredicate, 4, 209, 1, // Skip to: 549
/* 84 */      MCD::OPC_Decode, 159, 16, 22, // Opcode: SRL16_MM
/* 88 */      MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 100
/* 92 */      MCD::OPC_CheckPredicate, 5, 197, 1, // Skip to: 549
/* 96 */      MCD::OPC_Decode, 234, 9, 20, // Opcode: LHU16_MM
/* 100 */     MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 111
/* 104 */     MCD::OPC_CheckPredicate, 4, 185, 1, // Skip to: 549
/* 108 */     MCD::OPC_Decode, 122, 23, // Opcode: ANDI16_MM
/* 111 */     MCD::OPC_FilterValue, 17, 226, 0, // Skip to: 341
/* 115 */     MCD::OPC_ExtractField, 6, 4,  // Inst{9-6} ...
/* 118 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 130
/* 122 */     MCD::OPC_CheckPredicate, 4, 167, 1, // Skip to: 549
/* 126 */     MCD::OPC_Decode, 141, 13, 24, // Opcode: NOT16_MM
/* 130 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 142
/* 134 */     MCD::OPC_CheckPredicate, 4, 155, 1, // Skip to: 549
/* 138 */     MCD::OPC_Decode, 158, 18, 25, // Opcode: XOR16_MM
/* 142 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 153
/* 146 */     MCD::OPC_CheckPredicate, 4, 143, 1, // Skip to: 549
/* 150 */     MCD::OPC_Decode, 119, 25, // Opcode: AND16_MM
/* 153 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 165
/* 157 */     MCD::OPC_CheckPredicate, 4, 132, 1, // Skip to: 549
/* 161 */     MCD::OPC_Decode, 146, 13, 25, // Opcode: OR16_MM
/* 165 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 6, 120, 1, // Skip to: 549
/* 173 */     MCD::OPC_Decode, 163, 10, 26, // Opcode: LWM16_MM
/* 177 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 6, 108, 1, // Skip to: 549
/* 185 */     MCD::OPC_Decode, 142, 17, 26, // Opcode: SWM16_MM
/* 189 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 220
/* 193 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 196 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 208
/* 200 */     MCD::OPC_CheckPredicate, 5, 89, 1, // Skip to: 549
/* 204 */     MCD::OPC_Decode, 168, 9, 27, // Opcode: JR16_MM
/* 208 */     MCD::OPC_FilterValue, 1, 81, 1, // Skip to: 549
/* 212 */     MCD::OPC_CheckPredicate, 5, 77, 1, // Skip to: 549
/* 216 */     MCD::OPC_Decode, 171, 9, 27, // Opcode: JRC16_MM
/* 220 */     MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 251
/* 224 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 227 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 239
/* 231 */     MCD::OPC_CheckPredicate, 6, 58, 1, // Skip to: 549
/* 235 */     MCD::OPC_Decode, 146, 9, 27, // Opcode: JALR16_MM
/* 239 */     MCD::OPC_FilterValue, 1, 50, 1, // Skip to: 549
/* 243 */     MCD::OPC_CheckPredicate, 5, 46, 1, // Skip to: 549
/* 247 */     MCD::OPC_Decode, 153, 9, 27, // Opcode: JALRS16_MM
/* 251 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 269
/* 255 */     MCD::OPC_CheckPredicate, 5, 34, 1, // Skip to: 549
/* 259 */     MCD::OPC_CheckField, 5, 1, 0, 28, 1, // Skip to: 549
/* 265 */     MCD::OPC_Decode, 154, 11, 27, // Opcode: MFHI16_MM
/* 269 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 287
/* 273 */     MCD::OPC_CheckPredicate, 5, 16, 1, // Skip to: 549
/* 277 */     MCD::OPC_CheckField, 5, 1, 0, 10, 1, // Skip to: 549
/* 283 */     MCD::OPC_Decode, 160, 11, 27, // Opcode: MFLO16_MM
/* 287 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 305
/* 291 */     MCD::OPC_CheckPredicate, 4, 254, 0, // Skip to: 549
/* 295 */     MCD::OPC_CheckField, 4, 2, 0, 248, 0, // Skip to: 549
/* 301 */     MCD::OPC_Decode, 136, 3, 28, // Opcode: BREAK16_MM
/* 305 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 323
/* 309 */     MCD::OPC_CheckPredicate, 4, 236, 0, // Skip to: 549
/* 313 */     MCD::OPC_CheckField, 4, 2, 0, 230, 0, // Skip to: 549
/* 319 */     MCD::OPC_Decode, 230, 14, 28, // Opcode: SDBBP16_MM
/* 323 */     MCD::OPC_FilterValue, 12, 222, 0, // Skip to: 549
/* 327 */     MCD::OPC_CheckPredicate, 5, 218, 0, // Skip to: 549
/* 331 */     MCD::OPC_CheckField, 5, 1, 0, 212, 0, // Skip to: 549
/* 337 */     MCD::OPC_Decode, 170, 9, 29, // Opcode: JRADDIUSP
/* 341 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 353
/* 345 */     MCD::OPC_CheckPredicate, 5, 200, 0, // Skip to: 549
/* 349 */     MCD::OPC_Decode, 176, 10, 30, // Opcode: LWSP_MM
/* 353 */     MCD::OPC_FilterValue, 19, 25, 0, // Skip to: 382
/* 357 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 360 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 371
/* 364 */     MCD::OPC_CheckPredicate, 5, 181, 0, // Skip to: 549
/* 368 */     MCD::OPC_Decode, 44, 31, // Opcode: ADDIUS5_MM
/* 371 */     MCD::OPC_FilterValue, 1, 174, 0, // Skip to: 549
/* 375 */     MCD::OPC_CheckPredicate, 5, 170, 0, // Skip to: 549
/* 379 */     MCD::OPC_Decode, 45, 32, // Opcode: ADDIUSP_MM
/* 382 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 394
/* 386 */     MCD::OPC_CheckPredicate, 5, 159, 0, // Skip to: 549
/* 390 */     MCD::OPC_Decode, 157, 10, 33, // Opcode: LWGP_MM
/* 394 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 406
/* 398 */     MCD::OPC_CheckPredicate, 5, 147, 0, // Skip to: 549
/* 402 */     MCD::OPC_Decode, 146, 10, 20, // Opcode: LW16_MM
/* 406 */     MCD::OPC_FilterValue, 27, 25, 0, // Skip to: 435
/* 410 */     MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 413 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 424
/* 417 */     MCD::OPC_CheckPredicate, 5, 128, 0, // Skip to: 549
/* 421 */     MCD::OPC_Decode, 43, 34, // Opcode: ADDIUR2_MM
/* 424 */     MCD::OPC_FilterValue, 1, 121, 0, // Skip to: 549
/* 428 */     MCD::OPC_CheckPredicate, 5, 117, 0, // Skip to: 549
/* 432 */     MCD::OPC_Decode, 42, 35, // Opcode: ADDIUR1SP_MM
/* 435 */     MCD::OPC_FilterValue, 33, 14, 0, // Skip to: 453
/* 439 */     MCD::OPC_CheckPredicate, 5, 106, 0, // Skip to: 549
/* 443 */     MCD::OPC_CheckField, 0, 1, 0, 100, 0, // Skip to: 549
/* 449 */     MCD::OPC_Decode, 211, 11, 36, // Opcode: MOVEP_MM
/* 453 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 465
/* 457 */     MCD::OPC_CheckPredicate, 5, 88, 0, // Skip to: 549
/* 461 */     MCD::OPC_Decode, 210, 14, 20, // Opcode: SB16_MM
/* 465 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 477
/* 469 */     MCD::OPC_CheckPredicate, 5, 76, 0, // Skip to: 549
/* 473 */     MCD::OPC_Decode, 249, 1, 37, // Opcode: BEQZ16_MM
/* 477 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 489
/* 481 */     MCD::OPC_CheckPredicate, 5, 64, 0, // Skip to: 549
/* 485 */     MCD::OPC_Decode, 153, 15, 20, // Opcode: SH16_MM
/* 489 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 501
/* 493 */     MCD::OPC_CheckPredicate, 5, 52, 0, // Skip to: 549
/* 497 */     MCD::OPC_Decode, 242, 2, 37, // Opcode: BNEZ16_MM
/* 501 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 513
/* 505 */     MCD::OPC_CheckPredicate, 5, 40, 0, // Skip to: 549
/* 509 */     MCD::OPC_Decode, 153, 17, 30, // Opcode: SWSP_MM
/* 513 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 525
/* 517 */     MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 549
/* 521 */     MCD::OPC_Decode, 207, 1, 38, // Opcode: B16_MM
/* 525 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 537
/* 529 */     MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 549
/* 533 */     MCD::OPC_Decode, 253, 16, 20, // Opcode: SW16_MM
/* 537 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 549
/* 541 */     MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 549
/* 545 */     MCD::OPC_Decode, 243, 9, 39, // Opcode: LI16_MM
/* 549 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 10, 12, // Skip to: 3089
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 90, 0, // Skip to: 104
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 181, 16, 0, // Opcode: SSNOP_MM
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 248, 6, 0, // Opcode: EHB_MM
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 164, 13, 0, // Opcode: PAUSE_MM
/* 60 */      MCD::OPC_CheckPredicate, 5, 215, 15, // Skip to: 4119
/* 64 */      MCD::OPC_Decode, 234, 15, 40, // Opcode: SLL_MM
/* 68 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 5, 203, 15, // Skip to: 4119
/* 76 */      MCD::OPC_Decode, 178, 16, 40, // Opcode: SRL_MM
/* 80 */      MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 5, 191, 15, // Skip to: 4119
/* 88 */      MCD::OPC_Decode, 156, 16, 40, // Opcode: SRA_MM
/* 92 */      MCD::OPC_FilterValue, 3, 183, 15, // Skip to: 4119
/* 96 */      MCD::OPC_CheckPredicate, 5, 179, 15, // Skip to: 4119
/* 100 */     MCD::OPC_Decode, 183, 14, 40, // Opcode: ROTR_MM
/* 104 */     MCD::OPC_FilterValue, 5, 192, 0, // Skip to: 300
/* 108 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 111 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 129
/* 115 */     MCD::OPC_CheckPredicate, 7, 160, 15, // Skip to: 4119
/* 119 */     MCD::OPC_CheckField, 11, 5, 0, 154, 15, // Skip to: 4119
/* 125 */     MCD::OPC_Decode, 159, 4, 41, // Opcode: CMP_EQ_PH_MM
/* 129 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 147
/* 133 */     MCD::OPC_CheckPredicate, 7, 142, 15, // Skip to: 4119
/* 137 */     MCD::OPC_CheckField, 11, 5, 0, 136, 15, // Skip to: 4119
/* 143 */     MCD::OPC_Decode, 173, 4, 41, // Opcode: CMP_LT_PH_MM
/* 147 */     MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 165
/* 151 */     MCD::OPC_CheckPredicate, 7, 124, 15, // Skip to: 4119
/* 155 */     MCD::OPC_CheckField, 11, 5, 0, 118, 15, // Skip to: 4119
/* 161 */     MCD::OPC_Decode, 167, 4, 41, // Opcode: CMP_LE_PH_MM
/* 165 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 177
/* 169 */     MCD::OPC_CheckPredicate, 8, 106, 15, // Skip to: 4119
/* 173 */     MCD::OPC_Decode, 137, 4, 42, // Opcode: CMPGDU_EQ_QB_MMR2
/* 177 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 189
/* 181 */     MCD::OPC_CheckPredicate, 8, 94, 15, // Skip to: 4119
/* 185 */     MCD::OPC_Decode, 141, 4, 42, // Opcode: CMPGDU_LT_QB_MMR2
/* 189 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 201
/* 193 */     MCD::OPC_CheckPredicate, 8, 82, 15, // Skip to: 4119
/* 197 */     MCD::OPC_Decode, 139, 4, 42, // Opcode: CMPGDU_LE_QB_MMR2
/* 201 */     MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 219
/* 205 */     MCD::OPC_CheckPredicate, 7, 70, 15, // Skip to: 4119
/* 209 */     MCD::OPC_CheckField, 11, 5, 0, 64, 15, // Skip to: 4119
/* 215 */     MCD::OPC_Decode, 149, 4, 41, // Opcode: CMPU_EQ_QB_MM
/* 219 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 237
/* 223 */     MCD::OPC_CheckPredicate, 7, 52, 15, // Skip to: 4119
/* 227 */     MCD::OPC_CheckField, 11, 5, 0, 46, 15, // Skip to: 4119
/* 233 */     MCD::OPC_Decode, 153, 4, 41, // Opcode: CMPU_LT_QB_MM
/* 237 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 255
/* 241 */     MCD::OPC_CheckPredicate, 7, 34, 15, // Skip to: 4119
/* 245 */     MCD::OPC_CheckField, 11, 5, 0, 28, 15, // Skip to: 4119
/* 251 */     MCD::OPC_Decode, 151, 4, 41, // Opcode: CMPU_LE_QB_MM
/* 255 */     MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 266
/* 259 */     MCD::OPC_CheckPredicate, 7, 16, 15, // Skip to: 4119
/* 263 */     MCD::OPC_Decode, 60, 43, // Opcode: ADDQ_S_W_MM
/* 266 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 278
/* 270 */     MCD::OPC_CheckPredicate, 7, 5, 15, // Skip to: 4119
/* 274 */     MCD::OPC_Decode, 205, 16, 43, // Opcode: SUBQ_S_W_MM
/* 278 */     MCD::OPC_FilterValue, 14, 7, 0, // Skip to: 289
/* 282 */     MCD::OPC_CheckPredicate, 7, 249, 14, // Skip to: 4119
/* 286 */     MCD::OPC_Decode, 62, 43, // Opcode: ADDSC_MM
/* 289 */     MCD::OPC_FilterValue, 15, 242, 14, // Skip to: 4119
/* 293 */     MCD::OPC_CheckPredicate, 7, 238, 14, // Skip to: 4119
/* 297 */     MCD::OPC_Decode, 99, 43, // Opcode: ADDWC_MM
/* 300 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 312
/* 304 */     MCD::OPC_CheckPredicate, 5, 227, 14, // Skip to: 4119
/* 308 */     MCD::OPC_Decode, 138, 3, 44, // Opcode: BREAK_MM
/* 312 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 324
/* 316 */     MCD::OPC_CheckPredicate, 5, 215, 14, // Skip to: 4119
/* 320 */     MCD::OPC_Decode, 141, 9, 45, // Opcode: INS_MM
/* 324 */     MCD::OPC_FilterValue, 13, 95, 1, // Skip to: 679
/* 328 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 331 */     MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 342
/* 335 */     MCD::OPC_CheckPredicate, 7, 196, 14, // Skip to: 4119
/* 339 */     MCD::OPC_Decode, 56, 46, // Opcode: ADDQ_PH_MM
/* 342 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 353
/* 346 */     MCD::OPC_CheckPredicate, 8, 185, 14, // Skip to: 4119
/* 350 */     MCD::OPC_Decode, 48, 46, // Opcode: ADDQH_PH_MMR2
/* 353 */     MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 364
/* 357 */     MCD::OPC_CheckPredicate, 8, 174, 14, // Skip to: 4119
/* 361 */     MCD::OPC_Decode, 54, 43, // Opcode: ADDQH_W_MMR2
/* 364 */     MCD::OPC_FilterValue, 3, 7, 0, // Skip to: 375
/* 368 */     MCD::OPC_CheckPredicate, 7, 163, 14, // Skip to: 4119
/* 372 */     MCD::OPC_Decode, 85, 46, // Opcode: ADDU_QB_MM
/* 375 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 386
/* 379 */     MCD::OPC_CheckPredicate, 8, 152, 14, // Skip to: 4119
/* 383 */     MCD::OPC_Decode, 83, 46, // Opcode: ADDU_PH_MMR2
/* 386 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 397
/* 390 */     MCD::OPC_CheckPredicate, 8, 141, 14, // Skip to: 4119
/* 394 */     MCD::OPC_Decode, 78, 46, // Opcode: ADDUH_QB_MMR2
/* 397 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 409
/* 401 */     MCD::OPC_CheckPredicate, 7, 130, 14, // Skip to: 4119
/* 405 */     MCD::OPC_Decode, 183, 15, 47, // Opcode: SHRAV_PH_MM
/* 409 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 421
/* 413 */     MCD::OPC_CheckPredicate, 8, 118, 14, // Skip to: 4119
/* 417 */     MCD::OPC_Decode, 185, 15, 47, // Opcode: SHRAV_QB_MMR2
/* 421 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 433
/* 425 */     MCD::OPC_CheckPredicate, 7, 106, 14, // Skip to: 4119
/* 429 */     MCD::OPC_Decode, 201, 16, 46, // Opcode: SUBQ_PH_MM
/* 433 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 445
/* 437 */     MCD::OPC_CheckPredicate, 8, 94, 14, // Skip to: 4119
/* 441 */     MCD::OPC_Decode, 193, 16, 46, // Opcode: SUBQH_PH_MMR2
/* 445 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 457
/* 449 */     MCD::OPC_CheckPredicate, 8, 82, 14, // Skip to: 4119
/* 453 */     MCD::OPC_Decode, 199, 16, 43, // Opcode: SUBQH_W_MMR2
/* 457 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 469
/* 461 */     MCD::OPC_CheckPredicate, 7, 70, 14, // Skip to: 4119
/* 465 */     MCD::OPC_Decode, 232, 16, 46, // Opcode: SUBU_QB_MM
/* 469 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 481
/* 473 */     MCD::OPC_CheckPredicate, 8, 58, 14, // Skip to: 4119
/* 477 */     MCD::OPC_Decode, 230, 16, 46, // Opcode: SUBU_PH_MMR2
/* 481 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 493
/* 485 */     MCD::OPC_CheckPredicate, 8, 46, 14, // Skip to: 4119
/* 489 */     MCD::OPC_Decode, 225, 16, 46, // Opcode: SUBUH_QB_MMR2
/* 493 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 505
/* 497 */     MCD::OPC_CheckPredicate, 8, 34, 14, // Skip to: 4119
/* 501 */     MCD::OPC_Decode, 214, 13, 48, // Opcode: PRECR_SRA_PH_W_MMR2
/* 505 */     MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 516
/* 509 */     MCD::OPC_CheckPredicate, 7, 22, 14, // Skip to: 4119
/* 513 */     MCD::OPC_Decode, 58, 46, // Opcode: ADDQ_S_PH_MM
/* 516 */     MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 527
/* 520 */     MCD::OPC_CheckPredicate, 8, 11, 14, // Skip to: 4119
/* 524 */     MCD::OPC_Decode, 50, 46, // Opcode: ADDQH_R_PH_MMR2
/* 527 */     MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 538
/* 531 */     MCD::OPC_CheckPredicate, 8, 0, 14, // Skip to: 4119
/* 535 */     MCD::OPC_Decode, 52, 43, // Opcode: ADDQH_R_W_MMR2
/* 538 */     MCD::OPC_FilterValue, 19, 7, 0, // Skip to: 549
/* 542 */     MCD::OPC_CheckPredicate, 7, 245, 13, // Skip to: 4119
/* 546 */     MCD::OPC_Decode, 89, 46, // Opcode: ADDU_S_QB_MM
/* 549 */     MCD::OPC_FilterValue, 20, 7, 0, // Skip to: 560
/* 553 */     MCD::OPC_CheckPredicate, 8, 234, 13, // Skip to: 4119
/* 557 */     MCD::OPC_Decode, 87, 46, // Opcode: ADDU_S_PH_MMR2
/* 560 */     MCD::OPC_FilterValue, 21, 7, 0, // Skip to: 571
/* 564 */     MCD::OPC_CheckPredicate, 8, 223, 13, // Skip to: 4119
/* 568 */     MCD::OPC_Decode, 80, 46, // Opcode: ADDUH_R_QB_MMR2
/* 571 */     MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 583
/* 575 */     MCD::OPC_CheckPredicate, 7, 212, 13, // Skip to: 4119
/* 579 */     MCD::OPC_Decode, 187, 15, 47, // Opcode: SHRAV_R_PH_MM
/* 583 */     MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 595
/* 587 */     MCD::OPC_CheckPredicate, 8, 200, 13, // Skip to: 4119
/* 591 */     MCD::OPC_Decode, 189, 15, 47, // Opcode: SHRAV_R_QB_MMR2
/* 595 */     MCD::OPC_FilterValue, 24, 8, 0, // Skip to: 607
/* 599 */     MCD::OPC_CheckPredicate, 7, 188, 13, // Skip to: 4119
/* 603 */     MCD::OPC_Decode, 203, 16, 46, // Opcode: SUBQ_S_PH_MM
/* 607 */     MCD::OPC_FilterValue, 25, 8, 0, // Skip to: 619
/* 611 */     MCD::OPC_CheckPredicate, 8, 176, 13, // Skip to: 4119
/* 615 */     MCD::OPC_Decode, 195, 16, 46, // Opcode: SUBQH_R_PH_MMR2
/* 619 */     MCD::OPC_FilterValue, 26, 8, 0, // Skip to: 631
/* 623 */     MCD::OPC_CheckPredicate, 8, 164, 13, // Skip to: 4119
/* 627 */     MCD::OPC_Decode, 197, 16, 43, // Opcode: SUBQH_R_W_MMR2
/* 631 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 643
/* 635 */     MCD::OPC_CheckPredicate, 7, 152, 13, // Skip to: 4119
/* 639 */     MCD::OPC_Decode, 236, 16, 46, // Opcode: SUBU_S_QB_MM
/* 643 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 655
/* 647 */     MCD::OPC_CheckPredicate, 8, 140, 13, // Skip to: 4119
/* 651 */     MCD::OPC_Decode, 234, 16, 46, // Opcode: SUBU_S_PH_MMR2
/* 655 */     MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 667
/* 659 */     MCD::OPC_CheckPredicate, 8, 128, 13, // Skip to: 4119
/* 663 */     MCD::OPC_Decode, 227, 16, 46, // Opcode: SUBUH_R_QB_MMR2
/* 667 */     MCD::OPC_FilterValue, 31, 120, 13, // Skip to: 4119
/* 671 */     MCD::OPC_CheckPredicate, 8, 116, 13, // Skip to: 4119
/* 675 */     MCD::OPC_Decode, 216, 13, 48, // Opcode: PRECR_SRA_R_PH_W_MMR2
/* 679 */     MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 710
/* 683 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 686 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 698
/* 690 */     MCD::OPC_CheckPredicate, 7, 97, 13, // Skip to: 4119
/* 694 */     MCD::OPC_Decode, 167, 15, 47, // Opcode: SHLLV_PH_MM
/* 698 */     MCD::OPC_FilterValue, 16, 89, 13, // Skip to: 4119
/* 702 */     MCD::OPC_CheckPredicate, 7, 85, 13, // Skip to: 4119
/* 706 */     MCD::OPC_Decode, 171, 15, 47, // Opcode: SHLLV_S_PH_MM
/* 710 */     MCD::OPC_FilterValue, 16, 180, 0, // Skip to: 894
/* 714 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 717 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 729
/* 721 */     MCD::OPC_CheckPredicate, 5, 66, 13, // Skip to: 4119
/* 725 */     MCD::OPC_Decode, 230, 15, 49, // Opcode: SLLV_MM
/* 729 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 741
/* 733 */     MCD::OPC_CheckPredicate, 5, 54, 13, // Skip to: 4119
/* 737 */     MCD::OPC_Decode, 174, 16, 49, // Opcode: SRLV_MM
/* 741 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 753
/* 745 */     MCD::OPC_CheckPredicate, 5, 42, 13, // Skip to: 4119
/* 749 */     MCD::OPC_Decode, 152, 16, 49, // Opcode: SRAV_MM
/* 753 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 765
/* 757 */     MCD::OPC_CheckPredicate, 5, 30, 13, // Skip to: 4119
/* 761 */     MCD::OPC_Decode, 182, 14, 49, // Opcode: ROTRV_MM
/* 765 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 776
/* 769 */     MCD::OPC_CheckPredicate, 5, 18, 13, // Skip to: 4119
/* 773 */     MCD::OPC_Decode, 104, 43, // Opcode: ADD_MM
/* 776 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 787
/* 780 */     MCD::OPC_CheckPredicate, 5, 7, 13, // Skip to: 4119
/* 784 */     MCD::OPC_Decode, 111, 43, // Opcode: ADDu_MM
/* 787 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 799
/* 791 */     MCD::OPC_CheckPredicate, 5, 252, 12, // Skip to: 4119
/* 795 */     MCD::OPC_Decode, 245, 16, 43, // Opcode: SUB_MM
/* 799 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 811
/* 803 */     MCD::OPC_CheckPredicate, 5, 240, 12, // Skip to: 4119
/* 807 */     MCD::OPC_Decode, 248, 16, 43, // Opcode: SUBu_MM
/* 811 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 823
/* 815 */     MCD::OPC_CheckPredicate, 5, 228, 12, // Skip to: 4119
/* 819 */     MCD::OPC_Decode, 223, 12, 43, // Opcode: MUL_MM
/* 823 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 834
/* 827 */     MCD::OPC_CheckPredicate, 5, 216, 12, // Skip to: 4119
/* 831 */     MCD::OPC_Decode, 126, 43, // Opcode: AND_MM
/* 834 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 846
/* 838 */     MCD::OPC_CheckPredicate, 5, 205, 12, // Skip to: 4119
/* 842 */     MCD::OPC_Decode, 151, 13, 43, // Opcode: OR_MM
/* 846 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 858
/* 850 */     MCD::OPC_CheckPredicate, 5, 193, 12, // Skip to: 4119
/* 854 */     MCD::OPC_Decode, 135, 13, 43, // Opcode: NOR_MM
/* 858 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 870
/* 862 */     MCD::OPC_CheckPredicate, 5, 181, 12, // Skip to: 4119
/* 866 */     MCD::OPC_Decode, 163, 18, 43, // Opcode: XOR_MM
/* 870 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 882
/* 874 */     MCD::OPC_CheckPredicate, 5, 169, 12, // Skip to: 4119
/* 878 */     MCD::OPC_Decode, 239, 15, 43, // Opcode: SLT_MM
/* 882 */     MCD::OPC_FilterValue, 14, 161, 12, // Skip to: 4119
/* 886 */     MCD::OPC_CheckPredicate, 5, 157, 12, // Skip to: 4119
/* 890 */     MCD::OPC_Decode, 248, 15, 43, // Opcode: SLTu_MM
/* 894 */     MCD::OPC_FilterValue, 21, 171, 0, // Skip to: 1069
/* 898 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 901 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 913
/* 905 */     MCD::OPC_CheckPredicate, 7, 138, 12, // Skip to: 4119
/* 909 */     MCD::OPC_Decode, 192, 12, 46, // Opcode: MULEU_S_PH_QBL_MM
/* 913 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 925
/* 917 */     MCD::OPC_CheckPredicate, 7, 126, 12, // Skip to: 4119
/* 921 */     MCD::OPC_Decode, 194, 12, 46, // Opcode: MULEU_S_PH_QBR_MM
/* 925 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 937
/* 929 */     MCD::OPC_CheckPredicate, 7, 114, 12, // Skip to: 4119
/* 933 */     MCD::OPC_Decode, 196, 12, 46, // Opcode: MULQ_RS_PH_MM
/* 937 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 949
/* 941 */     MCD::OPC_CheckPredicate, 8, 102, 12, // Skip to: 4119
/* 945 */     MCD::OPC_Decode, 200, 12, 46, // Opcode: MULQ_S_PH_MMR2
/* 949 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 961
/* 953 */     MCD::OPC_CheckPredicate, 8, 90, 12, // Skip to: 4119
/* 957 */     MCD::OPC_Decode, 198, 12, 43, // Opcode: MULQ_RS_W_MMR2
/* 961 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 973
/* 965 */     MCD::OPC_CheckPredicate, 8, 78, 12, // Skip to: 4119
/* 969 */     MCD::OPC_Decode, 202, 12, 43, // Opcode: MULQ_S_W_MMR2
/* 973 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 985
/* 977 */     MCD::OPC_CheckPredicate, 8, 66, 12, // Skip to: 4119
/* 981 */     MCD::OPC_Decode, 136, 1, 50, // Opcode: APPEND_MMR2
/* 985 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 997
/* 989 */     MCD::OPC_CheckPredicate, 8, 54, 12, // Skip to: 4119
/* 993 */     MCD::OPC_Decode, 226, 13, 50, // Opcode: PREPEND_MMR2
/* 997 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1009
/* 1001 */    MCD::OPC_CheckPredicate, 7, 42, 12, // Skip to: 4119
/* 1005 */    MCD::OPC_Decode, 197, 11, 43, // Opcode: MODSUB_MM
/* 1009 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1021
/* 1013 */    MCD::OPC_CheckPredicate, 7, 30, 12, // Skip to: 4119
/* 1017 */    MCD::OPC_Decode, 191, 15, 49, // Opcode: SHRAV_R_W_MM
/* 1021 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1033
/* 1025 */    MCD::OPC_CheckPredicate, 8, 18, 12, // Skip to: 4119
/* 1029 */    MCD::OPC_Decode, 203, 15, 47, // Opcode: SHRLV_PH_MMR2
/* 1033 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1045
/* 1037 */    MCD::OPC_CheckPredicate, 7, 6, 12, // Skip to: 4119
/* 1041 */    MCD::OPC_Decode, 205, 15, 47, // Opcode: SHRLV_QB_MM
/* 1045 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1057
/* 1049 */    MCD::OPC_CheckPredicate, 7, 250, 11, // Skip to: 4119
/* 1053 */    MCD::OPC_Decode, 169, 15, 47, // Opcode: SHLLV_QB_MM
/* 1057 */    MCD::OPC_FilterValue, 15, 242, 11, // Skip to: 4119
/* 1061 */    MCD::OPC_CheckPredicate, 7, 238, 11, // Skip to: 4119
/* 1065 */    MCD::OPC_Decode, 173, 15, 49, // Opcode: SHLLV_S_W_MM
/* 1069 */    MCD::OPC_FilterValue, 24, 39, 0, // Skip to: 1112
/* 1073 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1076 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1088
/* 1080 */    MCD::OPC_CheckPredicate, 5, 219, 11, // Skip to: 4119
/* 1084 */    MCD::OPC_Decode, 230, 11, 51, // Opcode: MOVN_I_MM
/* 1088 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1100
/* 1092 */    MCD::OPC_CheckPredicate, 5, 207, 11, // Skip to: 4119
/* 1096 */    MCD::OPC_Decode, 250, 11, 51, // Opcode: MOVZ_I_MM
/* 1100 */    MCD::OPC_FilterValue, 4, 199, 11, // Skip to: 4119
/* 1104 */    MCD::OPC_CheckPredicate, 5, 195, 11, // Skip to: 4119
/* 1108 */    MCD::OPC_Decode, 183, 10, 52, // Opcode: LWXS_MM
/* 1112 */    MCD::OPC_FilterValue, 29, 20, 0, // Skip to: 1136
/* 1116 */    MCD::OPC_CheckPredicate, 7, 183, 11, // Skip to: 4119
/* 1120 */    MCD::OPC_CheckField, 22, 4, 0, 177, 11, // Skip to: 4119
/* 1126 */    MCD::OPC_CheckField, 6, 8, 0, 171, 11, // Skip to: 4119
/* 1132 */    MCD::OPC_Decode, 165, 15, 53, // Opcode: SHILO_MM
/* 1136 */    MCD::OPC_FilterValue, 37, 63, 0, // Skip to: 1203
/* 1140 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1143 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1155
/* 1147 */    MCD::OPC_CheckPredicate, 7, 152, 11, // Skip to: 4119
/* 1151 */    MCD::OPC_Decode, 188, 12, 42, // Opcode: MULEQ_S_W_PHL_MM
/* 1155 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1167
/* 1159 */    MCD::OPC_CheckPredicate, 7, 140, 11, // Skip to: 4119
/* 1163 */    MCD::OPC_Decode, 190, 12, 42, // Opcode: MULEQ_S_W_PHR_MM
/* 1167 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1179
/* 1171 */    MCD::OPC_CheckPredicate, 7, 128, 11, // Skip to: 4119
/* 1175 */    MCD::OPC_Decode, 236, 9, 52, // Opcode: LHX_MM
/* 1179 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1191
/* 1183 */    MCD::OPC_CheckPredicate, 7, 116, 11, // Skip to: 4119
/* 1187 */    MCD::OPC_Decode, 184, 10, 52, // Opcode: LWX_MM
/* 1191 */    MCD::OPC_FilterValue, 8, 108, 11, // Skip to: 4119
/* 1195 */    MCD::OPC_CheckPredicate, 7, 104, 11, // Skip to: 4119
/* 1199 */    MCD::OPC_Decode, 194, 9, 52, // Opcode: LBUX_MM
/* 1203 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 1215
/* 1207 */    MCD::OPC_CheckPredicate, 5, 92, 11, // Skip to: 4119
/* 1211 */    MCD::OPC_Decode, 159, 7, 54, // Opcode: EXT_MM
/* 1215 */    MCD::OPC_FilterValue, 45, 123, 0, // Skip to: 1342
/* 1219 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1222 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1234
/* 1226 */    MCD::OPC_CheckPredicate, 8, 73, 11, // Skip to: 4119
/* 1230 */    MCD::OPC_Decode, 226, 12, 46, // Opcode: MUL_PH_MMR2
/* 1234 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1246
/* 1238 */    MCD::OPC_CheckPredicate, 8, 61, 11, // Skip to: 4119
/* 1242 */    MCD::OPC_Decode, 212, 13, 46, // Opcode: PRECR_QB_PH_MMR2
/* 1246 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1258
/* 1250 */    MCD::OPC_CheckPredicate, 7, 49, 11, // Skip to: 4119
/* 1254 */    MCD::OPC_Decode, 208, 13, 46, // Opcode: PRECRQ_QB_PH_MM
/* 1258 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1270
/* 1262 */    MCD::OPC_CheckPredicate, 7, 37, 11, // Skip to: 4119
/* 1266 */    MCD::OPC_Decode, 206, 13, 55, // Opcode: PRECRQ_PH_W_MM
/* 1270 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1282
/* 1274 */    MCD::OPC_CheckPredicate, 7, 25, 11, // Skip to: 4119
/* 1278 */    MCD::OPC_Decode, 210, 13, 55, // Opcode: PRECRQ_RS_PH_W_MM
/* 1282 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1294
/* 1286 */    MCD::OPC_CheckPredicate, 7, 13, 11, // Skip to: 4119
/* 1290 */    MCD::OPC_Decode, 204, 13, 46, // Opcode: PRECRQU_S_QB_PH_MM
/* 1294 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1306
/* 1298 */    MCD::OPC_CheckPredicate, 7, 1, 11, // Skip to: 4119
/* 1302 */    MCD::OPC_Decode, 162, 13, 46, // Opcode: PACKRL_PH_MM
/* 1306 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1318
/* 1310 */    MCD::OPC_CheckPredicate, 7, 245, 10, // Skip to: 4119
/* 1314 */    MCD::OPC_Decode, 181, 13, 46, // Opcode: PICK_QB_MM
/* 1318 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1330
/* 1322 */    MCD::OPC_CheckPredicate, 7, 233, 10, // Skip to: 4119
/* 1326 */    MCD::OPC_Decode, 179, 13, 46, // Opcode: PICK_PH_MM
/* 1330 */    MCD::OPC_FilterValue, 16, 225, 10, // Skip to: 4119
/* 1334 */    MCD::OPC_CheckPredicate, 8, 221, 10, // Skip to: 4119
/* 1338 */    MCD::OPC_Decode, 231, 12, 46, // Opcode: MUL_S_PH_MMR2
/* 1342 */    MCD::OPC_FilterValue, 53, 94, 0, // Skip to: 1440
/* 1346 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1349 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1361
/* 1353 */    MCD::OPC_CheckPredicate, 7, 202, 10, // Skip to: 4119
/* 1357 */    MCD::OPC_Decode, 201, 15, 40, // Opcode: SHRA_R_W_MM
/* 1361 */    MCD::OPC_FilterValue, 12, 14, 0, // Skip to: 1379
/* 1365 */    MCD::OPC_CheckPredicate, 7, 190, 10, // Skip to: 4119
/* 1369 */    MCD::OPC_CheckField, 11, 1, 0, 184, 10, // Skip to: 4119
/* 1375 */    MCD::OPC_Decode, 193, 15, 56, // Opcode: SHRA_PH_MM
/* 1379 */    MCD::OPC_FilterValue, 14, 27, 0, // Skip to: 1410
/* 1383 */    MCD::OPC_ExtractField, 11, 1,  // Inst{11} ...
/* 1386 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1398
/* 1390 */    MCD::OPC_CheckPredicate, 7, 165, 10, // Skip to: 4119
/* 1394 */    MCD::OPC_Decode, 175, 15, 56, // Opcode: SHLL_PH_MM
/* 1398 */    MCD::OPC_FilterValue, 1, 157, 10, // Skip to: 4119
/* 1402 */    MCD::OPC_CheckPredicate, 7, 153, 10, // Skip to: 4119
/* 1406 */    MCD::OPC_Decode, 179, 15, 56, // Opcode: SHLL_S_PH_MM
/* 1410 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 1422
/* 1414 */    MCD::OPC_CheckPredicate, 7, 141, 10, // Skip to: 4119
/* 1418 */    MCD::OPC_Decode, 181, 15, 40, // Opcode: SHLL_S_W_MM
/* 1422 */    MCD::OPC_FilterValue, 28, 133, 10, // Skip to: 4119
/* 1426 */    MCD::OPC_CheckPredicate, 7, 129, 10, // Skip to: 4119
/* 1430 */    MCD::OPC_CheckField, 11, 1, 0, 123, 10, // Skip to: 4119
/* 1436 */    MCD::OPC_Decode, 197, 15, 56, // Opcode: SHRA_R_PH_MM
/* 1440 */    MCD::OPC_FilterValue, 60, 91, 6, // Skip to: 3071
/* 1444 */    MCD::OPC_ExtractField, 6, 6,  // Inst{11-6} ...
/* 1447 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1459
/* 1451 */    MCD::OPC_CheckPredicate, 5, 104, 10, // Skip to: 4119
/* 1455 */    MCD::OPC_Decode, 217, 17, 57, // Opcode: TEQ_MM
/* 1459 */    MCD::OPC_FilterValue, 1, 75, 0, // Skip to: 1538
/* 1463 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1466 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1484
/* 1470 */    MCD::OPC_CheckPredicate, 7, 85, 10, // Skip to: 4119
/* 1474 */    MCD::OPC_CheckField, 21, 5, 0, 79, 10, // Skip to: 4119
/* 1480 */    MCD::OPC_Decode, 157, 11, 58, // Opcode: MFHI_DSP_MM
/* 1484 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1502
/* 1488 */    MCD::OPC_CheckPredicate, 7, 67, 10, // Skip to: 4119
/* 1492 */    MCD::OPC_CheckField, 21, 5, 0, 61, 10, // Skip to: 4119
/* 1498 */    MCD::OPC_Decode, 163, 11, 58, // Opcode: MFLO_DSP_MM
/* 1502 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1520
/* 1506 */    MCD::OPC_CheckPredicate, 7, 49, 10, // Skip to: 4119
/* 1510 */    MCD::OPC_CheckField, 21, 5, 0, 43, 10, // Skip to: 4119
/* 1516 */    MCD::OPC_Decode, 167, 12, 59, // Opcode: MTHI_DSP_MM
/* 1520 */    MCD::OPC_FilterValue, 3, 35, 10, // Skip to: 4119
/* 1524 */    MCD::OPC_CheckPredicate, 7, 31, 10, // Skip to: 4119
/* 1528 */    MCD::OPC_CheckField, 21, 5, 0, 25, 10, // Skip to: 4119
/* 1534 */    MCD::OPC_Decode, 174, 12, 60, // Opcode: MTLO_DSP_MM
/* 1538 */    MCD::OPC_FilterValue, 2, 51, 0, // Skip to: 1593
/* 1542 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1557
/* 1549 */    MCD::OPC_CheckPredicate, 8, 6, 10, // Skip to: 4119
/* 1553 */    MCD::OPC_Decode, 179, 6, 61, // Opcode: DPA_W_PH_MMR2
/* 1557 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1569
/* 1561 */    MCD::OPC_CheckPredicate, 8, 250, 9, // Skip to: 4119
/* 1565 */    MCD::OPC_Decode, 177, 6, 61, // Opcode: DPAX_W_PH_MMR2
/* 1569 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1581
/* 1573 */    MCD::OPC_CheckPredicate, 7, 238, 9, // Skip to: 4119
/* 1577 */    MCD::OPC_Decode, 173, 6, 61, // Opcode: DPAU_H_QBL_MM
/* 1581 */    MCD::OPC_FilterValue, 3, 230, 9, // Skip to: 4119
/* 1585 */    MCD::OPC_CheckPredicate, 7, 226, 9, // Skip to: 4119
/* 1589 */    MCD::OPC_Decode, 175, 6, 61, // Opcode: DPAU_H_QBR_MM
/* 1593 */    MCD::OPC_FilterValue, 4, 144, 0, // Skip to: 1741
/* 1597 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1600 */    MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 1611
/* 1604 */    MCD::OPC_CheckPredicate, 8, 207, 9, // Skip to: 4119
/* 1608 */    MCD::OPC_Decode, 33, 62, // Opcode: ABSQ_S_QB_MMR2
/* 1611 */    MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 1622
/* 1615 */    MCD::OPC_CheckPredicate, 7, 196, 9, // Skip to: 4119
/* 1619 */    MCD::OPC_Decode, 31, 62, // Opcode: ABSQ_S_PH_MM
/* 1622 */    MCD::OPC_FilterValue, 2, 7, 0, // Skip to: 1633
/* 1626 */    MCD::OPC_CheckPredicate, 7, 185, 9, // Skip to: 4119
/* 1630 */    MCD::OPC_Decode, 35, 63, // Opcode: ABSQ_S_W_MM
/* 1633 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1645
/* 1637 */    MCD::OPC_CheckPredicate, 7, 174, 9, // Skip to: 4119
/* 1641 */    MCD::OPC_Decode, 184, 2, 63, // Opcode: BITREV_MM
/* 1645 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 1657
/* 1649 */    MCD::OPC_CheckPredicate, 7, 162, 9, // Skip to: 4119
/* 1653 */    MCD::OPC_Decode, 140, 9, 64, // Opcode: INSV_MM
/* 1657 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1669
/* 1661 */    MCD::OPC_CheckPredicate, 7, 150, 9, // Skip to: 4119
/* 1665 */    MCD::OPC_Decode, 192, 13, 65, // Opcode: PRECEQ_W_PHL_MM
/* 1669 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1681
/* 1673 */    MCD::OPC_CheckPredicate, 7, 138, 9, // Skip to: 4119
/* 1677 */    MCD::OPC_Decode, 194, 13, 65, // Opcode: PRECEQ_W_PHR_MM
/* 1681 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1693
/* 1685 */    MCD::OPC_CheckPredicate, 7, 126, 9, // Skip to: 4119
/* 1689 */    MCD::OPC_Decode, 186, 13, 62, // Opcode: PRECEQU_PH_QBL_MM
/* 1693 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1705
/* 1697 */    MCD::OPC_CheckPredicate, 7, 114, 9, // Skip to: 4119
/* 1701 */    MCD::OPC_Decode, 190, 13, 62, // Opcode: PRECEQU_PH_QBR_MM
/* 1705 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1717
/* 1709 */    MCD::OPC_CheckPredicate, 7, 102, 9, // Skip to: 4119
/* 1713 */    MCD::OPC_Decode, 198, 13, 62, // Opcode: PRECEU_PH_QBL_MM
/* 1717 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 1729
/* 1721 */    MCD::OPC_CheckPredicate, 7, 90, 9, // Skip to: 4119
/* 1725 */    MCD::OPC_Decode, 202, 13, 62, // Opcode: PRECEU_PH_QBR_MM
/* 1729 */    MCD::OPC_FilterValue, 15, 82, 9, // Skip to: 4119
/* 1733 */    MCD::OPC_CheckPredicate, 7, 78, 9, // Skip to: 4119
/* 1737 */    MCD::OPC_Decode, 154, 14, 65, // Opcode: RADDU_W_QB_MM
/* 1741 */    MCD::OPC_FilterValue, 7, 27, 0, // Skip to: 1772
/* 1745 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 1748 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1760
/* 1752 */    MCD::OPC_CheckPredicate, 8, 59, 9, // Skip to: 4119
/* 1756 */    MCD::OPC_Decode, 195, 15, 66, // Opcode: SHRA_QB_MMR2
/* 1760 */    MCD::OPC_FilterValue, 1, 51, 9, // Skip to: 4119
/* 1764 */    MCD::OPC_CheckPredicate, 8, 47, 9, // Skip to: 4119
/* 1768 */    MCD::OPC_Decode, 199, 15, 66, // Opcode: SHRA_R_QB_MMR2
/* 1772 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1784
/* 1776 */    MCD::OPC_CheckPredicate, 5, 35, 9, // Skip to: 4119
/* 1780 */    MCD::OPC_Decode, 225, 17, 57, // Opcode: TGE_MM
/* 1784 */    MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 1827
/* 1788 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1791 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1809
/* 1795 */    MCD::OPC_CheckPredicate, 7, 16, 9, // Skip to: 4119
/* 1799 */    MCD::OPC_CheckField, 21, 5, 0, 10, 9, // Skip to: 4119
/* 1805 */    MCD::OPC_Decode, 170, 12, 67, // Opcode: MTHLIP_MM
/* 1809 */    MCD::OPC_FilterValue, 1, 2, 9, // Skip to: 4119
/* 1813 */    MCD::OPC_CheckPredicate, 7, 254, 8, // Skip to: 4119
/* 1817 */    MCD::OPC_CheckField, 21, 5, 0, 248, 8, // Skip to: 4119
/* 1823 */    MCD::OPC_Decode, 164, 15, 67, // Opcode: SHILOV_MM
/* 1827 */    MCD::OPC_FilterValue, 10, 51, 0, // Skip to: 1882
/* 1831 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 1834 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1846
/* 1838 */    MCD::OPC_CheckPredicate, 7, 229, 8, // Skip to: 4119
/* 1842 */    MCD::OPC_Decode, 171, 6, 61, // Opcode: DPAQ_S_W_PH_MM
/* 1846 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1858
/* 1850 */    MCD::OPC_CheckPredicate, 7, 217, 8, // Skip to: 4119
/* 1854 */    MCD::OPC_Decode, 169, 6, 61, // Opcode: DPAQ_SA_L_W_MM
/* 1858 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 1870
/* 1862 */    MCD::OPC_CheckPredicate, 8, 205, 8, // Skip to: 4119
/* 1866 */    MCD::OPC_Decode, 167, 6, 61, // Opcode: DPAQX_S_W_PH_MMR2
/* 1870 */    MCD::OPC_FilterValue, 3, 197, 8, // Skip to: 4119
/* 1874 */    MCD::OPC_CheckPredicate, 8, 193, 8, // Skip to: 4119
/* 1878 */    MCD::OPC_Decode, 165, 6, 61, // Opcode: DPAQX_SA_W_PH_MMR2
/* 1882 */    MCD::OPC_FilterValue, 12, 75, 0, // Skip to: 1961
/* 1886 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1889 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1901
/* 1893 */    MCD::OPC_CheckPredicate, 7, 174, 8, // Skip to: 4119
/* 1897 */    MCD::OPC_Decode, 165, 14, 68, // Opcode: REPLV_PH_MM
/* 1901 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1913
/* 1905 */    MCD::OPC_CheckPredicate, 7, 162, 8, // Skip to: 4119
/* 1909 */    MCD::OPC_Decode, 167, 14, 68, // Opcode: REPLV_QB_MM
/* 1913 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 1925
/* 1917 */    MCD::OPC_CheckPredicate, 7, 150, 8, // Skip to: 4119
/* 1921 */    MCD::OPC_Decode, 185, 13, 62, // Opcode: PRECEQU_PH_QBLA_MM
/* 1925 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1937
/* 1929 */    MCD::OPC_CheckPredicate, 7, 138, 8, // Skip to: 4119
/* 1933 */    MCD::OPC_Decode, 189, 13, 62, // Opcode: PRECEQU_PH_QBRA_MM
/* 1937 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1949
/* 1941 */    MCD::OPC_CheckPredicate, 7, 126, 8, // Skip to: 4119
/* 1945 */    MCD::OPC_Decode, 197, 13, 62, // Opcode: PRECEU_PH_QBLA_MM
/* 1949 */    MCD::OPC_FilterValue, 13, 118, 8, // Skip to: 4119
/* 1953 */    MCD::OPC_CheckPredicate, 7, 114, 8, // Skip to: 4119
/* 1957 */    MCD::OPC_Decode, 201, 13, 62, // Opcode: PRECEU_PH_QBRA_MM
/* 1961 */    MCD::OPC_FilterValue, 13, 123, 0, // Skip to: 2088
/* 1965 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 1968 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 1986
/* 1972 */    MCD::OPC_CheckPredicate, 5, 95, 8, // Skip to: 4119
/* 1976 */    MCD::OPC_CheckField, 16, 10, 0, 89, 8, // Skip to: 4119
/* 1982 */    MCD::OPC_Decode, 231, 17, 0, // Opcode: TLBP_MM
/* 1986 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2004
/* 1990 */    MCD::OPC_CheckPredicate, 5, 77, 8, // Skip to: 4119
/* 1994 */    MCD::OPC_CheckField, 16, 10, 0, 71, 8, // Skip to: 4119
/* 2000 */    MCD::OPC_Decode, 233, 17, 0, // Opcode: TLBR_MM
/* 2004 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2022
/* 2008 */    MCD::OPC_CheckPredicate, 5, 59, 8, // Skip to: 4119
/* 2012 */    MCD::OPC_CheckField, 16, 10, 0, 53, 8, // Skip to: 4119
/* 2018 */    MCD::OPC_Decode, 235, 17, 0, // Opcode: TLBWI_MM
/* 2022 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 2040
/* 2026 */    MCD::OPC_CheckPredicate, 5, 41, 8, // Skip to: 4119
/* 2030 */    MCD::OPC_CheckField, 16, 10, 0, 35, 8, // Skip to: 4119
/* 2036 */    MCD::OPC_Decode, 237, 17, 0, // Opcode: TLBWR_MM
/* 2040 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2052
/* 2044 */    MCD::OPC_CheckPredicate, 5, 23, 8, // Skip to: 4119
/* 2048 */    MCD::OPC_Decode, 149, 18, 69, // Opcode: WAIT_MM
/* 2052 */    MCD::OPC_FilterValue, 14, 14, 0, // Skip to: 2070
/* 2056 */    MCD::OPC_CheckPredicate, 5, 11, 8, // Skip to: 4119
/* 2060 */    MCD::OPC_CheckField, 16, 10, 0, 5, 8, // Skip to: 4119
/* 2066 */    MCD::OPC_Decode, 220, 5, 0, // Opcode: DERET_MM
/* 2070 */    MCD::OPC_FilterValue, 15, 253, 7, // Skip to: 4119
/* 2074 */    MCD::OPC_CheckPredicate, 5, 249, 7, // Skip to: 4119
/* 2078 */    MCD::OPC_CheckField, 16, 10, 0, 243, 7, // Skip to: 4119
/* 2084 */    MCD::OPC_Decode, 128, 7, 0, // Opcode: ERET_MM
/* 2088 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 2100
/* 2092 */    MCD::OPC_CheckPredicate, 8, 231, 7, // Skip to: 4119
/* 2096 */    MCD::OPC_Decode, 207, 15, 56, // Opcode: SHRL_PH_MMR2
/* 2100 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 2112
/* 2104 */    MCD::OPC_CheckPredicate, 5, 219, 7, // Skip to: 4119
/* 2108 */    MCD::OPC_Decode, 224, 17, 57, // Opcode: TGEU_MM
/* 2112 */    MCD::OPC_FilterValue, 18, 51, 0, // Skip to: 2167
/* 2116 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2119 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2131
/* 2123 */    MCD::OPC_CheckPredicate, 8, 200, 7, // Skip to: 4119
/* 2127 */    MCD::OPC_Decode, 202, 6, 61, // Opcode: DPS_W_PH_MMR2
/* 2131 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2143
/* 2135 */    MCD::OPC_CheckPredicate, 8, 188, 7, // Skip to: 4119
/* 2139 */    MCD::OPC_Decode, 200, 6, 61, // Opcode: DPSX_W_PH_MMR2
/* 2143 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2155
/* 2147 */    MCD::OPC_CheckPredicate, 7, 176, 7, // Skip to: 4119
/* 2151 */    MCD::OPC_Decode, 196, 6, 61, // Opcode: DPSU_H_QBL_MM
/* 2155 */    MCD::OPC_FilterValue, 3, 168, 7, // Skip to: 4119
/* 2159 */    MCD::OPC_CheckPredicate, 7, 164, 7, // Skip to: 4119
/* 2163 */    MCD::OPC_Decode, 198, 6, 61, // Opcode: DPSU_H_QBR_MM
/* 2167 */    MCD::OPC_FilterValue, 23, 14, 0, // Skip to: 2185
/* 2171 */    MCD::OPC_CheckPredicate, 7, 152, 7, // Skip to: 4119
/* 2175 */    MCD::OPC_CheckField, 12, 1, 0, 146, 7, // Skip to: 4119
/* 2181 */    MCD::OPC_Decode, 171, 14, 70, // Opcode: REPL_QB_MM
/* 2185 */    MCD::OPC_FilterValue, 25, 51, 0, // Skip to: 2240
/* 2189 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2192 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2204
/* 2196 */    MCD::OPC_CheckPredicate, 7, 127, 7, // Skip to: 4119
/* 2200 */    MCD::OPC_Decode, 156, 14, 71, // Opcode: RDDSP_MM
/* 2204 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2216
/* 2208 */    MCD::OPC_CheckPredicate, 7, 115, 7, // Skip to: 4119
/* 2212 */    MCD::OPC_Decode, 152, 18, 71, // Opcode: WRDSP_MM
/* 2216 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2228
/* 2220 */    MCD::OPC_CheckPredicate, 7, 103, 7, // Skip to: 4119
/* 2224 */    MCD::OPC_Decode, 140, 7, 72, // Opcode: EXTP_MM
/* 2228 */    MCD::OPC_FilterValue, 3, 95, 7, // Skip to: 4119
/* 2232 */    MCD::OPC_CheckPredicate, 7, 91, 7, // Skip to: 4119
/* 2236 */    MCD::OPC_Decode, 137, 7, 72, // Opcode: EXTPDP_MM
/* 2240 */    MCD::OPC_FilterValue, 26, 51, 0, // Skip to: 2295
/* 2244 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2247 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2259
/* 2251 */    MCD::OPC_CheckPredicate, 7, 72, 7, // Skip to: 4119
/* 2255 */    MCD::OPC_Decode, 188, 6, 61, // Opcode: DPSQ_S_W_PH_MM
/* 2259 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2271
/* 2263 */    MCD::OPC_CheckPredicate, 7, 60, 7, // Skip to: 4119
/* 2267 */    MCD::OPC_Decode, 186, 6, 61, // Opcode: DPSQ_SA_L_W_MM
/* 2271 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2283
/* 2275 */    MCD::OPC_CheckPredicate, 8, 48, 7, // Skip to: 4119
/* 2279 */    MCD::OPC_Decode, 184, 6, 61, // Opcode: DPSQX_S_W_PH_MMR2
/* 2283 */    MCD::OPC_FilterValue, 3, 40, 7, // Skip to: 4119
/* 2287 */    MCD::OPC_CheckPredicate, 8, 36, 7, // Skip to: 4119
/* 2291 */    MCD::OPC_Decode, 182, 6, 61, // Opcode: DPSQX_SA_W_PH_MMR2
/* 2295 */    MCD::OPC_FilterValue, 29, 39, 0, // Skip to: 2338
/* 2299 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2302 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 2320
/* 2306 */    MCD::OPC_CheckPredicate, 5, 17, 7, // Skip to: 4119
/* 2310 */    MCD::OPC_CheckField, 21, 5, 0, 11, 7, // Skip to: 4119
/* 2316 */    MCD::OPC_Decode, 247, 5, 73, // Opcode: DI_MM
/* 2320 */    MCD::OPC_FilterValue, 5, 3, 7, // Skip to: 4119
/* 2324 */    MCD::OPC_CheckPredicate, 5, 255, 6, // Skip to: 4119
/* 2328 */    MCD::OPC_CheckField, 21, 5, 0, 249, 6, // Skip to: 4119
/* 2334 */    MCD::OPC_Decode, 251, 6, 73, // Opcode: EI_MM
/* 2338 */    MCD::OPC_FilterValue, 32, 8, 0, // Skip to: 2350
/* 2342 */    MCD::OPC_CheckPredicate, 5, 237, 6, // Skip to: 4119
/* 2346 */    MCD::OPC_Decode, 244, 17, 57, // Opcode: TLT_MM
/* 2350 */    MCD::OPC_FilterValue, 33, 27, 0, // Skip to: 2381
/* 2354 */    MCD::OPC_ExtractField, 12, 1,  // Inst{12} ...
/* 2357 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2369
/* 2361 */    MCD::OPC_CheckPredicate, 7, 218, 6, // Skip to: 4119
/* 2365 */    MCD::OPC_Decode, 177, 15, 66, // Opcode: SHLL_QB_MM
/* 2369 */    MCD::OPC_FilterValue, 1, 210, 6, // Skip to: 4119
/* 2373 */    MCD::OPC_CheckPredicate, 7, 206, 6, // Skip to: 4119
/* 2377 */    MCD::OPC_Decode, 209, 15, 66, // Opcode: SHRL_QB_MM
/* 2381 */    MCD::OPC_FilterValue, 34, 39, 0, // Skip to: 2424
/* 2385 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2388 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2400
/* 2392 */    MCD::OPC_CheckPredicate, 8, 187, 6, // Skip to: 4119
/* 2396 */    MCD::OPC_Decode, 213, 1, 74, // Opcode: BALIGN_MMR2
/* 2400 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2412
/* 2404 */    MCD::OPC_CheckPredicate, 7, 175, 6, // Skip to: 4119
/* 2408 */    MCD::OPC_Decode, 139, 7, 75, // Opcode: EXTPV_MM
/* 2412 */    MCD::OPC_FilterValue, 3, 167, 6, // Skip to: 4119
/* 2416 */    MCD::OPC_CheckPredicate, 7, 163, 6, // Skip to: 4119
/* 2420 */    MCD::OPC_Decode, 136, 7, 75, // Opcode: EXTPDPV_MM
/* 2424 */    MCD::OPC_FilterValue, 40, 8, 0, // Skip to: 2436
/* 2428 */    MCD::OPC_CheckPredicate, 5, 151, 6, // Skip to: 4119
/* 2432 */    MCD::OPC_Decode, 243, 17, 57, // Opcode: TLTU_MM
/* 2436 */    MCD::OPC_FilterValue, 41, 51, 0, // Skip to: 2491
/* 2440 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2443 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2455
/* 2447 */    MCD::OPC_CheckPredicate, 7, 132, 6, // Skip to: 4119
/* 2451 */    MCD::OPC_Decode, 238, 10, 61, // Opcode: MAQ_S_W_PHR_MM
/* 2455 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2467
/* 2459 */    MCD::OPC_CheckPredicate, 7, 120, 6, // Skip to: 4119
/* 2463 */    MCD::OPC_Decode, 236, 10, 61, // Opcode: MAQ_S_W_PHL_MM
/* 2467 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2479
/* 2471 */    MCD::OPC_CheckPredicate, 7, 108, 6, // Skip to: 4119
/* 2475 */    MCD::OPC_Decode, 234, 10, 61, // Opcode: MAQ_SA_W_PHR_MM
/* 2479 */    MCD::OPC_FilterValue, 3, 100, 6, // Skip to: 4119
/* 2483 */    MCD::OPC_CheckPredicate, 7, 96, 6, // Skip to: 4119
/* 2487 */    MCD::OPC_Decode, 232, 10, 61, // Opcode: MAQ_SA_W_PHL_MM
/* 2491 */    MCD::OPC_FilterValue, 42, 51, 0, // Skip to: 2546
/* 2495 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2498 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2510
/* 2502 */    MCD::OPC_CheckPredicate, 7, 77, 6, // Skip to: 4119
/* 2506 */    MCD::OPC_Decode, 225, 10, 61, // Opcode: MADD_DSP_MM
/* 2510 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2522
/* 2514 */    MCD::OPC_CheckPredicate, 7, 65, 6, // Skip to: 4119
/* 2518 */    MCD::OPC_Decode, 215, 10, 61, // Opcode: MADDU_DSP_MM
/* 2522 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2534
/* 2526 */    MCD::OPC_CheckPredicate, 7, 53, 6, // Skip to: 4119
/* 2530 */    MCD::OPC_Decode, 144, 12, 61, // Opcode: MSUB_DSP_MM
/* 2534 */    MCD::OPC_FilterValue, 3, 45, 6, // Skip to: 4119
/* 2538 */    MCD::OPC_CheckPredicate, 7, 41, 6, // Skip to: 4119
/* 2542 */    MCD::OPC_Decode, 134, 12, 61, // Opcode: MSUBU_DSP_MM
/* 2546 */    MCD::OPC_FilterValue, 44, 171, 0, // Skip to: 2721
/* 2550 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2553 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2565
/* 2557 */    MCD::OPC_CheckPredicate, 5, 22, 6, // Skip to: 4119
/* 2561 */    MCD::OPC_Decode, 254, 14, 63, // Opcode: SEB_MM
/* 2565 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 2577
/* 2569 */    MCD::OPC_CheckPredicate, 5, 10, 6, // Skip to: 4119
/* 2573 */    MCD::OPC_Decode, 130, 15, 63, // Opcode: SEH_MM
/* 2577 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2589
/* 2581 */    MCD::OPC_CheckPredicate, 5, 254, 5, // Skip to: 4119
/* 2585 */    MCD::OPC_Decode, 241, 3, 63, // Opcode: CLO_MM
/* 2589 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 2601
/* 2593 */    MCD::OPC_CheckPredicate, 5, 242, 5, // Skip to: 4119
/* 2597 */    MCD::OPC_Decode, 133, 4, 63, // Opcode: CLZ_MM
/* 2601 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 2613
/* 2605 */    MCD::OPC_CheckPredicate, 9, 230, 5, // Skip to: 4119
/* 2609 */    MCD::OPC_Decode, 159, 14, 76, // Opcode: RDHWR_MM
/* 2613 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 2625
/* 2617 */    MCD::OPC_CheckPredicate, 5, 218, 5, // Skip to: 4119
/* 2621 */    MCD::OPC_Decode, 155, 18, 63, // Opcode: WSBH_MM
/* 2625 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2637
/* 2629 */    MCD::OPC_CheckPredicate, 5, 206, 5, // Skip to: 4119
/* 2633 */    MCD::OPC_Decode, 214, 12, 77, // Opcode: MULT_MM
/* 2637 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 2649
/* 2641 */    MCD::OPC_CheckPredicate, 5, 194, 5, // Skip to: 4119
/* 2645 */    MCD::OPC_Decode, 216, 12, 77, // Opcode: MULTu_MM
/* 2649 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 2661
/* 2653 */    MCD::OPC_CheckPredicate, 5, 182, 5, // Skip to: 4119
/* 2657 */    MCD::OPC_Decode, 244, 14, 77, // Opcode: SDIV_MM
/* 2661 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 2673
/* 2665 */    MCD::OPC_CheckPredicate, 5, 170, 5, // Skip to: 4119
/* 2669 */    MCD::OPC_Decode, 135, 18, 77, // Opcode: UDIV_MM
/* 2673 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 2685
/* 2677 */    MCD::OPC_CheckPredicate, 5, 158, 5, // Skip to: 4119
/* 2681 */    MCD::OPC_Decode, 226, 10, 77, // Opcode: MADD_MM
/* 2685 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 2697
/* 2689 */    MCD::OPC_CheckPredicate, 5, 146, 5, // Skip to: 4119
/* 2693 */    MCD::OPC_Decode, 216, 10, 77, // Opcode: MADDU_MM
/* 2697 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 2709
/* 2701 */    MCD::OPC_CheckPredicate, 5, 134, 5, // Skip to: 4119
/* 2705 */    MCD::OPC_Decode, 145, 12, 77, // Opcode: MSUB_MM
/* 2709 */    MCD::OPC_FilterValue, 15, 126, 5, // Skip to: 4119
/* 2713 */    MCD::OPC_CheckPredicate, 5, 122, 5, // Skip to: 4119
/* 2717 */    MCD::OPC_Decode, 135, 12, 77, // Opcode: MSUBU_MM
/* 2721 */    MCD::OPC_FilterValue, 45, 45, 0, // Skip to: 2770
/* 2725 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2728 */    MCD::OPC_FilterValue, 6, 14, 0, // Skip to: 2746
/* 2732 */    MCD::OPC_CheckPredicate, 5, 103, 5, // Skip to: 4119
/* 2736 */    MCD::OPC_CheckField, 21, 5, 0, 97, 5, // Skip to: 4119
/* 2742 */    MCD::OPC_Decode, 162, 17, 78, // Opcode: SYNC_MM
/* 2746 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 2758
/* 2750 */    MCD::OPC_CheckPredicate, 5, 85, 5, // Skip to: 4119
/* 2754 */    MCD::OPC_Decode, 165, 17, 69, // Opcode: SYSCALL_MM
/* 2758 */    MCD::OPC_FilterValue, 13, 77, 5, // Skip to: 4119
/* 2762 */    MCD::OPC_CheckPredicate, 5, 73, 5, // Skip to: 4119
/* 2766 */    MCD::OPC_Decode, 232, 14, 69, // Opcode: SDBBP_MM
/* 2770 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 2782
/* 2774 */    MCD::OPC_CheckPredicate, 5, 61, 5, // Skip to: 4119
/* 2778 */    MCD::OPC_Decode, 248, 17, 57, // Opcode: TNE_MM
/* 2782 */    MCD::OPC_FilterValue, 50, 51, 0, // Skip to: 2837
/* 2786 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2789 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2801
/* 2793 */    MCD::OPC_CheckPredicate, 7, 42, 5, // Skip to: 4119
/* 2797 */    MCD::OPC_Decode, 213, 12, 79, // Opcode: MULT_DSP_MM
/* 2801 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2813
/* 2805 */    MCD::OPC_CheckPredicate, 7, 30, 5, // Skip to: 4119
/* 2809 */    MCD::OPC_Decode, 211, 12, 79, // Opcode: MULTU_DSP_MM
/* 2813 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2825
/* 2817 */    MCD::OPC_CheckPredicate, 8, 18, 5, // Skip to: 4119
/* 2821 */    MCD::OPC_Decode, 208, 12, 61, // Opcode: MULSA_W_PH_MMR2
/* 2825 */    MCD::OPC_FilterValue, 3, 10, 5, // Skip to: 4119
/* 2829 */    MCD::OPC_CheckPredicate, 7, 6, 5, // Skip to: 4119
/* 2833 */    MCD::OPC_Decode, 206, 12, 61, // Opcode: MULSAQ_S_W_PH_MM
/* 2837 */    MCD::OPC_FilterValue, 53, 75, 0, // Skip to: 2916
/* 2841 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 2844 */    MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 2862
/* 2848 */    MCD::OPC_CheckPredicate, 5, 243, 4, // Skip to: 4119
/* 2852 */    MCD::OPC_CheckField, 21, 5, 0, 237, 4, // Skip to: 4119
/* 2858 */    MCD::OPC_Decode, 158, 11, 73, // Opcode: MFHI_MM
/* 2862 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 2880
/* 2866 */    MCD::OPC_CheckPredicate, 5, 225, 4, // Skip to: 4119
/* 2870 */    MCD::OPC_CheckField, 21, 5, 0, 219, 4, // Skip to: 4119
/* 2876 */    MCD::OPC_Decode, 164, 11, 73, // Opcode: MFLO_MM
/* 2880 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 2898
/* 2884 */    MCD::OPC_CheckPredicate, 5, 207, 4, // Skip to: 4119
/* 2888 */    MCD::OPC_CheckField, 21, 5, 0, 201, 4, // Skip to: 4119
/* 2894 */    MCD::OPC_Decode, 168, 12, 73, // Opcode: MTHI_MM
/* 2898 */    MCD::OPC_FilterValue, 3, 193, 4, // Skip to: 4119
/* 2902 */    MCD::OPC_CheckPredicate, 5, 189, 4, // Skip to: 4119
/* 2906 */    MCD::OPC_CheckField, 21, 5, 0, 183, 4, // Skip to: 4119
/* 2912 */    MCD::OPC_Decode, 175, 12, 73, // Opcode: MTLO_MM
/* 2916 */    MCD::OPC_FilterValue, 57, 51, 0, // Skip to: 2971
/* 2920 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2923 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2935
/* 2927 */    MCD::OPC_CheckPredicate, 7, 164, 4, // Skip to: 4119
/* 2931 */    MCD::OPC_Decode, 156, 7, 72, // Opcode: EXTR_W_MM
/* 2935 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 2947
/* 2939 */    MCD::OPC_CheckPredicate, 7, 152, 4, // Skip to: 4119
/* 2943 */    MCD::OPC_Decode, 152, 7, 72, // Opcode: EXTR_R_W_MM
/* 2947 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 2959
/* 2951 */    MCD::OPC_CheckPredicate, 7, 140, 4, // Skip to: 4119
/* 2955 */    MCD::OPC_Decode, 150, 7, 72, // Opcode: EXTR_RS_W_MM
/* 2959 */    MCD::OPC_FilterValue, 3, 132, 4, // Skip to: 4119
/* 2963 */    MCD::OPC_CheckPredicate, 7, 128, 4, // Skip to: 4119
/* 2967 */    MCD::OPC_Decode, 154, 7, 72, // Opcode: EXTR_S_H_MM
/* 2971 */    MCD::OPC_FilterValue, 58, 51, 0, // Skip to: 3026
/* 2975 */    MCD::OPC_ExtractField, 12, 2,  // Inst{13-12} ...
/* 2978 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2990
/* 2982 */    MCD::OPC_CheckPredicate, 7, 109, 4, // Skip to: 4119
/* 2986 */    MCD::OPC_Decode, 148, 7, 75, // Opcode: EXTRV_W_MM
/* 2990 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3002
/* 2994 */    MCD::OPC_CheckPredicate, 7, 97, 4, // Skip to: 4119
/* 2998 */    MCD::OPC_Decode, 144, 7, 75, // Opcode: EXTRV_R_W_MM
/* 3002 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3014
/* 3006 */    MCD::OPC_CheckPredicate, 7, 85, 4, // Skip to: 4119
/* 3010 */    MCD::OPC_Decode, 142, 7, 75, // Opcode: EXTRV_RS_W_MM
/* 3014 */    MCD::OPC_FilterValue, 3, 77, 4, // Skip to: 4119
/* 3018 */    MCD::OPC_CheckPredicate, 7, 73, 4, // Skip to: 4119
/* 3022 */    MCD::OPC_Decode, 146, 7, 75, // Opcode: EXTRV_S_H_MM
/* 3026 */    MCD::OPC_FilterValue, 60, 65, 4, // Skip to: 4119
/* 3030 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3033 */    MCD::OPC_FilterValue, 0, 22, 0, // Skip to: 3059
/* 3037 */    MCD::OPC_CheckPredicate, 5, 10, 0, // Skip to: 3051
/* 3041 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3051
/* 3047 */    MCD::OPC_Decode, 176, 9, 73, // Opcode: JR_MM
/* 3051 */    MCD::OPC_CheckPredicate, 5, 40, 4, // Skip to: 4119
/* 3055 */    MCD::OPC_Decode, 156, 9, 63, // Opcode: JALR_MM
/* 3059 */    MCD::OPC_FilterValue, 4, 32, 4, // Skip to: 4119
/* 3063 */    MCD::OPC_CheckPredicate, 5, 28, 4, // Skip to: 4119
/* 3067 */    MCD::OPC_Decode, 154, 9, 63, // Opcode: JALRS_MM
/* 3071 */    MCD::OPC_FilterValue, 61, 20, 4, // Skip to: 4119
/* 3075 */    MCD::OPC_CheckPredicate, 7, 16, 4, // Skip to: 4119
/* 3079 */    MCD::OPC_CheckField, 6, 5, 0, 10, 4, // Skip to: 4119
/* 3085 */    MCD::OPC_Decode, 169, 14, 80, // Opcode: REPL_PH_MM
/* 3089 */    MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 3100
/* 3093 */    MCD::OPC_CheckPredicate, 5, 254, 3, // Skip to: 4119
/* 3097 */    MCD::OPC_Decode, 107, 81, // Opcode: ADDi_MM
/* 3100 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3112
/* 3104 */    MCD::OPC_CheckPredicate, 5, 243, 3, // Skip to: 4119
/* 3108 */    MCD::OPC_Decode, 202, 9, 82, // Opcode: LBu_MM
/* 3112 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3124
/* 3116 */    MCD::OPC_CheckPredicate, 5, 231, 3, // Skip to: 4119
/* 3120 */    MCD::OPC_Decode, 216, 14, 82, // Opcode: SB_MM
/* 3124 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3136
/* 3128 */    MCD::OPC_CheckPredicate, 5, 219, 3, // Skip to: 4119
/* 3132 */    MCD::OPC_Decode, 196, 9, 82, // Opcode: LB_MM
/* 3136 */    MCD::OPC_FilterValue, 8, 63, 0, // Skip to: 3203
/* 3140 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3143 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3155
/* 3147 */    MCD::OPC_CheckPredicate, 5, 200, 3, // Skip to: 4119
/* 3151 */    MCD::OPC_Decode, 169, 10, 83, // Opcode: LWP_MM
/* 3155 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3167
/* 3159 */    MCD::OPC_CheckPredicate, 5, 188, 3, // Skip to: 4119
/* 3163 */    MCD::OPC_Decode, 165, 10, 83, // Opcode: LWM32_MM
/* 3167 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3179
/* 3171 */    MCD::OPC_CheckPredicate, 5, 176, 3, // Skip to: 4119
/* 3175 */    MCD::OPC_Decode, 193, 3, 84, // Opcode: CACHE_MM
/* 3179 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3191
/* 3183 */    MCD::OPC_CheckPredicate, 5, 164, 3, // Skip to: 4119
/* 3187 */    MCD::OPC_Decode, 146, 17, 83, // Opcode: SWP_MM
/* 3191 */    MCD::OPC_FilterValue, 13, 156, 3, // Skip to: 4119
/* 3195 */    MCD::OPC_CheckPredicate, 5, 152, 3, // Skip to: 4119
/* 3199 */    MCD::OPC_Decode, 144, 17, 83, // Opcode: SWM32_MM
/* 3203 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 3214
/* 3207 */    MCD::OPC_CheckPredicate, 5, 140, 3, // Skip to: 4119
/* 3211 */    MCD::OPC_Decode, 109, 81, // Opcode: ADDiu_MM
/* 3214 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3226
/* 3218 */    MCD::OPC_CheckPredicate, 5, 129, 3, // Skip to: 4119
/* 3222 */    MCD::OPC_Decode, 242, 9, 82, // Opcode: LHu_MM
/* 3226 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3238
/* 3230 */    MCD::OPC_CheckPredicate, 5, 117, 3, // Skip to: 4119
/* 3234 */    MCD::OPC_Decode, 210, 15, 82, // Opcode: SH_MM
/* 3238 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 3250
/* 3242 */    MCD::OPC_CheckPredicate, 5, 105, 3, // Skip to: 4119
/* 3246 */    MCD::OPC_Decode, 237, 9, 82, // Opcode: LH_MM
/* 3250 */    MCD::OPC_FilterValue, 16, 243, 0, // Skip to: 3497
/* 3254 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3257 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3269
/* 3261 */    MCD::OPC_CheckPredicate, 5, 86, 3, // Skip to: 4119
/* 3265 */    MCD::OPC_Decode, 224, 2, 85, // Opcode: BLTZ_MM
/* 3269 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3281
/* 3273 */    MCD::OPC_CheckPredicate, 5, 74, 3, // Skip to: 4119
/* 3277 */    MCD::OPC_Decode, 221, 2, 85, // Opcode: BLTZAL_MM
/* 3281 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3293
/* 3285 */    MCD::OPC_CheckPredicate, 5, 62, 3, // Skip to: 4119
/* 3289 */    MCD::OPC_Decode, 151, 2, 85, // Opcode: BGEZ_MM
/* 3293 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3305
/* 3297 */    MCD::OPC_CheckPredicate, 5, 50, 3, // Skip to: 4119
/* 3301 */    MCD::OPC_Decode, 148, 2, 85, // Opcode: BGEZAL_MM
/* 3305 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3317
/* 3309 */    MCD::OPC_CheckPredicate, 5, 38, 3, // Skip to: 4119
/* 3313 */    MCD::OPC_Decode, 201, 2, 85, // Opcode: BLEZ_MM
/* 3317 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3329
/* 3321 */    MCD::OPC_CheckPredicate, 5, 26, 3, // Skip to: 4119
/* 3325 */    MCD::OPC_Decode, 247, 2, 85, // Opcode: BNEZC_MM
/* 3329 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3341
/* 3333 */    MCD::OPC_CheckPredicate, 5, 14, 3, // Skip to: 4119
/* 3337 */    MCD::OPC_Decode, 166, 2, 85, // Opcode: BGTZ_MM
/* 3341 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3353
/* 3345 */    MCD::OPC_CheckPredicate, 5, 2, 3, // Skip to: 4119
/* 3349 */    MCD::OPC_Decode, 254, 1, 85, // Opcode: BEQZC_MM
/* 3353 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3365
/* 3357 */    MCD::OPC_CheckPredicate, 5, 246, 2, // Skip to: 4119
/* 3361 */    MCD::OPC_Decode, 241, 17, 86, // Opcode: TLTI_MM
/* 3365 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3377
/* 3369 */    MCD::OPC_CheckPredicate, 5, 234, 2, // Skip to: 4119
/* 3373 */    MCD::OPC_Decode, 222, 17, 86, // Opcode: TGEI_MM
/* 3377 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 3389
/* 3381 */    MCD::OPC_CheckPredicate, 5, 222, 2, // Skip to: 4119
/* 3385 */    MCD::OPC_Decode, 240, 17, 86, // Opcode: TLTIU_MM
/* 3389 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3401
/* 3393 */    MCD::OPC_CheckPredicate, 5, 210, 2, // Skip to: 4119
/* 3397 */    MCD::OPC_Decode, 221, 17, 86, // Opcode: TGEIU_MM
/* 3401 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 3413
/* 3405 */    MCD::OPC_CheckPredicate, 5, 198, 2, // Skip to: 4119
/* 3409 */    MCD::OPC_Decode, 247, 17, 86, // Opcode: TNEI_MM
/* 3413 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 3425
/* 3417 */    MCD::OPC_CheckPredicate, 5, 186, 2, // Skip to: 4119
/* 3421 */    MCD::OPC_Decode, 144, 10, 87, // Opcode: LUi_MM
/* 3425 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 3437
/* 3429 */    MCD::OPC_CheckPredicate, 5, 174, 2, // Skip to: 4119
/* 3433 */    MCD::OPC_Decode, 216, 17, 86, // Opcode: TEQI_MM
/* 3437 */    MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 3449
/* 3441 */    MCD::OPC_CheckPredicate, 5, 162, 2, // Skip to: 4119
/* 3445 */    MCD::OPC_Decode, 220, 2, 85, // Opcode: BLTZALS_MM
/* 3449 */    MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 3461
/* 3453 */    MCD::OPC_CheckPredicate, 5, 150, 2, // Skip to: 4119
/* 3457 */    MCD::OPC_Decode, 147, 2, 85, // Opcode: BGEZALS_MM
/* 3461 */    MCD::OPC_FilterValue, 25, 14, 0, // Skip to: 3479
/* 3465 */    MCD::OPC_CheckPredicate, 10, 138, 2, // Skip to: 4119
/* 3469 */    MCD::OPC_CheckField, 16, 5, 0, 132, 2, // Skip to: 4119
/* 3475 */    MCD::OPC_Decode, 132, 3, 88, // Opcode: BPOSGE32C_MMR3
/* 3479 */    MCD::OPC_FilterValue, 27, 124, 2, // Skip to: 4119
/* 3483 */    MCD::OPC_CheckPredicate, 11, 120, 2, // Skip to: 4119
/* 3487 */    MCD::OPC_CheckField, 16, 5, 0, 114, 2, // Skip to: 4119
/* 3493 */    MCD::OPC_Decode, 133, 3, 89, // Opcode: BPOSGE32_MM
/* 3497 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 3509
/* 3501 */    MCD::OPC_CheckPredicate, 5, 102, 2, // Skip to: 4119
/* 3505 */    MCD::OPC_Decode, 159, 13, 90, // Opcode: ORi_MM
/* 3509 */    MCD::OPC_FilterValue, 21, 48, 0, // Skip to: 3561
/* 3513 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3516 */    MCD::OPC_FilterValue, 251, 2, 27, 0, // Skip to: 3548
/* 3521 */    MCD::OPC_ExtractField, 11, 2,  // Inst{12-11} ...
/* 3524 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3536
/* 3528 */    MCD::OPC_CheckPredicate, 5, 75, 2, // Skip to: 4119
/* 3532 */    MCD::OPC_Decode, 218, 11, 91, // Opcode: MOVF_I_MM
/* 3536 */    MCD::OPC_FilterValue, 1, 67, 2, // Skip to: 4119
/* 3540 */    MCD::OPC_CheckPredicate, 5, 63, 2, // Skip to: 4119
/* 3544 */    MCD::OPC_Decode, 238, 11, 91, // Opcode: MOVT_I_MM
/* 3548 */    MCD::OPC_FilterValue, 160, 3, 54, 2, // Skip to: 4119
/* 3553 */    MCD::OPC_CheckPredicate, 5, 50, 2, // Skip to: 4119
/* 3557 */    MCD::OPC_Decode, 221, 13, 92, // Opcode: PREFX_MM
/* 3561 */    MCD::OPC_FilterValue, 22, 42, 0, // Skip to: 3607
/* 3565 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3568 */    MCD::OPC_FilterValue, 197, 1, 8, 0, // Skip to: 3581
/* 3573 */    MCD::OPC_CheckPredicate, 7, 30, 2, // Skip to: 4119
/* 3577 */    MCD::OPC_Decode, 143, 4, 42, // Opcode: CMPGU_EQ_QB_MM
/* 3581 */    MCD::OPC_FilterValue, 133, 2, 8, 0, // Skip to: 3594
/* 3586 */    MCD::OPC_CheckPredicate, 7, 17, 2, // Skip to: 4119
/* 3590 */    MCD::OPC_Decode, 147, 4, 42, // Opcode: CMPGU_LT_QB_MM
/* 3594 */    MCD::OPC_FilterValue, 197, 2, 8, 2, // Skip to: 4119
/* 3599 */    MCD::OPC_CheckPredicate, 7, 4, 2, // Skip to: 4119
/* 3603 */    MCD::OPC_Decode, 145, 4, 42, // Opcode: CMPGU_LE_QB_MM
/* 3607 */    MCD::OPC_FilterValue, 24, 49, 1, // Skip to: 3916
/* 3611 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3614 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3626
/* 3618 */    MCD::OPC_CheckPredicate, 5, 241, 1, // Skip to: 4119
/* 3622 */    MCD::OPC_Decode, 162, 10, 83, // Opcode: LWL_MM
/* 3626 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3638
/* 3630 */    MCD::OPC_CheckPredicate, 5, 229, 1, // Skip to: 4119
/* 3634 */    MCD::OPC_Decode, 175, 10, 83, // Opcode: LWR_MM
/* 3638 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3650
/* 3642 */    MCD::OPC_CheckPredicate, 5, 217, 1, // Skip to: 4119
/* 3646 */    MCD::OPC_Decode, 222, 13, 84, // Opcode: PREF_MM
/* 3650 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3662
/* 3654 */    MCD::OPC_CheckPredicate, 5, 205, 1, // Skip to: 4119
/* 3658 */    MCD::OPC_Decode, 254, 9, 83, // Opcode: LL_MM
/* 3662 */    MCD::OPC_FilterValue, 6, 99, 0, // Skip to: 3765
/* 3666 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3669 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3681
/* 3673 */    MCD::OPC_CheckPredicate, 5, 186, 1, // Skip to: 4119
/* 3677 */    MCD::OPC_Decode, 201, 9, 93, // Opcode: LBuE_MM
/* 3681 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3693
/* 3685 */    MCD::OPC_CheckPredicate, 5, 174, 1, // Skip to: 4119
/* 3689 */    MCD::OPC_Decode, 241, 9, 93, // Opcode: LHuE_MM
/* 3693 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3705
/* 3697 */    MCD::OPC_CheckPredicate, 5, 162, 1, // Skip to: 4119
/* 3701 */    MCD::OPC_Decode, 161, 10, 93, // Opcode: LWLE_MM
/* 3705 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3717
/* 3709 */    MCD::OPC_CheckPredicate, 5, 150, 1, // Skip to: 4119
/* 3713 */    MCD::OPC_Decode, 174, 10, 93, // Opcode: LWRE_MM
/* 3717 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3729
/* 3721 */    MCD::OPC_CheckPredicate, 5, 138, 1, // Skip to: 4119
/* 3725 */    MCD::OPC_Decode, 189, 9, 93, // Opcode: LBE_MM
/* 3729 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3741
/* 3733 */    MCD::OPC_CheckPredicate, 5, 126, 1, // Skip to: 4119
/* 3737 */    MCD::OPC_Decode, 233, 9, 93, // Opcode: LHE_MM
/* 3741 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3753
/* 3745 */    MCD::OPC_CheckPredicate, 5, 114, 1, // Skip to: 4119
/* 3749 */    MCD::OPC_Decode, 252, 9, 93, // Opcode: LLE_MM
/* 3753 */    MCD::OPC_FilterValue, 7, 106, 1, // Skip to: 4119
/* 3757 */    MCD::OPC_CheckPredicate, 5, 102, 1, // Skip to: 4119
/* 3761 */    MCD::OPC_Decode, 155, 10, 93, // Opcode: LWE_MM
/* 3765 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 3777
/* 3769 */    MCD::OPC_CheckPredicate, 5, 90, 1, // Skip to: 4119
/* 3773 */    MCD::OPC_Decode, 141, 17, 83, // Opcode: SWL_MM
/* 3777 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 3789
/* 3781 */    MCD::OPC_CheckPredicate, 5, 78, 1, // Skip to: 4119
/* 3785 */    MCD::OPC_Decode, 152, 17, 83, // Opcode: SWR_MM
/* 3789 */    MCD::OPC_FilterValue, 10, 99, 0, // Skip to: 3892
/* 3793 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3796 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3808
/* 3800 */    MCD::OPC_CheckPredicate, 5, 59, 1, // Skip to: 4119
/* 3804 */    MCD::OPC_Decode, 140, 17, 93, // Opcode: SWLE_MM
/* 3808 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 3820
/* 3812 */    MCD::OPC_CheckPredicate, 5, 47, 1, // Skip to: 4119
/* 3816 */    MCD::OPC_Decode, 151, 17, 93, // Opcode: SWRE_MM
/* 3820 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3832
/* 3824 */    MCD::OPC_CheckPredicate, 5, 35, 1, // Skip to: 4119
/* 3828 */    MCD::OPC_Decode, 219, 13, 94, // Opcode: PREFE_MM
/* 3832 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3844
/* 3836 */    MCD::OPC_CheckPredicate, 5, 23, 1, // Skip to: 4119
/* 3840 */    MCD::OPC_Decode, 191, 3, 94, // Opcode: CACHEE_MM
/* 3844 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 3856
/* 3848 */    MCD::OPC_CheckPredicate, 5, 11, 1, // Skip to: 4119
/* 3852 */    MCD::OPC_Decode, 214, 14, 93, // Opcode: SBE_MM
/* 3856 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 3868
/* 3860 */    MCD::OPC_CheckPredicate, 5, 255, 0, // Skip to: 4119
/* 3864 */    MCD::OPC_Decode, 157, 15, 93, // Opcode: SHE_MM
/* 3868 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3880
/* 3872 */    MCD::OPC_CheckPredicate, 5, 243, 0, // Skip to: 4119
/* 3876 */    MCD::OPC_Decode, 224, 14, 93, // Opcode: SCE_MM
/* 3880 */    MCD::OPC_FilterValue, 7, 235, 0, // Skip to: 4119
/* 3884 */    MCD::OPC_CheckPredicate, 5, 231, 0, // Skip to: 4119
/* 3888 */    MCD::OPC_Decode, 135, 17, 93, // Opcode: SWE_MM
/* 3892 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 3904
/* 3896 */    MCD::OPC_CheckPredicate, 5, 219, 0, // Skip to: 4119
/* 3900 */    MCD::OPC_Decode, 226, 14, 83, // Opcode: SC_MM
/* 3904 */    MCD::OPC_FilterValue, 14, 211, 0, // Skip to: 4119
/* 3908 */    MCD::OPC_CheckPredicate, 9, 207, 0, // Skip to: 4119
/* 3912 */    MCD::OPC_Decode, 178, 10, 83, // Opcode: LWU_MM
/* 3916 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3928
/* 3920 */    MCD::OPC_CheckPredicate, 5, 195, 0, // Skip to: 4119
/* 3924 */    MCD::OPC_Decode, 171, 18, 90, // Opcode: XORi_MM
/* 3928 */    MCD::OPC_FilterValue, 29, 8, 0, // Skip to: 3940
/* 3932 */    MCD::OPC_CheckPredicate, 5, 183, 0, // Skip to: 4119
/* 3936 */    MCD::OPC_Decode, 157, 9, 95, // Opcode: JALS_MM
/* 3940 */    MCD::OPC_FilterValue, 30, 7, 0, // Skip to: 3951
/* 3944 */    MCD::OPC_CheckPredicate, 5, 171, 0, // Skip to: 4119
/* 3948 */    MCD::OPC_Decode, 40, 96, // Opcode: ADDIUPC_MM
/* 3951 */    MCD::OPC_FilterValue, 36, 8, 0, // Skip to: 3963
/* 3955 */    MCD::OPC_CheckPredicate, 5, 160, 0, // Skip to: 4119
/* 3959 */    MCD::OPC_Decode, 242, 15, 81, // Opcode: SLTi_MM
/* 3963 */    MCD::OPC_FilterValue, 37, 8, 0, // Skip to: 3975
/* 3967 */    MCD::OPC_CheckPredicate, 5, 148, 0, // Skip to: 4119
/* 3971 */    MCD::OPC_Decode, 128, 2, 97, // Opcode: BEQ_MM
/* 3975 */    MCD::OPC_FilterValue, 38, 8, 0, // Skip to: 3987
/* 3979 */    MCD::OPC_CheckPredicate, 12, 136, 0, // Skip to: 4119
/* 3983 */    MCD::OPC_Decode, 129, 17, 98, // Opcode: SWC1_MM
/* 3987 */    MCD::OPC_FilterValue, 39, 8, 0, // Skip to: 3999
/* 3991 */    MCD::OPC_CheckPredicate, 12, 124, 0, // Skip to: 4119
/* 3995 */    MCD::OPC_Decode, 149, 10, 98, // Opcode: LWC1_MM
/* 3999 */    MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 4011
/* 4003 */    MCD::OPC_CheckPredicate, 5, 112, 0, // Skip to: 4119
/* 4007 */    MCD::OPC_Decode, 245, 15, 81, // Opcode: SLTiu_MM
/* 4011 */    MCD::OPC_FilterValue, 45, 8, 0, // Skip to: 4023
/* 4015 */    MCD::OPC_CheckPredicate, 5, 100, 0, // Skip to: 4119
/* 4019 */    MCD::OPC_Decode, 249, 2, 97, // Opcode: BNE_MM
/* 4023 */    MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 4035
/* 4027 */    MCD::OPC_CheckPredicate, 13, 88, 0, // Skip to: 4119
/* 4031 */    MCD::OPC_Decode, 238, 14, 98, // Opcode: SDC1_MM
/* 4035 */    MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 4047
/* 4039 */    MCD::OPC_CheckPredicate, 13, 76, 0, // Skip to: 4119
/* 4043 */    MCD::OPC_Decode, 207, 9, 98, // Opcode: LDC1_MM
/* 4047 */    MCD::OPC_FilterValue, 52, 8, 0, // Skip to: 4059
/* 4051 */    MCD::OPC_CheckPredicate, 5, 64, 0, // Skip to: 4119
/* 4055 */    MCD::OPC_Decode, 134, 1, 90, // Opcode: ANDi_MM
/* 4059 */    MCD::OPC_FilterValue, 53, 8, 0, // Skip to: 4071
/* 4063 */    MCD::OPC_CheckPredicate, 5, 52, 0, // Skip to: 4119
/* 4067 */    MCD::OPC_Decode, 177, 9, 95, // Opcode: J_MM
/* 4071 */    MCD::OPC_FilterValue, 60, 8, 0, // Skip to: 4083
/* 4075 */    MCD::OPC_CheckPredicate, 5, 40, 0, // Skip to: 4119
/* 4079 */    MCD::OPC_Decode, 159, 9, 95, // Opcode: JALX_MM
/* 4083 */    MCD::OPC_FilterValue, 61, 8, 0, // Skip to: 4095
/* 4087 */    MCD::OPC_CheckPredicate, 5, 28, 0, // Skip to: 4119
/* 4091 */    MCD::OPC_Decode, 160, 9, 95, // Opcode: JAL_MM
/* 4095 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 4107
/* 4099 */    MCD::OPC_CheckPredicate, 5, 16, 0, // Skip to: 4119
/* 4103 */    MCD::OPC_Decode, 157, 17, 82, // Opcode: SW_MM
/* 4107 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 4119
/* 4111 */    MCD::OPC_CheckPredicate, 5, 4, 0, // Skip to: 4119
/* 4115 */    MCD::OPC_Decode, 185, 10, 82, // Opcode: LW_MM
/* 4119 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMips32r6FP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 21, 29, 0, // Skip to: 36
/* 7 */       MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 10 */      MCD::OPC_FilterValue, 187, 96, 8, 0, // Skip to: 23
/* 15 */      MCD::OPC_CheckPredicate, 14, 41, 0, // Skip to: 60
/* 19 */      MCD::OPC_Decode, 150, 11, 99, // Opcode: MFHC1_D64_MMR6
/* 23 */      MCD::OPC_FilterValue, 187, 112, 32, 0, // Skip to: 60
/* 28 */      MCD::OPC_CheckPredicate, 14, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 161, 12, 100, // Opcode: MTHC1_D64_MMR6
/* 36 */      MCD::OPC_FilterValue, 46, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 14, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 237, 14, 98, // Opcode: SDC1_D64_MMR6
/* 48 */      MCD::OPC_FilterValue, 47, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 14, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 206, 9, 98, // Opcode: LDC1_D64_MMR6
/* 60 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR616[] = {
/* 0 */       MCD::OPC_ExtractField, 10, 6,  // Inst{15-10} ...
/* 3 */       MCD::OPC_FilterValue, 1, 26, 0, // Skip to: 33
/* 7 */       MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 7, 0, // Skip to: 21
/* 14 */      MCD::OPC_CheckPredicate, 15, 68, 1, // Skip to: 342
/* 18 */      MCD::OPC_Decode, 76, 101, // Opcode: ADDU16_MMR6
/* 21 */      MCD::OPC_FilterValue, 1, 61, 1, // Skip to: 342
/* 25 */      MCD::OPC_CheckPredicate, 15, 57, 1, // Skip to: 342
/* 29 */      MCD::OPC_Decode, 223, 16, 101, // Opcode: SUBU16_MMR6
/* 33 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 45
/* 37 */      MCD::OPC_CheckPredicate, 15, 45, 1, // Skip to: 342
/* 41 */      MCD::OPC_Decode, 210, 11, 21, // Opcode: MOVE16_MMR6
/* 45 */      MCD::OPC_FilterValue, 9, 27, 0, // Skip to: 76
/* 49 */      MCD::OPC_ExtractField, 0, 1,  // Inst{0} ...
/* 52 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 64
/* 56 */      MCD::OPC_CheckPredicate, 15, 26, 1, // Skip to: 342
/* 60 */      MCD::OPC_Decode, 222, 15, 22, // Opcode: SLL16_MMR6
/* 64 */      MCD::OPC_FilterValue, 1, 18, 1, // Skip to: 342
/* 68 */      MCD::OPC_CheckPredicate, 15, 14, 1, // Skip to: 342
/* 72 */      MCD::OPC_Decode, 160, 16, 22, // Opcode: SRL16_MMR6
/* 76 */      MCD::OPC_FilterValue, 11, 7, 0, // Skip to: 87
/* 80 */      MCD::OPC_CheckPredicate, 15, 2, 1, // Skip to: 342
/* 84 */      MCD::OPC_Decode, 123, 23, // Opcode: ANDI16_MMR6
/* 87 */      MCD::OPC_FilterValue, 17, 155, 0, // Skip to: 246
/* 91 */      MCD::OPC_ExtractField, 0, 4,  // Inst{3-0} ...
/* 94 */      MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 106
/* 98 */      MCD::OPC_CheckPredicate, 15, 240, 0, // Skip to: 342
/* 102 */     MCD::OPC_Decode, 142, 13, 102, // Opcode: NOT16_MMR6
/* 106 */     MCD::OPC_FilterValue, 1, 7, 0, // Skip to: 117
/* 110 */     MCD::OPC_CheckPredicate, 15, 228, 0, // Skip to: 342
/* 114 */     MCD::OPC_Decode, 120, 103, // Opcode: AND16_MMR6
/* 117 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 129
/* 121 */     MCD::OPC_CheckPredicate, 15, 217, 0, // Skip to: 342
/* 125 */     MCD::OPC_Decode, 164, 10, 26, // Opcode: LWM16_MMR6
/* 129 */     MCD::OPC_FilterValue, 3, 27, 0, // Skip to: 160
/* 133 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 136 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 148
/* 140 */     MCD::OPC_CheckPredicate, 15, 198, 0, // Skip to: 342
/* 144 */     MCD::OPC_Decode, 172, 9, 104, // Opcode: JRC16_MMR6
/* 148 */     MCD::OPC_FilterValue, 1, 190, 0, // Skip to: 342
/* 152 */     MCD::OPC_CheckPredicate, 15, 186, 0, // Skip to: 342
/* 156 */     MCD::OPC_Decode, 173, 9, 105, // Opcode: JRCADDIUSP_MMR6
/* 160 */     MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 172
/* 164 */     MCD::OPC_CheckPredicate, 15, 174, 0, // Skip to: 342
/* 168 */     MCD::OPC_Decode, 159, 18, 103, // Opcode: XOR16_MMR6
/* 172 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 184
/* 176 */     MCD::OPC_CheckPredicate, 15, 162, 0, // Skip to: 342
/* 180 */     MCD::OPC_Decode, 147, 13, 103, // Opcode: OR16_MMR6
/* 184 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 196
/* 188 */     MCD::OPC_CheckPredicate, 15, 150, 0, // Skip to: 342
/* 192 */     MCD::OPC_Decode, 143, 17, 26, // Opcode: SWM16_MMR6
/* 196 */     MCD::OPC_FilterValue, 11, 142, 0, // Skip to: 342
/* 200 */     MCD::OPC_ExtractField, 4, 1,  // Inst{4} ...
/* 203 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 215
/* 207 */     MCD::OPC_CheckPredicate, 15, 131, 0, // Skip to: 342
/* 211 */     MCD::OPC_Decode, 149, 9, 104, // Opcode: JALRC16_MMR6
/* 215 */     MCD::OPC_FilterValue, 1, 123, 0, // Skip to: 342
/* 219 */     MCD::OPC_ExtractField, 5, 1,  // Inst{5} ...
/* 222 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 234
/* 226 */     MCD::OPC_CheckPredicate, 15, 112, 0, // Skip to: 342
/* 230 */     MCD::OPC_Decode, 137, 3, 106, // Opcode: BREAK16_MMR6
/* 234 */     MCD::OPC_FilterValue, 1, 104, 0, // Skip to: 342
/* 238 */     MCD::OPC_CheckPredicate, 15, 100, 0, // Skip to: 342
/* 242 */     MCD::OPC_Decode, 231, 14, 106, // Opcode: SDBBP16_MMR6
/* 246 */     MCD::OPC_FilterValue, 34, 8, 0, // Skip to: 258
/* 250 */     MCD::OPC_CheckPredicate, 15, 88, 0, // Skip to: 342
/* 254 */     MCD::OPC_Decode, 211, 14, 20, // Opcode: SB16_MMR6
/* 258 */     MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 270
/* 262 */     MCD::OPC_CheckPredicate, 15, 76, 0, // Skip to: 342
/* 266 */     MCD::OPC_Decode, 253, 1, 37, // Opcode: BEQZC16_MMR6
/* 270 */     MCD::OPC_FilterValue, 42, 8, 0, // Skip to: 282
/* 274 */     MCD::OPC_CheckPredicate, 15, 64, 0, // Skip to: 342
/* 278 */     MCD::OPC_Decode, 154, 15, 20, // Opcode: SH16_MMR6
/* 282 */     MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 294
/* 286 */     MCD::OPC_CheckPredicate, 15, 52, 0, // Skip to: 342
/* 290 */     MCD::OPC_Decode, 246, 2, 37, // Opcode: BNEZC16_MMR6
/* 294 */     MCD::OPC_FilterValue, 50, 8, 0, // Skip to: 306
/* 298 */     MCD::OPC_CheckPredicate, 15, 40, 0, // Skip to: 342
/* 302 */     MCD::OPC_Decode, 154, 17, 30, // Opcode: SWSP_MMR6
/* 306 */     MCD::OPC_FilterValue, 51, 8, 0, // Skip to: 318
/* 310 */     MCD::OPC_CheckPredicate, 15, 28, 0, // Skip to: 342
/* 314 */     MCD::OPC_Decode, 220, 1, 38, // Opcode: BC16_MMR6
/* 318 */     MCD::OPC_FilterValue, 58, 8, 0, // Skip to: 330
/* 322 */     MCD::OPC_CheckPredicate, 15, 16, 0, // Skip to: 342
/* 326 */     MCD::OPC_Decode, 254, 16, 20, // Opcode: SW16_MMR6
/* 330 */     MCD::OPC_FilterValue, 59, 8, 0, // Skip to: 342
/* 334 */     MCD::OPC_CheckPredicate, 15, 4, 0, // Skip to: 342
/* 338 */     MCD::OPC_Decode, 244, 9, 39, // Opcode: LI16_MMR6
/* 342 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 134, 3, // Skip to: 909
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 96, 0, // Skip to: 110
/* 14 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 17 */      MCD::OPC_FilterValue, 0, 47, 0, // Skip to: 68
/* 21 */      MCD::OPC_ExtractField, 11, 15,  // Inst{25-11} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 16, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 182, 16, 0, // Opcode: SSNOP_MMR6
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 249, 6, 0, // Opcode: EHB_MMR6
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 165, 13, 0, // Opcode: PAUSE_MMR6
/* 60 */      MCD::OPC_CheckPredicate, 16, 128, 14, // Skip to: 3776
/* 64 */      MCD::OPC_Decode, 235, 15, 40, // Opcode: SLL_MMR6
/* 68 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 80
/* 72 */      MCD::OPC_CheckPredicate, 16, 116, 14, // Skip to: 3776
/* 76 */      MCD::OPC_Decode, 136, 15, 43, // Opcode: SELEQZ_MMR6
/* 80 */      MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 92
/* 84 */      MCD::OPC_CheckPredicate, 16, 104, 14, // Skip to: 3776
/* 88 */      MCD::OPC_Decode, 143, 15, 43, // Opcode: SELNEZ_MMR6
/* 92 */      MCD::OPC_FilterValue, 7, 96, 14, // Skip to: 3776
/* 96 */      MCD::OPC_CheckPredicate, 16, 92, 14, // Skip to: 3776
/* 100 */     MCD::OPC_CheckField, 14, 2, 0, 86, 14, // Skip to: 3776
/* 106 */     MCD::OPC_Decode, 160, 14, 107, // Opcode: RDHWR_MMR6
/* 110 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 122
/* 114 */     MCD::OPC_CheckPredicate, 16, 74, 14, // Skip to: 3776
/* 118 */     MCD::OPC_Decode, 139, 3, 44, // Opcode: BREAK_MMR6
/* 122 */     MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 134
/* 126 */     MCD::OPC_CheckPredicate, 16, 62, 14, // Skip to: 3776
/* 130 */     MCD::OPC_Decode, 142, 9, 45, // Opcode: INS_MMR6
/* 134 */     MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 152
/* 138 */     MCD::OPC_CheckPredicate, 16, 50, 14, // Skip to: 3776
/* 142 */     MCD::OPC_CheckField, 6, 3, 0, 44, 14, // Skip to: 3776
/* 148 */     MCD::OPC_Decode, 136, 10, 108, // Opcode: LSA_MMR6
/* 152 */     MCD::OPC_FilterValue, 16, 114, 0, // Skip to: 270
/* 156 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 159 */     MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 177
/* 163 */     MCD::OPC_CheckPredicate, 16, 25, 14, // Skip to: 3776
/* 167 */     MCD::OPC_CheckField, 16, 5, 0, 19, 14, // Skip to: 3776
/* 173 */     MCD::OPC_Decode, 134, 4, 14, // Opcode: CLZ_MMR6
/* 177 */     MCD::OPC_FilterValue, 4, 7, 0, // Skip to: 188
/* 181 */     MCD::OPC_CheckPredicate, 16, 7, 14, // Skip to: 3776
/* 185 */     MCD::OPC_Decode, 105, 43, // Opcode: ADD_MMR6
/* 188 */     MCD::OPC_FilterValue, 5, 7, 0, // Skip to: 199
/* 192 */     MCD::OPC_CheckPredicate, 16, 252, 13, // Skip to: 3776
/* 196 */     MCD::OPC_Decode, 81, 43, // Opcode: ADDU_MMR6
/* 199 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 211
/* 203 */     MCD::OPC_CheckPredicate, 16, 241, 13, // Skip to: 3776
/* 207 */     MCD::OPC_Decode, 246, 16, 43, // Opcode: SUB_MMR6
/* 211 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 223
/* 215 */     MCD::OPC_CheckPredicate, 16, 229, 13, // Skip to: 3776
/* 219 */     MCD::OPC_Decode, 228, 16, 43, // Opcode: SUBU_MMR6
/* 223 */     MCD::OPC_FilterValue, 9, 7, 0, // Skip to: 234
/* 227 */     MCD::OPC_CheckPredicate, 16, 217, 13, // Skip to: 3776
/* 231 */     MCD::OPC_Decode, 127, 43, // Opcode: AND_MMR6
/* 234 */     MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 246
/* 238 */     MCD::OPC_CheckPredicate, 16, 206, 13, // Skip to: 3776
/* 242 */     MCD::OPC_Decode, 152, 13, 43, // Opcode: OR_MMR6
/* 246 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 258
/* 250 */     MCD::OPC_CheckPredicate, 16, 194, 13, // Skip to: 3776
/* 254 */     MCD::OPC_Decode, 136, 13, 43, // Opcode: NOR_MMR6
/* 258 */     MCD::OPC_FilterValue, 12, 186, 13, // Skip to: 3776
/* 262 */     MCD::OPC_CheckPredicate, 16, 182, 13, // Skip to: 3776
/* 266 */     MCD::OPC_Decode, 164, 18, 43, // Opcode: XOR_MMR6
/* 270 */     MCD::OPC_FilterValue, 24, 99, 0, // Skip to: 373
/* 274 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 277 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 289
/* 281 */     MCD::OPC_CheckPredicate, 16, 163, 13, // Skip to: 3776
/* 285 */     MCD::OPC_Decode, 224, 12, 43, // Opcode: MUL_MMR6
/* 289 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 301
/* 293 */     MCD::OPC_CheckPredicate, 16, 151, 13, // Skip to: 3776
/* 297 */     MCD::OPC_Decode, 185, 12, 43, // Opcode: MUH_MMR6
/* 301 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 313
/* 305 */     MCD::OPC_CheckPredicate, 16, 139, 13, // Skip to: 3776
/* 309 */     MCD::OPC_Decode, 218, 12, 43, // Opcode: MULU_MMR6
/* 313 */     MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 325
/* 317 */     MCD::OPC_CheckPredicate, 16, 127, 13, // Skip to: 3776
/* 321 */     MCD::OPC_Decode, 184, 12, 43, // Opcode: MUHU_MMR6
/* 325 */     MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 337
/* 329 */     MCD::OPC_CheckPredicate, 16, 115, 13, // Skip to: 3776
/* 333 */     MCD::OPC_Decode, 238, 5, 43, // Opcode: DIV_MMR6
/* 337 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 349
/* 341 */     MCD::OPC_CheckPredicate, 16, 103, 13, // Skip to: 3776
/* 345 */     MCD::OPC_Decode, 200, 11, 43, // Opcode: MOD_MMR6
/* 349 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 361
/* 353 */     MCD::OPC_CheckPredicate, 16, 91, 13, // Skip to: 3776
/* 357 */     MCD::OPC_Decode, 237, 5, 43, // Opcode: DIVU_MMR6
/* 361 */     MCD::OPC_FilterValue, 7, 83, 13, // Skip to: 3776
/* 365 */     MCD::OPC_CheckPredicate, 16, 79, 13, // Skip to: 3776
/* 369 */     MCD::OPC_Decode, 199, 11, 43, // Opcode: MODU_MMR6
/* 373 */     MCD::OPC_FilterValue, 31, 13, 0, // Skip to: 390
/* 377 */     MCD::OPC_CheckPredicate, 16, 67, 13, // Skip to: 3776
/* 381 */     MCD::OPC_CheckField, 6, 3, 0, 61, 13, // Skip to: 3776
/* 387 */     MCD::OPC_Decode, 115, 109, // Opcode: ALIGN_MMR6
/* 390 */     MCD::OPC_FilterValue, 44, 8, 0, // Skip to: 402
/* 394 */     MCD::OPC_CheckPredicate, 16, 50, 13, // Skip to: 3776
/* 398 */     MCD::OPC_Decode, 160, 7, 54, // Opcode: EXT_MMR6
/* 402 */     MCD::OPC_FilterValue, 52, 39, 0, // Skip to: 445
/* 406 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 409 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 427
/* 413 */     MCD::OPC_CheckPredicate, 16, 31, 13, // Skip to: 3776
/* 417 */     MCD::OPC_CheckField, 14, 2, 0, 25, 13, // Skip to: 3776
/* 423 */     MCD::OPC_Decode, 146, 11, 110, // Opcode: MFHC0_MMR6
/* 427 */     MCD::OPC_FilterValue, 11, 17, 13, // Skip to: 3776
/* 431 */     MCD::OPC_CheckPredicate, 16, 13, 13, // Skip to: 3776
/* 435 */     MCD::OPC_CheckField, 14, 2, 0, 7, 13, // Skip to: 3776
/* 441 */     MCD::OPC_Decode, 157, 12, 111, // Opcode: MTHC0_MMR6
/* 445 */     MCD::OPC_FilterValue, 60, 255, 12, // Skip to: 3776
/* 449 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 452 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 470
/* 456 */     MCD::OPC_CheckPredicate, 16, 244, 12, // Skip to: 3776
/* 460 */     MCD::OPC_CheckField, 14, 2, 0, 238, 12, // Skip to: 3776
/* 466 */     MCD::OPC_Decode, 140, 11, 110, // Opcode: MFC0_MMR6
/* 470 */     MCD::OPC_FilterValue, 5, 63, 0, // Skip to: 537
/* 474 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 477 */     MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 495
/* 481 */     MCD::OPC_CheckPredicate, 16, 219, 12, // Skip to: 3776
/* 485 */     MCD::OPC_CheckField, 21, 5, 0, 213, 12, // Skip to: 3776
/* 491 */     MCD::OPC_Decode, 244, 6, 73, // Opcode: DVP_MMR6
/* 495 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 513
/* 499 */     MCD::OPC_CheckPredicate, 16, 201, 12, // Skip to: 3776
/* 503 */     MCD::OPC_CheckField, 21, 5, 0, 195, 12, // Skip to: 3776
/* 509 */     MCD::OPC_Decode, 131, 7, 73, // Opcode: EVP_MMR6
/* 513 */     MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 525
/* 517 */     MCD::OPC_CheckPredicate, 16, 183, 12, // Skip to: 3776
/* 521 */     MCD::OPC_Decode, 161, 14, 63, // Opcode: RDPGPR_MMR6
/* 525 */     MCD::OPC_FilterValue, 30, 175, 12, // Skip to: 3776
/* 529 */     MCD::OPC_CheckPredicate, 16, 171, 12, // Skip to: 3776
/* 533 */     MCD::OPC_Decode, 153, 18, 63, // Opcode: WRPGPR_MMR6
/* 537 */     MCD::OPC_FilterValue, 11, 14, 0, // Skip to: 555
/* 541 */     MCD::OPC_CheckPredicate, 16, 159, 12, // Skip to: 3776
/* 545 */     MCD::OPC_CheckField, 14, 2, 0, 153, 12, // Skip to: 3776
/* 551 */     MCD::OPC_Decode, 151, 12, 111, // Opcode: MTC0_MMR6
/* 555 */     MCD::OPC_FilterValue, 12, 63, 0, // Skip to: 622
/* 559 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 562 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 574
/* 566 */     MCD::OPC_CheckPredicate, 16, 134, 12, // Skip to: 3776
/* 570 */     MCD::OPC_Decode, 186, 2, 77, // Opcode: BITSWAP_MMR6
/* 574 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 586
/* 578 */     MCD::OPC_CheckPredicate, 16, 122, 12, // Skip to: 3776
/* 582 */     MCD::OPC_Decode, 255, 14, 63, // Opcode: SEB_MMR6
/* 586 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 598
/* 590 */     MCD::OPC_CheckPredicate, 16, 110, 12, // Skip to: 3776
/* 594 */     MCD::OPC_Decode, 131, 15, 63, // Opcode: SEH_MMR6
/* 598 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 610
/* 602 */     MCD::OPC_CheckPredicate, 16, 98, 12, // Skip to: 3776
/* 606 */     MCD::OPC_Decode, 242, 3, 63, // Opcode: CLO_MMR6
/* 610 */     MCD::OPC_FilterValue, 15, 90, 12, // Skip to: 3776
/* 614 */     MCD::OPC_CheckPredicate, 16, 86, 12, // Skip to: 3776
/* 618 */     MCD::OPC_Decode, 156, 18, 63, // Opcode: WSBH_MMR6
/* 622 */     MCD::OPC_FilterValue, 13, 130, 0, // Skip to: 756
/* 626 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 629 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 647
/* 633 */     MCD::OPC_CheckPredicate, 16, 67, 12, // Skip to: 3776
/* 637 */     MCD::OPC_CheckField, 16, 10, 0, 61, 12, // Skip to: 3776
/* 643 */     MCD::OPC_Decode, 229, 17, 0, // Opcode: TLBINV_MMR6
/* 647 */     MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 665
/* 651 */     MCD::OPC_CheckPredicate, 16, 49, 12, // Skip to: 3776
/* 655 */     MCD::OPC_CheckField, 16, 10, 0, 43, 12, // Skip to: 3776
/* 661 */     MCD::OPC_Decode, 228, 17, 0, // Opcode: TLBINVF_MMR6
/* 665 */     MCD::OPC_FilterValue, 13, 14, 0, // Skip to: 683
/* 669 */     MCD::OPC_CheckPredicate, 16, 31, 12, // Skip to: 3776
/* 673 */     MCD::OPC_CheckField, 21, 5, 0, 25, 12, // Skip to: 3776
/* 679 */     MCD::OPC_Decode, 163, 17, 78, // Opcode: SYNC_MMR6
/* 683 */     MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 695
/* 687 */     MCD::OPC_CheckPredicate, 16, 13, 12, // Skip to: 3776
/* 691 */     MCD::OPC_Decode, 150, 18, 69, // Opcode: WAIT_MMR6
/* 695 */     MCD::OPC_FilterValue, 27, 8, 0, // Skip to: 707
/* 699 */     MCD::OPC_CheckPredicate, 16, 1, 12, // Skip to: 3776
/* 703 */     MCD::OPC_Decode, 233, 14, 69, // Opcode: SDBBP_MMR6
/* 707 */     MCD::OPC_FilterValue, 28, 14, 0, // Skip to: 725
/* 711 */     MCD::OPC_CheckPredicate, 16, 245, 11, // Skip to: 3776
/* 715 */     MCD::OPC_CheckField, 16, 10, 0, 239, 11, // Skip to: 3776
/* 721 */     MCD::OPC_Decode, 221, 5, 0, // Opcode: DERET_MMR6
/* 725 */     MCD::OPC_FilterValue, 30, 231, 11, // Skip to: 3776
/* 729 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 732 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 744
/* 736 */     MCD::OPC_CheckPredicate, 16, 220, 11, // Skip to: 3776
/* 740 */     MCD::OPC_Decode, 129, 7, 0, // Opcode: ERET_MMR6
/* 744 */     MCD::OPC_FilterValue, 1, 212, 11, // Skip to: 3776
/* 748 */     MCD::OPC_CheckPredicate, 16, 208, 11, // Skip to: 3776
/* 752 */     MCD::OPC_Decode, 255, 6, 0, // Opcode: ERETNC_MMR6
/* 756 */     MCD::OPC_FilterValue, 20, 75, 0, // Skip to: 835
/* 760 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 763 */     MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 775
/* 767 */     MCD::OPC_CheckPredicate, 16, 189, 11, // Skip to: 3776
/* 771 */     MCD::OPC_Decode, 145, 11, 112, // Opcode: MFC2_MMR6
/* 775 */     MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 787
/* 779 */     MCD::OPC_CheckPredicate, 16, 177, 11, // Skip to: 3776
/* 783 */     MCD::OPC_Decode, 156, 12, 113, // Opcode: MTC2_MMR6
/* 787 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 799
/* 791 */     MCD::OPC_CheckPredicate, 17, 165, 11, // Skip to: 3776
/* 795 */     MCD::OPC_Decode, 128, 6, 114, // Opcode: DMFC2_MM64R6
/* 799 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 811
/* 803 */     MCD::OPC_CheckPredicate, 17, 153, 11, // Skip to: 3776
/* 807 */     MCD::OPC_Decode, 139, 6, 115, // Opcode: DMTC2_MM64R6
/* 811 */     MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 823
/* 815 */     MCD::OPC_CheckPredicate, 16, 141, 11, // Skip to: 3776
/* 819 */     MCD::OPC_Decode, 152, 11, 112, // Opcode: MFHC2_MMR6
/* 823 */     MCD::OPC_FilterValue, 19, 133, 11, // Skip to: 3776
/* 827 */     MCD::OPC_CheckPredicate, 16, 129, 11, // Skip to: 3776
/* 831 */     MCD::OPC_Decode, 163, 12, 113, // Opcode: MTHC2_MMR6
/* 835 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 866
/* 839 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 842 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 854
/* 846 */     MCD::OPC_CheckPredicate, 16, 110, 11, // Skip to: 3776
/* 850 */     MCD::OPC_Decode, 151, 9, 63, // Opcode: JALRC_MMR6
/* 854 */     MCD::OPC_FilterValue, 3, 102, 11, // Skip to: 3776
/* 858 */     MCD::OPC_CheckPredicate, 16, 98, 11, // Skip to: 3776
/* 862 */     MCD::OPC_Decode, 150, 9, 63, // Opcode: JALRC_HB_MMR6
/* 866 */     MCD::OPC_FilterValue, 29, 90, 11, // Skip to: 3776
/* 870 */     MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 873 */     MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 891
/* 877 */     MCD::OPC_CheckPredicate, 16, 79, 11, // Skip to: 3776
/* 881 */     MCD::OPC_CheckField, 21, 5, 0, 73, 11, // Skip to: 3776
/* 887 */     MCD::OPC_Decode, 248, 5, 73, // Opcode: DI_MMR6
/* 891 */     MCD::OPC_FilterValue, 10, 65, 11, // Skip to: 3776
/* 895 */     MCD::OPC_CheckPredicate, 16, 61, 11, // Skip to: 3776
/* 899 */     MCD::OPC_CheckField, 21, 5, 0, 55, 11, // Skip to: 3776
/* 905 */     MCD::OPC_Decode, 252, 6, 73, // Opcode: EI_MMR6
/* 909 */     MCD::OPC_FilterValue, 4, 22, 0, // Skip to: 935
/* 913 */     MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 927
/* 917 */     MCD::OPC_CheckField, 16, 5, 0, 4, 0, // Skip to: 927
/* 923 */     MCD::OPC_Decode, 138, 10, 116, // Opcode: LUI_MMR6
/* 927 */     MCD::OPC_CheckPredicate, 16, 29, 11, // Skip to: 3776
/* 931 */     MCD::OPC_Decode, 180, 1, 81, // Opcode: AUI_MMR6
/* 935 */     MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 947
/* 939 */     MCD::OPC_CheckPredicate, 16, 17, 11, // Skip to: 3776
/* 943 */     MCD::OPC_Decode, 195, 9, 117, // Opcode: LBU_MMR6
/* 947 */     MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 959
/* 951 */     MCD::OPC_CheckPredicate, 16, 5, 11, // Skip to: 3776
/* 955 */     MCD::OPC_Decode, 217, 14, 82, // Opcode: SB_MMR6
/* 959 */     MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 971
/* 963 */     MCD::OPC_CheckPredicate, 16, 249, 10, // Skip to: 3776
/* 967 */     MCD::OPC_Decode, 197, 9, 117, // Opcode: LB_MMR6
/* 971 */     MCD::OPC_FilterValue, 8, 111, 0, // Skip to: 1086
/* 975 */     MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 978 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 996
/* 982 */     MCD::OPC_CheckPredicate, 16, 230, 10, // Skip to: 3776
/* 986 */     MCD::OPC_CheckField, 11, 1, 0, 224, 10, // Skip to: 3776
/* 992 */     MCD::OPC_Decode, 151, 10, 118, // Opcode: LWC2_MMR6
/* 996 */     MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 1008
/* 1000 */    MCD::OPC_CheckPredicate, 16, 212, 10, // Skip to: 3776
/* 1004 */    MCD::OPC_Decode, 170, 10, 83, // Opcode: LWP_MMR6
/* 1008 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1026
/* 1012 */    MCD::OPC_CheckPredicate, 16, 200, 10, // Skip to: 3776
/* 1016 */    MCD::OPC_CheckField, 11, 1, 0, 194, 10, // Skip to: 3776
/* 1022 */    MCD::OPC_Decode, 209, 9, 118, // Opcode: LDC2_MMR6
/* 1026 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 1038
/* 1030 */    MCD::OPC_CheckPredicate, 16, 182, 10, // Skip to: 3776
/* 1034 */    MCD::OPC_Decode, 194, 3, 84, // Opcode: CACHE_MMR6
/* 1038 */    MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 1056
/* 1042 */    MCD::OPC_CheckPredicate, 16, 170, 10, // Skip to: 3776
/* 1046 */    MCD::OPC_CheckField, 11, 1, 0, 164, 10, // Skip to: 3776
/* 1052 */    MCD::OPC_Decode, 131, 17, 118, // Opcode: SWC2_MMR6
/* 1056 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1068
/* 1060 */    MCD::OPC_CheckPredicate, 16, 152, 10, // Skip to: 3776
/* 1064 */    MCD::OPC_Decode, 147, 17, 83, // Opcode: SWP_MMR6
/* 1068 */    MCD::OPC_FilterValue, 10, 144, 10, // Skip to: 3776
/* 1072 */    MCD::OPC_CheckPredicate, 16, 140, 10, // Skip to: 3776
/* 1076 */    MCD::OPC_CheckField, 11, 1, 0, 134, 10, // Skip to: 3776
/* 1082 */    MCD::OPC_Decode, 240, 14, 118, // Opcode: SDC2_MMR6
/* 1086 */    MCD::OPC_FilterValue, 12, 7, 0, // Skip to: 1097
/* 1090 */    MCD::OPC_CheckPredicate, 16, 122, 10, // Skip to: 3776
/* 1094 */    MCD::OPC_Decode, 46, 81, // Opcode: ADDIU_MMR6
/* 1097 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 1109
/* 1101 */    MCD::OPC_CheckPredicate, 16, 111, 10, // Skip to: 3776
/* 1105 */    MCD::OPC_Decode, 211, 15, 82, // Opcode: SH_MMR6
/* 1109 */    MCD::OPC_FilterValue, 16, 87, 0, // Skip to: 1200
/* 1113 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1116 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1128
/* 1120 */    MCD::OPC_CheckPredicate, 18, 92, 10, // Skip to: 3776
/* 1124 */    MCD::OPC_Decode, 222, 1, 119, // Opcode: BC1EQZC_MMR6
/* 1128 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1140
/* 1132 */    MCD::OPC_CheckPredicate, 18, 80, 10, // Skip to: 3776
/* 1136 */    MCD::OPC_Decode, 227, 1, 119, // Opcode: BC1NEZC_MMR6
/* 1140 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 1152
/* 1144 */    MCD::OPC_CheckPredicate, 16, 68, 10, // Skip to: 3776
/* 1148 */    MCD::OPC_Decode, 232, 1, 120, // Opcode: BC2EQZC_MMR6
/* 1152 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1164
/* 1156 */    MCD::OPC_CheckPredicate, 16, 56, 10, // Skip to: 3776
/* 1160 */    MCD::OPC_Decode, 234, 1, 120, // Opcode: BC2NEZC_MMR6
/* 1164 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 1176
/* 1168 */    MCD::OPC_CheckPredicate, 16, 44, 10, // Skip to: 3776
/* 1172 */    MCD::OPC_Decode, 161, 17, 121, // Opcode: SYNCI_MMR6
/* 1176 */    MCD::OPC_FilterValue, 16, 8, 0, // Skip to: 1188
/* 1180 */    MCD::OPC_CheckPredicate, 17, 32, 10, // Skip to: 3776
/* 1184 */    MCD::OPC_Decode, 205, 5, 122, // Opcode: DATI_MM64R6
/* 1188 */    MCD::OPC_FilterValue, 17, 24, 10, // Skip to: 3776
/* 1192 */    MCD::OPC_CheckPredicate, 17, 20, 10, // Skip to: 3776
/* 1196 */    MCD::OPC_Decode, 201, 5, 122, // Opcode: DAHI_MM64R6
/* 1200 */    MCD::OPC_FilterValue, 20, 8, 0, // Skip to: 1212
/* 1204 */    MCD::OPC_CheckPredicate, 16, 8, 10, // Skip to: 3776
/* 1208 */    MCD::OPC_Decode, 150, 13, 90, // Opcode: ORI_MMR6
/* 1212 */    MCD::OPC_FilterValue, 21, 181, 5, // Skip to: 2677
/* 1216 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1219 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 1231
/* 1223 */    MCD::OPC_CheckPredicate, 18, 245, 9, // Skip to: 3776
/* 1227 */    MCD::OPC_Decode, 187, 11, 123, // Opcode: MIN_S_MMR6
/* 1231 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 1243
/* 1235 */    MCD::OPC_CheckPredicate, 18, 233, 9, // Skip to: 3776
/* 1239 */    MCD::OPC_Decode, 155, 4, 124, // Opcode: CMP_AF_S_MMR6
/* 1243 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 1255
/* 1247 */    MCD::OPC_CheckPredicate, 18, 221, 9, // Skip to: 3776
/* 1251 */    MCD::OPC_Decode, 133, 11, 123, // Opcode: MAX_S_MMR6
/* 1255 */    MCD::OPC_FilterValue, 21, 8, 0, // Skip to: 1267
/* 1259 */    MCD::OPC_CheckPredicate, 18, 209, 9, // Skip to: 3776
/* 1263 */    MCD::OPC_Decode, 154, 4, 125, // Opcode: CMP_AF_D_MMR6
/* 1267 */    MCD::OPC_FilterValue, 32, 14, 0, // Skip to: 1285
/* 1271 */    MCD::OPC_CheckPredicate, 16, 197, 9, // Skip to: 3776
/* 1275 */    MCD::OPC_CheckField, 11, 5, 0, 191, 9, // Skip to: 3776
/* 1281 */    MCD::OPC_Decode, 175, 14, 126, // Opcode: RINT_S_MMR6
/* 1285 */    MCD::OPC_FilterValue, 35, 8, 0, // Skip to: 1297
/* 1289 */    MCD::OPC_CheckPredicate, 18, 179, 9, // Skip to: 3776
/* 1293 */    MCD::OPC_Decode, 168, 11, 123, // Opcode: MINA_S_MMR6
/* 1297 */    MCD::OPC_FilterValue, 43, 8, 0, // Skip to: 1309
/* 1301 */    MCD::OPC_CheckPredicate, 18, 167, 9, // Skip to: 3776
/* 1305 */    MCD::OPC_Decode, 242, 10, 123, // Opcode: MAXA_S_MMR6
/* 1309 */    MCD::OPC_FilterValue, 48, 8, 0, // Skip to: 1321
/* 1313 */    MCD::OPC_CheckPredicate, 18, 155, 9, // Skip to: 3776
/* 1317 */    MCD::OPC_Decode, 177, 7, 127, // Opcode: FADD_S_MMR6
/* 1321 */    MCD::OPC_FilterValue, 56, 8, 0, // Skip to: 1333
/* 1325 */    MCD::OPC_CheckPredicate, 16, 143, 9, // Skip to: 3776
/* 1329 */    MCD::OPC_Decode, 138, 15, 123, // Opcode: SELEQZ_S_MMR6
/* 1333 */    MCD::OPC_FilterValue, 59, 55, 0, // Skip to: 1392
/* 1337 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1340 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1353
/* 1344 */    MCD::OPC_CheckPredicate, 18, 124, 9, // Skip to: 3776
/* 1348 */    MCD::OPC_Decode, 143, 11, 128, 1, // Opcode: MFC1_MMR6
/* 1353 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1366
/* 1357 */    MCD::OPC_CheckPredicate, 18, 111, 9, // Skip to: 3776
/* 1361 */    MCD::OPC_Decode, 154, 12, 129, 1, // Opcode: MTC1_MMR6
/* 1366 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1379
/* 1370 */    MCD::OPC_CheckPredicate, 19, 98, 9, // Skip to: 3776
/* 1374 */    MCD::OPC_Decode, 148, 11, 130, 1, // Opcode: MFHC1_D32_MMR6
/* 1379 */    MCD::OPC_FilterValue, 7, 89, 9, // Skip to: 3776
/* 1383 */    MCD::OPC_CheckPredicate, 19, 85, 9, // Skip to: 3776
/* 1387 */    MCD::OPC_Decode, 159, 12, 131, 1, // Opcode: MTHC1_D32_MMR6
/* 1392 */    MCD::OPC_FilterValue, 69, 8, 0, // Skip to: 1404
/* 1396 */    MCD::OPC_CheckPredicate, 18, 72, 9, // Skip to: 3776
/* 1400 */    MCD::OPC_Decode, 223, 4, 124, // Opcode: CMP_UN_S_MMR6
/* 1404 */    MCD::OPC_FilterValue, 85, 8, 0, // Skip to: 1416
/* 1408 */    MCD::OPC_CheckPredicate, 18, 60, 9, // Skip to: 3776
/* 1412 */    MCD::OPC_Decode, 221, 4, 125, // Opcode: CMP_UN_D_MMR6
/* 1416 */    MCD::OPC_FilterValue, 96, 14, 0, // Skip to: 1434
/* 1420 */    MCD::OPC_CheckPredicate, 16, 48, 9, // Skip to: 3776
/* 1424 */    MCD::OPC_CheckField, 11, 5, 0, 42, 9, // Skip to: 3776
/* 1430 */    MCD::OPC_Decode, 223, 3, 126, // Opcode: CLASS_S_MMR6
/* 1434 */    MCD::OPC_FilterValue, 112, 8, 0, // Skip to: 1446
/* 1438 */    MCD::OPC_CheckPredicate, 18, 30, 9, // Skip to: 3776
/* 1442 */    MCD::OPC_Decode, 193, 8, 127, // Opcode: FSUB_S_MMR6
/* 1446 */    MCD::OPC_FilterValue, 120, 8, 0, // Skip to: 1458
/* 1450 */    MCD::OPC_CheckPredicate, 16, 18, 9, // Skip to: 3776
/* 1454 */    MCD::OPC_Decode, 145, 15, 123, // Opcode: SELNEZ_S_MMR6
/* 1458 */    MCD::OPC_FilterValue, 123, 29, 0, // Skip to: 1491
/* 1462 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1465 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1478
/* 1469 */    MCD::OPC_CheckPredicate, 18, 255, 8, // Skip to: 3776
/* 1473 */    MCD::OPC_Decode, 142, 8, 132, 1, // Opcode: FMOV_S_MMR6
/* 1478 */    MCD::OPC_FilterValue, 4, 246, 8, // Skip to: 3776
/* 1482 */    MCD::OPC_CheckPredicate, 18, 242, 8, // Skip to: 3776
/* 1486 */    MCD::OPC_Decode, 139, 8, 133, 1, // Opcode: FMOV_D_MMR6
/* 1491 */    MCD::OPC_FilterValue, 133, 1, 8, 0, // Skip to: 1504
/* 1496 */    MCD::OPC_CheckPredicate, 18, 228, 8, // Skip to: 3776
/* 1500 */    MCD::OPC_Decode, 161, 4, 124, // Opcode: CMP_EQ_S_MMR6
/* 1504 */    MCD::OPC_FilterValue, 149, 1, 8, 0, // Skip to: 1517
/* 1509 */    MCD::OPC_CheckPredicate, 18, 215, 8, // Skip to: 3776
/* 1513 */    MCD::OPC_Decode, 157, 4, 125, // Opcode: CMP_EQ_D_MMR6
/* 1517 */    MCD::OPC_FilterValue, 176, 1, 8, 0, // Skip to: 1530
/* 1522 */    MCD::OPC_CheckPredicate, 18, 202, 8, // Skip to: 3776
/* 1526 */    MCD::OPC_Decode, 152, 8, 127, // Opcode: FMUL_S_MMR6
/* 1530 */    MCD::OPC_FilterValue, 184, 1, 9, 0, // Skip to: 1544
/* 1535 */    MCD::OPC_CheckPredicate, 16, 189, 8, // Skip to: 3776
/* 1539 */    MCD::OPC_Decode, 149, 15, 134, 1, // Opcode: SEL_S_MMR6
/* 1544 */    MCD::OPC_FilterValue, 197, 1, 8, 0, // Skip to: 1557
/* 1549 */    MCD::OPC_CheckPredicate, 18, 175, 8, // Skip to: 3776
/* 1553 */    MCD::OPC_Decode, 211, 4, 124, // Opcode: CMP_UEQ_S_MMR6
/* 1557 */    MCD::OPC_FilterValue, 213, 1, 8, 0, // Skip to: 1570
/* 1562 */    MCD::OPC_CheckPredicate, 18, 162, 8, // Skip to: 3776
/* 1566 */    MCD::OPC_Decode, 209, 4, 125, // Opcode: CMP_UEQ_D_MMR6
/* 1570 */    MCD::OPC_FilterValue, 240, 1, 8, 0, // Skip to: 1583
/* 1575 */    MCD::OPC_CheckPredicate, 18, 149, 8, // Skip to: 3776
/* 1579 */    MCD::OPC_Decode, 215, 7, 127, // Opcode: FDIV_S_MMR6
/* 1583 */    MCD::OPC_FilterValue, 133, 2, 8, 0, // Skip to: 1596
/* 1588 */    MCD::OPC_CheckPredicate, 18, 136, 8, // Skip to: 3776
/* 1592 */    MCD::OPC_Decode, 175, 4, 124, // Opcode: CMP_LT_S_MMR6
/* 1596 */    MCD::OPC_FilterValue, 149, 2, 8, 0, // Skip to: 1609
/* 1601 */    MCD::OPC_CheckPredicate, 18, 123, 8, // Skip to: 3776
/* 1605 */    MCD::OPC_Decode, 171, 4, 125, // Opcode: CMP_LT_D_MMR6
/* 1609 */    MCD::OPC_FilterValue, 176, 2, 9, 0, // Skip to: 1623
/* 1614 */    MCD::OPC_CheckPredicate, 18, 110, 8, // Skip to: 3776
/* 1618 */    MCD::OPC_Decode, 173, 7, 135, 1, // Opcode: FADD_D_MMR6
/* 1623 */    MCD::OPC_FilterValue, 187, 2, 55, 0, // Skip to: 1683
/* 1628 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1631 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1644
/* 1635 */    MCD::OPC_CheckPredicate, 18, 89, 8, // Skip to: 3776
/* 1639 */    MCD::OPC_Decode, 252, 4, 136, 1, // Opcode: CVT_L_S_MMR6
/* 1644 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1657
/* 1648 */    MCD::OPC_CheckPredicate, 18, 76, 8, // Skip to: 3776
/* 1652 */    MCD::OPC_Decode, 140, 5, 132, 1, // Opcode: CVT_W_S_MMR6
/* 1657 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1670
/* 1661 */    MCD::OPC_CheckPredicate, 18, 63, 8, // Skip to: 3776
/* 1665 */    MCD::OPC_Decode, 249, 4, 137, 1, // Opcode: CVT_L_D_MMR6
/* 1670 */    MCD::OPC_FilterValue, 9, 54, 8, // Skip to: 3776
/* 1674 */    MCD::OPC_CheckPredicate, 18, 50, 8, // Skip to: 3776
/* 1678 */    MCD::OPC_Decode, 136, 5, 138, 1, // Opcode: CVT_W_D_MMR6
/* 1683 */    MCD::OPC_FilterValue, 197, 2, 8, 0, // Skip to: 1696
/* 1688 */    MCD::OPC_CheckPredicate, 18, 36, 8, // Skip to: 3776
/* 1692 */    MCD::OPC_Decode, 219, 4, 124, // Opcode: CMP_ULT_S_MMR6
/* 1696 */    MCD::OPC_FilterValue, 213, 2, 8, 0, // Skip to: 1709
/* 1701 */    MCD::OPC_CheckPredicate, 18, 23, 8, // Skip to: 3776
/* 1705 */    MCD::OPC_Decode, 217, 4, 125, // Opcode: CMP_ULT_D_MMR6
/* 1709 */    MCD::OPC_FilterValue, 240, 2, 9, 0, // Skip to: 1723
/* 1714 */    MCD::OPC_CheckPredicate, 18, 10, 8, // Skip to: 3776
/* 1718 */    MCD::OPC_Decode, 189, 8, 135, 1, // Opcode: FSUB_D_MMR6
/* 1723 */    MCD::OPC_FilterValue, 133, 3, 8, 0, // Skip to: 1736
/* 1728 */    MCD::OPC_CheckPredicate, 18, 252, 7, // Skip to: 3776
/* 1732 */    MCD::OPC_Decode, 169, 4, 124, // Opcode: CMP_LE_S_MMR6
/* 1736 */    MCD::OPC_FilterValue, 149, 3, 8, 0, // Skip to: 1749
/* 1741 */    MCD::OPC_CheckPredicate, 18, 239, 7, // Skip to: 3776
/* 1745 */    MCD::OPC_Decode, 165, 4, 125, // Opcode: CMP_LE_D_MMR6
/* 1749 */    MCD::OPC_FilterValue, 176, 3, 9, 0, // Skip to: 1763
/* 1754 */    MCD::OPC_CheckPredicate, 18, 226, 7, // Skip to: 3776
/* 1758 */    MCD::OPC_Decode, 148, 8, 135, 1, // Opcode: FMUL_D_MMR6
/* 1763 */    MCD::OPC_FilterValue, 184, 3, 9, 0, // Skip to: 1777
/* 1768 */    MCD::OPC_CheckPredicate, 18, 212, 7, // Skip to: 3776
/* 1772 */    MCD::OPC_Decode, 210, 10, 139, 1, // Opcode: MADDF_S_MMR6
/* 1777 */    MCD::OPC_FilterValue, 197, 3, 8, 0, // Skip to: 1790
/* 1782 */    MCD::OPC_CheckPredicate, 18, 198, 7, // Skip to: 3776
/* 1786 */    MCD::OPC_Decode, 215, 4, 124, // Opcode: CMP_ULE_S_MMR6
/* 1790 */    MCD::OPC_FilterValue, 213, 3, 8, 0, // Skip to: 1803
/* 1795 */    MCD::OPC_CheckPredicate, 18, 185, 7, // Skip to: 3776
/* 1799 */    MCD::OPC_Decode, 213, 4, 125, // Opcode: CMP_ULE_D_MMR6
/* 1803 */    MCD::OPC_FilterValue, 240, 3, 9, 0, // Skip to: 1817
/* 1808 */    MCD::OPC_CheckPredicate, 18, 172, 7, // Skip to: 3776
/* 1812 */    MCD::OPC_Decode, 211, 7, 135, 1, // Opcode: FDIV_D_MMR6
/* 1817 */    MCD::OPC_FilterValue, 248, 3, 9, 0, // Skip to: 1831
/* 1822 */    MCD::OPC_CheckPredicate, 18, 158, 7, // Skip to: 3776
/* 1826 */    MCD::OPC_Decode, 129, 12, 139, 1, // Opcode: MSUBF_S_MMR6
/* 1831 */    MCD::OPC_FilterValue, 131, 4, 9, 0, // Skip to: 1845
/* 1836 */    MCD::OPC_CheckPredicate, 18, 144, 7, // Skip to: 3776
/* 1840 */    MCD::OPC_Decode, 182, 11, 140, 1, // Opcode: MIN_D_MMR6
/* 1845 */    MCD::OPC_FilterValue, 133, 4, 8, 0, // Skip to: 1858
/* 1850 */    MCD::OPC_CheckPredicate, 18, 130, 7, // Skip to: 3776
/* 1854 */    MCD::OPC_Decode, 179, 4, 124, // Opcode: CMP_SAF_S_MMR6
/* 1858 */    MCD::OPC_FilterValue, 139, 4, 9, 0, // Skip to: 1872
/* 1863 */    MCD::OPC_CheckPredicate, 18, 117, 7, // Skip to: 3776
/* 1867 */    MCD::OPC_Decode, 128, 11, 140, 1, // Opcode: MAX_D_MMR6
/* 1872 */    MCD::OPC_FilterValue, 149, 4, 8, 0, // Skip to: 1885
/* 1877 */    MCD::OPC_CheckPredicate, 18, 103, 7, // Skip to: 3776
/* 1881 */    MCD::OPC_Decode, 177, 4, 125, // Opcode: CMP_SAF_D_MMR6
/* 1885 */    MCD::OPC_FilterValue, 160, 4, 15, 0, // Skip to: 1905
/* 1890 */    MCD::OPC_CheckPredicate, 16, 90, 7, // Skip to: 3776
/* 1894 */    MCD::OPC_CheckField, 11, 5, 0, 84, 7, // Skip to: 3776
/* 1900 */    MCD::OPC_Decode, 173, 14, 141, 1, // Opcode: RINT_D_MMR6
/* 1905 */    MCD::OPC_FilterValue, 163, 4, 9, 0, // Skip to: 1919
/* 1910 */    MCD::OPC_CheckPredicate, 18, 70, 7, // Skip to: 3776
/* 1914 */    MCD::OPC_Decode, 166, 11, 140, 1, // Opcode: MINA_D_MMR6
/* 1919 */    MCD::OPC_FilterValue, 171, 4, 9, 0, // Skip to: 1933
/* 1924 */    MCD::OPC_CheckPredicate, 18, 56, 7, // Skip to: 3776
/* 1928 */    MCD::OPC_Decode, 240, 10, 140, 1, // Opcode: MAXA_D_MMR6
/* 1933 */    MCD::OPC_FilterValue, 184, 4, 9, 0, // Skip to: 1947
/* 1938 */    MCD::OPC_CheckPredicate, 16, 42, 7, // Skip to: 3776
/* 1942 */    MCD::OPC_Decode, 135, 15, 140, 1, // Opcode: SELEQZ_D_MMR6
/* 1947 */    MCD::OPC_FilterValue, 187, 4, 81, 0, // Skip to: 2033
/* 1952 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1955 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1968
/* 1959 */    MCD::OPC_CheckPredicate, 18, 21, 7, // Skip to: 3776
/* 1963 */    MCD::OPC_Decode, 196, 14, 132, 1, // Opcode: RSQRT_S_MMR6
/* 1968 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1981
/* 1972 */    MCD::OPC_CheckPredicate, 18, 8, 7, // Skip to: 3776
/* 1976 */    MCD::OPC_Decode, 137, 16, 132, 1, // Opcode: SQRT_S_MMR6
/* 1981 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1994
/* 1985 */    MCD::OPC_CheckPredicate, 18, 251, 6, // Skip to: 3776
/* 1989 */    MCD::OPC_Decode, 163, 14, 132, 1, // Opcode: RECIP_S_MMR6
/* 1994 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2007
/* 1998 */    MCD::OPC_CheckPredicate, 18, 238, 6, // Skip to: 3776
/* 2002 */    MCD::OPC_Decode, 195, 14, 138, 1, // Opcode: RSQRT_D_MMR6
/* 2007 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2020
/* 2011 */    MCD::OPC_CheckPredicate, 18, 225, 6, // Skip to: 3776
/* 2015 */    MCD::OPC_Decode, 136, 16, 133, 1, // Opcode: SQRT_D_MMR6
/* 2020 */    MCD::OPC_FilterValue, 10, 216, 6, // Skip to: 3776
/* 2024 */    MCD::OPC_CheckPredicate, 18, 212, 6, // Skip to: 3776
/* 2028 */    MCD::OPC_Decode, 162, 14, 132, 1, // Opcode: RECIP_D_MMR6
/* 2033 */    MCD::OPC_FilterValue, 197, 4, 8, 0, // Skip to: 2046
/* 2038 */    MCD::OPC_CheckPredicate, 18, 198, 6, // Skip to: 3776
/* 2042 */    MCD::OPC_Decode, 207, 4, 124, // Opcode: CMP_SUN_S_MMR6
/* 2046 */    MCD::OPC_FilterValue, 213, 4, 8, 0, // Skip to: 2059
/* 2051 */    MCD::OPC_CheckPredicate, 18, 185, 6, // Skip to: 3776
/* 2055 */    MCD::OPC_Decode, 205, 4, 125, // Opcode: CMP_SUN_D_MMR6
/* 2059 */    MCD::OPC_FilterValue, 224, 4, 15, 0, // Skip to: 2079
/* 2064 */    MCD::OPC_CheckPredicate, 16, 172, 6, // Skip to: 3776
/* 2068 */    MCD::OPC_CheckField, 11, 5, 0, 166, 6, // Skip to: 3776
/* 2074 */    MCD::OPC_Decode, 221, 3, 141, 1, // Opcode: CLASS_D_MMR6
/* 2079 */    MCD::OPC_FilterValue, 248, 4, 9, 0, // Skip to: 2093
/* 2084 */    MCD::OPC_CheckPredicate, 16, 152, 6, // Skip to: 3776
/* 2088 */    MCD::OPC_Decode, 142, 15, 140, 1, // Opcode: SELNEZ_D_MMR6
/* 2093 */    MCD::OPC_FilterValue, 133, 5, 8, 0, // Skip to: 2106
/* 2098 */    MCD::OPC_CheckPredicate, 18, 138, 6, // Skip to: 3776
/* 2102 */    MCD::OPC_Decode, 183, 4, 124, // Opcode: CMP_SEQ_S_MMR6
/* 2106 */    MCD::OPC_FilterValue, 149, 5, 8, 0, // Skip to: 2119
/* 2111 */    MCD::OPC_CheckPredicate, 18, 125, 6, // Skip to: 3776
/* 2115 */    MCD::OPC_Decode, 181, 4, 125, // Opcode: CMP_SEQ_D_MMR6
/* 2119 */    MCD::OPC_FilterValue, 184, 5, 9, 0, // Skip to: 2133
/* 2124 */    MCD::OPC_CheckPredicate, 16, 112, 6, // Skip to: 3776
/* 2128 */    MCD::OPC_Decode, 147, 15, 142, 1, // Opcode: SEL_D_MMR6
/* 2133 */    MCD::OPC_FilterValue, 197, 5, 8, 0, // Skip to: 2146
/* 2138 */    MCD::OPC_CheckPredicate, 18, 98, 6, // Skip to: 3776
/* 2142 */    MCD::OPC_Decode, 195, 4, 124, // Opcode: CMP_SUEQ_S_MMR6
/* 2146 */    MCD::OPC_FilterValue, 213, 5, 8, 0, // Skip to: 2159
/* 2151 */    MCD::OPC_CheckPredicate, 18, 85, 6, // Skip to: 3776
/* 2155 */    MCD::OPC_Decode, 193, 4, 125, // Opcode: CMP_SUEQ_D_MMR6
/* 2159 */    MCD::OPC_FilterValue, 133, 6, 8, 0, // Skip to: 2172
/* 2164 */    MCD::OPC_CheckPredicate, 18, 72, 6, // Skip to: 3776
/* 2168 */    MCD::OPC_Decode, 191, 4, 124, // Opcode: CMP_SLT_S_MMR6
/* 2172 */    MCD::OPC_FilterValue, 149, 6, 8, 0, // Skip to: 2185
/* 2177 */    MCD::OPC_CheckPredicate, 18, 59, 6, // Skip to: 3776
/* 2181 */    MCD::OPC_Decode, 189, 4, 125, // Opcode: CMP_SLT_D_MMR6
/* 2185 */    MCD::OPC_FilterValue, 187, 6, 211, 0, // Skip to: 2401
/* 2190 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2193 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2206
/* 2197 */    MCD::OPC_CheckPredicate, 18, 39, 6, // Skip to: 3776
/* 2201 */    MCD::OPC_Decode, 246, 7, 136, 1, // Opcode: FLOOR_L_S_MMR6
/* 2206 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2219
/* 2210 */    MCD::OPC_CheckPredicate, 18, 26, 6, // Skip to: 3776
/* 2214 */    MCD::OPC_Decode, 253, 7, 132, 1, // Opcode: FLOOR_W_S_MMR6
/* 2219 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2232
/* 2223 */    MCD::OPC_CheckPredicate, 18, 13, 6, // Skip to: 3776
/* 2227 */    MCD::OPC_Decode, 199, 3, 136, 1, // Opcode: CEIL_L_S_MMR6
/* 2232 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2245
/* 2236 */    MCD::OPC_CheckPredicate, 18, 0, 6, // Skip to: 3776
/* 2240 */    MCD::OPC_Decode, 206, 3, 132, 1, // Opcode: CEIL_W_S_MMR6
/* 2245 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2258
/* 2249 */    MCD::OPC_CheckPredicate, 18, 243, 5, // Skip to: 3776
/* 2253 */    MCD::OPC_Decode, 253, 17, 136, 1, // Opcode: TRUNC_L_S_MMR6
/* 2258 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2271
/* 2262 */    MCD::OPC_CheckPredicate, 18, 230, 5, // Skip to: 3776
/* 2266 */    MCD::OPC_Decode, 132, 18, 132, 1, // Opcode: TRUNC_W_S_MMR6
/* 2271 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2284
/* 2275 */    MCD::OPC_CheckPredicate, 18, 217, 5, // Skip to: 3776
/* 2279 */    MCD::OPC_Decode, 187, 14, 136, 1, // Opcode: ROUND_L_S_MMR6
/* 2284 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2297
/* 2288 */    MCD::OPC_CheckPredicate, 18, 204, 5, // Skip to: 3776
/* 2292 */    MCD::OPC_Decode, 194, 14, 132, 1, // Opcode: ROUND_W_S_MMR6
/* 2297 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 2310
/* 2301 */    MCD::OPC_CheckPredicate, 18, 191, 5, // Skip to: 3776
/* 2305 */    MCD::OPC_Decode, 244, 7, 137, 1, // Opcode: FLOOR_L_D_MMR6
/* 2310 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 2323
/* 2314 */    MCD::OPC_CheckPredicate, 18, 178, 5, // Skip to: 3776
/* 2318 */    MCD::OPC_Decode, 249, 7, 138, 1, // Opcode: FLOOR_W_D_MMR6
/* 2323 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2336
/* 2327 */    MCD::OPC_CheckPredicate, 18, 165, 5, // Skip to: 3776
/* 2331 */    MCD::OPC_Decode, 197, 3, 137, 1, // Opcode: CEIL_L_D_MMR6
/* 2336 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 2349
/* 2340 */    MCD::OPC_CheckPredicate, 18, 152, 5, // Skip to: 3776
/* 2344 */    MCD::OPC_Decode, 202, 3, 138, 1, // Opcode: CEIL_W_D_MMR6
/* 2349 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2362
/* 2353 */    MCD::OPC_CheckPredicate, 18, 139, 5, // Skip to: 3776
/* 2357 */    MCD::OPC_Decode, 251, 17, 137, 1, // Opcode: TRUNC_L_D_MMR6
/* 2362 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 2375
/* 2366 */    MCD::OPC_CheckPredicate, 18, 126, 5, // Skip to: 3776
/* 2370 */    MCD::OPC_Decode, 128, 18, 138, 1, // Opcode: TRUNC_W_D_MMR6
/* 2375 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 2388
/* 2379 */    MCD::OPC_CheckPredicate, 18, 113, 5, // Skip to: 3776
/* 2383 */    MCD::OPC_Decode, 185, 14, 137, 1, // Opcode: ROUND_L_D_MMR6
/* 2388 */    MCD::OPC_FilterValue, 15, 104, 5, // Skip to: 3776
/* 2392 */    MCD::OPC_CheckPredicate, 18, 100, 5, // Skip to: 3776
/* 2396 */    MCD::OPC_Decode, 190, 14, 137, 1, // Opcode: ROUND_W_D_MMR6
/* 2401 */    MCD::OPC_FilterValue, 197, 6, 8, 0, // Skip to: 2414
/* 2406 */    MCD::OPC_CheckPredicate, 18, 86, 5, // Skip to: 3776
/* 2410 */    MCD::OPC_Decode, 203, 4, 124, // Opcode: CMP_SULT_S_MMR6
/* 2414 */    MCD::OPC_FilterValue, 213, 6, 8, 0, // Skip to: 2427
/* 2419 */    MCD::OPC_CheckPredicate, 18, 73, 5, // Skip to: 3776
/* 2423 */    MCD::OPC_Decode, 201, 4, 125, // Opcode: CMP_SULT_D_MMR6
/* 2427 */    MCD::OPC_FilterValue, 251, 6, 131, 0, // Skip to: 2563
/* 2432 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2435 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 2447
/* 2439 */    MCD::OPC_CheckPredicate, 18, 53, 5, // Skip to: 3776
/* 2443 */    MCD::OPC_Decode, 37, 132, 1, // Opcode: ABS_S_MMR6
/* 2447 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2460
/* 2451 */    MCD::OPC_CheckPredicate, 18, 41, 5, // Skip to: 3776
/* 2455 */    MCD::OPC_Decode, 160, 8, 132, 1, // Opcode: FNEG_S_MMR6
/* 2460 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2473
/* 2464 */    MCD::OPC_CheckPredicate, 18, 28, 5, // Skip to: 3776
/* 2468 */    MCD::OPC_Decode, 245, 4, 138, 1, // Opcode: CVT_D_S_MMR6
/* 2473 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2486
/* 2477 */    MCD::OPC_CheckPredicate, 18, 15, 5, // Skip to: 3776
/* 2481 */    MCD::OPC_Decode, 128, 5, 143, 1, // Opcode: CVT_S_D_MMR6
/* 2486 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 2498
/* 2490 */    MCD::OPC_CheckPredicate, 18, 2, 5, // Skip to: 3776
/* 2494 */    MCD::OPC_Decode, 36, 133, 1, // Opcode: ABS_D_MMR6
/* 2498 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2511
/* 2502 */    MCD::OPC_CheckPredicate, 18, 246, 4, // Skip to: 3776
/* 2506 */    MCD::OPC_Decode, 156, 8, 133, 1, // Opcode: FNEG_D_MMR6
/* 2511 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2524
/* 2515 */    MCD::OPC_CheckPredicate, 18, 233, 4, // Skip to: 3776
/* 2519 */    MCD::OPC_Decode, 246, 4, 138, 1, // Opcode: CVT_D_W_MMR6
/* 2524 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 2537
/* 2528 */    MCD::OPC_CheckPredicate, 18, 220, 4, // Skip to: 3776
/* 2532 */    MCD::OPC_Decode, 133, 5, 132, 1, // Opcode: CVT_S_W_MMR6
/* 2537 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 2550
/* 2541 */    MCD::OPC_CheckPredicate, 14, 207, 4, // Skip to: 3776
/* 2545 */    MCD::OPC_Decode, 243, 4, 137, 1, // Opcode: CVT_D_L_MMR6
/* 2550 */    MCD::OPC_FilterValue, 11, 198, 4, // Skip to: 3776
/* 2554 */    MCD::OPC_CheckPredicate, 14, 194, 4, // Skip to: 3776
/* 2558 */    MCD::OPC_Decode, 130, 5, 136, 1, // Opcode: CVT_S_L_MMR6
/* 2563 */    MCD::OPC_FilterValue, 133, 7, 8, 0, // Skip to: 2576
/* 2568 */    MCD::OPC_CheckPredicate, 18, 180, 4, // Skip to: 3776
/* 2572 */    MCD::OPC_Decode, 187, 4, 124, // Opcode: CMP_SLE_S_MMR6
/* 2576 */    MCD::OPC_FilterValue, 149, 7, 8, 0, // Skip to: 2589
/* 2581 */    MCD::OPC_CheckPredicate, 18, 167, 4, // Skip to: 3776
/* 2585 */    MCD::OPC_Decode, 185, 4, 125, // Opcode: CMP_SLE_D_MMR6
/* 2589 */    MCD::OPC_FilterValue, 184, 7, 9, 0, // Skip to: 2603
/* 2594 */    MCD::OPC_CheckPredicate, 18, 154, 4, // Skip to: 3776
/* 2598 */    MCD::OPC_Decode, 208, 10, 144, 1, // Opcode: MADDF_D_MMR6
/* 2603 */    MCD::OPC_FilterValue, 197, 7, 8, 0, // Skip to: 2616
/* 2608 */    MCD::OPC_CheckPredicate, 18, 140, 4, // Skip to: 3776
/* 2612 */    MCD::OPC_Decode, 199, 4, 124, // Opcode: CMP_SULE_S_MMR6
/* 2616 */    MCD::OPC_FilterValue, 213, 7, 8, 0, // Skip to: 2629
/* 2621 */    MCD::OPC_CheckPredicate, 18, 127, 4, // Skip to: 3776
/* 2625 */    MCD::OPC_Decode, 197, 4, 125, // Opcode: CMP_SULE_D_MMR6
/* 2629 */    MCD::OPC_FilterValue, 248, 7, 9, 0, // Skip to: 2643
/* 2634 */    MCD::OPC_CheckPredicate, 18, 114, 4, // Skip to: 3776
/* 2638 */    MCD::OPC_Decode, 255, 11, 144, 1, // Opcode: MSUBF_D_MMR6
/* 2643 */    MCD::OPC_FilterValue, 187, 8, 104, 4, // Skip to: 3776
/* 2648 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 2651 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2664
/* 2655 */    MCD::OPC_CheckPredicate, 17, 93, 4, // Skip to: 3776
/* 2659 */    MCD::OPC_Decode, 254, 5, 145, 1, // Opcode: DMFC1_MM64R6
/* 2664 */    MCD::OPC_FilterValue, 5, 84, 4, // Skip to: 3776
/* 2668 */    MCD::OPC_CheckPredicate, 17, 80, 4, // Skip to: 3776
/* 2672 */    MCD::OPC_Decode, 137, 6, 146, 1, // Opcode: DMTC1_MM64R6
/* 2677 */    MCD::OPC_FilterValue, 22, 34, 2, // Skip to: 3227
/* 2681 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2684 */    MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 2743
/* 2688 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2691 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2704
/* 2695 */    MCD::OPC_CheckPredicate, 17, 53, 4, // Skip to: 3776
/* 2699 */    MCD::OPC_Decode, 225, 6, 147, 1, // Opcode: DSLL_MM64R6
/* 2704 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2717
/* 2708 */    MCD::OPC_CheckPredicate, 17, 40, 4, // Skip to: 3776
/* 2712 */    MCD::OPC_Decode, 237, 6, 147, 1, // Opcode: DSRL_MM64R6
/* 2717 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2730
/* 2721 */    MCD::OPC_CheckPredicate, 17, 27, 4, // Skip to: 3776
/* 2725 */    MCD::OPC_Decode, 231, 6, 147, 1, // Opcode: DSRA_MM64R6
/* 2730 */    MCD::OPC_FilterValue, 3, 18, 4, // Skip to: 3776
/* 2734 */    MCD::OPC_CheckPredicate, 17, 14, 4, // Skip to: 3776
/* 2738 */    MCD::OPC_Decode, 212, 6, 147, 1, // Opcode: DROTR_MM64R6
/* 2743 */    MCD::OPC_FilterValue, 4, 24, 0, // Skip to: 2771
/* 2747 */    MCD::OPC_CheckPredicate, 17, 11, 0, // Skip to: 2762
/* 2751 */    MCD::OPC_CheckField, 6, 5, 2, 5, 0, // Skip to: 2762
/* 2757 */    MCD::OPC_Decode, 228, 6, 147, 1, // Opcode: DSRA32_MM64R6
/* 2762 */    MCD::OPC_CheckPredicate, 17, 242, 3, // Skip to: 3776
/* 2766 */    MCD::OPC_Decode, 231, 5, 148, 1, // Opcode: DINSM_MM64R6
/* 2771 */    MCD::OPC_FilterValue, 8, 42, 0, // Skip to: 2817
/* 2775 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2778 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2791
/* 2782 */    MCD::OPC_CheckPredicate, 17, 222, 3, // Skip to: 3776
/* 2786 */    MCD::OPC_Decode, 221, 6, 147, 1, // Opcode: DSLL32_MM64R6
/* 2791 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2804
/* 2795 */    MCD::OPC_CheckPredicate, 17, 209, 3, // Skip to: 3776
/* 2799 */    MCD::OPC_Decode, 234, 6, 147, 1, // Opcode: DSRL32_MM64R6
/* 2804 */    MCD::OPC_FilterValue, 3, 200, 3, // Skip to: 3776
/* 2808 */    MCD::OPC_CheckPredicate, 17, 196, 3, // Skip to: 3776
/* 2812 */    MCD::OPC_Decode, 209, 6, 147, 1, // Opcode: DROTR32_MM64R6
/* 2817 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 2830
/* 2821 */    MCD::OPC_CheckPredicate, 17, 183, 3, // Skip to: 3776
/* 2825 */    MCD::OPC_Decode, 234, 5, 148, 1, // Opcode: DINS_MM64R6
/* 2830 */    MCD::OPC_FilterValue, 16, 107, 0, // Skip to: 2941
/* 2834 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2837 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2850
/* 2841 */    MCD::OPC_CheckPredicate, 17, 163, 3, // Skip to: 3776
/* 2845 */    MCD::OPC_Decode, 224, 6, 149, 1, // Opcode: DSLLV_MM64R6
/* 2850 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2863
/* 2854 */    MCD::OPC_CheckPredicate, 17, 150, 3, // Skip to: 3776
/* 2858 */    MCD::OPC_Decode, 236, 6, 149, 1, // Opcode: DSRLV_MM64R6
/* 2863 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2876
/* 2867 */    MCD::OPC_CheckPredicate, 17, 137, 3, // Skip to: 3776
/* 2871 */    MCD::OPC_Decode, 230, 6, 149, 1, // Opcode: DSRAV_MM64R6
/* 2876 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2889
/* 2880 */    MCD::OPC_CheckPredicate, 17, 124, 3, // Skip to: 3776
/* 2884 */    MCD::OPC_Decode, 211, 6, 149, 1, // Opcode: DROTRV_MM64R6
/* 2889 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 2902
/* 2893 */    MCD::OPC_CheckPredicate, 17, 111, 3, // Skip to: 3776
/* 2897 */    MCD::OPC_Decode, 196, 5, 150, 1, // Opcode: DADD_MM64R6
/* 2902 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 2915
/* 2906 */    MCD::OPC_CheckPredicate, 17, 98, 3, // Skip to: 3776
/* 2910 */    MCD::OPC_Decode, 195, 5, 150, 1, // Opcode: DADDU_MM64R6
/* 2915 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 2928
/* 2919 */    MCD::OPC_CheckPredicate, 17, 85, 3, // Skip to: 3776
/* 2923 */    MCD::OPC_Decode, 240, 6, 150, 1, // Opcode: DSUB_MM64R6
/* 2928 */    MCD::OPC_FilterValue, 7, 76, 3, // Skip to: 3776
/* 2932 */    MCD::OPC_CheckPredicate, 17, 72, 3, // Skip to: 3776
/* 2936 */    MCD::OPC_Decode, 239, 6, 150, 1, // Opcode: DSUBU_MM64R6
/* 2941 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 2954
/* 2945 */    MCD::OPC_CheckPredicate, 17, 59, 3, // Skip to: 3776
/* 2949 */    MCD::OPC_Decode, 226, 5, 151, 1, // Opcode: DEXTU_MM64R6
/* 2954 */    MCD::OPC_FilterValue, 24, 107, 0, // Skip to: 3065
/* 2958 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 2961 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2974
/* 2965 */    MCD::OPC_CheckPredicate, 17, 39, 3, // Skip to: 3776
/* 2969 */    MCD::OPC_Decode, 150, 6, 150, 1, // Opcode: DMUL_MM64R6
/* 2974 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2987
/* 2978 */    MCD::OPC_CheckPredicate, 17, 26, 3, // Skip to: 3776
/* 2982 */    MCD::OPC_Decode, 144, 6, 150, 1, // Opcode: DMUH_MM64R6
/* 2987 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3000
/* 2991 */    MCD::OPC_CheckPredicate, 17, 13, 3, // Skip to: 3776
/* 2995 */    MCD::OPC_Decode, 149, 6, 150, 1, // Opcode: DMULU_MM64R6
/* 3000 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 3013
/* 3004 */    MCD::OPC_CheckPredicate, 17, 0, 3, // Skip to: 3776
/* 3008 */    MCD::OPC_Decode, 143, 6, 150, 1, // Opcode: DMUHU_MM64R6
/* 3013 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3026
/* 3017 */    MCD::OPC_CheckPredicate, 17, 243, 2, // Skip to: 3776
/* 3021 */    MCD::OPC_Decode, 218, 5, 150, 1, // Opcode: DDIV_MM64R6
/* 3026 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3039
/* 3030 */    MCD::OPC_CheckPredicate, 17, 230, 2, // Skip to: 3776
/* 3034 */    MCD::OPC_Decode, 133, 6, 150, 1, // Opcode: DMOD_MM64R6
/* 3039 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3052
/* 3043 */    MCD::OPC_CheckPredicate, 17, 217, 2, // Skip to: 3776
/* 3047 */    MCD::OPC_Decode, 217, 5, 150, 1, // Opcode: DDIVU_MM64R6
/* 3052 */    MCD::OPC_FilterValue, 7, 208, 2, // Skip to: 3776
/* 3056 */    MCD::OPC_CheckPredicate, 17, 204, 2, // Skip to: 3776
/* 3060 */    MCD::OPC_Decode, 132, 6, 150, 1, // Opcode: DMODU_MM64R6
/* 3065 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 3084
/* 3069 */    MCD::OPC_CheckPredicate, 17, 191, 2, // Skip to: 3776
/* 3073 */    MCD::OPC_CheckField, 6, 2, 0, 185, 2, // Skip to: 3776
/* 3079 */    MCD::OPC_Decode, 203, 5, 152, 1, // Opcode: DALIGN_MM64R6
/* 3084 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 3097
/* 3088 */    MCD::OPC_CheckPredicate, 17, 172, 2, // Skip to: 3776
/* 3092 */    MCD::OPC_Decode, 224, 5, 151, 1, // Opcode: DEXTM_MM64R6
/* 3097 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 3110
/* 3101 */    MCD::OPC_CheckPredicate, 17, 159, 2, // Skip to: 3776
/* 3105 */    MCD::OPC_Decode, 227, 5, 151, 1, // Opcode: DEXT_MM64R6
/* 3110 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 3123
/* 3114 */    MCD::OPC_CheckPredicate, 17, 146, 2, // Skip to: 3776
/* 3118 */    MCD::OPC_Decode, 233, 5, 148, 1, // Opcode: DINSU_MM64R6
/* 3123 */    MCD::OPC_FilterValue, 60, 137, 2, // Skip to: 3776
/* 3127 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3130 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 3149
/* 3134 */    MCD::OPC_CheckPredicate, 17, 126, 2, // Skip to: 3776
/* 3138 */    MCD::OPC_CheckField, 14, 2, 0, 120, 2, // Skip to: 3776
/* 3144 */    MCD::OPC_Decode, 252, 5, 153, 1, // Opcode: DMFC0_MM64R6
/* 3149 */    MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 3168
/* 3153 */    MCD::OPC_CheckPredicate, 17, 107, 2, // Skip to: 3776
/* 3157 */    MCD::OPC_CheckField, 14, 2, 0, 101, 2, // Skip to: 3776
/* 3163 */    MCD::OPC_Decode, 135, 6, 154, 1, // Opcode: DMTC0_MM64R6
/* 3168 */    MCD::OPC_FilterValue, 12, 92, 2, // Skip to: 3776
/* 3172 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 3175 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 3188
/* 3179 */    MCD::OPC_CheckPredicate, 17, 81, 2, // Skip to: 3776
/* 3183 */    MCD::OPC_Decode, 210, 5, 155, 1, // Opcode: DCLO_MM64R6
/* 3188 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 3201
/* 3192 */    MCD::OPC_CheckPredicate, 17, 68, 2, // Skip to: 3776
/* 3196 */    MCD::OPC_Decode, 213, 5, 155, 1, // Opcode: DCLZ_MM64R6
/* 3201 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 3214
/* 3205 */    MCD::OPC_CheckPredicate, 17, 55, 2, // Skip to: 3776
/* 3209 */    MCD::OPC_Decode, 214, 6, 155, 1, // Opcode: DSBH_MM64R6
/* 3214 */    MCD::OPC_FilterValue, 31, 46, 2, // Skip to: 3776
/* 3218 */    MCD::OPC_CheckPredicate, 17, 42, 2, // Skip to: 3776
/* 3222 */    MCD::OPC_Decode, 218, 6, 155, 1, // Opcode: DSHD_MM64R6
/* 3227 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 3240
/* 3231 */    MCD::OPC_CheckPredicate, 17, 29, 2, // Skip to: 3776
/* 3235 */    MCD::OPC_Decode, 194, 5, 156, 1, // Opcode: DADDIU_MM64R6
/* 3240 */    MCD::OPC_FilterValue, 24, 178, 0, // Skip to: 3422
/* 3244 */    MCD::OPC_ExtractField, 12, 4,  // Inst{15-12} ...
/* 3247 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3259
/* 3251 */    MCD::OPC_CheckPredicate, 16, 9, 2, // Skip to: 3776
/* 3255 */    MCD::OPC_Decode, 223, 13, 84, // Opcode: PREF_MMR6
/* 3259 */    MCD::OPC_FilterValue, 6, 53, 0, // Skip to: 3316
/* 3263 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3266 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3279
/* 3270 */    MCD::OPC_CheckPredicate, 16, 246, 1, // Skip to: 3776
/* 3274 */    MCD::OPC_Decode, 192, 9, 157, 1, // Opcode: LBUE_MMR6
/* 3279 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3292
/* 3283 */    MCD::OPC_CheckPredicate, 16, 233, 1, // Skip to: 3776
/* 3287 */    MCD::OPC_Decode, 190, 9, 157, 1, // Opcode: LBE_MMR6
/* 3292 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 3304
/* 3296 */    MCD::OPC_CheckPredicate, 16, 220, 1, // Skip to: 3776
/* 3300 */    MCD::OPC_Decode, 253, 9, 93, // Opcode: LLE_MMR6
/* 3304 */    MCD::OPC_FilterValue, 7, 212, 1, // Skip to: 3776
/* 3308 */    MCD::OPC_CheckPredicate, 16, 208, 1, // Skip to: 3776
/* 3312 */    MCD::OPC_Decode, 156, 10, 93, // Opcode: LWE_MMR6
/* 3316 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 3328
/* 3320 */    MCD::OPC_CheckPredicate, 17, 196, 1, // Skip to: 3776
/* 3324 */    MCD::OPC_Decode, 249, 9, 83, // Opcode: LLD_MM64R6
/* 3328 */    MCD::OPC_FilterValue, 10, 78, 0, // Skip to: 3410
/* 3332 */    MCD::OPC_ExtractField, 9, 3,  // Inst{11-9} ...
/* 3335 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 3347
/* 3339 */    MCD::OPC_CheckPredicate, 16, 177, 1, // Skip to: 3776
/* 3343 */    MCD::OPC_Decode, 220, 13, 94, // Opcode: PREFE_MMR6
/* 3347 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 3359
/* 3351 */    MCD::OPC_CheckPredicate, 16, 165, 1, // Skip to: 3776
/* 3355 */    MCD::OPC_Decode, 192, 3, 94, // Opcode: CACHEE_MMR6
/* 3359 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 3372
/* 3363 */    MCD::OPC_CheckPredicate, 16, 153, 1, // Skip to: 3776
/* 3367 */    MCD::OPC_Decode, 215, 14, 158, 1, // Opcode: SBE_MMR6
/* 3372 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 3385
/* 3376 */    MCD::OPC_CheckPredicate, 16, 140, 1, // Skip to: 3776
/* 3380 */    MCD::OPC_Decode, 158, 15, 158, 1, // Opcode: SHE_MMR6
/* 3385 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 3398
/* 3389 */    MCD::OPC_CheckPredicate, 16, 127, 1, // Skip to: 3776
/* 3393 */    MCD::OPC_Decode, 225, 14, 158, 1, // Opcode: SCE_MMR6
/* 3398 */    MCD::OPC_FilterValue, 7, 118, 1, // Skip to: 3776
/* 3402 */    MCD::OPC_CheckPredicate, 16, 114, 1, // Skip to: 3776
/* 3406 */    MCD::OPC_Decode, 136, 17, 93, // Opcode: SWE_MMR6
/* 3410 */    MCD::OPC_FilterValue, 14, 106, 1, // Skip to: 3776
/* 3414 */    MCD::OPC_CheckPredicate, 17, 102, 1, // Skip to: 3776
/* 3418 */    MCD::OPC_Decode, 179, 10, 83, // Opcode: LWU_MM64R6
/* 3422 */    MCD::OPC_FilterValue, 28, 8, 0, // Skip to: 3434
/* 3426 */    MCD::OPC_CheckPredicate, 16, 90, 1, // Skip to: 3776
/* 3430 */    MCD::OPC_Decode, 162, 18, 90, // Opcode: XORI_MMR6
/* 3434 */    MCD::OPC_FilterValue, 29, 24, 0, // Skip to: 3462
/* 3438 */    MCD::OPC_CheckPredicate, 16, 11, 0, // Skip to: 3453
/* 3442 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3453
/* 3448 */    MCD::OPC_Decode, 251, 1, 159, 1, // Opcode: BEQZALC_MMR6
/* 3453 */    MCD::OPC_CheckPredicate, 16, 63, 1, // Skip to: 3776
/* 3457 */    MCD::OPC_Decode, 247, 1, 160, 1, // Opcode: BEQC_MMR6
/* 3462 */    MCD::OPC_FilterValue, 30, 80, 0, // Skip to: 3546
/* 3466 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 3469 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 3481
/* 3473 */    MCD::OPC_CheckPredicate, 16, 43, 1, // Skip to: 3776
/* 3477 */    MCD::OPC_Decode, 41, 161, 1, // Opcode: ADDIUPC_MMR6
/* 3481 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 3494
/* 3485 */    MCD::OPC_CheckPredicate, 16, 31, 1, // Skip to: 3776
/* 3489 */    MCD::OPC_Decode, 168, 10, 161, 1, // Opcode: LWPC_MMR6
/* 3494 */    MCD::OPC_FilterValue, 3, 22, 1, // Skip to: 3776
/* 3498 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 3501 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 3514
/* 3505 */    MCD::OPC_CheckPredicate, 17, 11, 1, // Skip to: 3776
/* 3509 */    MCD::OPC_Decode, 218, 9, 162, 1, // Opcode: LDPC_MM64R6
/* 3514 */    MCD::OPC_FilterValue, 1, 2, 1, // Skip to: 3776
/* 3518 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 3521 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 3534
/* 3525 */    MCD::OPC_CheckPredicate, 16, 247, 0, // Skip to: 3776
/* 3529 */    MCD::OPC_Decode, 179, 1, 163, 1, // Opcode: AUIPC_MMR6
/* 3534 */    MCD::OPC_FilterValue, 3, 238, 0, // Skip to: 3776
/* 3538 */    MCD::OPC_CheckPredicate, 16, 234, 0, // Skip to: 3776
/* 3542 */    MCD::OPC_Decode, 117, 163, 1, // Opcode: ALUIPC_MMR6
/* 3546 */    MCD::OPC_FilterValue, 31, 24, 0, // Skip to: 3574
/* 3550 */    MCD::OPC_CheckPredicate, 16, 11, 0, // Skip to: 3565
/* 3554 */    MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 3565
/* 3560 */    MCD::OPC_Decode, 244, 2, 159, 1, // Opcode: BNEZALC_MMR6
/* 3565 */    MCD::OPC_CheckPredicate, 16, 207, 0, // Skip to: 3776
/* 3569 */    MCD::OPC_Decode, 232, 2, 164, 1, // Opcode: BNEC_MMR6
/* 3574 */    MCD::OPC_FilterValue, 32, 23, 0, // Skip to: 3601
/* 3578 */    MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 3592
/* 3582 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3592
/* 3588 */    MCD::OPC_Decode, 163, 9, 87, // Opcode: JIALC_MMR6
/* 3592 */    MCD::OPC_CheckPredicate, 16, 180, 0, // Skip to: 3776
/* 3596 */    MCD::OPC_Decode, 255, 1, 165, 1, // Opcode: BEQZC_MMR6
/* 3601 */    MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 3614
/* 3605 */    MCD::OPC_CheckPredicate, 16, 167, 0, // Skip to: 3776
/* 3609 */    MCD::OPC_Decode, 243, 1, 166, 1, // Opcode: BC_MMR6
/* 3614 */    MCD::OPC_FilterValue, 40, 23, 0, // Skip to: 3641
/* 3618 */    MCD::OPC_CheckPredicate, 16, 10, 0, // Skip to: 3632
/* 3622 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 3632
/* 3628 */    MCD::OPC_Decode, 166, 9, 87, // Opcode: JIC_MMR6
/* 3632 */    MCD::OPC_CheckPredicate, 16, 140, 0, // Skip to: 3776
/* 3636 */    MCD::OPC_Decode, 248, 2, 165, 1, // Opcode: BNEZC_MMR6
/* 3641 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 3654
/* 3645 */    MCD::OPC_CheckPredicate, 16, 127, 0, // Skip to: 3776
/* 3649 */    MCD::OPC_Decode, 211, 1, 166, 1, // Opcode: BALC_MMR6
/* 3654 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3667
/* 3658 */    MCD::OPC_CheckPredicate, 16, 114, 0, // Skip to: 3776
/* 3662 */    MCD::OPC_Decode, 137, 2, 167, 1, // Opcode: BGEUC_MMR6
/* 3667 */    MCD::OPC_FilterValue, 49, 8, 0, // Skip to: 3679
/* 3671 */    MCD::OPC_CheckPredicate, 16, 101, 0, // Skip to: 3776
/* 3675 */    MCD::OPC_Decode, 204, 2, 97, // Opcode: BLTC_MMR6
/* 3679 */    MCD::OPC_FilterValue, 52, 7, 0, // Skip to: 3690
/* 3683 */    MCD::OPC_CheckPredicate, 16, 89, 0, // Skip to: 3776
/* 3687 */    MCD::OPC_Decode, 125, 90, // Opcode: ANDI_MMR6
/* 3690 */    MCD::OPC_FilterValue, 54, 8, 0, // Skip to: 3702
/* 3694 */    MCD::OPC_CheckPredicate, 17, 78, 0, // Skip to: 3776
/* 3698 */    MCD::OPC_Decode, 250, 14, 82, // Opcode: SD_MM64R6
/* 3702 */    MCD::OPC_FilterValue, 55, 8, 0, // Skip to: 3714
/* 3706 */    MCD::OPC_CheckPredicate, 17, 66, 0, // Skip to: 3776
/* 3710 */    MCD::OPC_Decode, 225, 9, 82, // Opcode: LD_MM64R6
/* 3714 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3727
/* 3718 */    MCD::OPC_CheckPredicate, 16, 54, 0, // Skip to: 3776
/* 3722 */    MCD::OPC_Decode, 210, 2, 168, 1, // Opcode: BLTUC_MMR6
/* 3727 */    MCD::OPC_FilterValue, 57, 8, 0, // Skip to: 3739
/* 3731 */    MCD::OPC_CheckPredicate, 16, 41, 0, // Skip to: 3776
/* 3735 */    MCD::OPC_Decode, 131, 2, 97, // Opcode: BGEC_MMR6
/* 3739 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 3752
/* 3743 */    MCD::OPC_CheckPredicate, 17, 29, 0, // Skip to: 3776
/* 3747 */    MCD::OPC_Decode, 207, 5, 156, 1, // Opcode: DAUI_MM64R6
/* 3752 */    MCD::OPC_FilterValue, 62, 8, 0, // Skip to: 3764
/* 3756 */    MCD::OPC_CheckPredicate, 16, 16, 0, // Skip to: 3776
/* 3760 */    MCD::OPC_Decode, 158, 17, 82, // Opcode: SW_MMR6
/* 3764 */    MCD::OPC_FilterValue, 63, 8, 0, // Skip to: 3776
/* 3768 */    MCD::OPC_CheckPredicate, 16, 4, 0, // Skip to: 3776
/* 3772 */    MCD::OPC_Decode, 186, 10, 82, // Opcode: LW_MMR6
/* 3776 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMicroMipsR6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 16, 74, 0, // Skip to: 85
/* 11 */      MCD::OPC_Decode, 130, 3, 160, 1, // Opcode: BOVC_MMR6
/* 16 */      MCD::OPC_FilterValue, 31, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 16, 61, 0, // Skip to: 85
/* 24 */      MCD::OPC_Decode, 251, 2, 164, 1, // Opcode: BNVC_MMR6
/* 29 */      MCD::OPC_FilterValue, 48, 24, 0, // Skip to: 57
/* 33 */      MCD::OPC_CheckPredicate, 16, 11, 0, // Skip to: 48
/* 37 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 48
/* 43 */      MCD::OPC_Decode, 198, 2, 167, 1, // Opcode: BLEZALC_MMR6
/* 48 */      MCD::OPC_CheckPredicate, 16, 33, 0, // Skip to: 85
/* 52 */      MCD::OPC_Decode, 145, 2, 167, 1, // Opcode: BGEZALC_MMR6
/* 57 */      MCD::OPC_FilterValue, 56, 24, 0, // Skip to: 85
/* 61 */      MCD::OPC_CheckPredicate, 16, 11, 0, // Skip to: 76
/* 65 */      MCD::OPC_CheckField, 16, 5, 0, 5, 0, // Skip to: 76
/* 71 */      MCD::OPC_Decode, 163, 2, 168, 1, // Opcode: BGTZALC_MMR6
/* 76 */      MCD::OPC_CheckPredicate, 16, 5, 0, // Skip to: 85
/* 80 */      MCD::OPC_Decode, 218, 2, 168, 1, // Opcode: BLTZALC_MMR6
/* 85 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 203, 3, // Skip to: 978
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 0, 55, 0, // Skip to: 69
/* 14 */      MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 17 */      MCD::OPC_FilterValue, 0, 247, 55, // Skip to: 14348
/* 21 */      MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 24 */      MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 36
/* 28 */      MCD::OPC_CheckPredicate, 20, 28, 0, // Skip to: 60
/* 32 */      MCD::OPC_Decode, 180, 16, 0, // Opcode: SSNOP
/* 36 */      MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 48
/* 40 */      MCD::OPC_CheckPredicate, 20, 16, 0, // Skip to: 60
/* 44 */      MCD::OPC_Decode, 247, 6, 0, // Opcode: EHB
/* 48 */      MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 60
/* 52 */      MCD::OPC_CheckPredicate, 21, 4, 0, // Skip to: 60
/* 56 */      MCD::OPC_Decode, 163, 13, 0, // Opcode: PAUSE
/* 60 */      MCD::OPC_CheckPredicate, 1, 204, 55, // Skip to: 14348
/* 64 */      MCD::OPC_Decode, 220, 15, 169, 1, // Opcode: SLL
/* 69 */      MCD::OPC_FilterValue, 1, 41, 0, // Skip to: 114
/* 73 */      MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 76 */      MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 95
/* 80 */      MCD::OPC_CheckPredicate, 22, 184, 55, // Skip to: 14348
/* 84 */      MCD::OPC_CheckField, 6, 5, 0, 178, 55, // Skip to: 14348
/* 90 */      MCD::OPC_Decode, 216, 11, 170, 1, // Opcode: MOVF_I
/* 95 */      MCD::OPC_FilterValue, 1, 169, 55, // Skip to: 14348
/* 99 */      MCD::OPC_CheckPredicate, 22, 165, 55, // Skip to: 14348
/* 103 */     MCD::OPC_CheckField, 6, 5, 0, 159, 55, // Skip to: 14348
/* 109 */     MCD::OPC_Decode, 236, 11, 170, 1, // Opcode: MOVT_I
/* 114 */     MCD::OPC_FilterValue, 2, 29, 0, // Skip to: 147
/* 118 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 121 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 134
/* 125 */     MCD::OPC_CheckPredicate, 1, 139, 55, // Skip to: 14348
/* 129 */     MCD::OPC_Decode, 158, 16, 169, 1, // Opcode: SRL
/* 134 */     MCD::OPC_FilterValue, 1, 130, 55, // Skip to: 14348
/* 138 */     MCD::OPC_CheckPredicate, 23, 126, 55, // Skip to: 14348
/* 142 */     MCD::OPC_Decode, 180, 14, 169, 1, // Opcode: ROTR
/* 147 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 166
/* 151 */     MCD::OPC_CheckPredicate, 1, 113, 55, // Skip to: 14348
/* 155 */     MCD::OPC_CheckField, 21, 5, 0, 107, 55, // Skip to: 14348
/* 161 */     MCD::OPC_Decode, 138, 16, 169, 1, // Opcode: SRA
/* 166 */     MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 184
/* 170 */     MCD::OPC_CheckPredicate, 1, 94, 55, // Skip to: 14348
/* 174 */     MCD::OPC_CheckField, 6, 5, 0, 88, 55, // Skip to: 14348
/* 180 */     MCD::OPC_Decode, 229, 15, 43, // Opcode: SLLV
/* 184 */     MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 203
/* 188 */     MCD::OPC_CheckPredicate, 24, 76, 55, // Skip to: 14348
/* 192 */     MCD::OPC_CheckField, 8, 3, 0, 70, 55, // Skip to: 14348
/* 198 */     MCD::OPC_Decode, 135, 10, 171, 1, // Opcode: LSA
/* 203 */     MCD::OPC_FilterValue, 6, 27, 0, // Skip to: 234
/* 207 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 210 */     MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 222
/* 214 */     MCD::OPC_CheckPredicate, 1, 50, 55, // Skip to: 14348
/* 218 */     MCD::OPC_Decode, 173, 16, 43, // Opcode: SRLV
/* 222 */     MCD::OPC_FilterValue, 1, 42, 55, // Skip to: 14348
/* 226 */     MCD::OPC_CheckPredicate, 23, 38, 55, // Skip to: 14348
/* 230 */     MCD::OPC_Decode, 181, 14, 43, // Opcode: ROTRV
/* 234 */     MCD::OPC_FilterValue, 7, 14, 0, // Skip to: 252
/* 238 */     MCD::OPC_CheckPredicate, 1, 26, 55, // Skip to: 14348
/* 242 */     MCD::OPC_CheckField, 6, 5, 0, 20, 55, // Skip to: 14348
/* 248 */     MCD::OPC_Decode, 151, 16, 43, // Opcode: SRAV
/* 252 */     MCD::OPC_FilterValue, 8, 29, 0, // Skip to: 285
/* 256 */     MCD::OPC_ExtractField, 6, 15,  // Inst{20-6} ...
/* 259 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 272
/* 263 */     MCD::OPC_CheckPredicate, 25, 1, 55, // Skip to: 14348
/* 267 */     MCD::OPC_Decode, 167, 9, 172, 1, // Opcode: JR
/* 272 */     MCD::OPC_FilterValue, 16, 248, 54, // Skip to: 14348
/* 276 */     MCD::OPC_CheckPredicate, 26, 244, 54, // Skip to: 14348
/* 280 */     MCD::OPC_Decode, 174, 9, 172, 1, // Opcode: JR_HB
/* 285 */     MCD::OPC_FilterValue, 9, 39, 0, // Skip to: 328
/* 289 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 292 */     MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 310
/* 296 */     MCD::OPC_CheckPredicate, 1, 224, 54, // Skip to: 14348
/* 300 */     MCD::OPC_CheckField, 16, 5, 0, 218, 54, // Skip to: 14348
/* 306 */     MCD::OPC_Decode, 145, 9, 14, // Opcode: JALR
/* 310 */     MCD::OPC_FilterValue, 16, 210, 54, // Skip to: 14348
/* 314 */     MCD::OPC_CheckPredicate, 27, 206, 54, // Skip to: 14348
/* 318 */     MCD::OPC_CheckField, 16, 5, 0, 200, 54, // Skip to: 14348
/* 324 */     MCD::OPC_Decode, 155, 9, 14, // Opcode: JALR_HB
/* 328 */     MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 347
/* 332 */     MCD::OPC_CheckPredicate, 28, 188, 54, // Skip to: 14348
/* 336 */     MCD::OPC_CheckField, 6, 5, 0, 182, 54, // Skip to: 14348
/* 342 */     MCD::OPC_Decode, 248, 11, 173, 1, // Opcode: MOVZ_I_I
/* 347 */     MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 366
/* 351 */     MCD::OPC_CheckPredicate, 28, 169, 54, // Skip to: 14348
/* 355 */     MCD::OPC_CheckField, 6, 5, 0, 163, 54, // Skip to: 14348
/* 361 */     MCD::OPC_Decode, 228, 11, 173, 1, // Opcode: MOVN_I_I
/* 366 */     MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 379
/* 370 */     MCD::OPC_CheckPredicate, 1, 150, 54, // Skip to: 14348
/* 374 */     MCD::OPC_Decode, 164, 17, 174, 1, // Opcode: SYSCALL
/* 379 */     MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 391
/* 383 */     MCD::OPC_CheckPredicate, 1, 137, 54, // Skip to: 14348
/* 387 */     MCD::OPC_Decode, 135, 3, 44, // Opcode: BREAK
/* 391 */     MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 404
/* 395 */     MCD::OPC_CheckPredicate, 27, 125, 54, // Skip to: 14348
/* 399 */     MCD::OPC_Decode, 159, 17, 175, 1, // Opcode: SYNC
/* 404 */     MCD::OPC_FilterValue, 16, 45, 0, // Skip to: 453
/* 408 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 411 */     MCD::OPC_FilterValue, 0, 109, 54, // Skip to: 14348
/* 415 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 418 */     MCD::OPC_FilterValue, 0, 102, 54, // Skip to: 14348
/* 422 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 425 */     MCD::OPC_FilterValue, 0, 95, 54, // Skip to: 14348
/* 429 */     MCD::OPC_CheckPredicate, 29, 11, 0, // Skip to: 444
/* 433 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 444
/* 439 */     MCD::OPC_Decode, 153, 11, 176, 1, // Opcode: MFHI
/* 444 */     MCD::OPC_CheckPredicate, 30, 76, 54, // Skip to: 14348
/* 448 */     MCD::OPC_Decode, 156, 11, 177, 1, // Opcode: MFHI_DSP
/* 453 */     MCD::OPC_FilterValue, 17, 38, 0, // Skip to: 495
/* 457 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 460 */     MCD::OPC_FilterValue, 0, 60, 54, // Skip to: 14348
/* 464 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 467 */     MCD::OPC_FilterValue, 0, 53, 54, // Skip to: 14348
/* 471 */     MCD::OPC_CheckPredicate, 25, 11, 0, // Skip to: 486
/* 475 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 486
/* 481 */     MCD::OPC_Decode, 164, 12, 172, 1, // Opcode: MTHI
/* 486 */     MCD::OPC_CheckPredicate, 30, 34, 54, // Skip to: 14348
/* 490 */     MCD::OPC_Decode, 166, 12, 178, 1, // Opcode: MTHI_DSP
/* 495 */     MCD::OPC_FilterValue, 18, 45, 0, // Skip to: 544
/* 499 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 502 */     MCD::OPC_FilterValue, 0, 18, 54, // Skip to: 14348
/* 506 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 509 */     MCD::OPC_FilterValue, 0, 11, 54, // Skip to: 14348
/* 513 */     MCD::OPC_ExtractField, 23, 3,  // Inst{25-23} ...
/* 516 */     MCD::OPC_FilterValue, 0, 4, 54, // Skip to: 14348
/* 520 */     MCD::OPC_CheckPredicate, 29, 11, 0, // Skip to: 535
/* 524 */     MCD::OPC_CheckField, 21, 2, 0, 5, 0, // Skip to: 535
/* 530 */     MCD::OPC_Decode, 159, 11, 176, 1, // Opcode: MFLO
/* 535 */     MCD::OPC_CheckPredicate, 30, 241, 53, // Skip to: 14348
/* 539 */     MCD::OPC_Decode, 162, 11, 177, 1, // Opcode: MFLO_DSP
/* 544 */     MCD::OPC_FilterValue, 19, 38, 0, // Skip to: 586
/* 548 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 551 */     MCD::OPC_FilterValue, 0, 225, 53, // Skip to: 14348
/* 555 */     MCD::OPC_ExtractField, 13, 8,  // Inst{20-13} ...
/* 558 */     MCD::OPC_FilterValue, 0, 218, 53, // Skip to: 14348
/* 562 */     MCD::OPC_CheckPredicate, 25, 11, 0, // Skip to: 577
/* 566 */     MCD::OPC_CheckField, 11, 2, 0, 5, 0, // Skip to: 577
/* 572 */     MCD::OPC_Decode, 171, 12, 172, 1, // Opcode: MTLO
/* 577 */     MCD::OPC_CheckPredicate, 30, 199, 53, // Skip to: 14348
/* 581 */     MCD::OPC_Decode, 173, 12, 179, 1, // Opcode: MTLO_DSP
/* 586 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 605
/* 590 */     MCD::OPC_CheckPredicate, 31, 186, 53, // Skip to: 14348
/* 594 */     MCD::OPC_CheckField, 8, 3, 0, 180, 53, // Skip to: 14348
/* 600 */     MCD::OPC_Decode, 249, 5, 180, 1, // Opcode: DLSA
/* 605 */     MCD::OPC_FilterValue, 24, 37, 0, // Skip to: 646
/* 609 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 612 */     MCD::OPC_FilterValue, 0, 164, 53, // Skip to: 14348
/* 616 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 619 */     MCD::OPC_FilterValue, 0, 157, 53, // Skip to: 14348
/* 623 */     MCD::OPC_CheckPredicate, 25, 10, 0, // Skip to: 637
/* 627 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 637
/* 633 */     MCD::OPC_Decode, 209, 12, 63, // Opcode: MULT
/* 637 */     MCD::OPC_CheckPredicate, 30, 139, 53, // Skip to: 14348
/* 641 */     MCD::OPC_Decode, 212, 12, 181, 1, // Opcode: MULT_DSP
/* 646 */     MCD::OPC_FilterValue, 25, 37, 0, // Skip to: 687
/* 650 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 653 */     MCD::OPC_FilterValue, 0, 123, 53, // Skip to: 14348
/* 657 */     MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 660 */     MCD::OPC_FilterValue, 0, 116, 53, // Skip to: 14348
/* 664 */     MCD::OPC_CheckPredicate, 25, 10, 0, // Skip to: 678
/* 668 */     MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 678
/* 674 */     MCD::OPC_Decode, 215, 12, 63, // Opcode: MULTu
/* 678 */     MCD::OPC_CheckPredicate, 30, 98, 53, // Skip to: 14348
/* 682 */     MCD::OPC_Decode, 210, 12, 181, 1, // Opcode: MULTU_DSP
/* 687 */     MCD::OPC_FilterValue, 26, 14, 0, // Skip to: 705
/* 691 */     MCD::OPC_CheckPredicate, 32, 85, 53, // Skip to: 14348
/* 695 */     MCD::OPC_CheckField, 6, 10, 0, 79, 53, // Skip to: 14348
/* 701 */     MCD::OPC_Decode, 243, 14, 63, // Opcode: SDIV
/* 705 */     MCD::OPC_FilterValue, 27, 14, 0, // Skip to: 723
/* 709 */     MCD::OPC_CheckPredicate, 32, 67, 53, // Skip to: 14348
/* 713 */     MCD::OPC_CheckField, 6, 10, 0, 61, 53, // Skip to: 14348
/* 719 */     MCD::OPC_Decode, 134, 18, 63, // Opcode: UDIV
/* 723 */     MCD::OPC_FilterValue, 32, 13, 0, // Skip to: 740
/* 727 */     MCD::OPC_CheckPredicate, 20, 49, 53, // Skip to: 14348
/* 731 */     MCD::OPC_CheckField, 6, 5, 0, 43, 53, // Skip to: 14348
/* 737 */     MCD::OPC_Decode, 38, 49, // Opcode: ADD
/* 740 */     MCD::OPC_FilterValue, 33, 13, 0, // Skip to: 757
/* 744 */     MCD::OPC_CheckPredicate, 1, 32, 53, // Skip to: 14348
/* 748 */     MCD::OPC_CheckField, 6, 5, 0, 26, 53, // Skip to: 14348
/* 754 */     MCD::OPC_Decode, 110, 49, // Opcode: ADDu
/* 757 */     MCD::OPC_FilterValue, 34, 14, 0, // Skip to: 775
/* 761 */     MCD::OPC_CheckPredicate, 20, 15, 53, // Skip to: 14348
/* 765 */     MCD::OPC_CheckField, 6, 5, 0, 9, 53, // Skip to: 14348
/* 771 */     MCD::OPC_Decode, 191, 16, 49, // Opcode: SUB
/* 775 */     MCD::OPC_FilterValue, 35, 14, 0, // Skip to: 793
/* 779 */     MCD::OPC_CheckPredicate, 1, 253, 52, // Skip to: 14348
/* 783 */     MCD::OPC_CheckField, 6, 5, 0, 247, 52, // Skip to: 14348
/* 789 */     MCD::OPC_Decode, 247, 16, 49, // Opcode: SUBu
/* 793 */     MCD::OPC_FilterValue, 36, 13, 0, // Skip to: 810
/* 797 */     MCD::OPC_CheckPredicate, 1, 235, 52, // Skip to: 14348
/* 801 */     MCD::OPC_CheckField, 6, 5, 0, 229, 52, // Skip to: 14348
/* 807 */     MCD::OPC_Decode, 118, 49, // Opcode: AND
/* 810 */     MCD::OPC_FilterValue, 37, 14, 0, // Skip to: 828
/* 814 */     MCD::OPC_CheckPredicate, 1, 218, 52, // Skip to: 14348
/* 818 */     MCD::OPC_CheckField, 6, 5, 0, 212, 52, // Skip to: 14348
/* 824 */     MCD::OPC_Decode, 145, 13, 49, // Opcode: OR
/* 828 */     MCD::OPC_FilterValue, 38, 14, 0, // Skip to: 846
/* 832 */     MCD::OPC_CheckPredicate, 1, 200, 52, // Skip to: 14348
/* 836 */     MCD::OPC_CheckField, 6, 5, 0, 194, 52, // Skip to: 14348
/* 842 */     MCD::OPC_Decode, 157, 18, 49, // Opcode: XOR
/* 846 */     MCD::OPC_FilterValue, 39, 14, 0, // Skip to: 864
/* 850 */     MCD::OPC_CheckPredicate, 1, 182, 52, // Skip to: 14348
/* 854 */     MCD::OPC_CheckField, 6, 5, 0, 176, 52, // Skip to: 14348
/* 860 */     MCD::OPC_Decode, 131, 13, 49, // Opcode: NOR
/* 864 */     MCD::OPC_FilterValue, 42, 14, 0, // Skip to: 882
/* 868 */     MCD::OPC_CheckPredicate, 20, 164, 52, // Skip to: 14348
/* 872 */     MCD::OPC_CheckField, 6, 5, 0, 158, 52, // Skip to: 14348
/* 878 */     MCD::OPC_Decode, 237, 15, 49, // Opcode: SLT
/* 882 */     MCD::OPC_FilterValue, 43, 14, 0, // Skip to: 900
/* 886 */     MCD::OPC_CheckPredicate, 20, 146, 52, // Skip to: 14348
/* 890 */     MCD::OPC_CheckField, 6, 5, 0, 140, 52, // Skip to: 14348
/* 896 */     MCD::OPC_Decode, 246, 15, 49, // Opcode: SLTu
/* 900 */     MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 913
/* 904 */     MCD::OPC_CheckPredicate, 2, 128, 52, // Skip to: 14348
/* 908 */     MCD::OPC_Decode, 218, 17, 182, 1, // Opcode: TGE
/* 913 */     MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 926
/* 917 */     MCD::OPC_CheckPredicate, 2, 115, 52, // Skip to: 14348
/* 921 */     MCD::OPC_Decode, 223, 17, 182, 1, // Opcode: TGEU
/* 926 */     MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 939
/* 930 */     MCD::OPC_CheckPredicate, 2, 102, 52, // Skip to: 14348
/* 934 */     MCD::OPC_Decode, 238, 17, 182, 1, // Opcode: TLT
/* 939 */     MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 952
/* 943 */     MCD::OPC_CheckPredicate, 2, 89, 52, // Skip to: 14348
/* 947 */     MCD::OPC_Decode, 242, 17, 182, 1, // Opcode: TLTU
/* 952 */     MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 965
/* 956 */     MCD::OPC_CheckPredicate, 2, 76, 52, // Skip to: 14348
/* 960 */     MCD::OPC_Decode, 214, 17, 182, 1, // Opcode: TEQ
/* 965 */     MCD::OPC_FilterValue, 54, 67, 52, // Skip to: 14348
/* 969 */     MCD::OPC_CheckPredicate, 2, 63, 52, // Skip to: 14348
/* 973 */     MCD::OPC_Decode, 245, 17, 182, 1, // Opcode: TNE
/* 978 */     MCD::OPC_FilterValue, 1, 217, 0, // Skip to: 1199
/* 982 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 985 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 998
/* 989 */     MCD::OPC_CheckPredicate, 20, 43, 52, // Skip to: 14348
/* 993 */     MCD::OPC_Decode, 214, 2, 183, 1, // Opcode: BLTZ
/* 998 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1011
/* 1002 */    MCD::OPC_CheckPredicate, 20, 30, 52, // Skip to: 14348
/* 1006 */    MCD::OPC_Decode, 141, 2, 183, 1, // Opcode: BGEZ
/* 1011 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1024
/* 1015 */    MCD::OPC_CheckPredicate, 33, 17, 52, // Skip to: 14348
/* 1019 */    MCD::OPC_Decode, 223, 2, 183, 1, // Opcode: BLTZL
/* 1024 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1037
/* 1028 */    MCD::OPC_CheckPredicate, 33, 4, 52, // Skip to: 14348
/* 1032 */    MCD::OPC_Decode, 150, 2, 183, 1, // Opcode: BGEZL
/* 1037 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1050
/* 1041 */    MCD::OPC_CheckPredicate, 33, 247, 51, // Skip to: 14348
/* 1045 */    MCD::OPC_Decode, 219, 17, 163, 1, // Opcode: TGEI
/* 1050 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1063
/* 1054 */    MCD::OPC_CheckPredicate, 33, 234, 51, // Skip to: 14348
/* 1058 */    MCD::OPC_Decode, 220, 17, 163, 1, // Opcode: TGEIU
/* 1063 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1076
/* 1067 */    MCD::OPC_CheckPredicate, 33, 221, 51, // Skip to: 14348
/* 1071 */    MCD::OPC_Decode, 239, 17, 163, 1, // Opcode: TLTI
/* 1076 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1089
/* 1080 */    MCD::OPC_CheckPredicate, 33, 208, 51, // Skip to: 14348
/* 1084 */    MCD::OPC_Decode, 133, 18, 163, 1, // Opcode: TTLTIU
/* 1089 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1102
/* 1093 */    MCD::OPC_CheckPredicate, 33, 195, 51, // Skip to: 14348
/* 1097 */    MCD::OPC_Decode, 215, 17, 163, 1, // Opcode: TEQI
/* 1102 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1115
/* 1106 */    MCD::OPC_CheckPredicate, 33, 182, 51, // Skip to: 14348
/* 1110 */    MCD::OPC_Decode, 246, 17, 163, 1, // Opcode: TNEI
/* 1115 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 1128
/* 1119 */    MCD::OPC_CheckPredicate, 25, 169, 51, // Skip to: 14348
/* 1123 */    MCD::OPC_Decode, 216, 2, 183, 1, // Opcode: BLTZAL
/* 1128 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 1141
/* 1132 */    MCD::OPC_CheckPredicate, 25, 156, 51, // Skip to: 14348
/* 1136 */    MCD::OPC_Decode, 143, 2, 183, 1, // Opcode: BGEZAL
/* 1141 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 1154
/* 1145 */    MCD::OPC_CheckPredicate, 33, 143, 51, // Skip to: 14348
/* 1149 */    MCD::OPC_Decode, 219, 2, 183, 1, // Opcode: BLTZALL
/* 1154 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 1167
/* 1158 */    MCD::OPC_CheckPredicate, 33, 130, 51, // Skip to: 14348
/* 1162 */    MCD::OPC_Decode, 146, 2, 183, 1, // Opcode: BGEZALL
/* 1167 */    MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 1186
/* 1171 */    MCD::OPC_CheckPredicate, 34, 117, 51, // Skip to: 14348
/* 1175 */    MCD::OPC_CheckField, 21, 5, 0, 111, 51, // Skip to: 14348
/* 1181 */    MCD::OPC_Decode, 131, 3, 184, 1, // Opcode: BPOSGE32
/* 1186 */    MCD::OPC_FilterValue, 31, 102, 51, // Skip to: 14348
/* 1190 */    MCD::OPC_CheckPredicate, 21, 98, 51, // Skip to: 14348
/* 1194 */    MCD::OPC_Decode, 160, 17, 185, 1, // Opcode: SYNCI
/* 1199 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1212
/* 1203 */    MCD::OPC_CheckPredicate, 20, 85, 51, // Skip to: 14348
/* 1207 */    MCD::OPC_Decode, 143, 9, 186, 1, // Opcode: J
/* 1212 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1225
/* 1216 */    MCD::OPC_CheckPredicate, 20, 72, 51, // Skip to: 14348
/* 1220 */    MCD::OPC_Decode, 144, 9, 186, 1, // Opcode: JAL
/* 1225 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1238
/* 1229 */    MCD::OPC_CheckPredicate, 20, 59, 51, // Skip to: 14348
/* 1233 */    MCD::OPC_Decode, 244, 1, 187, 1, // Opcode: BEQ
/* 1238 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1251
/* 1242 */    MCD::OPC_CheckPredicate, 20, 46, 51, // Skip to: 14348
/* 1246 */    MCD::OPC_Decode, 229, 2, 187, 1, // Opcode: BNE
/* 1251 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1270
/* 1255 */    MCD::OPC_CheckPredicate, 20, 33, 51, // Skip to: 14348
/* 1259 */    MCD::OPC_CheckField, 16, 5, 0, 27, 51, // Skip to: 14348
/* 1265 */    MCD::OPC_Decode, 195, 2, 183, 1, // Opcode: BLEZ
/* 1270 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1289
/* 1274 */    MCD::OPC_CheckPredicate, 20, 14, 51, // Skip to: 14348
/* 1278 */    MCD::OPC_CheckField, 16, 5, 0, 8, 51, // Skip to: 14348
/* 1284 */    MCD::OPC_Decode, 160, 2, 183, 1, // Opcode: BGTZ
/* 1289 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 1301
/* 1293 */    MCD::OPC_CheckPredicate, 25, 251, 50, // Skip to: 14348
/* 1297 */    MCD::OPC_Decode, 106, 188, 1, // Opcode: ADDi
/* 1301 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 1313
/* 1305 */    MCD::OPC_CheckPredicate, 1, 239, 50, // Skip to: 14348
/* 1309 */    MCD::OPC_Decode, 108, 188, 1, // Opcode: ADDiu
/* 1313 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1326
/* 1317 */    MCD::OPC_CheckPredicate, 20, 227, 50, // Skip to: 14348
/* 1321 */    MCD::OPC_Decode, 240, 15, 188, 1, // Opcode: SLTi
/* 1326 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1339
/* 1330 */    MCD::OPC_CheckPredicate, 20, 214, 50, // Skip to: 14348
/* 1334 */    MCD::OPC_Decode, 243, 15, 188, 1, // Opcode: SLTiu
/* 1339 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1352
/* 1343 */    MCD::OPC_CheckPredicate, 1, 201, 50, // Skip to: 14348
/* 1347 */    MCD::OPC_Decode, 132, 1, 189, 1, // Opcode: ANDi
/* 1352 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1365
/* 1356 */    MCD::OPC_CheckPredicate, 1, 188, 50, // Skip to: 14348
/* 1360 */    MCD::OPC_Decode, 157, 13, 189, 1, // Opcode: ORi
/* 1365 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1378
/* 1369 */    MCD::OPC_CheckPredicate, 1, 175, 50, // Skip to: 14348
/* 1373 */    MCD::OPC_Decode, 169, 18, 189, 1, // Opcode: XORi
/* 1378 */    MCD::OPC_FilterValue, 15, 14, 0, // Skip to: 1396
/* 1382 */    MCD::OPC_CheckPredicate, 20, 162, 50, // Skip to: 14348
/* 1386 */    MCD::OPC_CheckField, 21, 5, 0, 156, 50, // Skip to: 14348
/* 1392 */    MCD::OPC_Decode, 142, 10, 87, // Opcode: LUi
/* 1396 */    MCD::OPC_FilterValue, 16, 56, 1, // Skip to: 1712
/* 1400 */    MCD::OPC_ExtractField, 3, 8,  // Inst{10-3} ...
/* 1403 */    MCD::OPC_FilterValue, 0, 150, 0, // Skip to: 1557
/* 1407 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1410 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1423
/* 1414 */    MCD::OPC_CheckPredicate, 35, 130, 50, // Skip to: 14348
/* 1418 */    MCD::OPC_Decode, 139, 11, 190, 1, // Opcode: MFC0
/* 1423 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1436
/* 1427 */    MCD::OPC_CheckPredicate, 35, 117, 50, // Skip to: 14348
/* 1431 */    MCD::OPC_Decode, 150, 12, 191, 1, // Opcode: MTC0
/* 1436 */    MCD::OPC_FilterValue, 11, 20, 0, // Skip to: 1460
/* 1440 */    MCD::OPC_CheckPredicate, 23, 104, 50, // Skip to: 14348
/* 1444 */    MCD::OPC_CheckField, 11, 5, 12, 98, 50, // Skip to: 14348
/* 1450 */    MCD::OPC_CheckField, 0, 3, 0, 92, 50, // Skip to: 14348
/* 1456 */    MCD::OPC_Decode, 228, 5, 73, // Opcode: DI
/* 1460 */    MCD::OPC_FilterValue, 16, 84, 50, // Skip to: 14348
/* 1464 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1467 */    MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 1485
/* 1471 */    MCD::OPC_CheckPredicate, 1, 73, 50, // Skip to: 14348
/* 1475 */    MCD::OPC_CheckField, 11, 10, 0, 67, 50, // Skip to: 14348
/* 1481 */    MCD::OPC_Decode, 232, 17, 0, // Opcode: TLBR
/* 1485 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 1503
/* 1489 */    MCD::OPC_CheckPredicate, 1, 55, 50, // Skip to: 14348
/* 1493 */    MCD::OPC_CheckField, 11, 10, 0, 49, 50, // Skip to: 14348
/* 1499 */    MCD::OPC_Decode, 234, 17, 0, // Opcode: TLBWI
/* 1503 */    MCD::OPC_FilterValue, 3, 14, 0, // Skip to: 1521
/* 1507 */    MCD::OPC_CheckPredicate, 36, 37, 50, // Skip to: 14348
/* 1511 */    MCD::OPC_CheckField, 11, 10, 0, 31, 50, // Skip to: 14348
/* 1517 */    MCD::OPC_Decode, 226, 17, 0, // Opcode: TLBINV
/* 1521 */    MCD::OPC_FilterValue, 4, 14, 0, // Skip to: 1539
/* 1525 */    MCD::OPC_CheckPredicate, 36, 19, 50, // Skip to: 14348
/* 1529 */    MCD::OPC_CheckField, 11, 10, 0, 13, 50, // Skip to: 14348
/* 1535 */    MCD::OPC_Decode, 227, 17, 0, // Opcode: TLBINVF
/* 1539 */    MCD::OPC_FilterValue, 6, 5, 50, // Skip to: 14348
/* 1543 */    MCD::OPC_CheckPredicate, 1, 1, 50, // Skip to: 14348
/* 1547 */    MCD::OPC_CheckField, 11, 10, 0, 251, 49, // Skip to: 14348
/* 1553 */    MCD::OPC_Decode, 236, 17, 0, // Opcode: TLBWR
/* 1557 */    MCD::OPC_FilterValue, 1, 22, 0, // Skip to: 1583
/* 1561 */    MCD::OPC_CheckPredicate, 1, 239, 49, // Skip to: 14348
/* 1565 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 231, 49, // Skip to: 14348
/* 1573 */    MCD::OPC_CheckField, 0, 3, 0, 225, 49, // Skip to: 14348
/* 1579 */    MCD::OPC_Decode, 230, 17, 0, // Opcode: TLBP
/* 1583 */    MCD::OPC_FilterValue, 3, 43, 0, // Skip to: 1630
/* 1587 */    MCD::OPC_ExtractField, 0, 3,  // Inst{2-0} ...
/* 1590 */    MCD::OPC_FilterValue, 0, 16, 0, // Skip to: 1610
/* 1594 */    MCD::OPC_CheckPredicate, 37, 206, 49, // Skip to: 14348
/* 1598 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 198, 49, // Skip to: 14348
/* 1606 */    MCD::OPC_Decode, 253, 6, 0, // Opcode: ERET
/* 1610 */    MCD::OPC_FilterValue, 7, 190, 49, // Skip to: 14348
/* 1614 */    MCD::OPC_CheckPredicate, 35, 186, 49, // Skip to: 14348
/* 1618 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 178, 49, // Skip to: 14348
/* 1626 */    MCD::OPC_Decode, 219, 5, 0, // Opcode: DERET
/* 1630 */    MCD::OPC_FilterValue, 4, 52, 0, // Skip to: 1686
/* 1634 */    MCD::OPC_ExtractField, 11, 5,  // Inst{15-11} ...
/* 1637 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1662
/* 1641 */    MCD::OPC_CheckPredicate, 38, 159, 49, // Skip to: 14348
/* 1645 */    MCD::OPC_CheckField, 16, 10, 128, 4, 152, 49, // Skip to: 14348
/* 1652 */    MCD::OPC_CheckField, 0, 3, 0, 146, 49, // Skip to: 14348
/* 1658 */    MCD::OPC_Decode, 148, 18, 0, // Opcode: WAIT
/* 1662 */    MCD::OPC_FilterValue, 12, 138, 49, // Skip to: 14348
/* 1666 */    MCD::OPC_CheckPredicate, 23, 134, 49, // Skip to: 14348
/* 1670 */    MCD::OPC_CheckField, 21, 5, 11, 128, 49, // Skip to: 14348
/* 1676 */    MCD::OPC_CheckField, 0, 3, 0, 122, 49, // Skip to: 14348
/* 1682 */    MCD::OPC_Decode, 250, 6, 73, // Opcode: EI
/* 1686 */    MCD::OPC_FilterValue, 11, 114, 49, // Skip to: 14348
/* 1690 */    MCD::OPC_CheckPredicate, 39, 110, 49, // Skip to: 14348
/* 1694 */    MCD::OPC_CheckField, 11, 15, 128, 128, 1, 102, 49, // Skip to: 14348
/* 1702 */    MCD::OPC_CheckField, 0, 3, 0, 96, 49, // Skip to: 14348
/* 1708 */    MCD::OPC_Decode, 254, 6, 0, // Opcode: ERETNC
/* 1712 */    MCD::OPC_FilterValue, 17, 115, 6, // Skip to: 3367
/* 1716 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1719 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 1738
/* 1723 */    MCD::OPC_CheckPredicate, 40, 77, 49, // Skip to: 14348
/* 1727 */    MCD::OPC_CheckField, 0, 11, 0, 71, 49, // Skip to: 14348
/* 1733 */    MCD::OPC_Decode, 141, 11, 192, 1, // Opcode: MFC1
/* 1738 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1757
/* 1742 */    MCD::OPC_CheckPredicate, 41, 58, 49, // Skip to: 14348
/* 1746 */    MCD::OPC_CheckField, 0, 11, 0, 52, 49, // Skip to: 14348
/* 1752 */    MCD::OPC_Decode, 253, 5, 193, 1, // Opcode: DMFC1
/* 1757 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1776
/* 1761 */    MCD::OPC_CheckPredicate, 40, 39, 49, // Skip to: 14348
/* 1765 */    MCD::OPC_CheckField, 0, 11, 0, 33, 49, // Skip to: 14348
/* 1771 */    MCD::OPC_Decode, 215, 3, 194, 1, // Opcode: CFC1
/* 1776 */    MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 1795
/* 1780 */    MCD::OPC_CheckPredicate, 42, 20, 49, // Skip to: 14348
/* 1784 */    MCD::OPC_CheckField, 0, 11, 0, 14, 49, // Skip to: 14348
/* 1790 */    MCD::OPC_Decode, 147, 11, 195, 1, // Opcode: MFHC1_D32
/* 1795 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 1814
/* 1799 */    MCD::OPC_CheckPredicate, 40, 1, 49, // Skip to: 14348
/* 1803 */    MCD::OPC_CheckField, 0, 11, 0, 251, 48, // Skip to: 14348
/* 1809 */    MCD::OPC_Decode, 152, 12, 196, 1, // Opcode: MTC1
/* 1814 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1833
/* 1818 */    MCD::OPC_CheckPredicate, 41, 238, 48, // Skip to: 14348
/* 1822 */    MCD::OPC_CheckField, 0, 11, 0, 232, 48, // Skip to: 14348
/* 1828 */    MCD::OPC_Decode, 136, 6, 197, 1, // Opcode: DMTC1
/* 1833 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 1852
/* 1837 */    MCD::OPC_CheckPredicate, 40, 219, 48, // Skip to: 14348
/* 1841 */    MCD::OPC_CheckField, 0, 11, 0, 213, 48, // Skip to: 14348
/* 1847 */    MCD::OPC_Decode, 234, 4, 198, 1, // Opcode: CTC1
/* 1852 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 1871
/* 1856 */    MCD::OPC_CheckPredicate, 42, 200, 48, // Skip to: 14348
/* 1860 */    MCD::OPC_CheckField, 0, 11, 0, 194, 48, // Skip to: 14348
/* 1866 */    MCD::OPC_Decode, 158, 12, 199, 1, // Opcode: MTHC1_D32
/* 1871 */    MCD::OPC_FilterValue, 8, 55, 0, // Skip to: 1930
/* 1875 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1878 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1891
/* 1882 */    MCD::OPC_CheckPredicate, 43, 174, 48, // Skip to: 14348
/* 1886 */    MCD::OPC_Decode, 223, 1, 200, 1, // Opcode: BC1F
/* 1891 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1904
/* 1895 */    MCD::OPC_CheckPredicate, 43, 161, 48, // Skip to: 14348
/* 1899 */    MCD::OPC_Decode, 228, 1, 200, 1, // Opcode: BC1T
/* 1904 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1917
/* 1908 */    MCD::OPC_CheckPredicate, 44, 148, 48, // Skip to: 14348
/* 1912 */    MCD::OPC_Decode, 224, 1, 200, 1, // Opcode: BC1FL
/* 1917 */    MCD::OPC_FilterValue, 3, 139, 48, // Skip to: 14348
/* 1921 */    MCD::OPC_CheckPredicate, 44, 135, 48, // Skip to: 14348
/* 1925 */    MCD::OPC_Decode, 229, 1, 200, 1, // Opcode: BC1TL
/* 1930 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1943
/* 1934 */    MCD::OPC_CheckPredicate, 24, 122, 48, // Skip to: 14348
/* 1938 */    MCD::OPC_Decode, 158, 3, 201, 1, // Opcode: BZ_V
/* 1943 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 1956
/* 1947 */    MCD::OPC_CheckPredicate, 24, 109, 48, // Skip to: 14348
/* 1951 */    MCD::OPC_Decode, 255, 2, 201, 1, // Opcode: BNZ_V
/* 1956 */    MCD::OPC_FilterValue, 16, 115, 2, // Skip to: 2587
/* 1960 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1963 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1976
/* 1967 */    MCD::OPC_CheckPredicate, 40, 89, 48, // Skip to: 14348
/* 1971 */    MCD::OPC_Decode, 175, 7, 202, 1, // Opcode: FADD_S
/* 1976 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1989
/* 1980 */    MCD::OPC_CheckPredicate, 40, 76, 48, // Skip to: 14348
/* 1984 */    MCD::OPC_Decode, 191, 8, 202, 1, // Opcode: FSUB_S
/* 1989 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2002
/* 1993 */    MCD::OPC_CheckPredicate, 40, 63, 48, // Skip to: 14348
/* 1997 */    MCD::OPC_Decode, 150, 8, 202, 1, // Opcode: FMUL_S
/* 2002 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2015
/* 2006 */    MCD::OPC_CheckPredicate, 40, 50, 48, // Skip to: 14348
/* 2010 */    MCD::OPC_Decode, 213, 7, 202, 1, // Opcode: FDIV_S
/* 2015 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2034
/* 2019 */    MCD::OPC_CheckPredicate, 45, 37, 48, // Skip to: 14348
/* 2023 */    MCD::OPC_CheckField, 16, 5, 0, 31, 48, // Skip to: 14348
/* 2029 */    MCD::OPC_Decode, 183, 8, 203, 1, // Opcode: FSQRT_S
/* 2034 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2053
/* 2038 */    MCD::OPC_CheckPredicate, 40, 18, 48, // Skip to: 14348
/* 2042 */    MCD::OPC_CheckField, 16, 5, 0, 12, 48, // Skip to: 14348
/* 2048 */    MCD::OPC_Decode, 167, 7, 203, 1, // Opcode: FABS_S
/* 2053 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2072
/* 2057 */    MCD::OPC_CheckPredicate, 40, 255, 47, // Skip to: 14348
/* 2061 */    MCD::OPC_CheckField, 16, 5, 0, 249, 47, // Skip to: 14348
/* 2067 */    MCD::OPC_Decode, 140, 8, 203, 1, // Opcode: FMOV_S
/* 2072 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2091
/* 2076 */    MCD::OPC_CheckPredicate, 40, 236, 47, // Skip to: 14348
/* 2080 */    MCD::OPC_CheckField, 16, 5, 0, 230, 47, // Skip to: 14348
/* 2086 */    MCD::OPC_Decode, 158, 8, 203, 1, // Opcode: FNEG_S
/* 2091 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2110
/* 2095 */    MCD::OPC_CheckPredicate, 45, 217, 47, // Skip to: 14348
/* 2099 */    MCD::OPC_CheckField, 16, 5, 0, 211, 47, // Skip to: 14348
/* 2105 */    MCD::OPC_Decode, 192, 14, 203, 1, // Opcode: ROUND_W_S
/* 2110 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2129
/* 2114 */    MCD::OPC_CheckPredicate, 45, 198, 47, // Skip to: 14348
/* 2118 */    MCD::OPC_CheckField, 16, 5, 0, 192, 47, // Skip to: 14348
/* 2124 */    MCD::OPC_Decode, 130, 18, 203, 1, // Opcode: TRUNC_W_S
/* 2129 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2148
/* 2133 */    MCD::OPC_CheckPredicate, 45, 179, 47, // Skip to: 14348
/* 2137 */    MCD::OPC_CheckField, 16, 5, 0, 173, 47, // Skip to: 14348
/* 2143 */    MCD::OPC_Decode, 204, 3, 203, 1, // Opcode: CEIL_W_S
/* 2148 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2167
/* 2152 */    MCD::OPC_CheckPredicate, 45, 160, 47, // Skip to: 14348
/* 2156 */    MCD::OPC_CheckField, 16, 5, 0, 154, 47, // Skip to: 14348
/* 2162 */    MCD::OPC_Decode, 251, 7, 203, 1, // Opcode: FLOOR_W_S
/* 2167 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2200
/* 2171 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2174 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2187
/* 2178 */    MCD::OPC_CheckPredicate, 22, 134, 47, // Skip to: 14348
/* 2182 */    MCD::OPC_Decode, 219, 11, 204, 1, // Opcode: MOVF_S
/* 2187 */    MCD::OPC_FilterValue, 1, 125, 47, // Skip to: 14348
/* 2191 */    MCD::OPC_CheckPredicate, 22, 121, 47, // Skip to: 14348
/* 2195 */    MCD::OPC_Decode, 239, 11, 204, 1, // Opcode: MOVT_S
/* 2200 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2213
/* 2204 */    MCD::OPC_CheckPredicate, 22, 108, 47, // Skip to: 14348
/* 2208 */    MCD::OPC_Decode, 251, 11, 205, 1, // Opcode: MOVZ_I_S
/* 2213 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2226
/* 2217 */    MCD::OPC_CheckPredicate, 22, 95, 47, // Skip to: 14348
/* 2221 */    MCD::OPC_Decode, 231, 11, 205, 1, // Opcode: MOVN_I_S
/* 2226 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 2245
/* 2230 */    MCD::OPC_CheckPredicate, 46, 82, 47, // Skip to: 14348
/* 2234 */    MCD::OPC_CheckField, 16, 5, 0, 76, 47, // Skip to: 14348
/* 2240 */    MCD::OPC_Decode, 237, 4, 206, 1, // Opcode: CVT_D32_S
/* 2245 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2264
/* 2249 */    MCD::OPC_CheckPredicate, 40, 63, 47, // Skip to: 14348
/* 2253 */    MCD::OPC_CheckField, 16, 5, 0, 57, 47, // Skip to: 14348
/* 2259 */    MCD::OPC_Decode, 138, 5, 203, 1, // Opcode: CVT_W_S
/* 2264 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2283
/* 2268 */    MCD::OPC_CheckPredicate, 47, 44, 47, // Skip to: 14348
/* 2272 */    MCD::OPC_CheckField, 16, 5, 0, 38, 47, // Skip to: 14348
/* 2278 */    MCD::OPC_Decode, 250, 4, 207, 1, // Opcode: CVT_L_S
/* 2283 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 2302
/* 2287 */    MCD::OPC_CheckPredicate, 43, 25, 47, // Skip to: 14348
/* 2291 */    MCD::OPC_CheckField, 6, 5, 0, 19, 47, // Skip to: 14348
/* 2297 */    MCD::OPC_Decode, 146, 5, 208, 1, // Opcode: C_F_S
/* 2302 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 2321
/* 2306 */    MCD::OPC_CheckPredicate, 43, 6, 47, // Skip to: 14348
/* 2310 */    MCD::OPC_CheckField, 6, 5, 0, 0, 47, // Skip to: 14348
/* 2316 */    MCD::OPC_Decode, 188, 5, 208, 1, // Opcode: C_UN_S
/* 2321 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 2340
/* 2325 */    MCD::OPC_CheckPredicate, 43, 243, 46, // Skip to: 14348
/* 2329 */    MCD::OPC_CheckField, 6, 5, 0, 237, 46, // Skip to: 14348
/* 2335 */    MCD::OPC_Decode, 143, 5, 208, 1, // Opcode: C_EQ_S
/* 2340 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 2359
/* 2344 */    MCD::OPC_CheckPredicate, 43, 224, 46, // Skip to: 14348
/* 2348 */    MCD::OPC_CheckField, 6, 5, 0, 218, 46, // Skip to: 14348
/* 2354 */    MCD::OPC_Decode, 179, 5, 208, 1, // Opcode: C_UEQ_S
/* 2359 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 2378
/* 2363 */    MCD::OPC_CheckPredicate, 43, 205, 46, // Skip to: 14348
/* 2367 */    MCD::OPC_CheckField, 6, 5, 0, 199, 46, // Skip to: 14348
/* 2373 */    MCD::OPC_Decode, 170, 5, 208, 1, // Opcode: C_OLT_S
/* 2378 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 2397
/* 2382 */    MCD::OPC_CheckPredicate, 43, 186, 46, // Skip to: 14348
/* 2386 */    MCD::OPC_CheckField, 6, 5, 0, 180, 46, // Skip to: 14348
/* 2392 */    MCD::OPC_Decode, 185, 5, 208, 1, // Opcode: C_ULT_S
/* 2397 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 2416
/* 2401 */    MCD::OPC_CheckPredicate, 43, 167, 46, // Skip to: 14348
/* 2405 */    MCD::OPC_CheckField, 6, 5, 0, 161, 46, // Skip to: 14348
/* 2411 */    MCD::OPC_Decode, 167, 5, 208, 1, // Opcode: C_OLE_S
/* 2416 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 2435
/* 2420 */    MCD::OPC_CheckPredicate, 43, 148, 46, // Skip to: 14348
/* 2424 */    MCD::OPC_CheckField, 6, 5, 0, 142, 46, // Skip to: 14348
/* 2430 */    MCD::OPC_Decode, 182, 5, 208, 1, // Opcode: C_ULE_S
/* 2435 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 2454
/* 2439 */    MCD::OPC_CheckPredicate, 43, 129, 46, // Skip to: 14348
/* 2443 */    MCD::OPC_CheckField, 6, 5, 0, 123, 46, // Skip to: 14348
/* 2449 */    MCD::OPC_Decode, 176, 5, 208, 1, // Opcode: C_SF_S
/* 2454 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 2473
/* 2458 */    MCD::OPC_CheckPredicate, 43, 110, 46, // Skip to: 14348
/* 2462 */    MCD::OPC_CheckField, 6, 5, 0, 104, 46, // Skip to: 14348
/* 2468 */    MCD::OPC_Decode, 158, 5, 208, 1, // Opcode: C_NGLE_S
/* 2473 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 2492
/* 2477 */    MCD::OPC_CheckPredicate, 43, 91, 46, // Skip to: 14348
/* 2481 */    MCD::OPC_CheckField, 6, 5, 0, 85, 46, // Skip to: 14348
/* 2487 */    MCD::OPC_Decode, 173, 5, 208, 1, // Opcode: C_SEQ_S
/* 2492 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 2511
/* 2496 */    MCD::OPC_CheckPredicate, 43, 72, 46, // Skip to: 14348
/* 2500 */    MCD::OPC_CheckField, 6, 5, 0, 66, 46, // Skip to: 14348
/* 2506 */    MCD::OPC_Decode, 161, 5, 208, 1, // Opcode: C_NGL_S
/* 2511 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 2530
/* 2515 */    MCD::OPC_CheckPredicate, 43, 53, 46, // Skip to: 14348
/* 2519 */    MCD::OPC_CheckField, 6, 5, 0, 47, 46, // Skip to: 14348
/* 2525 */    MCD::OPC_Decode, 152, 5, 208, 1, // Opcode: C_LT_S
/* 2530 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 2549
/* 2534 */    MCD::OPC_CheckPredicate, 43, 34, 46, // Skip to: 14348
/* 2538 */    MCD::OPC_CheckField, 6, 5, 0, 28, 46, // Skip to: 14348
/* 2544 */    MCD::OPC_Decode, 155, 5, 208, 1, // Opcode: C_NGE_S
/* 2549 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 2568
/* 2553 */    MCD::OPC_CheckPredicate, 43, 15, 46, // Skip to: 14348
/* 2557 */    MCD::OPC_CheckField, 6, 5, 0, 9, 46, // Skip to: 14348
/* 2563 */    MCD::OPC_Decode, 149, 5, 208, 1, // Opcode: C_LE_S
/* 2568 */    MCD::OPC_FilterValue, 63, 0, 46, // Skip to: 14348
/* 2572 */    MCD::OPC_CheckPredicate, 43, 252, 45, // Skip to: 14348
/* 2576 */    MCD::OPC_CheckField, 6, 5, 0, 246, 45, // Skip to: 14348
/* 2582 */    MCD::OPC_Decode, 164, 5, 208, 1, // Opcode: C_NGT_S
/* 2587 */    MCD::OPC_FilterValue, 17, 115, 2, // Skip to: 3218
/* 2591 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 2594 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2607
/* 2598 */    MCD::OPC_CheckPredicate, 46, 226, 45, // Skip to: 14348
/* 2602 */    MCD::OPC_Decode, 171, 7, 209, 1, // Opcode: FADD_D32
/* 2607 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 2620
/* 2611 */    MCD::OPC_CheckPredicate, 46, 213, 45, // Skip to: 14348
/* 2615 */    MCD::OPC_Decode, 187, 8, 209, 1, // Opcode: FSUB_D32
/* 2620 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 2633
/* 2624 */    MCD::OPC_CheckPredicate, 46, 200, 45, // Skip to: 14348
/* 2628 */    MCD::OPC_Decode, 146, 8, 209, 1, // Opcode: FMUL_D32
/* 2633 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 2646
/* 2637 */    MCD::OPC_CheckPredicate, 46, 187, 45, // Skip to: 14348
/* 2641 */    MCD::OPC_Decode, 209, 7, 209, 1, // Opcode: FDIV_D32
/* 2646 */    MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 2665
/* 2650 */    MCD::OPC_CheckPredicate, 48, 174, 45, // Skip to: 14348
/* 2654 */    MCD::OPC_CheckField, 16, 5, 0, 168, 45, // Skip to: 14348
/* 2660 */    MCD::OPC_Decode, 180, 8, 210, 1, // Opcode: FSQRT_D32
/* 2665 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 2684
/* 2669 */    MCD::OPC_CheckPredicate, 46, 155, 45, // Skip to: 14348
/* 2673 */    MCD::OPC_CheckField, 16, 5, 0, 149, 45, // Skip to: 14348
/* 2679 */    MCD::OPC_Decode, 164, 7, 210, 1, // Opcode: FABS_D32
/* 2684 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 2703
/* 2688 */    MCD::OPC_CheckPredicate, 46, 136, 45, // Skip to: 14348
/* 2692 */    MCD::OPC_CheckField, 16, 5, 0, 130, 45, // Skip to: 14348
/* 2698 */    MCD::OPC_Decode, 136, 8, 210, 1, // Opcode: FMOV_D32
/* 2703 */    MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 2722
/* 2707 */    MCD::OPC_CheckPredicate, 46, 117, 45, // Skip to: 14348
/* 2711 */    MCD::OPC_CheckField, 16, 5, 0, 111, 45, // Skip to: 14348
/* 2717 */    MCD::OPC_Decode, 154, 8, 210, 1, // Opcode: FNEG_D32
/* 2722 */    MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 2741
/* 2726 */    MCD::OPC_CheckPredicate, 48, 98, 45, // Skip to: 14348
/* 2730 */    MCD::OPC_CheckField, 16, 5, 0, 92, 45, // Skip to: 14348
/* 2736 */    MCD::OPC_Decode, 188, 14, 211, 1, // Opcode: ROUND_W_D32
/* 2741 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 2760
/* 2745 */    MCD::OPC_CheckPredicate, 48, 79, 45, // Skip to: 14348
/* 2749 */    MCD::OPC_CheckField, 16, 5, 0, 73, 45, // Skip to: 14348
/* 2755 */    MCD::OPC_Decode, 254, 17, 211, 1, // Opcode: TRUNC_W_D32
/* 2760 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 2779
/* 2764 */    MCD::OPC_CheckPredicate, 48, 60, 45, // Skip to: 14348
/* 2768 */    MCD::OPC_CheckField, 16, 5, 0, 54, 45, // Skip to: 14348
/* 2774 */    MCD::OPC_Decode, 200, 3, 211, 1, // Opcode: CEIL_W_D32
/* 2779 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 2798
/* 2783 */    MCD::OPC_CheckPredicate, 48, 41, 45, // Skip to: 14348
/* 2787 */    MCD::OPC_CheckField, 16, 5, 0, 35, 45, // Skip to: 14348
/* 2793 */    MCD::OPC_Decode, 247, 7, 211, 1, // Opcode: FLOOR_W_D32
/* 2798 */    MCD::OPC_FilterValue, 17, 29, 0, // Skip to: 2831
/* 2802 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 2805 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 2818
/* 2809 */    MCD::OPC_CheckPredicate, 49, 15, 45, // Skip to: 14348
/* 2813 */    MCD::OPC_Decode, 213, 11, 212, 1, // Opcode: MOVF_D32
/* 2818 */    MCD::OPC_FilterValue, 1, 6, 45, // Skip to: 14348
/* 2822 */    MCD::OPC_CheckPredicate, 49, 2, 45, // Skip to: 14348
/* 2826 */    MCD::OPC_Decode, 233, 11, 212, 1, // Opcode: MOVT_D32
/* 2831 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 2844
/* 2835 */    MCD::OPC_CheckPredicate, 49, 245, 44, // Skip to: 14348
/* 2839 */    MCD::OPC_Decode, 245, 11, 213, 1, // Opcode: MOVZ_I_D32
/* 2844 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 2857
/* 2848 */    MCD::OPC_CheckPredicate, 49, 232, 44, // Skip to: 14348
/* 2852 */    MCD::OPC_Decode, 225, 11, 213, 1, // Opcode: MOVN_I_D32
/* 2857 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 2876
/* 2861 */    MCD::OPC_CheckPredicate, 46, 219, 44, // Skip to: 14348
/* 2865 */    MCD::OPC_CheckField, 16, 5, 0, 213, 44, // Skip to: 14348
/* 2871 */    MCD::OPC_Decode, 253, 4, 211, 1, // Opcode: CVT_S_D32
/* 2876 */    MCD::OPC_FilterValue, 36, 15, 0, // Skip to: 2895
/* 2880 */    MCD::OPC_CheckPredicate, 46, 200, 44, // Skip to: 14348
/* 2884 */    MCD::OPC_CheckField, 16, 5, 0, 194, 44, // Skip to: 14348
/* 2890 */    MCD::OPC_Decode, 134, 5, 211, 1, // Opcode: CVT_W_D32
/* 2895 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 2914
/* 2899 */    MCD::OPC_CheckPredicate, 47, 181, 44, // Skip to: 14348
/* 2903 */    MCD::OPC_CheckField, 16, 5, 0, 175, 44, // Skip to: 14348
/* 2909 */    MCD::OPC_Decode, 247, 4, 214, 1, // Opcode: CVT_L_D64
/* 2914 */    MCD::OPC_FilterValue, 48, 15, 0, // Skip to: 2933
/* 2918 */    MCD::OPC_CheckPredicate, 50, 162, 44, // Skip to: 14348
/* 2922 */    MCD::OPC_CheckField, 6, 5, 0, 156, 44, // Skip to: 14348
/* 2928 */    MCD::OPC_Decode, 144, 5, 215, 1, // Opcode: C_F_D32
/* 2933 */    MCD::OPC_FilterValue, 49, 15, 0, // Skip to: 2952
/* 2937 */    MCD::OPC_CheckPredicate, 50, 143, 44, // Skip to: 14348
/* 2941 */    MCD::OPC_CheckField, 6, 5, 0, 137, 44, // Skip to: 14348
/* 2947 */    MCD::OPC_Decode, 186, 5, 215, 1, // Opcode: C_UN_D32
/* 2952 */    MCD::OPC_FilterValue, 50, 15, 0, // Skip to: 2971
/* 2956 */    MCD::OPC_CheckPredicate, 50, 124, 44, // Skip to: 14348
/* 2960 */    MCD::OPC_CheckField, 6, 5, 0, 118, 44, // Skip to: 14348
/* 2966 */    MCD::OPC_Decode, 141, 5, 215, 1, // Opcode: C_EQ_D32
/* 2971 */    MCD::OPC_FilterValue, 51, 15, 0, // Skip to: 2990
/* 2975 */    MCD::OPC_CheckPredicate, 50, 105, 44, // Skip to: 14348
/* 2979 */    MCD::OPC_CheckField, 6, 5, 0, 99, 44, // Skip to: 14348
/* 2985 */    MCD::OPC_Decode, 177, 5, 215, 1, // Opcode: C_UEQ_D32
/* 2990 */    MCD::OPC_FilterValue, 52, 15, 0, // Skip to: 3009
/* 2994 */    MCD::OPC_CheckPredicate, 50, 86, 44, // Skip to: 14348
/* 2998 */    MCD::OPC_CheckField, 6, 5, 0, 80, 44, // Skip to: 14348
/* 3004 */    MCD::OPC_Decode, 168, 5, 215, 1, // Opcode: C_OLT_D32
/* 3009 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 3028
/* 3013 */    MCD::OPC_CheckPredicate, 50, 67, 44, // Skip to: 14348
/* 3017 */    MCD::OPC_CheckField, 6, 5, 0, 61, 44, // Skip to: 14348
/* 3023 */    MCD::OPC_Decode, 183, 5, 215, 1, // Opcode: C_ULT_D32
/* 3028 */    MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 3047
/* 3032 */    MCD::OPC_CheckPredicate, 50, 48, 44, // Skip to: 14348
/* 3036 */    MCD::OPC_CheckField, 6, 5, 0, 42, 44, // Skip to: 14348
/* 3042 */    MCD::OPC_Decode, 165, 5, 215, 1, // Opcode: C_OLE_D32
/* 3047 */    MCD::OPC_FilterValue, 55, 15, 0, // Skip to: 3066
/* 3051 */    MCD::OPC_CheckPredicate, 50, 29, 44, // Skip to: 14348
/* 3055 */    MCD::OPC_CheckField, 6, 5, 0, 23, 44, // Skip to: 14348
/* 3061 */    MCD::OPC_Decode, 180, 5, 215, 1, // Opcode: C_ULE_D32
/* 3066 */    MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 3085
/* 3070 */    MCD::OPC_CheckPredicate, 50, 10, 44, // Skip to: 14348
/* 3074 */    MCD::OPC_CheckField, 6, 5, 0, 4, 44, // Skip to: 14348
/* 3080 */    MCD::OPC_Decode, 174, 5, 215, 1, // Opcode: C_SF_D32
/* 3085 */    MCD::OPC_FilterValue, 57, 15, 0, // Skip to: 3104
/* 3089 */    MCD::OPC_CheckPredicate, 50, 247, 43, // Skip to: 14348
/* 3093 */    MCD::OPC_CheckField, 6, 5, 0, 241, 43, // Skip to: 14348
/* 3099 */    MCD::OPC_Decode, 156, 5, 215, 1, // Opcode: C_NGLE_D32
/* 3104 */    MCD::OPC_FilterValue, 58, 15, 0, // Skip to: 3123
/* 3108 */    MCD::OPC_CheckPredicate, 50, 228, 43, // Skip to: 14348
/* 3112 */    MCD::OPC_CheckField, 6, 5, 0, 222, 43, // Skip to: 14348
/* 3118 */    MCD::OPC_Decode, 171, 5, 215, 1, // Opcode: C_SEQ_D32
/* 3123 */    MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 3142
/* 3127 */    MCD::OPC_CheckPredicate, 50, 209, 43, // Skip to: 14348
/* 3131 */    MCD::OPC_CheckField, 6, 5, 0, 203, 43, // Skip to: 14348
/* 3137 */    MCD::OPC_Decode, 159, 5, 215, 1, // Opcode: C_NGL_D32
/* 3142 */    MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 3161
/* 3146 */    MCD::OPC_CheckPredicate, 50, 190, 43, // Skip to: 14348
/* 3150 */    MCD::OPC_CheckField, 6, 5, 0, 184, 43, // Skip to: 14348
/* 3156 */    MCD::OPC_Decode, 150, 5, 215, 1, // Opcode: C_LT_D32
/* 3161 */    MCD::OPC_FilterValue, 61, 15, 0, // Skip to: 3180
/* 3165 */    MCD::OPC_CheckPredicate, 50, 171, 43, // Skip to: 14348
/* 3169 */    MCD::OPC_CheckField, 6, 5, 0, 165, 43, // Skip to: 14348
/* 3175 */    MCD::OPC_Decode, 153, 5, 215, 1, // Opcode: C_NGE_D32
/* 3180 */    MCD::OPC_FilterValue, 62, 15, 0, // Skip to: 3199
/* 3184 */    MCD::OPC_CheckPredicate, 50, 152, 43, // Skip to: 14348
/* 3188 */    MCD::OPC_CheckField, 6, 5, 0, 146, 43, // Skip to: 14348
/* 3194 */    MCD::OPC_Decode, 147, 5, 215, 1, // Opcode: C_LE_D32
/* 3199 */    MCD::OPC_FilterValue, 63, 137, 43, // Skip to: 14348
/* 3203 */    MCD::OPC_CheckPredicate, 50, 133, 43, // Skip to: 14348
/* 3207 */    MCD::OPC_CheckField, 6, 5, 0, 127, 43, // Skip to: 14348
/* 3213 */    MCD::OPC_Decode, 162, 5, 215, 1, // Opcode: C_NGT_D32
/* 3218 */    MCD::OPC_FilterValue, 20, 41, 0, // Skip to: 3263
/* 3222 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3225 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3244
/* 3229 */    MCD::OPC_CheckPredicate, 40, 107, 43, // Skip to: 14348
/* 3233 */    MCD::OPC_CheckField, 16, 5, 0, 101, 43, // Skip to: 14348
/* 3239 */    MCD::OPC_Decode, 131, 5, 203, 1, // Opcode: CVT_S_W
/* 3244 */    MCD::OPC_FilterValue, 33, 92, 43, // Skip to: 14348
/* 3248 */    MCD::OPC_CheckPredicate, 46, 88, 43, // Skip to: 14348
/* 3252 */    MCD::OPC_CheckField, 16, 5, 0, 82, 43, // Skip to: 14348
/* 3258 */    MCD::OPC_Decode, 238, 4, 206, 1, // Opcode: CVT_D32_W
/* 3263 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 3276
/* 3267 */    MCD::OPC_CheckPredicate, 24, 69, 43, // Skip to: 14348
/* 3271 */    MCD::OPC_Decode, 155, 3, 201, 1, // Opcode: BZ_B
/* 3276 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 3289
/* 3280 */    MCD::OPC_CheckPredicate, 24, 56, 43, // Skip to: 14348
/* 3284 */    MCD::OPC_Decode, 157, 3, 216, 1, // Opcode: BZ_H
/* 3289 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 3302
/* 3293 */    MCD::OPC_CheckPredicate, 24, 43, 43, // Skip to: 14348
/* 3297 */    MCD::OPC_Decode, 159, 3, 217, 1, // Opcode: BZ_W
/* 3302 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 3315
/* 3306 */    MCD::OPC_CheckPredicate, 24, 30, 43, // Skip to: 14348
/* 3310 */    MCD::OPC_Decode, 156, 3, 218, 1, // Opcode: BZ_D
/* 3315 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 3328
/* 3319 */    MCD::OPC_CheckPredicate, 24, 17, 43, // Skip to: 14348
/* 3323 */    MCD::OPC_Decode, 252, 2, 201, 1, // Opcode: BNZ_B
/* 3328 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 3341
/* 3332 */    MCD::OPC_CheckPredicate, 24, 4, 43, // Skip to: 14348
/* 3336 */    MCD::OPC_Decode, 254, 2, 216, 1, // Opcode: BNZ_H
/* 3341 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 3354
/* 3345 */    MCD::OPC_CheckPredicate, 24, 247, 42, // Skip to: 14348
/* 3349 */    MCD::OPC_Decode, 128, 3, 217, 1, // Opcode: BNZ_W
/* 3354 */    MCD::OPC_FilterValue, 31, 238, 42, // Skip to: 14348
/* 3358 */    MCD::OPC_CheckPredicate, 24, 234, 42, // Skip to: 14348
/* 3362 */    MCD::OPC_Decode, 253, 2, 218, 1, // Opcode: BNZ_D
/* 3367 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 3412
/* 3371 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 3374 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3393
/* 3378 */    MCD::OPC_CheckPredicate, 20, 214, 42, // Skip to: 14348
/* 3382 */    MCD::OPC_CheckField, 3, 8, 0, 208, 42, // Skip to: 14348
/* 3388 */    MCD::OPC_Decode, 144, 11, 219, 1, // Opcode: MFC2
/* 3393 */    MCD::OPC_FilterValue, 4, 199, 42, // Skip to: 14348
/* 3397 */    MCD::OPC_CheckPredicate, 20, 195, 42, // Skip to: 14348
/* 3401 */    MCD::OPC_CheckField, 3, 8, 0, 189, 42, // Skip to: 14348
/* 3407 */    MCD::OPC_Decode, 155, 12, 220, 1, // Opcode: MTC2
/* 3412 */    MCD::OPC_FilterValue, 19, 221, 0, // Skip to: 3637
/* 3416 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3419 */    MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 3438
/* 3423 */    MCD::OPC_CheckPredicate, 51, 169, 42, // Skip to: 14348
/* 3427 */    MCD::OPC_CheckField, 11, 5, 0, 163, 42, // Skip to: 14348
/* 3433 */    MCD::OPC_Decode, 181, 10, 221, 1, // Opcode: LWXC1
/* 3438 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 3457
/* 3442 */    MCD::OPC_CheckPredicate, 52, 150, 42, // Skip to: 14348
/* 3446 */    MCD::OPC_CheckField, 11, 5, 0, 144, 42, // Skip to: 14348
/* 3452 */    MCD::OPC_Decode, 220, 9, 222, 1, // Opcode: LDXC1
/* 3457 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 3476
/* 3461 */    MCD::OPC_CheckPredicate, 53, 131, 42, // Skip to: 14348
/* 3465 */    MCD::OPC_CheckField, 11, 5, 0, 125, 42, // Skip to: 14348
/* 3471 */    MCD::OPC_Decode, 139, 10, 222, 1, // Opcode: LUXC1
/* 3476 */    MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 3495
/* 3480 */    MCD::OPC_CheckPredicate, 51, 112, 42, // Skip to: 14348
/* 3484 */    MCD::OPC_CheckField, 6, 5, 0, 106, 42, // Skip to: 14348
/* 3490 */    MCD::OPC_Decode, 155, 17, 223, 1, // Opcode: SWXC1
/* 3495 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 3514
/* 3499 */    MCD::OPC_CheckPredicate, 52, 93, 42, // Skip to: 14348
/* 3503 */    MCD::OPC_CheckField, 6, 5, 0, 87, 42, // Skip to: 14348
/* 3509 */    MCD::OPC_Decode, 248, 14, 224, 1, // Opcode: SDXC1
/* 3514 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 3533
/* 3518 */    MCD::OPC_CheckPredicate, 53, 74, 42, // Skip to: 14348
/* 3522 */    MCD::OPC_CheckField, 6, 5, 0, 68, 42, // Skip to: 14348
/* 3528 */    MCD::OPC_Decode, 249, 16, 224, 1, // Opcode: SUXC1
/* 3533 */    MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 3546
/* 3537 */    MCD::OPC_CheckPredicate, 51, 55, 42, // Skip to: 14348
/* 3541 */    MCD::OPC_Decode, 229, 10, 225, 1, // Opcode: MADD_S
/* 3546 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 3559
/* 3550 */    MCD::OPC_CheckPredicate, 54, 42, 42, // Skip to: 14348
/* 3554 */    MCD::OPC_Decode, 221, 10, 226, 1, // Opcode: MADD_D32
/* 3559 */    MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 3572
/* 3563 */    MCD::OPC_CheckPredicate, 51, 29, 42, // Skip to: 14348
/* 3567 */    MCD::OPC_Decode, 148, 12, 225, 1, // Opcode: MSUB_S
/* 3572 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 3585
/* 3576 */    MCD::OPC_CheckPredicate, 54, 16, 42, // Skip to: 14348
/* 3580 */    MCD::OPC_Decode, 140, 12, 226, 1, // Opcode: MSUB_D32
/* 3585 */    MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 3598
/* 3589 */    MCD::OPC_CheckPredicate, 51, 3, 42, // Skip to: 14348
/* 3593 */    MCD::OPC_Decode, 251, 12, 225, 1, // Opcode: NMADD_S
/* 3598 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 3611
/* 3602 */    MCD::OPC_CheckPredicate, 54, 246, 41, // Skip to: 14348
/* 3606 */    MCD::OPC_Decode, 248, 12, 226, 1, // Opcode: NMADD_D32
/* 3611 */    MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 3624
/* 3615 */    MCD::OPC_CheckPredicate, 51, 233, 41, // Skip to: 14348
/* 3619 */    MCD::OPC_Decode, 128, 13, 225, 1, // Opcode: NMSUB_S
/* 3624 */    MCD::OPC_FilterValue, 57, 224, 41, // Skip to: 14348
/* 3628 */    MCD::OPC_CheckPredicate, 54, 220, 41, // Skip to: 14348
/* 3632 */    MCD::OPC_Decode, 253, 12, 226, 1, // Opcode: NMSUB_D32
/* 3637 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 3650
/* 3641 */    MCD::OPC_CheckPredicate, 33, 207, 41, // Skip to: 14348
/* 3645 */    MCD::OPC_Decode, 248, 1, 187, 1, // Opcode: BEQL
/* 3650 */    MCD::OPC_FilterValue, 21, 96, 0, // Skip to: 3750
/* 3654 */    MCD::OPC_ExtractField, 0, 16,  // Inst{15-0} ...
/* 3657 */    MCD::OPC_FilterValue, 187, 20, 9, 0, // Skip to: 3671
/* 3662 */    MCD::OPC_CheckPredicate, 12, 75, 0, // Skip to: 3741
/* 3666 */    MCD::OPC_Decode, 184, 8, 132, 1, // Opcode: FSQRT_S_MM
/* 3671 */    MCD::OPC_FilterValue, 187, 22, 9, 0, // Skip to: 3685
/* 3676 */    MCD::OPC_CheckPredicate, 12, 61, 0, // Skip to: 3741
/* 3680 */    MCD::OPC_Decode, 252, 7, 132, 1, // Opcode: FLOOR_W_S_MM
/* 3685 */    MCD::OPC_FilterValue, 187, 54, 9, 0, // Skip to: 3699
/* 3690 */    MCD::OPC_CheckPredicate, 12, 47, 0, // Skip to: 3741
/* 3694 */    MCD::OPC_Decode, 205, 3, 132, 1, // Opcode: CEIL_W_S_MM
/* 3699 */    MCD::OPC_FilterValue, 187, 86, 9, 0, // Skip to: 3713
/* 3704 */    MCD::OPC_CheckPredicate, 12, 33, 0, // Skip to: 3741
/* 3708 */    MCD::OPC_Decode, 131, 18, 132, 1, // Opcode: TRUNC_W_S_MM
/* 3713 */    MCD::OPC_FilterValue, 187, 96, 9, 0, // Skip to: 3727
/* 3718 */    MCD::OPC_CheckPredicate, 55, 19, 0, // Skip to: 3741
/* 3722 */    MCD::OPC_Decode, 151, 11, 130, 1, // Opcode: MFHC1_MM
/* 3727 */    MCD::OPC_FilterValue, 187, 112, 9, 0, // Skip to: 3741
/* 3732 */    MCD::OPC_CheckPredicate, 55, 5, 0, // Skip to: 3741
/* 3736 */    MCD::OPC_Decode, 162, 12, 131, 1, // Opcode: MTHC1_MM
/* 3741 */    MCD::OPC_CheckPredicate, 33, 107, 41, // Skip to: 14348
/* 3745 */    MCD::OPC_Decode, 241, 2, 187, 1, // Opcode: BNEL
/* 3750 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 3769
/* 3754 */    MCD::OPC_CheckPredicate, 33, 94, 41, // Skip to: 14348
/* 3758 */    MCD::OPC_CheckField, 16, 5, 0, 88, 41, // Skip to: 14348
/* 3764 */    MCD::OPC_Decode, 200, 2, 183, 1, // Opcode: BLEZL
/* 3769 */    MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 3788
/* 3773 */    MCD::OPC_CheckPredicate, 33, 75, 41, // Skip to: 14348
/* 3777 */    MCD::OPC_CheckField, 16, 5, 0, 69, 41, // Skip to: 14348
/* 3783 */    MCD::OPC_Decode, 165, 2, 183, 1, // Opcode: BGTZL
/* 3788 */    MCD::OPC_FilterValue, 28, 236, 0, // Skip to: 4028
/* 3792 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3795 */    MCD::OPC_FilterValue, 0, 37, 0, // Skip to: 3836
/* 3799 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3802 */    MCD::OPC_FilterValue, 0, 46, 41, // Skip to: 14348
/* 3806 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3809 */    MCD::OPC_FilterValue, 0, 39, 41, // Skip to: 14348
/* 3813 */    MCD::OPC_CheckPredicate, 26, 10, 0, // Skip to: 3827
/* 3817 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3827
/* 3823 */    MCD::OPC_Decode, 206, 10, 63, // Opcode: MADD
/* 3827 */    MCD::OPC_CheckPredicate, 30, 21, 41, // Skip to: 14348
/* 3831 */    MCD::OPC_Decode, 224, 10, 227, 1, // Opcode: MADD_DSP
/* 3836 */    MCD::OPC_FilterValue, 1, 37, 0, // Skip to: 3877
/* 3840 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3843 */    MCD::OPC_FilterValue, 0, 5, 41, // Skip to: 14348
/* 3847 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3850 */    MCD::OPC_FilterValue, 0, 254, 40, // Skip to: 14348
/* 3854 */    MCD::OPC_CheckPredicate, 26, 10, 0, // Skip to: 3868
/* 3858 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3868
/* 3864 */    MCD::OPC_Decode, 213, 10, 63, // Opcode: MADDU
/* 3868 */    MCD::OPC_CheckPredicate, 30, 236, 40, // Skip to: 14348
/* 3872 */    MCD::OPC_Decode, 214, 10, 227, 1, // Opcode: MADDU_DSP
/* 3877 */    MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 3895
/* 3881 */    MCD::OPC_CheckPredicate, 26, 223, 40, // Skip to: 14348
/* 3885 */    MCD::OPC_CheckField, 6, 5, 0, 217, 40, // Skip to: 14348
/* 3891 */    MCD::OPC_Decode, 186, 12, 49, // Opcode: MUL
/* 3895 */    MCD::OPC_FilterValue, 4, 37, 0, // Skip to: 3936
/* 3899 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3902 */    MCD::OPC_FilterValue, 0, 202, 40, // Skip to: 14348
/* 3906 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3909 */    MCD::OPC_FilterValue, 0, 195, 40, // Skip to: 14348
/* 3913 */    MCD::OPC_CheckPredicate, 26, 10, 0, // Skip to: 3927
/* 3917 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3927
/* 3923 */    MCD::OPC_Decode, 253, 11, 63, // Opcode: MSUB
/* 3927 */    MCD::OPC_CheckPredicate, 30, 177, 40, // Skip to: 14348
/* 3931 */    MCD::OPC_Decode, 143, 12, 227, 1, // Opcode: MSUB_DSP
/* 3936 */    MCD::OPC_FilterValue, 5, 37, 0, // Skip to: 3977
/* 3940 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 3943 */    MCD::OPC_FilterValue, 0, 161, 40, // Skip to: 14348
/* 3947 */    MCD::OPC_ExtractField, 13, 3,  // Inst{15-13} ...
/* 3950 */    MCD::OPC_FilterValue, 0, 154, 40, // Skip to: 14348
/* 3954 */    MCD::OPC_CheckPredicate, 26, 10, 0, // Skip to: 3968
/* 3958 */    MCD::OPC_CheckField, 11, 2, 0, 4, 0, // Skip to: 3968
/* 3964 */    MCD::OPC_Decode, 132, 12, 63, // Opcode: MSUBU
/* 3968 */    MCD::OPC_CheckPredicate, 30, 136, 40, // Skip to: 14348
/* 3972 */    MCD::OPC_Decode, 133, 12, 227, 1, // Opcode: MSUBU_DSP
/* 3977 */    MCD::OPC_FilterValue, 32, 15, 0, // Skip to: 3996
/* 3981 */    MCD::OPC_CheckPredicate, 26, 123, 40, // Skip to: 14348
/* 3985 */    MCD::OPC_CheckField, 6, 5, 0, 117, 40, // Skip to: 14348
/* 3991 */    MCD::OPC_Decode, 132, 4, 228, 1, // Opcode: CLZ
/* 3996 */    MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 4015
/* 4000 */    MCD::OPC_CheckPredicate, 26, 104, 40, // Skip to: 14348
/* 4004 */    MCD::OPC_CheckField, 6, 5, 0, 98, 40, // Skip to: 14348
/* 4010 */    MCD::OPC_Decode, 240, 3, 228, 1, // Opcode: CLO
/* 4015 */    MCD::OPC_FilterValue, 63, 89, 40, // Skip to: 14348
/* 4019 */    MCD::OPC_CheckPredicate, 56, 85, 40, // Skip to: 14348
/* 4023 */    MCD::OPC_Decode, 229, 14, 174, 1, // Opcode: SDBBP
/* 4028 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 4041
/* 4032 */    MCD::OPC_CheckPredicate, 26, 72, 40, // Skip to: 14348
/* 4036 */    MCD::OPC_Decode, 158, 9, 186, 1, // Opcode: JALX
/* 4041 */    MCD::OPC_FilterValue, 30, 83, 28, // Skip to: 11296
/* 4045 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 4048 */    MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 4106
/* 4052 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4055 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4067
/* 4059 */    MCD::OPC_CheckPredicate, 24, 45, 40, // Skip to: 14348
/* 4063 */    MCD::OPC_Decode, 124, 229, 1, // Opcode: ANDI_B
/* 4067 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4080
/* 4071 */    MCD::OPC_CheckPredicate, 24, 33, 40, // Skip to: 14348
/* 4075 */    MCD::OPC_Decode, 149, 13, 229, 1, // Opcode: ORI_B
/* 4080 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4093
/* 4084 */    MCD::OPC_CheckPredicate, 24, 20, 40, // Skip to: 14348
/* 4088 */    MCD::OPC_Decode, 133, 13, 229, 1, // Opcode: NORI_B
/* 4093 */    MCD::OPC_FilterValue, 3, 11, 40, // Skip to: 14348
/* 4097 */    MCD::OPC_CheckPredicate, 24, 7, 40, // Skip to: 14348
/* 4101 */    MCD::OPC_Decode, 161, 18, 229, 1, // Opcode: XORI_B
/* 4106 */    MCD::OPC_FilterValue, 1, 42, 0, // Skip to: 4152
/* 4110 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4113 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4126
/* 4117 */    MCD::OPC_CheckPredicate, 24, 243, 39, // Skip to: 14348
/* 4121 */    MCD::OPC_Decode, 225, 2, 230, 1, // Opcode: BMNZI_B
/* 4126 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4139
/* 4130 */    MCD::OPC_CheckPredicate, 24, 230, 39, // Skip to: 14348
/* 4134 */    MCD::OPC_Decode, 227, 2, 230, 1, // Opcode: BMZI_B
/* 4139 */    MCD::OPC_FilterValue, 2, 221, 39, // Skip to: 14348
/* 4143 */    MCD::OPC_CheckPredicate, 24, 217, 39, // Skip to: 14348
/* 4147 */    MCD::OPC_Decode, 140, 3, 230, 1, // Opcode: BSELI_B
/* 4152 */    MCD::OPC_FilterValue, 2, 42, 0, // Skip to: 4198
/* 4156 */    MCD::OPC_ExtractField, 24, 2,  // Inst{25-24} ...
/* 4159 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4172
/* 4163 */    MCD::OPC_CheckPredicate, 24, 197, 39, // Skip to: 14348
/* 4167 */    MCD::OPC_Decode, 159, 15, 229, 1, // Opcode: SHF_B
/* 4172 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4185
/* 4176 */    MCD::OPC_CheckPredicate, 24, 184, 39, // Skip to: 14348
/* 4180 */    MCD::OPC_Decode, 160, 15, 231, 1, // Opcode: SHF_H
/* 4185 */    MCD::OPC_FilterValue, 2, 175, 39, // Skip to: 14348
/* 4189 */    MCD::OPC_CheckPredicate, 24, 171, 39, // Skip to: 14348
/* 4193 */    MCD::OPC_Decode, 161, 15, 232, 1, // Opcode: SHF_W
/* 4198 */    MCD::OPC_FilterValue, 6, 55, 1, // Skip to: 4513
/* 4202 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4205 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 4217
/* 4209 */    MCD::OPC_CheckPredicate, 24, 151, 39, // Skip to: 14348
/* 4213 */    MCD::OPC_Decode, 90, 233, 1, // Opcode: ADDVI_B
/* 4217 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 4229
/* 4221 */    MCD::OPC_CheckPredicate, 24, 139, 39, // Skip to: 14348
/* 4225 */    MCD::OPC_Decode, 92, 234, 1, // Opcode: ADDVI_H
/* 4229 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 4241
/* 4233 */    MCD::OPC_CheckPredicate, 24, 127, 39, // Skip to: 14348
/* 4237 */    MCD::OPC_Decode, 93, 235, 1, // Opcode: ADDVI_W
/* 4241 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 4253
/* 4245 */    MCD::OPC_CheckPredicate, 24, 115, 39, // Skip to: 14348
/* 4249 */    MCD::OPC_Decode, 91, 236, 1, // Opcode: ADDVI_D
/* 4253 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4266
/* 4257 */    MCD::OPC_CheckPredicate, 24, 103, 39, // Skip to: 14348
/* 4261 */    MCD::OPC_Decode, 237, 16, 233, 1, // Opcode: SUBVI_B
/* 4266 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 4279
/* 4270 */    MCD::OPC_CheckPredicate, 24, 90, 39, // Skip to: 14348
/* 4274 */    MCD::OPC_Decode, 239, 16, 234, 1, // Opcode: SUBVI_H
/* 4279 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 4292
/* 4283 */    MCD::OPC_CheckPredicate, 24, 77, 39, // Skip to: 14348
/* 4287 */    MCD::OPC_Decode, 240, 16, 235, 1, // Opcode: SUBVI_W
/* 4292 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 4305
/* 4296 */    MCD::OPC_CheckPredicate, 24, 64, 39, // Skip to: 14348
/* 4300 */    MCD::OPC_Decode, 238, 16, 236, 1, // Opcode: SUBVI_D
/* 4305 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4318
/* 4309 */    MCD::OPC_CheckPredicate, 24, 51, 39, // Skip to: 14348
/* 4313 */    MCD::OPC_Decode, 243, 10, 233, 1, // Opcode: MAXI_S_B
/* 4318 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4331
/* 4322 */    MCD::OPC_CheckPredicate, 24, 38, 39, // Skip to: 14348
/* 4326 */    MCD::OPC_Decode, 245, 10, 234, 1, // Opcode: MAXI_S_H
/* 4331 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4344
/* 4335 */    MCD::OPC_CheckPredicate, 24, 25, 39, // Skip to: 14348
/* 4339 */    MCD::OPC_Decode, 246, 10, 235, 1, // Opcode: MAXI_S_W
/* 4344 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4357
/* 4348 */    MCD::OPC_CheckPredicate, 24, 12, 39, // Skip to: 14348
/* 4352 */    MCD::OPC_Decode, 244, 10, 236, 1, // Opcode: MAXI_S_D
/* 4357 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4370
/* 4361 */    MCD::OPC_CheckPredicate, 24, 255, 38, // Skip to: 14348
/* 4365 */    MCD::OPC_Decode, 247, 10, 233, 1, // Opcode: MAXI_U_B
/* 4370 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4383
/* 4374 */    MCD::OPC_CheckPredicate, 24, 242, 38, // Skip to: 14348
/* 4378 */    MCD::OPC_Decode, 249, 10, 234, 1, // Opcode: MAXI_U_H
/* 4383 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4396
/* 4387 */    MCD::OPC_CheckPredicate, 24, 229, 38, // Skip to: 14348
/* 4391 */    MCD::OPC_Decode, 250, 10, 235, 1, // Opcode: MAXI_U_W
/* 4396 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4409
/* 4400 */    MCD::OPC_CheckPredicate, 24, 216, 38, // Skip to: 14348
/* 4404 */    MCD::OPC_Decode, 248, 10, 236, 1, // Opcode: MAXI_U_D
/* 4409 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4422
/* 4413 */    MCD::OPC_CheckPredicate, 24, 203, 38, // Skip to: 14348
/* 4417 */    MCD::OPC_Decode, 169, 11, 233, 1, // Opcode: MINI_S_B
/* 4422 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4435
/* 4426 */    MCD::OPC_CheckPredicate, 24, 190, 38, // Skip to: 14348
/* 4430 */    MCD::OPC_Decode, 171, 11, 234, 1, // Opcode: MINI_S_H
/* 4435 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4448
/* 4439 */    MCD::OPC_CheckPredicate, 24, 177, 38, // Skip to: 14348
/* 4443 */    MCD::OPC_Decode, 172, 11, 235, 1, // Opcode: MINI_S_W
/* 4448 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4461
/* 4452 */    MCD::OPC_CheckPredicate, 24, 164, 38, // Skip to: 14348
/* 4456 */    MCD::OPC_Decode, 170, 11, 236, 1, // Opcode: MINI_S_D
/* 4461 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4474
/* 4465 */    MCD::OPC_CheckPredicate, 24, 151, 38, // Skip to: 14348
/* 4469 */    MCD::OPC_Decode, 173, 11, 233, 1, // Opcode: MINI_U_B
/* 4474 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 4487
/* 4478 */    MCD::OPC_CheckPredicate, 24, 138, 38, // Skip to: 14348
/* 4482 */    MCD::OPC_Decode, 175, 11, 234, 1, // Opcode: MINI_U_H
/* 4487 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 4500
/* 4491 */    MCD::OPC_CheckPredicate, 24, 125, 38, // Skip to: 14348
/* 4495 */    MCD::OPC_Decode, 176, 11, 235, 1, // Opcode: MINI_U_W
/* 4500 */    MCD::OPC_FilterValue, 23, 116, 38, // Skip to: 14348
/* 4504 */    MCD::OPC_CheckPredicate, 24, 112, 38, // Skip to: 14348
/* 4508 */    MCD::OPC_Decode, 174, 11, 236, 1, // Opcode: MINI_U_D
/* 4513 */    MCD::OPC_FilterValue, 7, 59, 1, // Skip to: 4832
/* 4517 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 4520 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4533
/* 4524 */    MCD::OPC_CheckPredicate, 24, 92, 38, // Skip to: 14348
/* 4528 */    MCD::OPC_Decode, 207, 3, 233, 1, // Opcode: CEQI_B
/* 4533 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 4546
/* 4537 */    MCD::OPC_CheckPredicate, 24, 79, 38, // Skip to: 14348
/* 4541 */    MCD::OPC_Decode, 209, 3, 234, 1, // Opcode: CEQI_H
/* 4546 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4559
/* 4550 */    MCD::OPC_CheckPredicate, 24, 66, 38, // Skip to: 14348
/* 4554 */    MCD::OPC_Decode, 210, 3, 235, 1, // Opcode: CEQI_W
/* 4559 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 4572
/* 4563 */    MCD::OPC_CheckPredicate, 24, 53, 38, // Skip to: 14348
/* 4567 */    MCD::OPC_Decode, 208, 3, 236, 1, // Opcode: CEQI_D
/* 4572 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 4585
/* 4576 */    MCD::OPC_CheckPredicate, 24, 40, 38, // Skip to: 14348
/* 4580 */    MCD::OPC_Decode, 244, 3, 233, 1, // Opcode: CLTI_S_B
/* 4585 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 4598
/* 4589 */    MCD::OPC_CheckPredicate, 24, 27, 38, // Skip to: 14348
/* 4593 */    MCD::OPC_Decode, 246, 3, 234, 1, // Opcode: CLTI_S_H
/* 4598 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 4611
/* 4602 */    MCD::OPC_CheckPredicate, 24, 14, 38, // Skip to: 14348
/* 4606 */    MCD::OPC_Decode, 247, 3, 235, 1, // Opcode: CLTI_S_W
/* 4611 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 4624
/* 4615 */    MCD::OPC_CheckPredicate, 24, 1, 38, // Skip to: 14348
/* 4619 */    MCD::OPC_Decode, 245, 3, 236, 1, // Opcode: CLTI_S_D
/* 4624 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 4637
/* 4628 */    MCD::OPC_CheckPredicate, 24, 244, 37, // Skip to: 14348
/* 4632 */    MCD::OPC_Decode, 248, 3, 233, 1, // Opcode: CLTI_U_B
/* 4637 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 4650
/* 4641 */    MCD::OPC_CheckPredicate, 24, 231, 37, // Skip to: 14348
/* 4645 */    MCD::OPC_Decode, 250, 3, 234, 1, // Opcode: CLTI_U_H
/* 4650 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 4663
/* 4654 */    MCD::OPC_CheckPredicate, 24, 218, 37, // Skip to: 14348
/* 4658 */    MCD::OPC_Decode, 251, 3, 235, 1, // Opcode: CLTI_U_W
/* 4663 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 4676
/* 4667 */    MCD::OPC_CheckPredicate, 24, 205, 37, // Skip to: 14348
/* 4671 */    MCD::OPC_Decode, 249, 3, 236, 1, // Opcode: CLTI_U_D
/* 4676 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 4689
/* 4680 */    MCD::OPC_CheckPredicate, 24, 192, 37, // Skip to: 14348
/* 4684 */    MCD::OPC_Decode, 224, 3, 233, 1, // Opcode: CLEI_S_B
/* 4689 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 4702
/* 4693 */    MCD::OPC_CheckPredicate, 24, 179, 37, // Skip to: 14348
/* 4697 */    MCD::OPC_Decode, 226, 3, 234, 1, // Opcode: CLEI_S_H
/* 4702 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 4715
/* 4706 */    MCD::OPC_CheckPredicate, 24, 166, 37, // Skip to: 14348
/* 4710 */    MCD::OPC_Decode, 227, 3, 235, 1, // Opcode: CLEI_S_W
/* 4715 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 4728
/* 4719 */    MCD::OPC_CheckPredicate, 24, 153, 37, // Skip to: 14348
/* 4723 */    MCD::OPC_Decode, 225, 3, 236, 1, // Opcode: CLEI_S_D
/* 4728 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 4741
/* 4732 */    MCD::OPC_CheckPredicate, 24, 140, 37, // Skip to: 14348
/* 4736 */    MCD::OPC_Decode, 228, 3, 233, 1, // Opcode: CLEI_U_B
/* 4741 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 4754
/* 4745 */    MCD::OPC_CheckPredicate, 24, 127, 37, // Skip to: 14348
/* 4749 */    MCD::OPC_Decode, 230, 3, 234, 1, // Opcode: CLEI_U_H
/* 4754 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 4767
/* 4758 */    MCD::OPC_CheckPredicate, 24, 114, 37, // Skip to: 14348
/* 4762 */    MCD::OPC_Decode, 231, 3, 235, 1, // Opcode: CLEI_U_W
/* 4767 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 4780
/* 4771 */    MCD::OPC_CheckPredicate, 24, 101, 37, // Skip to: 14348
/* 4775 */    MCD::OPC_Decode, 229, 3, 236, 1, // Opcode: CLEI_U_D
/* 4780 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 4793
/* 4784 */    MCD::OPC_CheckPredicate, 24, 88, 37, // Skip to: 14348
/* 4788 */    MCD::OPC_Decode, 212, 9, 237, 1, // Opcode: LDI_B
/* 4793 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 4806
/* 4797 */    MCD::OPC_CheckPredicate, 24, 75, 37, // Skip to: 14348
/* 4801 */    MCD::OPC_Decode, 214, 9, 238, 1, // Opcode: LDI_H
/* 4806 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 4819
/* 4810 */    MCD::OPC_CheckPredicate, 24, 62, 37, // Skip to: 14348
/* 4814 */    MCD::OPC_Decode, 215, 9, 239, 1, // Opcode: LDI_W
/* 4819 */    MCD::OPC_FilterValue, 27, 53, 37, // Skip to: 14348
/* 4823 */    MCD::OPC_CheckPredicate, 24, 49, 37, // Skip to: 14348
/* 4827 */    MCD::OPC_Decode, 213, 9, 240, 1, // Opcode: LDI_D
/* 4832 */    MCD::OPC_FilterValue, 9, 67, 2, // Skip to: 5415
/* 4836 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 4839 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4852
/* 4843 */    MCD::OPC_CheckPredicate, 24, 29, 37, // Skip to: 14348
/* 4847 */    MCD::OPC_Decode, 226, 15, 241, 1, // Opcode: SLLI_D
/* 4852 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 4911
/* 4856 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4859 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4872
/* 4863 */    MCD::OPC_CheckPredicate, 24, 9, 37, // Skip to: 14348
/* 4867 */    MCD::OPC_Decode, 228, 15, 235, 1, // Opcode: SLLI_W
/* 4872 */    MCD::OPC_FilterValue, 1, 0, 37, // Skip to: 14348
/* 4876 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4879 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4892
/* 4883 */    MCD::OPC_CheckPredicate, 24, 245, 36, // Skip to: 14348
/* 4887 */    MCD::OPC_Decode, 227, 15, 242, 1, // Opcode: SLLI_H
/* 4892 */    MCD::OPC_FilterValue, 1, 236, 36, // Skip to: 14348
/* 4896 */    MCD::OPC_CheckPredicate, 24, 232, 36, // Skip to: 14348
/* 4900 */    MCD::OPC_CheckField, 19, 1, 0, 226, 36, // Skip to: 14348
/* 4906 */    MCD::OPC_Decode, 225, 15, 243, 1, // Opcode: SLLI_B
/* 4911 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 4924
/* 4915 */    MCD::OPC_CheckPredicate, 24, 213, 36, // Skip to: 14348
/* 4919 */    MCD::OPC_Decode, 140, 16, 241, 1, // Opcode: SRAI_D
/* 4924 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 4983
/* 4928 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 4931 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4944
/* 4935 */    MCD::OPC_CheckPredicate, 24, 193, 36, // Skip to: 14348
/* 4939 */    MCD::OPC_Decode, 142, 16, 235, 1, // Opcode: SRAI_W
/* 4944 */    MCD::OPC_FilterValue, 1, 184, 36, // Skip to: 14348
/* 4948 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 4951 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 4964
/* 4955 */    MCD::OPC_CheckPredicate, 24, 173, 36, // Skip to: 14348
/* 4959 */    MCD::OPC_Decode, 141, 16, 242, 1, // Opcode: SRAI_H
/* 4964 */    MCD::OPC_FilterValue, 1, 164, 36, // Skip to: 14348
/* 4968 */    MCD::OPC_CheckPredicate, 24, 160, 36, // Skip to: 14348
/* 4972 */    MCD::OPC_CheckField, 19, 1, 0, 154, 36, // Skip to: 14348
/* 4978 */    MCD::OPC_Decode, 139, 16, 243, 1, // Opcode: SRAI_B
/* 4983 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 4996
/* 4987 */    MCD::OPC_CheckPredicate, 24, 141, 36, // Skip to: 14348
/* 4991 */    MCD::OPC_Decode, 162, 16, 241, 1, // Opcode: SRLI_D
/* 4996 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5055
/* 5000 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5003 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5016
/* 5007 */    MCD::OPC_CheckPredicate, 24, 121, 36, // Skip to: 14348
/* 5011 */    MCD::OPC_Decode, 164, 16, 235, 1, // Opcode: SRLI_W
/* 5016 */    MCD::OPC_FilterValue, 1, 112, 36, // Skip to: 14348
/* 5020 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5023 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5036
/* 5027 */    MCD::OPC_CheckPredicate, 24, 101, 36, // Skip to: 14348
/* 5031 */    MCD::OPC_Decode, 163, 16, 242, 1, // Opcode: SRLI_H
/* 5036 */    MCD::OPC_FilterValue, 1, 92, 36, // Skip to: 14348
/* 5040 */    MCD::OPC_CheckPredicate, 24, 88, 36, // Skip to: 14348
/* 5044 */    MCD::OPC_CheckField, 19, 1, 0, 82, 36, // Skip to: 14348
/* 5050 */    MCD::OPC_Decode, 161, 16, 243, 1, // Opcode: SRLI_B
/* 5055 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5068
/* 5059 */    MCD::OPC_CheckPredicate, 24, 69, 36, // Skip to: 14348
/* 5063 */    MCD::OPC_Decode, 236, 1, 241, 1, // Opcode: BCLRI_D
/* 5068 */    MCD::OPC_FilterValue, 7, 55, 0, // Skip to: 5127
/* 5072 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5075 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5088
/* 5079 */    MCD::OPC_CheckPredicate, 24, 49, 36, // Skip to: 14348
/* 5083 */    MCD::OPC_Decode, 238, 1, 235, 1, // Opcode: BCLRI_W
/* 5088 */    MCD::OPC_FilterValue, 1, 40, 36, // Skip to: 14348
/* 5092 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5095 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5108
/* 5099 */    MCD::OPC_CheckPredicate, 24, 29, 36, // Skip to: 14348
/* 5103 */    MCD::OPC_Decode, 237, 1, 242, 1, // Opcode: BCLRI_H
/* 5108 */    MCD::OPC_FilterValue, 1, 20, 36, // Skip to: 14348
/* 5112 */    MCD::OPC_CheckPredicate, 24, 16, 36, // Skip to: 14348
/* 5116 */    MCD::OPC_CheckField, 19, 1, 0, 10, 36, // Skip to: 14348
/* 5122 */    MCD::OPC_Decode, 235, 1, 243, 1, // Opcode: BCLRI_B
/* 5127 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5140
/* 5131 */    MCD::OPC_CheckPredicate, 24, 253, 35, // Skip to: 14348
/* 5135 */    MCD::OPC_Decode, 148, 3, 241, 1, // Opcode: BSETI_D
/* 5140 */    MCD::OPC_FilterValue, 9, 55, 0, // Skip to: 5199
/* 5144 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5147 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5160
/* 5151 */    MCD::OPC_CheckPredicate, 24, 233, 35, // Skip to: 14348
/* 5155 */    MCD::OPC_Decode, 150, 3, 235, 1, // Opcode: BSETI_W
/* 5160 */    MCD::OPC_FilterValue, 1, 224, 35, // Skip to: 14348
/* 5164 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5167 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5180
/* 5171 */    MCD::OPC_CheckPredicate, 24, 213, 35, // Skip to: 14348
/* 5175 */    MCD::OPC_Decode, 149, 3, 242, 1, // Opcode: BSETI_H
/* 5180 */    MCD::OPC_FilterValue, 1, 204, 35, // Skip to: 14348
/* 5184 */    MCD::OPC_CheckPredicate, 24, 200, 35, // Skip to: 14348
/* 5188 */    MCD::OPC_CheckField, 19, 1, 0, 194, 35, // Skip to: 14348
/* 5194 */    MCD::OPC_Decode, 147, 3, 243, 1, // Opcode: BSETI_B
/* 5199 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5212
/* 5203 */    MCD::OPC_CheckPredicate, 24, 181, 35, // Skip to: 14348
/* 5207 */    MCD::OPC_Decode, 234, 2, 241, 1, // Opcode: BNEGI_D
/* 5212 */    MCD::OPC_FilterValue, 11, 55, 0, // Skip to: 5271
/* 5216 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5219 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5232
/* 5223 */    MCD::OPC_CheckPredicate, 24, 161, 35, // Skip to: 14348
/* 5227 */    MCD::OPC_Decode, 236, 2, 235, 1, // Opcode: BNEGI_W
/* 5232 */    MCD::OPC_FilterValue, 1, 152, 35, // Skip to: 14348
/* 5236 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5239 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5252
/* 5243 */    MCD::OPC_CheckPredicate, 24, 141, 35, // Skip to: 14348
/* 5247 */    MCD::OPC_Decode, 235, 2, 242, 1, // Opcode: BNEGI_H
/* 5252 */    MCD::OPC_FilterValue, 1, 132, 35, // Skip to: 14348
/* 5256 */    MCD::OPC_CheckPredicate, 24, 128, 35, // Skip to: 14348
/* 5260 */    MCD::OPC_CheckField, 19, 1, 0, 122, 35, // Skip to: 14348
/* 5266 */    MCD::OPC_Decode, 233, 2, 243, 1, // Opcode: BNEGI_B
/* 5271 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5284
/* 5275 */    MCD::OPC_CheckPredicate, 24, 109, 35, // Skip to: 14348
/* 5279 */    MCD::OPC_Decode, 168, 2, 244, 1, // Opcode: BINSLI_D
/* 5284 */    MCD::OPC_FilterValue, 13, 55, 0, // Skip to: 5343
/* 5288 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5291 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5304
/* 5295 */    MCD::OPC_CheckPredicate, 24, 89, 35, // Skip to: 14348
/* 5299 */    MCD::OPC_Decode, 170, 2, 245, 1, // Opcode: BINSLI_W
/* 5304 */    MCD::OPC_FilterValue, 1, 80, 35, // Skip to: 14348
/* 5308 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5311 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5324
/* 5315 */    MCD::OPC_CheckPredicate, 24, 69, 35, // Skip to: 14348
/* 5319 */    MCD::OPC_Decode, 169, 2, 246, 1, // Opcode: BINSLI_H
/* 5324 */    MCD::OPC_FilterValue, 1, 60, 35, // Skip to: 14348
/* 5328 */    MCD::OPC_CheckPredicate, 24, 56, 35, // Skip to: 14348
/* 5332 */    MCD::OPC_CheckField, 19, 1, 0, 50, 35, // Skip to: 14348
/* 5338 */    MCD::OPC_Decode, 167, 2, 247, 1, // Opcode: BINSLI_B
/* 5343 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5356
/* 5347 */    MCD::OPC_CheckPredicate, 24, 37, 35, // Skip to: 14348
/* 5351 */    MCD::OPC_Decode, 176, 2, 244, 1, // Opcode: BINSRI_D
/* 5356 */    MCD::OPC_FilterValue, 15, 28, 35, // Skip to: 14348
/* 5360 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5363 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5376
/* 5367 */    MCD::OPC_CheckPredicate, 24, 17, 35, // Skip to: 14348
/* 5371 */    MCD::OPC_Decode, 178, 2, 245, 1, // Opcode: BINSRI_W
/* 5376 */    MCD::OPC_FilterValue, 1, 8, 35, // Skip to: 14348
/* 5380 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5383 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5396
/* 5387 */    MCD::OPC_CheckPredicate, 24, 253, 34, // Skip to: 14348
/* 5391 */    MCD::OPC_Decode, 177, 2, 246, 1, // Opcode: BINSRI_H
/* 5396 */    MCD::OPC_FilterValue, 1, 244, 34, // Skip to: 14348
/* 5400 */    MCD::OPC_CheckPredicate, 24, 240, 34, // Skip to: 14348
/* 5404 */    MCD::OPC_CheckField, 19, 1, 0, 234, 34, // Skip to: 14348
/* 5410 */    MCD::OPC_Decode, 175, 2, 247, 1, // Opcode: BINSRI_B
/* 5415 */    MCD::OPC_FilterValue, 10, 35, 1, // Skip to: 5710
/* 5419 */    MCD::OPC_ExtractField, 22, 4,  // Inst{25-22} ...
/* 5422 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5435
/* 5426 */    MCD::OPC_CheckPredicate, 24, 214, 34, // Skip to: 14348
/* 5430 */    MCD::OPC_Decode, 202, 14, 241, 1, // Opcode: SAT_S_D
/* 5435 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 5494
/* 5439 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5442 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5455
/* 5446 */    MCD::OPC_CheckPredicate, 24, 194, 34, // Skip to: 14348
/* 5450 */    MCD::OPC_Decode, 204, 14, 235, 1, // Opcode: SAT_S_W
/* 5455 */    MCD::OPC_FilterValue, 1, 185, 34, // Skip to: 14348
/* 5459 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5462 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5475
/* 5466 */    MCD::OPC_CheckPredicate, 24, 174, 34, // Skip to: 14348
/* 5470 */    MCD::OPC_Decode, 203, 14, 242, 1, // Opcode: SAT_S_H
/* 5475 */    MCD::OPC_FilterValue, 1, 165, 34, // Skip to: 14348
/* 5479 */    MCD::OPC_CheckPredicate, 24, 161, 34, // Skip to: 14348
/* 5483 */    MCD::OPC_CheckField, 19, 1, 0, 155, 34, // Skip to: 14348
/* 5489 */    MCD::OPC_Decode, 201, 14, 243, 1, // Opcode: SAT_S_B
/* 5494 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5507
/* 5498 */    MCD::OPC_CheckPredicate, 24, 142, 34, // Skip to: 14348
/* 5502 */    MCD::OPC_Decode, 206, 14, 241, 1, // Opcode: SAT_U_D
/* 5507 */    MCD::OPC_FilterValue, 3, 55, 0, // Skip to: 5566
/* 5511 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5514 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5527
/* 5518 */    MCD::OPC_CheckPredicate, 24, 122, 34, // Skip to: 14348
/* 5522 */    MCD::OPC_Decode, 208, 14, 235, 1, // Opcode: SAT_U_W
/* 5527 */    MCD::OPC_FilterValue, 1, 113, 34, // Skip to: 14348
/* 5531 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5534 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5547
/* 5538 */    MCD::OPC_CheckPredicate, 24, 102, 34, // Skip to: 14348
/* 5542 */    MCD::OPC_Decode, 207, 14, 242, 1, // Opcode: SAT_U_H
/* 5547 */    MCD::OPC_FilterValue, 1, 93, 34, // Skip to: 14348
/* 5551 */    MCD::OPC_CheckPredicate, 24, 89, 34, // Skip to: 14348
/* 5555 */    MCD::OPC_CheckField, 19, 1, 0, 83, 34, // Skip to: 14348
/* 5561 */    MCD::OPC_Decode, 205, 14, 243, 1, // Opcode: SAT_U_B
/* 5566 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5579
/* 5570 */    MCD::OPC_CheckPredicate, 24, 70, 34, // Skip to: 14348
/* 5574 */    MCD::OPC_Decode, 144, 16, 241, 1, // Opcode: SRARI_D
/* 5579 */    MCD::OPC_FilterValue, 5, 55, 0, // Skip to: 5638
/* 5583 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5586 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5599
/* 5590 */    MCD::OPC_CheckPredicate, 24, 50, 34, // Skip to: 14348
/* 5594 */    MCD::OPC_Decode, 146, 16, 235, 1, // Opcode: SRARI_W
/* 5599 */    MCD::OPC_FilterValue, 1, 41, 34, // Skip to: 14348
/* 5603 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5606 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5619
/* 5610 */    MCD::OPC_CheckPredicate, 24, 30, 34, // Skip to: 14348
/* 5614 */    MCD::OPC_Decode, 145, 16, 242, 1, // Opcode: SRARI_H
/* 5619 */    MCD::OPC_FilterValue, 1, 21, 34, // Skip to: 14348
/* 5623 */    MCD::OPC_CheckPredicate, 24, 17, 34, // Skip to: 14348
/* 5627 */    MCD::OPC_CheckField, 19, 1, 0, 11, 34, // Skip to: 14348
/* 5633 */    MCD::OPC_Decode, 143, 16, 243, 1, // Opcode: SRARI_B
/* 5638 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5651
/* 5642 */    MCD::OPC_CheckPredicate, 24, 254, 33, // Skip to: 14348
/* 5646 */    MCD::OPC_Decode, 166, 16, 241, 1, // Opcode: SRLRI_D
/* 5651 */    MCD::OPC_FilterValue, 7, 245, 33, // Skip to: 14348
/* 5655 */    MCD::OPC_ExtractField, 21, 1,  // Inst{21} ...
/* 5658 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5671
/* 5662 */    MCD::OPC_CheckPredicate, 24, 234, 33, // Skip to: 14348
/* 5666 */    MCD::OPC_Decode, 168, 16, 235, 1, // Opcode: SRLRI_W
/* 5671 */    MCD::OPC_FilterValue, 1, 225, 33, // Skip to: 14348
/* 5675 */    MCD::OPC_ExtractField, 20, 1,  // Inst{20} ...
/* 5678 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5691
/* 5682 */    MCD::OPC_CheckPredicate, 24, 214, 33, // Skip to: 14348
/* 5686 */    MCD::OPC_Decode, 167, 16, 242, 1, // Opcode: SRLRI_H
/* 5691 */    MCD::OPC_FilterValue, 1, 205, 33, // Skip to: 14348
/* 5695 */    MCD::OPC_CheckPredicate, 24, 201, 33, // Skip to: 14348
/* 5699 */    MCD::OPC_CheckField, 19, 1, 0, 195, 33, // Skip to: 14348
/* 5705 */    MCD::OPC_Decode, 165, 16, 243, 1, // Opcode: SRLRI_B
/* 5710 */    MCD::OPC_FilterValue, 13, 163, 1, // Skip to: 6133
/* 5714 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 5717 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 5730
/* 5721 */    MCD::OPC_CheckPredicate, 24, 175, 33, // Skip to: 14348
/* 5725 */    MCD::OPC_Decode, 231, 15, 248, 1, // Opcode: SLL_B
/* 5730 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 5743
/* 5734 */    MCD::OPC_CheckPredicate, 24, 162, 33, // Skip to: 14348
/* 5738 */    MCD::OPC_Decode, 233, 15, 249, 1, // Opcode: SLL_H
/* 5743 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 5756
/* 5747 */    MCD::OPC_CheckPredicate, 24, 149, 33, // Skip to: 14348
/* 5751 */    MCD::OPC_Decode, 236, 15, 250, 1, // Opcode: SLL_W
/* 5756 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 5769
/* 5760 */    MCD::OPC_CheckPredicate, 24, 136, 33, // Skip to: 14348
/* 5764 */    MCD::OPC_Decode, 232, 15, 251, 1, // Opcode: SLL_D
/* 5769 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 5782
/* 5773 */    MCD::OPC_CheckPredicate, 24, 123, 33, // Skip to: 14348
/* 5777 */    MCD::OPC_Decode, 153, 16, 248, 1, // Opcode: SRA_B
/* 5782 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 5795
/* 5786 */    MCD::OPC_CheckPredicate, 24, 110, 33, // Skip to: 14348
/* 5790 */    MCD::OPC_Decode, 155, 16, 249, 1, // Opcode: SRA_H
/* 5795 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 5808
/* 5799 */    MCD::OPC_CheckPredicate, 24, 97, 33, // Skip to: 14348
/* 5803 */    MCD::OPC_Decode, 157, 16, 250, 1, // Opcode: SRA_W
/* 5808 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 5821
/* 5812 */    MCD::OPC_CheckPredicate, 24, 84, 33, // Skip to: 14348
/* 5816 */    MCD::OPC_Decode, 154, 16, 251, 1, // Opcode: SRA_D
/* 5821 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 5834
/* 5825 */    MCD::OPC_CheckPredicate, 24, 71, 33, // Skip to: 14348
/* 5829 */    MCD::OPC_Decode, 175, 16, 248, 1, // Opcode: SRL_B
/* 5834 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 5847
/* 5838 */    MCD::OPC_CheckPredicate, 24, 58, 33, // Skip to: 14348
/* 5842 */    MCD::OPC_Decode, 177, 16, 249, 1, // Opcode: SRL_H
/* 5847 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 5860
/* 5851 */    MCD::OPC_CheckPredicate, 24, 45, 33, // Skip to: 14348
/* 5855 */    MCD::OPC_Decode, 179, 16, 250, 1, // Opcode: SRL_W
/* 5860 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 5873
/* 5864 */    MCD::OPC_CheckPredicate, 24, 32, 33, // Skip to: 14348
/* 5868 */    MCD::OPC_Decode, 176, 16, 251, 1, // Opcode: SRL_D
/* 5873 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 5886
/* 5877 */    MCD::OPC_CheckPredicate, 24, 19, 33, // Skip to: 14348
/* 5881 */    MCD::OPC_Decode, 239, 1, 248, 1, // Opcode: BCLR_B
/* 5886 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 5899
/* 5890 */    MCD::OPC_CheckPredicate, 24, 6, 33, // Skip to: 14348
/* 5894 */    MCD::OPC_Decode, 241, 1, 249, 1, // Opcode: BCLR_H
/* 5899 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 5912
/* 5903 */    MCD::OPC_CheckPredicate, 24, 249, 32, // Skip to: 14348
/* 5907 */    MCD::OPC_Decode, 242, 1, 250, 1, // Opcode: BCLR_W
/* 5912 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 5925
/* 5916 */    MCD::OPC_CheckPredicate, 24, 236, 32, // Skip to: 14348
/* 5920 */    MCD::OPC_Decode, 240, 1, 251, 1, // Opcode: BCLR_D
/* 5925 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 5938
/* 5929 */    MCD::OPC_CheckPredicate, 24, 223, 32, // Skip to: 14348
/* 5933 */    MCD::OPC_Decode, 151, 3, 248, 1, // Opcode: BSET_B
/* 5938 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 5951
/* 5942 */    MCD::OPC_CheckPredicate, 24, 210, 32, // Skip to: 14348
/* 5946 */    MCD::OPC_Decode, 153, 3, 249, 1, // Opcode: BSET_H
/* 5951 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 5964
/* 5955 */    MCD::OPC_CheckPredicate, 24, 197, 32, // Skip to: 14348
/* 5959 */    MCD::OPC_Decode, 154, 3, 250, 1, // Opcode: BSET_W
/* 5964 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 5977
/* 5968 */    MCD::OPC_CheckPredicate, 24, 184, 32, // Skip to: 14348
/* 5972 */    MCD::OPC_Decode, 152, 3, 251, 1, // Opcode: BSET_D
/* 5977 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 5990
/* 5981 */    MCD::OPC_CheckPredicate, 24, 171, 32, // Skip to: 14348
/* 5985 */    MCD::OPC_Decode, 237, 2, 248, 1, // Opcode: BNEG_B
/* 5990 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6003
/* 5994 */    MCD::OPC_CheckPredicate, 24, 158, 32, // Skip to: 14348
/* 5998 */    MCD::OPC_Decode, 239, 2, 249, 1, // Opcode: BNEG_H
/* 6003 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6016
/* 6007 */    MCD::OPC_CheckPredicate, 24, 145, 32, // Skip to: 14348
/* 6011 */    MCD::OPC_Decode, 240, 2, 250, 1, // Opcode: BNEG_W
/* 6016 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6029
/* 6020 */    MCD::OPC_CheckPredicate, 24, 132, 32, // Skip to: 14348
/* 6024 */    MCD::OPC_Decode, 238, 2, 251, 1, // Opcode: BNEG_D
/* 6029 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6042
/* 6033 */    MCD::OPC_CheckPredicate, 24, 119, 32, // Skip to: 14348
/* 6037 */    MCD::OPC_Decode, 171, 2, 252, 1, // Opcode: BINSL_B
/* 6042 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6055
/* 6046 */    MCD::OPC_CheckPredicate, 24, 106, 32, // Skip to: 14348
/* 6050 */    MCD::OPC_Decode, 173, 2, 253, 1, // Opcode: BINSL_H
/* 6055 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6068
/* 6059 */    MCD::OPC_CheckPredicate, 24, 93, 32, // Skip to: 14348
/* 6063 */    MCD::OPC_Decode, 174, 2, 254, 1, // Opcode: BINSL_W
/* 6068 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6081
/* 6072 */    MCD::OPC_CheckPredicate, 24, 80, 32, // Skip to: 14348
/* 6076 */    MCD::OPC_Decode, 172, 2, 255, 1, // Opcode: BINSL_D
/* 6081 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6094
/* 6085 */    MCD::OPC_CheckPredicate, 24, 67, 32, // Skip to: 14348
/* 6089 */    MCD::OPC_Decode, 179, 2, 252, 1, // Opcode: BINSR_B
/* 6094 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6107
/* 6098 */    MCD::OPC_CheckPredicate, 24, 54, 32, // Skip to: 14348
/* 6102 */    MCD::OPC_Decode, 181, 2, 253, 1, // Opcode: BINSR_H
/* 6107 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6120
/* 6111 */    MCD::OPC_CheckPredicate, 24, 41, 32, // Skip to: 14348
/* 6115 */    MCD::OPC_Decode, 182, 2, 254, 1, // Opcode: BINSR_W
/* 6120 */    MCD::OPC_FilterValue, 31, 32, 32, // Skip to: 14348
/* 6124 */    MCD::OPC_CheckPredicate, 24, 28, 32, // Skip to: 14348
/* 6128 */    MCD::OPC_Decode, 180, 2, 255, 1, // Opcode: BINSR_D
/* 6133 */    MCD::OPC_FilterValue, 14, 159, 1, // Skip to: 6552
/* 6137 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6140 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6152
/* 6144 */    MCD::OPC_CheckPredicate, 24, 8, 32, // Skip to: 14348
/* 6148 */    MCD::OPC_Decode, 94, 248, 1, // Opcode: ADDV_B
/* 6152 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6164
/* 6156 */    MCD::OPC_CheckPredicate, 24, 252, 31, // Skip to: 14348
/* 6160 */    MCD::OPC_Decode, 96, 249, 1, // Opcode: ADDV_H
/* 6164 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6176
/* 6168 */    MCD::OPC_CheckPredicate, 24, 240, 31, // Skip to: 14348
/* 6172 */    MCD::OPC_Decode, 97, 250, 1, // Opcode: ADDV_W
/* 6176 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6188
/* 6180 */    MCD::OPC_CheckPredicate, 24, 228, 31, // Skip to: 14348
/* 6184 */    MCD::OPC_Decode, 95, 251, 1, // Opcode: ADDV_D
/* 6188 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 6201
/* 6192 */    MCD::OPC_CheckPredicate, 24, 216, 31, // Skip to: 14348
/* 6196 */    MCD::OPC_Decode, 241, 16, 248, 1, // Opcode: SUBV_B
/* 6201 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 6214
/* 6205 */    MCD::OPC_CheckPredicate, 24, 203, 31, // Skip to: 14348
/* 6209 */    MCD::OPC_Decode, 243, 16, 249, 1, // Opcode: SUBV_H
/* 6214 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 6227
/* 6218 */    MCD::OPC_CheckPredicate, 24, 190, 31, // Skip to: 14348
/* 6222 */    MCD::OPC_Decode, 244, 16, 250, 1, // Opcode: SUBV_W
/* 6227 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 6240
/* 6231 */    MCD::OPC_CheckPredicate, 24, 177, 31, // Skip to: 14348
/* 6235 */    MCD::OPC_Decode, 242, 16, 251, 1, // Opcode: SUBV_D
/* 6240 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6253
/* 6244 */    MCD::OPC_CheckPredicate, 24, 164, 31, // Skip to: 14348
/* 6248 */    MCD::OPC_Decode, 130, 11, 248, 1, // Opcode: MAX_S_B
/* 6253 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6266
/* 6257 */    MCD::OPC_CheckPredicate, 24, 151, 31, // Skip to: 14348
/* 6261 */    MCD::OPC_Decode, 132, 11, 249, 1, // Opcode: MAX_S_H
/* 6266 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6279
/* 6270 */    MCD::OPC_CheckPredicate, 24, 138, 31, // Skip to: 14348
/* 6274 */    MCD::OPC_Decode, 134, 11, 250, 1, // Opcode: MAX_S_W
/* 6279 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6292
/* 6283 */    MCD::OPC_CheckPredicate, 24, 125, 31, // Skip to: 14348
/* 6287 */    MCD::OPC_Decode, 131, 11, 251, 1, // Opcode: MAX_S_D
/* 6292 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6305
/* 6296 */    MCD::OPC_CheckPredicate, 24, 112, 31, // Skip to: 14348
/* 6300 */    MCD::OPC_Decode, 135, 11, 248, 1, // Opcode: MAX_U_B
/* 6305 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6318
/* 6309 */    MCD::OPC_CheckPredicate, 24, 99, 31, // Skip to: 14348
/* 6313 */    MCD::OPC_Decode, 137, 11, 249, 1, // Opcode: MAX_U_H
/* 6318 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6331
/* 6322 */    MCD::OPC_CheckPredicate, 24, 86, 31, // Skip to: 14348
/* 6326 */    MCD::OPC_Decode, 138, 11, 250, 1, // Opcode: MAX_U_W
/* 6331 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6344
/* 6335 */    MCD::OPC_CheckPredicate, 24, 73, 31, // Skip to: 14348
/* 6339 */    MCD::OPC_Decode, 136, 11, 251, 1, // Opcode: MAX_U_D
/* 6344 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6357
/* 6348 */    MCD::OPC_CheckPredicate, 24, 60, 31, // Skip to: 14348
/* 6352 */    MCD::OPC_Decode, 184, 11, 248, 1, // Opcode: MIN_S_B
/* 6357 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6370
/* 6361 */    MCD::OPC_CheckPredicate, 24, 47, 31, // Skip to: 14348
/* 6365 */    MCD::OPC_Decode, 186, 11, 249, 1, // Opcode: MIN_S_H
/* 6370 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6383
/* 6374 */    MCD::OPC_CheckPredicate, 24, 34, 31, // Skip to: 14348
/* 6378 */    MCD::OPC_Decode, 188, 11, 250, 1, // Opcode: MIN_S_W
/* 6383 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6396
/* 6387 */    MCD::OPC_CheckPredicate, 24, 21, 31, // Skip to: 14348
/* 6391 */    MCD::OPC_Decode, 185, 11, 251, 1, // Opcode: MIN_S_D
/* 6396 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6409
/* 6400 */    MCD::OPC_CheckPredicate, 24, 8, 31, // Skip to: 14348
/* 6404 */    MCD::OPC_Decode, 189, 11, 248, 1, // Opcode: MIN_U_B
/* 6409 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6422
/* 6413 */    MCD::OPC_CheckPredicate, 24, 251, 30, // Skip to: 14348
/* 6417 */    MCD::OPC_Decode, 191, 11, 249, 1, // Opcode: MIN_U_H
/* 6422 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6435
/* 6426 */    MCD::OPC_CheckPredicate, 24, 238, 30, // Skip to: 14348
/* 6430 */    MCD::OPC_Decode, 192, 11, 250, 1, // Opcode: MIN_U_W
/* 6435 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 6448
/* 6439 */    MCD::OPC_CheckPredicate, 24, 225, 30, // Skip to: 14348
/* 6443 */    MCD::OPC_Decode, 190, 11, 251, 1, // Opcode: MIN_U_D
/* 6448 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 6461
/* 6452 */    MCD::OPC_CheckPredicate, 24, 212, 30, // Skip to: 14348
/* 6456 */    MCD::OPC_Decode, 251, 10, 248, 1, // Opcode: MAX_A_B
/* 6461 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 6474
/* 6465 */    MCD::OPC_CheckPredicate, 24, 199, 30, // Skip to: 14348
/* 6469 */    MCD::OPC_Decode, 253, 10, 249, 1, // Opcode: MAX_A_H
/* 6474 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 6487
/* 6478 */    MCD::OPC_CheckPredicate, 24, 186, 30, // Skip to: 14348
/* 6482 */    MCD::OPC_Decode, 254, 10, 250, 1, // Opcode: MAX_A_W
/* 6487 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 6500
/* 6491 */    MCD::OPC_CheckPredicate, 24, 173, 30, // Skip to: 14348
/* 6495 */    MCD::OPC_Decode, 252, 10, 251, 1, // Opcode: MAX_A_D
/* 6500 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 6513
/* 6504 */    MCD::OPC_CheckPredicate, 24, 160, 30, // Skip to: 14348
/* 6508 */    MCD::OPC_Decode, 177, 11, 248, 1, // Opcode: MIN_A_B
/* 6513 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 6526
/* 6517 */    MCD::OPC_CheckPredicate, 24, 147, 30, // Skip to: 14348
/* 6521 */    MCD::OPC_Decode, 179, 11, 249, 1, // Opcode: MIN_A_H
/* 6526 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 6539
/* 6530 */    MCD::OPC_CheckPredicate, 24, 134, 30, // Skip to: 14348
/* 6534 */    MCD::OPC_Decode, 180, 11, 250, 1, // Opcode: MIN_A_W
/* 6539 */    MCD::OPC_FilterValue, 31, 125, 30, // Skip to: 14348
/* 6543 */    MCD::OPC_CheckPredicate, 24, 121, 30, // Skip to: 14348
/* 6547 */    MCD::OPC_Decode, 178, 11, 251, 1, // Opcode: MIN_A_D
/* 6552 */    MCD::OPC_FilterValue, 15, 7, 1, // Skip to: 6819
/* 6556 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6559 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 6572
/* 6563 */    MCD::OPC_CheckPredicate, 24, 101, 30, // Skip to: 14348
/* 6567 */    MCD::OPC_Decode, 211, 3, 248, 1, // Opcode: CEQ_B
/* 6572 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 6585
/* 6576 */    MCD::OPC_CheckPredicate, 24, 88, 30, // Skip to: 14348
/* 6580 */    MCD::OPC_Decode, 213, 3, 249, 1, // Opcode: CEQ_H
/* 6585 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 6598
/* 6589 */    MCD::OPC_CheckPredicate, 24, 75, 30, // Skip to: 14348
/* 6593 */    MCD::OPC_Decode, 214, 3, 250, 1, // Opcode: CEQ_W
/* 6598 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 6611
/* 6602 */    MCD::OPC_CheckPredicate, 24, 62, 30, // Skip to: 14348
/* 6606 */    MCD::OPC_Decode, 212, 3, 251, 1, // Opcode: CEQ_D
/* 6611 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 6624
/* 6615 */    MCD::OPC_CheckPredicate, 24, 49, 30, // Skip to: 14348
/* 6619 */    MCD::OPC_Decode, 252, 3, 248, 1, // Opcode: CLT_S_B
/* 6624 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 6637
/* 6628 */    MCD::OPC_CheckPredicate, 24, 36, 30, // Skip to: 14348
/* 6632 */    MCD::OPC_Decode, 254, 3, 249, 1, // Opcode: CLT_S_H
/* 6637 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 6650
/* 6641 */    MCD::OPC_CheckPredicate, 24, 23, 30, // Skip to: 14348
/* 6645 */    MCD::OPC_Decode, 255, 3, 250, 1, // Opcode: CLT_S_W
/* 6650 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 6663
/* 6654 */    MCD::OPC_CheckPredicate, 24, 10, 30, // Skip to: 14348
/* 6658 */    MCD::OPC_Decode, 253, 3, 251, 1, // Opcode: CLT_S_D
/* 6663 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 6676
/* 6667 */    MCD::OPC_CheckPredicate, 24, 253, 29, // Skip to: 14348
/* 6671 */    MCD::OPC_Decode, 128, 4, 248, 1, // Opcode: CLT_U_B
/* 6676 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 6689
/* 6680 */    MCD::OPC_CheckPredicate, 24, 240, 29, // Skip to: 14348
/* 6684 */    MCD::OPC_Decode, 130, 4, 249, 1, // Opcode: CLT_U_H
/* 6689 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 6702
/* 6693 */    MCD::OPC_CheckPredicate, 24, 227, 29, // Skip to: 14348
/* 6697 */    MCD::OPC_Decode, 131, 4, 250, 1, // Opcode: CLT_U_W
/* 6702 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 6715
/* 6706 */    MCD::OPC_CheckPredicate, 24, 214, 29, // Skip to: 14348
/* 6710 */    MCD::OPC_Decode, 129, 4, 251, 1, // Opcode: CLT_U_D
/* 6715 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 6728
/* 6719 */    MCD::OPC_CheckPredicate, 24, 201, 29, // Skip to: 14348
/* 6723 */    MCD::OPC_Decode, 232, 3, 248, 1, // Opcode: CLE_S_B
/* 6728 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 6741
/* 6732 */    MCD::OPC_CheckPredicate, 24, 188, 29, // Skip to: 14348
/* 6736 */    MCD::OPC_Decode, 234, 3, 249, 1, // Opcode: CLE_S_H
/* 6741 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 6754
/* 6745 */    MCD::OPC_CheckPredicate, 24, 175, 29, // Skip to: 14348
/* 6749 */    MCD::OPC_Decode, 235, 3, 250, 1, // Opcode: CLE_S_W
/* 6754 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 6767
/* 6758 */    MCD::OPC_CheckPredicate, 24, 162, 29, // Skip to: 14348
/* 6762 */    MCD::OPC_Decode, 233, 3, 251, 1, // Opcode: CLE_S_D
/* 6767 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 6780
/* 6771 */    MCD::OPC_CheckPredicate, 24, 149, 29, // Skip to: 14348
/* 6775 */    MCD::OPC_Decode, 236, 3, 248, 1, // Opcode: CLE_U_B
/* 6780 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 6793
/* 6784 */    MCD::OPC_CheckPredicate, 24, 136, 29, // Skip to: 14348
/* 6788 */    MCD::OPC_Decode, 238, 3, 249, 1, // Opcode: CLE_U_H
/* 6793 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 6806
/* 6797 */    MCD::OPC_CheckPredicate, 24, 123, 29, // Skip to: 14348
/* 6801 */    MCD::OPC_Decode, 239, 3, 250, 1, // Opcode: CLE_U_W
/* 6806 */    MCD::OPC_FilterValue, 23, 114, 29, // Skip to: 14348
/* 6810 */    MCD::OPC_CheckPredicate, 24, 110, 29, // Skip to: 14348
/* 6814 */    MCD::OPC_Decode, 237, 3, 251, 1, // Opcode: CLE_U_D
/* 6819 */    MCD::OPC_FilterValue, 16, 147, 1, // Skip to: 7226
/* 6823 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 6826 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 6838
/* 6830 */    MCD::OPC_CheckPredicate, 24, 90, 29, // Skip to: 14348
/* 6834 */    MCD::OPC_Decode, 100, 248, 1, // Opcode: ADD_A_B
/* 6838 */    MCD::OPC_FilterValue, 1, 8, 0, // Skip to: 6850
/* 6842 */    MCD::OPC_CheckPredicate, 24, 78, 29, // Skip to: 14348
/* 6846 */    MCD::OPC_Decode, 102, 249, 1, // Opcode: ADD_A_H
/* 6850 */    MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 6862
/* 6854 */    MCD::OPC_CheckPredicate, 24, 66, 29, // Skip to: 14348
/* 6858 */    MCD::OPC_Decode, 103, 250, 1, // Opcode: ADD_A_W
/* 6862 */    MCD::OPC_FilterValue, 3, 8, 0, // Skip to: 6874
/* 6866 */    MCD::OPC_CheckPredicate, 24, 54, 29, // Skip to: 14348
/* 6870 */    MCD::OPC_Decode, 101, 251, 1, // Opcode: ADD_A_D
/* 6874 */    MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 6886
/* 6878 */    MCD::OPC_CheckPredicate, 24, 42, 29, // Skip to: 14348
/* 6882 */    MCD::OPC_Decode, 63, 248, 1, // Opcode: ADDS_A_B
/* 6886 */    MCD::OPC_FilterValue, 5, 8, 0, // Skip to: 6898
/* 6890 */    MCD::OPC_CheckPredicate, 24, 30, 29, // Skip to: 14348
/* 6894 */    MCD::OPC_Decode, 65, 249, 1, // Opcode: ADDS_A_H
/* 6898 */    MCD::OPC_FilterValue, 6, 8, 0, // Skip to: 6910
/* 6902 */    MCD::OPC_CheckPredicate, 24, 18, 29, // Skip to: 14348
/* 6906 */    MCD::OPC_Decode, 66, 250, 1, // Opcode: ADDS_A_W
/* 6910 */    MCD::OPC_FilterValue, 7, 8, 0, // Skip to: 6922
/* 6914 */    MCD::OPC_CheckPredicate, 24, 6, 29, // Skip to: 14348
/* 6918 */    MCD::OPC_Decode, 64, 251, 1, // Opcode: ADDS_A_D
/* 6922 */    MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 6934
/* 6926 */    MCD::OPC_CheckPredicate, 24, 250, 28, // Skip to: 14348
/* 6930 */    MCD::OPC_Decode, 67, 248, 1, // Opcode: ADDS_S_B
/* 6934 */    MCD::OPC_FilterValue, 9, 8, 0, // Skip to: 6946
/* 6938 */    MCD::OPC_CheckPredicate, 24, 238, 28, // Skip to: 14348
/* 6942 */    MCD::OPC_Decode, 69, 249, 1, // Opcode: ADDS_S_H
/* 6946 */    MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 6958
/* 6950 */    MCD::OPC_CheckPredicate, 24, 226, 28, // Skip to: 14348
/* 6954 */    MCD::OPC_Decode, 70, 250, 1, // Opcode: ADDS_S_W
/* 6958 */    MCD::OPC_FilterValue, 11, 8, 0, // Skip to: 6970
/* 6962 */    MCD::OPC_CheckPredicate, 24, 214, 28, // Skip to: 14348
/* 6966 */    MCD::OPC_Decode, 68, 251, 1, // Opcode: ADDS_S_D
/* 6970 */    MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 6982
/* 6974 */    MCD::OPC_CheckPredicate, 24, 202, 28, // Skip to: 14348
/* 6978 */    MCD::OPC_Decode, 71, 248, 1, // Opcode: ADDS_U_B
/* 6982 */    MCD::OPC_FilterValue, 13, 8, 0, // Skip to: 6994
/* 6986 */    MCD::OPC_CheckPredicate, 24, 190, 28, // Skip to: 14348
/* 6990 */    MCD::OPC_Decode, 73, 249, 1, // Opcode: ADDS_U_H
/* 6994 */    MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 7006
/* 6998 */    MCD::OPC_CheckPredicate, 24, 178, 28, // Skip to: 14348
/* 7002 */    MCD::OPC_Decode, 74, 250, 1, // Opcode: ADDS_U_W
/* 7006 */    MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 7018
/* 7010 */    MCD::OPC_CheckPredicate, 24, 166, 28, // Skip to: 14348
/* 7014 */    MCD::OPC_Decode, 72, 251, 1, // Opcode: ADDS_U_D
/* 7018 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7031
/* 7022 */    MCD::OPC_CheckPredicate, 24, 154, 28, // Skip to: 14348
/* 7026 */    MCD::OPC_Decode, 189, 1, 248, 1, // Opcode: AVE_S_B
/* 7031 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7044
/* 7035 */    MCD::OPC_CheckPredicate, 24, 141, 28, // Skip to: 14348
/* 7039 */    MCD::OPC_Decode, 191, 1, 249, 1, // Opcode: AVE_S_H
/* 7044 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7057
/* 7048 */    MCD::OPC_CheckPredicate, 24, 128, 28, // Skip to: 14348
/* 7052 */    MCD::OPC_Decode, 192, 1, 250, 1, // Opcode: AVE_S_W
/* 7057 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7070
/* 7061 */    MCD::OPC_CheckPredicate, 24, 115, 28, // Skip to: 14348
/* 7065 */    MCD::OPC_Decode, 190, 1, 251, 1, // Opcode: AVE_S_D
/* 7070 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7083
/* 7074 */    MCD::OPC_CheckPredicate, 24, 102, 28, // Skip to: 14348
/* 7078 */    MCD::OPC_Decode, 193, 1, 248, 1, // Opcode: AVE_U_B
/* 7083 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7096
/* 7087 */    MCD::OPC_CheckPredicate, 24, 89, 28, // Skip to: 14348
/* 7091 */    MCD::OPC_Decode, 195, 1, 249, 1, // Opcode: AVE_U_H
/* 7096 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7109
/* 7100 */    MCD::OPC_CheckPredicate, 24, 76, 28, // Skip to: 14348
/* 7104 */    MCD::OPC_Decode, 196, 1, 250, 1, // Opcode: AVE_U_W
/* 7109 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7122
/* 7113 */    MCD::OPC_CheckPredicate, 24, 63, 28, // Skip to: 14348
/* 7117 */    MCD::OPC_Decode, 194, 1, 251, 1, // Opcode: AVE_U_D
/* 7122 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7135
/* 7126 */    MCD::OPC_CheckPredicate, 24, 50, 28, // Skip to: 14348
/* 7130 */    MCD::OPC_Decode, 181, 1, 248, 1, // Opcode: AVER_S_B
/* 7135 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7148
/* 7139 */    MCD::OPC_CheckPredicate, 24, 37, 28, // Skip to: 14348
/* 7143 */    MCD::OPC_Decode, 183, 1, 249, 1, // Opcode: AVER_S_H
/* 7148 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7161
/* 7152 */    MCD::OPC_CheckPredicate, 24, 24, 28, // Skip to: 14348
/* 7156 */    MCD::OPC_Decode, 184, 1, 250, 1, // Opcode: AVER_S_W
/* 7161 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7174
/* 7165 */    MCD::OPC_CheckPredicate, 24, 11, 28, // Skip to: 14348
/* 7169 */    MCD::OPC_Decode, 182, 1, 251, 1, // Opcode: AVER_S_D
/* 7174 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7187
/* 7178 */    MCD::OPC_CheckPredicate, 24, 254, 27, // Skip to: 14348
/* 7182 */    MCD::OPC_Decode, 185, 1, 248, 1, // Opcode: AVER_U_B
/* 7187 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7200
/* 7191 */    MCD::OPC_CheckPredicate, 24, 241, 27, // Skip to: 14348
/* 7195 */    MCD::OPC_Decode, 187, 1, 249, 1, // Opcode: AVER_U_H
/* 7200 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7213
/* 7204 */    MCD::OPC_CheckPredicate, 24, 228, 27, // Skip to: 14348
/* 7208 */    MCD::OPC_Decode, 188, 1, 250, 1, // Opcode: AVER_U_W
/* 7213 */    MCD::OPC_FilterValue, 31, 219, 27, // Skip to: 14348
/* 7217 */    MCD::OPC_CheckPredicate, 24, 215, 27, // Skip to: 14348
/* 7221 */    MCD::OPC_Decode, 186, 1, 251, 1, // Opcode: AVER_U_D
/* 7226 */    MCD::OPC_FilterValue, 17, 59, 1, // Skip to: 7545
/* 7230 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7233 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7246
/* 7237 */    MCD::OPC_CheckPredicate, 24, 195, 27, // Skip to: 14348
/* 7241 */    MCD::OPC_Decode, 214, 16, 248, 1, // Opcode: SUBS_S_B
/* 7246 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7259
/* 7250 */    MCD::OPC_CheckPredicate, 24, 182, 27, // Skip to: 14348
/* 7254 */    MCD::OPC_Decode, 216, 16, 249, 1, // Opcode: SUBS_S_H
/* 7259 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7272
/* 7263 */    MCD::OPC_CheckPredicate, 24, 169, 27, // Skip to: 14348
/* 7267 */    MCD::OPC_Decode, 217, 16, 250, 1, // Opcode: SUBS_S_W
/* 7272 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7285
/* 7276 */    MCD::OPC_CheckPredicate, 24, 156, 27, // Skip to: 14348
/* 7280 */    MCD::OPC_Decode, 215, 16, 251, 1, // Opcode: SUBS_S_D
/* 7285 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7298
/* 7289 */    MCD::OPC_CheckPredicate, 24, 143, 27, // Skip to: 14348
/* 7293 */    MCD::OPC_Decode, 218, 16, 248, 1, // Opcode: SUBS_U_B
/* 7298 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7311
/* 7302 */    MCD::OPC_CheckPredicate, 24, 130, 27, // Skip to: 14348
/* 7306 */    MCD::OPC_Decode, 220, 16, 249, 1, // Opcode: SUBS_U_H
/* 7311 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7324
/* 7315 */    MCD::OPC_CheckPredicate, 24, 117, 27, // Skip to: 14348
/* 7319 */    MCD::OPC_Decode, 221, 16, 250, 1, // Opcode: SUBS_U_W
/* 7324 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7337
/* 7328 */    MCD::OPC_CheckPredicate, 24, 104, 27, // Skip to: 14348
/* 7332 */    MCD::OPC_Decode, 219, 16, 251, 1, // Opcode: SUBS_U_D
/* 7337 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7350
/* 7341 */    MCD::OPC_CheckPredicate, 24, 91, 27, // Skip to: 14348
/* 7345 */    MCD::OPC_Decode, 206, 16, 248, 1, // Opcode: SUBSUS_U_B
/* 7350 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7363
/* 7354 */    MCD::OPC_CheckPredicate, 24, 78, 27, // Skip to: 14348
/* 7358 */    MCD::OPC_Decode, 208, 16, 249, 1, // Opcode: SUBSUS_U_H
/* 7363 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7376
/* 7367 */    MCD::OPC_CheckPredicate, 24, 65, 27, // Skip to: 14348
/* 7371 */    MCD::OPC_Decode, 209, 16, 250, 1, // Opcode: SUBSUS_U_W
/* 7376 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7389
/* 7380 */    MCD::OPC_CheckPredicate, 24, 52, 27, // Skip to: 14348
/* 7384 */    MCD::OPC_Decode, 207, 16, 251, 1, // Opcode: SUBSUS_U_D
/* 7389 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 7402
/* 7393 */    MCD::OPC_CheckPredicate, 24, 39, 27, // Skip to: 14348
/* 7397 */    MCD::OPC_Decode, 210, 16, 248, 1, // Opcode: SUBSUU_S_B
/* 7402 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 7415
/* 7406 */    MCD::OPC_CheckPredicate, 24, 26, 27, // Skip to: 14348
/* 7410 */    MCD::OPC_Decode, 212, 16, 249, 1, // Opcode: SUBSUU_S_H
/* 7415 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 7428
/* 7419 */    MCD::OPC_CheckPredicate, 24, 13, 27, // Skip to: 14348
/* 7423 */    MCD::OPC_Decode, 213, 16, 250, 1, // Opcode: SUBSUU_S_W
/* 7428 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 7441
/* 7432 */    MCD::OPC_CheckPredicate, 24, 0, 27, // Skip to: 14348
/* 7436 */    MCD::OPC_Decode, 211, 16, 251, 1, // Opcode: SUBSUU_S_D
/* 7441 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7454
/* 7445 */    MCD::OPC_CheckPredicate, 24, 243, 26, // Skip to: 14348
/* 7449 */    MCD::OPC_Decode, 137, 1, 248, 1, // Opcode: ASUB_S_B
/* 7454 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7467
/* 7458 */    MCD::OPC_CheckPredicate, 24, 230, 26, // Skip to: 14348
/* 7462 */    MCD::OPC_Decode, 139, 1, 249, 1, // Opcode: ASUB_S_H
/* 7467 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7480
/* 7471 */    MCD::OPC_CheckPredicate, 24, 217, 26, // Skip to: 14348
/* 7475 */    MCD::OPC_Decode, 140, 1, 250, 1, // Opcode: ASUB_S_W
/* 7480 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7493
/* 7484 */    MCD::OPC_CheckPredicate, 24, 204, 26, // Skip to: 14348
/* 7488 */    MCD::OPC_Decode, 138, 1, 251, 1, // Opcode: ASUB_S_D
/* 7493 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7506
/* 7497 */    MCD::OPC_CheckPredicate, 24, 191, 26, // Skip to: 14348
/* 7501 */    MCD::OPC_Decode, 141, 1, 248, 1, // Opcode: ASUB_U_B
/* 7506 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7519
/* 7510 */    MCD::OPC_CheckPredicate, 24, 178, 26, // Skip to: 14348
/* 7514 */    MCD::OPC_Decode, 143, 1, 249, 1, // Opcode: ASUB_U_H
/* 7519 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7532
/* 7523 */    MCD::OPC_CheckPredicate, 24, 165, 26, // Skip to: 14348
/* 7527 */    MCD::OPC_Decode, 144, 1, 250, 1, // Opcode: ASUB_U_W
/* 7532 */    MCD::OPC_FilterValue, 23, 156, 26, // Skip to: 14348
/* 7536 */    MCD::OPC_CheckPredicate, 24, 152, 26, // Skip to: 14348
/* 7540 */    MCD::OPC_Decode, 142, 1, 251, 1, // Opcode: ASUB_U_D
/* 7545 */    MCD::OPC_FilterValue, 18, 111, 1, // Skip to: 7916
/* 7549 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7552 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 7565
/* 7556 */    MCD::OPC_CheckPredicate, 24, 132, 26, // Skip to: 14348
/* 7560 */    MCD::OPC_Decode, 219, 12, 248, 1, // Opcode: MULV_B
/* 7565 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7578
/* 7569 */    MCD::OPC_CheckPredicate, 24, 119, 26, // Skip to: 14348
/* 7573 */    MCD::OPC_Decode, 221, 12, 249, 1, // Opcode: MULV_H
/* 7578 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7591
/* 7582 */    MCD::OPC_CheckPredicate, 24, 106, 26, // Skip to: 14348
/* 7586 */    MCD::OPC_Decode, 222, 12, 250, 1, // Opcode: MULV_W
/* 7591 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7604
/* 7595 */    MCD::OPC_CheckPredicate, 24, 93, 26, // Skip to: 14348
/* 7599 */    MCD::OPC_Decode, 220, 12, 251, 1, // Opcode: MULV_D
/* 7604 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 7617
/* 7608 */    MCD::OPC_CheckPredicate, 24, 80, 26, // Skip to: 14348
/* 7612 */    MCD::OPC_Decode, 217, 10, 252, 1, // Opcode: MADDV_B
/* 7617 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7630
/* 7621 */    MCD::OPC_CheckPredicate, 24, 67, 26, // Skip to: 14348
/* 7625 */    MCD::OPC_Decode, 219, 10, 253, 1, // Opcode: MADDV_H
/* 7630 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7643
/* 7634 */    MCD::OPC_CheckPredicate, 24, 54, 26, // Skip to: 14348
/* 7638 */    MCD::OPC_Decode, 220, 10, 254, 1, // Opcode: MADDV_W
/* 7643 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 7656
/* 7647 */    MCD::OPC_CheckPredicate, 24, 41, 26, // Skip to: 14348
/* 7651 */    MCD::OPC_Decode, 218, 10, 255, 1, // Opcode: MADDV_D
/* 7656 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 7669
/* 7660 */    MCD::OPC_CheckPredicate, 24, 28, 26, // Skip to: 14348
/* 7664 */    MCD::OPC_Decode, 136, 12, 252, 1, // Opcode: MSUBV_B
/* 7669 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 7682
/* 7673 */    MCD::OPC_CheckPredicate, 24, 15, 26, // Skip to: 14348
/* 7677 */    MCD::OPC_Decode, 138, 12, 253, 1, // Opcode: MSUBV_H
/* 7682 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 7695
/* 7686 */    MCD::OPC_CheckPredicate, 24, 2, 26, // Skip to: 14348
/* 7690 */    MCD::OPC_Decode, 139, 12, 254, 1, // Opcode: MSUBV_W
/* 7695 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 7708
/* 7699 */    MCD::OPC_CheckPredicate, 24, 245, 25, // Skip to: 14348
/* 7703 */    MCD::OPC_Decode, 137, 12, 255, 1, // Opcode: MSUBV_D
/* 7708 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 7721
/* 7712 */    MCD::OPC_CheckPredicate, 24, 232, 25, // Skip to: 14348
/* 7716 */    MCD::OPC_Decode, 239, 5, 248, 1, // Opcode: DIV_S_B
/* 7721 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 7734
/* 7725 */    MCD::OPC_CheckPredicate, 24, 219, 25, // Skip to: 14348
/* 7729 */    MCD::OPC_Decode, 241, 5, 249, 1, // Opcode: DIV_S_H
/* 7734 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 7747
/* 7738 */    MCD::OPC_CheckPredicate, 24, 206, 25, // Skip to: 14348
/* 7742 */    MCD::OPC_Decode, 242, 5, 250, 1, // Opcode: DIV_S_W
/* 7747 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 7760
/* 7751 */    MCD::OPC_CheckPredicate, 24, 193, 25, // Skip to: 14348
/* 7755 */    MCD::OPC_Decode, 240, 5, 251, 1, // Opcode: DIV_S_D
/* 7760 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 7773
/* 7764 */    MCD::OPC_CheckPredicate, 24, 180, 25, // Skip to: 14348
/* 7768 */    MCD::OPC_Decode, 243, 5, 248, 1, // Opcode: DIV_U_B
/* 7773 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 7786
/* 7777 */    MCD::OPC_CheckPredicate, 24, 167, 25, // Skip to: 14348
/* 7781 */    MCD::OPC_Decode, 245, 5, 249, 1, // Opcode: DIV_U_H
/* 7786 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 7799
/* 7790 */    MCD::OPC_CheckPredicate, 24, 154, 25, // Skip to: 14348
/* 7794 */    MCD::OPC_Decode, 246, 5, 250, 1, // Opcode: DIV_U_W
/* 7799 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 7812
/* 7803 */    MCD::OPC_CheckPredicate, 24, 141, 25, // Skip to: 14348
/* 7807 */    MCD::OPC_Decode, 244, 5, 251, 1, // Opcode: DIV_U_D
/* 7812 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 7825
/* 7816 */    MCD::OPC_CheckPredicate, 24, 128, 25, // Skip to: 14348
/* 7820 */    MCD::OPC_Decode, 201, 11, 248, 1, // Opcode: MOD_S_B
/* 7825 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 7838
/* 7829 */    MCD::OPC_CheckPredicate, 24, 115, 25, // Skip to: 14348
/* 7833 */    MCD::OPC_Decode, 203, 11, 249, 1, // Opcode: MOD_S_H
/* 7838 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 7851
/* 7842 */    MCD::OPC_CheckPredicate, 24, 102, 25, // Skip to: 14348
/* 7846 */    MCD::OPC_Decode, 204, 11, 250, 1, // Opcode: MOD_S_W
/* 7851 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 7864
/* 7855 */    MCD::OPC_CheckPredicate, 24, 89, 25, // Skip to: 14348
/* 7859 */    MCD::OPC_Decode, 202, 11, 251, 1, // Opcode: MOD_S_D
/* 7864 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 7877
/* 7868 */    MCD::OPC_CheckPredicate, 24, 76, 25, // Skip to: 14348
/* 7872 */    MCD::OPC_Decode, 205, 11, 248, 1, // Opcode: MOD_U_B
/* 7877 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 7890
/* 7881 */    MCD::OPC_CheckPredicate, 24, 63, 25, // Skip to: 14348
/* 7885 */    MCD::OPC_Decode, 207, 11, 249, 1, // Opcode: MOD_U_H
/* 7890 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 7903
/* 7894 */    MCD::OPC_CheckPredicate, 24, 50, 25, // Skip to: 14348
/* 7898 */    MCD::OPC_Decode, 208, 11, 250, 1, // Opcode: MOD_U_W
/* 7903 */    MCD::OPC_FilterValue, 31, 41, 25, // Skip to: 14348
/* 7907 */    MCD::OPC_CheckPredicate, 24, 37, 25, // Skip to: 14348
/* 7911 */    MCD::OPC_Decode, 206, 11, 251, 1, // Opcode: MOD_U_D
/* 7916 */    MCD::OPC_FilterValue, 19, 237, 0, // Skip to: 8157
/* 7920 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 7923 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 7936
/* 7927 */    MCD::OPC_CheckPredicate, 24, 17, 25, // Skip to: 14348
/* 7931 */    MCD::OPC_Decode, 153, 6, 128, 2, // Opcode: DOTP_S_H
/* 7936 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 7949
/* 7940 */    MCD::OPC_CheckPredicate, 24, 4, 25, // Skip to: 14348
/* 7944 */    MCD::OPC_Decode, 154, 6, 129, 2, // Opcode: DOTP_S_W
/* 7949 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 7962
/* 7953 */    MCD::OPC_CheckPredicate, 24, 247, 24, // Skip to: 14348
/* 7957 */    MCD::OPC_Decode, 152, 6, 130, 2, // Opcode: DOTP_S_D
/* 7962 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 7975
/* 7966 */    MCD::OPC_CheckPredicate, 24, 234, 24, // Skip to: 14348
/* 7970 */    MCD::OPC_Decode, 156, 6, 128, 2, // Opcode: DOTP_U_H
/* 7975 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 7988
/* 7979 */    MCD::OPC_CheckPredicate, 24, 221, 24, // Skip to: 14348
/* 7983 */    MCD::OPC_Decode, 157, 6, 129, 2, // Opcode: DOTP_U_W
/* 7988 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8001
/* 7992 */    MCD::OPC_CheckPredicate, 24, 208, 24, // Skip to: 14348
/* 7996 */    MCD::OPC_Decode, 155, 6, 130, 2, // Opcode: DOTP_U_D
/* 8001 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8014
/* 8005 */    MCD::OPC_CheckPredicate, 24, 195, 24, // Skip to: 14348
/* 8009 */    MCD::OPC_Decode, 159, 6, 131, 2, // Opcode: DPADD_S_H
/* 8014 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8027
/* 8018 */    MCD::OPC_CheckPredicate, 24, 182, 24, // Skip to: 14348
/* 8022 */    MCD::OPC_Decode, 160, 6, 132, 2, // Opcode: DPADD_S_W
/* 8027 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8040
/* 8031 */    MCD::OPC_CheckPredicate, 24, 169, 24, // Skip to: 14348
/* 8035 */    MCD::OPC_Decode, 158, 6, 133, 2, // Opcode: DPADD_S_D
/* 8040 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8053
/* 8044 */    MCD::OPC_CheckPredicate, 24, 156, 24, // Skip to: 14348
/* 8048 */    MCD::OPC_Decode, 162, 6, 131, 2, // Opcode: DPADD_U_H
/* 8053 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8066
/* 8057 */    MCD::OPC_CheckPredicate, 24, 143, 24, // Skip to: 14348
/* 8061 */    MCD::OPC_Decode, 163, 6, 132, 2, // Opcode: DPADD_U_W
/* 8066 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8079
/* 8070 */    MCD::OPC_CheckPredicate, 24, 130, 24, // Skip to: 14348
/* 8074 */    MCD::OPC_Decode, 161, 6, 133, 2, // Opcode: DPADD_U_D
/* 8079 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8092
/* 8083 */    MCD::OPC_CheckPredicate, 24, 117, 24, // Skip to: 14348
/* 8087 */    MCD::OPC_Decode, 190, 6, 131, 2, // Opcode: DPSUB_S_H
/* 8092 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8105
/* 8096 */    MCD::OPC_CheckPredicate, 24, 104, 24, // Skip to: 14348
/* 8100 */    MCD::OPC_Decode, 191, 6, 132, 2, // Opcode: DPSUB_S_W
/* 8105 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8118
/* 8109 */    MCD::OPC_CheckPredicate, 24, 91, 24, // Skip to: 14348
/* 8113 */    MCD::OPC_Decode, 189, 6, 133, 2, // Opcode: DPSUB_S_D
/* 8118 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8131
/* 8122 */    MCD::OPC_CheckPredicate, 24, 78, 24, // Skip to: 14348
/* 8126 */    MCD::OPC_Decode, 193, 6, 131, 2, // Opcode: DPSUB_U_H
/* 8131 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8144
/* 8135 */    MCD::OPC_CheckPredicate, 24, 65, 24, // Skip to: 14348
/* 8139 */    MCD::OPC_Decode, 194, 6, 132, 2, // Opcode: DPSUB_U_W
/* 8144 */    MCD::OPC_FilterValue, 23, 56, 24, // Skip to: 14348
/* 8148 */    MCD::OPC_CheckPredicate, 24, 52, 24, // Skip to: 14348
/* 8152 */    MCD::OPC_Decode, 192, 6, 133, 2, // Opcode: DPSUB_U_D
/* 8157 */    MCD::OPC_FilterValue, 20, 163, 1, // Skip to: 8580
/* 8161 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8164 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8177
/* 8168 */    MCD::OPC_CheckPredicate, 24, 32, 24, // Skip to: 14348
/* 8172 */    MCD::OPC_Decode, 216, 15, 134, 2, // Opcode: SLD_B
/* 8177 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8190
/* 8181 */    MCD::OPC_CheckPredicate, 24, 19, 24, // Skip to: 14348
/* 8185 */    MCD::OPC_Decode, 218, 15, 135, 2, // Opcode: SLD_H
/* 8190 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8203
/* 8194 */    MCD::OPC_CheckPredicate, 24, 6, 24, // Skip to: 14348
/* 8198 */    MCD::OPC_Decode, 219, 15, 136, 2, // Opcode: SLD_W
/* 8203 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8216
/* 8207 */    MCD::OPC_CheckPredicate, 24, 249, 23, // Skip to: 14348
/* 8211 */    MCD::OPC_Decode, 217, 15, 137, 2, // Opcode: SLD_D
/* 8216 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8229
/* 8220 */    MCD::OPC_CheckPredicate, 24, 236, 23, // Skip to: 14348
/* 8224 */    MCD::OPC_Decode, 132, 16, 138, 2, // Opcode: SPLAT_B
/* 8229 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8242
/* 8233 */    MCD::OPC_CheckPredicate, 24, 223, 23, // Skip to: 14348
/* 8237 */    MCD::OPC_Decode, 134, 16, 139, 2, // Opcode: SPLAT_H
/* 8242 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8255
/* 8246 */    MCD::OPC_CheckPredicate, 24, 210, 23, // Skip to: 14348
/* 8250 */    MCD::OPC_Decode, 135, 16, 140, 2, // Opcode: SPLAT_W
/* 8255 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8268
/* 8259 */    MCD::OPC_CheckPredicate, 24, 197, 23, // Skip to: 14348
/* 8263 */    MCD::OPC_Decode, 133, 16, 141, 2, // Opcode: SPLAT_D
/* 8268 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8281
/* 8272 */    MCD::OPC_CheckPredicate, 24, 184, 23, // Skip to: 14348
/* 8276 */    MCD::OPC_Decode, 166, 13, 248, 1, // Opcode: PCKEV_B
/* 8281 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8294
/* 8285 */    MCD::OPC_CheckPredicate, 24, 171, 23, // Skip to: 14348
/* 8289 */    MCD::OPC_Decode, 168, 13, 249, 1, // Opcode: PCKEV_H
/* 8294 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8307
/* 8298 */    MCD::OPC_CheckPredicate, 24, 158, 23, // Skip to: 14348
/* 8302 */    MCD::OPC_Decode, 169, 13, 250, 1, // Opcode: PCKEV_W
/* 8307 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8320
/* 8311 */    MCD::OPC_CheckPredicate, 24, 145, 23, // Skip to: 14348
/* 8315 */    MCD::OPC_Decode, 167, 13, 251, 1, // Opcode: PCKEV_D
/* 8320 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 8333
/* 8324 */    MCD::OPC_CheckPredicate, 24, 132, 23, // Skip to: 14348
/* 8328 */    MCD::OPC_Decode, 170, 13, 248, 1, // Opcode: PCKOD_B
/* 8333 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 8346
/* 8337 */    MCD::OPC_CheckPredicate, 24, 119, 23, // Skip to: 14348
/* 8341 */    MCD::OPC_Decode, 172, 13, 249, 1, // Opcode: PCKOD_H
/* 8346 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 8359
/* 8350 */    MCD::OPC_CheckPredicate, 24, 106, 23, // Skip to: 14348
/* 8354 */    MCD::OPC_Decode, 173, 13, 250, 1, // Opcode: PCKOD_W
/* 8359 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 8372
/* 8363 */    MCD::OPC_CheckPredicate, 24, 93, 23, // Skip to: 14348
/* 8367 */    MCD::OPC_Decode, 171, 13, 251, 1, // Opcode: PCKOD_D
/* 8372 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 8385
/* 8376 */    MCD::OPC_CheckPredicate, 24, 80, 23, // Skip to: 14348
/* 8380 */    MCD::OPC_Decode, 232, 8, 248, 1, // Opcode: ILVL_B
/* 8385 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8398
/* 8389 */    MCD::OPC_CheckPredicate, 24, 67, 23, // Skip to: 14348
/* 8393 */    MCD::OPC_Decode, 234, 8, 249, 1, // Opcode: ILVL_H
/* 8398 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8411
/* 8402 */    MCD::OPC_CheckPredicate, 24, 54, 23, // Skip to: 14348
/* 8406 */    MCD::OPC_Decode, 235, 8, 250, 1, // Opcode: ILVL_W
/* 8411 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8424
/* 8415 */    MCD::OPC_CheckPredicate, 24, 41, 23, // Skip to: 14348
/* 8419 */    MCD::OPC_Decode, 233, 8, 251, 1, // Opcode: ILVL_D
/* 8424 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 8437
/* 8428 */    MCD::OPC_CheckPredicate, 24, 28, 23, // Skip to: 14348
/* 8432 */    MCD::OPC_Decode, 240, 8, 248, 1, // Opcode: ILVR_B
/* 8437 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8450
/* 8441 */    MCD::OPC_CheckPredicate, 24, 15, 23, // Skip to: 14348
/* 8445 */    MCD::OPC_Decode, 242, 8, 249, 1, // Opcode: ILVR_H
/* 8450 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8463
/* 8454 */    MCD::OPC_CheckPredicate, 24, 2, 23, // Skip to: 14348
/* 8458 */    MCD::OPC_Decode, 243, 8, 250, 1, // Opcode: ILVR_W
/* 8463 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8476
/* 8467 */    MCD::OPC_CheckPredicate, 24, 245, 22, // Skip to: 14348
/* 8471 */    MCD::OPC_Decode, 241, 8, 251, 1, // Opcode: ILVR_D
/* 8476 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 8489
/* 8480 */    MCD::OPC_CheckPredicate, 24, 232, 22, // Skip to: 14348
/* 8484 */    MCD::OPC_Decode, 228, 8, 248, 1, // Opcode: ILVEV_B
/* 8489 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8502
/* 8493 */    MCD::OPC_CheckPredicate, 24, 219, 22, // Skip to: 14348
/* 8497 */    MCD::OPC_Decode, 230, 8, 249, 1, // Opcode: ILVEV_H
/* 8502 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8515
/* 8506 */    MCD::OPC_CheckPredicate, 24, 206, 22, // Skip to: 14348
/* 8510 */    MCD::OPC_Decode, 231, 8, 250, 1, // Opcode: ILVEV_W
/* 8515 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8528
/* 8519 */    MCD::OPC_CheckPredicate, 24, 193, 22, // Skip to: 14348
/* 8523 */    MCD::OPC_Decode, 229, 8, 251, 1, // Opcode: ILVEV_D
/* 8528 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 8541
/* 8532 */    MCD::OPC_CheckPredicate, 24, 180, 22, // Skip to: 14348
/* 8536 */    MCD::OPC_Decode, 236, 8, 248, 1, // Opcode: ILVOD_B
/* 8541 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8554
/* 8545 */    MCD::OPC_CheckPredicate, 24, 167, 22, // Skip to: 14348
/* 8549 */    MCD::OPC_Decode, 238, 8, 249, 1, // Opcode: ILVOD_H
/* 8554 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8567
/* 8558 */    MCD::OPC_CheckPredicate, 24, 154, 22, // Skip to: 14348
/* 8562 */    MCD::OPC_Decode, 239, 8, 250, 1, // Opcode: ILVOD_W
/* 8567 */    MCD::OPC_FilterValue, 31, 145, 22, // Skip to: 14348
/* 8571 */    MCD::OPC_CheckPredicate, 24, 141, 22, // Skip to: 14348
/* 8575 */    MCD::OPC_Decode, 237, 8, 251, 1, // Opcode: ILVOD_D
/* 8580 */    MCD::OPC_FilterValue, 21, 59, 1, // Skip to: 8899
/* 8584 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 8587 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8600
/* 8591 */    MCD::OPC_CheckPredicate, 24, 121, 22, // Skip to: 14348
/* 8595 */    MCD::OPC_Decode, 144, 18, 252, 1, // Opcode: VSHF_B
/* 8600 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 8613
/* 8604 */    MCD::OPC_CheckPredicate, 24, 108, 22, // Skip to: 14348
/* 8608 */    MCD::OPC_Decode, 146, 18, 253, 1, // Opcode: VSHF_H
/* 8613 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 8626
/* 8617 */    MCD::OPC_CheckPredicate, 24, 95, 22, // Skip to: 14348
/* 8621 */    MCD::OPC_Decode, 147, 18, 254, 1, // Opcode: VSHF_W
/* 8626 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 8639
/* 8630 */    MCD::OPC_CheckPredicate, 24, 82, 22, // Skip to: 14348
/* 8634 */    MCD::OPC_Decode, 145, 18, 255, 1, // Opcode: VSHF_D
/* 8639 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 8652
/* 8643 */    MCD::OPC_CheckPredicate, 24, 69, 22, // Skip to: 14348
/* 8647 */    MCD::OPC_Decode, 147, 16, 248, 1, // Opcode: SRAR_B
/* 8652 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 8665
/* 8656 */    MCD::OPC_CheckPredicate, 24, 56, 22, // Skip to: 14348
/* 8660 */    MCD::OPC_Decode, 149, 16, 249, 1, // Opcode: SRAR_H
/* 8665 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 8678
/* 8669 */    MCD::OPC_CheckPredicate, 24, 43, 22, // Skip to: 14348
/* 8673 */    MCD::OPC_Decode, 150, 16, 250, 1, // Opcode: SRAR_W
/* 8678 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 8691
/* 8682 */    MCD::OPC_CheckPredicate, 24, 30, 22, // Skip to: 14348
/* 8686 */    MCD::OPC_Decode, 148, 16, 251, 1, // Opcode: SRAR_D
/* 8691 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 8704
/* 8695 */    MCD::OPC_CheckPredicate, 24, 17, 22, // Skip to: 14348
/* 8699 */    MCD::OPC_Decode, 169, 16, 248, 1, // Opcode: SRLR_B
/* 8704 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 8717
/* 8708 */    MCD::OPC_CheckPredicate, 24, 4, 22, // Skip to: 14348
/* 8712 */    MCD::OPC_Decode, 171, 16, 249, 1, // Opcode: SRLR_H
/* 8717 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 8730
/* 8721 */    MCD::OPC_CheckPredicate, 24, 247, 21, // Skip to: 14348
/* 8725 */    MCD::OPC_Decode, 172, 16, 250, 1, // Opcode: SRLR_W
/* 8730 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 8743
/* 8734 */    MCD::OPC_CheckPredicate, 24, 234, 21, // Skip to: 14348
/* 8738 */    MCD::OPC_Decode, 170, 16, 251, 1, // Opcode: SRLR_D
/* 8743 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 8756
/* 8747 */    MCD::OPC_CheckPredicate, 24, 221, 21, // Skip to: 14348
/* 8751 */    MCD::OPC_Decode, 217, 8, 128, 2, // Opcode: HADD_S_H
/* 8756 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 8769
/* 8760 */    MCD::OPC_CheckPredicate, 24, 208, 21, // Skip to: 14348
/* 8764 */    MCD::OPC_Decode, 218, 8, 129, 2, // Opcode: HADD_S_W
/* 8769 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 8782
/* 8773 */    MCD::OPC_CheckPredicate, 24, 195, 21, // Skip to: 14348
/* 8777 */    MCD::OPC_Decode, 216, 8, 130, 2, // Opcode: HADD_S_D
/* 8782 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 8795
/* 8786 */    MCD::OPC_CheckPredicate, 24, 182, 21, // Skip to: 14348
/* 8790 */    MCD::OPC_Decode, 220, 8, 128, 2, // Opcode: HADD_U_H
/* 8795 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 8808
/* 8799 */    MCD::OPC_CheckPredicate, 24, 169, 21, // Skip to: 14348
/* 8803 */    MCD::OPC_Decode, 221, 8, 129, 2, // Opcode: HADD_U_W
/* 8808 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 8821
/* 8812 */    MCD::OPC_CheckPredicate, 24, 156, 21, // Skip to: 14348
/* 8816 */    MCD::OPC_Decode, 219, 8, 130, 2, // Opcode: HADD_U_D
/* 8821 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 8834
/* 8825 */    MCD::OPC_CheckPredicate, 24, 143, 21, // Skip to: 14348
/* 8829 */    MCD::OPC_Decode, 223, 8, 128, 2, // Opcode: HSUB_S_H
/* 8834 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 8847
/* 8838 */    MCD::OPC_CheckPredicate, 24, 130, 21, // Skip to: 14348
/* 8842 */    MCD::OPC_Decode, 224, 8, 129, 2, // Opcode: HSUB_S_W
/* 8847 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 8860
/* 8851 */    MCD::OPC_CheckPredicate, 24, 117, 21, // Skip to: 14348
/* 8855 */    MCD::OPC_Decode, 222, 8, 130, 2, // Opcode: HSUB_S_D
/* 8860 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 8873
/* 8864 */    MCD::OPC_CheckPredicate, 24, 104, 21, // Skip to: 14348
/* 8868 */    MCD::OPC_Decode, 226, 8, 128, 2, // Opcode: HSUB_U_H
/* 8873 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 8886
/* 8877 */    MCD::OPC_CheckPredicate, 24, 91, 21, // Skip to: 14348
/* 8881 */    MCD::OPC_Decode, 227, 8, 129, 2, // Opcode: HSUB_U_W
/* 8886 */    MCD::OPC_FilterValue, 31, 82, 21, // Skip to: 14348
/* 8890 */    MCD::OPC_CheckPredicate, 24, 78, 21, // Skip to: 14348
/* 8894 */    MCD::OPC_Decode, 225, 8, 130, 2, // Opcode: HSUB_U_D
/* 8899 */    MCD::OPC_FilterValue, 25, 210, 1, // Skip to: 9369
/* 8903 */    MCD::OPC_ExtractField, 20, 6,  // Inst{25-20} ...
/* 8906 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8919
/* 8910 */    MCD::OPC_CheckPredicate, 24, 58, 21, // Skip to: 14348
/* 8914 */    MCD::OPC_Decode, 212, 15, 142, 2, // Opcode: SLDI_B
/* 8919 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8938
/* 8923 */    MCD::OPC_CheckPredicate, 24, 45, 21, // Skip to: 14348
/* 8927 */    MCD::OPC_CheckField, 19, 1, 0, 39, 21, // Skip to: 14348
/* 8933 */    MCD::OPC_Decode, 214, 15, 143, 2, // Opcode: SLDI_H
/* 8938 */    MCD::OPC_FilterValue, 3, 54, 0, // Skip to: 8996
/* 8942 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 8945 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 8958
/* 8949 */    MCD::OPC_CheckPredicate, 24, 19, 21, // Skip to: 14348
/* 8953 */    MCD::OPC_Decode, 215, 15, 144, 2, // Opcode: SLDI_W
/* 8958 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 8977
/* 8962 */    MCD::OPC_CheckPredicate, 24, 6, 21, // Skip to: 14348
/* 8966 */    MCD::OPC_CheckField, 17, 1, 0, 0, 21, // Skip to: 14348
/* 8972 */    MCD::OPC_Decode, 213, 15, 145, 2, // Opcode: SLDI_D
/* 8977 */    MCD::OPC_FilterValue, 3, 247, 20, // Skip to: 14348
/* 8981 */    MCD::OPC_CheckPredicate, 24, 243, 20, // Skip to: 14348
/* 8985 */    MCD::OPC_CheckField, 16, 2, 2, 237, 20, // Skip to: 14348
/* 8991 */    MCD::OPC_Decode, 236, 4, 146, 2, // Opcode: CTCMSA
/* 8996 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9009
/* 9000 */    MCD::OPC_CheckPredicate, 24, 224, 20, // Skip to: 14348
/* 9004 */    MCD::OPC_Decode, 128, 16, 147, 2, // Opcode: SPLATI_B
/* 9009 */    MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 9028
/* 9013 */    MCD::OPC_CheckPredicate, 24, 211, 20, // Skip to: 14348
/* 9017 */    MCD::OPC_CheckField, 19, 1, 0, 205, 20, // Skip to: 14348
/* 9023 */    MCD::OPC_Decode, 130, 16, 148, 2, // Opcode: SPLATI_H
/* 9028 */    MCD::OPC_FilterValue, 7, 54, 0, // Skip to: 9086
/* 9032 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9035 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9048
/* 9039 */    MCD::OPC_CheckPredicate, 24, 185, 20, // Skip to: 14348
/* 9043 */    MCD::OPC_Decode, 131, 16, 149, 2, // Opcode: SPLATI_W
/* 9048 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9067
/* 9052 */    MCD::OPC_CheckPredicate, 24, 172, 20, // Skip to: 14348
/* 9056 */    MCD::OPC_CheckField, 17, 1, 0, 166, 20, // Skip to: 14348
/* 9062 */    MCD::OPC_Decode, 129, 16, 150, 2, // Opcode: SPLATI_D
/* 9067 */    MCD::OPC_FilterValue, 3, 157, 20, // Skip to: 14348
/* 9071 */    MCD::OPC_CheckPredicate, 24, 153, 20, // Skip to: 14348
/* 9075 */    MCD::OPC_CheckField, 16, 2, 2, 147, 20, // Skip to: 14348
/* 9081 */    MCD::OPC_Decode, 217, 3, 151, 2, // Opcode: CFCMSA
/* 9086 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9099
/* 9090 */    MCD::OPC_CheckPredicate, 24, 134, 20, // Skip to: 14348
/* 9094 */    MCD::OPC_Decode, 227, 4, 152, 2, // Opcode: COPY_S_B
/* 9099 */    MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 9118
/* 9103 */    MCD::OPC_CheckPredicate, 24, 121, 20, // Skip to: 14348
/* 9107 */    MCD::OPC_CheckField, 19, 1, 0, 115, 20, // Skip to: 14348
/* 9113 */    MCD::OPC_Decode, 229, 4, 153, 2, // Opcode: COPY_S_H
/* 9118 */    MCD::OPC_FilterValue, 11, 54, 0, // Skip to: 9176
/* 9122 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9125 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9138
/* 9129 */    MCD::OPC_CheckPredicate, 24, 95, 20, // Skip to: 14348
/* 9133 */    MCD::OPC_Decode, 230, 4, 154, 2, // Opcode: COPY_S_W
/* 9138 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 9157
/* 9142 */    MCD::OPC_CheckPredicate, 31, 82, 20, // Skip to: 14348
/* 9146 */    MCD::OPC_CheckField, 17, 1, 0, 76, 20, // Skip to: 14348
/* 9152 */    MCD::OPC_Decode, 228, 4, 155, 2, // Opcode: COPY_S_D
/* 9157 */    MCD::OPC_FilterValue, 3, 67, 20, // Skip to: 14348
/* 9161 */    MCD::OPC_CheckPredicate, 24, 63, 20, // Skip to: 14348
/* 9165 */    MCD::OPC_CheckField, 16, 2, 2, 57, 20, // Skip to: 14348
/* 9171 */    MCD::OPC_Decode, 212, 11, 156, 2, // Opcode: MOVE_V
/* 9176 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9189
/* 9180 */    MCD::OPC_CheckPredicate, 24, 44, 20, // Skip to: 14348
/* 9184 */    MCD::OPC_Decode, 231, 4, 152, 2, // Opcode: COPY_U_B
/* 9189 */    MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 9208
/* 9193 */    MCD::OPC_CheckPredicate, 24, 31, 20, // Skip to: 14348
/* 9197 */    MCD::OPC_CheckField, 19, 1, 0, 25, 20, // Skip to: 14348
/* 9203 */    MCD::OPC_Decode, 232, 4, 153, 2, // Opcode: COPY_U_H
/* 9208 */    MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 9227
/* 9212 */    MCD::OPC_CheckPredicate, 31, 12, 20, // Skip to: 14348
/* 9216 */    MCD::OPC_CheckField, 18, 2, 0, 6, 20, // Skip to: 14348
/* 9222 */    MCD::OPC_Decode, 233, 4, 154, 2, // Opcode: COPY_U_W
/* 9227 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9240
/* 9231 */    MCD::OPC_CheckPredicate, 24, 249, 19, // Skip to: 14348
/* 9235 */    MCD::OPC_Decode, 245, 8, 157, 2, // Opcode: INSERT_B
/* 9240 */    MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 9259
/* 9244 */    MCD::OPC_CheckPredicate, 24, 236, 19, // Skip to: 14348
/* 9248 */    MCD::OPC_CheckField, 19, 1, 0, 230, 19, // Skip to: 14348
/* 9254 */    MCD::OPC_Decode, 129, 9, 158, 2, // Opcode: INSERT_H
/* 9259 */    MCD::OPC_FilterValue, 19, 35, 0, // Skip to: 9298
/* 9263 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9266 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9279
/* 9270 */    MCD::OPC_CheckPredicate, 24, 210, 19, // Skip to: 14348
/* 9274 */    MCD::OPC_Decode, 132, 9, 159, 2, // Opcode: INSERT_W
/* 9279 */    MCD::OPC_FilterValue, 2, 201, 19, // Skip to: 14348
/* 9283 */    MCD::OPC_CheckPredicate, 31, 197, 19, // Skip to: 14348
/* 9287 */    MCD::OPC_CheckField, 17, 1, 0, 191, 19, // Skip to: 14348
/* 9293 */    MCD::OPC_Decode, 248, 8, 160, 2, // Opcode: INSERT_D
/* 9298 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9311
/* 9302 */    MCD::OPC_CheckPredicate, 24, 178, 19, // Skip to: 14348
/* 9306 */    MCD::OPC_Decode, 136, 9, 161, 2, // Opcode: INSVE_B
/* 9311 */    MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 9330
/* 9315 */    MCD::OPC_CheckPredicate, 24, 165, 19, // Skip to: 14348
/* 9319 */    MCD::OPC_CheckField, 19, 1, 0, 159, 19, // Skip to: 14348
/* 9325 */    MCD::OPC_Decode, 138, 9, 161, 2, // Opcode: INSVE_H
/* 9330 */    MCD::OPC_FilterValue, 23, 150, 19, // Skip to: 14348
/* 9334 */    MCD::OPC_ExtractField, 18, 2,  // Inst{19-18} ...
/* 9337 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9350
/* 9341 */    MCD::OPC_CheckPredicate, 24, 139, 19, // Skip to: 14348
/* 9345 */    MCD::OPC_Decode, 139, 9, 161, 2, // Opcode: INSVE_W
/* 9350 */    MCD::OPC_FilterValue, 2, 130, 19, // Skip to: 14348
/* 9354 */    MCD::OPC_CheckPredicate, 24, 126, 19, // Skip to: 14348
/* 9358 */    MCD::OPC_CheckField, 17, 1, 0, 120, 19, // Skip to: 14348
/* 9364 */    MCD::OPC_Decode, 137, 9, 161, 2, // Opcode: INSVE_D
/* 9369 */    MCD::OPC_FilterValue, 26, 163, 1, // Skip to: 9792
/* 9373 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9376 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9389
/* 9380 */    MCD::OPC_CheckPredicate, 24, 100, 19, // Skip to: 14348
/* 9384 */    MCD::OPC_Decode, 180, 7, 250, 1, // Opcode: FCAF_W
/* 9389 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9402
/* 9393 */    MCD::OPC_CheckPredicate, 24, 87, 19, // Skip to: 14348
/* 9397 */    MCD::OPC_Decode, 179, 7, 251, 1, // Opcode: FCAF_D
/* 9402 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9415
/* 9406 */    MCD::OPC_CheckPredicate, 24, 74, 19, // Skip to: 14348
/* 9410 */    MCD::OPC_Decode, 207, 7, 250, 1, // Opcode: FCUN_W
/* 9415 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9428
/* 9419 */    MCD::OPC_CheckPredicate, 24, 61, 19, // Skip to: 14348
/* 9423 */    MCD::OPC_Decode, 206, 7, 251, 1, // Opcode: FCUN_D
/* 9428 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9441
/* 9432 */    MCD::OPC_CheckPredicate, 24, 48, 19, // Skip to: 14348
/* 9436 */    MCD::OPC_Decode, 182, 7, 250, 1, // Opcode: FCEQ_W
/* 9441 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9454
/* 9445 */    MCD::OPC_CheckPredicate, 24, 35, 19, // Skip to: 14348
/* 9449 */    MCD::OPC_Decode, 181, 7, 251, 1, // Opcode: FCEQ_D
/* 9454 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9467
/* 9458 */    MCD::OPC_CheckPredicate, 24, 22, 19, // Skip to: 14348
/* 9462 */    MCD::OPC_Decode, 199, 7, 250, 1, // Opcode: FCUEQ_W
/* 9467 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9480
/* 9471 */    MCD::OPC_CheckPredicate, 24, 9, 19, // Skip to: 14348
/* 9475 */    MCD::OPC_Decode, 198, 7, 251, 1, // Opcode: FCUEQ_D
/* 9480 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9493
/* 9484 */    MCD::OPC_CheckPredicate, 24, 252, 18, // Skip to: 14348
/* 9488 */    MCD::OPC_Decode, 188, 7, 250, 1, // Opcode: FCLT_W
/* 9493 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9506
/* 9497 */    MCD::OPC_CheckPredicate, 24, 239, 18, // Skip to: 14348
/* 9501 */    MCD::OPC_Decode, 187, 7, 251, 1, // Opcode: FCLT_D
/* 9506 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9519
/* 9510 */    MCD::OPC_CheckPredicate, 24, 226, 18, // Skip to: 14348
/* 9514 */    MCD::OPC_Decode, 203, 7, 250, 1, // Opcode: FCULT_W
/* 9519 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9532
/* 9523 */    MCD::OPC_CheckPredicate, 24, 213, 18, // Skip to: 14348
/* 9527 */    MCD::OPC_Decode, 202, 7, 251, 1, // Opcode: FCULT_D
/* 9532 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 9545
/* 9536 */    MCD::OPC_CheckPredicate, 24, 200, 18, // Skip to: 14348
/* 9540 */    MCD::OPC_Decode, 186, 7, 250, 1, // Opcode: FCLE_W
/* 9545 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 9558
/* 9549 */    MCD::OPC_CheckPredicate, 24, 187, 18, // Skip to: 14348
/* 9553 */    MCD::OPC_Decode, 185, 7, 251, 1, // Opcode: FCLE_D
/* 9558 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9571
/* 9562 */    MCD::OPC_CheckPredicate, 24, 174, 18, // Skip to: 14348
/* 9566 */    MCD::OPC_Decode, 201, 7, 250, 1, // Opcode: FCULE_W
/* 9571 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9584
/* 9575 */    MCD::OPC_CheckPredicate, 24, 161, 18, // Skip to: 14348
/* 9579 */    MCD::OPC_Decode, 200, 7, 251, 1, // Opcode: FCULE_D
/* 9584 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9597
/* 9588 */    MCD::OPC_CheckPredicate, 24, 148, 18, // Skip to: 14348
/* 9592 */    MCD::OPC_Decode, 168, 8, 250, 1, // Opcode: FSAF_W
/* 9597 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 9610
/* 9601 */    MCD::OPC_CheckPredicate, 24, 135, 18, // Skip to: 14348
/* 9605 */    MCD::OPC_Decode, 167, 8, 251, 1, // Opcode: FSAF_D
/* 9610 */    MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 9623
/* 9614 */    MCD::OPC_CheckPredicate, 24, 122, 18, // Skip to: 14348
/* 9618 */    MCD::OPC_Decode, 204, 8, 250, 1, // Opcode: FSUN_W
/* 9623 */    MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 9636
/* 9627 */    MCD::OPC_CheckPredicate, 24, 109, 18, // Skip to: 14348
/* 9631 */    MCD::OPC_Decode, 203, 8, 251, 1, // Opcode: FSUN_D
/* 9636 */    MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 9649
/* 9640 */    MCD::OPC_CheckPredicate, 24, 96, 18, // Skip to: 14348
/* 9644 */    MCD::OPC_Decode, 170, 8, 250, 1, // Opcode: FSEQ_W
/* 9649 */    MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 9662
/* 9653 */    MCD::OPC_CheckPredicate, 24, 83, 18, // Skip to: 14348
/* 9657 */    MCD::OPC_Decode, 169, 8, 251, 1, // Opcode: FSEQ_D
/* 9662 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 9675
/* 9666 */    MCD::OPC_CheckPredicate, 24, 70, 18, // Skip to: 14348
/* 9670 */    MCD::OPC_Decode, 196, 8, 250, 1, // Opcode: FSUEQ_W
/* 9675 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 9688
/* 9679 */    MCD::OPC_CheckPredicate, 24, 57, 18, // Skip to: 14348
/* 9683 */    MCD::OPC_Decode, 195, 8, 251, 1, // Opcode: FSUEQ_D
/* 9688 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 9701
/* 9692 */    MCD::OPC_CheckPredicate, 24, 44, 18, // Skip to: 14348
/* 9696 */    MCD::OPC_Decode, 174, 8, 250, 1, // Opcode: FSLT_W
/* 9701 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 9714
/* 9705 */    MCD::OPC_CheckPredicate, 24, 31, 18, // Skip to: 14348
/* 9709 */    MCD::OPC_Decode, 173, 8, 251, 1, // Opcode: FSLT_D
/* 9714 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 9727
/* 9718 */    MCD::OPC_CheckPredicate, 24, 18, 18, // Skip to: 14348
/* 9722 */    MCD::OPC_Decode, 200, 8, 250, 1, // Opcode: FSULT_W
/* 9727 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 9740
/* 9731 */    MCD::OPC_CheckPredicate, 24, 5, 18, // Skip to: 14348
/* 9735 */    MCD::OPC_Decode, 199, 8, 251, 1, // Opcode: FSULT_D
/* 9740 */    MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 9753
/* 9744 */    MCD::OPC_CheckPredicate, 24, 248, 17, // Skip to: 14348
/* 9748 */    MCD::OPC_Decode, 172, 8, 250, 1, // Opcode: FSLE_W
/* 9753 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 9766
/* 9757 */    MCD::OPC_CheckPredicate, 24, 235, 17, // Skip to: 14348
/* 9761 */    MCD::OPC_Decode, 171, 8, 251, 1, // Opcode: FSLE_D
/* 9766 */    MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 9779
/* 9770 */    MCD::OPC_CheckPredicate, 24, 222, 17, // Skip to: 14348
/* 9774 */    MCD::OPC_Decode, 198, 8, 250, 1, // Opcode: FSULE_W
/* 9779 */    MCD::OPC_FilterValue, 31, 213, 17, // Skip to: 14348
/* 9783 */    MCD::OPC_CheckPredicate, 24, 209, 17, // Skip to: 14348
/* 9787 */    MCD::OPC_Decode, 197, 8, 251, 1, // Opcode: FSULE_D
/* 9792 */    MCD::OPC_FilterValue, 27, 85, 1, // Skip to: 10137
/* 9796 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 9799 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 9812
/* 9803 */    MCD::OPC_CheckPredicate, 24, 189, 17, // Skip to: 14348
/* 9807 */    MCD::OPC_Decode, 178, 7, 250, 1, // Opcode: FADD_W
/* 9812 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 9825
/* 9816 */    MCD::OPC_CheckPredicate, 24, 176, 17, // Skip to: 14348
/* 9820 */    MCD::OPC_Decode, 170, 7, 251, 1, // Opcode: FADD_D
/* 9825 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 9838
/* 9829 */    MCD::OPC_CheckPredicate, 24, 163, 17, // Skip to: 14348
/* 9833 */    MCD::OPC_Decode, 194, 8, 250, 1, // Opcode: FSUB_W
/* 9838 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 9851
/* 9842 */    MCD::OPC_CheckPredicate, 24, 150, 17, // Skip to: 14348
/* 9846 */    MCD::OPC_Decode, 186, 8, 251, 1, // Opcode: FSUB_D
/* 9851 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 9864
/* 9855 */    MCD::OPC_CheckPredicate, 24, 137, 17, // Skip to: 14348
/* 9859 */    MCD::OPC_Decode, 153, 8, 250, 1, // Opcode: FMUL_W
/* 9864 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 9877
/* 9868 */    MCD::OPC_CheckPredicate, 24, 124, 17, // Skip to: 14348
/* 9872 */    MCD::OPC_Decode, 145, 8, 251, 1, // Opcode: FMUL_D
/* 9877 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 9890
/* 9881 */    MCD::OPC_CheckPredicate, 24, 111, 17, // Skip to: 14348
/* 9885 */    MCD::OPC_Decode, 216, 7, 250, 1, // Opcode: FDIV_W
/* 9890 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 9903
/* 9894 */    MCD::OPC_CheckPredicate, 24, 98, 17, // Skip to: 14348
/* 9898 */    MCD::OPC_Decode, 208, 7, 251, 1, // Opcode: FDIV_D
/* 9903 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 9916
/* 9907 */    MCD::OPC_CheckPredicate, 24, 85, 17, // Skip to: 14348
/* 9911 */    MCD::OPC_Decode, 255, 7, 254, 1, // Opcode: FMADD_W
/* 9916 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 9929
/* 9920 */    MCD::OPC_CheckPredicate, 24, 72, 17, // Skip to: 14348
/* 9924 */    MCD::OPC_Decode, 254, 7, 255, 1, // Opcode: FMADD_D
/* 9929 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 9942
/* 9933 */    MCD::OPC_CheckPredicate, 24, 59, 17, // Skip to: 14348
/* 9937 */    MCD::OPC_Decode, 144, 8, 254, 1, // Opcode: FMSUB_W
/* 9942 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 9955
/* 9946 */    MCD::OPC_CheckPredicate, 24, 46, 17, // Skip to: 14348
/* 9950 */    MCD::OPC_Decode, 143, 8, 255, 1, // Opcode: FMSUB_D
/* 9955 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 9968
/* 9959 */    MCD::OPC_CheckPredicate, 24, 33, 17, // Skip to: 14348
/* 9963 */    MCD::OPC_Decode, 221, 7, 250, 1, // Opcode: FEXP2_W
/* 9968 */    MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 9981
/* 9972 */    MCD::OPC_CheckPredicate, 24, 20, 17, // Skip to: 14348
/* 9976 */    MCD::OPC_Decode, 219, 7, 251, 1, // Opcode: FEXP2_D
/* 9981 */    MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 9994
/* 9985 */    MCD::OPC_CheckPredicate, 24, 7, 17, // Skip to: 14348
/* 9989 */    MCD::OPC_Decode, 217, 7, 162, 2, // Opcode: FEXDO_H
/* 9994 */    MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 10007
/* 9998 */    MCD::OPC_CheckPredicate, 24, 250, 16, // Skip to: 14348
/* 10002 */   MCD::OPC_Decode, 218, 7, 163, 2, // Opcode: FEXDO_W
/* 10007 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10020
/* 10011 */   MCD::OPC_CheckPredicate, 24, 237, 16, // Skip to: 14348
/* 10015 */   MCD::OPC_Decode, 209, 8, 162, 2, // Opcode: FTQ_H
/* 10020 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10033
/* 10024 */   MCD::OPC_CheckPredicate, 24, 224, 16, // Skip to: 14348
/* 10028 */   MCD::OPC_Decode, 210, 8, 163, 2, // Opcode: FTQ_W
/* 10033 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10046
/* 10037 */   MCD::OPC_CheckPredicate, 24, 211, 16, // Skip to: 14348
/* 10041 */   MCD::OPC_Decode, 135, 8, 250, 1, // Opcode: FMIN_W
/* 10046 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10059
/* 10050 */   MCD::OPC_CheckPredicate, 24, 198, 16, // Skip to: 14348
/* 10054 */   MCD::OPC_Decode, 134, 8, 251, 1, // Opcode: FMIN_D
/* 10059 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10072
/* 10063 */   MCD::OPC_CheckPredicate, 24, 185, 16, // Skip to: 14348
/* 10067 */   MCD::OPC_Decode, 133, 8, 250, 1, // Opcode: FMIN_A_W
/* 10072 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10085
/* 10076 */   MCD::OPC_CheckPredicate, 24, 172, 16, // Skip to: 14348
/* 10080 */   MCD::OPC_Decode, 132, 8, 251, 1, // Opcode: FMIN_A_D
/* 10085 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10098
/* 10089 */   MCD::OPC_CheckPredicate, 24, 159, 16, // Skip to: 14348
/* 10093 */   MCD::OPC_Decode, 131, 8, 250, 1, // Opcode: FMAX_W
/* 10098 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 10111
/* 10102 */   MCD::OPC_CheckPredicate, 24, 146, 16, // Skip to: 14348
/* 10106 */   MCD::OPC_Decode, 130, 8, 251, 1, // Opcode: FMAX_D
/* 10111 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 10124
/* 10115 */   MCD::OPC_CheckPredicate, 24, 133, 16, // Skip to: 14348
/* 10119 */   MCD::OPC_Decode, 129, 8, 250, 1, // Opcode: FMAX_A_W
/* 10124 */   MCD::OPC_FilterValue, 31, 124, 16, // Skip to: 14348
/* 10128 */   MCD::OPC_CheckPredicate, 24, 120, 16, // Skip to: 14348
/* 10132 */   MCD::OPC_Decode, 128, 8, 251, 1, // Opcode: FMAX_A_D
/* 10137 */   MCD::OPC_FilterValue, 28, 59, 1, // Skip to: 10456
/* 10141 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10144 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10157
/* 10148 */   MCD::OPC_CheckPredicate, 24, 100, 16, // Skip to: 14348
/* 10152 */   MCD::OPC_Decode, 197, 7, 250, 1, // Opcode: FCOR_W
/* 10157 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10170
/* 10161 */   MCD::OPC_CheckPredicate, 24, 87, 16, // Skip to: 14348
/* 10165 */   MCD::OPC_Decode, 196, 7, 251, 1, // Opcode: FCOR_D
/* 10170 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10183
/* 10174 */   MCD::OPC_CheckPredicate, 24, 74, 16, // Skip to: 14348
/* 10178 */   MCD::OPC_Decode, 205, 7, 250, 1, // Opcode: FCUNE_W
/* 10183 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10196
/* 10187 */   MCD::OPC_CheckPredicate, 24, 61, 16, // Skip to: 14348
/* 10191 */   MCD::OPC_Decode, 204, 7, 251, 1, // Opcode: FCUNE_D
/* 10196 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10209
/* 10200 */   MCD::OPC_CheckPredicate, 24, 48, 16, // Skip to: 14348
/* 10204 */   MCD::OPC_Decode, 195, 7, 250, 1, // Opcode: FCNE_W
/* 10209 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10222
/* 10213 */   MCD::OPC_CheckPredicate, 24, 35, 16, // Skip to: 14348
/* 10217 */   MCD::OPC_Decode, 194, 7, 251, 1, // Opcode: FCNE_D
/* 10222 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10235
/* 10226 */   MCD::OPC_CheckPredicate, 24, 22, 16, // Skip to: 14348
/* 10230 */   MCD::OPC_Decode, 227, 12, 249, 1, // Opcode: MUL_Q_H
/* 10235 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10248
/* 10239 */   MCD::OPC_CheckPredicate, 24, 9, 16, // Skip to: 14348
/* 10243 */   MCD::OPC_Decode, 228, 12, 250, 1, // Opcode: MUL_Q_W
/* 10248 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10261
/* 10252 */   MCD::OPC_CheckPredicate, 24, 252, 15, // Skip to: 14348
/* 10256 */   MCD::OPC_Decode, 227, 10, 253, 1, // Opcode: MADD_Q_H
/* 10261 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10274
/* 10265 */   MCD::OPC_CheckPredicate, 24, 239, 15, // Skip to: 14348
/* 10269 */   MCD::OPC_Decode, 228, 10, 254, 1, // Opcode: MADD_Q_W
/* 10274 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10287
/* 10278 */   MCD::OPC_CheckPredicate, 24, 226, 15, // Skip to: 14348
/* 10282 */   MCD::OPC_Decode, 146, 12, 253, 1, // Opcode: MSUB_Q_H
/* 10287 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10300
/* 10291 */   MCD::OPC_CheckPredicate, 24, 213, 15, // Skip to: 14348
/* 10295 */   MCD::OPC_Decode, 147, 12, 254, 1, // Opcode: MSUB_Q_W
/* 10300 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 10313
/* 10304 */   MCD::OPC_CheckPredicate, 24, 200, 15, // Skip to: 14348
/* 10308 */   MCD::OPC_Decode, 178, 8, 250, 1, // Opcode: FSOR_W
/* 10313 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 10326
/* 10317 */   MCD::OPC_CheckPredicate, 24, 187, 15, // Skip to: 14348
/* 10321 */   MCD::OPC_Decode, 177, 8, 251, 1, // Opcode: FSOR_D
/* 10326 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 10339
/* 10330 */   MCD::OPC_CheckPredicate, 24, 174, 15, // Skip to: 14348
/* 10334 */   MCD::OPC_Decode, 202, 8, 250, 1, // Opcode: FSUNE_W
/* 10339 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 10352
/* 10343 */   MCD::OPC_CheckPredicate, 24, 161, 15, // Skip to: 14348
/* 10347 */   MCD::OPC_Decode, 201, 8, 251, 1, // Opcode: FSUNE_D
/* 10352 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 10365
/* 10356 */   MCD::OPC_CheckPredicate, 24, 148, 15, // Skip to: 14348
/* 10360 */   MCD::OPC_Decode, 176, 8, 250, 1, // Opcode: FSNE_W
/* 10365 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 10378
/* 10369 */   MCD::OPC_CheckPredicate, 24, 135, 15, // Skip to: 14348
/* 10373 */   MCD::OPC_Decode, 175, 8, 251, 1, // Opcode: FSNE_D
/* 10378 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 10391
/* 10382 */   MCD::OPC_CheckPredicate, 24, 122, 15, // Skip to: 14348
/* 10386 */   MCD::OPC_Decode, 203, 12, 249, 1, // Opcode: MULR_Q_H
/* 10391 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 10404
/* 10395 */   MCD::OPC_CheckPredicate, 24, 109, 15, // Skip to: 14348
/* 10399 */   MCD::OPC_Decode, 204, 12, 250, 1, // Opcode: MULR_Q_W
/* 10404 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 10417
/* 10408 */   MCD::OPC_CheckPredicate, 24, 96, 15, // Skip to: 14348
/* 10412 */   MCD::OPC_Decode, 211, 10, 253, 1, // Opcode: MADDR_Q_H
/* 10417 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 10430
/* 10421 */   MCD::OPC_CheckPredicate, 24, 83, 15, // Skip to: 14348
/* 10425 */   MCD::OPC_Decode, 212, 10, 254, 1, // Opcode: MADDR_Q_W
/* 10430 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 10443
/* 10434 */   MCD::OPC_CheckPredicate, 24, 70, 15, // Skip to: 14348
/* 10438 */   MCD::OPC_Decode, 130, 12, 253, 1, // Opcode: MSUBR_Q_H
/* 10443 */   MCD::OPC_FilterValue, 29, 61, 15, // Skip to: 14348
/* 10447 */   MCD::OPC_CheckPredicate, 24, 57, 15, // Skip to: 14348
/* 10451 */   MCD::OPC_Decode, 131, 12, 254, 1, // Opcode: MSUBR_Q_W
/* 10456 */   MCD::OPC_FilterValue, 30, 220, 2, // Skip to: 11192
/* 10460 */   MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 10463 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10476
/* 10467 */   MCD::OPC_CheckPredicate, 24, 37, 15, // Skip to: 14348
/* 10471 */   MCD::OPC_Decode, 128, 1, 248, 1, // Opcode: AND_V
/* 10476 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10489
/* 10480 */   MCD::OPC_CheckPredicate, 24, 24, 15, // Skip to: 14348
/* 10484 */   MCD::OPC_Decode, 153, 13, 248, 1, // Opcode: OR_V
/* 10489 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10502
/* 10493 */   MCD::OPC_CheckPredicate, 24, 11, 15, // Skip to: 14348
/* 10497 */   MCD::OPC_Decode, 137, 13, 248, 1, // Opcode: NOR_V
/* 10502 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10515
/* 10506 */   MCD::OPC_CheckPredicate, 24, 254, 14, // Skip to: 14348
/* 10510 */   MCD::OPC_Decode, 165, 18, 248, 1, // Opcode: XOR_V
/* 10515 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10528
/* 10519 */   MCD::OPC_CheckPredicate, 24, 241, 14, // Skip to: 14348
/* 10523 */   MCD::OPC_Decode, 226, 2, 252, 1, // Opcode: BMNZ_V
/* 10528 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10541
/* 10532 */   MCD::OPC_CheckPredicate, 24, 228, 14, // Skip to: 14348
/* 10536 */   MCD::OPC_Decode, 228, 2, 252, 1, // Opcode: BMZ_V
/* 10541 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10554
/* 10545 */   MCD::OPC_CheckPredicate, 24, 215, 14, // Skip to: 14348
/* 10549 */   MCD::OPC_Decode, 145, 3, 252, 1, // Opcode: BSEL_V
/* 10554 */   MCD::OPC_FilterValue, 24, 211, 0, // Skip to: 10769
/* 10558 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10561 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10574
/* 10565 */   MCD::OPC_CheckPredicate, 24, 195, 14, // Skip to: 14348
/* 10569 */   MCD::OPC_Decode, 235, 7, 164, 2, // Opcode: FILL_B
/* 10574 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10587
/* 10578 */   MCD::OPC_CheckPredicate, 24, 182, 14, // Skip to: 14348
/* 10582 */   MCD::OPC_Decode, 239, 7, 165, 2, // Opcode: FILL_H
/* 10587 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10600
/* 10591 */   MCD::OPC_CheckPredicate, 24, 169, 14, // Skip to: 14348
/* 10595 */   MCD::OPC_Decode, 240, 7, 166, 2, // Opcode: FILL_W
/* 10600 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10613
/* 10604 */   MCD::OPC_CheckPredicate, 31, 156, 14, // Skip to: 14348
/* 10608 */   MCD::OPC_Decode, 236, 7, 167, 2, // Opcode: FILL_D
/* 10613 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10626
/* 10617 */   MCD::OPC_CheckPredicate, 24, 143, 14, // Skip to: 14348
/* 10621 */   MCD::OPC_Decode, 174, 13, 156, 2, // Opcode: PCNT_B
/* 10626 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10639
/* 10630 */   MCD::OPC_CheckPredicate, 24, 130, 14, // Skip to: 14348
/* 10634 */   MCD::OPC_Decode, 176, 13, 168, 2, // Opcode: PCNT_H
/* 10639 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10652
/* 10643 */   MCD::OPC_CheckPredicate, 24, 117, 14, // Skip to: 14348
/* 10647 */   MCD::OPC_Decode, 177, 13, 169, 2, // Opcode: PCNT_W
/* 10652 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10665
/* 10656 */   MCD::OPC_CheckPredicate, 24, 104, 14, // Skip to: 14348
/* 10660 */   MCD::OPC_Decode, 175, 13, 170, 2, // Opcode: PCNT_D
/* 10665 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10678
/* 10669 */   MCD::OPC_CheckPredicate, 24, 91, 14, // Skip to: 14348
/* 10673 */   MCD::OPC_Decode, 240, 12, 156, 2, // Opcode: NLOC_B
/* 10678 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10691
/* 10682 */   MCD::OPC_CheckPredicate, 24, 78, 14, // Skip to: 14348
/* 10686 */   MCD::OPC_Decode, 242, 12, 168, 2, // Opcode: NLOC_H
/* 10691 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10704
/* 10695 */   MCD::OPC_CheckPredicate, 24, 65, 14, // Skip to: 14348
/* 10699 */   MCD::OPC_Decode, 243, 12, 169, 2, // Opcode: NLOC_W
/* 10704 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10717
/* 10708 */   MCD::OPC_CheckPredicate, 24, 52, 14, // Skip to: 14348
/* 10712 */   MCD::OPC_Decode, 241, 12, 170, 2, // Opcode: NLOC_D
/* 10717 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10730
/* 10721 */   MCD::OPC_CheckPredicate, 24, 39, 14, // Skip to: 14348
/* 10725 */   MCD::OPC_Decode, 244, 12, 156, 2, // Opcode: NLZC_B
/* 10730 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10743
/* 10734 */   MCD::OPC_CheckPredicate, 24, 26, 14, // Skip to: 14348
/* 10738 */   MCD::OPC_Decode, 246, 12, 168, 2, // Opcode: NLZC_H
/* 10743 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10756
/* 10747 */   MCD::OPC_CheckPredicate, 24, 13, 14, // Skip to: 14348
/* 10751 */   MCD::OPC_Decode, 247, 12, 169, 2, // Opcode: NLZC_W
/* 10756 */   MCD::OPC_FilterValue, 15, 4, 14, // Skip to: 14348
/* 10760 */   MCD::OPC_CheckPredicate, 24, 0, 14, // Skip to: 14348
/* 10764 */   MCD::OPC_Decode, 245, 12, 170, 2, // Opcode: NLZC_D
/* 10769 */   MCD::OPC_FilterValue, 25, 247, 13, // Skip to: 14348
/* 10773 */   MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 10776 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 10789
/* 10780 */   MCD::OPC_CheckPredicate, 24, 236, 13, // Skip to: 14348
/* 10784 */   MCD::OPC_Decode, 184, 7, 169, 2, // Opcode: FCLASS_W
/* 10789 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 10802
/* 10793 */   MCD::OPC_CheckPredicate, 24, 223, 13, // Skip to: 14348
/* 10797 */   MCD::OPC_Decode, 183, 7, 170, 2, // Opcode: FCLASS_D
/* 10802 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 10815
/* 10806 */   MCD::OPC_CheckPredicate, 24, 210, 13, // Skip to: 14348
/* 10810 */   MCD::OPC_Decode, 212, 8, 169, 2, // Opcode: FTRUNC_S_W
/* 10815 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 10828
/* 10819 */   MCD::OPC_CheckPredicate, 24, 197, 13, // Skip to: 14348
/* 10823 */   MCD::OPC_Decode, 211, 8, 170, 2, // Opcode: FTRUNC_S_D
/* 10828 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 10841
/* 10832 */   MCD::OPC_CheckPredicate, 24, 184, 13, // Skip to: 14348
/* 10836 */   MCD::OPC_Decode, 214, 8, 169, 2, // Opcode: FTRUNC_U_W
/* 10841 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 10854
/* 10845 */   MCD::OPC_CheckPredicate, 24, 171, 13, // Skip to: 14348
/* 10849 */   MCD::OPC_Decode, 213, 8, 170, 2, // Opcode: FTRUNC_U_D
/* 10854 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 10867
/* 10858 */   MCD::OPC_CheckPredicate, 24, 158, 13, // Skip to: 14348
/* 10862 */   MCD::OPC_Decode, 185, 8, 169, 2, // Opcode: FSQRT_W
/* 10867 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 10880
/* 10871 */   MCD::OPC_CheckPredicate, 24, 145, 13, // Skip to: 14348
/* 10875 */   MCD::OPC_Decode, 179, 8, 170, 2, // Opcode: FSQRT_D
/* 10880 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 10893
/* 10884 */   MCD::OPC_CheckPredicate, 24, 132, 13, // Skip to: 14348
/* 10888 */   MCD::OPC_Decode, 166, 8, 169, 2, // Opcode: FRSQRT_W
/* 10893 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 10906
/* 10897 */   MCD::OPC_CheckPredicate, 24, 119, 13, // Skip to: 14348
/* 10901 */   MCD::OPC_Decode, 165, 8, 170, 2, // Opcode: FRSQRT_D
/* 10906 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 10919
/* 10910 */   MCD::OPC_CheckPredicate, 24, 106, 13, // Skip to: 14348
/* 10914 */   MCD::OPC_Decode, 162, 8, 169, 2, // Opcode: FRCP_W
/* 10919 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 10932
/* 10923 */   MCD::OPC_CheckPredicate, 24, 93, 13, // Skip to: 14348
/* 10927 */   MCD::OPC_Decode, 161, 8, 170, 2, // Opcode: FRCP_D
/* 10932 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 10945
/* 10936 */   MCD::OPC_CheckPredicate, 24, 80, 13, // Skip to: 14348
/* 10940 */   MCD::OPC_Decode, 164, 8, 169, 2, // Opcode: FRINT_W
/* 10945 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 10958
/* 10949 */   MCD::OPC_CheckPredicate, 24, 67, 13, // Skip to: 14348
/* 10953 */   MCD::OPC_Decode, 163, 8, 170, 2, // Opcode: FRINT_D
/* 10958 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 10971
/* 10962 */   MCD::OPC_CheckPredicate, 24, 54, 13, // Skip to: 14348
/* 10966 */   MCD::OPC_Decode, 242, 7, 169, 2, // Opcode: FLOG2_W
/* 10971 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 10984
/* 10975 */   MCD::OPC_CheckPredicate, 24, 41, 13, // Skip to: 14348
/* 10979 */   MCD::OPC_Decode, 241, 7, 170, 2, // Opcode: FLOG2_D
/* 10984 */   MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 10997
/* 10988 */   MCD::OPC_CheckPredicate, 24, 28, 13, // Skip to: 14348
/* 10992 */   MCD::OPC_Decode, 224, 7, 171, 2, // Opcode: FEXUPL_W
/* 10997 */   MCD::OPC_FilterValue, 17, 9, 0, // Skip to: 11010
/* 11001 */   MCD::OPC_CheckPredicate, 24, 15, 13, // Skip to: 14348
/* 11005 */   MCD::OPC_Decode, 223, 7, 172, 2, // Opcode: FEXUPL_D
/* 11010 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 11023
/* 11014 */   MCD::OPC_CheckPredicate, 24, 2, 13, // Skip to: 14348
/* 11018 */   MCD::OPC_Decode, 226, 7, 171, 2, // Opcode: FEXUPR_W
/* 11023 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 11036
/* 11027 */   MCD::OPC_CheckPredicate, 24, 245, 12, // Skip to: 14348
/* 11031 */   MCD::OPC_Decode, 225, 7, 172, 2, // Opcode: FEXUPR_D
/* 11036 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11049
/* 11040 */   MCD::OPC_CheckPredicate, 24, 232, 12, // Skip to: 14348
/* 11044 */   MCD::OPC_Decode, 232, 7, 171, 2, // Opcode: FFQL_W
/* 11049 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11062
/* 11053 */   MCD::OPC_CheckPredicate, 24, 219, 12, // Skip to: 14348
/* 11057 */   MCD::OPC_Decode, 231, 7, 172, 2, // Opcode: FFQL_D
/* 11062 */   MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 11075
/* 11066 */   MCD::OPC_CheckPredicate, 24, 206, 12, // Skip to: 14348
/* 11070 */   MCD::OPC_Decode, 234, 7, 171, 2, // Opcode: FFQR_W
/* 11075 */   MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 11088
/* 11079 */   MCD::OPC_CheckPredicate, 24, 193, 12, // Skip to: 14348
/* 11083 */   MCD::OPC_Decode, 233, 7, 172, 2, // Opcode: FFQR_D
/* 11088 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11101
/* 11092 */   MCD::OPC_CheckPredicate, 24, 180, 12, // Skip to: 14348
/* 11096 */   MCD::OPC_Decode, 206, 8, 169, 2, // Opcode: FTINT_S_W
/* 11101 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11114
/* 11105 */   MCD::OPC_CheckPredicate, 24, 167, 12, // Skip to: 14348
/* 11109 */   MCD::OPC_Decode, 205, 8, 170, 2, // Opcode: FTINT_S_D
/* 11114 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 11127
/* 11118 */   MCD::OPC_CheckPredicate, 24, 154, 12, // Skip to: 14348
/* 11122 */   MCD::OPC_Decode, 208, 8, 169, 2, // Opcode: FTINT_U_W
/* 11127 */   MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 11140
/* 11131 */   MCD::OPC_CheckPredicate, 24, 141, 12, // Skip to: 14348
/* 11135 */   MCD::OPC_Decode, 207, 8, 170, 2, // Opcode: FTINT_U_D
/* 11140 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11153
/* 11144 */   MCD::OPC_CheckPredicate, 24, 128, 12, // Skip to: 14348
/* 11148 */   MCD::OPC_Decode, 228, 7, 169, 2, // Opcode: FFINT_S_W
/* 11153 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11166
/* 11157 */   MCD::OPC_CheckPredicate, 24, 115, 12, // Skip to: 14348
/* 11161 */   MCD::OPC_Decode, 227, 7, 170, 2, // Opcode: FFINT_S_D
/* 11166 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11179
/* 11170 */   MCD::OPC_CheckPredicate, 24, 102, 12, // Skip to: 14348
/* 11174 */   MCD::OPC_Decode, 230, 7, 169, 2, // Opcode: FFINT_U_W
/* 11179 */   MCD::OPC_FilterValue, 31, 93, 12, // Skip to: 14348
/* 11183 */   MCD::OPC_CheckPredicate, 24, 89, 12, // Skip to: 14348
/* 11187 */   MCD::OPC_Decode, 229, 7, 170, 2, // Opcode: FFINT_U_D
/* 11192 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 11205
/* 11196 */   MCD::OPC_CheckPredicate, 24, 76, 12, // Skip to: 14348
/* 11200 */   MCD::OPC_Decode, 222, 9, 173, 2, // Opcode: LD_B
/* 11205 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 11218
/* 11209 */   MCD::OPC_CheckPredicate, 24, 63, 12, // Skip to: 14348
/* 11213 */   MCD::OPC_Decode, 224, 9, 173, 2, // Opcode: LD_H
/* 11218 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 11231
/* 11222 */   MCD::OPC_CheckPredicate, 24, 50, 12, // Skip to: 14348
/* 11226 */   MCD::OPC_Decode, 226, 9, 173, 2, // Opcode: LD_W
/* 11231 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 11244
/* 11235 */   MCD::OPC_CheckPredicate, 24, 37, 12, // Skip to: 14348
/* 11239 */   MCD::OPC_Decode, 223, 9, 173, 2, // Opcode: LD_D
/* 11244 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 11257
/* 11248 */   MCD::OPC_CheckPredicate, 24, 24, 12, // Skip to: 14348
/* 11252 */   MCD::OPC_Decode, 187, 16, 173, 2, // Opcode: ST_B
/* 11257 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 11270
/* 11261 */   MCD::OPC_CheckPredicate, 24, 11, 12, // Skip to: 14348
/* 11265 */   MCD::OPC_Decode, 189, 16, 173, 2, // Opcode: ST_H
/* 11270 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 11283
/* 11274 */   MCD::OPC_CheckPredicate, 24, 254, 11, // Skip to: 14348
/* 11278 */   MCD::OPC_Decode, 190, 16, 173, 2, // Opcode: ST_W
/* 11283 */   MCD::OPC_FilterValue, 39, 245, 11, // Skip to: 14348
/* 11287 */   MCD::OPC_CheckPredicate, 24, 241, 11, // Skip to: 14348
/* 11291 */   MCD::OPC_Decode, 188, 16, 173, 2, // Opcode: ST_D
/* 11296 */   MCD::OPC_FilterValue, 31, 176, 10, // Skip to: 14036
/* 11300 */   MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 11303 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11316
/* 11307 */   MCD::OPC_CheckPredicate, 23, 221, 11, // Skip to: 14348
/* 11311 */   MCD::OPC_Decode, 132, 7, 174, 2, // Opcode: EXT
/* 11316 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11329
/* 11320 */   MCD::OPC_CheckPredicate, 23, 208, 11, // Skip to: 14348
/* 11324 */   MCD::OPC_Decode, 244, 8, 175, 2, // Opcode: INS
/* 11329 */   MCD::OPC_FilterValue, 10, 42, 0, // Skip to: 11375
/* 11333 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11336 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 11349
/* 11340 */   MCD::OPC_CheckPredicate, 30, 188, 11, // Skip to: 14348
/* 11344 */   MCD::OPC_Decode, 180, 10, 176, 2, // Opcode: LWX
/* 11349 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11362
/* 11353 */   MCD::OPC_CheckPredicate, 30, 175, 11, // Skip to: 14348
/* 11357 */   MCD::OPC_Decode, 235, 9, 176, 2, // Opcode: LHX
/* 11362 */   MCD::OPC_FilterValue, 6, 166, 11, // Skip to: 14348
/* 11366 */   MCD::OPC_CheckPredicate, 30, 162, 11, // Skip to: 14348
/* 11370 */   MCD::OPC_Decode, 193, 9, 176, 2, // Opcode: LBUX
/* 11375 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 11394
/* 11379 */   MCD::OPC_CheckPredicate, 30, 149, 11, // Skip to: 14348
/* 11383 */   MCD::OPC_CheckField, 6, 10, 0, 143, 11, // Skip to: 14348
/* 11389 */   MCD::OPC_Decode, 135, 9, 177, 2, // Opcode: INSV
/* 11394 */   MCD::OPC_FilterValue, 16, 51, 1, // Skip to: 11705
/* 11398 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11401 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 11413
/* 11405 */   MCD::OPC_CheckPredicate, 30, 123, 11, // Skip to: 14348
/* 11409 */   MCD::OPC_Decode, 84, 178, 2, // Opcode: ADDU_QB
/* 11413 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 11426
/* 11417 */   MCD::OPC_CheckPredicate, 30, 111, 11, // Skip to: 14348
/* 11421 */   MCD::OPC_Decode, 231, 16, 178, 2, // Opcode: SUBU_QB
/* 11426 */   MCD::OPC_FilterValue, 4, 8, 0, // Skip to: 11438
/* 11430 */   MCD::OPC_CheckPredicate, 30, 98, 11, // Skip to: 14348
/* 11434 */   MCD::OPC_Decode, 88, 178, 2, // Opcode: ADDU_S_QB
/* 11438 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11451
/* 11442 */   MCD::OPC_CheckPredicate, 30, 86, 11, // Skip to: 14348
/* 11446 */   MCD::OPC_Decode, 235, 16, 178, 2, // Opcode: SUBU_S_QB
/* 11451 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11464
/* 11455 */   MCD::OPC_CheckPredicate, 30, 73, 11, // Skip to: 14348
/* 11459 */   MCD::OPC_Decode, 191, 12, 178, 2, // Opcode: MULEU_S_PH_QBL
/* 11464 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 11477
/* 11468 */   MCD::OPC_CheckPredicate, 30, 60, 11, // Skip to: 14348
/* 11472 */   MCD::OPC_Decode, 193, 12, 178, 2, // Opcode: MULEU_S_PH_QBR
/* 11477 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 11489
/* 11481 */   MCD::OPC_CheckPredicate, 57, 47, 11, // Skip to: 14348
/* 11485 */   MCD::OPC_Decode, 82, 178, 2, // Opcode: ADDU_PH
/* 11489 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 11502
/* 11493 */   MCD::OPC_CheckPredicate, 57, 35, 11, // Skip to: 14348
/* 11497 */   MCD::OPC_Decode, 229, 16, 178, 2, // Opcode: SUBU_PH
/* 11502 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 11514
/* 11506 */   MCD::OPC_CheckPredicate, 30, 22, 11, // Skip to: 14348
/* 11510 */   MCD::OPC_Decode, 55, 178, 2, // Opcode: ADDQ_PH
/* 11514 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11527
/* 11518 */   MCD::OPC_CheckPredicate, 30, 10, 11, // Skip to: 14348
/* 11522 */   MCD::OPC_Decode, 200, 16, 178, 2, // Opcode: SUBQ_PH
/* 11527 */   MCD::OPC_FilterValue, 12, 8, 0, // Skip to: 11539
/* 11531 */   MCD::OPC_CheckPredicate, 57, 253, 10, // Skip to: 14348
/* 11535 */   MCD::OPC_Decode, 86, 178, 2, // Opcode: ADDU_S_PH
/* 11539 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11552
/* 11543 */   MCD::OPC_CheckPredicate, 57, 241, 10, // Skip to: 14348
/* 11547 */   MCD::OPC_Decode, 233, 16, 178, 2, // Opcode: SUBU_S_PH
/* 11552 */   MCD::OPC_FilterValue, 14, 8, 0, // Skip to: 11564
/* 11556 */   MCD::OPC_CheckPredicate, 30, 228, 10, // Skip to: 14348
/* 11560 */   MCD::OPC_Decode, 57, 178, 2, // Opcode: ADDQ_S_PH
/* 11564 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11577
/* 11568 */   MCD::OPC_CheckPredicate, 30, 216, 10, // Skip to: 14348
/* 11572 */   MCD::OPC_Decode, 202, 16, 178, 2, // Opcode: SUBQ_S_PH
/* 11577 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 11588
/* 11581 */   MCD::OPC_CheckPredicate, 30, 203, 10, // Skip to: 14348
/* 11585 */   MCD::OPC_Decode, 61, 49, // Opcode: ADDSC
/* 11588 */   MCD::OPC_FilterValue, 17, 7, 0, // Skip to: 11599
/* 11592 */   MCD::OPC_CheckPredicate, 30, 192, 10, // Skip to: 14348
/* 11596 */   MCD::OPC_Decode, 98, 49, // Opcode: ADDWC
/* 11599 */   MCD::OPC_FilterValue, 18, 8, 0, // Skip to: 11611
/* 11603 */   MCD::OPC_CheckPredicate, 30, 181, 10, // Skip to: 14348
/* 11607 */   MCD::OPC_Decode, 196, 11, 49, // Opcode: MODSUB
/* 11611 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 11630
/* 11615 */   MCD::OPC_CheckPredicate, 30, 169, 10, // Skip to: 14348
/* 11619 */   MCD::OPC_CheckField, 16, 5, 0, 163, 10, // Skip to: 14348
/* 11625 */   MCD::OPC_Decode, 153, 14, 179, 2, // Opcode: RADDU_W_QB
/* 11630 */   MCD::OPC_FilterValue, 22, 7, 0, // Skip to: 11641
/* 11634 */   MCD::OPC_CheckPredicate, 30, 150, 10, // Skip to: 14348
/* 11638 */   MCD::OPC_Decode, 59, 49, // Opcode: ADDQ_S_W
/* 11641 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 11653
/* 11645 */   MCD::OPC_CheckPredicate, 30, 139, 10, // Skip to: 14348
/* 11649 */   MCD::OPC_Decode, 204, 16, 49, // Opcode: SUBQ_S_W
/* 11653 */   MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 11666
/* 11657 */   MCD::OPC_CheckPredicate, 30, 127, 10, // Skip to: 14348
/* 11661 */   MCD::OPC_Decode, 187, 12, 180, 2, // Opcode: MULEQ_S_W_PHL
/* 11666 */   MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 11679
/* 11670 */   MCD::OPC_CheckPredicate, 30, 114, 10, // Skip to: 14348
/* 11674 */   MCD::OPC_Decode, 189, 12, 180, 2, // Opcode: MULEQ_S_W_PHR
/* 11679 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 11692
/* 11683 */   MCD::OPC_CheckPredicate, 57, 101, 10, // Skip to: 14348
/* 11687 */   MCD::OPC_Decode, 199, 12, 178, 2, // Opcode: MULQ_S_PH
/* 11692 */   MCD::OPC_FilterValue, 31, 92, 10, // Skip to: 14348
/* 11696 */   MCD::OPC_CheckPredicate, 30, 88, 10, // Skip to: 14348
/* 11700 */   MCD::OPC_Decode, 195, 12, 178, 2, // Opcode: MULQ_RS_PH
/* 11705 */   MCD::OPC_FilterValue, 17, 63, 1, // Skip to: 12028
/* 11709 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 11712 */   MCD::OPC_FilterValue, 0, 14, 0, // Skip to: 11730
/* 11716 */   MCD::OPC_CheckPredicate, 30, 68, 10, // Skip to: 14348
/* 11720 */   MCD::OPC_CheckField, 11, 5, 0, 62, 10, // Skip to: 14348
/* 11726 */   MCD::OPC_Decode, 148, 4, 62, // Opcode: CMPU_EQ_QB
/* 11730 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 11748
/* 11734 */   MCD::OPC_CheckPredicate, 30, 50, 10, // Skip to: 14348
/* 11738 */   MCD::OPC_CheckField, 11, 5, 0, 44, 10, // Skip to: 14348
/* 11744 */   MCD::OPC_Decode, 152, 4, 62, // Opcode: CMPU_LT_QB
/* 11748 */   MCD::OPC_FilterValue, 2, 14, 0, // Skip to: 11766
/* 11752 */   MCD::OPC_CheckPredicate, 30, 32, 10, // Skip to: 14348
/* 11756 */   MCD::OPC_CheckField, 11, 5, 0, 26, 10, // Skip to: 14348
/* 11762 */   MCD::OPC_Decode, 150, 4, 62, // Opcode: CMPU_LE_QB
/* 11766 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 11779
/* 11770 */   MCD::OPC_CheckPredicate, 30, 14, 10, // Skip to: 14348
/* 11774 */   MCD::OPC_Decode, 180, 13, 178, 2, // Opcode: PICK_QB
/* 11779 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 11792
/* 11783 */   MCD::OPC_CheckPredicate, 30, 1, 10, // Skip to: 14348
/* 11787 */   MCD::OPC_Decode, 142, 4, 180, 2, // Opcode: CMPGU_EQ_QB
/* 11792 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 11805
/* 11796 */   MCD::OPC_CheckPredicate, 30, 244, 9, // Skip to: 14348
/* 11800 */   MCD::OPC_Decode, 146, 4, 180, 2, // Opcode: CMPGU_LT_QB
/* 11805 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 11818
/* 11809 */   MCD::OPC_CheckPredicate, 30, 231, 9, // Skip to: 14348
/* 11813 */   MCD::OPC_Decode, 144, 4, 180, 2, // Opcode: CMPGU_LE_QB
/* 11818 */   MCD::OPC_FilterValue, 8, 14, 0, // Skip to: 11836
/* 11822 */   MCD::OPC_CheckPredicate, 30, 218, 9, // Skip to: 14348
/* 11826 */   MCD::OPC_CheckField, 11, 5, 0, 212, 9, // Skip to: 14348
/* 11832 */   MCD::OPC_Decode, 158, 4, 62, // Opcode: CMP_EQ_PH
/* 11836 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 11854
/* 11840 */   MCD::OPC_CheckPredicate, 30, 200, 9, // Skip to: 14348
/* 11844 */   MCD::OPC_CheckField, 11, 5, 0, 194, 9, // Skip to: 14348
/* 11850 */   MCD::OPC_Decode, 172, 4, 62, // Opcode: CMP_LT_PH
/* 11854 */   MCD::OPC_FilterValue, 10, 14, 0, // Skip to: 11872
/* 11858 */   MCD::OPC_CheckPredicate, 30, 182, 9, // Skip to: 14348
/* 11862 */   MCD::OPC_CheckField, 11, 5, 0, 176, 9, // Skip to: 14348
/* 11868 */   MCD::OPC_Decode, 166, 4, 62, // Opcode: CMP_LE_PH
/* 11872 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 11885
/* 11876 */   MCD::OPC_CheckPredicate, 30, 164, 9, // Skip to: 14348
/* 11880 */   MCD::OPC_Decode, 178, 13, 178, 2, // Opcode: PICK_PH
/* 11885 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 11898
/* 11889 */   MCD::OPC_CheckPredicate, 30, 151, 9, // Skip to: 14348
/* 11893 */   MCD::OPC_Decode, 207, 13, 178, 2, // Opcode: PRECRQ_QB_PH
/* 11898 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 11911
/* 11902 */   MCD::OPC_CheckPredicate, 57, 138, 9, // Skip to: 14348
/* 11906 */   MCD::OPC_Decode, 211, 13, 178, 2, // Opcode: PRECR_QB_PH
/* 11911 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 11924
/* 11915 */   MCD::OPC_CheckPredicate, 30, 125, 9, // Skip to: 14348
/* 11919 */   MCD::OPC_Decode, 161, 13, 178, 2, // Opcode: PACKRL_PH
/* 11924 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 11937
/* 11928 */   MCD::OPC_CheckPredicate, 30, 112, 9, // Skip to: 14348
/* 11932 */   MCD::OPC_Decode, 203, 13, 178, 2, // Opcode: PRECRQU_S_QB_PH
/* 11937 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 11950
/* 11941 */   MCD::OPC_CheckPredicate, 30, 99, 9, // Skip to: 14348
/* 11945 */   MCD::OPC_Decode, 205, 13, 181, 2, // Opcode: PRECRQ_PH_W
/* 11950 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 11963
/* 11954 */   MCD::OPC_CheckPredicate, 30, 86, 9, // Skip to: 14348
/* 11958 */   MCD::OPC_Decode, 209, 13, 181, 2, // Opcode: PRECRQ_RS_PH_W
/* 11963 */   MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 11976
/* 11967 */   MCD::OPC_CheckPredicate, 57, 73, 9, // Skip to: 14348
/* 11971 */   MCD::OPC_Decode, 136, 4, 180, 2, // Opcode: CMPGDU_EQ_QB
/* 11976 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 11989
/* 11980 */   MCD::OPC_CheckPredicate, 57, 60, 9, // Skip to: 14348
/* 11984 */   MCD::OPC_Decode, 140, 4, 180, 2, // Opcode: CMPGDU_LT_QB
/* 11989 */   MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 12002
/* 11993 */   MCD::OPC_CheckPredicate, 57, 47, 9, // Skip to: 14348
/* 11997 */   MCD::OPC_Decode, 138, 4, 180, 2, // Opcode: CMPGDU_LE_QB
/* 12002 */   MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 12015
/* 12006 */   MCD::OPC_CheckPredicate, 57, 34, 9, // Skip to: 14348
/* 12010 */   MCD::OPC_Decode, 213, 13, 182, 2, // Opcode: PRECR_SRA_PH_W
/* 12015 */   MCD::OPC_FilterValue, 31, 25, 9, // Skip to: 14348
/* 12019 */   MCD::OPC_CheckPredicate, 57, 21, 9, // Skip to: 14348
/* 12023 */   MCD::OPC_Decode, 215, 13, 182, 2, // Opcode: PRECR_SRA_R_PH_W
/* 12028 */   MCD::OPC_FilterValue, 18, 72, 1, // Skip to: 12360
/* 12032 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12035 */   MCD::OPC_FilterValue, 1, 14, 0, // Skip to: 12053
/* 12039 */   MCD::OPC_CheckPredicate, 57, 1, 9, // Skip to: 14348
/* 12043 */   MCD::OPC_CheckField, 21, 5, 0, 251, 8, // Skip to: 14348
/* 12049 */   MCD::OPC_Decode, 32, 183, 2, // Opcode: ABSQ_S_QB
/* 12053 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 12065
/* 12057 */   MCD::OPC_CheckPredicate, 30, 239, 8, // Skip to: 14348
/* 12061 */   MCD::OPC_Decode, 170, 14, 80, // Opcode: REPL_QB
/* 12065 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 12084
/* 12069 */   MCD::OPC_CheckPredicate, 30, 227, 8, // Skip to: 14348
/* 12073 */   MCD::OPC_CheckField, 21, 5, 0, 221, 8, // Skip to: 14348
/* 12079 */   MCD::OPC_Decode, 166, 14, 184, 2, // Opcode: REPLV_QB
/* 12084 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 12103
/* 12088 */   MCD::OPC_CheckPredicate, 30, 208, 8, // Skip to: 14348
/* 12092 */   MCD::OPC_CheckField, 21, 5, 0, 202, 8, // Skip to: 14348
/* 12098 */   MCD::OPC_Decode, 183, 13, 183, 2, // Opcode: PRECEQU_PH_QBL
/* 12103 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 12122
/* 12107 */   MCD::OPC_CheckPredicate, 30, 189, 8, // Skip to: 14348
/* 12111 */   MCD::OPC_CheckField, 21, 5, 0, 183, 8, // Skip to: 14348
/* 12117 */   MCD::OPC_Decode, 187, 13, 183, 2, // Opcode: PRECEQU_PH_QBR
/* 12122 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 12141
/* 12126 */   MCD::OPC_CheckPredicate, 30, 170, 8, // Skip to: 14348
/* 12130 */   MCD::OPC_CheckField, 21, 5, 0, 164, 8, // Skip to: 14348
/* 12136 */   MCD::OPC_Decode, 184, 13, 183, 2, // Opcode: PRECEQU_PH_QBLA
/* 12141 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 12160
/* 12145 */   MCD::OPC_CheckPredicate, 30, 151, 8, // Skip to: 14348
/* 12149 */   MCD::OPC_CheckField, 21, 5, 0, 145, 8, // Skip to: 14348
/* 12155 */   MCD::OPC_Decode, 188, 13, 183, 2, // Opcode: PRECEQU_PH_QBRA
/* 12160 */   MCD::OPC_FilterValue, 9, 14, 0, // Skip to: 12178
/* 12164 */   MCD::OPC_CheckPredicate, 30, 132, 8, // Skip to: 14348
/* 12168 */   MCD::OPC_CheckField, 21, 5, 0, 126, 8, // Skip to: 14348
/* 12174 */   MCD::OPC_Decode, 30, 183, 2, // Opcode: ABSQ_S_PH
/* 12178 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12190
/* 12182 */   MCD::OPC_CheckPredicate, 30, 114, 8, // Skip to: 14348
/* 12186 */   MCD::OPC_Decode, 168, 14, 80, // Opcode: REPL_PH
/* 12190 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 12209
/* 12194 */   MCD::OPC_CheckPredicate, 30, 102, 8, // Skip to: 14348
/* 12198 */   MCD::OPC_CheckField, 21, 5, 0, 96, 8, // Skip to: 14348
/* 12204 */   MCD::OPC_Decode, 164, 14, 184, 2, // Opcode: REPLV_PH
/* 12209 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 12228
/* 12213 */   MCD::OPC_CheckPredicate, 30, 83, 8, // Skip to: 14348
/* 12217 */   MCD::OPC_CheckField, 21, 5, 0, 77, 8, // Skip to: 14348
/* 12223 */   MCD::OPC_Decode, 191, 13, 185, 2, // Opcode: PRECEQ_W_PHL
/* 12228 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 12247
/* 12232 */   MCD::OPC_CheckPredicate, 30, 64, 8, // Skip to: 14348
/* 12236 */   MCD::OPC_CheckField, 21, 5, 0, 58, 8, // Skip to: 14348
/* 12242 */   MCD::OPC_Decode, 193, 13, 185, 2, // Opcode: PRECEQ_W_PHR
/* 12247 */   MCD::OPC_FilterValue, 17, 14, 0, // Skip to: 12265
/* 12251 */   MCD::OPC_CheckPredicate, 30, 45, 8, // Skip to: 14348
/* 12255 */   MCD::OPC_CheckField, 21, 5, 0, 39, 8, // Skip to: 14348
/* 12261 */   MCD::OPC_Decode, 34, 186, 2, // Opcode: ABSQ_S_W
/* 12265 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12284
/* 12269 */   MCD::OPC_CheckPredicate, 30, 27, 8, // Skip to: 14348
/* 12273 */   MCD::OPC_CheckField, 21, 5, 0, 21, 8, // Skip to: 14348
/* 12279 */   MCD::OPC_Decode, 183, 2, 186, 2, // Opcode: BITREV
/* 12284 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12303
/* 12288 */   MCD::OPC_CheckPredicate, 30, 8, 8, // Skip to: 14348
/* 12292 */   MCD::OPC_CheckField, 21, 5, 0, 2, 8, // Skip to: 14348
/* 12298 */   MCD::OPC_Decode, 195, 13, 183, 2, // Opcode: PRECEU_PH_QBL
/* 12303 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12322
/* 12307 */   MCD::OPC_CheckPredicate, 30, 245, 7, // Skip to: 14348
/* 12311 */   MCD::OPC_CheckField, 21, 5, 0, 239, 7, // Skip to: 14348
/* 12317 */   MCD::OPC_Decode, 199, 13, 183, 2, // Opcode: PRECEU_PH_QBR
/* 12322 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12341
/* 12326 */   MCD::OPC_CheckPredicate, 30, 226, 7, // Skip to: 14348
/* 12330 */   MCD::OPC_CheckField, 21, 5, 0, 220, 7, // Skip to: 14348
/* 12336 */   MCD::OPC_Decode, 196, 13, 183, 2, // Opcode: PRECEU_PH_QBLA
/* 12341 */   MCD::OPC_FilterValue, 31, 211, 7, // Skip to: 14348
/* 12345 */   MCD::OPC_CheckPredicate, 30, 207, 7, // Skip to: 14348
/* 12349 */   MCD::OPC_CheckField, 21, 5, 0, 201, 7, // Skip to: 14348
/* 12355 */   MCD::OPC_Decode, 200, 13, 183, 2, // Opcode: PRECEU_PH_QBRA
/* 12360 */   MCD::OPC_FilterValue, 19, 31, 1, // Skip to: 12651
/* 12364 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12367 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 12380
/* 12371 */   MCD::OPC_CheckPredicate, 30, 181, 7, // Skip to: 14348
/* 12375 */   MCD::OPC_Decode, 176, 15, 187, 2, // Opcode: SHLL_QB
/* 12380 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12393
/* 12384 */   MCD::OPC_CheckPredicate, 30, 168, 7, // Skip to: 14348
/* 12388 */   MCD::OPC_Decode, 208, 15, 187, 2, // Opcode: SHRL_QB
/* 12393 */   MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 12406
/* 12397 */   MCD::OPC_CheckPredicate, 30, 155, 7, // Skip to: 14348
/* 12401 */   MCD::OPC_Decode, 168, 15, 188, 2, // Opcode: SHLLV_QB
/* 12406 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12419
/* 12410 */   MCD::OPC_CheckPredicate, 30, 142, 7, // Skip to: 14348
/* 12414 */   MCD::OPC_Decode, 204, 15, 188, 2, // Opcode: SHRLV_QB
/* 12419 */   MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 12432
/* 12423 */   MCD::OPC_CheckPredicate, 57, 129, 7, // Skip to: 14348
/* 12427 */   MCD::OPC_Decode, 194, 15, 187, 2, // Opcode: SHRA_QB
/* 12432 */   MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 12445
/* 12436 */   MCD::OPC_CheckPredicate, 57, 116, 7, // Skip to: 14348
/* 12440 */   MCD::OPC_Decode, 198, 15, 187, 2, // Opcode: SHRA_R_QB
/* 12445 */   MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 12458
/* 12449 */   MCD::OPC_CheckPredicate, 57, 103, 7, // Skip to: 14348
/* 12453 */   MCD::OPC_Decode, 184, 15, 188, 2, // Opcode: SHRAV_QB
/* 12458 */   MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 12471
/* 12462 */   MCD::OPC_CheckPredicate, 57, 90, 7, // Skip to: 14348
/* 12466 */   MCD::OPC_Decode, 188, 15, 188, 2, // Opcode: SHRAV_R_QB
/* 12471 */   MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 12484
/* 12475 */   MCD::OPC_CheckPredicate, 30, 77, 7, // Skip to: 14348
/* 12479 */   MCD::OPC_Decode, 174, 15, 187, 2, // Opcode: SHLL_PH
/* 12484 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12497
/* 12488 */   MCD::OPC_CheckPredicate, 30, 64, 7, // Skip to: 14348
/* 12492 */   MCD::OPC_Decode, 192, 15, 187, 2, // Opcode: SHRA_PH
/* 12497 */   MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 12510
/* 12501 */   MCD::OPC_CheckPredicate, 30, 51, 7, // Skip to: 14348
/* 12505 */   MCD::OPC_Decode, 166, 15, 188, 2, // Opcode: SHLLV_PH
/* 12510 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12523
/* 12514 */   MCD::OPC_CheckPredicate, 30, 38, 7, // Skip to: 14348
/* 12518 */   MCD::OPC_Decode, 182, 15, 188, 2, // Opcode: SHRAV_PH
/* 12523 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12536
/* 12527 */   MCD::OPC_CheckPredicate, 30, 25, 7, // Skip to: 14348
/* 12531 */   MCD::OPC_Decode, 178, 15, 187, 2, // Opcode: SHLL_S_PH
/* 12536 */   MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 12549
/* 12540 */   MCD::OPC_CheckPredicate, 30, 12, 7, // Skip to: 14348
/* 12544 */   MCD::OPC_Decode, 196, 15, 187, 2, // Opcode: SHRA_R_PH
/* 12549 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12562
/* 12553 */   MCD::OPC_CheckPredicate, 30, 255, 6, // Skip to: 14348
/* 12557 */   MCD::OPC_Decode, 170, 15, 188, 2, // Opcode: SHLLV_S_PH
/* 12562 */   MCD::OPC_FilterValue, 15, 9, 0, // Skip to: 12575
/* 12566 */   MCD::OPC_CheckPredicate, 30, 242, 6, // Skip to: 14348
/* 12570 */   MCD::OPC_Decode, 186, 15, 188, 2, // Opcode: SHRAV_R_PH
/* 12575 */   MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 12588
/* 12579 */   MCD::OPC_CheckPredicate, 30, 229, 6, // Skip to: 14348
/* 12583 */   MCD::OPC_Decode, 180, 15, 189, 2, // Opcode: SHLL_S_W
/* 12588 */   MCD::OPC_FilterValue, 21, 9, 0, // Skip to: 12601
/* 12592 */   MCD::OPC_CheckPredicate, 30, 216, 6, // Skip to: 14348
/* 12596 */   MCD::OPC_Decode, 200, 15, 189, 2, // Opcode: SHRA_R_W
/* 12601 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12613
/* 12605 */   MCD::OPC_CheckPredicate, 30, 203, 6, // Skip to: 14348
/* 12609 */   MCD::OPC_Decode, 172, 15, 43, // Opcode: SHLLV_S_W
/* 12613 */   MCD::OPC_FilterValue, 23, 8, 0, // Skip to: 12625
/* 12617 */   MCD::OPC_CheckPredicate, 30, 191, 6, // Skip to: 14348
/* 12621 */   MCD::OPC_Decode, 190, 15, 43, // Opcode: SHRAV_R_W
/* 12625 */   MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 12638
/* 12629 */   MCD::OPC_CheckPredicate, 57, 179, 6, // Skip to: 14348
/* 12633 */   MCD::OPC_Decode, 206, 15, 187, 2, // Opcode: SHRL_PH
/* 12638 */   MCD::OPC_FilterValue, 27, 170, 6, // Skip to: 14348
/* 12642 */   MCD::OPC_CheckPredicate, 57, 166, 6, // Skip to: 14348
/* 12646 */   MCD::OPC_Decode, 202, 15, 188, 2, // Opcode: SHRLV_PH
/* 12651 */   MCD::OPC_FilterValue, 24, 199, 0, // Skip to: 12854
/* 12655 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12658 */   MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 12670
/* 12662 */   MCD::OPC_CheckPredicate, 57, 146, 6, // Skip to: 14348
/* 12666 */   MCD::OPC_Decode, 77, 178, 2, // Opcode: ADDUH_QB
/* 12670 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 12683
/* 12674 */   MCD::OPC_CheckPredicate, 57, 134, 6, // Skip to: 14348
/* 12678 */   MCD::OPC_Decode, 224, 16, 178, 2, // Opcode: SUBUH_QB
/* 12683 */   MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 12695
/* 12687 */   MCD::OPC_CheckPredicate, 57, 121, 6, // Skip to: 14348
/* 12691 */   MCD::OPC_Decode, 79, 178, 2, // Opcode: ADDUH_R_QB
/* 12695 */   MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 12708
/* 12699 */   MCD::OPC_CheckPredicate, 57, 109, 6, // Skip to: 14348
/* 12703 */   MCD::OPC_Decode, 226, 16, 178, 2, // Opcode: SUBUH_R_QB
/* 12708 */   MCD::OPC_FilterValue, 8, 8, 0, // Skip to: 12720
/* 12712 */   MCD::OPC_CheckPredicate, 57, 96, 6, // Skip to: 14348
/* 12716 */   MCD::OPC_Decode, 47, 178, 2, // Opcode: ADDQH_PH
/* 12720 */   MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 12733
/* 12724 */   MCD::OPC_CheckPredicate, 57, 84, 6, // Skip to: 14348
/* 12728 */   MCD::OPC_Decode, 192, 16, 178, 2, // Opcode: SUBQH_PH
/* 12733 */   MCD::OPC_FilterValue, 10, 8, 0, // Skip to: 12745
/* 12737 */   MCD::OPC_CheckPredicate, 57, 71, 6, // Skip to: 14348
/* 12741 */   MCD::OPC_Decode, 49, 178, 2, // Opcode: ADDQH_R_PH
/* 12745 */   MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 12758
/* 12749 */   MCD::OPC_CheckPredicate, 57, 59, 6, // Skip to: 14348
/* 12753 */   MCD::OPC_Decode, 194, 16, 178, 2, // Opcode: SUBQH_R_PH
/* 12758 */   MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 12771
/* 12762 */   MCD::OPC_CheckPredicate, 57, 46, 6, // Skip to: 14348
/* 12766 */   MCD::OPC_Decode, 225, 12, 178, 2, // Opcode: MUL_PH
/* 12771 */   MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 12784
/* 12775 */   MCD::OPC_CheckPredicate, 57, 33, 6, // Skip to: 14348
/* 12779 */   MCD::OPC_Decode, 230, 12, 178, 2, // Opcode: MUL_S_PH
/* 12784 */   MCD::OPC_FilterValue, 16, 7, 0, // Skip to: 12795
/* 12788 */   MCD::OPC_CheckPredicate, 57, 20, 6, // Skip to: 14348
/* 12792 */   MCD::OPC_Decode, 53, 49, // Opcode: ADDQH_W
/* 12795 */   MCD::OPC_FilterValue, 17, 8, 0, // Skip to: 12807
/* 12799 */   MCD::OPC_CheckPredicate, 57, 9, 6, // Skip to: 14348
/* 12803 */   MCD::OPC_Decode, 198, 16, 49, // Opcode: SUBQH_W
/* 12807 */   MCD::OPC_FilterValue, 18, 7, 0, // Skip to: 12818
/* 12811 */   MCD::OPC_CheckPredicate, 57, 253, 5, // Skip to: 14348
/* 12815 */   MCD::OPC_Decode, 51, 49, // Opcode: ADDQH_R_W
/* 12818 */   MCD::OPC_FilterValue, 19, 8, 0, // Skip to: 12830
/* 12822 */   MCD::OPC_CheckPredicate, 57, 242, 5, // Skip to: 14348
/* 12826 */   MCD::OPC_Decode, 196, 16, 49, // Opcode: SUBQH_R_W
/* 12830 */   MCD::OPC_FilterValue, 22, 8, 0, // Skip to: 12842
/* 12834 */   MCD::OPC_CheckPredicate, 57, 230, 5, // Skip to: 14348
/* 12838 */   MCD::OPC_Decode, 201, 12, 49, // Opcode: MULQ_S_W
/* 12842 */   MCD::OPC_FilterValue, 23, 222, 5, // Skip to: 14348
/* 12846 */   MCD::OPC_CheckPredicate, 57, 218, 5, // Skip to: 14348
/* 12850 */   MCD::OPC_Decode, 197, 12, 49, // Opcode: MULQ_RS_W
/* 12854 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 12873
/* 12858 */   MCD::OPC_CheckPredicate, 58, 206, 5, // Skip to: 14348
/* 12862 */   MCD::OPC_CheckField, 6, 1, 0, 200, 5, // Skip to: 14348
/* 12868 */   MCD::OPC_Decode, 160, 10, 190, 2, // Opcode: LWLE
/* 12873 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 12892
/* 12877 */   MCD::OPC_CheckPredicate, 58, 187, 5, // Skip to: 14348
/* 12881 */   MCD::OPC_CheckField, 6, 1, 0, 181, 5, // Skip to: 14348
/* 12887 */   MCD::OPC_Decode, 173, 10, 190, 2, // Opcode: LWRE
/* 12892 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 12911
/* 12896 */   MCD::OPC_CheckPredicate, 59, 168, 5, // Skip to: 14348
/* 12900 */   MCD::OPC_CheckField, 6, 1, 0, 162, 5, // Skip to: 14348
/* 12906 */   MCD::OPC_Decode, 190, 3, 191, 2, // Opcode: CACHEE
/* 12911 */   MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 12930
/* 12915 */   MCD::OPC_CheckPredicate, 59, 149, 5, // Skip to: 14348
/* 12919 */   MCD::OPC_CheckField, 6, 1, 0, 143, 5, // Skip to: 14348
/* 12925 */   MCD::OPC_Decode, 213, 14, 190, 2, // Opcode: SBE
/* 12930 */   MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 12949
/* 12934 */   MCD::OPC_CheckPredicate, 59, 130, 5, // Skip to: 14348
/* 12938 */   MCD::OPC_CheckField, 6, 1, 0, 124, 5, // Skip to: 14348
/* 12944 */   MCD::OPC_Decode, 156, 15, 190, 2, // Opcode: SHE
/* 12949 */   MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 12968
/* 12953 */   MCD::OPC_CheckPredicate, 36, 111, 5, // Skip to: 14348
/* 12957 */   MCD::OPC_CheckField, 6, 1, 0, 105, 5, // Skip to: 14348
/* 12963 */   MCD::OPC_Decode, 223, 14, 190, 2, // Opcode: SCE
/* 12968 */   MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 12987
/* 12972 */   MCD::OPC_CheckPredicate, 36, 92, 5, // Skip to: 14348
/* 12976 */   MCD::OPC_CheckField, 6, 1, 0, 86, 5, // Skip to: 14348
/* 12982 */   MCD::OPC_Decode, 134, 17, 190, 2, // Opcode: SWE
/* 12987 */   MCD::OPC_FilterValue, 32, 60, 0, // Skip to: 13051
/* 12991 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 12994 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13013
/* 12998 */   MCD::OPC_CheckPredicate, 23, 66, 5, // Skip to: 14348
/* 13002 */   MCD::OPC_CheckField, 21, 5, 0, 60, 5, // Skip to: 14348
/* 13008 */   MCD::OPC_Decode, 154, 18, 186, 2, // Opcode: WSBH
/* 13013 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 13032
/* 13017 */   MCD::OPC_CheckPredicate, 21, 47, 5, // Skip to: 14348
/* 13021 */   MCD::OPC_CheckField, 21, 5, 0, 41, 5, // Skip to: 14348
/* 13027 */   MCD::OPC_Decode, 252, 14, 186, 2, // Opcode: SEB
/* 13032 */   MCD::OPC_FilterValue, 24, 32, 5, // Skip to: 14348
/* 13036 */   MCD::OPC_CheckPredicate, 21, 28, 5, // Skip to: 14348
/* 13040 */   MCD::OPC_CheckField, 21, 5, 0, 22, 5, // Skip to: 14348
/* 13046 */   MCD::OPC_Decode, 128, 15, 186, 2, // Opcode: SEH
/* 13051 */   MCD::OPC_FilterValue, 33, 15, 0, // Skip to: 13070
/* 13055 */   MCD::OPC_CheckPredicate, 58, 9, 5, // Skip to: 14348
/* 13059 */   MCD::OPC_CheckField, 6, 1, 0, 3, 5, // Skip to: 14348
/* 13065 */   MCD::OPC_Decode, 139, 17, 190, 2, // Opcode: SWLE
/* 13070 */   MCD::OPC_FilterValue, 34, 15, 0, // Skip to: 13089
/* 13074 */   MCD::OPC_CheckPredicate, 58, 246, 4, // Skip to: 14348
/* 13078 */   MCD::OPC_CheckField, 6, 1, 0, 240, 4, // Skip to: 14348
/* 13084 */   MCD::OPC_Decode, 150, 17, 190, 2, // Opcode: SWRE
/* 13089 */   MCD::OPC_FilterValue, 35, 15, 0, // Skip to: 13108
/* 13093 */   MCD::OPC_CheckPredicate, 59, 227, 4, // Skip to: 14348
/* 13097 */   MCD::OPC_CheckField, 6, 1, 0, 221, 4, // Skip to: 14348
/* 13103 */   MCD::OPC_Decode, 218, 13, 191, 2, // Opcode: PREFE
/* 13108 */   MCD::OPC_FilterValue, 40, 15, 0, // Skip to: 13127
/* 13112 */   MCD::OPC_CheckPredicate, 59, 208, 4, // Skip to: 14348
/* 13116 */   MCD::OPC_CheckField, 6, 1, 0, 202, 4, // Skip to: 14348
/* 13122 */   MCD::OPC_Decode, 200, 9, 190, 2, // Opcode: LBuE
/* 13127 */   MCD::OPC_FilterValue, 41, 15, 0, // Skip to: 13146
/* 13131 */   MCD::OPC_CheckPredicate, 59, 189, 4, // Skip to: 14348
/* 13135 */   MCD::OPC_CheckField, 6, 1, 0, 183, 4, // Skip to: 14348
/* 13141 */   MCD::OPC_Decode, 240, 9, 190, 2, // Opcode: LHuE
/* 13146 */   MCD::OPC_FilterValue, 44, 15, 0, // Skip to: 13165
/* 13150 */   MCD::OPC_CheckPredicate, 59, 170, 4, // Skip to: 14348
/* 13154 */   MCD::OPC_CheckField, 6, 1, 0, 164, 4, // Skip to: 14348
/* 13160 */   MCD::OPC_Decode, 188, 9, 190, 2, // Opcode: LBE
/* 13165 */   MCD::OPC_FilterValue, 45, 15, 0, // Skip to: 13184
/* 13169 */   MCD::OPC_CheckPredicate, 59, 151, 4, // Skip to: 14348
/* 13173 */   MCD::OPC_CheckField, 6, 1, 0, 145, 4, // Skip to: 14348
/* 13179 */   MCD::OPC_Decode, 232, 9, 190, 2, // Opcode: LHE
/* 13184 */   MCD::OPC_FilterValue, 46, 15, 0, // Skip to: 13203
/* 13188 */   MCD::OPC_CheckPredicate, 36, 132, 4, // Skip to: 14348
/* 13192 */   MCD::OPC_CheckField, 6, 1, 0, 126, 4, // Skip to: 14348
/* 13198 */   MCD::OPC_Decode, 251, 9, 190, 2, // Opcode: LLE
/* 13203 */   MCD::OPC_FilterValue, 47, 15, 0, // Skip to: 13222
/* 13207 */   MCD::OPC_CheckPredicate, 36, 113, 4, // Skip to: 14348
/* 13211 */   MCD::OPC_CheckField, 6, 1, 0, 107, 4, // Skip to: 14348
/* 13217 */   MCD::OPC_Decode, 154, 10, 190, 2, // Opcode: LWE
/* 13222 */   MCD::OPC_FilterValue, 48, 165, 1, // Skip to: 13647
/* 13226 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13229 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13248
/* 13233 */   MCD::OPC_CheckPredicate, 57, 87, 4, // Skip to: 14348
/* 13237 */   MCD::OPC_CheckField, 13, 3, 0, 81, 4, // Skip to: 14348
/* 13243 */   MCD::OPC_Decode, 178, 6, 227, 1, // Opcode: DPA_W_PH
/* 13248 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13267
/* 13252 */   MCD::OPC_CheckPredicate, 57, 68, 4, // Skip to: 14348
/* 13256 */   MCD::OPC_CheckField, 13, 3, 0, 62, 4, // Skip to: 14348
/* 13262 */   MCD::OPC_Decode, 201, 6, 227, 1, // Opcode: DPS_W_PH
/* 13267 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13286
/* 13271 */   MCD::OPC_CheckPredicate, 57, 49, 4, // Skip to: 14348
/* 13275 */   MCD::OPC_CheckField, 13, 3, 0, 43, 4, // Skip to: 14348
/* 13281 */   MCD::OPC_Decode, 207, 12, 227, 1, // Opcode: MULSA_W_PH
/* 13286 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13305
/* 13290 */   MCD::OPC_CheckPredicate, 30, 30, 4, // Skip to: 14348
/* 13294 */   MCD::OPC_CheckField, 13, 3, 0, 24, 4, // Skip to: 14348
/* 13300 */   MCD::OPC_Decode, 172, 6, 227, 1, // Opcode: DPAU_H_QBL
/* 13305 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13324
/* 13309 */   MCD::OPC_CheckPredicate, 30, 11, 4, // Skip to: 14348
/* 13313 */   MCD::OPC_CheckField, 13, 3, 0, 5, 4, // Skip to: 14348
/* 13319 */   MCD::OPC_Decode, 170, 6, 227, 1, // Opcode: DPAQ_S_W_PH
/* 13324 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13343
/* 13328 */   MCD::OPC_CheckPredicate, 30, 248, 3, // Skip to: 14348
/* 13332 */   MCD::OPC_CheckField, 13, 3, 0, 242, 3, // Skip to: 14348
/* 13338 */   MCD::OPC_Decode, 187, 6, 227, 1, // Opcode: DPSQ_S_W_PH
/* 13343 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13362
/* 13347 */   MCD::OPC_CheckPredicate, 30, 229, 3, // Skip to: 14348
/* 13351 */   MCD::OPC_CheckField, 13, 3, 0, 223, 3, // Skip to: 14348
/* 13357 */   MCD::OPC_Decode, 205, 12, 227, 1, // Opcode: MULSAQ_S_W_PH
/* 13362 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13381
/* 13366 */   MCD::OPC_CheckPredicate, 30, 210, 3, // Skip to: 14348
/* 13370 */   MCD::OPC_CheckField, 13, 3, 0, 204, 3, // Skip to: 14348
/* 13376 */   MCD::OPC_Decode, 174, 6, 227, 1, // Opcode: DPAU_H_QBR
/* 13381 */   MCD::OPC_FilterValue, 8, 15, 0, // Skip to: 13400
/* 13385 */   MCD::OPC_CheckPredicate, 57, 191, 3, // Skip to: 14348
/* 13389 */   MCD::OPC_CheckField, 13, 3, 0, 185, 3, // Skip to: 14348
/* 13395 */   MCD::OPC_Decode, 176, 6, 227, 1, // Opcode: DPAX_W_PH
/* 13400 */   MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 13419
/* 13404 */   MCD::OPC_CheckPredicate, 57, 172, 3, // Skip to: 14348
/* 13408 */   MCD::OPC_CheckField, 13, 3, 0, 166, 3, // Skip to: 14348
/* 13414 */   MCD::OPC_Decode, 199, 6, 227, 1, // Opcode: DPSX_W_PH
/* 13419 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13438
/* 13423 */   MCD::OPC_CheckPredicate, 30, 153, 3, // Skip to: 14348
/* 13427 */   MCD::OPC_CheckField, 13, 3, 0, 147, 3, // Skip to: 14348
/* 13433 */   MCD::OPC_Decode, 195, 6, 227, 1, // Opcode: DPSU_H_QBL
/* 13438 */   MCD::OPC_FilterValue, 12, 15, 0, // Skip to: 13457
/* 13442 */   MCD::OPC_CheckPredicate, 30, 134, 3, // Skip to: 14348
/* 13446 */   MCD::OPC_CheckField, 13, 3, 0, 128, 3, // Skip to: 14348
/* 13452 */   MCD::OPC_Decode, 168, 6, 227, 1, // Opcode: DPAQ_SA_L_W
/* 13457 */   MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 13476
/* 13461 */   MCD::OPC_CheckPredicate, 30, 115, 3, // Skip to: 14348
/* 13465 */   MCD::OPC_CheckField, 13, 3, 0, 109, 3, // Skip to: 14348
/* 13471 */   MCD::OPC_Decode, 185, 6, 227, 1, // Opcode: DPSQ_SA_L_W
/* 13476 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 13495
/* 13480 */   MCD::OPC_CheckPredicate, 30, 96, 3, // Skip to: 14348
/* 13484 */   MCD::OPC_CheckField, 13, 3, 0, 90, 3, // Skip to: 14348
/* 13490 */   MCD::OPC_Decode, 197, 6, 227, 1, // Opcode: DPSU_H_QBR
/* 13495 */   MCD::OPC_FilterValue, 16, 15, 0, // Skip to: 13514
/* 13499 */   MCD::OPC_CheckPredicate, 30, 77, 3, // Skip to: 14348
/* 13503 */   MCD::OPC_CheckField, 13, 3, 0, 71, 3, // Skip to: 14348
/* 13509 */   MCD::OPC_Decode, 231, 10, 227, 1, // Opcode: MAQ_SA_W_PHL
/* 13514 */   MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 13533
/* 13518 */   MCD::OPC_CheckPredicate, 30, 58, 3, // Skip to: 14348
/* 13522 */   MCD::OPC_CheckField, 13, 3, 0, 52, 3, // Skip to: 14348
/* 13528 */   MCD::OPC_Decode, 233, 10, 227, 1, // Opcode: MAQ_SA_W_PHR
/* 13533 */   MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 13552
/* 13537 */   MCD::OPC_CheckPredicate, 30, 39, 3, // Skip to: 14348
/* 13541 */   MCD::OPC_CheckField, 13, 3, 0, 33, 3, // Skip to: 14348
/* 13547 */   MCD::OPC_Decode, 235, 10, 227, 1, // Opcode: MAQ_S_W_PHL
/* 13552 */   MCD::OPC_FilterValue, 22, 15, 0, // Skip to: 13571
/* 13556 */   MCD::OPC_CheckPredicate, 30, 20, 3, // Skip to: 14348
/* 13560 */   MCD::OPC_CheckField, 13, 3, 0, 14, 3, // Skip to: 14348
/* 13566 */   MCD::OPC_Decode, 237, 10, 227, 1, // Opcode: MAQ_S_W_PHR
/* 13571 */   MCD::OPC_FilterValue, 24, 15, 0, // Skip to: 13590
/* 13575 */   MCD::OPC_CheckPredicate, 57, 1, 3, // Skip to: 14348
/* 13579 */   MCD::OPC_CheckField, 13, 3, 0, 251, 2, // Skip to: 14348
/* 13585 */   MCD::OPC_Decode, 166, 6, 227, 1, // Opcode: DPAQX_S_W_PH
/* 13590 */   MCD::OPC_FilterValue, 25, 15, 0, // Skip to: 13609
/* 13594 */   MCD::OPC_CheckPredicate, 57, 238, 2, // Skip to: 14348
/* 13598 */   MCD::OPC_CheckField, 13, 3, 0, 232, 2, // Skip to: 14348
/* 13604 */   MCD::OPC_Decode, 183, 6, 227, 1, // Opcode: DPSQX_S_W_PH
/* 13609 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13628
/* 13613 */   MCD::OPC_CheckPredicate, 57, 219, 2, // Skip to: 14348
/* 13617 */   MCD::OPC_CheckField, 13, 3, 0, 213, 2, // Skip to: 14348
/* 13623 */   MCD::OPC_Decode, 164, 6, 227, 1, // Opcode: DPAQX_SA_W_PH
/* 13628 */   MCD::OPC_FilterValue, 27, 204, 2, // Skip to: 14348
/* 13632 */   MCD::OPC_CheckPredicate, 57, 200, 2, // Skip to: 14348
/* 13636 */   MCD::OPC_CheckField, 13, 3, 0, 194, 2, // Skip to: 14348
/* 13642 */   MCD::OPC_Decode, 181, 6, 227, 1, // Opcode: DPSQX_SA_W_PH
/* 13647 */   MCD::OPC_FilterValue, 49, 42, 0, // Skip to: 13693
/* 13651 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13654 */   MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 13667
/* 13658 */   MCD::OPC_CheckPredicate, 57, 174, 2, // Skip to: 14348
/* 13662 */   MCD::OPC_Decode, 135, 1, 192, 2, // Opcode: APPEND
/* 13667 */   MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 13680
/* 13671 */   MCD::OPC_CheckPredicate, 57, 161, 2, // Skip to: 14348
/* 13675 */   MCD::OPC_Decode, 225, 13, 192, 2, // Opcode: PREPEND
/* 13680 */   MCD::OPC_FilterValue, 16, 152, 2, // Skip to: 14348
/* 13684 */   MCD::OPC_CheckPredicate, 57, 148, 2, // Skip to: 14348
/* 13688 */   MCD::OPC_Decode, 212, 1, 192, 2, // Opcode: BALIGN
/* 13693 */   MCD::OPC_FilterValue, 56, 58, 1, // Skip to: 14011
/* 13697 */   MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 13700 */   MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 13719
/* 13704 */   MCD::OPC_CheckPredicate, 30, 128, 2, // Skip to: 14348
/* 13708 */   MCD::OPC_CheckField, 13, 3, 0, 122, 2, // Skip to: 14348
/* 13714 */   MCD::OPC_Decode, 155, 7, 193, 2, // Opcode: EXTR_W
/* 13719 */   MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 13738
/* 13723 */   MCD::OPC_CheckPredicate, 30, 109, 2, // Skip to: 14348
/* 13727 */   MCD::OPC_CheckField, 13, 3, 0, 103, 2, // Skip to: 14348
/* 13733 */   MCD::OPC_Decode, 147, 7, 194, 2, // Opcode: EXTRV_W
/* 13738 */   MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 13757
/* 13742 */   MCD::OPC_CheckPredicate, 30, 90, 2, // Skip to: 14348
/* 13746 */   MCD::OPC_CheckField, 13, 3, 0, 84, 2, // Skip to: 14348
/* 13752 */   MCD::OPC_Decode, 133, 7, 193, 2, // Opcode: EXTP
/* 13757 */   MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 13776
/* 13761 */   MCD::OPC_CheckPredicate, 30, 71, 2, // Skip to: 14348
/* 13765 */   MCD::OPC_CheckField, 13, 3, 0, 65, 2, // Skip to: 14348
/* 13771 */   MCD::OPC_Decode, 138, 7, 194, 2, // Opcode: EXTPV
/* 13776 */   MCD::OPC_FilterValue, 4, 15, 0, // Skip to: 13795
/* 13780 */   MCD::OPC_CheckPredicate, 30, 52, 2, // Skip to: 14348
/* 13784 */   MCD::OPC_CheckField, 13, 3, 0, 46, 2, // Skip to: 14348
/* 13790 */   MCD::OPC_Decode, 151, 7, 193, 2, // Opcode: EXTR_R_W
/* 13795 */   MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 13814
/* 13799 */   MCD::OPC_CheckPredicate, 30, 33, 2, // Skip to: 14348
/* 13803 */   MCD::OPC_CheckField, 13, 3, 0, 27, 2, // Skip to: 14348
/* 13809 */   MCD::OPC_Decode, 143, 7, 194, 2, // Opcode: EXTRV_R_W
/* 13814 */   MCD::OPC_FilterValue, 6, 15, 0, // Skip to: 13833
/* 13818 */   MCD::OPC_CheckPredicate, 30, 14, 2, // Skip to: 14348
/* 13822 */   MCD::OPC_CheckField, 13, 3, 0, 8, 2, // Skip to: 14348
/* 13828 */   MCD::OPC_Decode, 149, 7, 193, 2, // Opcode: EXTR_RS_W
/* 13833 */   MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 13852
/* 13837 */   MCD::OPC_CheckPredicate, 30, 251, 1, // Skip to: 14348
/* 13841 */   MCD::OPC_CheckField, 13, 3, 0, 245, 1, // Skip to: 14348
/* 13847 */   MCD::OPC_Decode, 141, 7, 194, 2, // Opcode: EXTRV_RS_W
/* 13852 */   MCD::OPC_FilterValue, 10, 15, 0, // Skip to: 13871
/* 13856 */   MCD::OPC_CheckPredicate, 30, 232, 1, // Skip to: 14348
/* 13860 */   MCD::OPC_CheckField, 13, 3, 0, 226, 1, // Skip to: 14348
/* 13866 */   MCD::OPC_Decode, 134, 7, 193, 2, // Opcode: EXTPDP
/* 13871 */   MCD::OPC_FilterValue, 11, 15, 0, // Skip to: 13890
/* 13875 */   MCD::OPC_CheckPredicate, 30, 213, 1, // Skip to: 14348
/* 13879 */   MCD::OPC_CheckField, 13, 3, 0, 207, 1, // Skip to: 14348
/* 13885 */   MCD::OPC_Decode, 135, 7, 194, 2, // Opcode: EXTPDPV
/* 13890 */   MCD::OPC_FilterValue, 14, 15, 0, // Skip to: 13909
/* 13894 */   MCD::OPC_CheckPredicate, 30, 194, 1, // Skip to: 14348
/* 13898 */   MCD::OPC_CheckField, 13, 3, 0, 188, 1, // Skip to: 14348
/* 13904 */   MCD::OPC_Decode, 153, 7, 193, 2, // Opcode: EXTR_S_H
/* 13909 */   MCD::OPC_FilterValue, 15, 15, 0, // Skip to: 13928
/* 13913 */   MCD::OPC_CheckPredicate, 30, 175, 1, // Skip to: 14348
/* 13917 */   MCD::OPC_CheckField, 13, 3, 0, 169, 1, // Skip to: 14348
/* 13923 */   MCD::OPC_Decode, 145, 7, 194, 2, // Opcode: EXTRV_S_H
/* 13928 */   MCD::OPC_FilterValue, 18, 9, 0, // Skip to: 13941
/* 13932 */   MCD::OPC_CheckPredicate, 30, 156, 1, // Skip to: 14348
/* 13936 */   MCD::OPC_Decode, 155, 14, 195, 2, // Opcode: RDDSP
/* 13941 */   MCD::OPC_FilterValue, 19, 9, 0, // Skip to: 13954
/* 13945 */   MCD::OPC_CheckPredicate, 34, 143, 1, // Skip to: 14348
/* 13949 */   MCD::OPC_Decode, 151, 18, 196, 2, // Opcode: WRDSP
/* 13954 */   MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 13973
/* 13958 */   MCD::OPC_CheckPredicate, 30, 130, 1, // Skip to: 14348
/* 13962 */   MCD::OPC_CheckField, 13, 7, 0, 124, 1, // Skip to: 14348
/* 13968 */   MCD::OPC_Decode, 162, 15, 197, 2, // Opcode: SHILO
/* 13973 */   MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 13992
/* 13977 */   MCD::OPC_CheckPredicate, 30, 111, 1, // Skip to: 14348
/* 13981 */   MCD::OPC_CheckField, 13, 8, 0, 105, 1, // Skip to: 14348
/* 13987 */   MCD::OPC_Decode, 163, 15, 198, 2, // Opcode: SHILOV
/* 13992 */   MCD::OPC_FilterValue, 31, 96, 1, // Skip to: 14348
/* 13996 */   MCD::OPC_CheckPredicate, 30, 92, 1, // Skip to: 14348
/* 14000 */   MCD::OPC_CheckField, 13, 8, 0, 86, 1, // Skip to: 14348
/* 14006 */   MCD::OPC_Decode, 169, 12, 198, 2, // Opcode: MTHLIP
/* 14011 */   MCD::OPC_FilterValue, 59, 77, 1, // Skip to: 14348
/* 14015 */   MCD::OPC_CheckPredicate, 1, 73, 1, // Skip to: 14348
/* 14019 */   MCD::OPC_CheckField, 21, 5, 0, 67, 1, // Skip to: 14348
/* 14025 */   MCD::OPC_CheckField, 6, 5, 0, 61, 1, // Skip to: 14348
/* 14031 */   MCD::OPC_Decode, 157, 14, 199, 2, // Opcode: RDHWR
/* 14036 */   MCD::OPC_FilterValue, 32, 9, 0, // Skip to: 14049
/* 14040 */   MCD::OPC_CheckPredicate, 20, 48, 1, // Skip to: 14348
/* 14044 */   MCD::OPC_Decode, 186, 9, 200, 2, // Opcode: LB
/* 14049 */   MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 14062
/* 14053 */   MCD::OPC_CheckPredicate, 1, 35, 1, // Skip to: 14348
/* 14057 */   MCD::OPC_Decode, 230, 9, 200, 2, // Opcode: LH
/* 14062 */   MCD::OPC_FilterValue, 34, 9, 0, // Skip to: 14075
/* 14066 */   MCD::OPC_CheckPredicate, 29, 22, 1, // Skip to: 14348
/* 14070 */   MCD::OPC_Decode, 158, 10, 200, 2, // Opcode: LWL
/* 14075 */   MCD::OPC_FilterValue, 35, 9, 0, // Skip to: 14088
/* 14079 */   MCD::OPC_CheckPredicate, 1, 9, 1, // Skip to: 14348
/* 14083 */   MCD::OPC_Decode, 145, 10, 200, 2, // Opcode: LW
/* 14088 */   MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 14101
/* 14092 */   MCD::OPC_CheckPredicate, 20, 252, 0, // Skip to: 14348
/* 14096 */   MCD::OPC_Decode, 198, 9, 200, 2, // Opcode: LBu
/* 14101 */   MCD::OPC_FilterValue, 37, 9, 0, // Skip to: 14114
/* 14105 */   MCD::OPC_CheckPredicate, 1, 239, 0, // Skip to: 14348
/* 14109 */   MCD::OPC_Decode, 238, 9, 200, 2, // Opcode: LHu
/* 14114 */   MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 14127
/* 14118 */   MCD::OPC_CheckPredicate, 29, 226, 0, // Skip to: 14348
/* 14122 */   MCD::OPC_Decode, 171, 10, 200, 2, // Opcode: LWR
/* 14127 */   MCD::OPC_FilterValue, 40, 9, 0, // Skip to: 14140
/* 14131 */   MCD::OPC_CheckPredicate, 20, 213, 0, // Skip to: 14348
/* 14135 */   MCD::OPC_Decode, 209, 14, 200, 2, // Opcode: SB
/* 14140 */   MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 14153
/* 14144 */   MCD::OPC_CheckPredicate, 20, 200, 0, // Skip to: 14348
/* 14148 */   MCD::OPC_Decode, 152, 15, 200, 2, // Opcode: SH
/* 14153 */   MCD::OPC_FilterValue, 42, 9, 0, // Skip to: 14166
/* 14157 */   MCD::OPC_CheckPredicate, 29, 187, 0, // Skip to: 14348
/* 14161 */   MCD::OPC_Decode, 137, 17, 200, 2, // Opcode: SWL
/* 14166 */   MCD::OPC_FilterValue, 43, 9, 0, // Skip to: 14179
/* 14170 */   MCD::OPC_CheckPredicate, 1, 174, 0, // Skip to: 14348
/* 14174 */   MCD::OPC_Decode, 252, 16, 200, 2, // Opcode: SW
/* 14179 */   MCD::OPC_FilterValue, 46, 9, 0, // Skip to: 14192
/* 14183 */   MCD::OPC_CheckPredicate, 29, 161, 0, // Skip to: 14348
/* 14187 */   MCD::OPC_Decode, 148, 17, 200, 2, // Opcode: SWR
/* 14192 */   MCD::OPC_FilterValue, 47, 9, 0, // Skip to: 14205
/* 14196 */   MCD::OPC_CheckPredicate, 60, 148, 0, // Skip to: 14348
/* 14200 */   MCD::OPC_Decode, 189, 3, 201, 2, // Opcode: CACHE
/* 14205 */   MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 14218
/* 14209 */   MCD::OPC_CheckPredicate, 61, 135, 0, // Skip to: 14348
/* 14213 */   MCD::OPC_Decode, 245, 9, 200, 2, // Opcode: LL
/* 14218 */   MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 14231
/* 14222 */   MCD::OPC_CheckPredicate, 62, 122, 0, // Skip to: 14348
/* 14226 */   MCD::OPC_Decode, 148, 10, 202, 2, // Opcode: LWC1
/* 14231 */   MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 14244
/* 14235 */   MCD::OPC_CheckPredicate, 32, 109, 0, // Skip to: 14348
/* 14239 */   MCD::OPC_Decode, 150, 10, 203, 2, // Opcode: LWC2
/* 14244 */   MCD::OPC_FilterValue, 51, 9, 0, // Skip to: 14257
/* 14248 */   MCD::OPC_CheckPredicate, 60, 96, 0, // Skip to: 14348
/* 14252 */   MCD::OPC_Decode, 217, 13, 201, 2, // Opcode: PREF
/* 14257 */   MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 14270
/* 14261 */   MCD::OPC_CheckPredicate, 63, 83, 0, // Skip to: 14348
/* 14265 */   MCD::OPC_Decode, 204, 9, 202, 2, // Opcode: LDC1
/* 14270 */   MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 14283
/* 14274 */   MCD::OPC_CheckPredicate, 64, 70, 0, // Skip to: 14348
/* 14278 */   MCD::OPC_Decode, 208, 9, 203, 2, // Opcode: LDC2
/* 14283 */   MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 14296
/* 14287 */   MCD::OPC_CheckPredicate, 61, 57, 0, // Skip to: 14348
/* 14291 */   MCD::OPC_Decode, 218, 14, 200, 2, // Opcode: SC
/* 14296 */   MCD::OPC_FilterValue, 57, 9, 0, // Skip to: 14309
/* 14300 */   MCD::OPC_CheckPredicate, 62, 44, 0, // Skip to: 14348
/* 14304 */   MCD::OPC_Decode, 128, 17, 202, 2, // Opcode: SWC1
/* 14309 */   MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 14322
/* 14313 */   MCD::OPC_CheckPredicate, 32, 31, 0, // Skip to: 14348
/* 14317 */   MCD::OPC_Decode, 130, 17, 203, 2, // Opcode: SWC2
/* 14322 */   MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 14335
/* 14326 */   MCD::OPC_CheckPredicate, 63, 18, 0, // Skip to: 14348
/* 14330 */   MCD::OPC_Decode, 235, 14, 202, 2, // Opcode: SDC1
/* 14335 */   MCD::OPC_FilterValue, 62, 9, 0, // Skip to: 14348
/* 14339 */   MCD::OPC_CheckPredicate, 64, 5, 0, // Skip to: 14348
/* 14343 */   MCD::OPC_Decode, 239, 14, 203, 2, // Opcode: SDC2
/* 14348 */   MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32_64_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 48, 9, 0, // Skip to: 16
/* 7 */       MCD::OPC_CheckPredicate, 65, 18, 0, // Skip to: 29
/* 11 */      MCD::OPC_Decode, 246, 9, 200, 2, // Opcode: LL64
/* 16 */      MCD::OPC_FilterValue, 56, 9, 0, // Skip to: 29
/* 20 */      MCD::OPC_CheckPredicate, 65, 5, 0, // Skip to: 29
/* 24 */      MCD::OPC_Decode, 219, 14, 200, 2, // Opcode: SC64
/* 29 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r632[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 197, 1, // Skip to: 460
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 66, 40, 7, // Skip to: 1850
/* 18 */      MCD::OPC_CheckField, 8, 3, 0, 34, 7, // Skip to: 1850
/* 24 */      MCD::OPC_Decode, 137, 10, 171, 1, // Opcode: LSA_R6
/* 29 */      MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 48
/* 33 */      MCD::OPC_CheckPredicate, 66, 21, 7, // Skip to: 1850
/* 37 */      MCD::OPC_CheckField, 6, 15, 16, 15, 7, // Skip to: 1850
/* 43 */      MCD::OPC_Decode, 175, 9, 172, 1, // Opcode: JR_HB_R6
/* 48 */      MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 61
/* 52 */      MCD::OPC_CheckPredicate, 67, 2, 7, // Skip to: 1850
/* 56 */      MCD::OPC_Decode, 234, 14, 174, 1, // Opcode: SDBBP_R6
/* 61 */      MCD::OPC_FilterValue, 16, 20, 0, // Skip to: 85
/* 65 */      MCD::OPC_CheckPredicate, 66, 245, 6, // Skip to: 1850
/* 69 */      MCD::OPC_CheckField, 16, 5, 0, 239, 6, // Skip to: 1850
/* 75 */      MCD::OPC_CheckField, 6, 5, 1, 233, 6, // Skip to: 1850
/* 81 */      MCD::OPC_Decode, 135, 4, 14, // Opcode: CLZ_R6
/* 85 */      MCD::OPC_FilterValue, 17, 20, 0, // Skip to: 109
/* 89 */      MCD::OPC_CheckPredicate, 66, 221, 6, // Skip to: 1850
/* 93 */      MCD::OPC_CheckField, 16, 5, 0, 215, 6, // Skip to: 1850
/* 99 */      MCD::OPC_CheckField, 6, 5, 1, 209, 6, // Skip to: 1850
/* 105 */     MCD::OPC_Decode, 243, 3, 14, // Opcode: CLO_R6
/* 109 */     MCD::OPC_FilterValue, 18, 20, 0, // Skip to: 133
/* 113 */     MCD::OPC_CheckPredicate, 68, 197, 6, // Skip to: 1850
/* 117 */     MCD::OPC_CheckField, 16, 5, 0, 191, 6, // Skip to: 1850
/* 123 */     MCD::OPC_CheckField, 6, 5, 1, 185, 6, // Skip to: 1850
/* 129 */     MCD::OPC_Decode, 214, 5, 15, // Opcode: DCLZ_R6
/* 133 */     MCD::OPC_FilterValue, 19, 20, 0, // Skip to: 157
/* 137 */     MCD::OPC_CheckPredicate, 68, 173, 6, // Skip to: 1850
/* 141 */     MCD::OPC_CheckField, 16, 5, 0, 167, 6, // Skip to: 1850
/* 147 */     MCD::OPC_CheckField, 6, 5, 1, 161, 6, // Skip to: 1850
/* 153 */     MCD::OPC_Decode, 211, 5, 15, // Opcode: DCLO_R6
/* 157 */     MCD::OPC_FilterValue, 21, 15, 0, // Skip to: 176
/* 161 */     MCD::OPC_CheckPredicate, 69, 149, 6, // Skip to: 1850
/* 165 */     MCD::OPC_CheckField, 8, 3, 0, 143, 6, // Skip to: 1850
/* 171 */     MCD::OPC_Decode, 250, 5, 180, 1, // Opcode: DLSA_R6
/* 176 */     MCD::OPC_FilterValue, 24, 27, 0, // Skip to: 207
/* 180 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 183 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 195
/* 187 */     MCD::OPC_CheckPredicate, 67, 123, 6, // Skip to: 1850
/* 191 */     MCD::OPC_Decode, 229, 12, 49, // Opcode: MUL_R6
/* 195 */     MCD::OPC_FilterValue, 3, 115, 6, // Skip to: 1850
/* 199 */     MCD::OPC_CheckPredicate, 67, 111, 6, // Skip to: 1850
/* 203 */     MCD::OPC_Decode, 182, 12, 49, // Opcode: MUH
/* 207 */     MCD::OPC_FilterValue, 25, 27, 0, // Skip to: 238
/* 211 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 214 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 226
/* 218 */     MCD::OPC_CheckPredicate, 67, 92, 6, // Skip to: 1850
/* 222 */     MCD::OPC_Decode, 217, 12, 49, // Opcode: MULU
/* 226 */     MCD::OPC_FilterValue, 3, 84, 6, // Skip to: 1850
/* 230 */     MCD::OPC_CheckPredicate, 67, 80, 6, // Skip to: 1850
/* 234 */     MCD::OPC_Decode, 183, 12, 49, // Opcode: MUHU
/* 238 */     MCD::OPC_FilterValue, 26, 27, 0, // Skip to: 269
/* 242 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 245 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 257
/* 249 */     MCD::OPC_CheckPredicate, 67, 61, 6, // Skip to: 1850
/* 253 */     MCD::OPC_Decode, 235, 5, 49, // Opcode: DIV
/* 257 */     MCD::OPC_FilterValue, 3, 53, 6, // Skip to: 1850
/* 261 */     MCD::OPC_CheckPredicate, 67, 49, 6, // Skip to: 1850
/* 265 */     MCD::OPC_Decode, 195, 11, 49, // Opcode: MOD
/* 269 */     MCD::OPC_FilterValue, 27, 27, 0, // Skip to: 300
/* 273 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 276 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 288
/* 280 */     MCD::OPC_CheckPredicate, 67, 30, 6, // Skip to: 1850
/* 284 */     MCD::OPC_Decode, 236, 5, 49, // Opcode: DIVU
/* 288 */     MCD::OPC_FilterValue, 3, 22, 6, // Skip to: 1850
/* 292 */     MCD::OPC_CheckPredicate, 67, 18, 6, // Skip to: 1850
/* 296 */     MCD::OPC_Decode, 198, 11, 49, // Opcode: MODU
/* 300 */     MCD::OPC_FilterValue, 28, 27, 0, // Skip to: 331
/* 304 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 307 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 319
/* 311 */     MCD::OPC_CheckPredicate, 68, 255, 5, // Skip to: 1850
/* 315 */     MCD::OPC_Decode, 151, 6, 12, // Opcode: DMUL_R6
/* 319 */     MCD::OPC_FilterValue, 3, 247, 5, // Skip to: 1850
/* 323 */     MCD::OPC_CheckPredicate, 68, 243, 5, // Skip to: 1850
/* 327 */     MCD::OPC_Decode, 141, 6, 12, // Opcode: DMUH
/* 331 */     MCD::OPC_FilterValue, 29, 27, 0, // Skip to: 362
/* 335 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 338 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 350
/* 342 */     MCD::OPC_CheckPredicate, 68, 224, 5, // Skip to: 1850
/* 346 */     MCD::OPC_Decode, 148, 6, 12, // Opcode: DMULU
/* 350 */     MCD::OPC_FilterValue, 3, 216, 5, // Skip to: 1850
/* 354 */     MCD::OPC_CheckPredicate, 68, 212, 5, // Skip to: 1850
/* 358 */     MCD::OPC_Decode, 142, 6, 12, // Opcode: DMUHU
/* 362 */     MCD::OPC_FilterValue, 30, 27, 0, // Skip to: 393
/* 366 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 369 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 381
/* 373 */     MCD::OPC_CheckPredicate, 68, 193, 5, // Skip to: 1850
/* 377 */     MCD::OPC_Decode, 215, 5, 12, // Opcode: DDIV
/* 381 */     MCD::OPC_FilterValue, 3, 185, 5, // Skip to: 1850
/* 385 */     MCD::OPC_CheckPredicate, 68, 181, 5, // Skip to: 1850
/* 389 */     MCD::OPC_Decode, 130, 6, 12, // Opcode: DMOD
/* 393 */     MCD::OPC_FilterValue, 31, 27, 0, // Skip to: 424
/* 397 */     MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 400 */     MCD::OPC_FilterValue, 2, 8, 0, // Skip to: 412
/* 404 */     MCD::OPC_CheckPredicate, 68, 162, 5, // Skip to: 1850
/* 408 */     MCD::OPC_Decode, 216, 5, 12, // Opcode: DDIVU
/* 412 */     MCD::OPC_FilterValue, 3, 154, 5, // Skip to: 1850
/* 416 */     MCD::OPC_CheckPredicate, 68, 150, 5, // Skip to: 1850
/* 420 */     MCD::OPC_Decode, 131, 6, 12, // Opcode: DMODU
/* 424 */     MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 442
/* 428 */     MCD::OPC_CheckPredicate, 70, 138, 5, // Skip to: 1850
/* 432 */     MCD::OPC_CheckField, 6, 5, 0, 132, 5, // Skip to: 1850
/* 438 */     MCD::OPC_Decode, 132, 15, 49, // Opcode: SELEQZ
/* 442 */     MCD::OPC_FilterValue, 55, 124, 5, // Skip to: 1850
/* 446 */     MCD::OPC_CheckPredicate, 70, 120, 5, // Skip to: 1850
/* 450 */     MCD::OPC_CheckField, 6, 5, 0, 114, 5, // Skip to: 1850
/* 456 */     MCD::OPC_Decode, 139, 15, 49, // Opcode: SELNEZ
/* 460 */     MCD::OPC_FilterValue, 1, 48, 0, // Skip to: 512
/* 464 */     MCD::OPC_ExtractField, 16, 5,  // Inst{20-16} ...
/* 467 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 480
/* 471 */     MCD::OPC_CheckPredicate, 68, 95, 5, // Skip to: 1850
/* 475 */     MCD::OPC_Decode, 200, 5, 204, 2, // Opcode: DAHI
/* 480 */     MCD::OPC_FilterValue, 17, 15, 0, // Skip to: 499
/* 484 */     MCD::OPC_CheckPredicate, 66, 82, 5, // Skip to: 1850
/* 488 */     MCD::OPC_CheckField, 21, 5, 0, 76, 5, // Skip to: 1850
/* 494 */     MCD::OPC_Decode, 209, 1, 184, 1, // Opcode: BAL
/* 499 */     MCD::OPC_FilterValue, 30, 67, 5, // Skip to: 1850
/* 503 */     MCD::OPC_CheckPredicate, 68, 63, 5, // Skip to: 1850
/* 507 */     MCD::OPC_Decode, 204, 5, 204, 2, // Opcode: DATI
/* 512 */     MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 525
/* 516 */     MCD::OPC_CheckPredicate, 66, 50, 5, // Skip to: 1850
/* 520 */     MCD::OPC_Decode, 144, 2, 205, 2, // Opcode: BGEZALC
/* 525 */     MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 538
/* 529 */     MCD::OPC_CheckPredicate, 66, 37, 5, // Skip to: 1850
/* 533 */     MCD::OPC_Decode, 217, 2, 206, 2, // Opcode: BLTZALC
/* 538 */     MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 551
/* 542 */     MCD::OPC_CheckPredicate, 66, 24, 5, // Skip to: 1850
/* 546 */     MCD::OPC_Decode, 246, 1, 207, 2, // Opcode: BEQC
/* 551 */     MCD::OPC_FilterValue, 15, 8, 0, // Skip to: 563
/* 555 */     MCD::OPC_CheckPredicate, 66, 11, 5, // Skip to: 1850
/* 559 */     MCD::OPC_Decode, 177, 1, 81, // Opcode: AUI
/* 563 */     MCD::OPC_FilterValue, 17, 15, 3, // Skip to: 1350
/* 567 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 570 */     MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 583
/* 574 */     MCD::OPC_CheckPredicate, 71, 248, 4, // Skip to: 1850
/* 578 */     MCD::OPC_Decode, 221, 1, 208, 2, // Opcode: BC1EQZ
/* 583 */     MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 596
/* 587 */     MCD::OPC_CheckPredicate, 71, 235, 4, // Skip to: 1850
/* 591 */     MCD::OPC_Decode, 226, 1, 208, 2, // Opcode: BC1NEZ
/* 596 */     MCD::OPC_FilterValue, 16, 158, 0, // Skip to: 758
/* 600 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 603 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 616
/* 607 */     MCD::OPC_CheckPredicate, 71, 215, 4, // Skip to: 1850
/* 611 */     MCD::OPC_Decode, 148, 15, 209, 2, // Opcode: SEL_S
/* 616 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 629
/* 620 */     MCD::OPC_CheckPredicate, 71, 202, 4, // Skip to: 1850
/* 624 */     MCD::OPC_Decode, 137, 15, 202, 1, // Opcode: SELEQZ_S
/* 629 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 642
/* 633 */     MCD::OPC_CheckPredicate, 71, 189, 4, // Skip to: 1850
/* 637 */     MCD::OPC_Decode, 144, 15, 202, 1, // Opcode: SELNEZ_S
/* 642 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 655
/* 646 */     MCD::OPC_CheckPredicate, 71, 176, 4, // Skip to: 1850
/* 650 */     MCD::OPC_Decode, 209, 10, 210, 2, // Opcode: MADDF_S
/* 655 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 668
/* 659 */     MCD::OPC_CheckPredicate, 71, 163, 4, // Skip to: 1850
/* 663 */     MCD::OPC_Decode, 128, 12, 210, 2, // Opcode: MSUBF_S
/* 668 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 687
/* 672 */     MCD::OPC_CheckPredicate, 71, 150, 4, // Skip to: 1850
/* 676 */     MCD::OPC_CheckField, 16, 5, 0, 144, 4, // Skip to: 1850
/* 682 */     MCD::OPC_Decode, 174, 14, 203, 1, // Opcode: RINT_S
/* 687 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 706
/* 691 */     MCD::OPC_CheckPredicate, 71, 131, 4, // Skip to: 1850
/* 695 */     MCD::OPC_CheckField, 16, 5, 0, 125, 4, // Skip to: 1850
/* 701 */     MCD::OPC_Decode, 222, 3, 203, 1, // Opcode: CLASS_S
/* 706 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 719
/* 710 */     MCD::OPC_CheckPredicate, 71, 112, 4, // Skip to: 1850
/* 714 */     MCD::OPC_Decode, 183, 11, 202, 1, // Opcode: MIN_S
/* 719 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 732
/* 723 */     MCD::OPC_CheckPredicate, 71, 99, 4, // Skip to: 1850
/* 727 */     MCD::OPC_Decode, 129, 11, 202, 1, // Opcode: MAX_S
/* 732 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 745
/* 736 */     MCD::OPC_CheckPredicate, 71, 86, 4, // Skip to: 1850
/* 740 */     MCD::OPC_Decode, 167, 11, 202, 1, // Opcode: MINA_S
/* 745 */     MCD::OPC_FilterValue, 31, 77, 4, // Skip to: 1850
/* 749 */     MCD::OPC_CheckPredicate, 71, 73, 4, // Skip to: 1850
/* 753 */     MCD::OPC_Decode, 241, 10, 202, 1, // Opcode: MAXA_S
/* 758 */     MCD::OPC_FilterValue, 17, 158, 0, // Skip to: 920
/* 762 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 765 */     MCD::OPC_FilterValue, 16, 9, 0, // Skip to: 778
/* 769 */     MCD::OPC_CheckPredicate, 71, 53, 4, // Skip to: 1850
/* 773 */     MCD::OPC_Decode, 146, 15, 211, 2, // Opcode: SEL_D
/* 778 */     MCD::OPC_FilterValue, 20, 9, 0, // Skip to: 791
/* 782 */     MCD::OPC_CheckPredicate, 71, 40, 4, // Skip to: 1850
/* 786 */     MCD::OPC_Decode, 134, 15, 212, 2, // Opcode: SELEQZ_D
/* 791 */     MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 804
/* 795 */     MCD::OPC_CheckPredicate, 71, 27, 4, // Skip to: 1850
/* 799 */     MCD::OPC_Decode, 141, 15, 212, 2, // Opcode: SELNEZ_D
/* 804 */     MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 817
/* 808 */     MCD::OPC_CheckPredicate, 71, 14, 4, // Skip to: 1850
/* 812 */     MCD::OPC_Decode, 207, 10, 213, 2, // Opcode: MADDF_D
/* 817 */     MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 830
/* 821 */     MCD::OPC_CheckPredicate, 71, 1, 4, // Skip to: 1850
/* 825 */     MCD::OPC_Decode, 254, 11, 213, 2, // Opcode: MSUBF_D
/* 830 */     MCD::OPC_FilterValue, 26, 15, 0, // Skip to: 849
/* 834 */     MCD::OPC_CheckPredicate, 71, 244, 3, // Skip to: 1850
/* 838 */     MCD::OPC_CheckField, 16, 5, 0, 238, 3, // Skip to: 1850
/* 844 */     MCD::OPC_Decode, 172, 14, 214, 1, // Opcode: RINT_D
/* 849 */     MCD::OPC_FilterValue, 27, 15, 0, // Skip to: 868
/* 853 */     MCD::OPC_CheckPredicate, 71, 225, 3, // Skip to: 1850
/* 857 */     MCD::OPC_CheckField, 16, 5, 0, 219, 3, // Skip to: 1850
/* 863 */     MCD::OPC_Decode, 220, 3, 214, 1, // Opcode: CLASS_D
/* 868 */     MCD::OPC_FilterValue, 28, 9, 0, // Skip to: 881
/* 872 */     MCD::OPC_CheckPredicate, 71, 206, 3, // Skip to: 1850
/* 876 */     MCD::OPC_Decode, 181, 11, 212, 2, // Opcode: MIN_D
/* 881 */     MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 894
/* 885 */     MCD::OPC_CheckPredicate, 71, 193, 3, // Skip to: 1850
/* 889 */     MCD::OPC_Decode, 255, 10, 212, 2, // Opcode: MAX_D
/* 894 */     MCD::OPC_FilterValue, 30, 9, 0, // Skip to: 907
/* 898 */     MCD::OPC_CheckPredicate, 71, 180, 3, // Skip to: 1850
/* 902 */     MCD::OPC_Decode, 165, 11, 212, 2, // Opcode: MINA_D
/* 907 */     MCD::OPC_FilterValue, 31, 171, 3, // Skip to: 1850
/* 911 */     MCD::OPC_CheckPredicate, 71, 167, 3, // Skip to: 1850
/* 915 */     MCD::OPC_Decode, 239, 10, 212, 2, // Opcode: MAXA_D
/* 920 */     MCD::OPC_FilterValue, 20, 211, 0, // Skip to: 1135
/* 924 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 927 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 940
/* 931 */     MCD::OPC_CheckPredicate, 71, 147, 3, // Skip to: 1850
/* 935 */     MCD::OPC_Decode, 163, 4, 214, 2, // Opcode: CMP_F_S
/* 940 */     MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 953
/* 944 */     MCD::OPC_CheckPredicate, 71, 134, 3, // Skip to: 1850
/* 948 */     MCD::OPC_Decode, 222, 4, 214, 2, // Opcode: CMP_UN_S
/* 953 */     MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 966
/* 957 */     MCD::OPC_CheckPredicate, 71, 121, 3, // Skip to: 1850
/* 961 */     MCD::OPC_Decode, 160, 4, 214, 2, // Opcode: CMP_EQ_S
/* 966 */     MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 979
/* 970 */     MCD::OPC_CheckPredicate, 71, 108, 3, // Skip to: 1850
/* 974 */     MCD::OPC_Decode, 210, 4, 214, 2, // Opcode: CMP_UEQ_S
/* 979 */     MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 992
/* 983 */     MCD::OPC_CheckPredicate, 71, 95, 3, // Skip to: 1850
/* 987 */     MCD::OPC_Decode, 174, 4, 214, 2, // Opcode: CMP_LT_S
/* 992 */     MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1005
/* 996 */     MCD::OPC_CheckPredicate, 71, 82, 3, // Skip to: 1850
/* 1000 */    MCD::OPC_Decode, 218, 4, 214, 2, // Opcode: CMP_ULT_S
/* 1005 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1018
/* 1009 */    MCD::OPC_CheckPredicate, 71, 69, 3, // Skip to: 1850
/* 1013 */    MCD::OPC_Decode, 168, 4, 214, 2, // Opcode: CMP_LE_S
/* 1018 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1031
/* 1022 */    MCD::OPC_CheckPredicate, 71, 56, 3, // Skip to: 1850
/* 1026 */    MCD::OPC_Decode, 214, 4, 214, 2, // Opcode: CMP_ULE_S
/* 1031 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1044
/* 1035 */    MCD::OPC_CheckPredicate, 71, 43, 3, // Skip to: 1850
/* 1039 */    MCD::OPC_Decode, 178, 4, 214, 2, // Opcode: CMP_SAF_S
/* 1044 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1057
/* 1048 */    MCD::OPC_CheckPredicate, 71, 30, 3, // Skip to: 1850
/* 1052 */    MCD::OPC_Decode, 206, 4, 214, 2, // Opcode: CMP_SUN_S
/* 1057 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1070
/* 1061 */    MCD::OPC_CheckPredicate, 71, 17, 3, // Skip to: 1850
/* 1065 */    MCD::OPC_Decode, 182, 4, 214, 2, // Opcode: CMP_SEQ_S
/* 1070 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1083
/* 1074 */    MCD::OPC_CheckPredicate, 71, 4, 3, // Skip to: 1850
/* 1078 */    MCD::OPC_Decode, 194, 4, 214, 2, // Opcode: CMP_SUEQ_S
/* 1083 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1096
/* 1087 */    MCD::OPC_CheckPredicate, 71, 247, 2, // Skip to: 1850
/* 1091 */    MCD::OPC_Decode, 190, 4, 214, 2, // Opcode: CMP_SLT_S
/* 1096 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1109
/* 1100 */    MCD::OPC_CheckPredicate, 71, 234, 2, // Skip to: 1850
/* 1104 */    MCD::OPC_Decode, 202, 4, 214, 2, // Opcode: CMP_SULT_S
/* 1109 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1122
/* 1113 */    MCD::OPC_CheckPredicate, 71, 221, 2, // Skip to: 1850
/* 1117 */    MCD::OPC_Decode, 186, 4, 214, 2, // Opcode: CMP_SLE_S
/* 1122 */    MCD::OPC_FilterValue, 15, 212, 2, // Skip to: 1850
/* 1126 */    MCD::OPC_CheckPredicate, 71, 208, 2, // Skip to: 1850
/* 1130 */    MCD::OPC_Decode, 198, 4, 214, 2, // Opcode: CMP_SULE_S
/* 1135 */    MCD::OPC_FilterValue, 21, 199, 2, // Skip to: 1850
/* 1139 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1142 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1155
/* 1146 */    MCD::OPC_CheckPredicate, 71, 188, 2, // Skip to: 1850
/* 1150 */    MCD::OPC_Decode, 162, 4, 215, 2, // Opcode: CMP_F_D
/* 1155 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1168
/* 1159 */    MCD::OPC_CheckPredicate, 71, 175, 2, // Skip to: 1850
/* 1163 */    MCD::OPC_Decode, 220, 4, 215, 2, // Opcode: CMP_UN_D
/* 1168 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1181
/* 1172 */    MCD::OPC_CheckPredicate, 71, 162, 2, // Skip to: 1850
/* 1176 */    MCD::OPC_Decode, 156, 4, 215, 2, // Opcode: CMP_EQ_D
/* 1181 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1194
/* 1185 */    MCD::OPC_CheckPredicate, 71, 149, 2, // Skip to: 1850
/* 1189 */    MCD::OPC_Decode, 208, 4, 215, 2, // Opcode: CMP_UEQ_D
/* 1194 */    MCD::OPC_FilterValue, 4, 9, 0, // Skip to: 1207
/* 1198 */    MCD::OPC_CheckPredicate, 71, 136, 2, // Skip to: 1850
/* 1202 */    MCD::OPC_Decode, 170, 4, 215, 2, // Opcode: CMP_LT_D
/* 1207 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1220
/* 1211 */    MCD::OPC_CheckPredicate, 71, 123, 2, // Skip to: 1850
/* 1215 */    MCD::OPC_Decode, 216, 4, 215, 2, // Opcode: CMP_ULT_D
/* 1220 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1233
/* 1224 */    MCD::OPC_CheckPredicate, 71, 110, 2, // Skip to: 1850
/* 1228 */    MCD::OPC_Decode, 164, 4, 215, 2, // Opcode: CMP_LE_D
/* 1233 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1246
/* 1237 */    MCD::OPC_CheckPredicate, 71, 97, 2, // Skip to: 1850
/* 1241 */    MCD::OPC_Decode, 212, 4, 215, 2, // Opcode: CMP_ULE_D
/* 1246 */    MCD::OPC_FilterValue, 8, 9, 0, // Skip to: 1259
/* 1250 */    MCD::OPC_CheckPredicate, 71, 84, 2, // Skip to: 1850
/* 1254 */    MCD::OPC_Decode, 176, 4, 215, 2, // Opcode: CMP_SAF_D
/* 1259 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1272
/* 1263 */    MCD::OPC_CheckPredicate, 71, 71, 2, // Skip to: 1850
/* 1267 */    MCD::OPC_Decode, 204, 4, 215, 2, // Opcode: CMP_SUN_D
/* 1272 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1285
/* 1276 */    MCD::OPC_CheckPredicate, 71, 58, 2, // Skip to: 1850
/* 1280 */    MCD::OPC_Decode, 180, 4, 215, 2, // Opcode: CMP_SEQ_D
/* 1285 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1298
/* 1289 */    MCD::OPC_CheckPredicate, 71, 45, 2, // Skip to: 1850
/* 1293 */    MCD::OPC_Decode, 192, 4, 215, 2, // Opcode: CMP_SUEQ_D
/* 1298 */    MCD::OPC_FilterValue, 12, 9, 0, // Skip to: 1311
/* 1302 */    MCD::OPC_CheckPredicate, 71, 32, 2, // Skip to: 1850
/* 1306 */    MCD::OPC_Decode, 188, 4, 215, 2, // Opcode: CMP_SLT_D
/* 1311 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1324
/* 1315 */    MCD::OPC_CheckPredicate, 71, 19, 2, // Skip to: 1850
/* 1319 */    MCD::OPC_Decode, 200, 4, 215, 2, // Opcode: CMP_SULT_D
/* 1324 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1337
/* 1328 */    MCD::OPC_CheckPredicate, 71, 6, 2, // Skip to: 1850
/* 1332 */    MCD::OPC_Decode, 184, 4, 215, 2, // Opcode: CMP_SLE_D
/* 1337 */    MCD::OPC_FilterValue, 15, 253, 1, // Skip to: 1850
/* 1341 */    MCD::OPC_CheckPredicate, 71, 249, 1, // Skip to: 1850
/* 1345 */    MCD::OPC_Decode, 196, 4, 215, 2, // Opcode: CMP_SULE_D
/* 1350 */    MCD::OPC_FilterValue, 18, 81, 0, // Skip to: 1435
/* 1354 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1357 */    MCD::OPC_FilterValue, 9, 9, 0, // Skip to: 1370
/* 1361 */    MCD::OPC_CheckPredicate, 67, 229, 1, // Skip to: 1850
/* 1365 */    MCD::OPC_Decode, 231, 1, 216, 2, // Opcode: BC2EQZ
/* 1370 */    MCD::OPC_FilterValue, 10, 9, 0, // Skip to: 1383
/* 1374 */    MCD::OPC_CheckPredicate, 67, 216, 1, // Skip to: 1850
/* 1378 */    MCD::OPC_Decode, 152, 10, 217, 2, // Opcode: LWC2_R6
/* 1383 */    MCD::OPC_FilterValue, 11, 9, 0, // Skip to: 1396
/* 1387 */    MCD::OPC_CheckPredicate, 67, 203, 1, // Skip to: 1850
/* 1391 */    MCD::OPC_Decode, 132, 17, 217, 2, // Opcode: SWC2_R6
/* 1396 */    MCD::OPC_FilterValue, 13, 9, 0, // Skip to: 1409
/* 1400 */    MCD::OPC_CheckPredicate, 67, 190, 1, // Skip to: 1850
/* 1404 */    MCD::OPC_Decode, 233, 1, 216, 2, // Opcode: BC2NEZ
/* 1409 */    MCD::OPC_FilterValue, 14, 9, 0, // Skip to: 1422
/* 1413 */    MCD::OPC_CheckPredicate, 67, 177, 1, // Skip to: 1850
/* 1417 */    MCD::OPC_Decode, 210, 9, 217, 2, // Opcode: LDC2_R6
/* 1422 */    MCD::OPC_FilterValue, 15, 168, 1, // Skip to: 1850
/* 1426 */    MCD::OPC_CheckPredicate, 67, 164, 1, // Skip to: 1850
/* 1430 */    MCD::OPC_Decode, 241, 14, 217, 2, // Opcode: SDC2_R6
/* 1435 */    MCD::OPC_FilterValue, 22, 9, 0, // Skip to: 1448
/* 1439 */    MCD::OPC_CheckPredicate, 66, 151, 1, // Skip to: 1850
/* 1443 */    MCD::OPC_Decode, 149, 2, 218, 2, // Opcode: BGEZC
/* 1448 */    MCD::OPC_FilterValue, 23, 9, 0, // Skip to: 1461
/* 1452 */    MCD::OPC_CheckPredicate, 66, 138, 1, // Skip to: 1850
/* 1456 */    MCD::OPC_Decode, 222, 2, 219, 2, // Opcode: BLTZC
/* 1461 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1474
/* 1465 */    MCD::OPC_CheckPredicate, 66, 125, 1, // Skip to: 1850
/* 1469 */    MCD::OPC_Decode, 231, 2, 220, 2, // Opcode: BNEC
/* 1474 */    MCD::OPC_FilterValue, 29, 9, 0, // Skip to: 1487
/* 1478 */    MCD::OPC_CheckPredicate, 68, 112, 1, // Skip to: 1850
/* 1482 */    MCD::OPC_Decode, 206, 5, 156, 1, // Opcode: DAUI
/* 1487 */    MCD::OPC_FilterValue, 31, 182, 0, // Skip to: 1673
/* 1491 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1494 */    MCD::OPC_FilterValue, 32, 40, 0, // Skip to: 1538
/* 1498 */    MCD::OPC_ExtractField, 8, 3,  // Inst{10-8} ...
/* 1501 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1526
/* 1505 */    MCD::OPC_CheckPredicate, 66, 85, 1, // Skip to: 1850
/* 1509 */    MCD::OPC_CheckField, 21, 5, 0, 79, 1, // Skip to: 1850
/* 1515 */    MCD::OPC_CheckField, 6, 2, 0, 73, 1, // Skip to: 1850
/* 1521 */    MCD::OPC_Decode, 185, 2, 186, 2, // Opcode: BITSWAP
/* 1526 */    MCD::OPC_FilterValue, 2, 64, 1, // Skip to: 1850
/* 1530 */    MCD::OPC_CheckPredicate, 66, 60, 1, // Skip to: 1850
/* 1534 */    MCD::OPC_Decode, 114, 221, 2, // Opcode: ALIGN
/* 1538 */    MCD::OPC_FilterValue, 36, 41, 0, // Skip to: 1583
/* 1542 */    MCD::OPC_ExtractField, 9, 2,  // Inst{10-9} ...
/* 1545 */    MCD::OPC_FilterValue, 0, 21, 0, // Skip to: 1570
/* 1549 */    MCD::OPC_CheckPredicate, 69, 41, 1, // Skip to: 1850
/* 1553 */    MCD::OPC_CheckField, 21, 5, 0, 35, 1, // Skip to: 1850
/* 1559 */    MCD::OPC_CheckField, 6, 3, 0, 29, 1, // Skip to: 1850
/* 1565 */    MCD::OPC_Decode, 208, 5, 222, 2, // Opcode: DBITSWAP
/* 1570 */    MCD::OPC_FilterValue, 1, 20, 1, // Skip to: 1850
/* 1574 */    MCD::OPC_CheckPredicate, 68, 16, 1, // Skip to: 1850
/* 1578 */    MCD::OPC_Decode, 202, 5, 223, 2, // Opcode: DALIGN
/* 1583 */    MCD::OPC_FilterValue, 37, 15, 0, // Skip to: 1602
/* 1587 */    MCD::OPC_CheckPredicate, 66, 3, 1, // Skip to: 1850
/* 1591 */    MCD::OPC_CheckField, 6, 1, 0, 253, 0, // Skip to: 1850
/* 1597 */    MCD::OPC_Decode, 195, 3, 191, 2, // Opcode: CACHE_R6
/* 1602 */    MCD::OPC_FilterValue, 38, 9, 0, // Skip to: 1615
/* 1606 */    MCD::OPC_CheckPredicate, 72, 240, 0, // Skip to: 1850
/* 1610 */    MCD::OPC_Decode, 227, 14, 224, 2, // Opcode: SC_R6
/* 1615 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1628
/* 1619 */    MCD::OPC_CheckPredicate, 66, 227, 0, // Skip to: 1850
/* 1623 */    MCD::OPC_Decode, 222, 14, 224, 2, // Opcode: SCD_R6
/* 1628 */    MCD::OPC_FilterValue, 53, 15, 0, // Skip to: 1647
/* 1632 */    MCD::OPC_CheckPredicate, 66, 214, 0, // Skip to: 1850
/* 1636 */    MCD::OPC_CheckField, 6, 1, 0, 208, 0, // Skip to: 1850
/* 1642 */    MCD::OPC_Decode, 224, 13, 191, 2, // Opcode: PREF_R6
/* 1647 */    MCD::OPC_FilterValue, 54, 9, 0, // Skip to: 1660
/* 1651 */    MCD::OPC_CheckPredicate, 72, 195, 0, // Skip to: 1850
/* 1655 */    MCD::OPC_Decode, 255, 9, 224, 2, // Opcode: LL_R6
/* 1660 */    MCD::OPC_FilterValue, 55, 186, 0, // Skip to: 1850
/* 1664 */    MCD::OPC_CheckPredicate, 68, 182, 0, // Skip to: 1850
/* 1668 */    MCD::OPC_Decode, 250, 9, 224, 2, // Opcode: LLD_R6
/* 1673 */    MCD::OPC_FilterValue, 50, 9, 0, // Skip to: 1686
/* 1677 */    MCD::OPC_CheckPredicate, 66, 169, 0, // Skip to: 1850
/* 1681 */    MCD::OPC_Decode, 219, 1, 225, 2, // Opcode: BC
/* 1686 */    MCD::OPC_FilterValue, 54, 23, 0, // Skip to: 1713
/* 1690 */    MCD::OPC_CheckPredicate, 66, 10, 0, // Skip to: 1704
/* 1694 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1704
/* 1700 */    MCD::OPC_Decode, 164, 9, 87, // Opcode: JIC
/* 1704 */    MCD::OPC_CheckPredicate, 66, 142, 0, // Skip to: 1850
/* 1708 */    MCD::OPC_Decode, 252, 1, 226, 2, // Opcode: BEQZC
/* 1713 */    MCD::OPC_FilterValue, 58, 9, 0, // Skip to: 1726
/* 1717 */    MCD::OPC_CheckPredicate, 66, 129, 0, // Skip to: 1850
/* 1721 */    MCD::OPC_Decode, 210, 1, 225, 2, // Opcode: BALC
/* 1726 */    MCD::OPC_FilterValue, 59, 93, 0, // Skip to: 1823
/* 1730 */    MCD::OPC_ExtractField, 19, 2,  // Inst{20-19} ...
/* 1733 */    MCD::OPC_FilterValue, 0, 8, 0, // Skip to: 1745
/* 1737 */    MCD::OPC_CheckPredicate, 66, 109, 0, // Skip to: 1850
/* 1741 */    MCD::OPC_Decode, 39, 161, 1, // Opcode: ADDIUPC
/* 1745 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1758
/* 1749 */    MCD::OPC_CheckPredicate, 66, 97, 0, // Skip to: 1850
/* 1753 */    MCD::OPC_Decode, 167, 10, 161, 1, // Opcode: LWPC
/* 1758 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1771
/* 1762 */    MCD::OPC_CheckPredicate, 66, 84, 0, // Skip to: 1850
/* 1766 */    MCD::OPC_Decode, 177, 10, 161, 1, // Opcode: LWUPC
/* 1771 */    MCD::OPC_FilterValue, 3, 75, 0, // Skip to: 1850
/* 1775 */    MCD::OPC_ExtractField, 18, 1,  // Inst{18} ...
/* 1778 */    MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 1791
/* 1782 */    MCD::OPC_CheckPredicate, 69, 64, 0, // Skip to: 1850
/* 1786 */    MCD::OPC_Decode, 217, 9, 162, 1, // Opcode: LDPC
/* 1791 */    MCD::OPC_FilterValue, 1, 55, 0, // Skip to: 1850
/* 1795 */    MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 1798 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1811
/* 1802 */    MCD::OPC_CheckPredicate, 66, 44, 0, // Skip to: 1850
/* 1806 */    MCD::OPC_Decode, 178, 1, 163, 1, // Opcode: AUIPC
/* 1811 */    MCD::OPC_FilterValue, 3, 35, 0, // Skip to: 1850
/* 1815 */    MCD::OPC_CheckPredicate, 66, 31, 0, // Skip to: 1850
/* 1819 */    MCD::OPC_Decode, 116, 163, 1, // Opcode: ALUIPC
/* 1823 */    MCD::OPC_FilterValue, 62, 23, 0, // Skip to: 1850
/* 1827 */    MCD::OPC_CheckPredicate, 66, 10, 0, // Skip to: 1841
/* 1831 */    MCD::OPC_CheckField, 21, 5, 0, 4, 0, // Skip to: 1841
/* 1837 */    MCD::OPC_Decode, 161, 9, 87, // Opcode: JIALC
/* 1841 */    MCD::OPC_CheckPredicate, 66, 5, 0, // Skip to: 1850
/* 1845 */    MCD::OPC_Decode, 245, 2, 226, 2, // Opcode: BNEZC
/* 1850 */    MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_Ambiguous32[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 6, 24, 0, // Skip to: 31
/* 7 */       MCD::OPC_CheckPredicate, 66, 11, 0, // Skip to: 22
/* 11 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 22
/* 17 */      MCD::OPC_Decode, 197, 2, 205, 2, // Opcode: BLEZALC
/* 22 */      MCD::OPC_CheckPredicate, 66, 145, 0, // Skip to: 171
/* 26 */      MCD::OPC_Decode, 136, 2, 205, 2, // Opcode: BGEUC
/* 31 */      MCD::OPC_FilterValue, 7, 24, 0, // Skip to: 59
/* 35 */      MCD::OPC_CheckPredicate, 66, 11, 0, // Skip to: 50
/* 39 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 50
/* 45 */      MCD::OPC_Decode, 162, 2, 206, 2, // Opcode: BGTZALC
/* 50 */      MCD::OPC_CheckPredicate, 66, 117, 0, // Skip to: 171
/* 54 */      MCD::OPC_Decode, 209, 2, 206, 2, // Opcode: BLTUC
/* 59 */      MCD::OPC_FilterValue, 8, 24, 0, // Skip to: 87
/* 63 */      MCD::OPC_CheckPredicate, 66, 11, 0, // Skip to: 78
/* 67 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 78
/* 73 */      MCD::OPC_Decode, 250, 1, 220, 2, // Opcode: BEQZALC
/* 78 */      MCD::OPC_CheckPredicate, 67, 89, 0, // Skip to: 171
/* 82 */      MCD::OPC_Decode, 129, 3, 207, 2, // Opcode: BOVC
/* 87 */      MCD::OPC_FilterValue, 22, 24, 0, // Skip to: 115
/* 91 */      MCD::OPC_CheckPredicate, 66, 11, 0, // Skip to: 106
/* 95 */      MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 106
/* 101 */     MCD::OPC_Decode, 199, 2, 218, 2, // Opcode: BLEZC
/* 106 */     MCD::OPC_CheckPredicate, 66, 61, 0, // Skip to: 171
/* 110 */     MCD::OPC_Decode, 130, 2, 218, 2, // Opcode: BGEC
/* 115 */     MCD::OPC_FilterValue, 23, 24, 0, // Skip to: 143
/* 119 */     MCD::OPC_CheckPredicate, 66, 11, 0, // Skip to: 134
/* 123 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 134
/* 129 */     MCD::OPC_Decode, 164, 2, 219, 2, // Opcode: BGTZC
/* 134 */     MCD::OPC_CheckPredicate, 66, 33, 0, // Skip to: 171
/* 138 */     MCD::OPC_Decode, 203, 2, 219, 2, // Opcode: BLTC
/* 143 */     MCD::OPC_FilterValue, 24, 24, 0, // Skip to: 171
/* 147 */     MCD::OPC_CheckPredicate, 66, 11, 0, // Skip to: 162
/* 151 */     MCD::OPC_CheckField, 21, 5, 0, 5, 0, // Skip to: 162
/* 157 */     MCD::OPC_Decode, 243, 2, 220, 2, // Opcode: BNEZALC
/* 162 */     MCD::OPC_CheckPredicate, 67, 5, 0, // Skip to: 171
/* 166 */     MCD::OPC_Decode, 250, 2, 220, 2, // Opcode: BNVC
/* 171 */     MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_GP6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 3 */       MCD::OPC_FilterValue, 53, 14, 0, // Skip to: 21
/* 7 */       MCD::OPC_CheckPredicate, 73, 28, 0, // Skip to: 39
/* 11 */      MCD::OPC_CheckField, 26, 6, 0, 22, 0, // Skip to: 39
/* 17 */      MCD::OPC_Decode, 133, 15, 12, // Opcode: SELEQZ64
/* 21 */      MCD::OPC_FilterValue, 55, 14, 0, // Skip to: 39
/* 25 */      MCD::OPC_CheckPredicate, 73, 10, 0, // Skip to: 39
/* 29 */      MCD::OPC_CheckField, 26, 6, 0, 4, 0, // Skip to: 39
/* 35 */      MCD::OPC_Decode, 140, 15, 12, // Opcode: SELNEZ64
/* 39 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips32r6_64r6_PTR6432[] = {
/* 0 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 3 */       MCD::OPC_FilterValue, 38, 15, 0, // Skip to: 22
/* 7 */       MCD::OPC_CheckPredicate, 74, 30, 0, // Skip to: 41
/* 11 */      MCD::OPC_CheckField, 26, 6, 31, 24, 0, // Skip to: 41
/* 17 */      MCD::OPC_Decode, 220, 14, 224, 2, // Opcode: SC64_R6
/* 22 */      MCD::OPC_FilterValue, 54, 15, 0, // Skip to: 41
/* 26 */      MCD::OPC_CheckPredicate, 74, 11, 0, // Skip to: 41
/* 30 */      MCD::OPC_CheckField, 26, 6, 31, 5, 0, // Skip to: 41
/* 36 */      MCD::OPC_Decode, 247, 9, 224, 2, // Opcode: LL64_R6
/* 41 */      MCD::OPC_Fail,
  0
};

static const uint8_t DecoderTableMips6432[] = {
/* 0 */       MCD::OPC_ExtractField, 26, 6,  // Inst{31-26} ...
/* 3 */       MCD::OPC_FilterValue, 0, 108, 1, // Skip to: 371
/* 7 */       MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 10 */      MCD::OPC_FilterValue, 20, 15, 0, // Skip to: 29
/* 14 */      MCD::OPC_CheckPredicate, 75, 127, 7, // Skip to: 1937
/* 18 */      MCD::OPC_CheckField, 6, 5, 0, 121, 7, // Skip to: 1937
/* 24 */      MCD::OPC_Decode, 223, 6, 227, 2, // Opcode: DSLLV
/* 29 */      MCD::OPC_FilterValue, 22, 29, 0, // Skip to: 62
/* 33 */      MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 36 */      MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 49
/* 40 */      MCD::OPC_CheckPredicate, 75, 101, 7, // Skip to: 1937
/* 44 */      MCD::OPC_Decode, 235, 6, 227, 2, // Opcode: DSRLV
/* 49 */      MCD::OPC_FilterValue, 1, 92, 7, // Skip to: 1937
/* 53 */      MCD::OPC_CheckPredicate, 76, 88, 7, // Skip to: 1937
/* 57 */      MCD::OPC_Decode, 210, 6, 227, 2, // Opcode: DROTRV
/* 62 */      MCD::OPC_FilterValue, 23, 15, 0, // Skip to: 81
/* 66 */      MCD::OPC_CheckPredicate, 75, 75, 7, // Skip to: 1937
/* 70 */      MCD::OPC_CheckField, 6, 5, 0, 69, 7, // Skip to: 1937
/* 76 */      MCD::OPC_Decode, 229, 6, 227, 2, // Opcode: DSRAV
/* 81 */      MCD::OPC_FilterValue, 28, 15, 0, // Skip to: 100
/* 85 */      MCD::OPC_CheckPredicate, 77, 56, 7, // Skip to: 1937
/* 89 */      MCD::OPC_CheckField, 6, 10, 0, 50, 7, // Skip to: 1937
/* 95 */      MCD::OPC_Decode, 146, 6, 155, 1, // Opcode: DMULT
/* 100 */     MCD::OPC_FilterValue, 29, 15, 0, // Skip to: 119
/* 104 */     MCD::OPC_CheckPredicate, 77, 37, 7, // Skip to: 1937
/* 108 */     MCD::OPC_CheckField, 6, 10, 0, 31, 7, // Skip to: 1937
/* 114 */     MCD::OPC_Decode, 147, 6, 155, 1, // Opcode: DMULTu
/* 119 */     MCD::OPC_FilterValue, 30, 15, 0, // Skip to: 138
/* 123 */     MCD::OPC_CheckPredicate, 77, 18, 7, // Skip to: 1937
/* 127 */     MCD::OPC_CheckField, 6, 10, 0, 12, 7, // Skip to: 1937
/* 133 */     MCD::OPC_Decode, 215, 6, 155, 1, // Opcode: DSDIV
/* 138 */     MCD::OPC_FilterValue, 31, 15, 0, // Skip to: 157
/* 142 */     MCD::OPC_CheckPredicate, 77, 255, 6, // Skip to: 1937
/* 146 */     MCD::OPC_CheckField, 6, 10, 0, 249, 6, // Skip to: 1937
/* 152 */     MCD::OPC_Decode, 242, 6, 155, 1, // Opcode: DUDIV
/* 157 */     MCD::OPC_FilterValue, 44, 14, 0, // Skip to: 175
/* 161 */     MCD::OPC_CheckPredicate, 75, 236, 6, // Skip to: 1937
/* 165 */     MCD::OPC_CheckField, 6, 5, 0, 230, 6, // Skip to: 1937
/* 171 */     MCD::OPC_Decode, 193, 5, 12, // Opcode: DADD
/* 175 */     MCD::OPC_FilterValue, 45, 14, 0, // Skip to: 193
/* 179 */     MCD::OPC_CheckPredicate, 75, 218, 6, // Skip to: 1937
/* 183 */     MCD::OPC_CheckField, 6, 5, 0, 212, 6, // Skip to: 1937
/* 189 */     MCD::OPC_Decode, 199, 5, 12, // Opcode: DADDu
/* 193 */     MCD::OPC_FilterValue, 46, 14, 0, // Skip to: 211
/* 197 */     MCD::OPC_CheckPredicate, 75, 200, 6, // Skip to: 1937
/* 201 */     MCD::OPC_CheckField, 6, 5, 0, 194, 6, // Skip to: 1937
/* 207 */     MCD::OPC_Decode, 238, 6, 12, // Opcode: DSUB
/* 211 */     MCD::OPC_FilterValue, 47, 14, 0, // Skip to: 229
/* 215 */     MCD::OPC_CheckPredicate, 75, 182, 6, // Skip to: 1937
/* 219 */     MCD::OPC_CheckField, 6, 5, 0, 176, 6, // Skip to: 1937
/* 225 */     MCD::OPC_Decode, 241, 6, 12, // Opcode: DSUBu
/* 229 */     MCD::OPC_FilterValue, 56, 15, 0, // Skip to: 248
/* 233 */     MCD::OPC_CheckPredicate, 75, 164, 6, // Skip to: 1937
/* 237 */     MCD::OPC_CheckField, 21, 5, 0, 158, 6, // Skip to: 1937
/* 243 */     MCD::OPC_Decode, 219, 6, 228, 2, // Opcode: DSLL
/* 248 */     MCD::OPC_FilterValue, 58, 29, 0, // Skip to: 281
/* 252 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 255 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 268
/* 259 */     MCD::OPC_CheckPredicate, 75, 138, 6, // Skip to: 1937
/* 263 */     MCD::OPC_Decode, 232, 6, 228, 2, // Opcode: DSRL
/* 268 */     MCD::OPC_FilterValue, 1, 129, 6, // Skip to: 1937
/* 272 */     MCD::OPC_CheckPredicate, 76, 125, 6, // Skip to: 1937
/* 276 */     MCD::OPC_Decode, 207, 6, 228, 2, // Opcode: DROTR
/* 281 */     MCD::OPC_FilterValue, 59, 15, 0, // Skip to: 300
/* 285 */     MCD::OPC_CheckPredicate, 75, 112, 6, // Skip to: 1937
/* 289 */     MCD::OPC_CheckField, 21, 5, 0, 106, 6, // Skip to: 1937
/* 295 */     MCD::OPC_Decode, 226, 6, 228, 2, // Opcode: DSRA
/* 300 */     MCD::OPC_FilterValue, 60, 15, 0, // Skip to: 319
/* 304 */     MCD::OPC_CheckPredicate, 75, 93, 6, // Skip to: 1937
/* 308 */     MCD::OPC_CheckField, 21, 5, 0, 87, 6, // Skip to: 1937
/* 314 */     MCD::OPC_Decode, 220, 6, 228, 2, // Opcode: DSLL32
/* 319 */     MCD::OPC_FilterValue, 62, 29, 0, // Skip to: 352
/* 323 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 326 */     MCD::OPC_FilterValue, 0, 9, 0, // Skip to: 339
/* 330 */     MCD::OPC_CheckPredicate, 75, 67, 6, // Skip to: 1937
/* 334 */     MCD::OPC_Decode, 233, 6, 228, 2, // Opcode: DSRL32
/* 339 */     MCD::OPC_FilterValue, 1, 58, 6, // Skip to: 1937
/* 343 */     MCD::OPC_CheckPredicate, 76, 54, 6, // Skip to: 1937
/* 347 */     MCD::OPC_Decode, 208, 6, 228, 2, // Opcode: DROTR32
/* 352 */     MCD::OPC_FilterValue, 63, 45, 6, // Skip to: 1937
/* 356 */     MCD::OPC_CheckPredicate, 75, 41, 6, // Skip to: 1937
/* 360 */     MCD::OPC_CheckField, 21, 5, 0, 35, 6, // Skip to: 1937
/* 366 */     MCD::OPC_Decode, 227, 6, 228, 2, // Opcode: DSRA32
/* 371 */     MCD::OPC_FilterValue, 16, 41, 0, // Skip to: 416
/* 375 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 378 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 397
/* 382 */     MCD::OPC_CheckPredicate, 78, 15, 6, // Skip to: 1937
/* 386 */     MCD::OPC_CheckField, 3, 8, 0, 9, 6, // Skip to: 1937
/* 392 */     MCD::OPC_Decode, 251, 5, 229, 2, // Opcode: DMFC0
/* 397 */     MCD::OPC_FilterValue, 5, 0, 6, // Skip to: 1937
/* 401 */     MCD::OPC_CheckPredicate, 78, 252, 5, // Skip to: 1937
/* 405 */     MCD::OPC_CheckField, 3, 8, 0, 246, 5, // Skip to: 1937
/* 411 */     MCD::OPC_Decode, 134, 6, 230, 2, // Opcode: DMTC0
/* 416 */     MCD::OPC_FilterValue, 17, 237, 3, // Skip to: 1425
/* 420 */     MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 423 */     MCD::OPC_FilterValue, 0, 54, 0, // Skip to: 481
/* 427 */     MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 430 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 449
/* 434 */     MCD::OPC_CheckPredicate, 79, 219, 5, // Skip to: 1937
/* 438 */     MCD::OPC_CheckField, 6, 5, 0, 213, 5, // Skip to: 1937
/* 444 */     MCD::OPC_Decode, 149, 11, 231, 2, // Opcode: MFHC1_D64
/* 449 */     MCD::OPC_FilterValue, 7, 15, 0, // Skip to: 468
/* 453 */     MCD::OPC_CheckPredicate, 79, 200, 5, // Skip to: 1937
/* 457 */     MCD::OPC_CheckField, 6, 5, 0, 194, 5, // Skip to: 1937
/* 463 */     MCD::OPC_Decode, 160, 12, 232, 2, // Opcode: MTHC1_D64
/* 468 */     MCD::OPC_FilterValue, 17, 185, 5, // Skip to: 1937
/* 472 */     MCD::OPC_CheckPredicate, 80, 181, 5, // Skip to: 1937
/* 476 */     MCD::OPC_Decode, 172, 7, 212, 2, // Opcode: FADD_D64
/* 481 */     MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 500
/* 485 */     MCD::OPC_CheckPredicate, 80, 168, 5, // Skip to: 1937
/* 489 */     MCD::OPC_CheckField, 21, 5, 17, 162, 5, // Skip to: 1937
/* 495 */     MCD::OPC_Decode, 188, 8, 212, 2, // Opcode: FSUB_D64
/* 500 */     MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 519
/* 504 */     MCD::OPC_CheckPredicate, 80, 149, 5, // Skip to: 1937
/* 508 */     MCD::OPC_CheckField, 21, 5, 17, 143, 5, // Skip to: 1937
/* 514 */     MCD::OPC_Decode, 147, 8, 212, 2, // Opcode: FMUL_D64
/* 519 */     MCD::OPC_FilterValue, 3, 15, 0, // Skip to: 538
/* 523 */     MCD::OPC_CheckPredicate, 80, 130, 5, // Skip to: 1937
/* 527 */     MCD::OPC_CheckField, 21, 5, 17, 124, 5, // Skip to: 1937
/* 533 */     MCD::OPC_Decode, 210, 7, 212, 2, // Opcode: FDIV_D64
/* 538 */     MCD::OPC_FilterValue, 4, 16, 0, // Skip to: 558
/* 542 */     MCD::OPC_CheckPredicate, 81, 111, 5, // Skip to: 1937
/* 546 */     MCD::OPC_CheckField, 16, 10, 160, 4, 104, 5, // Skip to: 1937
/* 553 */     MCD::OPC_Decode, 181, 8, 214, 1, // Opcode: FSQRT_D64
/* 558 */     MCD::OPC_FilterValue, 5, 16, 0, // Skip to: 578
/* 562 */     MCD::OPC_CheckPredicate, 80, 91, 5, // Skip to: 1937
/* 566 */     MCD::OPC_CheckField, 16, 10, 160, 4, 84, 5, // Skip to: 1937
/* 573 */     MCD::OPC_Decode, 165, 7, 214, 1, // Opcode: FABS_D64
/* 578 */     MCD::OPC_FilterValue, 6, 16, 0, // Skip to: 598
/* 582 */     MCD::OPC_CheckPredicate, 80, 71, 5, // Skip to: 1937
/* 586 */     MCD::OPC_CheckField, 16, 10, 160, 4, 64, 5, // Skip to: 1937
/* 593 */     MCD::OPC_Decode, 138, 8, 214, 1, // Opcode: FMOV_D64
/* 598 */     MCD::OPC_FilterValue, 7, 16, 0, // Skip to: 618
/* 602 */     MCD::OPC_CheckPredicate, 80, 51, 5, // Skip to: 1937
/* 606 */     MCD::OPC_CheckField, 16, 10, 160, 4, 44, 5, // Skip to: 1937
/* 613 */     MCD::OPC_Decode, 155, 8, 214, 1, // Opcode: FNEG_D64
/* 618 */     MCD::OPC_FilterValue, 8, 31, 0, // Skip to: 653
/* 622 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 625 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 639
/* 630 */     MCD::OPC_CheckPredicate, 82, 23, 5, // Skip to: 1937
/* 634 */     MCD::OPC_Decode, 186, 14, 207, 1, // Opcode: ROUND_L_S
/* 639 */     MCD::OPC_FilterValue, 160, 4, 13, 5, // Skip to: 1937
/* 644 */     MCD::OPC_CheckPredicate, 82, 9, 5, // Skip to: 1937
/* 648 */     MCD::OPC_Decode, 184, 14, 214, 1, // Opcode: ROUND_L_D64
/* 653 */     MCD::OPC_FilterValue, 9, 31, 0, // Skip to: 688
/* 657 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 660 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 674
/* 665 */     MCD::OPC_CheckPredicate, 82, 244, 4, // Skip to: 1937
/* 669 */     MCD::OPC_Decode, 252, 17, 207, 1, // Opcode: TRUNC_L_S
/* 674 */     MCD::OPC_FilterValue, 160, 4, 234, 4, // Skip to: 1937
/* 679 */     MCD::OPC_CheckPredicate, 82, 230, 4, // Skip to: 1937
/* 683 */     MCD::OPC_Decode, 250, 17, 214, 1, // Opcode: TRUNC_L_D64
/* 688 */     MCD::OPC_FilterValue, 10, 31, 0, // Skip to: 723
/* 692 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 695 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 709
/* 700 */     MCD::OPC_CheckPredicate, 82, 209, 4, // Skip to: 1937
/* 704 */     MCD::OPC_Decode, 198, 3, 207, 1, // Opcode: CEIL_L_S
/* 709 */     MCD::OPC_FilterValue, 160, 4, 199, 4, // Skip to: 1937
/* 714 */     MCD::OPC_CheckPredicate, 82, 195, 4, // Skip to: 1937
/* 718 */     MCD::OPC_Decode, 196, 3, 214, 1, // Opcode: CEIL_L_D64
/* 723 */     MCD::OPC_FilterValue, 11, 31, 0, // Skip to: 758
/* 727 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 730 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 744
/* 735 */     MCD::OPC_CheckPredicate, 82, 174, 4, // Skip to: 1937
/* 739 */     MCD::OPC_Decode, 245, 7, 207, 1, // Opcode: FLOOR_L_S
/* 744 */     MCD::OPC_FilterValue, 160, 4, 164, 4, // Skip to: 1937
/* 749 */     MCD::OPC_CheckPredicate, 82, 160, 4, // Skip to: 1937
/* 753 */     MCD::OPC_Decode, 243, 7, 214, 1, // Opcode: FLOOR_L_D64
/* 758 */     MCD::OPC_FilterValue, 12, 16, 0, // Skip to: 778
/* 762 */     MCD::OPC_CheckPredicate, 81, 147, 4, // Skip to: 1937
/* 766 */     MCD::OPC_CheckField, 16, 10, 160, 4, 140, 4, // Skip to: 1937
/* 773 */     MCD::OPC_Decode, 189, 14, 233, 2, // Opcode: ROUND_W_D64
/* 778 */     MCD::OPC_FilterValue, 13, 16, 0, // Skip to: 798
/* 782 */     MCD::OPC_CheckPredicate, 81, 127, 4, // Skip to: 1937
/* 786 */     MCD::OPC_CheckField, 16, 10, 160, 4, 120, 4, // Skip to: 1937
/* 793 */     MCD::OPC_Decode, 255, 17, 233, 2, // Opcode: TRUNC_W_D64
/* 798 */     MCD::OPC_FilterValue, 14, 16, 0, // Skip to: 818
/* 802 */     MCD::OPC_CheckPredicate, 81, 107, 4, // Skip to: 1937
/* 806 */     MCD::OPC_CheckField, 16, 10, 160, 4, 100, 4, // Skip to: 1937
/* 813 */     MCD::OPC_Decode, 201, 3, 233, 2, // Opcode: CEIL_W_D64
/* 818 */     MCD::OPC_FilterValue, 15, 16, 0, // Skip to: 838
/* 822 */     MCD::OPC_CheckPredicate, 81, 87, 4, // Skip to: 1937
/* 826 */     MCD::OPC_CheckField, 16, 10, 160, 4, 80, 4, // Skip to: 1937
/* 833 */     MCD::OPC_Decode, 248, 7, 233, 2, // Opcode: FLOOR_W_D64
/* 838 */     MCD::OPC_FilterValue, 17, 41, 0, // Skip to: 883
/* 842 */     MCD::OPC_ExtractField, 16, 2,  // Inst{17-16} ...
/* 845 */     MCD::OPC_FilterValue, 0, 15, 0, // Skip to: 864
/* 849 */     MCD::OPC_CheckPredicate, 83, 60, 4, // Skip to: 1937
/* 853 */     MCD::OPC_CheckField, 21, 5, 17, 54, 4, // Skip to: 1937
/* 859 */     MCD::OPC_Decode, 215, 11, 234, 2, // Opcode: MOVF_D64
/* 864 */     MCD::OPC_FilterValue, 1, 45, 4, // Skip to: 1937
/* 868 */     MCD::OPC_CheckPredicate, 83, 41, 4, // Skip to: 1937
/* 872 */     MCD::OPC_CheckField, 21, 5, 17, 35, 4, // Skip to: 1937
/* 878 */     MCD::OPC_Decode, 235, 11, 234, 2, // Opcode: MOVT_D64
/* 883 */     MCD::OPC_FilterValue, 18, 15, 0, // Skip to: 902
/* 887 */     MCD::OPC_CheckPredicate, 83, 22, 4, // Skip to: 1937
/* 891 */     MCD::OPC_CheckField, 21, 5, 17, 16, 4, // Skip to: 1937
/* 897 */     MCD::OPC_Decode, 247, 11, 235, 2, // Opcode: MOVZ_I_D64
/* 902 */     MCD::OPC_FilterValue, 19, 15, 0, // Skip to: 921
/* 906 */     MCD::OPC_CheckPredicate, 83, 3, 4, // Skip to: 1937
/* 910 */     MCD::OPC_CheckField, 21, 5, 17, 253, 3, // Skip to: 1937
/* 916 */     MCD::OPC_Decode, 227, 11, 235, 2, // Opcode: MOVN_I_D64
/* 921 */     MCD::OPC_FilterValue, 32, 31, 0, // Skip to: 956
/* 925 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 928 */     MCD::OPC_FilterValue, 160, 4, 9, 0, // Skip to: 942
/* 933 */     MCD::OPC_CheckPredicate, 80, 232, 3, // Skip to: 1937
/* 937 */     MCD::OPC_Decode, 255, 4, 233, 2, // Opcode: CVT_S_D64
/* 942 */     MCD::OPC_FilterValue, 160, 5, 222, 3, // Skip to: 1937
/* 947 */     MCD::OPC_CheckPredicate, 82, 218, 3, // Skip to: 1937
/* 951 */     MCD::OPC_Decode, 129, 5, 233, 2, // Opcode: CVT_S_L
/* 956 */     MCD::OPC_FilterValue, 33, 45, 0, // Skip to: 1005
/* 960 */     MCD::OPC_ExtractField, 16, 10,  // Inst{25-16} ...
/* 963 */     MCD::OPC_FilterValue, 128, 4, 9, 0, // Skip to: 977
/* 968 */     MCD::OPC_CheckPredicate, 80, 197, 3, // Skip to: 1937
/* 972 */     MCD::OPC_Decode, 241, 4, 207, 1, // Opcode: CVT_D64_S
/* 977 */     MCD::OPC_FilterValue, 128, 5, 9, 0, // Skip to: 991
/* 982 */     MCD::OPC_CheckPredicate, 80, 183, 3, // Skip to: 1937
/* 986 */     MCD::OPC_Decode, 242, 4, 207, 1, // Opcode: CVT_D64_W
/* 991 */     MCD::OPC_FilterValue, 160, 5, 173, 3, // Skip to: 1937
/* 996 */     MCD::OPC_CheckPredicate, 80, 169, 3, // Skip to: 1937
/* 1000 */    MCD::OPC_Decode, 240, 4, 214, 1, // Opcode: CVT_D64_L
/* 1005 */    MCD::OPC_FilterValue, 36, 16, 0, // Skip to: 1025
/* 1009 */    MCD::OPC_CheckPredicate, 80, 156, 3, // Skip to: 1937
/* 1013 */    MCD::OPC_CheckField, 16, 10, 160, 4, 149, 3, // Skip to: 1937
/* 1020 */    MCD::OPC_Decode, 135, 5, 233, 2, // Opcode: CVT_W_D64
/* 1025 */    MCD::OPC_FilterValue, 48, 21, 0, // Skip to: 1050
/* 1029 */    MCD::OPC_CheckPredicate, 84, 136, 3, // Skip to: 1937
/* 1033 */    MCD::OPC_CheckField, 21, 5, 17, 130, 3, // Skip to: 1937
/* 1039 */    MCD::OPC_CheckField, 6, 5, 0, 124, 3, // Skip to: 1937
/* 1045 */    MCD::OPC_Decode, 145, 5, 236, 2, // Opcode: C_F_D64
/* 1050 */    MCD::OPC_FilterValue, 49, 21, 0, // Skip to: 1075
/* 1054 */    MCD::OPC_CheckPredicate, 84, 111, 3, // Skip to: 1937
/* 1058 */    MCD::OPC_CheckField, 21, 5, 17, 105, 3, // Skip to: 1937
/* 1064 */    MCD::OPC_CheckField, 6, 5, 0, 99, 3, // Skip to: 1937
/* 1070 */    MCD::OPC_Decode, 187, 5, 236, 2, // Opcode: C_UN_D64
/* 1075 */    MCD::OPC_FilterValue, 50, 21, 0, // Skip to: 1100
/* 1079 */    MCD::OPC_CheckPredicate, 84, 86, 3, // Skip to: 1937
/* 1083 */    MCD::OPC_CheckField, 21, 5, 17, 80, 3, // Skip to: 1937
/* 1089 */    MCD::OPC_CheckField, 6, 5, 0, 74, 3, // Skip to: 1937
/* 1095 */    MCD::OPC_Decode, 142, 5, 236, 2, // Opcode: C_EQ_D64
/* 1100 */    MCD::OPC_FilterValue, 51, 21, 0, // Skip to: 1125
/* 1104 */    MCD::OPC_CheckPredicate, 84, 61, 3, // Skip to: 1937
/* 1108 */    MCD::OPC_CheckField, 21, 5, 17, 55, 3, // Skip to: 1937
/* 1114 */    MCD::OPC_CheckField, 6, 5, 0, 49, 3, // Skip to: 1937
/* 1120 */    MCD::OPC_Decode, 178, 5, 236, 2, // Opcode: C_UEQ_D64
/* 1125 */    MCD::OPC_FilterValue, 52, 21, 0, // Skip to: 1150
/* 1129 */    MCD::OPC_CheckPredicate, 84, 36, 3, // Skip to: 1937
/* 1133 */    MCD::OPC_CheckField, 21, 5, 17, 30, 3, // Skip to: 1937
/* 1139 */    MCD::OPC_CheckField, 6, 5, 0, 24, 3, // Skip to: 1937
/* 1145 */    MCD::OPC_Decode, 169, 5, 236, 2, // Opcode: C_OLT_D64
/* 1150 */    MCD::OPC_FilterValue, 53, 21, 0, // Skip to: 1175
/* 1154 */    MCD::OPC_CheckPredicate, 84, 11, 3, // Skip to: 1937
/* 1158 */    MCD::OPC_CheckField, 21, 5, 17, 5, 3, // Skip to: 1937
/* 1164 */    MCD::OPC_CheckField, 6, 5, 0, 255, 2, // Skip to: 1937
/* 1170 */    MCD::OPC_Decode, 184, 5, 236, 2, // Opcode: C_ULT_D64
/* 1175 */    MCD::OPC_FilterValue, 54, 21, 0, // Skip to: 1200
/* 1179 */    MCD::OPC_CheckPredicate, 84, 242, 2, // Skip to: 1937
/* 1183 */    MCD::OPC_CheckField, 21, 5, 17, 236, 2, // Skip to: 1937
/* 1189 */    MCD::OPC_CheckField, 6, 5, 0, 230, 2, // Skip to: 1937
/* 1195 */    MCD::OPC_Decode, 166, 5, 236, 2, // Opcode: C_OLE_D64
/* 1200 */    MCD::OPC_FilterValue, 55, 21, 0, // Skip to: 1225
/* 1204 */    MCD::OPC_CheckPredicate, 84, 217, 2, // Skip to: 1937
/* 1208 */    MCD::OPC_CheckField, 21, 5, 17, 211, 2, // Skip to: 1937
/* 1214 */    MCD::OPC_CheckField, 6, 5, 0, 205, 2, // Skip to: 1937
/* 1220 */    MCD::OPC_Decode, 181, 5, 236, 2, // Opcode: C_ULE_D64
/* 1225 */    MCD::OPC_FilterValue, 56, 21, 0, // Skip to: 1250
/* 1229 */    MCD::OPC_CheckPredicate, 84, 192, 2, // Skip to: 1937
/* 1233 */    MCD::OPC_CheckField, 21, 5, 17, 186, 2, // Skip to: 1937
/* 1239 */    MCD::OPC_CheckField, 6, 5, 0, 180, 2, // Skip to: 1937
/* 1245 */    MCD::OPC_Decode, 175, 5, 236, 2, // Opcode: C_SF_D64
/* 1250 */    MCD::OPC_FilterValue, 57, 21, 0, // Skip to: 1275
/* 1254 */    MCD::OPC_CheckPredicate, 84, 167, 2, // Skip to: 1937
/* 1258 */    MCD::OPC_CheckField, 21, 5, 17, 161, 2, // Skip to: 1937
/* 1264 */    MCD::OPC_CheckField, 6, 5, 0, 155, 2, // Skip to: 1937
/* 1270 */    MCD::OPC_Decode, 157, 5, 236, 2, // Opcode: C_NGLE_D64
/* 1275 */    MCD::OPC_FilterValue, 58, 21, 0, // Skip to: 1300
/* 1279 */    MCD::OPC_CheckPredicate, 84, 142, 2, // Skip to: 1937
/* 1283 */    MCD::OPC_CheckField, 21, 5, 17, 136, 2, // Skip to: 1937
/* 1289 */    MCD::OPC_CheckField, 6, 5, 0, 130, 2, // Skip to: 1937
/* 1295 */    MCD::OPC_Decode, 172, 5, 236, 2, // Opcode: C_SEQ_D64
/* 1300 */    MCD::OPC_FilterValue, 59, 21, 0, // Skip to: 1325
/* 1304 */    MCD::OPC_CheckPredicate, 84, 117, 2, // Skip to: 1937
/* 1308 */    MCD::OPC_CheckField, 21, 5, 17, 111, 2, // Skip to: 1937
/* 1314 */    MCD::OPC_CheckField, 6, 5, 0, 105, 2, // Skip to: 1937
/* 1320 */    MCD::OPC_Decode, 160, 5, 236, 2, // Opcode: C_NGL_D64
/* 1325 */    MCD::OPC_FilterValue, 60, 21, 0, // Skip to: 1350
/* 1329 */    MCD::OPC_CheckPredicate, 84, 92, 2, // Skip to: 1937
/* 1333 */    MCD::OPC_CheckField, 21, 5, 17, 86, 2, // Skip to: 1937
/* 1339 */    MCD::OPC_CheckField, 6, 5, 0, 80, 2, // Skip to: 1937
/* 1345 */    MCD::OPC_Decode, 151, 5, 236, 2, // Opcode: C_LT_D64
/* 1350 */    MCD::OPC_FilterValue, 61, 21, 0, // Skip to: 1375
/* 1354 */    MCD::OPC_CheckPredicate, 84, 67, 2, // Skip to: 1937
/* 1358 */    MCD::OPC_CheckField, 21, 5, 17, 61, 2, // Skip to: 1937
/* 1364 */    MCD::OPC_CheckField, 6, 5, 0, 55, 2, // Skip to: 1937
/* 1370 */    MCD::OPC_Decode, 154, 5, 236, 2, // Opcode: C_NGE_D64
/* 1375 */    MCD::OPC_FilterValue, 62, 21, 0, // Skip to: 1400
/* 1379 */    MCD::OPC_CheckPredicate, 84, 42, 2, // Skip to: 1937
/* 1383 */    MCD::OPC_CheckField, 21, 5, 17, 36, 2, // Skip to: 1937
/* 1389 */    MCD::OPC_CheckField, 6, 5, 0, 30, 2, // Skip to: 1937
/* 1395 */    MCD::OPC_Decode, 148, 5, 236, 2, // Opcode: C_LE_D64
/* 1400 */    MCD::OPC_FilterValue, 63, 21, 2, // Skip to: 1937
/* 1404 */    MCD::OPC_CheckPredicate, 84, 17, 2, // Skip to: 1937
/* 1408 */    MCD::OPC_CheckField, 21, 5, 17, 11, 2, // Skip to: 1937
/* 1414 */    MCD::OPC_CheckField, 6, 5, 0, 5, 2, // Skip to: 1937
/* 1420 */    MCD::OPC_Decode, 163, 5, 236, 2, // Opcode: C_NGT_D64
/* 1425 */    MCD::OPC_FilterValue, 18, 41, 0, // Skip to: 1470
/* 1429 */    MCD::OPC_ExtractField, 21, 5,  // Inst{25-21} ...
/* 1432 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1451
/* 1436 */    MCD::OPC_CheckPredicate, 78, 241, 1, // Skip to: 1937
/* 1440 */    MCD::OPC_CheckField, 3, 8, 0, 235, 1, // Skip to: 1937
/* 1446 */    MCD::OPC_Decode, 255, 5, 237, 2, // Opcode: DMFC2
/* 1451 */    MCD::OPC_FilterValue, 5, 226, 1, // Skip to: 1937
/* 1455 */    MCD::OPC_CheckPredicate, 78, 222, 1, // Skip to: 1937
/* 1459 */    MCD::OPC_CheckField, 3, 8, 0, 216, 1, // Skip to: 1937
/* 1465 */    MCD::OPC_Decode, 138, 6, 238, 2, // Opcode: DMTC2
/* 1470 */    MCD::OPC_FilterValue, 19, 131, 0, // Skip to: 1605
/* 1474 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1477 */    MCD::OPC_FilterValue, 1, 15, 0, // Skip to: 1496
/* 1481 */    MCD::OPC_CheckPredicate, 85, 196, 1, // Skip to: 1937
/* 1485 */    MCD::OPC_CheckField, 11, 5, 0, 190, 1, // Skip to: 1937
/* 1491 */    MCD::OPC_Decode, 221, 9, 239, 2, // Opcode: LDXC164
/* 1496 */    MCD::OPC_FilterValue, 5, 15, 0, // Skip to: 1515
/* 1500 */    MCD::OPC_CheckPredicate, 86, 177, 1, // Skip to: 1937
/* 1504 */    MCD::OPC_CheckField, 11, 5, 0, 171, 1, // Skip to: 1937
/* 1510 */    MCD::OPC_Decode, 140, 10, 239, 2, // Opcode: LUXC164
/* 1515 */    MCD::OPC_FilterValue, 9, 15, 0, // Skip to: 1534
/* 1519 */    MCD::OPC_CheckPredicate, 85, 158, 1, // Skip to: 1937
/* 1523 */    MCD::OPC_CheckField, 6, 5, 0, 152, 1, // Skip to: 1937
/* 1529 */    MCD::OPC_Decode, 249, 14, 240, 2, // Opcode: SDXC164
/* 1534 */    MCD::OPC_FilterValue, 13, 15, 0, // Skip to: 1553
/* 1538 */    MCD::OPC_CheckPredicate, 86, 139, 1, // Skip to: 1937
/* 1542 */    MCD::OPC_CheckField, 6, 5, 0, 133, 1, // Skip to: 1937
/* 1548 */    MCD::OPC_Decode, 250, 16, 240, 2, // Opcode: SUXC164
/* 1553 */    MCD::OPC_FilterValue, 33, 9, 0, // Skip to: 1566
/* 1557 */    MCD::OPC_CheckPredicate, 85, 120, 1, // Skip to: 1937
/* 1561 */    MCD::OPC_Decode, 223, 10, 241, 2, // Opcode: MADD_D64
/* 1566 */    MCD::OPC_FilterValue, 41, 9, 0, // Skip to: 1579
/* 1570 */    MCD::OPC_CheckPredicate, 85, 107, 1, // Skip to: 1937
/* 1574 */    MCD::OPC_Decode, 142, 12, 241, 2, // Opcode: MSUB_D64
/* 1579 */    MCD::OPC_FilterValue, 49, 9, 0, // Skip to: 1592
/* 1583 */    MCD::OPC_CheckPredicate, 85, 94, 1, // Skip to: 1937
/* 1587 */    MCD::OPC_Decode, 250, 12, 241, 2, // Opcode: NMADD_D64
/* 1592 */    MCD::OPC_FilterValue, 57, 85, 1, // Skip to: 1937
/* 1596 */    MCD::OPC_CheckPredicate, 85, 81, 1, // Skip to: 1937
/* 1600 */    MCD::OPC_Decode, 255, 12, 241, 2, // Opcode: NMSUB_D64
/* 1605 */    MCD::OPC_FilterValue, 24, 9, 0, // Skip to: 1618
/* 1609 */    MCD::OPC_CheckPredicate, 87, 68, 1, // Skip to: 1937
/* 1613 */    MCD::OPC_Decode, 197, 5, 242, 2, // Opcode: DADDi
/* 1618 */    MCD::OPC_FilterValue, 25, 9, 0, // Skip to: 1631
/* 1622 */    MCD::OPC_CheckPredicate, 75, 55, 1, // Skip to: 1937
/* 1626 */    MCD::OPC_Decode, 198, 5, 242, 2, // Opcode: DADDiu
/* 1631 */    MCD::OPC_FilterValue, 26, 9, 0, // Skip to: 1644
/* 1635 */    MCD::OPC_CheckPredicate, 87, 42, 1, // Skip to: 1937
/* 1639 */    MCD::OPC_Decode, 216, 9, 200, 2, // Opcode: LDL
/* 1644 */    MCD::OPC_FilterValue, 27, 9, 0, // Skip to: 1657
/* 1648 */    MCD::OPC_CheckPredicate, 87, 29, 1, // Skip to: 1937
/* 1652 */    MCD::OPC_Decode, 219, 9, 200, 2, // Opcode: LDR
/* 1657 */    MCD::OPC_FilterValue, 28, 29, 0, // Skip to: 1690
/* 1661 */    MCD::OPC_ExtractField, 0, 11,  // Inst{10-0} ...
/* 1664 */    MCD::OPC_FilterValue, 36, 9, 0, // Skip to: 1677
/* 1668 */    MCD::OPC_CheckPredicate, 88, 9, 1, // Skip to: 1937
/* 1672 */    MCD::OPC_Decode, 212, 5, 243, 2, // Opcode: DCLZ
/* 1677 */    MCD::OPC_FilterValue, 37, 0, 1, // Skip to: 1937
/* 1681 */    MCD::OPC_CheckPredicate, 88, 252, 0, // Skip to: 1937
/* 1685 */    MCD::OPC_Decode, 209, 5, 243, 2, // Opcode: DCLO
/* 1690 */    MCD::OPC_FilterValue, 31, 126, 0, // Skip to: 1820
/* 1694 */    MCD::OPC_ExtractField, 0, 6,  // Inst{5-0} ...
/* 1697 */    MCD::OPC_FilterValue, 1, 9, 0, // Skip to: 1710
/* 1701 */    MCD::OPC_CheckPredicate, 76, 232, 0, // Skip to: 1937
/* 1705 */    MCD::OPC_Decode, 223, 5, 244, 2, // Opcode: DEXTM
/* 1710 */    MCD::OPC_FilterValue, 2, 9, 0, // Skip to: 1723
/* 1714 */    MCD::OPC_CheckPredicate, 76, 219, 0, // Skip to: 1937
/* 1718 */    MCD::OPC_Decode, 225, 5, 244, 2, // Opcode: DEXTU
/* 1723 */    MCD::OPC_FilterValue, 3, 9, 0, // Skip to: 1736
/* 1727 */    MCD::OPC_CheckPredicate, 76, 206, 0, // Skip to: 1937
/* 1731 */    MCD::OPC_Decode, 222, 5, 244, 2, // Opcode: DEXT
/* 1736 */    MCD::OPC_FilterValue, 5, 9, 0, // Skip to: 1749
/* 1740 */    MCD::OPC_CheckPredicate, 76, 193, 0, // Skip to: 1937
/* 1744 */    MCD::OPC_Decode, 230, 5, 245, 2, // Opcode: DINSM
/* 1749 */    MCD::OPC_FilterValue, 6, 9, 0, // Skip to: 1762
/* 1753 */    MCD::OPC_CheckPredicate, 76, 180, 0, // Skip to: 1937
/* 1757 */    MCD::OPC_Decode, 232, 5, 245, 2, // Opcode: DINSU
/* 1762 */    MCD::OPC_FilterValue, 7, 9, 0, // Skip to: 1775
/* 1766 */    MCD::OPC_CheckPredicate, 76, 167, 0, // Skip to: 1937
/* 1770 */    MCD::OPC_Decode, 229, 5, 245, 2, // Opcode: DINS
/* 1775 */    MCD::OPC_FilterValue, 36, 158, 0, // Skip to: 1937
/* 1779 */    MCD::OPC_ExtractField, 6, 5,  // Inst{10-6} ...
/* 1782 */    MCD::OPC_FilterValue, 2, 15, 0, // Skip to: 1801
/* 1786 */    MCD::OPC_CheckPredicate, 76, 147, 0, // Skip to: 1937
/* 1790 */    MCD::OPC_CheckField, 21, 5, 0, 141, 0, // Skip to: 1937
/* 1796 */    MCD::OPC_Decode, 213, 6, 222, 2, // Opcode: DSBH
/* 1801 */    MCD::OPC_FilterValue, 5, 132, 0, // Skip to: 1937
/* 1805 */    MCD::OPC_CheckPredicate, 76, 128, 0, // Skip to: 1937
/* 1809 */    MCD::OPC_CheckField, 21, 5, 0, 122, 0, // Skip to: 1937
/* 1815 */    MCD::OPC_Decode, 217, 6, 222, 2, // Opcode: DSHD
/* 1820 */    MCD::OPC_FilterValue, 39, 9, 0, // Skip to: 1833
/* 1824 */    MCD::OPC_CheckPredicate, 75, 109, 0, // Skip to: 1937
/* 1828 */    MCD::OPC_Decode, 187, 10, 200, 2, // Opcode: LWu
/* 1833 */    MCD::OPC_FilterValue, 44, 9, 0, // Skip to: 1846
/* 1837 */    MCD::OPC_CheckPredicate, 87, 96, 0, // Skip to: 1937
/* 1841 */    MCD::OPC_Decode, 246, 14, 200, 2, // Opcode: SDL
/* 1846 */    MCD::OPC_FilterValue, 45, 9, 0, // Skip to: 1859
/* 1850 */    MCD::OPC_CheckPredicate, 87, 83, 0, // Skip to: 1937
/* 1854 */    MCD::OPC_Decode, 247, 14, 200, 2, // Opcode: SDR
/* 1859 */    MCD::OPC_FilterValue, 52, 9, 0, // Skip to: 1872
/* 1863 */    MCD::OPC_CheckPredicate, 77, 70, 0, // Skip to: 1937
/* 1867 */    MCD::OPC_Decode, 248, 9, 200, 2, // Opcode: LLD
/* 1872 */    MCD::OPC_FilterValue, 53, 9, 0, // Skip to: 1885
/* 1876 */    MCD::OPC_CheckPredicate, 89, 57, 0, // Skip to: 1937
/* 1880 */    MCD::OPC_Decode, 205, 9, 202, 2, // Opcode: LDC164
/* 1885 */    MCD::OPC_FilterValue, 55, 9, 0, // Skip to: 1898
/* 1889 */    MCD::OPC_CheckPredicate, 75, 44, 0, // Skip to: 1937
/* 1893 */    MCD::OPC_Decode, 203, 9, 200, 2, // Opcode: LD
/* 1898 */    MCD::OPC_FilterValue, 60, 9, 0, // Skip to: 1911
/* 1902 */    MCD::OPC_CheckPredicate, 87, 31, 0, // Skip to: 1937
/* 1906 */    MCD::OPC_Decode, 221, 14, 200, 2, // Opcode: SCD
/* 1911 */    MCD::OPC_FilterValue, 61, 9, 0, // Skip to: 1924
/* 1915 */    MCD::OPC_CheckPredicate, 89, 18, 0, // Skip to: 1937
/* 1919 */    MCD::OPC_Decode, 236, 14, 202, 2, // Opcode: SDC164
/* 1924 */    MCD::OPC_FilterValue, 63, 9, 0, // Skip to: 1937
/* 1928 */    MCD::OPC_CheckPredicate, 75, 5, 0, // Skip to: 1937
/* 1932 */    MCD::OPC_Decode, 228, 14, 200, 2, // Opcode: SD
/* 1937 */    MCD::OPC_Fail,
  0
};

static bool checkDecoderPredicate(unsigned Idx, const FeatureBitset& Bits) {
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return (Bits[Mips::FeatureMips16]);
  case 1:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMicroMips]);
  case 2:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMicroMips]);
  case 3:
    return (Bits[Mips::FeatureCnMips]);
  case 4:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 5:
    return (Bits[Mips::FeatureMicroMips]);
  case 6:
    return (Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 7:
    return (Bits[Mips::FeatureDSP] && Bits[Mips::FeatureMicroMips]);
  case 8:
    return (Bits[Mips::FeatureDSPR2] && Bits[Mips::FeatureMicroMips]);
  case 9:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && !Bits[Mips::FeatureMips32r6]);
  case 10:
    return (Bits[Mips::FeatureDSPR3] && Bits[Mips::FeatureMicroMips]);
  case 11:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureMicroMips]);
  case 12:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 13:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 14:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 15:
    return (Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 16:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6]);
  case 17:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips64r6]);
  case 18:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 19:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMicroMips] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat]);
  case 20:
    return (!Bits[Mips::FeatureMips16]);
  case 21:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2]);
  case 22:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 23:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 24:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA]);
  case 25:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 26:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 27:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32]);
  case 28:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 29:
    return (!Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 30:
    return (Bits[Mips::FeatureDSP]);
  case 31:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMSA] && Bits[Mips::FeatureMips64]);
  case 32:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 33:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 34:
    return (Bits[Mips::FeatureDSP] && !Bits[Mips::FeatureMicroMips]);
  case 35:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMicroMips]);
  case 36:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 37:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMicroMips]);
  case 38:
    return (!Bits[Mips::FeatureMicroMips]);
  case 39:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r5] && !Bits[Mips::FeatureMicroMips]);
  case 40:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat]);
  case 41:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 42:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 43:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 44:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 45:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 46:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 47:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 48:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 49:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 50:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 51:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 52:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 53:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 54:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 55:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && Bits[Mips::FeatureMicroMips]);
  case 56:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 57:
    return (Bits[Mips::FeatureDSPR2]);
  case 58:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureMicroMips]);
  case 59:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureEVA] && Bits[Mips::FeatureMips32r2]);
  case 60:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 61:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 62:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 63:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 64:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 65:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 66:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6]);
  case 67:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 68:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 69:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r6]);
  case 70:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 71:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 72:
    return (!Bits[Mips::FeatureMips16] && !Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMicroMips]);
  case 73:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureGP64Bit] && Bits[Mips::FeatureMips32r6]);
  case 74:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeaturePTR64Bit] && Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 75:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMicroMips]);
  case 76:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64r2] && !Bits[Mips::FeatureMicroMips]);
  case 77:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 78:
    return (Bits[Mips::FeatureMips64]);
  case 79:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips32r2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 80:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat]);
  case 81:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat]);
  case 82:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  case 83:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 84:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 85:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips4_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 86:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips5_32r2] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureSoftFloat]);
  case 87:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips3] && !Bits[Mips::FeatureMips32r6] && !Bits[Mips::FeatureMips64r6]);
  case 88:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureMips64] && !Bits[Mips::FeatureMips64r6] && !Bits[Mips::FeatureMicroMips]);
  case 89:
    return (!Bits[Mips::FeatureMips16] && Bits[Mips::FeatureFP64Bit] && Bits[Mips::FeatureMips2] && !Bits[Mips::FeatureSoftFloat] && !Bits[Mips::FeatureMicroMips]);
  }
}

template<typename InsnType>
static DecodeStatus decodeToMCInst(DecodeStatus S, unsigned Idx, InsnType insn, MCInst &MI,
                                   uint64_t Address, const void *Decoder, bool &DecodeComplete) {
  DecodeComplete = true;
  InsnType tmp;
  switch (Idx) {
  default: llvm_unreachable("Invalid index!");
  case 0:
    return S;
  case 1:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 2:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 3:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 3, 2) << 3;
    tmp |= fieldFromInstruction(insn, 5, 3) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 4:
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 5:
    tmp = fieldFromInstruction(insn, 2, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 6:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 7:
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 8:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 0, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 11;
    tmp |= fieldFromInstruction(insn, 21, 6) << 5;
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 9:
    tmp = fieldFromInstruction(insn, 5, 3);
    if (DecodeCPU16RegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 10:
    if (DecodeFMem3(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 11:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 12:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 13:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 14:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 15:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 16:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    if (DecodeSImmWithOffsetAndScale<10>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 17:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 18:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 19:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 20:
    if (DecodeMemMMImm4(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 21:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 22:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodePOOL16BEncodedField(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 23:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 4);
    if (DecodeANDI16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 24:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 25:
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 3, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 26:
    if (DecodeMemMMReglistImm4Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 27:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 28:
    tmp = fieldFromInstruction(insn, 0, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 29:
    tmp = fieldFromInstruction(insn, 0, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 30:
    if (DecodeMemMMSPImm5Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 31:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 4);
    if (DecodeSImmWithOffsetAndScale<4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 32:
    tmp = fieldFromInstruction(insn, 1, 9);
    if (DecodeSimm9SP(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 33:
    if (DecodeMemMMGPImm7Lsl2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 34:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeAddiur2Simm7(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 35:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 6);
    if (DecodeUImmWithOffsetAndScale<6, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 36:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeMovePRegPair(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16MovePRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 37:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeBranchTarget7MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 38:
    tmp = fieldFromInstruction(insn, 0, 10);
    if (DecodeBranchTarget10MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 39:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 7);
    if (DecodeLi16Imm(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 40:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 41:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 42:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 43:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 44:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 45:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 46:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 47:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 48:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 49:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 50:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 51:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 52:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 53:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 54:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 55:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 56:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 57:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 12, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 58:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 59:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 60:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 61:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 62:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 63:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 64:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 65:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 66:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 67:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 68:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 69:
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 70:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 71:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 7);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 72:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 73:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 74:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 75:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 76:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 77:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 78:
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 79:
    tmp = fieldFromInstruction(insn, 14, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 80:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 81:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 82:
    if (DecodeMemMMImm16(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 83:
    if (DecodeMemMMImm12(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 84:
    if (DecodeCacheOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 85:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 86:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 87:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 88:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget1SImm16(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 89:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 90:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 91:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 13, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 92:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 93:
    if (DecodeMemMMImm9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 94:
    if (DecodePrefeOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 95:
    if (DecodeJumpTargetMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 96:
    tmp = fieldFromInstruction(insn, 23, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 23);
    if (DecodeSimm23Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 97:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 98:
    if (DecodeFMemMMR2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 99:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 100:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 101:
    tmp = fieldFromInstruction(insn, 1, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 102:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 103:
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 4, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 7, 3);
    if (DecodeGPRMM16RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 104:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 105:
    tmp = fieldFromInstruction(insn, 5, 5);
    if (DecodeUImmWithOffsetAndScale<5, 0, 4>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 106:
    tmp = fieldFromInstruction(insn, 6, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 107:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 108:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 109:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 9, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 110:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 111:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 112:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 113:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 114:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 115:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 116:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 117:
    if (DecodeLoadByte15(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 118:
    if (DecodeFMemCop2MMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 119:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 120:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 121:
    if (DecodeSynciR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 122:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 123:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 124:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 125:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 126:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 127:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 128:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 129:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 130:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 131:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 132:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 133:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 134:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 135:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 136:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 137:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 138:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 139:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 140:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 141:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 142:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 143:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 144:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 145:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 146:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 147:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 148:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 149:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 150:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 151:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 152:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 8, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 153:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 154:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 155:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 156:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 157:
    if (DecodeLoadByte9(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 158:
    if (DecodeStoreEvaOpMM(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 159:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTargetMM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 160:
    if (DecodePOP35GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 161:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 19);
    if (DecodeSimm19Lsl2(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 162:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 18);
    if (DecodeSimm18Lsl3(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 163:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 164:
    if (DecodePOP37GroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 165:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 166:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26MM(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 167:
    if (DecodeBlezGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 168:
    if (DecodeBgtzGroupBranchMMR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 169:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 170:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 171:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 172:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 173:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 174:
    tmp = fieldFromInstruction(insn, 6, 20);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 175:
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 176:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 177:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 178:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeHI32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 179:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeLO32DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 180:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    if (DecodeUImmWithOffset<2, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 181:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 182:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 183:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 184:
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 185:
    if (DecodeSyncI(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 186:
    if (DecodeJumpTarget(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 187:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 188:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 189:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 190:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 191:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 192:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 193:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 194:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 195:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 196:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 197:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 198:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCCRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 199:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 200:
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 201:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 202:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 203:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 204:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 205:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 206:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 207:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 208:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 209:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 210:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 211:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 212:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 213:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 214:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 215:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 216:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 217:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 218:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 219:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 220:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 221:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 222:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 223:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 224:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 225:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 226:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeAFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 227:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 228:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 229:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 230:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 231:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 232:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 8);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 233:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 234:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 235:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 236:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 237:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 238:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 239:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 240:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 241:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 242:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 243:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 244:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 6);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 245:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 246:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 247:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 248:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 249:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 250:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 251:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 252:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 253:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 254:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 255:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 256:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 257:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 258:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 259:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 260:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 261:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 262:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 263:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 264:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 265:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 266:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 267:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 268:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 269:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 270:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 271:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 272:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 273:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 274:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 275:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 276:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 277:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 278:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 279:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSACtrlRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 280:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 281:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 282:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 283:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 284:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 285:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 4);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 286:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 287:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 288:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 1);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 289:
    if (DecodeINSVE_DF(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 290:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 291:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 292:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128BRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 293:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 294:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 295:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 296:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 297:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 298:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 299:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128HRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 300:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeMSA128DRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeMSA128WRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 301:
    if (DecodeMSA128Mem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 302:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 303:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 304:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 305:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 306:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 307:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 308:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 309:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 310:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 311:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 312:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 313:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 314:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 315:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 316:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeDSPRRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 317:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 318:
    if (DecodeMemEVA(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 319:
    if (DecodeCacheeOp_CacheOpR6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 320:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 321:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 322:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 323:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 324:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 10);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 325:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 20, 6);
    if (DecodeSImmWithOffsetAndScale<6>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 326:
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 2);
    if (DecodeACC64DSPRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 327:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeHWRegsRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 328:
    if (DecodeMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 329:
    if (DecodeCacheOp(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 330:
    if (DecodeFMem(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 331:
    if (DecodeFMem2(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 332:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 333:
    if (DecodeBlezGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 334:
    if (DecodeBgtzGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 335:
    if (DecodeAddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 336:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 337:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 338:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 339:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 340:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 341:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 342:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 343:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGRCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 344:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeBranchTarget(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 345:
    if (DecodeFMemCop2R6(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 346:
    if (DecodeBlezlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 347:
    if (DecodeBgtzlGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 348:
    if (DecodeDaddiGroupBranch(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 349:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 2);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 350:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 351:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 352:
    if (DecodeSpecial3LlSc(MI, insn, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 353:
    tmp = fieldFromInstruction(insn, 0, 26);
    if (DecodeBranchTarget26(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 354:
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 21);
    if (DecodeBranchTarget21(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 355:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 356:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 357:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 358:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP0RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 359:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 360:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 361:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 362:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 18, 3);
    if (DecodeFCCRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 363:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR32RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 364:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 365:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 366:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeCOP2RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 3);
    MI.addOperand(MCOperand::createImm(tmp));
    return S;
  case 367:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 368:
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodePtrRegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 369:
    tmp = fieldFromInstruction(insn, 6, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeFGR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 370:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 0, 16);
    if (DecodeSImmWithOffsetAndScale<16>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 371:
    tmp = 0;
    tmp |= fieldFromInstruction(insn, 11, 5) << 0;
    tmp |= fieldFromInstruction(insn, 16, 5) << 0;
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 372:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeUImmWithOffset<5, 1>(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  case 373:
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 21, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 6, 5);
    MI.addOperand(MCOperand::createImm(tmp));
    tmp = fieldFromInstruction(insn, 11, 5);
    if (DecodeInsSize(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    tmp = fieldFromInstruction(insn, 16, 5);
    if (DecodeGPR64RegisterClass(MI, tmp, Address, Decoder) == MCDisassembler::Fail) { return MCDisassembler::Fail; }
    return S;
  }
}

template<typename InsnType>
static DecodeStatus decodeInstruction(const uint8_t DecodeTable[], MCInst &MI,
                                      InsnType insn, uint64_t Address,
                                      const void *DisAsm,
                                      const MCSubtargetInfo &STI) {
  const FeatureBitset& Bits = STI.getFeatureBits();

  const uint8_t *Ptr = DecodeTable;
  uint32_t CurFieldValue = 0;
  DecodeStatus S = MCDisassembler::Success;
  for (;;) {
    ptrdiff_t Loc = Ptr - DecodeTable;
    switch (*Ptr) {
    default:
      errs() << Loc << ": Unexpected decode table opcode!\n";
      return MCDisassembler::Fail;
    case MCD::OPC_ExtractField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      ++Ptr;
      CurFieldValue = fieldFromInstruction(insn, Start, Len);
      DEBUG(dbgs() << Loc << ": OPC_ExtractField(" << Start << ", "
                   << Len << "): " << CurFieldValue << "\n");
      break;
    }
    case MCD::OPC_FilterValue: {
      // Decode the field value.
      unsigned Len;
      InsnType Val = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the filter operation.
      if (Val != CurFieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_FilterValue(" << Val << ", " << NumToSkip
                   << "): " << ((Val != CurFieldValue) ? "FAIL:" : "PASS:")
                   << " continuing at " << (Ptr - DecodeTable) << "\n");

      break;
    }
    case MCD::OPC_CheckField: {
      unsigned Start = *++Ptr;
      unsigned Len = *++Ptr;
      InsnType FieldValue = fieldFromInstruction(insn, Start, Len);
      // Decode the field value.
      uint32_t ExpectedValue = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // If the actual and expected values don't match, skip.
      if (ExpectedValue != FieldValue)
        Ptr += NumToSkip;
      DEBUG(dbgs() << Loc << ": OPC_CheckField(" << Start << ", "
                   << Len << ", " << ExpectedValue << ", " << NumToSkip
                   << "): FieldValue = " << FieldValue << ", ExpectedValue = "
                   << ExpectedValue << ": "
                   << ((ExpectedValue == FieldValue) ? "PASS\n" : "FAIL\n"));
      break;
    }
    case MCD::OPC_CheckPredicate: {
      unsigned Len;
      // Decode the Predicate Index value.
      unsigned PIdx = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;
      // Check the predicate.
      bool Pred;
      if (!(Pred = checkDecoderPredicate(PIdx, Bits)))
        Ptr += NumToSkip;
      (void)Pred;
      DEBUG(dbgs() << Loc << ": OPC_CheckPredicate(" << PIdx << "): "
            << (Pred ? "PASS\n" : "FAIL\n"));

      break;
    }
    case MCD::OPC_Decode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;

      MI.clear();
      MI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, MI, Address, DisAsm, DecodeComplete);
      assert(DecodeComplete);

      DEBUG(dbgs() << Loc << ": OPC_Decode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": "
                   << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
      return S;
    }
    case MCD::OPC_TryDecode: {
      unsigned Len;
      // Decode the Opcode value.
      unsigned Opc = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      unsigned DecodeIdx = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      // NumToSkip is a plain 16-bit integer.
      unsigned NumToSkip = *Ptr++;
      NumToSkip |= (*Ptr++) << 8;

      // Perform the decode operation.
      MCInst TmpMI;
      TmpMI.setOpcode(Opc);
      bool DecodeComplete;
      S = decodeToMCInst(S, DecodeIdx, insn, TmpMI, Address, DisAsm, DecodeComplete);
      DEBUG(dbgs() << Loc << ": OPC_TryDecode: opcode " << Opc
                   << ", using decoder " << DecodeIdx << ": ");

      if (DecodeComplete) {
        // Decoding complete.
        DEBUG(dbgs() << (S != MCDisassembler::Fail ? "PASS" : "FAIL") << "\n");
        MI = TmpMI;
        return S;
      } else {
        assert(S == MCDisassembler::Fail);
        // If the decoding was incomplete, skip.
        Ptr += NumToSkip;
        DEBUG(dbgs() << "FAIL: continuing at " << (Ptr - DecodeTable) << "\n");
        // Reset decode status. This also drops a SoftFail status that could be
        // set before the decode attempt.
        S = MCDisassembler::Success;
      }
      break;
    }
    case MCD::OPC_SoftFail: {
      // Decode the mask values.
      unsigned Len;
      InsnType PositiveMask = decodeULEB128(++Ptr, &Len);
      Ptr += Len;
      InsnType NegativeMask = decodeULEB128(Ptr, &Len);
      Ptr += Len;
      bool Fail = (insn & PositiveMask) || (~insn & NegativeMask);
      if (Fail)
        S = MCDisassembler::SoftFail;
      DEBUG(dbgs() << Loc << ": OPC_SoftFail: " << (Fail ? "FAIL\n":"PASS\n"));
      break;
    }
    case MCD::OPC_Fail: {
      DEBUG(dbgs() << Loc << ": OPC_Fail\n");
      return MCDisassembler::Fail;
    }
    }
  }
  llvm_unreachable("bogosity detected in disassembler state machine!");
}


} // End llvm namespace
