//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_OPERATIONCONTEXTDECORATOR_H
#define DESIGNPATTERN_OPERATIONCONTEXTDECORATOR_H

#include "OperationContext.h"
class OperationContextDecorator : public OperationContext {
private:
    OperationContext* _opCon;
public:
    OperationContextDecorator(int, int, char);
    double getResult();
};


#endif //DESIGNPATTERN_OPERATIONCONTEXTDECORATOR_H
