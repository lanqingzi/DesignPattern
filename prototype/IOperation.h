//
// Created by Qingzi Lan on 7/20/19.
//

#ifndef DESIGNPATTERN_IOPERATION_H
#define DESIGNPATTERN_IOPERATION_H

#include "Operation.h"

class IOperation {
public:
    virtual IOperation* clone() = 0;
};

class OperationPrototype : public IOperation, public Operation {

};

class OperationAddPrototype : public OperationPrototype {
public:
    IOperation* clone() override;
    double getResult() override;
};

class OperationSubtractPrototype : public OperationPrototype {
    IOperation* clone() override;
    double getResult() override;
};

class OperationMultiPrototype : public OperationPrototype {
    IOperation* clone() override;
    double getResult() override;
};

class OperationDividePrototype : public OperationPrototype {
    IOperation* clone() override;
    double getResult() override;
};


#endif //DESIGNPATTERN_IOPERATION_H
