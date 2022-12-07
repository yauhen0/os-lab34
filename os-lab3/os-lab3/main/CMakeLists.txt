cmake_minimum_required(VERSION 3.23)
project(main)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp)

add_library(Number STATIC IMPORTED)
set_target_properties(Number PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/../n)
set_target_properties(Number PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../n/cmake-build-debug/libNumber.a)
target_link_libraries(main Number)

add_library(Vector SHARED IMPORTED)
set_target_properties(Vector PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${CMAKE_CURRENT_SOURCE_DIR}/../v)
set_target_properties(Vector PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/../v/cmake-build-debug/libVector.so)
target_link_libraries(main Vector)
