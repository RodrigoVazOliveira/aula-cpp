cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_COMPILER clang++)
include_directories(.)


project(RestApi VERSION 0.0.1)

find_package(Crow REQUIRED)
find_package(libpqxx REQUIRED)

add_executable(rest_api main.cpp api/routes.cpp database/db_books.cpp)


target_link_libraries(rest_api
    PRIVATE
    libpqxx::pqxx
)

target_compile_options(rest_api PRIVATE
    -Wall
    -Wextra
)


