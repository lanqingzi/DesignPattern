//
// Created by Qingzi Lan on 7/22/19.
//

#ifndef DESIGNPATTERN_BUILDER_H
#define DESIGNPATTERN_BUILDER_H

#include <iostream>
#include <string>
#include <vector>

class Product {
private:
    std::vector<std::string> _parts;
public:
    void addPart(std::string);
    void showPart();
};

class Builder {
public:
    virtual void buildPartA() = 0;
    virtual void buildPartB() = 0;
    virtual Product* getResult() = 0;
};

class ConcreteBuilder1 : public Builder {
private:
    Product* _product;
public:
    ConcreteBuilder1();
    void buildPartA() override;
    void buildPartB() override;
    Product* getResult() override;
};

class ConcreteBuilder2 : public Builder {
private:
    Product* _product;
public:
    ConcreteBuilder2();
    void buildPartA() override;
    void buildPartB() override;
    Product* getResult() override;
};

class Director {
public:
    void construct(Builder*);
};


#endif //DESIGNPATTERN_BUILDER_H
