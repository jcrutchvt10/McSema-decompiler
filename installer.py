#!/usr/bin/env python2

import sys
import platform
import subprocess
import argparse
import os
import shutil
from distutils import spawn

from installer import utils, osx, windows, linux, cmakewrapper

def install_dependencies():
    """
    Installs the required dependencies for the system in use
    """

    # build the follow function name:
    #     install_linux_<distribution-name>_deps
    #     install_windows_deps
    #     install_osx_deps

    platform_type = utils.get_platform_type()
    if platform_type == "unknown":
        print("Unknown platform type! Aborting...")
        return False

    platform_handler_name = "install_" + platform_type
    if platform_type == "linux":
        platform_handler_name = platform_handler_name + "_" + utils.get_linux_distribution_name()

    platform_handler_name = platform_handler_name + "_deps"

    # now that we have a function name, see if we have an implementation we can call
    module_list = globals().copy()
    module_list.update(locals())

    platform_handler = None
    for module_name in module_list:
        try:
            platform_handler = getattr(module_list[module_name], platform_handler_name)
            if platform_handler is not None:
                break

        except Exception:
            pass

    if platform_handler is None:
        print("The following platform is not supported: " + platform_type)
        return False

    exit_status = platform_handler()

    if platform_type == "linux" or platform_type == "osx":
        subprocess.call(["sudo", "-K"])

    return exit_status

