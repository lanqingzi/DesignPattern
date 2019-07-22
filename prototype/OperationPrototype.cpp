//
// Created by Qingzi Lan on 7/21/19.
//

#include "OperationPrototype.h"

OperationPrototype* OperationAddPrototype::clone() {
    return new OperationAddPrototype(*this);
}

OperationPrototype* OperationSubtractPrototype::clone() {
    return new OperationSubtractPrototype(*this);
}

OperationPrototype* OperationMultiPrototype::clone() {
    return new OperationMultiPrototype(*this);
}

OperationPrototype* OperationDividePrototype::clone() {
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