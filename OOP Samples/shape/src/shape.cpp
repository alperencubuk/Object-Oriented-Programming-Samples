#include "shape.h"

shape::shape(string shapeName)
{
    //ctor
    name = shapeName;
}

void shape::setName(string shapeName){
    name = shapeName;
}

string shape::getName() {
    return name;
}

shape::~shape()
{
    //dtor
}
