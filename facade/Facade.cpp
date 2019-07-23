//
// Created by Qingzi Lan on 7/22/19.
//

#include "Facade.h"
void SubSystem1::method1() {
    std::cout << "SubSystem1 - Method1" << std::endl;
}
void SubSystem2::method2() {
    std::cout << "SubSystem2 - Method2" << std::endl;
}
void SubSystem3::method3() {
    std::cout << "SubSystem3 - Method3" << std::endl;
}
void SubSystem4::method4() {
    std::cout << "SubSystem4 - Method4" << std::endl;
}

Facade::Facade() {
    _subSystem1 = new SubSystem1();
    _subSystem2 = new SubSystem2();
    _subSystem3 = new SubSystem3();
    _subSystem4 = new SubSystem4();
}

void Facade::method1() {
    _subSystem1->method1();
    _subSystem2->method2();
    _subSystem4->method4();
}

void Facade::method2() {
    _subSystem3->method3();
    _subSystem2->method2();
}