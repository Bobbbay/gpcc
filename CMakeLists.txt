# cmake_minimum_required(VERSION <specify CMake version here>)
project(gpcc C)

set(CMAKE_C_STANDARD 99)

add_executable(gpcc main.c gencrypto.h time.h validate.h rawMode.h)
