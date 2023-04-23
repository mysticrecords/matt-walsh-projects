cmake_minimum_required(VERSION 3.20)
project(Section18.2)
add_executable(Section_18.2_Challenge
                main.cpp
                Account.h
                Account.cpp
                Account_Util.h
                Account_Util.cpp
                Savings_Account.h
                Savings_Account.cpp
                Checking_Account.h
                Checking_Account.cpp
                Trust_Account.h
                Trust_Account.cpp
                I_Printable.h
                I_Printable.cpp
                IllegalBalanceException.h
                InsufficentFundsException.h)

enable_testing()

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

set(CMAKE_CXX_FLAGS "-std=c++14")