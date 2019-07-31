//
// Created by LAN on 7/30/2019.
//

#include <iostream>
#include "State.h"
using namespace std;

namespace state {
    void test() {
        cout << "State Test" << endl;
        Context* c = new Context(new ConcreteStateA());
        c->request();
        c->request();
        c->request();
        c->request();
    }
}