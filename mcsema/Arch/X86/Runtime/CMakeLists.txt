# Copyright 2017 Peter Goodman (peter@trailofbits.com), all rights reserved.
project(x86_runtime)

#
# windows (visual studio)
#

# we are not going to use the ASM language here, as we would have to use MASM syntax
if (WIN32)
    enable_language(C)

    function (generate_target address_size)
        if ("${address_size}" STREQUAL "32")
            set(architecture_name "x86")
            set(compile_flag "-m32")
            set(link_flag "/MACHINE:X86")

        elseif ("${address_size}" STREQUAL "64")
            set(architecture_name "amd64")
            set(compile_flag "-m64")
            set(link_flag "/MACHINE:X64")

        else ()
            message(FATAL_ERROR "Invalid address size specified: ${address_size}")
        endif ()

        # generate the executable that will output the runtime assembly
        set(executable_name "mcsema-print-runtime-${architecture_name}")
        message(" > Generating target: ${executable_name} (Windows)")

        add_executable("${executable_name}" "print_PE_${address_size}_windows.cpp")
        set_target_properties("${executable_name}" PROPERTIES COMPILE_FLAGS ${compile_flag} LINK_FLAGS ${link_flag})

        # build a static library from the assembly that the executable generates
        set(library_name "mcsema_rt${address_size}")
        set(library_obj_path "${CMAKE_CURRENT_BINARY_DIR}/runtime_${address_size}.obj")

        message(" > Generating target: ${library_name} (Windows)")

        add_library("${library_name}" STATIC "${library_obj_path}")
        set_target_properties("${library_name}" PROPERTIES STATIC_LIBRARY_FLAGS ${link_flag})
        set_target_properties("${library_name}" PROPERTIES LINKER_LANGUAGE C)

        # define a command to link the obj file to a lib file
        set(library_asm_path "${CMAKE_CURRENT_BINARY_DIR}/runtime_${address_size}.asm")

        add_custom_command(
            OUTPUT "${library_obj_path}"
            COMMAND "${CMAKE_C_COMPILER}" ${compile_flag} "/Fo${library_obj_path}" /c "${library_asm_path}"
            DEPENDS "${library_asm_path}"
            COMMENT "Generating: ${library_obj_path}."
        )
        set_source_files_properties("${library_obj_path}" PROPERTIES EXTERNAL_OBJECT True GENERATED True)

        # add a custom command to generate the asm file
        add_custom_command(
            OUTPUT "${library_asm_path}"
            COMMAND "${executable_name}"
            DEPENDS "${executable_name}"
            COMMENT "Generating: ${library_asm_path}"
            WORKING_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}"
        )
    endfunction ()

    # todo: looks like the obj->lib command is getting a foreign "/machine:x64" parameter
    # and this causes linking issues
    # generate_target(32)
    generate_target(64)
endif ()

#
# windows (cygwin)
#

if (("${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN") AND (CMAKE_SIZEOF_VOID_P EQUAL 4))
    enable_language(ASM)

    message(" > Generating target: mcsema-print-runtime-x86 (Windows)")
    add_executable(mcsema-print-runtime-x86 print_PE_32_windows.cpp)

    add_custom_command(
        OUTPUT runtime_32.asm
        COMMAND mcsema-print-runtime-x86
        DEPENDS mcsema-print-runtime-x86
        COMMENT "Generating 32-bit Windows PE runtime..."
    )

    add_library(mcsema_rt32 STATIC runtime_32.asm)
endif ()

if (("${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN") AND (CMAKE_SIZEOF_VOID_P EQUAL 8))
    enable_language(ASM)

    message(" > Generating target: mcsema-print-runtime-amd64 (Windows)")
    add_executable(mcsema-print-runtime-amd64 print_PE_64_windows.cpp)

    add_custom_command(
        OUTPUT runtime_64.asm
        COMMAND mcsema-print-runtime-amd64
        DEPENDS mcsema-print-runtime-amd64
        COMMENT "Generating 64-bit Windows PE runtime..."
    )

    add_library(mcsema_rt64 STATIC runtime_64.asm)
endif ()

#
# linux, osx
#

if (DEFINED UNIX)
    enable_language(ASM)

    message(" > Generating target: mcsema-print-runtime-x86 (Linux)")
    add_executable(mcsema-print-runtime-x86 print_ELF_32_linux.cpp)
    set_target_properties(mcsema-print-runtime-x86 PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

    add_custom_command(
        OUTPUT runtime_32.S
        COMMAND mcsema-print-runtime-x86
        DEPENDS mcsema-print-runtime-x86
        COMMENT "Generating: runtime_32.S"
    )

    add_library(mcsema_rt32 STATIC runtime_32.S)
    set_target_properties(mcsema_rt32 PROPERTIES COMPILE_FLAGS "-m32" LINK_FLAGS "-m32")

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
            COMMENT "Generating: runtime_64.S"
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
