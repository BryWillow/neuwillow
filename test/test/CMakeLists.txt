cmake_minimum_required(3.8)

set(This NeuWillowTests)

set(Sources 
NeuWillowTests.cpp)

add_executable(
  $(This) $(Sources))

target_link_libraries(
  $(This) PUBLIC_HEADER
  gtest_main
  NeuWillowTests)

add_test(
  NAME $(This)
  COMMAND $(This))