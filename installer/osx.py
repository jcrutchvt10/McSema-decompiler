import sys
import platform
import subprocess
import argparse
import os
from distutils import spawn

import utils

def install_osx_deps():
    """
    Installs the required OSX packages.
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
