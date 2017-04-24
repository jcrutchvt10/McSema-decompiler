project(mcsema-mips)
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
        LLVMAsmParser LLVMMCParser LLVMMipsAsmParser LLVMMipsDesc LLVMMCDisassembler LLVMMipsDisassembler LLVMBitReader LLVMBitWriter
    )
else ()
    llvm_map_components_to_libnames(LLVM_LIBRARIES
        asmparser mcparser mipsasmparser mipsdesc mcdisassembler mipsdisassembler bitreader bitwriter
    )
endif ()

list(APPEND MIPSMODULE_LIBRARIES ${LLVM_LIBRARIES})
list(APPEND MIPSMODULE_DEFINITIONS ${LLVM_DEFINITIONS})
list(APPEND MIPSMODULE_SYSTEMINCLUDEDIRECTORIES ${LLVM_INCLUDE_DIRS})

string(REPLACE "." "" MCSEMA_LLVMVERSION ${LLVM_PACKAGE_VERSION})
list(APPEND MIPSMODULE_DEFINITIONS "MCSEMA_LLVMVERSION=${MCSEMA_LLVMVERSION}")

set(LLVM_PRIVATE_HEADERS_BASE_PATH "${CMAKE_SOURCE_DIR}/LLVMPrivateHeaders/${MCSEMA_LLVMVERSION}")
if (NOT IS_DIRECTORY ${LLVM_PRIVATE_HEADERS_BASE_PATH})
    message(FATAL_ERROR "The following LLVM version is not supported: ${LLVM_PACKAGE_VERSION}")
endif ()

list(APPEND MIPSMODULE_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}")
list(APPEND MIPSMODULE_SYSTEMINCLUDEDIRECTORIES "${LLVM_PRIVATE_HEADERS_BASE_PATH}/llvm/lib/Target/X86")

#
# target settings
#

set(MIPSMODULE_MCSEMAINCLUDEDIRECTORIES
    ${CMAKE_SOURCE_DIR}/mcsema/include
    ${CMAKE_SOURCE_DIR}
)

set(MIPSMODULE_INCLUDEDIRECTORIES
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

set(MIPSMODULE_SOURCEFILES
    src/interface.cpp
    src/translation.cpp
)

add_library(${PROJECT_NAME} SHARED ${MIPSMODULE_SOURCEFILES})

target_link_libraries(${PROJECT_NAME} PUBLIC ${MIPSMODULE_LIBRARIES})
target_include_directories(${PROJECT_NAME} SYSTEM PUBLIC ${MIPSMODULE_SYSTEMINCLUDEDIRECTORIES} ${MIPSMODULE_MCSEMAINCLUDEDIRECTORIES})
target_include_directories(${PROJECT_NAME} PUBLIC ${MIPSMODULE_INCLUDEDIRECTORIES})
target_compile_definitions(${PROJECT_NAME} PUBLIC ${MIPSMODULE_DEFINITIONS})

# export the public symbols on windows
if (WIN32)
    target_compile_definitions(${PROJECT_NAME} PRIVATE "MCSEMA_EXPORT_SYMBOLS")
endif ()

set_target_properties(${PROJECT_NAME} PROPERTIES COMPILE_FLAGS ${GLOBAL_CXXFLAGS})