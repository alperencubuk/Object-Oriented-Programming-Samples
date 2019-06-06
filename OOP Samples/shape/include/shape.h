#include <iostream>
#ifndef SHAPE_H
#define SHAPE_H

using namespace std;

class shape
{
    public:
        shape(string shapeName = "");
        string getName();
        void setName(string shapeName);
        //Pure virtual function MUST be Implemented in derived classes
        virtual double surfaceArea() = 0;

        virtual ~shape();

    protected:

    private:
        string name;

};

#endif // SHAPE_H
