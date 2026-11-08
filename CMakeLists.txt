cmake_minimum_required(VERSION 3.10)

project(Language)

set(CMAKE_CXX_STANDARD 17)

enable_testing()

add_executable(
    test_language
    tests/test_language.cpp
)

target_include_directories(test_language PRIVATE
    src
    external
)

add_test(
    NAME LanguageTests
    COMMAND test_language
)