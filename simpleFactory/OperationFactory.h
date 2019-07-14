//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_OPERATIONFACTORY_H
#define DESIGNPATTERN_OPERATIONFACTORY_H

#include "Operation.h"

class OperationFactory {
public:
    static Operation* createOperation(char operate);
};


#endif //DESIGNPATTERN_OPERATIONFACTORY_H
