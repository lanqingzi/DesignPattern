#include <iostream>
#include "simpleFactoryTest.h"
#include "strategyTest.h"
#include "decoratorTest.h"
#include "factoryTest.h"
#include "operationPrototypeTest.h"
#include "facadeTest.h"
#include "builderTest.h"
#include "templateMethodTest.h"

using namespace std;

int main() {
    simpleFactory::test();
    strategy::test();
    decorator::test();
    factory::test();
    prototype::test();
    facade::test();
    builder::test();
    templateMethod::test();
}