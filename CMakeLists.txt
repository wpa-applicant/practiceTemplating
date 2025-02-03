cmake_minimum_required(VERSION 3.22)
project(practiceThreading LANGUAGES CXX)

add_executable(basic basic.cpp)

set_property(TARGET basic PROPERTY CXX_STANDARD 20)