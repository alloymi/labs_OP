cmake_minimum_required(VERSION 3.26)
project(labs_OP)

set(CMAKE_CXX_STANDARD 23)

add_executable(labs_OP_1 lab1.cpp
        lab1_header.h
        1.cpp
        lab3.2.cpp)

add_executable(labs_OP_2 lab2.1.cpp
        lab2.2.cpp
        lab2_header.h)

add_executable(labs_OP_3 lab3.1.cpp
        lab3_header.h)