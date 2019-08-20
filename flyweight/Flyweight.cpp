//
// Created by LAN on 8/19/2019.
//

#include "Flyweight.h"
#include <iostream>
using namespace std;

void SharedConcreteFlyweight::operation(int extrinsicState) {
    cout << "Shared concrete flyweight: " << extrinsicState << endl;
}

void UnsharedConcreteFlyweight::operation(int extrinsicState) {
    cout << "Unshared concrete flyweight: " << extrinsicState << endl;
}

void FlyweightFactory::setFlyweight(std::string flyweightName, Flyweight* flyweight) {
    _flyweights[flyweightName] = flyweight;
}

Flyweight* FlyweightFactory::getFlyweight(std::string flyweightName) {
    return _flyweights[flyweightName];
}