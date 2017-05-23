#!/usr/bin/env python2

import sys
import platform
import subprocess
import argparse
import os
from distutils import spawn

from installer import utils, osx, windows, linux

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

    # somehow cygwin causes issues with paths
    elif platform_type == "cygwin":
        print("Cygwin is not supported! Aborting...")
        return False

    arg_parser = argparse.ArgumentParser()
    arg_parser.add_argument("--install-deps", help="install required dependencies",
                            action="store_true")

    arg_parser.add_argument("--prefix", help="install prefix")
    arg_parser.add_argument("--run-tests", help="also run the integration tests",
                            action="store_true")

    arguments = arg_parser.parse_args()

    if arguments.install_deps:
        print("Looking for missing dependencies...")

        if not install_dependencies():
            print("Failed to install the system dependencies. Exiting...")
            return False

        print("All required dependencies appear to be installed")

    else:
        print("Skipping the dependency installer...")

    install_prefix = arguments.prefix
    if install_prefix is None:
        platform_type = utils.get_platform_type()
        if platform_type == "linux" or platform_type == "osx":
            install_prefix = "/usr"

        elif platform_type == "windows":
            install_prefix = os.path.join("C:\\", "mcsema")

        else:
            print("Unrecognized platform. Aborting...")
            return False

    print("Install prefix: " + install_prefix)

    build_folder = "build"
    if not os.path.isdir(build_folder):
        os.mkdir(build_folder)

    build_folder = os.path.realpath(build_folder)

    mcsema_build_folder = os.path.join(build_folder, "mcsema")
    if not os.path.isdir(mcsema_build_folder):
        os.mkdir(mcsema_build_folder)

    mcsema_build_folder = os.path.realpath(mcsema_build_folder)

    print("Build folder: " + mcsema_build_folder)

    cmake_path = utils.get_cmake_path()
    if cmake_path is None:
        print("Failed to locate cmake")
        return False

    if platform_type == "windows":
        local_llvm_folder = os.path.join(build_folder, "llvm-install", "bin")
        if not os.path.isdir(local_llvm_folder):
            os.environ["PATH"] = os.environ["PATH"] + ";" + local_llvm_folder.replace("\\", "/")

    clang_path = utils.get_clang_path()
    if clang_path is None:
        print("Failed to locate the clang compiler")

    # todo: add windows variables
    # todo: ubuntu should use the pre-built tarball
    print("Configuring McSema...")

    source_folder = os.path.realpath(".")

    cmake_parameter_list = [cmake_path, "-DCMAKE_BUILD_TYPE=RelWithDebInfo",
                            "-DCMAKE_VERBOSE_MAKEFILE=True",
                            "-DCMAKE_INSTALL_PREFIX=" + install_prefix,
                            "-DCMAKE_C_COMPILER=" + clang_path.c_compiler,
                            "-DCMAKE_CXX_COMPILER=" + clang_path.cpp_compiler]

    if platform_type == "windows":
        cmake_module_path = os.path.join(source_folder, "windows",
                                         "protobuf_cmake_findpackage").replace("\\", "/")

        protobuf_install_path = os.path.join(build_folder, "protobuf-install").replace("\\", "/")
        llvm_install_prefix = os.path.join(build_folder, "llvm-install").replace("\\", "/")

        cmake_parameter_list.append("--")

        cmake_parameter_list.append("-G")
        vs_env_settings = windows.get_visual_studio_env_settings()
        cmake_parameter_list.append(vs_env_settings.vsbuild)

        cmake_parameter_list.append("-DCMAKE_MODULE_PATH=" + cmake_module_path)
        cmake_parameter_list.append("-DPROTOBUF_INSTALL_DIR=" + protobuf_install_path)
        cmake_parameter_list.append("-DCMAKE_PREFIX_PATH=" + llvm_install_prefix)

    cmake_parameter_list.append(source_folder)

    process = subprocess.Popen(cmake_parameter_list, stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT, cwd=mcsema_build_folder)

    output = process.communicate()[0]
    if process.returncode != 0:
        print(output)
        return False

    print("Building McSema...")
    cmake_parameters = [cmake_path, "--build", ".", "--"]
    cmake_parameters = utils.append_parallel_build_options(cmake_parameters)

    if platform_type == "windows":
        cmake_parameter_list.append("-T")
        cmake_parameter_list.append("LLVM-vs2014") # todo: detect this automatically

    process = subprocess.Popen(cmake_parameters, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               cwd=mcsema_build_folder)

    output = process.communicate()[0]
    if process.returncode != 0:
        print(output)
        return False

    print("Installing McSema...")

    cmake_command = []

    platform_type = utils.get_platform_type()
    if platform_type == "linux" or platform_type == "osx":
        cmake_command.append("sudo")

    cmake_command.append(cmake_path)
    cmake_command.append("--build")
    cmake_command.append(".")
    cmake_command.append("--target")
    cmake_command.append("install")

    process = subprocess.Popen(cmake_command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               cwd=mcsema_build_folder)

    output = process.communicate()[0]
    if process.returncode != 0:
        print(output)
        return False

    if platform_type == "linux" or platform_type == "osx":
        subprocess.call(["sudo", "-K"])

    if arguments.run_tests:
        print("Running tests...")

        os.environ['MCSEMA_INSTALL_PREFIX'] = arguments.prefix
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
