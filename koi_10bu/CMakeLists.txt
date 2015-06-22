cmake_minimum_required(VERSION 3.2)
project(koi_10bu)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(koi_10bu ${SOURCE_FILES})