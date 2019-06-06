#ifndef point2D_H
#define point2D_H
#include "point1D.h"

class point2d:public point1d
{
    public:
        point2d();
        point2d(double xIn, double yIn);
        virtual ~point2d();
        virtual double calculateLength();

    protected:
        double y;

    private:
};

#endif // point2D_H
