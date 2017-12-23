cmake_minimum_required(VERSION 3.8)
project(z_buffer)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        main.cpp
        struct.cpp
        struct.h)

add_executable(z_buffer ${SOURCE_FILES})