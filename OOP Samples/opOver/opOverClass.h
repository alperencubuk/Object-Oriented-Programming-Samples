#ifndef OPOVERCLASS_H
#define OPOVERCLASS_H
#define OVERLOAD_AS_MEMBER 1
#include <iostream>
using namespace std;

class opOverClass
{

   //Overload stream extracion
   friend ostream& operator <<(ostream& os, const opOverClass& o_in);
   //Overload stream insertion
   friend istream& operator >>(istream& is, opOverClass& o_in);

   friend opOverClass operator-(const opOverClass &, const opOverClass &);


 public :
   opOverClass();
   opOverClass(const opOverClass& o_in); //copy constructor with reference
   opOverClass(const opOverClass* o_in); // copy constructor with address
   opOverClass(int a_in, int b_in);

   int get_a();
   int get_b();
   int get_c(int index);

   //Overload assignment operator
   const opOverClass& operator=(const opOverClass*); // assignment from a pointer
   const opOverClass& operator=(const opOverClass&); // assignment from a reference
#if OVERLOAD_AS_MEMBER
 //overload  ==
   bool operator==(opOverClass o_in);
   opOverClass operator*(opOverClass o_in);
   opOverClass operator++();
   opOverClass operator++(int u);
    //Overload  -
   opOverClass operator-(const opOverClass& o_in) const;
      //Overload  +
   opOverClass operator+(const opOverClass& o_in);


#else
   friend bool operator==(const opOverClass & o_in1, const opOverClass& o_in2);
   friend opOverClass operator*(opOverClass o_in1, opOverClass o_in2);
   friend opOverClass operator++(opOverClass& o_in);
   friend opOverClass operator++(opOverClass& o_in, int u);
#endif
   virtual ~opOverClass();


   private:
   double a;
   double b;
   int *c;
};
#endif // OPOVERCLASS_H
