project(mcsema-x86)
cmake_minimum_required(VERSION 3.1)

# common settings
include(${CMAKE_SOURCE_DIR}/cmake/settings.cmake)

#
# libraries
#

# llvm
find_package(LLVM REQUIRED CONFIG HINTS ${FINDPACKAGE_LLVM_HINTS})

if (${LLVM_PACKAGE_VERSION} VERSION_LESS "3.9.0")
    set(LLVM_LIBRARIES 
        LLVMAsmParser LLVMMCParser LLVMX86AsmParser LLVMX86Desc LLVMMCDisassembler LLVMX86Disassembler LLVMBitReader LLVMBitWriter
    )
else ()
    llvm_map_components_to_libnames(LLVM_LIBRARIES
        asmparser mcparser x86asmparser x86desc mcdisassembler x86disassembler bitreader bitwriter
    )
endif ()

list(APPEND X86MODULE_LIBRARIES ${LLVM_LIBRARIES})
list(APPEND X86MODULE_DEFINITIONS ${LLVM_DEFINITIONS})
list(APPEND X86MODULE_SYSTEMINCLUDEDIRECTORIES ${LLVM_INCLUDE_DIRS})

string(REPLACE "." "" MCSEMA_LLVMVERSION ${LLVM_PACKAGE_VERSION})
list(APPEND X86MODULE_DEFINITIONS "MCSEMA_LLVMVERSION=${MCSEMA_LLVMVERSION}")

set(LLVM_PRIVATE_HEADERS_BASE_PATH "${CMAKE_SOURCE_DIR}/LLVMPrivateHeaders/${MCSEMA_LLVMVERSION}")
if (NOT IS_DIRECTORY ${LLVM_PRIVATE_HEADERS_BASE_PATH})
    message(FATAL_ERROR "The following LLVM version is not supported: ${LLVM_PACKAGE_VERSION}")
endif ()

list(APPEND X86MODULE_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}")
list(APPEND X86MODULE_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}/llvm/lib/Target/X86")

#
# target settings
#

# list all files so that IDEs like CLion and QtCreator can correctly
# populate the project explorer
set(X86MODULE_MCSEMAINCLUDEDIRECTORIES
    ${CMAKE_SOURCE_DIR}/mcsema/include
    ${CMAKE_SOURCE_DIR}
)

set(X86MODULE_INCLUDEDIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set(X86MODULE_PRIVATESOURCEFILES
    src/interface.cpp

    src/Util.cpp

    src/X86Module.h
    src/X86Module.cpp
    src/Lift.h
    src/Lift.cpp
    src/Register.h
    src/Register.cpp

    src/Semantics/ADD.cpp
    src/Semantics/bitops.cpp
    src/Semantics/Branches.cpp
    src/Semantics/CMOV.cpp
    src/Semantics/CMPTEST.cpp
    src/Semantics/Exchanges.cpp
    src/Semantics/fpu.cpp
    src/Semantics/INCDECNEG.cpp
    src/Semantics/Jcc.cpp
    src/Semantics/Misc.cpp
    src/Semantics/MOV.cpp
    src/Semantics/MULDIV.cpp
    src/Semantics/SETcc.cpp
    src/Semantics/ShiftRoll.cpp
    src/Semantics/SSE.cpp
    src/Semantics/Stack.cpp
    src/Semantics/String.cpp
    src/Semantics/SUB.cpp
)

set(X86MODULE_PUBLICSOURCEFILES
    ${X86MODULE_INCLUDEDIRECTORIES}/mcsema/X86/interface.h
    ${X86MODULE_INCLUDEDIRECTORIES}/mcsema/X86/utils.h
)

add_library(${PROJECT_NAME} SHARED ${X86MODULE_PRIVATESOURCEFILES} ${X86MODULE_PUBLICSOURCEFILES})

target_link_libraries(${PROJECT_NAME} PUBLIC ${X86MODULE_LIBRARIES})
target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC ${X86MODULE_SYSTEMINCLUDEDIRECTORIES} ${X86MODULE_MCSEMAINCLUDEDIRECTORIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${X86MODULE_INCLUDEDIRECTORIES})
target_compile_definitions(${PROJECT_NAME} PUBLIC ${X86MODULE_DEFINITIONS})

# export the public symbols on windows
if (WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "MCSEMA_EXPORT_SYMBOLS")
endif ()

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS ${GLOBAL_CXXFLAGS})
