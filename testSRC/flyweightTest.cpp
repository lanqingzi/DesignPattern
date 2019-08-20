//
// Created by LAN on 8/19/2019.
//

#include <iostream>
#include "Flyweight.h"
using namespace std;

namespace flyweight {
    void test() {
        cout << "Flyweight test" << endl;
        FlyweightFactory* flyweightFactory = new FlyweightFactory();

        flyweightFactory->setFlyweight("S1", new SharedConcreteFlyweight());
        flyweightFactory->setFlyweight("S2", new SharedConcreteFlyweight());
        flyweightFactory->setFlyweight("U1", new UnsharedConcreteFlyweight());

        Flyweight* s1 = flyweightFactory->getFlyweight("S1");
        s1->operation(10);

        Flyweight* u1 = flyweightFactory->getFlyweight("U1");
        u1->operation(10);
    }
}