set(src Operation.h
        Operation.cpp
        OperationFactory.h
        OperationFactory.cpp
        simpleFactoryTest.h)

add_library(s_simpleFactory STATIC ${src})