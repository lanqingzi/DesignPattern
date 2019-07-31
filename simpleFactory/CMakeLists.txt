set(src Operation.h
        Operation.cpp
        OperationSimpleFactory.h
        OperationSimpleFactory.cpp)

add_library(s_simpleFactory STATIC ${src})