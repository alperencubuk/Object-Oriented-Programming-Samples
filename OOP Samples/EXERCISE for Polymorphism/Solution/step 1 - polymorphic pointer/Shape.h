#include <iostream>
#ifndef SHAPE_H_INCLUDED
#define SHAPE_H_INCLUDED

class Shape
{
    public:
        Shape();
        virtual void introduce() = 0;
        virtual double calculateArea();
        virtual double calculateCircumference();
        virtual ~Shape(){std::cout << "shape destructor" << std::endl;}
};

#endif // SHAPE_H_INCLUDED
