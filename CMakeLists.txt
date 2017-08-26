cmake_minimum_required(VERSION 3.8)

set(PROJECT_NAME CppDesignPatterns)
project(${PROJECT_NAME})

set(SOURCE_FILES behavioral/policy_based_design/policy_based_design.cpp)
add_executable(${PROJECT_NAME} ${SOURCE_FILES})