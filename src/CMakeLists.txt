cmake_minimum_required(VERSION 3.10)
project(NeuWillow VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(NeuWillow NeuWillow.cpp)

set_property(TARGET NeuWillow PROPERTY CXX_STANDARD 17)