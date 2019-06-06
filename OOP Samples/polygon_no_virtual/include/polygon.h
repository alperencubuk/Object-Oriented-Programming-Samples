#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
    public:
        void set_values(double width, double height);
        polygon();
        virtual double area();
        char *getName();
        ~polygon();
        void print_area();
    protected:
         double x, y;
         char *poly_name;
    private:
};

#endif // POLYGON_H
