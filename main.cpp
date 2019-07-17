#include <iostream>
#include "simpleFactoryTest.h"
#include "strategyTest.h"
#include "decoratorTest.h"
#include "factoryTest.h"
using namespace std;

int main() {
    simpleFactory::test();
    strategy::test();
    decorator::test();
    factory::test();
}