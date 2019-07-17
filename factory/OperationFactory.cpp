//
// Created by Qingzi Lan on 7/16/19.
//

#include "OperationFactory.h"

Operation* OperationAddFactory::createOperation() {
    return new OperationAdd();
}

Operation* OperationSubtractFactory::createOperation() {
    return new OperationSubtract();
}

Operation* OperationMultiFactory::createOperation() {
    return new OperationMulti();
}

Operation* OperationDividFactory::createOperation() {
    return new OperationDivide();
}