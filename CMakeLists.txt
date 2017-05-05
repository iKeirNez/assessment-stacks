cmake_minimum_required(VERSION 3.6)
project(encapsulation)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES stack.h array_stack.h main.cpp)
add_executable(encapsulation main.cpp)