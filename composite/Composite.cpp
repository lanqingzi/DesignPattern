//
// Created by LAN on 8/5/2019.
//

#include "Composite.h"
#include <iostream>
using namespace std;

void Component::setName(string name) {
    _name = name;
}

string Component::getName() {
    return _name;
}

Leaf::Leaf(string name) {
    setName(name);
}

void Leaf::add(Component *) {
    cout << "Leaf class cannot add component" << endl;
}

void Leaf::remove(Component *) {
    cout << "Leaf class cannot remove component" << endl;
}

void Leaf::display() {
    cout << "Leaf name: " << getName() << endl;
}

Composite::Composite(string name) {
    setName(name);
}

void Composite::add(Component *component) {
    _children.push_back(component);
}

void Composite::remove(Component *component) {
    _children.remove(component);
}

void Composite::display() {
    cout << "Composite name: " << getName() << endl;
    for (auto child : _children) {
        child->display();
    }
}