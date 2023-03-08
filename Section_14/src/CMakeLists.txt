cmake_minimum_required(VERSION 3.20)
project(Section_14)
add_executable(Section_14 
                main.cpp
                MyString.h
                MyString.cpp)

enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-std=c++11")