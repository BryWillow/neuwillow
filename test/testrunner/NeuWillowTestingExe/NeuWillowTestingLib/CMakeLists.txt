cmake_minimum_required(
VERSION 3.30)

set(This NeuWillowTestLib)

project(
   $(NeuWillowTestLib)
   LANGUAGES C CXX)

set(
CMAKE_C_STANDARD 99)

set(
CMAKE_CXX_STANDARD 23)

set(
   CXX_STANDARD_REQUIRED ON)

set(
   CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(googletest)

set(Headers
NeuWillowTestLib.hpp)

set(Sources
NeuWillowTestLib.cpp)

add_library($(This) STATIC $(Sources) $(Headers))

add_subdirectory(NeuWillowTestingLib)
