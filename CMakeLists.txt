cmake_minimum_required(VERSION 3.15)

#execute_process(
#    COMMAND python -m pylmcf --include
#    OUTPUT_VARIABLE PYLMCF_INCLUDE_DIRS
#    OUTPUT_STRIP_TRAILING_WHITESPACE
#)


project(XXXXXX LANGUAGES CXX)
find_package(Python 3.8
  REQUIRED COMPONENTS Interpreter Development.Module
  OPTIONAL_COMPONENTS Development.SABIModule)
find_package(nanobind REQUIRED CONFIG)

set(CMAKE_CXX_STANDARD 20)

nanobind_add_module(XXXXXX_ext
    NB_STATIC NOMINSIZE
    src/XXXXXX/cpp/XXXXXX/hello.cpp
    src/XXXXXX/cpp/XXXXXX/py_exports.cpp)

target_include_directories(XXXXXX_ext PRIVATE ${PYLMCF_INCLUDE_DIRS})

install(TARGETS XXXXXX_ext LIBRARY DESTINATION XXXXXX)
