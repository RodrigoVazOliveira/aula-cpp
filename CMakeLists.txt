cmake_minimum_required(VERSION 4.2)
project(cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(cpp
        args.cpp
        buble_sort.cpp
        pessoa.hpp
        pessoas_static.cpp
        ponteiros.cpp
        read_names.cpp)
