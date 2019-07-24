//
// Created by Qingzi Lan on 7/22/19.
//

#ifndef DESIGNPATTERN_BUILDERTEST_H
#define DESIGNPATTERN_BUILDERTEST_H

#include <Builder.h>
#include <iostream>

namespace builder {
    void test() {
        std::cout << "Builder test" << std::endl;
        Director* director = new Director();
        Builder* builder1 = new ConcreteBuilder1();
        Builder* builder2 = new ConcreteBuilder2();

        director->construct(builder1);
        Product* product1 = builder1->getResult();
        product1->showPart();

        director->construct(builder2);
        Product* product2 = builder2->getResult();
        product2->showPart();
    }
}
#endif //DESIGNPATTERN_BUILDERTEST_H
