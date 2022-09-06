cmake_minimum_required(VERSION 3.23)
project(DSA_Algorithm)

set(CMAKE_CXX_STANDARD 20)

add_executable(DSA_Algorithm src/main.cpp src/Bob.cpp hdr/Bob.h src/Alice.cpp hdr/Alice.h)
