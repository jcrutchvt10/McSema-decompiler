cmake_minimum_required (VERSION 3.2)
project(x86_bitcode BC)

add_runtime(mcsema_semantics_x86 SOURCES "FXAM.cpp" ADDRESS_SIZE 32)
target_compile_options(mcsema_semantics_x86 PRIVATE "-m32")
target_include_directories(mcsema_semantics_x86 PRIVATE "${CMAKE_SOURCE_DIR}")

add_runtime(mcsema_semantics_amd64 SOURCES "FXAM.cpp" ADDRESS_SIZE 64)
target_compile_options(mcsema_semantics_amd64 PRIVATE "-m64")
target_include_directories(mcsema_semantics_amd64 PRIVATE "${CMAKE_SOURCE_DIR}")

install(TARGETS mcsema_semantics_x86 mcsema_semantics_amd64 DESTINATION "share/mcsema/bitcode")
