//
// Created by Qingzi Lan on 7/14/19.
//

#include "OperationFactory.h"
Operation* OperationFactory::createOperation(char operate) {
    Operation* oper = nullptr;
    switch(operate){
        case '+':
            oper = new OperationAdd();
            break;
        case '-':
            oper = new OperationSubtract();
            break;
        case '*':
            oper = new OperationMulti();
            break;
        case '/':
            oper = new OperationDivide();
            break;
    }
    return oper;
}