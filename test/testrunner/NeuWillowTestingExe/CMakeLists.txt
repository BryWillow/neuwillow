cmake_minimum_required(
VERSION 3.30)

set(This NeuWillowTestingExe)

project(NeuWillowTestingExe)

set(Sources
  ExampleTests.cpp)

add_executable(NeuWillowTestingExe ExampleTests.cpp)

target_link_libraries(NeuWillowTestingExe PUBLIC 
  gtest_main
  NeuWillowTestLib
  )

add_test(
  NAME $(This)
  COMMAND $(This)
)
