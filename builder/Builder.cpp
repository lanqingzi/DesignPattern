//
// Created by Qingzi Lan on 7/22/19.
//

#include "Builder.h"
#include <vector>

void Product::addPart(std::string part) {
    _parts.push_back(part);
}

void Product::showPart() {
    for (auto part : _parts) {
        std::cout << part << std::endl;
    }
}


ConcreteBuilder1::ConcreteBuilder1() {
    _product = new Product();
}

void ConcreteBuilder1::buildPartA() {
    _product->addPart("Part A");
}

void ConcreteBuilder1::buildPartB() {
    _product->addPart("Part B");
}

Product* ConcreteBuilder1::getResult() {
    return _product;
}

ConcreteBuilder2::ConcreteBuilder2() {
    _product = new Product();
}

void ConcreteBuilder2::buildPartA() {
    _product->addPart("Part X");
}

void ConcreteBuilder2::buildPartB() {
    _product->addPart("Part Y");
}

Product* ConcreteBuilder2::getResult() {
    return _product;
}


void Director::construct(Builder *builder) {
    builder->buildPartA();
    builder->buildPartB();
}