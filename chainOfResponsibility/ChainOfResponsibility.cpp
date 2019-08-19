//
// Created by LAN on 8/18/2019.
//

#include "ChainOfResponsibility.h"
#include <iostream>
using namespace std;

Handler::Handler(Handler *handler) {
    _successor = handler;
}

void ConcreteHandler1::HandleRequest(int requestLevel) {
    if (requestLevel >= 0 && requestLevel <= 10) {
        cout << "Handler 1 take the request" << endl;
    } else if (_successor) {
        _successor->HandleRequest(requestLevel);
    } else {
        cout << "No handler can take the request" << endl;
    }
}

void ConcreteHandler2::HandleRequest(int requestLevel) {
    if (requestLevel >= 10 && requestLevel <= 20) {
        cout << "Handler 2 take the request" << endl;
    } else if (_successor) {
        _successor->HandleRequest(requestLevel);
    } else {
        cout << "No handler can take the request" << endl;
    }
}

void ConcreteHandler3::HandleRequest(int requestLevel) {
    if (requestLevel >= 20 && requestLevel <= 30) {
        cout << "Handler 3 take the request" << endl;
    } else if (_successor) {
        _successor->HandleRequest(requestLevel);
    } else {
        cout << "No handler can take the request" << endl;
    }
}