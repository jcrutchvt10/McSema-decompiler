set(CLANG_C_EXECUTABLE_NAME "clang")
set(CLANG_CXX_EXECUTABLE_NAME "clang++")
set(LLVMLINK_EXECUTABLE_NAME "llvm-link")

if (WIN32)
    set(CLANG_C_EXECUTABLE_NAME "${CLANG_C_EXECUTABLE_NAME}.exe")
    set(CLANG_CXX_EXECUTABLE_NAME "${CLANG_CXX_EXECUTABLE_NAME}.exe")
    set(LLVMLINK_EXECUTABLE_NAME "${LLVMLINK_EXECUTABLE_NAME}.exe")
endif ()

if (NOT DEFINED CMAKE_BC_COMPILER)
    if (DEFINED ENV{LLVM_INSTALL_PREFIX})
        message(STATUS "Setting LLVM_INSTALL_PREFIX from the environment variable...")
        set(LLVM_INSTALL_PREFIX $ENV{LLVM_INSTALL_PREFIX})
    endif ()

    if ("${CMAKE_CXX_COMPILER}" MATCHES clang)
        message("Using CMAKE_CXX_COMPILER as bitcode compiler")

        set(CMAKE_BC_COMPILER "${CMAKE_CXX_COMPILER}" CACHE PATH "Bitcode Compiler")
        set(CMAKE_BC_LINKER "ASDSADASD" CACHE PATH "Bitcode Linker")
        set(CMAKE_BC_COMPILER_ENV_VAR "BC_COMPILER")

    else ()
        find_program(CLANG_PATH
            NAMES "${CLANG_CXX_EXECUTABLE_NAME}"
            PATHS "/usr/bin" "/usr/local/bin" "C:/Program Files/llvm/bin" "C:/Program Files (x86)/llvm/bin"
        )

        find_program(LLVMLINK_PATH
            NAMES "${LLVMLINK_EXECUTABLE_NAME}"
            PATHS "/usr/bin" "/usr/local/bin" "C:/Program Files/llvm/bin" "C:/Program Files (x86)/llvm/bin"
        )

        set(CMAKE_BC_COMPILER "${CLANG_PATH}" CACHE PATH "Bitcode Compiler")
        set(CMAKE_BC_LINKER "${LLVMLINK_PATH}" CACHE PATH "Bitcode Linker")
        set(CMAKE_BC_COMPILER_ENV_VAR "BC_COMPILER")
    endif ()

    if (NOT DEFINED CMAKE_BC_COMPILER_ENV_VAR AND LLVM_INSTALL_PREFIX)
        message("LLVM_INSTALL_PREFIX has been set to: ${LLVM_INSTALL_PREFIX}")

        message(STATUS "Using LLVM_INSTALL_PREFIX to locate the bitcode compiler")

        if (NOT EXISTS "${LLVM_INSTALL_PREFIX}/bin/${CLANG_CXX_EXECUTABLE_NAME}")
            message(SEND_ERROR "Could not find the bitcode compiler set in the CMake variable LLVM_INSTALL_PREFIX: ${LLVM_INSTALL_PREFIX}.")
        endif ()

        if (NOT EXISTS "${LLVM_INSTALL_PREFIX}/bin/${LLVMLINK_EXECUTABLE_NAME}")
            message(SEND_ERROR "Could not find the bitcode linker set in the CMake variable LLVM_INSTALL_PREFIX: ${LLVM_INSTALL_PREFIX}.")
        endif ()

        set(CMAKE_BC_COMPILER "${LLVM_INSTALL_PREFIX}/bin/${CLANG_CXX_EXECUTABLE_NAME}" CACHE PATH "Bitcode Compiler")
        set(CMAKE_BC_LINKER "${LLVM_INSTALL_PREFIX}/bin/${LLVMLINK_EXECUTABLE_NAME}" CACHE PATH "Bitcode Linker")
        set(CMAKE_BC_COMPILER_ENV_VAR "BC_COMPILER")
    endif()

    if (NOT DEFINED CMAKE_BC_COMPILER_ENV_VAR)
        message(SEND_ERROR "Could not find the bitcode compiler and linker. Either install Clang in the default or define the LLVM_INSTALL_PREFIX environment variable.")
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
