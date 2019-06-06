#ifndef POLYGON_H
#define POLYGON_H


class polygon
{
    public:
        void set_values(double width, double height);
        polygon(string name = "");
        virtual double area() = 0;
        virtual char *getName();
        virtual ~polygon();
        virtual void print_area() = 0;
    protected:
         double x, y;
         char *poly_name;
    private:
};

#endif // POLYGON_H
