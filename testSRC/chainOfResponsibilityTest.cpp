//
// Created by LAN on 8/18/2019.
//

#include <iostream>
#include "ChainOfResponsibility.h"
using namespace std;

namespace chainOfResponsibility {
    void test() {
        cout << "Chain of responsibility test" << endl;
        int requests[] = {4, 15, 25, -1, 50};
        ConcreteHandler3* h3 = new ConcreteHandler3(nullptr);
        ConcreteHandler2* h2 = new ConcreteHandler2(h3);
        ConcreteHandler1* h1 = new ConcreteHandler1(h2);

        for (int request : requests) {
            h1->HandleRequest(request);
        }
    }
}