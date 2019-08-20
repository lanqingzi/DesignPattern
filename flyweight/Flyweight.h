//
// Created by LAN on 8/19/2019.
//

#ifndef DESIGNPATTERN_FLYWEIGHT_H
#define DESIGNPATTERN_FLYWEIGHT_H

#include <unordered_map>
#include <string>

class Flyweight {
public:
    virtual void operation(int) = 0;
};

class SharedConcreteFlyweight : public Flyweight {
public:
    void operation(int) override;
};

class UnsharedConcreteFlyweight : public Flyweight {
public:
    void operation(int) override;
};

class FlyweightFactory {
public:
    void setFlyweight(std::string, Flyweight*);
    Flyweight* getFlyweight(std::string);

private:
    std::unordered_map<std::string,Flyweight*> _flyweights;
};


#endif //DESIGNPATTERN_FLYWEIGHT_H
