#ifndef CYLINDERTYPE_H
#define CYLINDERTYPE_H


class cylinderType
{
    public:
        cylinderType();
        cylinderType(double heightIn, double radiusIn);
        void printVolume();
        void printSurfaceArea();
        void setHeight(double heightIn);
        void setRadius(double radiusIn);
        virtual ~cylinderType();

    protected:

    private:
        double height;
        double radius;
        const double pi = 3.14159265359;

        double calculateVolume();
        double calculateSurfaceArea();
};

#endif // CYLINDERTYPE_H
