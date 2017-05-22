import sys
import platform
import subprocess
import argparse
import os
from distutils import spawn

import utils

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
