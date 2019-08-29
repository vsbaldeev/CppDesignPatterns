cmake_minimum_required(VERSION 3.14)
project(cpp_design_patterns)

set(CMAKE_CXX_STANDARD 14)

set(POLICY_BASED_DESIGN_SOURCE_FILES behavioral/policy_based_design/policy_based_design.cpp)
set(POLICY_BASED_DESIGN_EXECUTABLE_NAME policy_based_example)
add_executable(${POLICY_BASED_DESIGN_EXECUTABLE_NAME} ${POLICY_BASED_DESIGN_SOURCE_FILES})

set(STRATEGY_SOURCE_FILES
     behavioral/strategy/stream_behavior.h
     behavioral/strategy/logger.h
     behavioral/strategy/format_text_behavior.h
     behavioral/strategy/main.cpp)
set(STRATEGY_EXECUTABLE_NAME strategy_example)
add_executable(${STRATEGY_EXECUTABLE_NAME} ${STRATEGY_SOURCE_FILES})
