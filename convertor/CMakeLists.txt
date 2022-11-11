cmake_minimum_required(VERSION 3.18)

project(convertor2)

add_executable(convertor2 convertor2.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

target_compile_features(convertor2 PUBLIC cxx_std_17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)