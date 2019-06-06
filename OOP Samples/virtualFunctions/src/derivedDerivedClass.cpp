#include <iostream>
#include "derivedDerivedClass.h"

derivedDerivedClass::derivedDerivedClass()
{
    //ctor
    c = 10;
}

void derivedDerivedClass::print(){
   derivedClass::print();
   cout << c <<endl;
}

derivedDerivedClass::~derivedDerivedClass()
{
    //dtor
}
