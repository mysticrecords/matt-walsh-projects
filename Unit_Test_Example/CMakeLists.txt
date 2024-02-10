cmake_minimum_required(VERSION 3.20.0)
set(CMAKE_CXX_STANDARD 17)
project(Unit_Test_Example)
enable_testing()



add_subdirectory(src bin)
add_subdirectory(test)
