#!/usr/bin/env bash

function CompileMcSema
{
    if [ $# -eq 1 ] ; then
        local install_prefix=`realpath "$1"`
    fi

    if [ -d build ] ; then
        rm -rf build || return 1
    fi

    mkdir build || return 1

    local cmake_options="-DCMAKE_VERBOSE_MAKEFILE=True -DCMAKE_CXX_COMPILER=clang++ -DCMAKE_C_COMPILER=clang"
    if [ ! -z "${install_prefix}" ] ; then
        cmake_options="${cmake_options} -DCMAKE_INSTALL_PREFIX=${install_prefix}"
    fi

    ( cd build && cmake ${cmake_options} .. ) || return 1
    ( cd build && make -j `nproc` ) || return 1

    return 0
}

function InstallMcSema
{
    ( cd build && make install ) || return 1

    return 0
}

# installs the required packages for the system in use
# returns 0 in case of success or 1 otherwise
function InstallDependencies
{
  # mac os x packages
  if [[ "$OSTYPE" == "darwin"* ]]; then
    local osx_dependencies="wget git cmake coreutils"

    for osx_dep in ${osx_dependencies[@]} ; do
      # homebrew errors on installing already installed things
      brew outdated ${osx_dep} || brew upgrade ${osx_dep} || brew install ${osx_dep}
    done

    return 0

  # unsupported systems
  elif [[ "$OSTYPE" != "linux-gnu" ]]; then
    return 1
  fi

  # attempt to detect the distribution
  local distribution_name=`cat /etc/issue`

  case "$distribution_name" in
    *Ubuntu*)
      InstallUbuntuPackages
      return $?
    ;;

    *Arch\ Linux*)
      InstallArchLinuxPackages
      return $?
    ;;

    *)
      printf '[x] Failed to install the required dependencies; please make sure the following packages are installed: git, cmake, protobuf, python 2, pip 2, llvm, clang\n'
      return 0
  esac
}

# installs the required packages for ubuntu
# returns 0 in case of success or 1 otherwise
function InstallUbuntuPackages
{
  local required_package_list=(
    'git'
    'cmake'
    'libprotoc-dev'
    'libprotobuf-dev'
    'protobuf-compiler'
    'python2.7'
    'python-pip'
    'llvm-3.8'
    'clang-3.8'
    'realpath'

    # gcc-multilib required only for 32-bit integration tests
    # g++-multilib required to build 32-bit generated code

    'gcc-multilib'
    'g++-multilib'

    # liblzma-dev needed for the xz integration test
    # libpcre3-dev needed for some integration tests
    # libbsd-dev needed for netcat test

    'liblzma-dev'
    'libpcre3-dev'
    'libbsd-dev'
  )

  local installed_package_list=`dpkg -l | tail -n+6 | awk '{ print $2 }'`
  local missing_packages=""

  for required_package in ${required_package_list[@]} ; do
    if [[ ${installed_package_list} == *"$required_package"* ]] ; then
      continue
    fi

    missing_packages="$missing_packages $required_package"
  done

  if [ -z "$missing_packages" ] ; then
    return 0
  fi

  echo "[+] Installing dependencies..."

  sudo apt-get update -qq
  if [ $? -ne 0 ] ; then
    return 1
  fi

  sudo apt-get install -yqq $missing_packages
  if [ $? -ne 0 ] ; then
    return 1
  fi

  return 0
}

# installs the required packages for arch linux
# returns 0 in case of success or 1 otherwise
function InstallArchLinuxPackages
{
  local required_package_list=(
    'git'
    'cmake'
    'protobuf'
    'protobuf-c'
    'python2'
    'python2-pip'
    'clang'
    'llvm'

    # liblzma-dev needed for the xz integration test
    # libpcre3-dev needed for some integration tests
    # libbsd-dev needed for netcat test

    'pcre'
    'libbsd'
    'xz'
  )

  local installed_package_list=`pacman -Q | awk '{ print $1 }'`
  local missing_packages=""

  for required_package in ${required_package_list[@]} ; do
    if [[ ${installed_package_list} == *"$required_package"* ]] ; then
      continue
    fi

    missing_packages="$missing_packages $required_package"
  done

  if [ -z "$missing_packages" ] ; then
    return 0
  fi

  echo "[+] Installing dependencies..."
  sudo pacman -S $missing_packages
  if [ $? -ne 0 ] ; then
    return 1
  fi

  return 0
}

