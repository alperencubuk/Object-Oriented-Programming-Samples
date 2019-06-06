#include "complexClass.h"
#include <stdlib.h>

complexClass::complexClass(double real_in, double imaginary_in)
{
    real = real_in;
    imaginary = imaginary_in;
    //ctor
}

complexClass::complexClass(const string& complexNum){

}

complexClass::complexClass(const char * complexNum){
   string complexNumber = complexNum;
   real = atof(&complexNumber[1]);
   imaginary = atof(&complexNumber [complexNumber.find(",") + 1]);
}




#if 1// IMPLEMENT_AS_MEMBER
complexClass complexClass::operator+( const complexClass&  o_in) const {
     complexClass tempComplexNumber;

     tempComplexNumber.real = real + o_in.real;
     tempComplexNumber.imaginary = imaginary + o_in.imaginary;

     return tempComplexNumber;
}

bool complexClass::operator>=(const complexClass& o_in) const {

   double r1, r2;

   r1 = this->real * this->real + this->imaginary * this->imaginary;
   r2 = o_in.real * o_in.real + o_in.imaginary * o_in.imaginary;

   return (r1 >= r2);
}

bool complexClass::operator==(const complexClass& o_in) const {

    return (this->real == o_in.real) && (this->imaginary == o_in.imaginary);
}

complexClass complexClass::operator++(){

   ++real;
   ++imaginary;
   return *this;
}

complexClass complexClass::operator++(int dummy){
   complexClass tempObject = *this;

   real++;
   imaginary++;

   return tempObject;

}
#endif


complexClass::~complexClass()
{
    //dtor
}
