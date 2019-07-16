//
// Created by Qingzi Lan on 7/14/19.
//

#include "OperationContextDecorator.h"
#include <iostream>

OperationContextDecorator::OperationContextDecorator(int NumA, int NumB, char op) {
    _opCon = new OperationContext(NumA, NumB, op);
}

double OperationContextDecorator::getResult() {
    std::cout << "Operation Context Decorator" << std::endl;
    return _opCon->getResult();
}