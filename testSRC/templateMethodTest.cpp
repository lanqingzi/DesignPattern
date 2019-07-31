//
// Created by Qingzi Lan on 7/23/19.
//

#ifndef DESIGNPATTERN_TEMPLATEMETHODTEST_H
#define DESIGNPATTERN_TEMPLATEMETHODTEST_H

#include "TemplateMethod.h"
#include <iostream>

namespace templateMethod {
    void test() {
        std::cout << "Template Method Test" << std::endl;
        TemplateMethod* templateMethod = new ConcreteMethod1();

        templateMethod->doMethod();

        templateMethod = new ConcreteMethod2();
        templateMethod->doMethod();
    }
}
#endif //DESIGNPATTERN_TEMPLATEMETHODTEST_H
