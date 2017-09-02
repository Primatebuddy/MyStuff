cmake_minimum_required(VERSION 2.6)
project(test_project)

add_executable(test_project main.cpp)

install(TARGETS test_project RUNTIME DESTINATION bin)
