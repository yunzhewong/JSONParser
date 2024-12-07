cmake_minimum_required(VERSION 3.5.0)
project(JSONParser VERSION 0.1.0 LANGUAGES C CXX)

add_executable(JSONParser external.cpp main.cpp)

include(CTest)
enable_testing()
