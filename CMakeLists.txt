# cmake_minimum_required(VERSION <specify CMake version here>)
project(C C)

set(CMAKE_C_STANDARD 99)

add_executable(C Answer/Homework2_Main.c Answer/Homework2_MyMath.c Answer/Homework2_MyMath.h)