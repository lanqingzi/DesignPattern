//
// Created by Qingzi Lan on 7/14/19.
//

#include "OperationContext.h"
OperationContext::OperationContext(int NumA, int NumB, char op) {
    oper = OperationFactory::createOperation(op);
    oper->setNumberA(NumA);
    oper->setNumberB(NumB);
}

double OperationContext::getResult() {
    return oper->getResult();
}