#ifndef CIRCLE_H
#define CIRCLE_H
#include <iostream>
#include <shape.h>
#define PI 3.14

using namespace std;

class circle : public shape
{
    public:
        circle(double circleRadius = 0, string name = "");
        virtual double surfaceArea();
        double perimeter();
        virtual ~circle();

    protected:

    private:
        double radius;
};

#endif // CIRCLE_H
