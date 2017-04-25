/* Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved. */

#include <unordered_set>

#include <llvm/ADT/ArrayRef.h>

#include <llvm/MC/MCContext.h>

#if MCSEMA_LLVMVERSION >= 391
  #include <llvm/MC/Disassembler.h>
#else
  #include <llvm/MC/MCDisassembler.h>
#endif

#include <llvm/lib/Target/X86/X86RegisterInfo.h>
#include <llvm/lib/Target/X86/X86InstrBuilder.h>
#include <llvm/lib/Target/X86/X86MachineFunctionInfo.h>

#include <llvm/Support/raw_ostream.h>
#include <llvm/Support/TargetRegistry.h>
#include <llvm/Support/TargetSelect.h>

#include "mcsema/Arch/Arch.h"
#include "mcsema/Arch/Dispatch.h"
#include "mcsema/Arch/Register.h"

#include "mcsema/cfgToLLVM/TransExcn.h"

#include <mcsema/Globals.h>
#include <mcsema/mips/interface.h>
#include <mcsema/X86/interface.h>

namespace {

static std::string gDataLayout;
static std::string gTriple;

static int gAddressSize = 0;

static llvm::CallingConv::ID gCallingConv;
static llvm::Triple::ArchType gArchType;
static llvm::Triple::OSType gOSType;

static DispatchMap gDispatcher;

static bool InitInstructionDecoder() {
  std::string errstr;
  auto target = llvm::TargetRegistry::lookupTarget(gTriple, errstr);
  if (!target) {
    llvm::errs() << "Can't find target for " << gTriple << ": " << errstr << "\n";
    return false;
  }

  auto STI = target->createMCSubtargetInfo(gTriple, "", "");
  auto MRI = target->createMCRegInfo(gTriple);
  auto AsmInfo = target->createMCAsmInfo(*MRI, gTriple);
  auto Ctx = new llvm::MCContext(AsmInfo, MRI, nullptr);
  gDisassembler = target->createMCDisassembler(*STI, *Ctx);
  return true;
}

}  // namespace

// Define the generic arch function pointers.
bool ListArchSupportedInstructions(const std::string &triple, llvm::raw_ostream &s, bool ListSupported, bool ListUnsupported) {
  std::string errstr;
  auto target = llvm::TargetRegistry::lookupTarget(triple, errstr);
  if (!target) {
    llvm::errs() << "Can't find target for " << triple << ": " << errstr << "\n";
    return false;
  }

  llvm::MCInstrInfo *mii = target->createMCInstrInfo();

  if(ListSupported) {
    s << "SUPPORTED INSTRUCTIONS: \n";
    for (auto i : gDispatcher) {
      if (i.first < llvm::X86::INSTRUCTION_LIST_END) {
        s << mii->getName(i.first) << "\n";
      }
      if (i.first > llvm::X86::MCSEMA_OPCODE_LIST_BEGIN &&
          i.first <= llvm::X86::MCSEMA_OPCODE_LIST_BEGIN + llvm::X86::gExtendedOpcodeNames.size()) {
        s << llvm::X86::gExtendedOpcodeNames[i.first] << "\n";
      }
    }
  }

  if (ListUnsupported) {
    s << "UNSUPPORTED INSTRUCTIONS: \n";
    for (int i = llvm::X86::AAA; i < llvm::X86::INSTRUCTION_LIST_END; ++i) {
      if (gDispatcher.end() == gDispatcher.find(i)) {
        s << mii->getName(i) << "\n";
      }
    }
  }
  return true;
}

