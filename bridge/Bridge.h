//
// Created by LAN on 8/18/2019.
//

#ifndef DESIGNPATTERN_BRIDGE_H
#define DESIGNPATTERN_BRIDGE_H

#include <set>

class MobileApp {
public:
    virtual void run() = 0;
};

class Contact : public MobileApp {
public:
    void run() override;
};

class Game : public MobileApp {
public:
    void run() override;
};

class MobileBrand {
public:
    void setApp(MobileApp*);
    void showApps();

private:
    std::set<MobileApp*> _apps;
};

class Xiaomi : public MobileBrand {

};

class Huawei : public MobileBrand {

};
#endif //DESIGNPATTERN_BRIDGE_H
