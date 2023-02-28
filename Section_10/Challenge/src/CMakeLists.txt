cmake_minimum_required(VERSION 3.20)
project(Section_10)
add_executable(Section_10 main.cpp)
add_executable(LetterPy Letter_Pyramid.cpp)
add_executable(LetterPyExamp LetterPyExamp.cpp)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-std=c++11")