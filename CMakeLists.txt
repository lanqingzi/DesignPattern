cmake_minimum_required(VERSION 3.9)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)

include_directories(simpleFactory)
include_directories(strategy)
include_directories(decorator)

add_subdirectory(simpleFactory)
add_subdirectory(strategy)
add_subdirectory(decorator)

add_executable(DesignPattern main.cpp)
target_link_libraries(DesignPattern s_simpleFactory)
target_link_libraries(DesignPattern s_strategy)
target_link_libraries(DesignPattern s_decorator)