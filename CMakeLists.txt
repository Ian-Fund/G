cmake_minimum_required(VERSION 3.8)
project(lab_2_27)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Friend.cpp Friend.h list.cpp list.h)
add_executable(lab_2_27 ${SOURCE_FILES})