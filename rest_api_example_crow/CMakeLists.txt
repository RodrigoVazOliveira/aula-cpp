cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER clang++)
include_directories(.)


project(RestApi VERSION 0.0.1)

find_package(Crow REQUIRED)

add_executable(rest_api main.cpp)


target_compile_options(rest_api PRIVATE
    -Wall
    -Wextra
)

