//
// Created by Qingzi Lan on 7/14/19.
//

#include "Operation.h"

void Operation::setNumberA(double num) {
    NumberA = num;
}

void Operation::setNumberB(double num) {
    NumberB = num;
}

double Operation::getNumberA() {
    return NumberA;
}

double Operation::getNumberB() {
    return NumberB;
}

double OperationAdd::getResult() {
    double result = 0;
    result = getNumberA() + getNumberB();
    return result;
}

double OperationSubtract::getResult() {
    double result = 0;
    result = getNumberA() - getNumberB();
    return result;
}

double OperationMulti::getResult() {
    double result = 0;
    result = getNumberA() * getNumberB();
    return result;
}

double OperationDivide::getResult() {
    double result = 0;
    if (getNumberB() == 0) {
        throw "Divider cannot be zero";
    }
    result = getNumberA() / getNumberB();
    return result;
}