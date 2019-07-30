//
// Created by Qingzi Lan on 7/24/19.
//

#include <iostream>
#include "PublishSubscribe.h"
using namespace std;

void Subject::setState(string subjectState) {
    _subjectState = subjectState;
}

string Subject::getState() {
    return _subjectState;
}

StockObserver::StockObserver(string name, Subject *sub) {
    _name = name;
    _sub = sub;
}

void StockObserver::closeStockMarket() {
    cout << _sub->getState() << ", " << _name << " close the stock market. " << endl;
}

void StockObserver::update() {
    closeStockMarket();
}

NBAObserver::NBAObserver(string name, Subject * sub) {
    _name = name;
    _sub = sub;
}

void NBAObserver::closeNBALive() {
    cout << _sub->getState() << ", " << _name << " close the NBA live. " << endl;
}

void NBAObserver::update() {
    closeNBALive();
}

void Boss::Notify() {
    for (auto event : _eventsHandler) {
        (event.first->*event.second)();
    }
}