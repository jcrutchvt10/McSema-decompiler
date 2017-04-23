cmake_minimum_required(VERSION 3.1)

add_subdirectory(Runtime)
add_subdirectory(Semantics/Bitcode)

set(MODULE_X86_SOURCEFILES
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/ADD.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/bitops.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/Branches.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/CMOV.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/CMPTEST.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/Exchanges.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/fpu.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/INCDECNEG.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/Jcc.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/Misc.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/MOV.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/MULDIV.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/SETcc.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/ShiftRoll.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/SSE.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/Stack.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/String.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Semantics/SUB.cpp

    ${CMAKE_CURRENT_SOURCE_DIR}/Dispatch.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Lift.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Register.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/Util.cpp

    PARENT_SCOPE
)

set(MODULE_X86_INCLUDEDIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}

    PARENT_SCOPE
)