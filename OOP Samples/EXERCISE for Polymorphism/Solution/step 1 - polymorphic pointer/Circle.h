#ifndef CIRCLE_H_INCLUDED
#define CIRCLE_H_INCLUDED
#include "Shape.h"

class Circle: public Shape
{
    double radius;
    double *x;
public:
    Circle(double);
    virtual void introduce();
    virtual double calculateArea();
    virtual double calculateCircumference();
    ~Circle();

};


#endif // CIRCLE_H_INCLUDED
