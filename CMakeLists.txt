cmake_minimum_required(VERSION 3.23)
project(Neural_Networks_Cpp)

set(CMAKE_CXX_STANDARD 17)

add_executable(Neural_Networks_Cpp
        Neural_Networks.cpp
        MLP.h
        MLP.cpp)
