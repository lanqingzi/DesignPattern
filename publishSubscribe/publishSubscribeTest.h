//
// Created by Qingzi Lan on 7/24/19.
//

#ifndef DESIGNPATTERN_PUBLISHSUBSCRIBETEST_H
#define DESIGNPATTERN_PUBLISHSUBSCRIBETEST_H

#include "PublishSubscribe.h"
#include <vector>
using namespace std;

namespace publishSubscribe {
    void test() {
        Boss* testBoss = new Boss();

        StockObserver* test1 = new StockObserver("test1", testBoss);
        NBAObserver* test2 = new NBAObserver("test2", testBoss);

        testBoss->_eventsHandler.push_back(pair<Observer*, void (Observer::*)()>(test1, &Observer::update));
        testBoss->_eventsHandler.push_back(pair<Observer*, void (Observer::*)()>(test2, &Observer::update));

        testBoss->setState("Boss is back");

        testBoss->Notify();
    }
}
#endif //DESIGNPATTERN_PUBLISHSUBSCRIBETEST_H
