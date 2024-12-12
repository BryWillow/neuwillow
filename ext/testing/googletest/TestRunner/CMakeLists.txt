cmake_minimum_required(VERSION 3.31.1)

project(TestRunner C CXX)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 23)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

enable_testing()

add_subdirectory(TestRunner)

set(SOURCES
  ExampleTests.cpp
)

add_executable($(SOURCES))

target_link_libraries($(TestRunnerLib PUBLIC  )
  gtest_main
  TestRunnerLib
)

add_test(
  NAME TestRunnerLib
  COMMAND NeuWillowTests
)
