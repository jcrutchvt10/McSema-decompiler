cmake_minimum_required (VERSION 3.2)
project(x86_bitcode BC)

function (generate_bitcode address_size)
    if (${address_size} EQUAL 32)
        set(target_name x86)

    elseif (${address_size} EQUAL 64)
        set(target_name amd64)

    else ()
        message(FATAL_ERROR "Invalid address size specified")
    endif ()

    message(" > Generating target: mcsema_semantics_${target_name}")

    add_runtime("mcsema_semantics_${target_name}" SOURCES "${CMAKE_CURRENT_SOURCE_DIR}/FXAM.bcpp" ADDRESS_SIZE ${address_size})
    target_include_directories("mcsema_semantics_${target_name}" PRIVATE "${CMAKE_SOURCE_DIR}")

    # not needed under cygwin, as we can only build what our current toolchain supports
    if (NOT "${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN")
        target_compile_options("mcsema_semantics_${target_name}" PRIVATE "-m${address_size}")
    endif ()

    install(TARGETS "mcsema_semantics_${target_name}" DESTINATION "share/mcsema/bitcode")
endfunction ()

# cygwin does not support multilib
if ("${CMAKE_SYSTEM_NAME}" STREQUAL "CYGWIN")
    if (CMAKE_SIZEOF_VOID_P EQUAL 4)
        generate_bitcode(32)
    else ()
        generate_bitcode(64)
    endif ()

# assume multilib can be used
else ()
    generate_bitcode(32)
    generate_bitcode(64)
endif ()
