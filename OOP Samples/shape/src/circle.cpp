#include "circle.h"

circle::circle(double circleRadius, string name):shape(name)
{
    //ctor
    radius = circleRadius;
}

double circle::surfaceArea(){
   return PI*radius*radius;
}

double circle::perimeter(){
   return 2*PI*radius;
}
circle::~circle()
{
    //dtor
}
