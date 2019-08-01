//
// Created by LAN on 7/31/2019.
//

#include "Adapter.h"
#include <iostream>
using namespace std;

void PlayerA::attack() {
    cout << "Player A attack" << endl;
}

void PlayerA::defense() {
    cout << "Player A defense" << endl;
}

void PlayerB::attack() {
    cout << "Player B attack" << endl;
}

void PlayerB::defense() {
    cout << "Player B defense" << endl;
}

void PlayerC::attack() {
    cout << "Player C attack" << endl;
}

void PlayerC::defense() {
    cout << "Player C defense" << endl;
}

Translator::Translator() {
    _player = new PlayerX();
}

void Translator::attack() {
    cout << "Translator attack to PlayerX" << endl;
    _player->attackX();
}

void Translator::defense() {
    cout << "Translator defense to PlayerX" << endl;
    _player->defenseX();
}

void PlayerX::attackX() {
    cout << "Player X attack" << endl;
}

void PlayerX::defenseX() {
    cout << "Player X defense" << endl;
}
