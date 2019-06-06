#include <iostream>
#include "complexClass.h"
#include "complexArray.h"

using namespace std;
#if !IMPLEMENT_AS_MEMBER
complexClass operator+(const complexClass& o_in1, const complexClass& o_in2){
    complexClass tempComplexObject;

    tempComplexObject.real = o_in1.real + o_in2.real;
    tempComplexObject.imaginary = o_in1.imaginary + o_in2.imaginary;

    return tempComplexObject;
}

bool operator<(const complexClass& o_in1, const complexClass & o_in2){
   return (o_in1.imaginary < o_in2.imaginary) && (o_in1.real < o_in2.real);
}
#endif

ostream & operator<<(ostream & os, const complexClass& o_in) {

   os << "(" << o_in.real << "," << o_in.imaginary << ")";

   return os;
}

istream & operator>>(istream & is, complexClass& o_in) {

   is >> o_in.real >> o_in.imaginary;

   return is;
}

template <typename Type>
Type larger(Type firstValue, Type secondValue)
{
   	if(firstValue >= secondValue)
	   return firstValue;
   	else
	   return secondValue;
}




int main()
{
    complexClass complexNumber1, complexNumber2, complexNumber3;

    complexArray myComplexArray(100), yourComplexArray(100);

    //cin >> complexNumber1 >> complexNumber2;

    cout << ++complexNumber2 << complexNumber1++ << endl;

    cout << "Post incrementten sonra" <<complexNumber1 << endl;


    complexNumber3 = complexNumber1 + complexNumber2;

    cout << complexNumber3 << complexNumber1;

    cout << (complexNumber1 == complexNumber2);

    myComplexArray = yourComplexArray;

    //Please implement the conversion constructor for the following statement
    complexNumber3 = "(25.5,35.5)";

    //Convert Constructor for ComplexArray
    string cArray = "(1,2)|(3,4)|(5,7)|(6,9)";

    myComplexArray = cArray;


    int a = larger(4, 5);
    double c = larger(5.5, 6.8);
    complexClass cNumber4 = larger(complexClass(3,5), complexClass(4,8));
    string str1 = "a";
    string str2 = "v";

    string str3 = larger(str1, str2);

    return 0;
}
