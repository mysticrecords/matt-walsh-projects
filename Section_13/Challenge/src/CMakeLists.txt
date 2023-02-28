cmake_minimum_required(VERSION 3.20)
project(Section_13)
add_executable(Section_13 
                main.cpp
                Movie.cpp
                Movie.h
                Movies.cpp
                Movies.h)

include_directories(src)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-std=c++11")