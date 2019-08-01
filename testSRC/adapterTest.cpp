//
// Created by LAN on 7/31/2019.
//

#include <iostream>
#include "Adapter.h"
using namespace std;

namespace adapter {
    void test() {
        cout << "Adapter test" << endl;
        Player* p1 = new PlayerA();
        Player* p2 = new PlayerB();
        Player* p3 = new PlayerC();
        Player* p4 = new Translator();

        p1->attack();
        p2->attack();
        p3->attack();
        p4->attack();
    }
}