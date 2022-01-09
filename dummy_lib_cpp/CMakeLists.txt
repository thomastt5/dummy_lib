cmake_minimum_required (VERSION 3.19)

project(DummyLibProject CXX)
set(CMAKE_CXX_STANDARD 17)

set(DUMMY_LIB_BASE_DIR ${CMAKE_CURRENT_SOURCE_DIR})

add_subdirectory(tests)
