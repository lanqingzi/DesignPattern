//
// Created by Qingzi Lan on 7/23/19.
//

#ifndef DESIGNPATTERN_FUNCTIONPOINTERTEST_H
#define DESIGNPATTERN_FUNCTIONPOINTERTEST_H

#include <iostream>

namespace functionPointer {
    void func1() {
        std::cout << "func1" << std::endl;
    }

    class foo {
    public:
        void func2() {
            std::cout << "func2" << std::endl;
        }
    };

    void test() {
        std::cout << "Function Pointer Test" << std::endl;

        // Function pointer to a function
        void (*foo1)();
        foo1 = &func1;
        foo1();

        // Function pointer to a class method
        foo test;
        void (foo::*foo2)();
        foo2 = &foo::func2;
        (test.*foo2)();
    }
}
#endif //DESIGNPATTERN_FUNCTIONPOINTERTEST_H
