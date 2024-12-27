cmake_minimum_required(VERSION 3.30)

project(neuwillowTests)

# It would be great to do this dynamically, avoiding GLOB.
# TODO: Investigate other solutions.
set(SOURCES
    ./dendrite_tests.cpp
)

add_executable(neuwillow ${SOURCES})

target_include_directories(neuwillow
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include)
