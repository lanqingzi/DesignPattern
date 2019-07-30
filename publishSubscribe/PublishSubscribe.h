//
// Created by Qingzi Lan on 7/24/19.
//

#ifndef DESIGNPATTERN_PUBLISHSUBSCRIBE_H
#define DESIGNPATTERN_PUBLISHSUBSCRIBE_H

#include <string>
#include <vector>
using namespace std;

class Subject {
public:
    virtual void Notify() = 0;
    void setState(string);
    string getState();
private:
    string _subjectState;
};

class Observer {
public:
    virtual void update() = 0;
};
class StockObserver : public Observer {
public:
    StockObserver(string, Subject*);
    void closeStockMarket();
    void update() override;
private:
    string _name;
    Subject* _sub;
};

class NBAObserver : public Observer {
public:
    NBAObserver(string, Subject*);
    void closeNBALive();
    void update() override;
private:
    string _name;
    Subject* _sub;
};

class Boss : public Subject {
public:
    vector<pair<Observer*, void (Observer::*)()>> _eventsHandler;
    void Notify() override;
};
#endif //DESIGNPATTERN_PUBLISHSUBSCRIBE_H
