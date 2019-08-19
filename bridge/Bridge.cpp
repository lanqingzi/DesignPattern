//
// Created by LAN on 8/18/2019.
//

#include "Bridge.h"
#include <iostream>
using namespace std;

void Contact::run() {
    cout << "run contact" << endl;
}

void Game::run() {
    cout << "run game" << endl;
}

void MobileBrand::setApp(MobileApp *app) {
    _apps.insert(app);
}

void MobileBrand::showApps() {
    for (MobileApp* app : _apps) {
        app->run();
    }
}