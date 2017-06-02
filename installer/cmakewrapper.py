from distutils import spawn
import utils, osx, windows, linux
import os, subprocess, sys

class CMake(object):
    """
    Cross-platform CMake wrapper
    """

    def __init__(self, source_directory, build_directory, windows_arch="None", debug=False):
        """
        Class constructor
        """

        self._platform_type = utils.get_platform_type()

        if self._platform_type == "windows":
            source_directory = source_directory.replace("\\", "/")
            build_directory = build_directory.replace("\\", "/")

        self._source_directory = source_directory
        self._build_directory = build_directory
        self._debug = debug
        self._build_type = ""
        self._install_prefix = ""
        self._generator = None

        self._cmake_path = self._detect_cmake_path()
        if self._cmake_path is None:
            raise Exception("Failed to locate the CMake executable")

        if self._platform_type == "windows":
            if spawn.find_executable("cl.exe") is None:
                raise Exception("The Visual C++ compiler could not be found; please run the script again from the Visual Studio prompt")

            if windows_arch is None or windows_arch not in ["Win32", "Win64"]:
                raise Exception("Unsupported architecture specified. Valid options: Win32 and Win64")

            process = subprocess.Popen(["cl.exe", "/?"], stdout=subprocess.PIPE, stderr=subprocess.STDOUT)

            output = process.communicate()[0]
            if process.returncode != 0:
                raise Exception("Failed to execute the Visual Studio compiler (cl.exe)")

            if "Version 18" in output:
                self._generator = "Visual Studio 12 2013"
                self._windows_llvm_toolchain = "LLVM-vs2013"

            # this should cover both vs2015 and vs2017
            elif "Version 19" in output:
                self._generator = "Visual Studio 14 2015"
                self._windows_llvm_toolchain = "LLVM-vs2014"

            else:
                raise Exception("Unsupported Visual Studio version found")

            # we don't actually need to append Win32; we accept it just for coherence
            if windows_arch == "Win64":
                self._generator = self._generator + " " + windows_arch

    def _detect_cmake_path(self):
        """
        Searches for the CMake executable
        """

        if self._platform_type == "windows":
            cmake_path = spawn.find_executable("cmake.exe")

            if cmake_path is None:
                cmake_path = spawn.find_executable("cmake.exe",
                                                   os.path.join("C:\\", "Program Files",
                                                                "CMake", "bin"))

            if cmake_path is None:
                cmake_path = spawn.find_executable("cmake.exe",
                                                   os.path.join("C:\\", "Program Files (x86)",
                                                                "CMake", "bin"))

        elif self._platform_type in ["linux", "osx", "cygwin"]:
            cmake_path = spawn.find_executable("cmake")

        else:
            cmake_path = None

        return cmake_path

    def _run_cmake(self, parameter_list, working_directory):
        """
        CMake wrapper
        """

        cmake_parameter_list = []

        if self._platform_type in ["linux", "osx"]:
            target_install_state = 0
            use_sudo = False

            for item in parameter_list:
                if target_install_state == 0 and item == "--target":
                    target_install_state = 1
                elif target_install_state == 1 and item == "install":
                    use_sudo = True

            if use_sudo:
                cmake_parameter_list.append("sudo")

        cmake_parameter_list.append(self._cmake_path)
        cmake_parameter_list.extend(parameter_list)

        if self._debug:
            print("Working directory: \"" + working_directory + "\"")
            for item in cmake_parameter_list:
                add_quotes = " " in item
                if add_quotes:
                    sys.stdout.write('"')

                sys.stdout.write(item)
                if add_quotes:
                    sys.stdout.write('"')

                sys.stdout.write(" ")

            sys.stdout.write("\n")

        process = subprocess.Popen(cmake_parameter_list, stdout=subprocess.PIPE,
                                   stderr=subprocess.STDOUT, cwd=working_directory)

        cmake_output = process.communicate()[0]

        result = [process.returncode == 0, cmake_output]
        return result

    def configure(self, install_prefix, build_type="RelWithDebInfo", verbose=True, parameters=None):
        """
        Configures the project
        """

        if build_type not in ["Release", "Debug", "RelWithDebInfo"]:
            sys.stderr.write("Unsupported build type specified. Forcing to 'Release'...")
            build_type = "Release"

        if self._platform_type == "windows" and build_type != "Release":
            sys.stderr.write("When compiling under Windows, debug builds are not supported. Forcing to 'Release'...")
            build_type = "Release"

        self._build_type = build_type
        self._install_prefix = install_prefix

        parameter_list = ["-DCMAKE_BUILD_TYPE=" + self._build_type,
                          "-DCMAKE_INSTALL_PREFIX=" + self._install_prefix]

        if parameters is not None:
            parameter_list.extend(parameters)

        if self._platform_type == "windows":
            parameter_list.append("-G")
            parameter_list.append(self._generator)

            parameter_list.append("-T")
            parameter_list.append(self._windows_llvm_toolchain)
        else:
            parameter_list.append("-DCMAKE_C_COMPILER=clang")
            parameter_list.append("-DCMAKE_CXX_COMPILER=clang++")

        if verbose:
            parameter_list.append("-DCMAKE_VERBOSE_MAKEFILE=True")

        parameter_list.append(self._source_directory)

        return self._run_cmake(parameter_list, self._build_directory)

    def build(self, target=None):
        """
        Builds the whole project or the specified target
        """

        parameter_list = ["--build", ".", "--config", self._build_type]
        
        if target is not None:
            parameter_list.append("--target")
            parameter_list.append(target)

        parameter_list.append("--")

        if self._platform_type == "windows":
            processor_count = os.environ["NUMBER_OF_PROCESSORS"]
            if not processor_count or not processor_count.isdigit():
                processor_count = "4"

            parameter_list.append("/maxcpucount:" + processor_count)
            parameter_list.append("/p:BuildInParallel=true")

        elif self._platform_type in ["linux", "osx", "cygwin"]:
            parameter_list.append("-j")
            parameter_list.append("4")

        else:
            raise Exception("Unsupported system!")

        return self._run_cmake(parameter_list, self._build_directory)

    def install(self):
        """
        Installs the project using the install prefix passed to the constructor
        """

        return self.build(target="install")
