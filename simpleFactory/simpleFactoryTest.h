//
// Created by Qingzi Lan on 7/14/19.
//
#include <iostream>
#include "OperationFactory.h"
using namespace std;

namespace simpleFacotry{
    void test() {
        Operation* oper;
        oper = OperationFactory::createOperation('+');
        oper->setNumberA(10);
        oper->setNumberB(5);
        cout << oper->getResult() << endl;
    }
}
