//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_OPERATIONSIMPLEFACTORY_H
#define DESIGNPATTERN_OPERATIONSIMPLEFACTORY_H

#include "Operation.h"

class OperationSimpleFactory {
public:
    static Operation *createOperation(char operate);
};

#endif //DESIGNPATTERN_OPERATIONSIMPLEFACTORY_H
