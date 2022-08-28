cmake_minimum_required(VERSION 3.22)
project(lib1)
include_directories(include)


add_library(${PROJECT_NAME} 
  lib1.cpp 
)
target_include_directories(${PROJECT_NAME} PUBLIC include)



