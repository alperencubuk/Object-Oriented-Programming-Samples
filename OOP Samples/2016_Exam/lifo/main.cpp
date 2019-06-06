#include <iostream>
#include "lifo.h"
#include "complexNumber.h"
using namespace std;

int main()
{
    lifo<complexNumber> a(10);
    lifo<complexNumber> b(20);
    complexNumber x(5.4, 7.0);
    complexNumber y(5.7, 6.7);

    a.push(x++);
    a.push(x++);
    b.push(y++);
    b.push(y++);

    lifo<complexNumber> c = a + b;

    //double d = a * b;

    //cout << "Hello world!" << c[3] << endl;
    return 0;
}
