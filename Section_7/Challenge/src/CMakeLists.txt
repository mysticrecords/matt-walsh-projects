cmake_minimum_required(VERSION 3.20)
project(Section_7)
add_executable(Section_7 section7.cpp)
add_executable(Section_7_main main.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-std=c++11")