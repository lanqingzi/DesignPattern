#include <iostream>
#include "simpleFactoryTest.h"
#include "strategyTest.h"
#include "decoratorTest.h"
using namespace std;

int main() {
    simpleFactory::test();
    strategy::test();
    decorator::test();
}