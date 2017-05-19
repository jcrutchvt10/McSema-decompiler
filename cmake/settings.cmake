list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(GetGitRevisionDescription)

# default build type
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "RelWithDebInfo")
endif ()

# overwrite the default install prefix
if ("${CMAKE_INSTALL_PREFIX}" STREQUAL "/usr/local")
    set(CMAKE_INSTALL_PREFIX "/usr")

elseif ("${CMAKE_INSTALL_PREFIX}" STREQUAL "c:/Program Files")
    set(CMAKE_INSTALL_PREFIX "C:/mcsema")
endif ()

message(STATUS "Install prefix: ${CMAKE_INSTALL_PREFIX}")

#
# compiler and linker flags
#

# enable c++11 for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# add the BC language handler used to compile bitcode
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/BCCompiler)

# warnings and compiler settings (todo: add -Wall, -Wextra, -Wconversion)
set(GLOBAL_CXXWARNINGS "-pedantic -Wno-unused-parameter -Wno-c++98-compat -Wno-unreachable-code-return -Wno-nested-anon-types -Wno-extended-offsetof -Wno-gnu-anonymous-struct -Wno-gnu-designator -Wno-variadic-macros -Wno-gnu-zero-variadic-macro-arguments -Wno-gnu-statement-expression -Wno-return-type-c-linkage -Wno-c99-extensions -Wno-ignored-attributes -Wno-unused-local-typedef")
set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -Wno-unknown-warning-option ${GLOBAL_CXXWARNINGS} -fPIC -fno-omit-frame-pointer -fvisibility-inlines-hidden -fno-asynchronous-unwind-tables")

# debug symbols
if (CMAKE_BUILD_TYPE STREQUAL "Debug" OR CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -gdwarf-2 -g3")
endif ()

# optimization flags and definitions
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -O0")
else ()
    set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -O3")
    list(APPEND GLOBAL_DEFINITIONS "NDEBUG")
endif ()

#
# libraries
#

if (DEFINED ENV{TRAILOFBITS_LIBRARIES})
    set(LIBRARY_REPOSITORY_ROOT $ENV{TRAILOFBITS_LIBRARIES})
    include("${LIBRARY_REPOSITORY_ROOT}/cmake/repository.cmake")

    if (NOT DEFINED MCSEMA_SETTINGS_SUPPRESS_MESSAGE)
        message(STATUS "Using the following library repository: ${LIBRARY_REPOSITORY_ROOT}")
    endif ()
    
else ()
    if (NOT DEFINED MCSEMA_SETTINGS_SUPPRESS_MESSAGE)
        message(STATUS "Using system libraries")
    endif ()
endif ()

set(MCSEMA_SETTINGS_SUPPRESS_MESSAGE True)