# builds the llvm source code inside the third-party folder
# returns 0 in case of success, or 1 otherwise
function BuildLLVM
{
  DownloadLLVMTarball
  if [ $? -ne 0 ] ; then
    return 1
  fi

  pushd ${BUILD_DIR}

  echo "[x] Building LLVM"
  echo "[x] Additional Options: ${LLVM_CMAKE_OPTIONS}"

  mkdir -p llvm
  pushd llvm

  CC=${CC} \
  CXX=${CXX} \
  CFLAGS="${DEBUG_BUILD_ARGS}" \
  CXXFLAGS="${DEBUG_BUILD_ARGS}" \
    cmake \
      -G "Unix Makefiles" \
      -DCMAKE_INSTALL_PREFIX=${PREFIX} \
      -DCMAKE_BUILD_TYPE=$BUILD_TYPE \
      -DLLVM_TARGETS_TO_BUILD="X86" \
      -DLLVM_INCLUDE_EXAMPLES=OFF \
      -DLLVM_INCLUDE_TESTS=OFF \
      ${LLVM_CMAKE_OPTIONS} \
      ${LLVM_DIR}

  if [ $? -ne 0 ] ; then
    echo "CMake could not generate the makefiles for LLVM"
    return 1
  fi

  make -j${job_count}
  if [ $? -ne 0 ] ; then
    echo "Failed to compile LLVM"
    return 1
  fi

  popd
  popd

  return 0
}

# downloads and extracts the LLVM source tarball
# returns 0 in case of success, or 1 otherwise
function DownloadLLVMTarball
{
  local LLVM_VER=3.8.1

  local llvm_find_package_directive=`cat $DIR/CMakeLists.txt | grep -i find_package | grep LLVM`
  local short_llvm_version=`echo $LLVM_VER | cut -d '.' -f 1-2`

  if [[ "$llvm_find_package_directive" != *"$short_llvm_version"* ]] ; then
    echo "[x] Warning: the main CMakeLists.txt imports a different LLVM version than the one used inside third-party/llvm"
  fi

  if [ -e ${LLVM_DIR}/CMakeLists.txt ] ; then
    if [ -f ${LLVM_DIR}/llvm_version ] ; then
      local local_llvm_version=`cat ${LLVM_DIR}/llvm_version`

      if [ "$LLVM_VER" != "$local_llvm_version" ]; then
        echo "The local LLVM copy differs from the required version"
        echo "Please delete the following folder and re-run the bootstrap script: ${LLVM_DIR}"
        return 1    
      fi
    else

      echo "Warning: the following file could not be found: ${LLVM_DIR}/llvm_version"
      echo "Make sure the tarball you extracted matches the following version: ${LLVM_VER}"
    fi

    return 0
  fi

  # Download and extract LLVM.
  echo "[+] Downloading LLVM.."

  mkdir -p ${LLVM_DIR}
  if [ $? -ne 0 ] ; then
    echo "Failed to create the following folder: ${LLVM_DIR}"
    return 1
  fi

  pushd ${LLVM_DIR}
  FILE=llvm-${LLVM_VER}.src.tar.xz

  # the bootstrap script will stop working if you leave a broken tarball here (connection problems,
  # ctrl+c being pressed, etc..). it is then best to always remove it in case of error

  if [ ! -e ${FILE} ]; then
    wget http://releases.llvm.org/${LLVM_VER}/${FILE}
    if [ $? -ne 0 ] ; then
      rm ${LLVM_DIR}/${FILE}
      return 1
    fi
  fi

  echo "[+] Extracting LLVM.."
  tar xf ${FILE} -C ./ --strip-components=1 
  if [ $? -ne 0 ] ; then
    rm ${LLVM_DIR}/${FILE}
    return 1
  fi

  echo "$LLVM_VER" > llvm_version
  popd

  return 0
}
