#include "point2d.h"

point2d::point2d():point1d()
{
    y = 0;
    //ctor
}

point2d::point2d(double xIn, double yIn):point1d(xIn){
    y = yIn;
}

double point2d::calculateLength(){
   return sqrt(x*x + y*y);
}

point2d::~point2d()
{
    //dtor
}
