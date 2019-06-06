#include <iostream>
#include "baseClass.h"
#include "derivedClass.h"

using namespace std;

int main()
{
    baseClass obj1;
    derivedClass obj2;
    derivedClass obj3(10,20,30,40,50);
    derivedClass *obj4 = new derivedClass;
    derivedClass *obj5 = new derivedClass(70, 80, 90, 100, 110);

    obj1.print();

    obj2.print();

    obj3.print();

    obj4->print();

    obj5->print();

    delete obj4;
    delete obj5;

    return 0;
}
