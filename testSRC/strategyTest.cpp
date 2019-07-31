//
// Created by Qingzi Lan on 7/14/19.
//

#ifndef DESIGNPATTERN_STRATEGY_H
#define DESIGNPATTERN_STRATEGY_H
#include <iostream>
#include "OperationContext.h"
using namespace std;

namespace strategy{
    void test() {
        std::cout << "Strategy Test" << std::endl;
        OperationContext* opCon = new OperationContext(10, 5, '+');
        cout << opCon->getResult() << endl;
    }
}
#endif //DESIGNPATTERN_STRATEGY_H
