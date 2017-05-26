# Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved.
enable_language(ASM)

if ((DEFINED WIN32) OR ("${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN" AND CMAKE_SIZEOF_VOID_P EQUAL 4))
    message(" > Generating target: mcsema-print-runtime-x86 (Windows)")

    add_executable(mcsema-print-runtime-x86 print_PE_32_windows.cpp)
    add_library(mcsema_rt32 STATIC runtime_32.asm)

    add_custom_command(
        OUTPUT runtime_32.asm
        COMMAND mcsema-print-runtime-x86
        DEPENDS mcsema-print-runtime-x86
        COMMENT "Generating 32-bit Windows PE runtime..."
    )
endif ()

if ((DEFINED WIN32) OR ("${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN" AND CMAKE_SIZEOF_VOID_P EQUAL 8))
    message(" > Generating target: mcsema-print-runtime-amd64 (Windows)")

    add_executable(mcsema-print-runtime-amd64 print_PE_64_windows.cpp)
    add_library(mcsema_rt64 STATIC runtime_64.asm)

    add_custom_command(
        OUTPUT runtime_64.asm
        COMMAND mcsema-print-runtime-amd64
        DEPENDS mcsema-print-runtime-amd64
        COMMENT "Generating 64-bit Windows PE runtime..."
    )
endif ()

if (DEFINED UNIX)
    message(" > Generating target: mcsema-print-runtime-x86 (Linux)")

    add_executable(mcsema-print-runtime-x86 print_ELF_32_linux.cpp)
    set_target_properties(mcsema-print-runtime-x86 PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

    add_library(mcsema_rt32 STATIC runtime_32.S)
    set_target_properties(mcsema_rt32 PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

    add_custom_command(
        OUTPUT runtime_32.S
        COMMAND mcsema-print-runtime-x86
        DEPENDS mcsema-print-runtime-x86
        COMMENT "Generating 32-bit Linux ELF runtime..."
    )

    if (CMAKE_SIZEOF_VOID_P EQUAL 8)
        message(" > Generating target: mcsema-print-runtime-amd64 (Linux)")

        add_executable(mcsema-print-runtime-amd64 print_ELF_64_linux.cpp)
        set_target_properties(mcsema-print-runtime-amd64 PROPERTIES COMPILE_FLAGS "-m64" LINK_FLAGS "-m64")

        add_library(mcsema_rt64 STATIC runtime_64.S)
        set_target_properties(mcsema_rt64 PROPERTIES COMPILE_FLAGS "-m64" LINK_FLAGS "-m64")

        add_custom_command(
            OUTPUT runtime_64.S
            COMMAND mcsema-print-runtime-amd64
            DEPENDS mcsema-print-runtime-amd64
            COMMENT "Generating 64-bit Linux ELF runtime..."
        )
    endif ()
endif ()

if ((NOT TARGET mcsema_rt32) AND (NOT TARGET mcsema_rt64))
    message(WARNING "No runtime targets could be generated for the operating system in use.")
endif ()

if (TARGET mcsema_rt32)
    install(TARGETS mcsema_rt32 ARCHIVE DESTINATION lib)
endif ()

if (TARGET mcsema_rt64)
    install(TARGETS mcsema_rt64 ARCHIVE DESTINATION lib)
endif()
