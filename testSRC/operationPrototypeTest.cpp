//
// Created by Qingzi Lan on 7/20/19.
//

#ifndef DESIGNPATTERN_OPERATIONPROTOTYPETEST_H
#define DESIGNPATTERN_OPERATIONPROTOTYPETEST_H

#include "OperationPrototype.h"
#include <iostream>

namespace prototype {
    void test() {
        std::cout << "Prototype Test" << std::endl;
        OperationPrototype* OpAdd = new OperationAddPrototype();
        OpAdd->setNumberA(5);
        OpAdd->setNumberB(10);
        std::cout << OpAdd->getResult() << std::endl;

        auto* OpAddCopy1 = OpAdd->clone();
        OpAddCopy1->setNumberA(6);
        std::cout << OpAddCopy1->getResult() << std::endl;
    }
}
#endif //DESIGNPATTERN_OPERATIONPROTOTYPETEST_H
