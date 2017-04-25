/*
 Copyright (c) 2017, Trail of Bits
 All rights reserved.

 Redistribution and use in source and binary forms, with or without modification,
 are permitted provided that the following conditions are met:

 Redistributions of source code must retain the above copyright notice, this
 list of conditions and the following disclaimer.

 Redistributions in binary form must reproduce the above copyright notice, this
 list of conditions and the following disclaimer in the documentation and/or
 other materials provided with the distribution.

 Neither the name of the {organization} nor the names of its
 contributors may be used to endorse or promote products derived from
 this software without specific prior written permission.

 THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#pragma once
#include <inttypes.h>
#include <iostream>
#include <unordered_map>
#include <vector>

#include <llvm/IR/BasicBlock.h>
#include <llvm/IR/Constants.h>
#include <llvm/IR/Function.h>
#include <llvm/IR/Instruction.h>
#include <llvm/IR/IRBuilder.h>
#include <llvm/IR/Type.h>

#include "mcsema/Arch/Arch.h"
#include "mcsema/Arch/Register.h"
#include "mcsema/BC/Util.h"

void X86InitRegisterState(llvm::LLVMContext *context);
const std::string &X86RegisterName(MCSemaRegs reg);
MCSemaRegs X86RegisterNumber(const std::string &name);
unsigned X86RegisterOffset(MCSemaRegs reg);
MCSemaRegs X86RegisterParent(MCSemaRegs reg);
void X86AllocRegisterVars(llvm::BasicBlock *b);
unsigned X86RegisterSize(MCSemaRegs reg);
llvm::StructType *X86RegStateStructType(void);
llvm::Constant *GetPrintf(llvm::Module *M);
llvm::Function *X86GetOrCreateRegStateTracer(llvm::Module *M);
llvm::Function *X86GetOrCreateSemantics(llvm::Module *M, const std::string &instr);
