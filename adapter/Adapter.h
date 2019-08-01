//
// Created by LAN on 7/31/2019.
//

#ifndef DESIGNPATTERN_ADAPTER_H
#define DESIGNPATTERN_ADAPTER_H

class PlayerX;
class Player {
public:
    virtual void attack() = 0;
    virtual void defense() = 0;
};

class PlayerA : public Player {
public:
    void attack() override;
    void defense() override;
};

class PlayerB : public Player {
public:
    void attack() override;
    void defense() override;
};

class PlayerC : public Player {
public:
    void attack() override;
    void defense() override;
};

class Translator : public Player {
public:
    Translator();
    void attack() override;
    void defense() override;
private:
    PlayerX* _player;
};

class PlayerX {
public:
    void attackX();
    void defenseX();
};
#endif //DESIGNPATTERN_ADAPTER_H
