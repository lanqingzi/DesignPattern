//
// Created by Qingzi Lan on 7/22/19.
//

#ifndef DESIGNPATTERN_FACADETEST_H
#define DESIGNPATTERN_FACADETEST_H

#include "Facade.h"
namespace facade {
    void test() {
        Facade* ff = new Facade();
        ff->method1();
        ff->method2();
    }
}
#endif //DESIGNPATTERN_FACADETEST_H
