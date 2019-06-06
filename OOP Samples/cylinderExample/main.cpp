#include <iostream>
#include "cylinderType.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cylinderType myCylinder(3, 3);

    myCylinder.printSurfaceArea();
    myCylinder.printVolume();

    return 0;
}
