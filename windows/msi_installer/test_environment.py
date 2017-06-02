#!/usr/bin/env python2

import sys
import subprocess
from distutils import spawn

def is_protobuf_installed():
    try:
        from google import protobuf
        return True

    except Exception:
        return False

def install_protobuf():
    if is_protobuf_installed():
        return [True, ""]

    print("Installing protobuf...")
    pip_parameters = ["C:\\Python27\\Scripts\\pip2.exe", "install", "protobuf"]
    process = subprocess.Popen(pip_parameters, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

    pip_output = process.communicate()[0]
    result = [process.returncode == 0, pip_output]
    return result

def is_mcsemadisass_installed():
    try:
        from mcsema_disass import ida
        return True

    except Exception:
        return False

def install_mcsemadisass():
    if is_mcsemadisass_installed():
        return [True, ""]

    print("Installing mcsema-disass...")
    pip_parameters = ["C:\\Python27\\python.exe", "setup.py", "install"]
    process = subprocess.Popen(pip_parameters, stdout=subprocess.PIPE, stderr=subprocess.STDOUT,
                               cwd="C:\\mcsema\\share\\mcsema\\ida_plugin_installer")

    pip_output = process.communicate()[0]
    result = [process.returncode == 0, pip_output]
    return result

def main():
    print("Testing your McSema installation...")

    if spawn.find_executable("pip2.exe") is None:
        print("The C:\\Python27\\Scripts folder is not inside the PATH! Please correct this!")
        return None

    print(" > Searching for protobuf...")
    output = install_protobuf()
    if not output[0]:
        print("Failed to install protobuf. PIP output follows:")
        print(output[1])
        return False

    print(" > Searching for mcsema-disass...")
    output = install_mcsemadisass()
    if not output[0]:
        print("Failed to install mcsema-disass. Output follows:")
        print(output[1])

    raw_input("\nPress the return key to quit...")
    return True

if __name__ == "__main__":
    if main():
        sys.exit(0)
    else:
        sys.exit(1)
