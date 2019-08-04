//
// Created by LAN on 8/3/2019.
//

#ifndef DESIGNPATTERN_MEMENTO_H
#define DESIGNPATTERN_MEMENTO_H

#include <string>
using namespace std;

class Memento;

class Originator {
public:
    void setState(string);
    string getState();

    Memento* createMemento();
    void restoreFromMemento(Memento*);
    void show();
private:
    string _state;
};

class Memento {
public:
    Memento(string);
    string getState();

private:
    string _state;
};

class Caretaker {
public:
    void setMemento(Memento*);
    Memento* getMemento();
private:
    Memento* _memento;
};

#endif //DESIGNPATTERN_MEMENTO_H
