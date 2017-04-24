# Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved.

project(mcsema)
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
        LLVMAsmParser LLVMMCParser LLVMMipsAsmParser LLVMX86AsmParser LLVMX86Desc LLVMMipsDesc LLVMMCDisassembler LLVMMipsDisassembler LLVMX86Disassembler
        LLVMBitReader LLVMBitWriter
    )
else ()
    llvm_map_components_to_libnames(LLVM_LIBRARIES
        asmparser mcparser mipsasmparser x86asmparser mipsdesc x86desc mcdisassembler mipsdisassembler x86disassembler
        bitreader bitwriter
    )
endif ()

list(APPEND PROJECT_LIBRARIES ${LLVM_LIBRARIES})
list(APPEND PROJECT_DEFINITIONS ${LLVM_DEFINITIONS})
list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES ${LLVM_INCLUDE_DIRS})

string(REPLACE "." "" MCSEMA_LLVMVERSION ${LLVM_PACKAGE_VERSION})
list(APPEND PROJECT_DEFINITIONS "MCSEMA_LLVMVERSION=${MCSEMA_LLVMVERSION}")

set(LLVM_PRIVATE_HEADERS_BASE_PATH "${CMAKE_SOURCE_DIR}/LLVMPrivateHeaders/${MCSEMA_LLVMVERSION}")
if (NOT IS_DIRECTORY ${LLVM_PRIVATE_HEADERS_BASE_PATH})
    message(FATAL_ERROR "The following LLVM version is not supported: ${LLVM_PACKAGE_VERSION}")
endif ()

list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}")
list(APPEND PROJECT_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}/llvm/lib/Target/X86")

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

if(NOT MCSEMA_VERSION_STRING)
    set(MCSEMA_VERSION_STRING "unknown")
endif()

if(NOT MCSEMA_BRANCH_NAME)
    set(MCSEMA_BRANCH_NAME "unknown")
endif()

configure_file("mcsema/Version.h.in" "${CMAKE_BINARY_DIR}/mcsema_version.h")

#
# protobuf file generation 
#

# this function can't be told where to store the output files! we have to add the whole binary directory
# to the include directories (or change it and lose compatibility with the system libraries)
protobuf_generate_cpp(PROJECT_PROTOBUFSOURCEFILES PROJECT_PROTOBUFHEADERFILES "${CMAKE_SOURCE_DIR}/mcsema/CFG/CFG.proto")
list(APPEND PROJECT_INCLUDEDIRECTORIES ${CMAKE_BINARY_DIR})

protobuf_generate_python(PROJECT_PROTOBUFPYTHONMODULE "${CMAKE_SOURCE_DIR}/mcsema/CFG/CFG.proto")
add_custom_target(protobuf_python_module DEPENDS ${PROJECT_PROTOBUFPYTHONMODULE})

#
# target settings
#

include(LLVMUtils)

# get the submodules; this is going to add source files inside PROJECT_SOURCEFILES
message(STATUS "Scanning for architecture modules...")
file(GLOB architecture_modules LIST_DIRECTORIES true "${CMAKE_SOURCE_DIR}/mcsema/Arch/*")

foreach(module_path ${architecture_modules})
    if (NOT IS_DIRECTORY ${module_path})
        continue ()
    endif ()

    if (NOT EXISTS ${module_path}/CMakeLists.txt)
        continue ()
    endif ()

    get_filename_component(module_name "${module_path}" NAME)
    add_subdirectory("${module_path}")

    if (DEFINED MODULE_${module_name}_SOURCEFILES)
        message(STATUS " > ${module_name} (old style)")

        list(APPEND PROJECT_SOURCEFILES ${MODULE_${module_name}_SOURCEFILES})
        list(APPEND PROJECT_INCLUDEDIRECTORIES ${MODULE_${module_name}_INCLUDEDIRECTORIES})
    else ()
        message(STATUS " > ${module_name} (new style)")

        string(TOLOWER "mcsema-${module_name}" module_target)
        list(APPEND PROJECT_LIBRARIES ${module_target})
    endif ()
endforeach ()

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
)

set(PROJECT_SOURCEFILES
    ${PROJECT_SOURCEFILES}

    # both files are marked as auto-generated and will trigger
    # protobuf in case either is missing
    ${PROJECT_PROTOBUFSOURCEFILES}
    ${PROJECT_PROTOBUFHEADERFILES}

    mcsema/Lift.cpp
    mcsema/CFG/CFG.cpp
    mcsema/Arch/Arch.cpp

    mcsema/BC/Lift.cpp
    mcsema/BC/Util.cpp

    mcsema/cfgToLLVM/JumpTables.cpp
    mcsema/cfgToLLVM/TransExcn.cpp
)

add_executable(mcsema-lift ${PROJECT_SOURCEFILES})
target_link_libraries(mcsema-lift PRIVATE ${PROJECT_LIBRARIES} "mcsema-mips")
target_include_directories(mcsema-lift SYSTEM PRIVATE ${PROJECT_SYSTEMINCLUDEDIRECTORIES})
target_include_directories(mcsema-lift PRIVATE ${PROJECT_INCLUDEDIRECTORIES})
target_compile_definitions(mcsema-lift PRIVATE ${PROJECT_DEFINITIONS})
set_target_properties(mcsema-lift PROPERTIES COMPILE_FLAGS ${GLOBAL_CXXFLAGS})

# make sure the python module is generated
add_dependencies(mcsema-lift protobuf_python_module)

#
# install directives
#

install(
    TARGETS mcsema-lift 
    RUNTIME DESTINATION bin
    LIBRARY DESTINATION lib
)

install(FILES "${PROJECT_PROTOBUFPYTHONMODULE}" DESTINATION "${CMAKE_SOURCE_DIR}/tools/mcsema_disass/ida")