bool InitArch(llvm::LLVMContext *context, const std::string &os, const std::string &arch) {

  /// \todo use mcsema::x86/mips::GetSupportedArchitectures();
  /// \todo register modules at runtime and load them with dlopen

  IMCSemaModule *ptr = mcsema::x86::CreateModule(arch);
  std::cout << std::hex << ptr << std::endl;
  if (arch == "x86" || arch == "amd64") {
    architecture_module = std::unique_ptr<IMCSemaModule>(mcsema::x86::CreateModule(arch));
  } else if (arch == "mips32" || arch == "mips64") {
    architecture_module = std::unique_ptr<IMCSemaModule>(mcsema::mips::CreateModule(arch));
  } else {
    std::cerr << "Unsupported architecture" << std::endl;
    return false;
  }

  ArchitectureInformation arch_info;
  if (!architecture_module->initializeArchitecture(arch_info, os, arch))
    return false;

  gOSType = arch_info.operating_system_type;
  gTriple = arch_info.llvm_triple;
  gDataLayout = arch_info.llvm_data_layout;
  gArchType = arch_info.architecture_type;
  gCallingConv = arch_info.calling_convention;
  gAddressSize = arch_info.address_size;

  architecture_module->initializeRegisterState(context);
  architecture_module->initializeInstructionDispatchTable(gDispatcher);

  return InitInstructionDecoder();
}

InstructionLifter *ArchGetInstructionLifter(const llvm::MCInst &inst) {
  return gDispatcher[inst.getOpcode()];
}

int ArchAddressSize(void) {
  return gAddressSize;
}

const std::string &ArchTriple(void) {
  return gTriple;
}

const std::string &ArchDataLayout(void) {
  return gDataLayout;
}

// Return the default calling convention for code on this architecture.
llvm::CallingConv::ID ArchCallingConv(void) {
  return gCallingConv;
}

// Return the LLVM arch type of the code we're lifting.
llvm::Triple::ArchType ArchType(void) {
  return gArchType;
}

// Return the LLVM OS type of the code we're lifting.
llvm::Triple::OSType OSType(void) {
  return gOSType;
}

SystemArchType SystemArch(llvm::Module *) {
  auto arch = ArchType();
  if (arch == llvm::Triple::x86) {
    return _X86_;
  } else if (arch == llvm::Triple::x86_64) {
    return _X86_64_;
  } else {
    throw TErr(__LINE__, __FILE__, "Unsupported architecture");
  }
}

static void InitADFeatures(llvm::Module *M, const char *name,
                          llvm::FunctionType *EPTy) {
  auto FC = M->getOrInsertFunction(name, EPTy);
  auto F = llvm::dyn_cast<llvm::Function>(FC);
  F->setLinkage(llvm::GlobalValue::ExternalLinkage);
  F->addFnAttr(llvm::Attribute::Naked);
}

