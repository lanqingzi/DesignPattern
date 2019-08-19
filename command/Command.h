//
// Created by LAN on 8/18/2019.
//

#ifndef DESIGNPATTERN_COMMAND_H
#define DESIGNPATTERN_COMMAND_H

#include <set>

class Receiver {
public:
    void action();
};

class Command {
public:
    explicit Command(Receiver*);
    void execute();

private:
    Receiver* _receiver;
};

class ConcreteCommand : public Command {
    ConcreteCommand(Receiver* receiver) : Command(receiver){}
};

class Invoker {
public:
    void setCommand(Command*);
    void executeCommands();

private:
    std::set<Command*> _commands;
};


#endif //DESIGNPATTERN_COMMAND_H
