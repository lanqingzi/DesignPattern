//
// Created by LAN on 8/3/2019.
//

#include "Memento.h"
#include <iostream>
using namespace std;

namespace memento {
    void test() {
        cout << "Memento test" << endl;
        Originator* originator = new Originator();
        originator->setState("On");
        originator->show();

        Caretaker* caretaker = new Caretaker();
        caretaker->setMemento(originator->createMemento());

        originator->setState("Off");
        originator->show();

        originator->restoreFromMemento(caretaker->getMemento());
        originator->show();
    }
}