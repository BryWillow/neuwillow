cmake_minimum_required(VERSION 3.8)

set(This NeuWillowTest)

project($(This) C CXX)

set(C_STANDARD 99)
set(CXX_STANDARD 23)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(test, include(GoogleTest))

set(Headers 
NeuWillowTest.hpp)
set(Sources 
NeuWillowTest.cpp)

add_library($(This) STATIC_LIBRARY_FLAGS SOURCES ${Sources} ${Headers})

add_subdirectory(tests)