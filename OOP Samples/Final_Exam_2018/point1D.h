#ifndef point1D_H
#define point1D_H
#include <math.h>


class point1d
{
    public:
        point1d();
        point1d(double xIn);
        virtual ~point1d();
        virtual double calculateLength();

    protected:
        double x;

    private:

};

#endif // point1D_H
