# Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved.

project(mcsema)
cmake_minimum_required(VERSION 3.1)

# common settings
include(${CMAKE_SOURCE_DIR}/cmake/settings.cmake)

#
# libraries
#

# llvm
if (DEFINED ENV{FINDPACKAGE_LLVM_HINTS})
    set(FINDPACKAGE_LLVM_HINTS $ENV{FINDPACKAGE_LLVM_HINTS})
endif ()

set(MCSEMA_SUPPORTEDLLVMVERSIONS
    "4.0"
    "3.9"
    "3.8"
)

foreach (llvm_version ${MCSEMA_SUPPORTEDLLVMVERSIONS})
    find_package(LLVM ${llvm_version} CONFIG HINTS ${FINDPACKAGE_LLVM_HINTS})
    if (LLVM_FOUND)
        break ()
    endif ()
endforeach ()

if (NOT LLVM_FOUND)
    message(STATUS "No suitable LLVM version found")
endif ()

message(STATUS "Found LLVM version ${LLVM_PACKAGE_VERSION}")

if (${LLVM_PACKAGE_VERSION} VERSION_LESS "3.9.0")
    set(LLVM_LIBRARIES 
        LLVMAsmParser LLVMMCParser LLVMX86AsmParser LLVMX86Desc LLVMMCDisassembler LLVMX86Disassembler
        LLVMBitReader LLVMBitWriter
    )
else ()
    llvm_map_components_to_libnames(LLVM_LIBRARIES
        asmparser mcparser x86asmparser x86desc mcdisassembler x86disassembler bitreader bitwriter
    )
endif ()

list(APPEND PROJECT_LIBRARIES ${LLVM_LIBRARIES})

if (NOT WIN32)
    # LLVM definitions are broken, they include /MP as a definition when its a flag
    list(APPEND PROJECT_DEFINITIONS ${LLVM_DEFINITIONS})
endif()

list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES ${LLVM_INCLUDE_DIRS})

string(REPLACE "." "" MCSEMA_LLVMVERSION ${LLVM_PACKAGE_VERSION})
list(APPEND PROJECT_DEFINITIONS "MCSEMA_LLVMVERSION=${MCSEMA_LLVMVERSION}")

set(LLVM_PRIVATE_HEADERS_BASE_PATH "${CMAKE_SOURCE_DIR}/LLVMPrivateHeaders/${MCSEMA_LLVMVERSION}")
if (NOT IS_DIRECTORY ${LLVM_PRIVATE_HEADERS_BASE_PATH})
    message(FATAL_ERROR "The following LLVM version is not supported: ${LLVM_PACKAGE_VERSION}")
endif ()

list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}")
list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}/llvm/lib/Target/X86")

include("${CMAKE_SOURCE_DIR}/cmake/BCCompiler.cmake")

# protobuf
find_package(Protobuf REQUIRED)
list(APPEND PROJECT_LIBRARIES ${Protobuf_LIBRARIES})
list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES ${Protobuf_INCLUDE_DIR})
list(APPEND PROJECT_DEFINITIONS "GOOGLE_PROTOBUF_NO_RTTI")

#
# version information
#

# configure a header file to pass some of the CMake settings
# to the source code
git_describe(MCSEMA_VERSION_STRING)
git_get_branch(MCSEMA_BRANCH_NAME)

if (NOT MCSEMA_VERSION_STRING)
    set(MCSEMA_VERSION_STRING "unknown")
endif ()

if (NOT MCSEMA_BRANCH_NAME)
    set(MCSEMA_BRANCH_NAME "unknown")
endif ()

configure_file("mcsema/Version.h.in" "${CMAKE_BINARY_DIR}/mcsema_version.h")

#
# protobuf file generation 
#

# this function can't be told where to store the output files! we have to add the whole binary directory
# to the include directories (or change it and lose compatibility with the system libraries)
set(PROJECT_PROTO_PATH "${CMAKE_SOURCE_DIR}/mcsema/CFG/CFG.proto")

if (WIN32)
    set(PROTOBUF_GENERATE_CPP_APPEND_PATH 1)
endif ()

protobuf_generate_cpp(PROJECT_PROTOBUFSOURCEFILES PROJECT_PROTOBUFHEADERFILES "${PROJECT_PROTO_PATH}")
list(APPEND PROJECT_INCLUDEDIRECTORIES ${CMAKE_BINARY_DIR})

protobuf_generate_python(PROJECT_PROTOBUFPYTHONMODULE "${PROJECT_PROTO_PATH}")
add_custom_target(protobuf_python_module DEPENDS ${PROJECT_PROTOBUFPYTHONMODULE})

