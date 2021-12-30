cmake_minimum_required(VERSION 3.21)
project(data_structures_using_c C)

set(CMAKE_C_STANDARD 17)

add_executable(chapter1 src/chapter1.c)
target_link_libraries(chapter1 m)
