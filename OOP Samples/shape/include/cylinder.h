#ifndef CYLINDER_H
#define CYLINDER_H

#include <circle.h>


class cylinder : public circle
{
    public:
        cylinder(double cylinderRadius = 0, double cylinderHeight = 0, string name = "");
        virtual double surfaceArea();
        virtual ~cylinder();

    protected:

    private:
        double height;
};

#endif // CYLINDER_H
