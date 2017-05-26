cmake_minimum_required (VERSION 3.2)
project(x86_bitcode)

set(X86BITCODE_CXXFLAGS "-std=gnu++11 -emit-llvm -Wno-unknown-warning-option -Wall -Wshadow -Wconversion -Wpadded -pedantic -Wshorten-64-to-32 -Wno-gnu-anonymous-struct -Wno-return-type-c-linkage -Wno-gnu-zero-variadic-macro-arguments -Wno-nested-anon-types -Wno-extended-offsetof -Wno-gnu-statement-expression -Wno-c99-extensions -Wno-ignored-attributes -mtune=generic -fno-vectorize -fno-slp-vectorize -ffreestanding -fno-common -fno-builtin -fno-exceptions -fno-rtti -fno-asynchronous-unwind-tables -Wno-unneeded-internal-declaration -Wno-unused-function")
if (DEFINED WIN32)
    set(X86BITCODE_CXXFLAGS "${X86BITCODE_CXXFLAGS} -fms-compatibility-version=19.00")
endif ()

function (generate_bitcode address_size)
    if (${address_size} EQUAL 32)
        set(target_name x86)

    elseif (${address_size} EQUAL 64)
        set(target_name amd64)

    else ()
        message(FATAL_ERROR "Invalid address size specified")
    endif ()

    message(" > Generating target: mcsema_semantics_${target_name}")

    add_runtime("${target_name}"
        SOURCES FXAM.cpp
        ADDRESS_SIZE "${address_size}"
        DEFINITIONS
        BCFLAGS ${X86BITCODE_CXXFLAGS}
        LINKERFLAGS "-m${address_size}"
        INCLUDEDIRECTORIES "${CMAKE_SOURCE_DIR}"
    )

    add_runtime("mcsema_semantics_${target_name}" SOURCES "FXAM.cpp" ADDRESS_SIZE ${address_size})
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
