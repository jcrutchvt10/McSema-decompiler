#!/usr/bin/env python2

import sys
import platform
import subprocess
import argparse
import os
from distutils import spawn

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

def install_linux_arch_deps():
    """
    Installs the required Arch Linux packages
    """

    package_list = ["git", "cmake", "protobuf", "protobuf-c", "python2",
                    "python2-pip", "clang", "llvm", "pcre", "libbsd", "xz"]

    for package in package_list:
        process = subprocess.Popen(["pacman", "-Qi", package], stdout=subprocess.PIPE,
                                   stderr=subprocess.STDOUT)

        process.communicate()
        if process.returncode == 0:
            continue

        print("Installing package: " + package)
        process = subprocess.Popen(["sudo", "pacman", "--noconfirm", "-S", package],
                                   stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = process.communicate()[0]
        if process.returncode != 0:
            print(output)
            return False

    return True

def install_linux_ubuntu_deps():
    """
    Installs the required Ubuntu packages.
    """

    package_list = ["git", "cmake", "libprotoc-dev", "libprotobuf-dev",
                    "protobuf-compiler", "python2.7", "python-pip", "llvm-3.8",
                    "clang-3.8", "realpath", "gcc-multilib", "g++-multilib",
                    "liblzma-dev", "libpcre3-dev", "libbsd-dev"]

    process = subprocess.Popen(["dpkg", "-l"], stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT)

    installed_package_list = process.communicate()[0]
    if process.returncode != 0:
        print(installed_package_list)
        return False

    for package in package_list:
        if package in installed_package_list:
            continue

        print("Installing package: " + package)
        process = subprocess.Popen(["sudo", "apt-get", "install", "-y", package],
                                   stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = process.communicate()[0]
        if process.returncode != 0:
            print(output)
            return False

    # we have to download a pre-built llvm package because the one in the repository
    # is broken
    # todo: download and extract the llvm tarball

    return True

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
    if pshell_command == None:
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

    process = subprocess.Popen(["msiexec", "/passive", "/i", msi_path],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0 or not os.path.isfile(installed_executable_path):
        if not output:
            output = "Failed to install " + msi_path

        print(output)
        return False

    return True

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

        print "error"
        return None

    elif platform_type == "linux" or platform_type == "osx":
        return spawn.find_executable("7z")

    else:
        return None

def install_windows_deps():
    """
    Installs the requires Windows components.
    """

    build_folder_path = os.path.realpath("build")
    if not os.path.isdir(build_folder_path):
        os.mkdir(build_folder_path)

    # unsupported clang versions will trigger the automatic downloader
    supported_clang_versions = ["3.8.0", "3.8.1", "3.9.0", "4.0.0"]

    # external links
    p7zip_msi_link = "http://www.7-zip.org/a/7z1604.msi"
    cmake_msi_link = "https://cmake.org/files/v3.8/cmake-3.8.1-win32-x86.msi"
    protobuf_zip_link = "https://github.com/google/protobuf/releases/download/v2.6.1/protobuf-2.6.1.zip"

    llvm_setup_vers = "3.8.1"
    if platform.machine().endswith('64'):
        llvm_setup_link = "http://releases.llvm.org/3.8.1/LLVM-" + llvm_setup_vers + "-win64.exe"
    else:
        llvm_setup_link = "http://releases.llvm.org/3.8.1/LLVM-" + llvm_setup_vers + "-win32.exe"

    llvm_src_vers = llvm_setup_vers
    llvm_src_link = "http://releases.llvm.org/" + llvm_src_vers + "/llvm-" + llvm_src_vers + ".src.tar.xz"

    #
    # visual studio tests
    #

    # make sure we are being run inside the visual studio prompt
    if spawn.find_executable("cl.exe") is None:
        print("The Visual C++ compiler could not be found; please run the script again from the Visual Studio prompt")
        return False

    process = subprocess.Popen(["cl.exe", "/?"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0:
        if not output:
            output = "Failed to install execute the Visual Studio compiler"

        print(output)
        return False

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
        vstoolset = vstoolset + " Win64"

    if vsbuild == "unknown" or vstoolset == "unknown":
        print("Unrecognized Visual Studio version. Minumum version supported is VS2013")
        return False

    #
    # 7-zip
    #

    sevenzip_path = get_7zip_path()
    if sevenzip_path is None:
        print("Downloading package: 7zip")
        if not pshell_download_file(p7zip_msi_link, os.path.join(build_folder_path,
                                                                 "7z_installer.msi")):
            return False

        print("Installing package: 7zip")
        if not install_msi_package("7z_installer.msi", sevenzip_path):
            return False

    #
    # cmake
    #

    cmake_path = get_cmake_path()
    if cmake_path is None:
        print("Downloading package: CMake")
        if not pshell_download_file(cmake_msi_link, os.path.join(build_folder_path,
                                                                 "cmake_installer.msi")):
            return False

        print("Installing package: CMake")
        cmake_path = os.path.join("C:\\", "Program Files (x86)", "CMake", "bin", "cmake.exe")
        if not install_msi_package("cmake_installer.msi", cmake_path):
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
        proc = subprocess.Popen([cmake_path, "-G", vsbuild, "-DPROTOBUF_ROOT=" +
                                 protobuf_src_folder, "-DCMAKE_INSTALL_PREFIX=" +
                                 protobuf_install_folder, protobuf_cmake_project],
                                cwd=protobuf_build_folder, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        print("Building and installing package: protobuf (native module)")
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

        proc = subprocess.Popen([get_python_path(), "setup.py", "build"],
                                cwd=protobuf_python_installer, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        print("Installing package: protobuf (python module)")
        proc = subprocess.Popen([get_python_path(), "setup.py", "install"],
                                cwd=protobuf_python_installer, stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

    #
    # llvm/clang
    #

    # we need clang-cl from Visual Studio to generate assembly; we don't care about
    # the version, just make sure it is installed
    clangcl_path = spawn.find_executable("clang-cl.exe")
    if clangcl_path is None:
        print("Please install Clang for Visual Studio")
        return False

    # we also need the full installation of a compatible clang to correctly generate bitcode
    process = subprocess.Popen([clangcl_path, "-v"], stdout=subprocess.PIPE,
                               stderr=subprocess.STDOUT)

    output = process.communicate()[0]
    if process.returncode != 0:
        if not output:
            output = "Failed to run clang-cl.exe"

        print(output)
        return False

    clang_version = output.split(" ")
    if len(clang_version) < 3:
        print("Unrecognized clang version found.")
        return False

    clang_version = clang_version[2]
    if clang_version not in supported_clang_versions:
        # download a binary distribution of LLVM/Clang
        print("Fetching package: LLVM/Clang " + llvm_setup_vers)

        if not pshell_download_file(llvm_setup_link, "llvm_setup.exe"):
            return False

        llvm_folder = os.path.join("third_party", "CLANG_38")
        clang_path = os.path.join("third_party", "CLANG_38.exe")

        proc = subprocess.Popen([sevenzip_path, "-bd", "-o" + llvm_folder, "x", "-y", clang_path],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

    # the binary distribution we have downloaded does not contain
    # llvm-link; we need to build it ourselves
    if spawn.find_executable("llvm-link.exe") is None:
        # download and extract the source code
        if not pshell_download_file(llvm_src_link, "llvm.src.tar.xz"):
            return False

        proc = subprocess.Popen([sevenzip_path, "-bd", "x", "-y", "llvm.src.tar.xz"],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        proc = subprocess.Popen([sevenzip_path, "-bd", "x", "-o", "third-party", "-y",
                                 "llvm.src.tar"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        src_folder_name = "llvm-" + llvm_src_vers + ".src"
        os.rename(os.path.join("third-party", src_folder_name), os.path.join("third-party", "llvm"))

        # run cmake
        llvm_src_folder = os.path.realpath(os.path.join("third-party", "llvm"))
        llvm_build_folder = os.path.realpath(os.path.join("build", "llvm"))
        source_folder = os.path.realpath(".")

        if not os.path.isdir(llvm_build_folder):
            os.mkdir(llvm_build_folder)

        proc = subprocess.Popen([cmake_path, "-G", vsbuild, "-DCMAKE_INSTALL_PREFIX=" +
                                 source_folder, "-DLLVM_TARGETS_TO_BUILD=X86",
                                 "-DLLVM_INCLUDE_EXAMPLES=OFF", "-DLLVM_INCLUDE_TESTS=OFF",
                                 "-DCMAKE_BUILD_TYPE=Release", llvm_src_folder],
                                stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                                cwd=llvm_build_folder)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

        processor_count = os.environ["NUMBER_OF_PROCESSORS"]
        if not processor_count or not processor_count.isdigit():
            processor_count = "4"

        proc = subprocess.Popen([cmake_path, "--build", ".", "--config", "Release", "--target",
                                 "install", "--maxcpucount:" + processor_count,
                                 "/p:BuildInParallel=true"], stdout=subprocess.PIPE,
                                stderr=subprocess.STDOUT, cwd=llvm_build_folder)

        output = proc.communicate()[0]
        if proc.returncode != 0:
            print(output)
            return False

    return True

def install_osx_deps():
    """
    Installs the requires OSX packages.
    """

    # search for the brew executable
    brew_path = spawn.find_executable("brew")
    if brew_path is None:
        print("Brew could not be found! Aborting...")
        return False

    # make sure coreutils is installed
    process = subprocess.Popen([brew_path, "ls", "--versions", "coreutils"],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    process.communicate()
    if process.returncode != 0:
        print("Installing package: coreutils")
        process = subprocess.Popen([brew_path, "install", "coreutils"],
                                   stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = process.communicate()[0]
        if process.returncode != 0:
            print(output)
            return False

    # get the remaining tools
    executable_list = ["wget", "git", "cmake"]
    for executable in executable_list:
        if not spawn.find_executable(executable) is None:
            continue

        print("Installing package: " + executable)
        process = subprocess.Popen([brew_path, "install", executable],
                                   stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

        output = process.communicate()[0]
        if process.returncode != 0:
            print(output)
            return False

    return True

def install_dependencies():
    """
    Installs the required dependencies for the system in use
    """

    # build the follow function name:
    #     install_linux_<distribution-name>_deps
    #     install_windows_deps
    #     install_osx_deps

    platform_type = get_platform_type()
    if platform_type == "unknown":
        print("Unknown platform type! Aborting...")
        return False

    platform_handler_name = "install_" + platform_type
    if platform_type == "linux":
        platform_handler_name = platform_handler_name + "_" + get_linux_distribution_name()

    platform_handler_name = platform_handler_name + "_deps"

    # now that we have a function name, see if we have an implementation we can call
    if platform_handler_name not in globals():
        print("The following platform is not supported: " + platform_type)

    platform_handler = globals()[platform_handler_name]
    exit_status = platform_handler()

    if platform_type == "linux" or platform_type == "osx":
        subprocess.call(["sudo", "-K"])

    return exit_status

def main():
    """
    This function will install the required dependencies and install mcsema
    """

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
        platform_type = get_platform_type()
        if platform_type == "linux" or platform_type == "osx":
            install_prefix = "/usr"

        elif platform_type == "windows":
            install_prefix = os.path.join("C:\\", "mcsema")

        else:
            print("Unrecognized platform. Aborting...")
            return False

    print("Install prefix: " + install_prefix)

    if not os.path.isdir("mcsema_build"):
        os.mkdir("mcsema_build")

    mcsema_build_folder = os.path.realpath("mcsema_build")

    print("Build folder: " + mcsema_build_folder)

    cmake_path = get_cmake_path()
    if cmake_path is None:
        print("Failed to locate cmake")
        return False

    print("CMake path: " + cmake_path)

    # todo: add windows variables
    # todo: ubuntu should use the pre-built tarball
    print("Configuring McSema...")

    source_folder = os.path.realpath(".")
    process = subprocess.Popen([cmake_path, "-DCMAKE_BUILD_TYPE=RelWithDebInfo",
                                "-DCMAKE_VERBOSE_MAKEFILE=True",
                                "-DCMAKE_INSTALL_PREFIX=" + install_prefix, source_folder],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               cwd=mcsema_build_folder)

    output = process.communicate()[0]
    if process.returncode != 0:
        print(output)
        return False

    print("Building McSema...")
    process = subprocess.Popen([cmake_path, "--build", ".", "--", "-j", "4"],
                               stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               cwd=mcsema_build_folder)

    output = process.communicate()[0]
    if process.returncode != 0:
        print(output)
        return False

    print("Installing McSema...")

    cmake_command = []

    platform_type = get_platform_type()
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
