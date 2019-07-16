cmake_minimum_required(VERSION 3.9)
project(DesignPattern)

set(CMAKE_CXX_STANDARD 11)

include_directories(simpleFactory)
include_directories(strategy)
include_directories(decorator)
add_executable(DesignPattern main.cpp simpleFactory/Operation.cpp simpleFactory/Operation.h simpleFactory/OperationFactory.cpp simpleFactory/OperationFactory.h simpleFactory/simpleFactoryTest.h strategy/OperationContext.cpp strategy/OperationContext.h strategy/strategyTest.h decorator/OperationContextDecorator.cpp decorator/OperationContextDecorator.h decorator/decoratorTest.h)