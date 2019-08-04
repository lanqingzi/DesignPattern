//
// Created by LAN on 8/3/2019.
//

#include "Memento.h"
#include <iostream>
#include <string>
using namespace std;

void Originator::setState(string state) {
    _state = state;
}

string Originator::getState() {
    return _state;
}

Memento* Originator::createMemento() {
    return new Memento(_state);
}

void Originator::restoreFromMemento(Memento* memento) {
    _state = memento->getState();
}

void Originator::show() {
    cout << "State: " << _state << endl;
}

Memento::Memento(string state) {
    _state = state;
}

string Memento::getState() {
    return _state;
}

void Caretaker::setMemento(Memento *memento) {
    _memento = memento;
}

Memento* Caretaker::getMemento() {
    return _memento;
}