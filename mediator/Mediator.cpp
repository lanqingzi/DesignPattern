//
// Created by LAN on 8/18/2019.
//

#include "Mediator.h"
#include <iostream>
using namespace std;

Colleague::Colleague(Mediator *mediator) {
    _mediator = mediator;
}

void ConcreteColleague1::send(std::string& msg) {
    _mediator->send(msg, this);
}

void ConcreteColleague1::notify(std::string& msg) {
    cout << "Colleague1 get message: " << msg << endl;
}

void ConcreteColleague2::send(std::string& msg) {
    _mediator->send(msg, this);
}

void ConcreteColleague2::notify(std::string& msg) {
    cout << "Colleague2 get message: " << msg << endl;
}

void Mediator::setColleague1(ConcreteColleague1 *c1) {
    _colleague1 = c1;
}

void Mediator::setColleague2(ConcreteColleague2 *c2) {
    _colleague2 = c2;
}

void Mediator::send(std::string& msg, Colleague *colleague) {
    if (colleague == _colleague1) {
        _colleague2->notify(msg);
    } else {
        _colleague1->notify(msg);
    }
}