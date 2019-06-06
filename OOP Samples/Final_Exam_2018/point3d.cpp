#include "point3d.h"

point3d::point3d():point2d()
{
    z = 0;
    //ctor
}
point3d::point3d(double xIn, double yIn, double zIn):point2d(xIn, yIn){
    z=zIn;
}

double point3d::calculateLength(){
   return(sqrt(x*x + y*y + z*z));
}


point3d::~point3d()
{
    //dtor
}
