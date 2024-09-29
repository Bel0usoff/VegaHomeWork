cmake_minimum_required(VERSION 3.14)
project(VegaHomeWork)

add_executable(main main.cpp Rect.cpp)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.2
)
FetchContent_MakeAvailable(googletest)
enable_testing()
add_executable(tests test_add.cpp Rect.cpp)
target_link_libraries(tests gtest_main)

Include(GoogleTest)
gtest_discover_tests(tests)