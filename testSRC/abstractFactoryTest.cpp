//
// Created by LAN on 7/29/2019.
//

#ifndef DESIGNPATTERN_ABSTRACTFACTORYTEST_H
#define DESIGNPATTERN_ABSTRACTFACTORYTEST_H

#include <iostream>
#include "AbstractFactory.h"
using namespace std;

namespace abstractFactory {
    void test() {
        cout << "Abstract Factory Test" << endl;
        auto* user1 = new User();
        auto* department1 = new Department();

        IFactory* factory = new SqlServerFactory();
        IUser* iu = factory->createUser();
        factory = new AccessServerFactory();
        IDepartment* id = factory->createDepartment();

        iu->insert();
        iu->get();

        id->insert();
        id->get();
    }
}
#endif //DESIGNPATTERN_ABSTRACTFACTORYTEST_H
