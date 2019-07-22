//
// Created by Qingzi Lan on 7/21/19.
//

#ifndef DESIGNPATTERN_OPERATIONPROTOTYPE_H
#define DESIGNPATTERN_OPERATIONPROTOTYPE_H

#include "Operation.h"

class OperationPrototype : public Operation{
public:
    virtual OperationPrototype* clone() = 0;
};

class OperationAddPrototype : public OperationPrototype {
public:
    OperationPrototype* clone() override;
    double getResult() override;
};

class OperationSubtractPrototype : public OperationPrototype {
    OperationPrototype* clone() override;
    double getResult() override;
};

class OperationMultiPrototype : public OperationPrototype {
    OperationPrototype* clone() override;
    double getResult() override;
};

class OperationDividePrototype : public OperationPrototype {
    OperationPrototype* clone() override;
    double getResult() override;
};

#endif //DESIGNPATTERN_OPERATIONPROTOTYPE_H
