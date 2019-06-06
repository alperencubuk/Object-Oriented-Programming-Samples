#include <iostream>

#include "include/pClass.h"

using namespace std;

int main()
{
    pClass pObj1("obj1");

    {
        pClass pObj2(pObj1);

        cout << "Hello world!" << endl;

    }


    return 0;
}
