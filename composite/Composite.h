//
// Created by LAN on 8/5/2019.
//

#ifndef DESIGNPATTERN_COMPOSITE_H
#define DESIGNPATTERN_COMPOSITE_H

#include <string>
#include <list>
using namespace std;

class Component {
public:
    virtual void add(Component*) = 0;
    virtual void remove(Component*) = 0;
    virtual void display() = 0;

    void setName(string);
    string getName();
private:
    string _name;
};

class Leaf : public Component {
public:
    Leaf(string);
    void add(Component*) override;
    void remove(Component*) override;
    void display() override;
};

class Composite : public Component {
public:
    Composite(string);
    void add(Component*) override;
    void remove(Component*) override;
    void display() override;

private:
    list<Component*> _children;
};

#endif //DESIGNPATTERN_COMPOSITE_H
