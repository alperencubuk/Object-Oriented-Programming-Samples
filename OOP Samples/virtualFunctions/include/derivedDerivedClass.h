#ifndef DERIVEDDERIVEDCLASS_H
#define DERIVEDDERIVEDCLASS_H

#include <derivedClass.h>


class derivedDerivedClass : public derivedClass
{
    public:
        derivedDerivedClass();
        virtual void print();
        virtual ~derivedDerivedClass();

    protected:

    private:

        int c;
};

#endif // DERIVEDDERIVEDCLASS_H
