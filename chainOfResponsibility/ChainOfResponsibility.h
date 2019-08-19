//
// Created by LAN on 8/18/2019.
//

#ifndef DESIGNPATTERN_CHAINOFRESPONSIBILITY_H
#define DESIGNPATTERN_CHAINOFRESPONSIBILITY_H


class Handler {
public:
    explicit Handler(Handler*);
    virtual void HandleRequest(int) = 0;

    Handler* _successor;
};

class ConcreteHandler1 : public Handler {
public:
    explicit ConcreteHandler1(Handler* handler) : Handler(handler){};
    void HandleRequest(int) override;
};

class ConcreteHandler2 : public Handler {
public:
    explicit ConcreteHandler2(Handler* handler) : Handler(handler){};
    void HandleRequest(int) override;
};

class ConcreteHandler3 : public Handler {
public:
    explicit ConcreteHandler3(Handler* handler) : Handler(handler){};
    void HandleRequest(int) override;
};


#endif //DESIGNPATTERN_CHAINOFRESPONSIBILITY_H