void ArchInitAttachDetach(llvm::Module *M) {
  auto &C = M->getContext();
  auto VoidTy = llvm::Type::getVoidTy(C);
  auto EPTy = llvm::FunctionType::get(VoidTy, false);
  const auto OS = SystemOS(M);
  const auto Arch = SystemArch(M);
  if (llvm::Triple::Linux == OS) {
    if (_X86_64_ == Arch) {
      InitADFeatures(M, "__mcsema_attach_call", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret", EPTy);
      InitADFeatures(M, "__mcsema_detach_call", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_value", EPTy);
      InitADFeatures(M, "__mcsema_detach_ret", EPTy);

    } else {
      InitADFeatures(M, "__mcsema_attach_call_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_detach_ret_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_value", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_value", EPTy);

      InitADFeatures(M, "__mcsema_detach_call_stdcall", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_stdcall", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_fastcall", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_fastcall", EPTy);
    }
  } else if (llvm::Triple::Win32 == OS) {
    if (_X86_64_ == Arch) {
      InitADFeatures(M, "__mcsema_attach_call", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret", EPTy);
      InitADFeatures(M, "__mcsema_detach_call", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_value", EPTy);
      InitADFeatures(M, "__mcsema_detach_ret", EPTy);
    } else {
      InitADFeatures(M, "__mcsema_attach_call_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_detach_ret_cdecl", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_value", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_value", EPTy);

      InitADFeatures(M, "__mcsema_detach_call_stdcall", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_stdcall", EPTy);
      InitADFeatures(M, "__mcsema_detach_call_fastcall", EPTy);
      InitADFeatures(M, "__mcsema_attach_ret_fastcall", EPTy);
    }
  } else {
    TASSERT(false, "Unknown OS Type!");
  }
}

void ArchSetCallingConv(llvm::Module *M, llvm::CallInst *ci) {
  ci->setCallingConv(ArchGetCallingConv(M));
}

void ArchSetCallingConv(llvm::Module *M, llvm::Function *F) {
  F->setCallingConv(ArchGetCallingConv(M));
}

static void LinuxAddPushJumpStub(llvm::Module *M, llvm::Function *F,
                                 llvm::Function *W, const char *stub_handler) {
  auto stub_name = W->getName().str();
  auto stubbed_func_name = F->getName().str();

  std::stringstream as;
  as << "  .globl " << stubbed_func_name << ";\n";
  as << "  .globl " << stub_name << ";\n";
  as << "  .type " << stub_name << ",@function\n";
  as << stub_name << ":\n";
  as << "  .cfi_startproc;\n";
  if (32 == ArchPointerSize(M)) {
    as << "  pushl $" << stubbed_func_name << ";\n";
  } else {
    if (F->isDeclaration()) {
      stubbed_func_name += "@plt";
    }
    as << "  pushq %rax;\n";
    as << "  leaq " << stubbed_func_name << "(%rip), %rax;\n";
    as << "  xchgq (%rsp), %rax;\n";
  }
  as << "  jmp " << stub_handler << ";\n";
  as << "0:\n";
  as << "  .size " << stub_name << ",0b-" << stub_name << ";\n";
  as << "  .cfi_endproc;\n";

  M->appendModuleInlineAsm(as.str());
}

std::string ArchNameMcSemaCall(const std::string &name) {
    return "__mcsema_" + name;
}

static std::string WindowsDecorateName(llvm::Function *F,
                                       const std::string &name) {

  // 64-bit doesn't mangle
  auto M = F->getParent();
  if (64 == ArchPointerSize(M)) {
    return name;
  }

  switch (F->getCallingConv()) {

    case llvm::CallingConv::C:
      return "_" + name;
      break;
    case llvm::CallingConv::X86_StdCall: {
      std::stringstream as;
      int argc = F->arg_size();
      as << "_" << name << "@" << argc * 4;
      return as.str();
    }
      break;
    case llvm::CallingConv::X86_FastCall: {
      std::stringstream as;
      int argc = F->arg_size();
      as << "@" << name << "@" << argc * 4;
      return as.str();
    }
      break;
    default:
      TASSERT(false, "Unsupported Calling Convention for 32-bit Windows")
      ;
      break;
  }
  return "";
}

static void WindowsAddPushJumpStub(bool decorateStub, llvm::Module *M,
                                   llvm::Function *F, llvm::Function *W,
                                   const char *stub_handler) {
  auto stub_name = W->getName().str();
  auto stubbed_func_name = F->getName().str();

  std::stringstream as;
  stubbed_func_name = WindowsDecorateName(F, stubbed_func_name);

  if(decorateStub) {
    stub_name = WindowsDecorateName(W, stub_name);
  }

  as << "  .globl " << stubbed_func_name << ";\n";
  as << "  .globl " << stub_name << ";\n";
  as << stub_name << ":\n";
  as << "  .cfi_startproc;\n";
  if( 32 == ArchPointerSize(M) ) {
    as << "  " << "pushl $" << stubbed_func_name << ";\n";
  } else {
    // use leaq to get rip-relative address of stubbed func
    as << "  " << "pushq %rax\n";
    as << "  " << "leaq " << stubbed_func_name << "(%rip), %rax;\n";
    as << "  " << "xchgq %rax, (%rsp);\n";
  }
  as << "  jmp " << stub_handler << ";\n";
  as << "  .cfi_endproc;\n";

  M->appendModuleInlineAsm(as.str());
}

// Add a function that can be used to transition from native code into lifted
// code.
llvm::Function *ArchAddEntryPointDriver(llvm::Module *M,
                                        const std::string &name, VA entry) {
  //convert the VA into a string name of a function, try and look it up
  std::stringstream ss;
  ss << "sub_" << std::hex << entry;

  auto s = ss.str();
  llvm::Function *F = M->getFunction(s);
  if (!F) {
    llvm::errs() << "Could not find lifted function " << s
                 << " for entry point " << name;
    return nullptr;
  }

  auto &C = F->getContext();
  auto W = M->getFunction(name);
  if (W) {
    return W;
  }

  auto VoidTy = llvm::Type::getVoidTy(C);
  auto WTy = llvm::FunctionType::get(VoidTy, false);
  W = llvm::Function::Create(
      WTy, llvm::GlobalValue::ExternalLinkage, name, M);

  W->addFnAttr(llvm::Attribute::NoInline);
  W->addFnAttr(llvm::Attribute::Naked);

  const auto Arch = SystemArch(M);
  const auto OS = SystemOS(M);

  if (llvm::Triple::Linux == OS) {
    if (_X86_64_ == Arch) {
      LinuxAddPushJumpStub(M, F, W, "__mcsema_attach_call");
    } else {
      LinuxAddPushJumpStub(M, F, W, "__mcsema_attach_call_cdecl");
    }
  } else if (llvm::Triple::Win32 == OS) {
    if (_X86_64_ == Arch) {
      WindowsAddPushJumpStub(true, M, F, W, "__mcsema_attach_call");
    } else {
      WindowsAddPushJumpStub(true, M, F, W, "__mcsema_attach_call_cdecl");
    }
  } else {
    TASSERT(false, "Unsupported OS for entry point driver.");
  }

  F->setLinkage(llvm::GlobalValue::ExternalLinkage);
  if (F->doesNotReturn()) {
    W->setDoesNotReturn();
  }

  return W;
}

// Wrap `F` in a function that will transition from lifted code into native
// code, where `F` is an external reference to a native function.
llvm::Function *ArchAddExitPointDriver(llvm::Function *F) {
  std::stringstream ss;
  auto M = F->getParent();
  const auto OS = SystemOS(M);

  if(llvm::Triple::Win32 == OS) {
      ss << "mcsema_" << F->getName().str();
  } else {
      ss << "_" << F->getName().str();
  }
  auto &C = M->getContext();
  auto name = ss.str();
  auto W = M->getFunction(name);
  if (W) {
    return W;
  }

  W = llvm::Function::Create(F->getFunctionType(),
                             F->getLinkage(), name, M);
  W->setCallingConv(F->getCallingConv());
  W->addFnAttr(llvm::Attribute::NoInline);
  W->addFnAttr(llvm::Attribute::Naked);

  const auto Arch = SystemArch(M);

  if (llvm::Triple::Linux == OS) {
    if (_X86_64_ == Arch) {
      LinuxAddPushJumpStub(M, F, W, "__mcsema_detach_call");
    } else {
      switch (F->getCallingConv()) {
        case llvm::CallingConv::C:
          LinuxAddPushJumpStub(M, F, W, "__mcsema_detach_call_cdecl");
          break;
        case llvm::CallingConv::X86_StdCall:
          LinuxAddPushJumpStub(M, F, W, "__mcsema_detach_call_stdcall");
          break;
        case llvm::CallingConv::X86_FastCall:
          LinuxAddPushJumpStub(M, F, W, "__mcsema_detach_call_fastcall");
          break;
        default:
          TASSERT(false, "Unsupported Calling Convention for 32-bit Linux");
          break;
      }
    }
  } else if (llvm::Triple::Win32 == OS) {

    if (_X86_64_ == Arch) {
        WindowsAddPushJumpStub(true, M, F, W, "__mcsema_detach_call");
    } else {
      switch (F->getCallingConv()) {
        case llvm::CallingConv::C:
          WindowsAddPushJumpStub(true, M, F, W, "__mcsema_detach_call_cdecl");
          break;
        case llvm::CallingConv::X86_StdCall:
          WindowsAddPushJumpStub(true, M, F, W, "__mcsema_detach_call_stdcall");
          break;
        case llvm::CallingConv::X86_FastCall:
          WindowsAddPushJumpStub(true, M, F, W, "__mcsema_detach_call_fastcall");
          break;
        default:
          TASSERT(false, "Unsupported Calling Convention for 32-bit Windows");
          break;
      }
    }
  } else {
    TASSERT(false, "Unsupported OS for exit point driver.");
  }

  if (F->doesNotReturn()) {
    W->setDoesNotReturn();
  }
  return W;
}

llvm::Function *ArchAddCallbackDriver(llvm::Module *M, VA local_target) {
  std::stringstream ss;
  ss << "callback_sub_" << std::hex << local_target;
  auto callback_name = ss.str();
  return ArchAddEntryPointDriver(M, callback_name, local_target);
}

llvm::GlobalVariable *archGetImageBase(llvm::Module *M) {

  // WILL ONLY WORK FOR windows/x86_64
  return M->getNamedGlobal("__ImageBase");
}

bool shouldSubtractImageBase(llvm::Module *M) {

  // we are on windows
  if (llvm::Triple::Win32 != SystemOS(M)) {
    //llvm::errs() << __FUNCTION__ << ": Not on Win32\n";
    return false;
  }

  // and we are on amd64
  if (_X86_64_ != SystemArch(M)) {
    //llvm::errs() << __FUNCTION__ << ": Not on amd64\n";
    return false;
  }

  // and the __ImageBase symbol is defined
  if (!archGetImageBase(M)) {
    llvm::errs() << __FUNCTION__ << ": No __ImageBase defined\n";
    return false;
  }

  return true;
}

llvm::Value *doSubtractImageBase(llvm::Value *original,
                                 llvm::BasicBlock *block, int width) {
  llvm::Module *M = block->getParent()->getParent();
  auto &C = M->getContext();
  llvm::Value *ImageBase = archGetImageBase(M);

  llvm::Type *intWidthTy = llvm::Type::getIntNTy(C, width);
  llvm::Type *ptrWidthTy = llvm::PointerType::get(intWidthTy, 0);

  // TODO(artem): Why use `64` below??

  // convert original value pointer to int
  llvm::Value *original_int = new llvm::PtrToIntInst(
      original, llvm::Type::getIntNTy(C, 64), "", block);

  // convert image base pointer to int
  llvm::Value *ImageBase_int = new llvm::PtrToIntInst(
      ImageBase, llvm::Type::getIntNTy(C, 64), "", block);

  // do the subtraction
  llvm::Value *data_v = llvm::BinaryOperator::CreateSub(original_int,
                                                        ImageBase_int, "",
                                                        block);

  // convert back to a pointer
  llvm::Value *data_ptr = new llvm::IntToPtrInst(data_v, ptrWidthTy, "", block);

  return data_ptr;
}

llvm::Value *doSubtractImageBaseInt(llvm::Value *original,
                                    llvm::BasicBlock *block) {
  auto M = block->getParent()->getParent();
  auto ImageBase = archGetImageBase(M);

  // convert image base pointer to int
  auto ImageBase_int = new llvm::PtrToIntInst(
      ImageBase, llvm::Type::getIntNTy(block->getContext(), ArchPointerSize(M)),
      "", block);

  // do the subtraction
  return llvm::BinaryOperator::CreateSub(original, ImageBase_int, "", block);
}
