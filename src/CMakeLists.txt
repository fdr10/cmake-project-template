cmake_minimum_required(VERSION 3.22)
project(template-src)


include(FetchContent)

FetchContent_Declare(
  jsoncpp 
  GIT_REPOSITORY https://github.com/open-source-parsers/jsoncpp.git   
  GIT_TAG 1.9.5 
)

FetchContent_Declare(
  fmt  
  GIT_REPOSITORY https://github.com/fmtlib/fmt.git 
  GIT_TAG 9.1.0 
)
FetchContent_MakeAvailable(fmt jsoncpp)



add_subdirectory(lib1)
add_subdirectory(lib2)
add_executable(${PROJECT_NAME}-1 app1/main.cpp)
add_executable(${PROJECT_NAME}-2 app2/main.cpp)
target_link_libraries(${PROJECT_NAME}-1 lib1 lib2 fmt::fmt jsoncpp_lib)


#add_subdirectory(lib2)
