//
// Created by LAN on 8/5/2019.
//

#include "Composite.h"
#include <iostream>
using namespace std;

namespace composite {
    void test() {
        cout << "Composite Test" << endl;
        Component* root = new Composite("root");
        root->add(new Leaf("Leaf1"));
        root->add(new Leaf("Leaf2"));

        root->display();
    }
}