def main():
    """
    This function will install the required dependencies and install mcsema
    """

    platform_type = utils.get_platform_type()
    if platform_type == "unknown":
        print("Unknown platform! Aborting...")
        return False

    arg_parser = argparse.ArgumentParser()
    arg_parser.add_argument("--install-deps", help="install required dependencies",
                            action="store_true")

    arg_parser.add_argument("--prefix", help="install prefix")
    arg_parser.add_argument("--run-tests", help="also run the integration tests",
                            action="store_true")

    arguments = arg_parser.parse_args()

    build_folder = "build"
    if not os.path.isdir(build_folder):
        os.mkdir(build_folder)

    if platform_type == "windows":
        local_llvm_folder = os.path.realpath(os.path.join(build_folder, "llvm-install", "bin"))
        if os.path.isdir(local_llvm_folder):
            os.environ["PATH"] = os.environ["PATH"] + ";" + local_llvm_folder.replace("\\", "/")

        local_ninja_folder = os.path.realpath(os.path.join(build_folder, "ninja-install"))
        if os.path.isdir(local_ninja_folder):
            os.environ["PATH"] = os.environ["PATH"] + ";" + local_ninja_folder.replace("\\", "/")

    if arguments.install_deps:
        print("Looking for missing dependencies...")

        if not install_dependencies():
            print("Failed to install the system dependencies. Exiting...")
            return False

        print("All required dependencies appear to be installed")

    else:
        print("Skipping the dependency installer...")

    build_folder = os.path.realpath(build_folder)

    install_prefix = arguments.prefix
    if install_prefix is None:
        platform_type = utils.get_platform_type()
        if platform_type == "linux" or platform_type == "osx":
            install_prefix = "/usr"

        elif platform_type != "windows":
            print("Unrecognized platform. Aborting...")
            return False

    if platform_type == "windows":
        install_prefix = os.path.join(build_folder, "mcsema-install").replace("\\", "/")

    print("Install prefix: " + install_prefix)

    source_folder = os.path.realpath(".")
    mcsema_build_folder = os.path.realpath(os.path.join(build_folder, "mcsema-build"))
    if not os.path.isdir(mcsema_build_folder):
        os.mkdir(mcsema_build_folder)

    print("Source folder: " + source_folder)
    print("Build folder: " + mcsema_build_folder)

    # todo: ubuntu should use the pre-built tarball
    print("Configuring McSema...")

    windows_arch = None
    if platform_type == "windows":
        windows_arch = "Win64"

    cmake = cmakewrapper.CMake(source_folder, mcsema_build_folder, windows_arch=windows_arch, debug=True)

    cmake_parameters = None
    if platform_type == "windows":
        cmake_module_path = os.path.join(source_folder, "windows", "protobuf_cmake_findpackage").replace("\\", "/")
        protobuf_install_path = os.path.join(build_folder, "protobuf-install").replace("\\", "/")
        llvm_install_prefix = os.path.join(build_folder, "llvm-install").replace("\\", "/")

        cmake_parameters = []
        cmake_parameters.append("-DCMAKE_MODULE_PATH=" + cmake_module_path)
        cmake_parameters.append("-DPROTOBUF_INSTALL_DIR=" + protobuf_install_path)
        cmake_parameters.append("-DCMAKE_PREFIX_PATH=" + llvm_install_prefix)        

    cmake_error = cmake.configure(install_prefix, "Release", parameters=cmake_parameters)
    if not cmake_error[0]:
        print("CMake has reported an error. Full output follows...")
        print cmake_error[1]
        return False

    print("Building McSema...")
    cmake_error = cmake.build()
    if not cmake_error[0]:
        print("The build system has reported an error. Full output follows...")
        print cmake_error[1]
        return False

    print("Installing McSema...")
    cmake_error = cmake.install()
    if not cmake_error[0]:
        print("The build system has reported an error. Full output follows...")
        print cmake_error[1]
        return False

    # we don't have "multilib" when building with with visual studio or cygwin
    if platform_type == "windows" or platform_type == "cygwin":
        print("Configuring McSema (32-bit)...")

        x86_mcsema_build_folder = os.path.realpath(os.path.join(build_folder, "mcsema-build-x86"))
        if not os.path.isdir(x86_mcsema_build_folder):
            os.mkdir(x86_mcsema_build_folder)

        cmake = cmakewrapper.CMake(source_folder, x86_mcsema_build_folder, windows_arch="Win32", debug=True)

        cmake_parameters = ["-DCMAKE_MODULE_PATH=" + cmake_module_path,
                            "-DPROTOBUF_INSTALL_DIR=" + protobuf_install_path,
                            "-DCMAKE_PREFIX_PATH=" + llvm_install_prefix]

        cmake_error = cmake.configure(install_prefix, "Release", parameters=cmake_parameters)
        if not cmake_error[0]:
            print("CMake has reported an error. Full output follows...")
            print cmake_error[1]
            return False

        print("Building McSema (32-bit)...")
        cmake_error = cmake.build("mcsema\\Arch\\X86\\Runtime\\mcsema_rt32")
        if not cmake_error[0]:
            print("The build system has reported an error. Full output follows...")
            print cmake_error[1]
            return False

        cmake_error = cmake.build("mcsema\\Arch\\X86\\Semantics\\Bitcode\\mcsema_semantics_x86")
        if not cmake_error[0]:
            print("The build system has reported an error. Full output follows...")
            print cmake_error[1]
            return False

        print("Installing McSema (32-bit)...")
        runtime_lib_path = os.path.realpath(os.path.join(x86_mcsema_build_folder,
                                                         "mcsema", "Arch", "X86",
                                                         "Runtime", "Release",
                                                         "mcsema_rt32.lib"))

        runtime_dest_path = os.path.realpath(os.path.join(install_prefix, "lib"))

        semantics_bitcode_path = os.path.realpath(os.path.join(x86_mcsema_build_folder,
                                                              "mcsema", "Arch", "X86",
                                                              "Semantics", "Bitcode",
                                                              "mcsema_semantics_x86.bc"))


        smenatics_dest_path = os.path.realpath(os.path.join(install_prefix, "share",
                                                            "mcsema", "bitcode"))
        try:
            shutil.copy(runtime_lib_path, runtime_dest_path)

        except Exception:
            print("Failed to install the following file: " + runtime_lib_path)
            return False

        try:
            shutil.copy(semantics_bitcode_path, smenatics_dest_path)

        except Exception:
            print("Failed to install the following file: " +
                  semantics_bitcode_path)
            return False

    if arguments.run_tests:
        print("Running tests...")

        os.environ['MCSEMA_INSTALL_PREFIX'] = install_prefix
        if subprocess.call(["python2", "tests/integration_test.py"]) != 0:
            print("One or more tests have failed! Exiting with error...")
            return False

        print("All tests have reported success!")

    else:
        print("Skipping tests...")

    return True

if __name__ == "__main__":
    if main():
        sys.exit(0)
    else:
        sys.exit(1)
