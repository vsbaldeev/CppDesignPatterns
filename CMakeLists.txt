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

set(OBSERVER_SOURCE_FILES
     behavioral/observer/observable.h
     behavioral/observer/observer.h
     behavioral/observer/int_state.h
     behavioral/observer/int_state.cpp
     behavioral/observer/int_observer.h
     behavioral/observer/int_observer.cpp
     behavioral/observer/main.cpp)
set(OBSERVER_EXECUTABLE_EXAMPLE observer_example)
add_executable(${OBSERVER_EXECUTABLE_EXAMPLE} ${OBSERVER_SOURCE_FILES})

set(DECORATOR_SOURCE_FILES
     behavioral/decorator/beverage.h
     behavioral/decorator/cappucino.h
     behavioral/decorator/cappucino.cpp
     behavioral/decorator/latte.h
     behavioral/decorator/latte.cpp
     behavioral/decorator/beverage_with_condiment.h
     behavioral/decorator/beverage_with_condiment.cpp
     behavioral/decorator/milk.h
     behavioral/decorator/milk.cpp
     behavioral/decorator/whip.h
     behavioral/decorator/whip.cpp
     behavioral/decorator/chocolate.h
     behavioral/decorator/chocolate.cpp
     behavioral/decorator/main.cpp)
add_executable(decorator_example ${DECORATOR_SOURCE_FILES})