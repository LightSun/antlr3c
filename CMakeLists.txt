cmake_minimum_required(VERSION 2.8.12)
project(antlr3c C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -g -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fPIC")

file(GLOB_RECURSE SRC_CORE libantlr3c-3.4/include/*.h
    libantlr3c-3.4/src/*.c)
file(GLOB_RECURSE SRC_DEMO etc/everywhere/*.h
    etc/everywhere/*.c
    etc/everywhere/*.cpp
    )
include_directories(libantlr3c-3.4/include)

add_library(antlr3c
    ${SRC_CORE}
    )
add_executable(antlr3c_test
    ${SRC_DEMO}
    )
target_link_libraries(antlr3c_test PUBLIC antlr3c)
