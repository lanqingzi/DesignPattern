//
// Created by Qingzi Lan on 7/16/19.
//

#ifndef DESIGNPATTERN_OPERATIONFACTORYTEST_H
#define DESIGNPATTERN_OPERATIONFACTORYTEST_H

#include <iostream>
#include "OperationFactory.h"

namespace factory {
    void test() {
        std::cout << "Factory Test" << std::endl;
        OperationFactory* factory1 = new OperationAddFactory();
        Operation* oper = factory1->createOperation();
        oper->setNumberA(10);
        oper->setNumberB(5);
        std::cout << oper->getResult() << std::endl;
    }
}
#endif //DESIGNPATTERN_OPERATIONFACTORYTEST_H
