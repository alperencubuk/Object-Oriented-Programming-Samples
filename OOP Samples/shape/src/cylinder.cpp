#include "cylinder.h"

cylinder::cylinder(double cylinderRadius, double cylinderHeight, string name):circle(cylinderRadius, name)
{
    //ctor
    height = cylinderHeight;
}

double cylinder::surfaceArea(){

   return( circle::surfaceArea() * 2 + height * circle::perimeter());
}

cylinder::~cylinder()
{
    //dtor
}
