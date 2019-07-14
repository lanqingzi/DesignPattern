cmake_minimum_required(VERSION 3.9)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)

include_directories(simpleFactory)

add_executable(DesignPattern main.cpp simpleFactory/Operation.cpp simpleFactory/Operation.h simpleFactory/OperationFactory.cpp simpleFactory/OperationFactory.h simpleFactory/simpleFactoryTest.h)