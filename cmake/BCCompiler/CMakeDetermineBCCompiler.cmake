set(CLANG_CXX_EXECUTABLE_NAME "clang++")
set(LLVMLINK_EXECUTABLE_NAME "llvm-link")

if (DEFINED WIN32 OR "${CMAKE_SYSTEM_NAME}" MATCHES "cygwin")
    set(CLANG_CXX_EXECUTABLE_NAME "${CLANG_CXX_EXECUTABLE_NAME}.exe")
    set(LLVMLINK_EXECUTABLE_NAME "${LLVMLINK_EXECUTABLE_NAME}.exe")
endif ()

if (NOT DEFINED CMAKE_BC_COMPILER)
    if (DEFINED ENV{LLVM_INSTALL_PREFIX})
        message(STATUS "Setting LLVM_INSTALL_PREFIX from the environment variable...")
        set(LLVM_INSTALL_PREFIX $ENV{LLVM_INSTALL_PREFIX})
    endif ()

    find_program(CLANG_PATH
        NAMES "${CLANG_CXX_EXECUTABLE_NAME}"
        PATHS "/usr/bin" "/usr/local/bin" "${LLVM_INSTALL_PREFIX}/bin" "C:/Program Files/LLVM/bin" "C:/Program Files (x86)/LLVM/bin"
    )

    find_program(LLVMLINK_PATH
        NAMES "${LLVMLINK_EXECUTABLE_NAME}"
        PATHS "/usr/bin" "/usr/local/bin" "${LLVM_INSTALL_PREFIX}/bin" "C:/Program Files/LLVM/bin" "C:/Program Files (x86)/LLVM/bin"
    )

    if ((NOT "${CLANG_PATH}" MATCHES "CLANG_PATH-NOTFOUND") AND (NOT "${LLVMLINK_PATH}" MATCHES "LLVMLINK_PATH-NOTFOUND"))
        set(CMAKE_BC_COMPILER "${CLANG_PATH}" CACHE PATH "Bitcode Compiler")
        set(CMAKE_BC_LINKER "${LLVMLINK_PATH}" CACHE PATH "Bitcode Linker")
        set(CMAKE_BC_COMPILER_ENV_VAR "BC_COMPILER")
    endif ()

    if (NOT DEFINED CMAKE_BC_COMPILER_ENV_VAR)
        message(FATAL_ERROR "Could not find the bitcode compiler and linker. Either install Clang in the default path or define the LLVM_INSTALL_PREFIX environment variable.")
    endif ()
endif ()

mark_as_advanced(CMAKE_BC_COMPILER)
mark_as_advanced(CMAKE_BC_LINKER)
mark_as_advanced(CMAKE_BC_COMPILER_ENV_VAR)

if (NOT "${CMAKE_BC_COMPILER}" STREQUAL "")
    message(STATUS "Found bitcode compiler: ${CMAKE_BC_COMPILER}")
endif ()

if (NOT "${CMAKE_BC_LINKER}" STREQUAL "")
    message(STATUS "Found bitcode linker: ${CMAKE_BC_LINKER}")
endif ()

configure_file(${CMAKE_SOURCE_DIR}/cmake/BCCompiler/CMakeBCCompiler.cmake.in ${CMAKE_PLATFORM_INFO_DIR}/CMakeBCCompiler.cmake @ONLY)
