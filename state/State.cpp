//
// Created by LAN on 7/30/2019.
//

#include <iostream>
#include "State.h"
using namespace std;

void ConcreteStateA::handle(Context* context) {
    cout << "Concrete state A handle, switch to state B" << endl;
    context->setState(new ConcreteStateB());
}

void ConcreteStateB::handle(Context* context) {
    cout << "Concrete state B handle, switch to state C" << endl;
    context->setState(new ConcreteStateC());
}

void ConcreteStateC::handle(Context* context) {
    cout << "Concrete state C handle, no more states" << endl;
}

Context::Context(State *state) {
    _state = state;
}

void Context::request() {
    _state->handle(this);
}

void Context::setState(State *state) {
    _state = state;
}