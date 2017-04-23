list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(GetGitRevisionDescription)

# default build type
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "RelWithDebInfo")
endif ()

#
# compiler and linker flags
#

# enable c++11 for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# warnings and compiler settings
set(PROJECT_CXXWARNINGS "-Wall -Wextra -Werror -Wconversion -pedantic -Wno-unused-parameter -Wno-c++98-compat -Wno-unreachable-code-return -Wno-nested-anon-types -Wno-extended-offsetof -Wno-gnu-anonymous-struct -Wno-gnu-designator -Wno-variadic-macros -Wno-gnu-zero-variadic-macro-arguments -Wno-gnu-statement-expression -Wno-return-type-c-linkage -Wno-c99-extensions -Wno-ignored-attributes -Wno-unused-local-typedef")
set(PROJECT_CXXFLAGS "${PROJECT_CXXFLAGS} -Wno-unknown-warning-option ${PROJECT_CXXWARNINGS} -fPIC -fno-omit-frame-pointer -fvisibility-inlines-hidden -fno-exceptions -fno-asynchronous-unwind-tables -fno-rtti")

# debug symbols
if (CMAKE_BUILD_TYPE STREQUAL "Debug" OR CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
    set(PROJECT_CXXFLAGS "${PROJECT_CXXFLAGS} -gdwarf-2 -g3")
endif ()

# optimization flags and definitions
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(PROJECT_CXXFLAGS "${PROJECT_CXXFLAGS} -O0")
else ()
    set(PROJECT_CXXFLAGS "${PROJECT_CXXFLAGS} -O3")
    list(APPEND PROJECT_DEFINITIONS "NDEBUG")
endif ()

#
# libraries
#

if (DEFINED ENV{TRAILOFBITS_LIBRARIES})
    set(LIBRARY_REPOSITORY_ROOT $ENV{TRAILOFBITS_LIBRARIES})
    include("${LIBRARY_REPOSITORY_ROOT}/cmake/repository.cmake")

    if (${MCSEMA_SETTINGS_SUPPRESS_MESSAGE})
        message(STATUS "Using the following library repository: ${LIBRARY_REPOSITORY_ROOT}")
    endif ()
    
else ()
    if (${MCSEMA_SETTINGS_SUPPRESS_MESSAGE})
        message(STATUS "Using system libraries")
    endif ()
endif ()

set(MCSEMA_SETTINGS_SUPPRESS_MESSAGE True)
