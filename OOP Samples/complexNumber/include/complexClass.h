#include <iostream>
#include <string>
#ifndef COMPLEXCLASS_H
#define COMPLEXCLASS_H
#define IMPLEMENT_AS_MEMBER 1
using namespace std;
class complexClass
{
    friend ostream & operator<<(ostream &, const complexClass&);
    friend istream & operator>>(istream &, complexClass&);

    public:
        complexClass(double=0, double=0);
        complexClass(const string&);
        complexClass(const char*);
#if IMPLEMENT_AS_MEMBER
        complexClass operator+( const complexClass&  o_in) const;
        bool operator==(const complexClass & o_in) const;
        bool operator>=(const complexClass & o_in) const;
        complexClass operator++();
        complexClass operator++(int);
#else
        friend complexClass operator+(const complexClass& o_in1, const complexClass& o_in2);
        friend bool operator<(const complexClass& o_in1, const complexClass & o_in2);
#endif
        virtual ~complexClass();

    protected:

    private:
        double real;
        double imaginary;

};

#endif // COMPLEXCLASS_H
