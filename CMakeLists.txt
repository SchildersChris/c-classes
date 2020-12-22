cmake_minimum_required(VERSION 3.16)
project(classes C)

set(CMAKE_C_STANDARD 11)

add_executable(classes main.c test.h test.c)