#
# target settings
#

set(PROJECT_INCLUDEDIRECTORIES
    ${CMAKE_BINARY_DIR}

    ${CMAKE_SOURCE_DIR}
    ${CMAKE_SOURCE_DIR}/mcsema
    ${CMAKE_SOURCE_DIR}/mcsema/binary_common
    ${CMAKE_SOURCE_DIR}/mcsema/cfgToLLVM
    ${CMAKE_SOURCE_DIR}/mcsema/common
    ${CMAKE_SOURCE_DIR}/mcsema/peToCFG
    ${CMAKE_SOURCE_DIR}/mcsema/cfgToLLVM
    ${CMAKE_SOURCE_DIR}/third_party

    # public include headers
    ${CMAKE_SOURCE_DIR}/mcsema/include
)

set(PROJECT_SOURCEFILES
    # both files are marked as auto-generated and will trigger
    # protobuf in case either is missing
    ${PROJECT_PROTOBUFSOURCEFILES}
    ${PROJECT_PROTOBUFHEADERFILES}

    mcsema/Lift.cpp
    mcsema/Arch/Arch.cpp
    mcsema/Arch/X86/Dispatch.cpp
    mcsema/Arch/X86/Lift.cpp
    mcsema/Arch/X86/Register.cpp
    mcsema/Arch/X86/Util.cpp

    mcsema/BC/Lift.cpp
    mcsema/BC/Util.cpp
    mcsema/CFG/CFG.cpp

    mcsema/cfgToLLVM/JumpTables.cpp
    mcsema/cfgToLLVM/TransExcn.cpp

    mcsema/Arch/X86/Semantics/ADD.cpp
    mcsema/Arch/X86/Semantics/bitops.cpp
    mcsema/Arch/X86/Semantics/Branches.cpp
    mcsema/Arch/X86/Semantics/CMOV.cpp
    mcsema/Arch/X86/Semantics/CMPTEST.cpp
    mcsema/Arch/X86/Semantics/Exchanges.cpp
    mcsema/Arch/X86/Semantics/fpu.cpp
    mcsema/Arch/X86/Semantics/INCDECNEG.cpp
    mcsema/Arch/X86/Semantics/Jcc.cpp
    mcsema/Arch/X86/Semantics/Misc.cpp
    mcsema/Arch/X86/Semantics/MOV.cpp
    mcsema/Arch/X86/Semantics/MULDIV.cpp
    mcsema/Arch/X86/Semantics/SETcc.cpp
    mcsema/Arch/X86/Semantics/ShiftRoll.cpp
    mcsema/Arch/X86/Semantics/SSE.cpp
    mcsema/Arch/X86/Semantics/Stack.cpp
    mcsema/Arch/X86/Semantics/String.cpp
    mcsema/Arch/X86/Semantics/SUB.cpp
)

add_executable(mcsema-lift ${PROJECT_SOURCEFILES})
target_include_directories(mcsema-lift SYSTEM PRIVATE ${PROJECT_SYSTEMINCLUDEDIRECTORIES})
target_include_directories(mcsema-lift PRIVATE ${PROJECT_INCLUDEDIRECTORIES})
target_compile_definitions(mcsema-lift PRIVATE ${PROJECT_DEFINITIONS} ${GLOBAL_DEFINITIONS})
target_compile_options(mcsema-lift PRIVATE ${GLOBAL_CXXFLAGS})
target_link_libraries(mcsema-lift PRIVATE ${PROJECT_LIBRARIES})

# this is only needed when linking on windows; this error originates from the LLVM
# static libraries, and not from our code
if ("${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN")
    target_link_libraries(mcsema-lift PRIVATE "-Wl,--allow-multiple-definition")
endif ()

# make sure the python module is generated
add_dependencies(mcsema-lift protobuf_python_module)

# also add the Runtime and Bitcode targets
add_subdirectory(mcsema/Arch/X86/Runtime)
add_subdirectory(mcsema/Arch/X86/Semantics/Bitcode)

#
# install directives
#

install(TARGETS mcsema-lift DESTINATION "bin")

# prepare the plugin installer
install(DIRECTORY "tools/mcsema_disass/" DESTINATION "share/mcsema/ida_plugin_installer")
install(FILES "tools/setup.py" DESTINATION "share/mcsema/ida_plugin_installer")
install(FILES "${PROJECT_PROTOBUFPYTHONMODULE}" DESTINATION "share/mcsema/ida_plugin_installer/ida")

#
# package generation
#

if (WIN32)
    add_subdirectory("${CMAKE_SOURCE_DIR}/windows/msi_installer")
endif ()
