//
// Created by LAN on 8/18/2019.
//

#include <iostream>
#include "Command.h"
using namespace std;

namespace command {
    void test() {
        cout << "Command test" << endl;

        Receiver* receiver = new Receiver();
        Command* c1 = new Command(receiver);
        Command* c2 = new Command(receiver);

        Invoker* invoker = new Invoker();
        invoker->setCommand(c1);
        invoker->setCommand(c2);
        invoker->executeCommands();
    }
}

