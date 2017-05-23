cmake_minimum_required(VERSION 3.2)

if (NOT WIN32)
    message(FATAL_ERROR "You should install Protobuf from your package manager!")
endif ()

if (NOT PROTOBUF_INSTALL_DIR)
    message(FATAL_ERROR "The PROTOBUF_INSTALL_DIR CMake variable is not defined!")
endif ()

set(Protobuf_FOUND True)
set(Protobuf_VERSION "2.6.1")
set(Protobuf_INCLUDE_DIR "${PROTOBUF_INSTALL_DIR}/include")
set(Protobuf_LIBRARIES "${PROTOBUF_INSTALL_DIR}/lib/protobuf.lib")
set(Protobuf_PROTOC_LIBRARIES "${PROTOBUF_INSTALL_DIR}/lib/protoc.lib")
set(Protobuf_PROTOC_EXECUTABLE "${PROTOBUF_INSTALL_DIR}/bin/protoc.exe")

mark_as_advanced(Protobuf_FOUND)
mark_as_advanced(Protobuf_VERSION)
mark_as_advanced(Protobuf_INCLUDE_DIR)
mark_as_advanced(Protobuf_LIBRARIES)
mark_as_advanced(Protobuf_PROTOC_LIBRARIES)
mark_as_advanced(Protobuf_PROTOC_EXECUTABLE)

function(PROTOBUF_GENERATE_CPP SRCS HDRS)
  if(NOT ARGN)
    message(SEND_ERROR "Error: PROTOBUF_GENERATE_CPP() called without any proto files")
    return()
  endif()

  if(PROTOBUF_GENERATE_CPP_APPEND_PATH)
    # Create an include path for each file specified
    foreach(FIL ${ARGN})
      get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
      get_filename_component(ABS_PATH ${ABS_FIL} PATH)
      list(FIND _protobuf_include_path ${ABS_PATH} _contains_already)
      if(${_contains_already} EQUAL -1)
          list(APPEND _protobuf_include_path -I ${ABS_PATH})
      endif()
    endforeach()
  else()
    set(_protobuf_include_path -I ${CMAKE_CURRENT_SOURCE_DIR})
  endif()

  if(DEFINED PROTOBUF_IMPORT_DIRS AND NOT DEFINED Protobuf_IMPORT_DIRS)
    set(Protobuf_IMPORT_DIRS "${PROTOBUF_IMPORT_DIRS}")
  endif()

  if(DEFINED Protobuf_IMPORT_DIRS)
    foreach(DIR ${Protobuf_IMPORT_DIRS})
      get_filename_component(ABS_PATH ${DIR} ABSOLUTE)
      list(FIND _protobuf_include_path ${ABS_PATH} _contains_already)
      if(${_contains_already} EQUAL -1)
          list(APPEND _protobuf_include_path -I ${ABS_PATH})
      endif()
    endforeach()
  endif()

  set(${SRCS})
  set(${HDRS})
  foreach(FIL ${ARGN})
    get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
    get_filename_component(FIL_WE ${FIL} NAME_WE)
    if(NOT PROTOBUF_GENERATE_CPP_APPEND_PATH)
      get_filename_component(FIL_DIR ${FIL} DIRECTORY)
      if(FIL_DIR)
        set(FIL_WE "${FIL_DIR}/${FIL_WE}")
      endif()
    endif()

    list(APPEND ${SRCS} "${CMAKE_CURRENT_BINARY_DIR}/${FIL_WE}.pb.cc")
    list(APPEND ${HDRS} "${CMAKE_CURRENT_BINARY_DIR}/${FIL_WE}.pb.h")

    add_custom_command(
      OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${FIL_WE}.pb.cc"
             "${CMAKE_CURRENT_BINARY_DIR}/${FIL_WE}.pb.h"
      COMMAND  ${Protobuf_PROTOC_EXECUTABLE}
      ARGS --cpp_out  ${CMAKE_CURRENT_BINARY_DIR} ${_protobuf_include_path} ${ABS_FIL}
      DEPENDS ${ABS_FIL} ${Protobuf_PROTOC_EXECUTABLE}
      COMMENT "Running C++ protocol buffer compiler on ${FIL}"
      VERBATIM )
  endforeach()

  set_source_files_properties(${${SRCS}} ${${HDRS}} PROPERTIES GENERATED TRUE)
  set(${SRCS} ${${SRCS}} PARENT_SCOPE)
  set(${HDRS} ${${HDRS}} PARENT_SCOPE)
endfunction()

function(PROTOBUF_GENERATE_PYTHON SRCS)
  if(NOT ARGN)
    message(SEND_ERROR "Error: PROTOBUF_GENERATE_PYTHON() called without any proto files")
    return()
  endif()

  if(PROTOBUF_GENERATE_CPP_APPEND_PATH)
    # Create an include path for each file specified
    foreach(FIL ${ARGN})
      get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
      get_filename_component(ABS_PATH ${ABS_FIL} PATH)
      list(FIND _protobuf_include_path ${ABS_PATH} _contains_already)
      if(${_contains_already} EQUAL -1)
          list(APPEND _protobuf_include_path -I ${ABS_PATH})
      endif()
    endforeach()
  else()
    set(_protobuf_include_path -I ${CMAKE_CURRENT_SOURCE_DIR})
  endif()

  if(DEFINED PROTOBUF_IMPORT_DIRS AND NOT DEFINED Protobuf_IMPORT_DIRS)
    set(Protobuf_IMPORT_DIRS "${PROTOBUF_IMPORT_DIRS}")
  endif()

  if(DEFINED Protobuf_IMPORT_DIRS)
    foreach(DIR ${Protobuf_IMPORT_DIRS})
      get_filename_component(ABS_PATH ${DIR} ABSOLUTE)
      list(FIND _protobuf_include_path ${ABS_PATH} _contains_already)
      if(${_contains_already} EQUAL -1)
          list(APPEND _protobuf_include_path -I ${ABS_PATH})
      endif()
    endforeach()
  endif()

  set(${SRCS})
  foreach(FIL ${ARGN})
    get_filename_component(ABS_FIL ${FIL} ABSOLUTE)
    get_filename_component(FIL_WE ${FIL} NAME_WE)
    if(NOT PROTOBUF_GENERATE_CPP_APPEND_PATH)
      get_filename_component(FIL_DIR ${FIL} DIRECTORY)
      if(FIL_DIR)
        set(FIL_WE "${FIL_DIR}/${FIL_WE}")
      endif()
    endif()

    list(APPEND ${SRCS} "${CMAKE_CURRENT_BINARY_DIR}/${FIL_WE}_pb2.py")
    add_custom_command(
      OUTPUT "${CMAKE_CURRENT_BINARY_DIR}/${FIL_WE}_pb2.py"
      COMMAND  ${Protobuf_PROTOC_EXECUTABLE} --python_out ${CMAKE_CURRENT_BINARY_DIR} ${_protobuf_include_path} ${ABS_FIL}
      DEPENDS ${ABS_FIL} ${Protobuf_PROTOC_EXECUTABLE}
      COMMENT "Running Python protocol buffer compiler on ${FIL}"
      VERBATIM )
  endforeach()

  set(${SRCS} ${${SRCS}} PARENT_SCOPE)
endfunction()
