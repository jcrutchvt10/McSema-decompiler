#pragma once

#include "../src/State.h"

#if _WIN32
#define DOUBLE( x ) x.d
#else
#define DOUBLE( x ) x
#endif

#define DEFINE_SEMANTICS( INST ) extern "C" void __mcsema_ ## INST ( RegState *state )
