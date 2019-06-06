#include <iostream>
#include "derivedClass.h"

using namespace std;

derivedClass::derivedClass()
{
    x = 0;
    y = 0;
    //ctor
}

derivedClass::derivedClass(int k, int l, int m, int n, int o):baseClass(k, l, m)
{
    x = n;
    y = o;
    //ctor
}

void derivedClass::print()
{
    cout << endl << "derived Class " << endl;

    cout << "x =" << x << "y =" << y << endl;

}
derivedClass::~derivedClass()
{
    //dtor
}
