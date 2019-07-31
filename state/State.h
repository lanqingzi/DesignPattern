//
// Created by LAN on 7/30/2019.
//

#ifndef DESIGNPATTERN_STATE_H
#define DESIGNPATTERN_STATE_H

class Context;
class State {
public:
    virtual void handle(Context*) = 0;
};

class ConcreteStateA : public State {
public:
    void handle(Context*) override;
};

class ConcreteStateB : public State {
public:
    void handle(Context*) override;
};

class ConcreteStateC : public State {
public:
    void handle(Context*) override;
};

class Context {
public:
    Context(State*);
    void setState(State*);
    void request();

private:
    State* _state;
};

#endif //DESIGNPATTERN_STATE_H
