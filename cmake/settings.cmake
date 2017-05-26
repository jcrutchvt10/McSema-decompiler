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

# enable c++11 for all targets
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# add the BC language handler used to compile bitcode
list(APPEND CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/BCCompiler)

# warnings and compiler settings
if ("${CMAKE_CXX_COMPILER}" MATCHES "cl.exe")
    set(GLOBAL_CXXFLAGS
        /nologo
        /DGOOGLE_PROTOBUF_NO_RTTI
        /W3
        /wd4141 # Suppress ''modifier' : used more than once' (because of __forceinline combined with inline)
        /wd4146 # Suppress 'unary minus operator applied to unsigned type, result still unsigned'
        /wd4180 # Suppress 'qualifier applied to function type has no meaning; ignored'
        /wd4244 # Suppress ''argument' : conversion from 'type1' to 'type2', possible loss of data'
        /wd4258 # Suppress ''var' : definition from the for loop is ignored; the definition from the enclosing scope is used'
        /wd4267 # Suppress ''var' : conversion from 'size_t' to 'type', possible loss of data'
        /wd4291 # Suppress ''declaration' : no matching operator delete found; memory will not be freed if initialization throws an exception'
        /wd4345 # Suppress 'behavior change: an object of POD type constructed with an initializer of the form () will be default-initialized'
        /wd4351 # Suppress 'new behavior: elements of array 'array' will be default initialized'
        /wd4355 # Suppress ''this' : used in base member initializer list'
        /wd4456 # Suppress 'declaration of 'var' hides local variable'
        /wd4457 # Suppress 'declaration of 'var' hides function parameter'
        /wd4458 # Suppress 'declaration of 'var' hides class member'
        /wd4459 # Suppress 'declaration of 'var' hides global declaration'
        /wd4503 # Suppress ''identifier' : decorated name length exceeded, name was truncated'
        /wd4624 # Suppress ''derived class' : destructor could not be generated because a base class destructor is inaccessible'
        /wd4722 # Suppress 'function' : destructor never returns, potential memory leak
        /wd4800 # Suppress ''type' : forcing value to bool 'true' or 'false' (performance warning)'
        /wd4100 # Suppress 'unreferenced formal parameter'
        /wd4127 # Suppress 'conditional expression is constant'
        /wd4512 # Suppress 'assignment operator could not be generated'
        /wd4505 # Suppress 'unreferenced local function has been removed'
        /wd4610 # Suppress '<class> can never be instantiated'
        /wd4510 # Suppress 'default constructor could not be generated'
        /wd4702 # Suppress 'unreachable code'
        /wd4245 # Suppress 'signed/unsigned mismatch'
        /wd4706 # Suppress 'assignment within conditional expression'
        /wd4310 # Suppress 'cast truncates constant value'
        /wd4701 # Suppress 'potentially uninitialized local variable'
        /wd4703 # Suppress 'potentially uninitialized local pointer variable'
        /wd4389 # Suppress 'signed/unsigned mismatch'
        /wd4611 # Suppress 'interaction between '_setjmp' and C++ object destruction is non-portable'
        /wd4805 # Suppress 'unsafe mix of type <type> and type <type> in operation'
        /wd4204 # Suppress 'nonstandard extension used : non-constant aggregate initializer'
        /wd4577 # Suppress 'noexcept used with no exception handling mode specified; termination on exception is not guaranteed'
        /wd4091 # Suppress 'typedef: ignored on left of '' when no variable is declared'
            # C4592 is disabled because of false positives in Visual Studio 2015
            # Update 1. Re-evaluate the usefulness of this diagnostic with Update 2.
        /wd4592 # Suppress ''var': symbol will be dynamically initialized (implementation limitation)

        # Ideally, we'd like this warning to be enabled, but MSVC 2013 doesn't
        # support the 'aligned' attribute in the way that clang sources requires (for
        # any code that uses the LLVM_ALIGNAS macro), so this is must be disabled to
        # avoid unwanted alignment warnings.
        # When we switch to requiring a version of MSVC that supports the 'alignas'
        # specifier (MSVC 2015?) this warning can be re-enabled.
        # /wd4324 # Suppress 'structure was padded due to __declspec(align())'
     )

    list(APPEND GLOBAL_DEFINITIONS "_CRT_SECURE_NO_DEPRECATE")
    list(APPEND GLOBAL_DEFINITIONS "_CRT_SECURE_NO_WARNINGS")
    list(APPEND GLOBAL_DEFINITIONS "_CRT_NONSTDC_NO_DEPRECATE")
    list(APPEND GLOBAL_DEFINITIONS "_CRT_NONSTDC_NO_WARNINGS")
    list(APPEND GLOBAL_DEFINITIONS "_SCL_SECURE_NO_DEPRECATE")
    list(APPEND GLOBAL_DEFINITIONS "_SCL_SECURE_NO_WARNINGS")
else ()
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
