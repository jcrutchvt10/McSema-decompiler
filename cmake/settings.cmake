list(APPEND CMAKE_MODULE_PATH "${CMAKE_SOURCE_DIR}/cmake")
include(GetGitRevisionDescription)

# default build type
if (WIN32)
    set(CMAKE_BUILD_TYPE Release)
else ()
    if (NOT CMAKE_BUILD_TYPE)
        set(CMAKE_BUILD_TYPE "RelWithDebInfo")
    endif ()
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

# add the BC language handler used to compile bitcode
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/BCCompiler)

# warnings and compiler settings
if (DEFINED WIN32)
    set(GLOBAL_CXXFLAGS "/MD /nologo /W3 /EHsc /wd4141 /wd4146 /wd4180 /wd4244 /wd4258 /wd4267 /wd4291 /wd4345 /wd4351 /wd4355 /wd4456 /wd4457 /wd4458 /wd4459 /wd4503 /wd4624 /wd4722 /wd4800 /wd4100 /wd4127 /wd4512 /wd4505 /wd4610 /wd4510 /wd4702 /wd4245 /wd4706 /wd4310 /wd4701 /wd4703 /wd4389 /wd4611 /wd4805 /wd4204 /wd4577 /wd4091 /wd4592 /wd4324")

    list(APPEND GLOBAL_DEFINITIONS "_CRT_SECURE_NO_DEPRECATE")
    list(APPEND GLOBAL_DEFINITIONS "_CRT_SECURE_NO_WARNINGS")
    list(APPEND GLOBAL_DEFINITIONS "_CRT_NONSTDC_NO_DEPRECATE")
    list(APPEND GLOBAL_DEFINITIONS "_CRT_NONSTDC_NO_WARNINGS")
    list(APPEND GLOBAL_DEFINITIONS "_SCL_SECURE_NO_DEPRECATE")
    list(APPEND GLOBAL_DEFINITIONS "_SCL_SECURE_NO_WARNINGS")
    list(APPEND GLOBAL_DEFINITIONS "GOOGLE_PROTOBUF_NO_RTTI")

else ()
    # enable c++11 for all targets
    set(CMAKE_CXX_STANDARD 11)
    set(CMAKE_CXX_EXTENSIONS OFF)

    set(GLOBAL_CXXWARNINGS "-pedantic -Wno-unused-parameter -Wno-c++98-compat -Wno-unreachable-code-return -Wno-nested-anon-types -Wno-extended-offsetof -Wno-gnu-anonymous-struct -Wno-gnu-designator -Wno-variadic-macros -Wno-gnu-zero-variadic-macro-arguments -Wno-gnu-statement-expression -Wno-return-type-c-linkage -Wno-c99-extensions -Wno-ignored-attributes -Wno-unused-local-typedef")
    set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -Wno-unknown-warning-option ${GLOBAL_CXXWARNINGS} -fPIC -fno-omit-frame-pointer -fvisibility-inlines-hidden -fno-asynchronous-unwind-tables")

    # debug symbols
    if (CMAKE_BUILD_TYPE STREQUAL "Debug" OR CMAKE_BUILD_TYPE STREQUAL "RelWithDebInfo")
        set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -gdwarf-2 -g3")
    endif ()

    # optimization flags
    if (CMAKE_BUILD_TYPE STREQUAL "Debug")
        set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -O0")
    else ()
        set(GLOBAL_CXXFLAGS "${GLOBAL_CXXFLAGS} -O3")
    endif ()
endif ()

# definitions
if (CMAKE_BUILD_TYPE STREQUAL "Debug")
    list(APPEND GLOBAL_DEFINITIONS "DEBUG")
else ()
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
