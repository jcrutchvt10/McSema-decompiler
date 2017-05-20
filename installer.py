#!/usr/bin/env python2

import sys
import platform
import subprocess
from distutils import spawn

def get_platform_type():
    """
    Returns the platform type (linux, windows, osx, unknown).
    """

    if sys.platform == "linux" or sys.platform == "linux2":
        return "linux"

    elif platform == "darwin":
        return "osx"

    elif platform == "win32":
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

    return True

def install_windows_deps():
    """
    Installs the requires Windows components.
    """
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
    if not install_dependencies():
        print("Failed to install the system dependencies. Exiting...")
        return False

    return True

if __name__ == "__main__":
    if main():
        sys.exit(0)
    else:
        sys.exit(1)
