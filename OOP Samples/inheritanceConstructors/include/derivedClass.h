#ifndef DERIVEDCLASS_H
#define DERIVEDCLASS_H

#include <baseClass.h>


class derivedClass : public baseClass
{
    public:
        void print();
        derivedClass();
        derivedClass(int k, int l, int m, int n, int o);
        virtual ~derivedClass();

    protected:

    private:
        int x,y;
};

#endif // DERIVEDCLASS_H
