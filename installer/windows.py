import sys
import platform
import subprocess
import argparse
import os
import collections
from distutils import spawn

import utils

def get_pshell_download_command(link, file_name):
    """
    Builds a powershell command string that can be used to download a file
    """

    if not link or not file_name:
        return None

    command = "(new-object System.Net.WebClient).DownloadFile('" + link + "','" + file_name + "')"
    return command

def pshell_download_file(link, file_name):
    """
    Downloads a file using a powershell script
    """

    pshell_command = get_pshell_download_command(link, file_name)
    if pshell_command is None:
        return False

    process = subprocess.Popen(["powershell", "-Command", pshell_command],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0:
        if not output:
            output = "Failed to download the 7-zip installer"

        print(output)
        return False

    return True

def install_msi_package(msi_path, installed_executable_path):
    """
    Installs an MSI package without user interaction
    """

    if not msi_path or not installed_executable_path:
        return False

    # some packages do not work with /quiet...
    process = subprocess.Popen(["msiexec", "/passive", "/i", msi_path],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0 or not os.path.isfile(installed_executable_path):
        if not output:
            output = "Failed to install " + msi_path

        print(output)
        return False

    return True

def get_visual_studio_env_settings():
    """
    Returns the Visual Studio environment settings
    """

    # make sure we are being run inside the visual studio prompt
    if spawn.find_executable("cl.exe") is None:
        print("The Visual C++ compiler could not be found; please run the script again from the Visual Studio prompt")
        return None

    process = subprocess.Popen(["cl.exe", "/?"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0:
        if not output:
            output = "Failed to install execute the Visual Studio compiler"

        print(output)
        return None

    # detect the vs version
    vsbuild = "unknown"
    vstoolset = "unknown"

    if "Version 18" in output:
        vsbuild = "Visual Studio 12 2013"
        vstoolset = "llvm-vs2013"

    # the 2014 below is intentional. it's called the same way even for vs2015
    elif "Version 19" in output:
        vsbuild = "Visual Studio 14 2015"
        vstoolset = "llvm-vs2014"

    if vstoolset != "unknown" and platform.machine().endswith('64'):
        vsbuild = vsbuild + " Win64"

    if vsbuild == "unknown" or vstoolset == "unknown":
        print("Unrecognized Visual Studio version. Minumum version supported is VS2013")
        return None

    vstoolset_type = collections.namedtuple("vstoolset_type", "name vsbuild")
    return vstoolset_type(name=vstoolset, vsbuild=vsbuild)

def install_windows_deps():
    """
    Installs the requires Windows components.
    """

    vs_env_settings = get_visual_studio_env_settings()
    if vs_env_settings is None:
        return False

    build_folder_path = os.path.realpath("build")
    if not os.path.isdir(build_folder_path):
        os.mkdir(build_folder_path)

    # unsupported clang versions will trigger the automatic downloader
    supported_clang_versions = ["3.8.1", "3.9.0", "4.0.0"]

    # external links
    p7zip_msi_link = "http://www.7-zip.org/a/7z1604.msi"
    cmake_msi_link = "https://cmake.org/files/v3.8/cmake-3.8.1-win32-x86.msi"
    protobuf_zip_link = "https://github.com/google/protobuf/releases/download/v2.6.1/protobuf-2.6.1.zip"

    #
    # 7-zip
    #

    sevenzip_path = utils.get_7zip_path()
    if sevenzip_path is None:
        print("Downloading package: 7zip")

        msi_path = os.path.realpath(os.path.join(build_folder_path, "7z_installer.msi"))
        if not pshell_download_file(p7zip_msi_link, msi_path):
            return False

        print("Installing package: 7zip")
        sevenzip_path = os.path.join("C:\\", "Program Files (x86)", "7-zip", "7z.exe")
        if not install_msi_package(msi_path, sevenzip_path):
            return False

    #
    # cmake
    #

    cmake_path = utils.get_cmake_path()
    if cmake_path is None:
        print("Downloading package: CMake")

        msi_path = os.path.realpath(os.path.join(build_folder_path, "cmake_installer.msi"))
        if not pshell_download_file(cmake_msi_link, msi_path):
            return False

        print("Installing package: CMake")
        cmake_path = os.path.join("C:\\", "Program Files (x86)", "CMake", "bin", "cmake.exe")
        if not install_msi_package(msi_path, cmake_path):
            return False

    #
    # protobuf
    #

    # native module
    protobuf_install_folder = os.path.realpath(os.path.join(build_folder_path, "protobuf-install"))

    if not os.path.isdir(protobuf_install_folder):
        print("Downloading package: protobuf")
        if not pshell_download_file(protobuf_zip_link, os.path.join(build_folder_path,
                                                                    "protobuf.zip")):
            return False

        print("Extracting package: protobuf (native module)")
        proc = subprocess.Popen([sevenzip_path, "-bd", "x", "-y", os.path.join(build_folder_path,
                                                                               "protobuf.zip")],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                cwd=build_folder_path)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        # todo: detect the folder automatically
        print("Configuring package: protobuf (native module)")

        protobuf_src_folder = os.path.realpath(os.path.join(build_folder_path, "protobuf-2.6.1"))
        protobuf_build_folder = os.path.realpath(os.path.join(build_folder_path, "protobuf-build"))
        protobuf_cmake_project = os.path.realpath(os.path.join("windows", "protobuf_cmake_project"))

        if not os.path.isdir(protobuf_build_folder):
            try:
                os.makedirs(protobuf_build_folder)
            except:
                print("Failed to create the protobuf build folder")
                return False

        os.environ["PROTOBUF_ROOT"] = protobuf_src_folder

        proc = subprocess.Popen([cmake_path, "-G", vs_env_settings.vsbuild, "-DPROTOBUF_ROOT=" +
                                 protobuf_src_folder, "-DCMAKE_INSTALL_PREFIX=" +
                                 protobuf_install_folder, protobuf_cmake_project],
                                cwd=protobuf_build_folder, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        print("Building package: protobuf (native module)")
        proc = subprocess.Popen([cmake_path, "--build", ".", "--config", "Release", "--target",
                                 "install"], cwd=protobuf_build_folder, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        # python module
        print("Building package: protobuf (python module)")

        os.environ["PATH"] = os.environ["PATH"] + ";" + os.path.join(protobuf_install_folder, "bin")
        protobuf_python_installer = os.path.realpath(os.path.join(protobuf_src_folder, "python"))

        python_path = utils.get_python_path()
        proc = subprocess.Popen([python_path, "setup.py", "build"],
                                cwd=protobuf_python_installer, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        print("Installing package: protobuf (python module)")
        proc = subprocess.Popen([python_path, "setup.py", "install"],
                                cwd=protobuf_python_installer, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

    #
    # llvm/clang
    #

    clang_compiler = utils.get_clang_path()
    if clang_compiler is None:
        return False

    # we also need the full installation of a compatible clang to correctly generate bitcode
    process = subprocess.Popen([clang_compiler.cpp_compiler, "-v"], stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0:
        if not output:
            output = "Failed to run clang"

        print(output)
        return False

    clang_version = output.split(" ")
    if len(clang_version) < 3:
        print("Unrecognized clang version found.")
        return False

    clang_version = clang_version[2]
    print("Found clang version " + clang_version)
    if clang_version not in supported_clang_versions:
        print("Unsupported clang version found.")

        print("Valid versions:")
        for version in supported_clang_versions:
            print("  " + version)

        return False

    # sadly, llvm-link is not shipped; we'll have to compile our own
    llvm_src_link = "http://releases.llvm.org/" + clang_version + "/llvm-" + clang_version + ".src.tar.xz"

    llvm_install_folder = os.path.realpath(os.path.join(build_folder_path,
                                                        "llvm-install"))

    original_path_variable = os.environ["PATH"]
    if os.path.isdir(llvm_install_folder):
        os.environ["PATH"] = os.environ["PATH"] + ";" + os.path.join(llvm_install_folder, "bin")

    if spawn.find_executable("llvm-link.exe") is None:
        print("llvm-link.exe was not found in PATH.")

        llvm_build_folder = os.path.realpath(os.path.join(build_folder_path, "llvm-build"))

        # download and extract the source code
        # attempt to match the version of the clang we have found
        print("Downloading package: LLVM (" + clang_version + ")")

        llvm_source_tarball = os.path.realpath(os.path.join(build_folder_path,
                                                            "llvm.src.tar.xz"))

        if not pshell_download_file(llvm_src_link, llvm_source_tarball):
            return False

        print("Extracting package: LLVM")
        proc = subprocess.Popen([sevenzip_path, "-bd", "x", "-y", llvm_source_tarball],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                cwd=build_folder_path)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        llvm_source_tarball = os.path.realpath(os.path.join(build_folder_path,
                                                            "llvm.src.tar"))

        proc = subprocess.Popen([sevenzip_path, "-bd", "x", "-y", llvm_source_tarball],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                cwd=build_folder_path)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        llvm_src_folder = os.path.realpath(os.path.join(build_folder_path, "llvm-" + clang_version + ".src"))

        # run cmake
        print("Configuring package: LLVM")

        if not os.path.isdir(llvm_build_folder):
            os.mkdir(llvm_build_folder)

        proc = subprocess.Popen([cmake_path, "-G", vs_env_settings.vsbuild, "-DCMAKE_INSTALL_PREFIX=" +
                                 llvm_install_folder, "-DLLVM_TARGETS_TO_BUILD=X86",
                                 "-DLLVM_INCLUDE_EXAMPLES=OFF", "-DLLVM_INCLUDE_TESTS=OFF",
                                 "-DCMAKE_BUILD_TYPE=Release", llvm_src_folder],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                cwd=llvm_build_folder)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        print("Building package: LLVM")

        processor_count = os.environ["NUMBER_OF_PROCESSORS"]
        if not processor_count or not processor_count.isdigit():
            processor_count = "4"

        proc = subprocess.Popen([cmake_path, "--build", ".", "--config", "Release", "--target",
                                 "install", "--", "/maxcpucount:" + processor_count,
                                 "/p:BuildInParallel=true"], stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT, cwd=llvm_build_folder)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

    os.environ["PATH"] = original_path_variable
    return True
