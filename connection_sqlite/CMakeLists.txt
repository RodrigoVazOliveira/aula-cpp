cmake_minimum_required(VERSION 3.10)
project(Compressao LANGUAGES CXX)


set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER clang++)

find_package(SQLite3 REQUIRED)
find_package(ZLIB REQUIRED)

add_executable(program main.cpp)

target_link_libraries(program PRIVATE 
    SQLite3::SQLite3
    ZLIB::ZLIB
)

target_compile_options(program PRIVATE
    -Wall
    -Wextra
)
