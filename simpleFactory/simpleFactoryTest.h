//
// Created by Qingzi Lan on 7/14/19.
//
#include <iostream>
#include "OperationSimpleFactory.h"
using namespace std;

namespace simpleFactory{
    void test() {
        Operation* oper;
        oper = OperationSimpleFactory::createOperation('+');
        oper->setNumberA(10);
        oper->setNumberB(5);
        cout << oper->getResult() << endl;
    }
}
