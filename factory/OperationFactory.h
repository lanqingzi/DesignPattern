//
// Created by Qingzi Lan on 7/16/19.
//

#ifndef DESIGNPATTERN_OPERATIONFACTORY_H
#define DESIGNPATTERN_OPERATIONFACTORY_H

#include "Operation.h"

class OperationFactory {
public:
    virtual Operation* createOperation() = 0;
};

class OperationAddFactory : public OperationFactory {
public:
    Operation* createOperation() override;
};

class OperationSubtractFactory : public OperationFactory {
public:
    Operation* createOperation() override;
};

class OperationMultiFactory : public OperationFactory {
public:
    Operation* createOperation() override;
};

class OperationDividFactory : public OperationFactory {
public:
    Operation* createOperation() override;
};


#endif //DESIGNPATTERN_OPERATIONFACTORY_H
