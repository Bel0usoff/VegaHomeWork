cmake_minimum_required(VERSION 3.14)
project(VegaHomeWork)

add_executable(main main.cpp Rect.cpp)

include(FetchContent)
Include(GoogleTest)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED true)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)

FetchContent_MakeAvailable(googletest)
FetchContent_Declare(
    benchmark
    GIT_REPOSITORY https://github.com/google/benchmark.git
    GIT_TAG v1.6.1
)
FetchContent_MakeAvailable(benchmark)

enable_testing()

add_executable(tests test_add.cpp Rect.cpp)
add_executable(bench_example main.cpp Rect.cpp)

target_link_libraries(benchmark_test benchmark::benchmark)
target_link_libraries(tests gtest_main)

Include(GoogleTest)
gtest_discover_tests(tests)