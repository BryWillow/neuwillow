cmake_minimum_required(VERSION 3.10)

project(NeuWillow VERSION 0.1.0 LANGUAGES C CXX)

file (GLOB_RECURSE NeuWillow_SOURCES CONFIGURE_DEPENDS "*.cpp")
file (GLOB_RECURSE NeuWillow_HEADERS CONFIGURE_DEPENDS "include/*.hpp")

set (NeuWillow_INCLUDE_DIRS "")
foreach (_headerFile ${NeuWillow_HEADERS})
    get_filename_component(_dir ${_headerFile} PATH)
    list (APPEND NeuWillow_INCLUDE_DIRS ${_dir})
endforeach()
list (REMOVE_DUPLICATES NeuWillow_INCLUDE_DIRS)

add_executable(NeuWillow ${NeuWillow_SOURCES})
target_include_directories(NeuWillow PRIVATE ${NeuWillow_INCLUDE_DIRS})