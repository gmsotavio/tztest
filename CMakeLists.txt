cmake_minimum_required(VERSION 3.0.0)

project(reboot C)

set(CMAKE_C_COMPILER gcc)
set(CMAKE_EXPORT_COMPILE_COMMANDS 1)
set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_C_STANDARD 99)

add_executable(tztest
src/main.c
)
