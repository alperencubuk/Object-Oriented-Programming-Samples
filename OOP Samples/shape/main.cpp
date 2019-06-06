#include <iostream>
#include "shape.h"
#include "cylinder.h"
using namespace std;

//DIKKAT: DOGRU BIR KALITIM AGACI ICERMEZ
//USE WITH CAUTION

void calculateShapeSurfaceArea(shape *s1, shape *s2){

   cout << s1->surfaceArea() << ":" << s2->surfaceArea() << endl;
}

int main()
{
    cylinder myCylinder(10, 10.5, "myCylinder");
    circle myCircle(10, "Acircle");

    calculateShapeSurfaceArea(&myCircle, &myCylinder);

    return 0;
}
