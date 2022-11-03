cmake_minimum_required(VERSION 3.18)

project(tasks_2)

add_executable(task_2 task_2.cpp)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

target_compile_features(task_2 PUBLIC cxx_std_17)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)