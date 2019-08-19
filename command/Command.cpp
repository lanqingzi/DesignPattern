//
// Created by LAN on 8/18/2019.
//

#include "Command.h"
#include <iostream>
using namespace std;

void Receiver::action() {
    cout << "receiver acts" << endl;
}

Command::Command(Receiver *receiver) {
    _receiver = receiver;
}

void Command::execute() {
    _receiver->action();
}

void Invoker::setCommand(Command *command) {
    _commands.insert(command);
}

void Invoker::executeCommands() {
    for (Command* command : _commands) {
        command->execute();
    }
}