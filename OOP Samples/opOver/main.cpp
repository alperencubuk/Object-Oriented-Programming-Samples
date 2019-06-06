#include <iostream>
#include "opOverClass.h"
using namespace std;

#define DEBUG 0

opOverClass operator-(const opOverClass & o_in1, const opOverClass & o_in2) {
    opOverClass tempObject;

    tempObject.a = o_in1.a - o_in2.a;
    tempObject.b = o_in1.b - o_in2.b;

    return tempObject;
 }

istream& operator >>(istream& is, opOverClass& o_in){
   is >> o_in.a >> o_in.b;
   return is;
}

ostream& operator <<(ostream& os, const opOverClass& o_in){
   os << "(" << o_in.a << "," << o_in.b << ")" << endl;
   return os;
}

int main()
{
    opOverClass a(10, 15);
    opOverClass b(15, 15);
    opOverClass d(10,10);
    opOverClass c[10];
    for(int i = 0; i < 10; i ++)
        c[i] = new opOverClass();

#if DEBUG
    if (a == b)
      cout << "they are equal" << endl;
    else
      cout << "they are not equal" << endl;
#endif

    d = a - b;

    cout << ++d << "Value of pre increment" << endl;
    cout << d++ << d++ << "Value of post increment" << endl;
    cout << d << "Value of d after post increment" << endl;
    return 0;
}
