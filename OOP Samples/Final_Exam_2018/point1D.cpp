#include "point1D.h"

point1d::point1d()
{
    x = 0;
    //ctor
}

point1d::point1d(double xIn){
   x = xIn;
}

double point1d::calculateLength(){
     return sqrt(x*x);
}


point1d::~point1d()
{
    //dtor
}
