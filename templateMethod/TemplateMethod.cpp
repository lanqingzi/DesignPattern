//
// Created by Qingzi Lan on 7/23/19.
//

#include "TemplateMethod.h"
#include <iostream>

void TemplateMethod::doMethod() {
    PrimitiveOperation1();
    PrimitiveOperation2();
}

void ConcreteMethod1::PrimitiveOperation1() {
    std::cout << "ConcreteMethod1 - Operation1" << std::endl;
}

void ConcreteMethod1::PrimitiveOperation2() {
    std::cout << "ConcreteMethod1 - Operation2" << std::endl;
}

void ConcreteMethod2::PrimitiveOperation1() {
    std::cout << "ConcreteMethod2 - Operation1" << std::endl;
}

void ConcreteMethod2::PrimitiveOperation2() {
    std::cout << "ConcreteMethod2 - Operation2" << std::endl;
}