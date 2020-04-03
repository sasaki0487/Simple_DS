cmake_minimum_required(VERSION 3.10)

find_package(GTest REQUIRED)
include(GoogleTest)

add_executable(UnitTest unittest.cpp)
target_link_libraries(UnitTest Char_Trie GTest::GTest GTest::Main)
include_directories(..)

gtest_add_tests(TARGET UnitTest)
