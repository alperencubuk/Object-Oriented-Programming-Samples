#ifndef point3D_H
#define point3D_H

#include "point2d.h"


class point3d : public point2d
{
    public:
        point3d();
        point3d(double xIn, double yIn, double zIn);
        virtual ~point3d();
        virtual double calculateLength();

    protected:
        double z;

    private:
};

#endif // point3D_H
