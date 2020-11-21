# cmake_minimum_required(VERSION <specify CMake version here>)
project(gpc C)

set(CMAKE_C_STANDARD 99)

add_executable(gpc main.c gencrypto.h time.h validate.h rawMode.h)