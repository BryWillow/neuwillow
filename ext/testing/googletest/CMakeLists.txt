cmake_minimum_required(VERSION 3.31.1)

project(TestRunnerLib C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(TestRunnerLib)

add_library(
  TestRunnerLib 
  STATIC 
  TestRunnerLib.cpp 
  TestRunnerLib.hpp)