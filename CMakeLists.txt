cmake_minimum_required(VERSION 2.8.12)
project(antlr3c C CXX)

set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11 -g -fPIC")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -fPIC")

file(GLOB_RECURSE SRC_CORE libantlr3c-3.4/include/*.h
    libantlr3c-3.4/src/*.c)
file(GLOB_RECURSE SRC_DEMO etc/everywhere/expr_cpp/*.h
    etc/everywhere/expr_cpp/*.c
    etc/everywhere/expr_cpp/*.cpp
    )
file(GLOB_RECURSE SRC_DEMO2 etc/everywhere/stream_sql/*.h
    etc/everywhere/stream_sql/*.c
    etc/everywhere/stream_sql/*.cpp
    )

include_directories(libantlr3c-3.4/include)

add_library(antlr3c
    ${SRC_CORE}
    )
add_executable(antlr3c_test
    ${SRC_DEMO}
    )
target_link_libraries(antlr3c_test PUBLIC antlr3c)
# demo2
add_executable(stream_sql
    ${SRC_DEMO2}
    )
target_link_libraries(stream_sql PUBLIC antlr3c)
