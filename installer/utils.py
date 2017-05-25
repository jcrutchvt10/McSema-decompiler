import sys
import platform
import subprocess
import argparse
import os
import collections
from distutils import spawn

import utils

def append_parallel_build_options(parameters):
    """
    Appends to the parallel build options to the given variable
    """

    platform_type = get_platform_type()

    if platform_type == "windows":
        processor_count = os.environ["NUMBER_OF_PROCESSORS"]
        if not processor_count or not processor_count.isdigit():
            processor_count = "4"

        parameters.append("/maxcpucount:" + processor_count)
        parameters.append("/p:BuildInParallel=true")

        return parameters

    elif platform_type == "linux" or platform_type == "osx":
        parameters.append("-j")
        parameters.append("4")

        return parameters

    else:
        return parameters

def get_clang_path():
    """
    Returns the clang path
    """

    platform_type = get_platform_type()
    clang_compiler_type = collections.namedtuple("clang_compiler_type", "name c_compiler cpp_compiler")

    if platform_type == "windows":
        clangcl_path = spawn.find_executable("clang-cl.exe", "C:\\Program Files\\llvm\\bin")
        if clangcl_path is None:
            clangcl_path = spawn.find_executable("clang-cl.exe", "C:\\Program Files (x86)\\llvm\\bin")

        if clangcl_path is None:
            print("Please install Clang for Windows.")
            print("Instructions:")
            print("Download page: http://releases.llvm.org/download.html")
            print("Run the installer and add it to the PATH")
            print("Open the LLVM install folder and run tools/msbuild/install.bat")
            return None

        clangcl_path = clangcl_path.replace("\\", "/")
        return clang_compiler_type(name="Windows Clang", c_compiler=clangcl_path,
                                   cpp_compiler=clangcl_path)

    elif platform_type == "linux" or platform_type == "osx":
        c_compiler_path = spawn.find_executable("clang")
        cpp_compiler_path = spawn.find_executable("clang++")

        if c_compiler_path is None or cpp_compiler_path is None:
            print("Please install Clang using your package manager")
            return None

        name = ""
        if platform_type == "linux":
            name = "Linux"
        else:
            name = "OSX"
        name = name + " Clang"

        return clang_compiler_type(name=name, c_compiler=c_compiler_path,
                                   cpp_compiler=cpp_compiler_path)

    else:
        return None

def get_python_path():
    """
    Returns the python path
    """

    platform_type = get_platform_type()

    if platform_type == "windows":
        return spawn.find_executable("python.exe")

    elif platform_type == "linux" or platform_type == "osx":
        return spawn.find_executable("python")

    else:
        return None

def get_cmake_path():
    """
    Returns the cmake path
    """

    platform_type = get_platform_type()

    if platform_type == "windows":
        cmake_path = os.path.join("C:\\", "Program Files", "CMake", "bin", "cmake.exe")
        if os.path.isfile(cmake_path):
            return cmake_path

        cmake_path = os.path.join("C:\\", "Program Files (x86)", "CMake", "bin", "cmake.exe")
        if os.path.isfile(cmake_path):
            return cmake_path

        return None

    elif platform_type == "linux" or platform_type == "osx":
        return spawn.find_executable("cmake")

    else:
        return None

def get_7zip_path():
    """
    Returns the 7zip path
    """

    platform_type = get_platform_type()

    if platform_type == "windows":
        p7zip_path = os.path.join("C:\\", "Program Files", "7-Zip", "7z.exe")
        if os.path.isfile(p7zip_path):
            return p7zip_path

        p7zip_path = os.path.join("C:\\", "Program Files (x86)", "7-Zip", "7z.exe")
        if os.path.isfile(p7zip_path):
            return p7zip_path

        return None

    elif platform_type == "linux" or platform_type == "osx":
        return spawn.find_executable("7z")

    else:
        return None

def get_platform_type():
    """
    Returns the platform type (linux, windows, osx, unknown).
    """

    if sys.platform == "linux" or sys.platform == "linux2":
        return "linux"

    elif sys.platform == "darwin":
        return "osx"

    elif sys.platform == "win32" or sys.platform == "cygwin":
        return "windows"

    else:
        return "unknown"

def get_linux_distribution_name():
    """
    Returns the distribution name.
    """

    distribution_info = platform.linux_distribution(
                        supported_dists=platform._supported_dists + ('arch',))

    name = distribution_info[0]
    if not name:
        name = "unknown"

    return name
