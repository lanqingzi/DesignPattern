set(src Operation.h
        Operation.cpp
        OperationSimpleFactory.h
        OperationSimpleFactory.cpp
        simpleFactoryTest.h)

add_library(s_simpleFactory STATIC ${src})