#!/usr/bin/env bash

function main
{
    if [ $# -eq 1 ] ; then
        local install_prefix="$1"
    fi

    CompileMcSema "${install_prefix}"
    if [ $? -ne 0 ] ; then
        printf "McSema could not be compiled. Aborting...\n"
        return 1
    fi

    InstallMcSema
    if [ $? -ne 0 ] ; then
        printf "McSema could not be installed. Aborting...\n"
        return 1
    fi

    return 0
}

function CompileMcSema
{
    if [ $# -eq 1 ] ; then
        local install_prefix="$1"
    fi

    if [ -d build ] ; then
        rm -rf build || return 1
    fi

    mkdir build || return 1

    local cmake_options="-DCMAKE_VERBOSE_MAKEFILE=True -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang"
    if [ ! -z "${install_prefix}" ] ; then
        cmake_options="${cmake_options} -DCMAKE_INSTALL_PREFIX=${install_prefix}"
    fi

    ( cd build && cmake ${cmake_options} .. ) || return 1
    ( cd build && make -j `nproc` ) || return 1

    return 0
}

function InstallMcSema
{
    ( cd build && make install ) || return 1

    return 0
}

main $@
exit $?
