cmake_minimum_required(VERSION 3.2)
project(divisor1)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(divisor1 ${SOURCE_FILES})