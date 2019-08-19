//
// Created by LAN on 8/18/2019.
//

#include "Bridge.h"
#include <iostream>
using namespace std;

namespace bridge {
    void test() {
        cout << "bridge test" << endl;
        MobileBrand* mi = new Xiaomi();
        MobileBrand* hua = new Huawei();

        mi->setApp(new Contact());

        hua->setApp(new Contact());
        hua->setApp(new Game());

        mi->showApps();
        hua->showApps();
    }
}