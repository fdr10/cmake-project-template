cmake_minimum_required(VERSION 3.22)
project(lib2)
include_directories(include)


add_library(${PROJECT_NAME} 
  lib2.cpp 
)
target_include_directories(${PROJECT_NAME} PUBLIC include)



