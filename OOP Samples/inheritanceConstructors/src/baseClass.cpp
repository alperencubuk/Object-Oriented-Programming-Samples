#include <iostream>
#include "baseClass.h"

using namespace std;

baseClass::baseClass()
{
    a = 0;
    b = 0;
    c = 0;
    //ctor
}

baseClass::baseClass(int x, int y, int z)
{
   a = x;
   b = y;
   c = z;
}

void baseClass::print()
{
    cout << "BaseClass" <<endl;
    cout << endl << "a = " << a << "b = " << b  << "c = " << c << endl;
}
baseClass::~baseClass()
{
    //dtor
}
