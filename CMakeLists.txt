cmake_minimum_required(VERSION 2.8.12)
project(main_project)

find_package(PythonInterp REQUIRED)
include_directories(${PYTHON_INCLUDE_DIRS})

add_subdirectory(pybind11)
pybind11_add_module(main_module src/main_file.cpp)
pybind11_add_module(other_module src/other_function.cpp)