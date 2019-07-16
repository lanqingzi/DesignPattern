//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_DECORATORTEST_H
#define DESIGNPATTERN_DECORATORTEST_H

#include "OperationContextDecorator.h"
#include <iostream>
namespace decorator {
    void test() {
        OperationContextDecorator* oper = new OperationContextDecorator(10, 5, '+');
        std::cout << oper->getResult() << std::endl;
    }
}
#endif //DESIGNPATTERN_DECORATORTEST_H
