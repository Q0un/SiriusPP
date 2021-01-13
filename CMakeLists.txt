cmake_minimum_required(VERSION 3.17)
project(SiriusPP)

set(CMAKE_CXX_STANDARD 20)

add_executable(SiriusPP main.cpp rule.cpp rule.h string_util.cpp string_util.h natural_algorithm.cpp natural_algorithm.h)
add_subdirectory(Google_tests)