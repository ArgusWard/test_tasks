cmake_minimum_required(VERSION 3.18)

project(multiplicator)

add_executable(multiplicator multiplicator.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

target_compile_features(multiplicator PUBLIC cxx_std_17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)