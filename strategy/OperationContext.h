//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_OPERATIONCONTEXT_H
#define DESIGNPATTERN_OPERATIONCONTEXT_H

#include "OperationFactory.h"
class OperationContext {
public:
    OperationContext() = default;
    OperationContext(int, int, char);
    double getResult();

private:
    Operation* oper;
};


#endif //DESIGNPATTERN_OPERATIONCONTEXT_H
