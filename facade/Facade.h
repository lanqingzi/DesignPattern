//
// Created by Qingzi Lan on 7/22/19.
//

#ifndef DESIGNPATTERN_FACADE_H
#define DESIGNPATTERN_FACADE_H

#include <iostream>

class SubSystem1 {
public:
    void method1();
};

class SubSystem2 {
public:
    void method2();
};

class SubSystem3 {
public:
    void method3();
};

class SubSystem4 {
public:
    void method4();
};

class Facade {
private:
    SubSystem1* _subSystem1;
    SubSystem2* _subSystem2;
    SubSystem3* _subSystem3;
    SubSystem4* _subSystem4;

public:
    Facade();
    void method1();
    void method2();
};

#endif //DESIGNPATTERN_FACADE_H
