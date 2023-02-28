cmake_minimum_required(VERSION 3.20)
project(Section_13_2)
add_executable(Section_13 
                main.cpp
                Movie.cpp
                Movie.h
                Movies.cpp
                Movies.h)

enable_testing()
add_subdirectory(src bin)
add_subdirectory(test)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-std=c++11")