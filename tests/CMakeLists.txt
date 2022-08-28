cmake_minimum_required(VERSION 3.22)
project(tests)

# GoogleTest requires at least C++14
set(CMAKE_CXX_STANDARD 20)
include(FetchContent)
#GoogleTest
FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG release-1.12.1
)

#GoogleBenchmark
FetchContent_Declare(googlebenchmark
        GIT_REPOSITORY https://github.com/google/benchmark.git
        GIT_TAG master
) # need master for benchmark::benchmark
# Make fetched content available
FetchContent_MakeAvailable(googletest googlebenchmark)
enable_testing()

#tests (add files as needed )
add_executable(${PROJECT_NAME} tests.cpp)
target_link_libraries(${PROJECT_NAME} PRIVATE GTest::gtest_main benchmark::benchmark)



include(GoogleTest)
gtest_discover_tests(${PROJECT_NAME})




