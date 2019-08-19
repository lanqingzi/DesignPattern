//
// Created by LAN on 8/18/2019.
//

#ifndef DESIGNPATTERN_MEDIATOR_H
#define DESIGNPATTERN_MEDIATOR_H

#include <string>

class Mediator;
class Colleague {
public:
    explicit Colleague(Mediator*);

    Mediator* _mediator;
};

class ConcreteColleague1 : public Colleague {
public:
    explicit ConcreteColleague1(Mediator* mediator) : Colleague(mediator){}
    void send(std::string&);
    void notify(std::string&);
};

class ConcreteColleague2 : public Colleague {
public:
    explicit ConcreteColleague2(Mediator* mediator) : Colleague(mediator){}
    void send(std::string&);
    void notify(std::string&);
};

class Mediator {
public:
    void setColleague1(ConcreteColleague1*);
    void setColleague2(ConcreteColleague2*);
    void send(std::string&, Colleague*);

    ConcreteColleague1* _colleague1;
    ConcreteColleague2* _colleague2;
};
#endif //DESIGNPATTERN_MEDIATOR_H
