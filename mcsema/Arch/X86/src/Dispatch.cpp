/* Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved. */

#include "Dispatch.h"

#include "Semantics/fpu.h"
#include "Semantics/MOV.h"
#include "Semantics/CMOV.h"
#include "Semantics/Jcc.h"
#include "Semantics/MULDIV.h"
#include "Semantics/CMPTEST.h"
#include "Semantics/ADD.h"
#include "Semantics/SUB.h"
#include "Semantics/Misc.h"
#include "Semantics/bitops.h"
#include "Semantics/ShiftRoll.h"
#include "Semantics/Exchanges.h"
#include "Semantics/INCDECNEG.h"
#include "Semantics/Stack.h"
#include "Semantics/String.h"
#include "Semantics/Branches.h"
#include "Semantics/SETcc.h"
#include "Semantics/SSE.h"

void X86InitInstructionDispatch(DispatchMap &dispatcher) {
  FPU_populateDispatchMap(dispatcher);
  MOV_populateDispatchMap(dispatcher);
  CMOV_populateDispatchMap(dispatcher);
  Jcc_populateDispatchMap(dispatcher);
  MULDIV_populateDispatchMap(dispatcher);
  CMPTEST_populateDispatchMap(dispatcher);
  ADD_populateDispatchMap(dispatcher);
  Misc_populateDispatchMap(dispatcher);
  SUB_populateDispatchMap(dispatcher);
  Bitops_populateDispatchMap(dispatcher);
  ShiftRoll_populateDispatchMap(dispatcher);
  Exchanges_populateDispatchMap(dispatcher);
  INCDECNEG_populateDispatchMap(dispatcher);
  Stack_populateDispatchMap(dispatcher);
  String_populateDispatchMap(dispatcher);
  Branches_populateDispatchMap(dispatcher);
  SETcc_populateDispatchMap(dispatcher);
  SSE_populateDispatchMap(dispatcher);
}
