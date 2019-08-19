//
// Created by LAN on 8/18/2019.
//

#include "Mediator.h"
#include <iostream>
#include <string>
using namespace std;

namespace mediator {
    void test() {
        cout << "Mediator test" << endl;
        Mediator* mediator = new Mediator();
        ConcreteColleague1* c1 = new ConcreteColleague1(mediator);
        ConcreteColleague2* c2 = new ConcreteColleague2(mediator);

        mediator->setColleague1(c1);
        mediator->setColleague2(c2);

        string c1Msg = "Hello c2";
        string c2Msg = "Hello c1";
        c1->send(c1Msg);
        c2->send(c2Msg);
    }
}