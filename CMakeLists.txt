cmake_minimum_required(VERSION 3.14)
project(proj_sample)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(lib/googletest)

include_directories(lib/googletest/googletest/include)
#include_directories(lib/googletest/googlemock/include)
set(SOURCE_FILES main.cpp )
add_executable(proj_sample ${SOURCE_FILES})
target_link_libraries(proj_sample gtest gtest_main  gmock gmock_main)