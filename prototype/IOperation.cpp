//
// Created by Qingzi Lan on 7/20/19.
//

#include "IOperation.h"

IOperation* OperationAddPrototype::clone() {
    return new OperationAddPrototype(*this);
}

IOperation* OperationSubtractPrototype::clone() {
    return new OperationSubtractPrototype(*this);
}

IOperation* OperationMultiPrototype::clone() {
    return new OperationMultiPrototype(*this);
}

IOperation* OperationDividePrototype::clone() {
    return new OperationDividePrototype(*this);
}

double OperationAddPrototype::getResult() {
    double result = 0;
    result = getNumberA() + getNumberB();
    return result;
}

double OperationSubtractPrototype::getResult() {
    double result = 0;
    result = getNumberA() - getNumberB();
    return result;
}

double OperationMultiPrototype::getResult() {
    double result = 0;
    result = getNumberA() * getNumberB();
    return result;
}

double OperationDividePrototype::getResult() {
    double result = 0;
    if (getNumberB() == 0) {
        throw "Divider cannot be zero";
    }
    result = getNumberA() / getNumberB();
    return result;
}