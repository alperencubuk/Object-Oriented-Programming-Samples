#include "opOverClass.h"


opOverClass::opOverClass()
{
    a = 10;
    b = 10;
    c = new int[10]; // never use new int(10), this create a new integer with value of 10
    //ctor
}

opOverClass::opOverClass(const opOverClass& o_in)
{
    a = o_in.a;
    b = o_in.b;
    c = new int[10];
    if(this != &o_in) {
      this->a = o_in.a;
      this->b = o_in.b;
      for (int i = 0; i < 10; i ++)
        this->c[i] = o_in.c[i];
    }
    //copy ctor
}


opOverClass::opOverClass(const opOverClass* o_in)
{
    a = o_in->a;
    b = o_in->b;
    c = new int[10];
    if(this != o_in) {
      this->a = o_in->a;
      this->b = o_in->b;
      for (int i = 0; i < 10; i ++)
        this->c[i] = o_in->c[i];
    }
    //copy ctor
}


opOverClass::opOverClass(int a_in, int b_in){
     a = a_in;
     b = b_in;
     c = new int[10];
}

const opOverClass&  opOverClass::operator=(const opOverClass& o_in){

   if(this != &o_in) {
      this->a = o_in.a;
      this->b = o_in.b;
      for (int i = 0; i < 10; i ++)
        this->c[i] = o_in.c[i];
   }
   return *this;
}


const opOverClass&  opOverClass::operator=(const opOverClass* o_in){

   if(this != o_in) {
      this->a = o_in->a;
      this->b = o_in->b;
      for (int i = 0; i < 10; i ++)
        this->c[i] = o_in->c[i];
   }
   return *this;
}


#if OVERLOAD_AS_MEMBER

opOverClass opOverClass::operator+(const opOverClass& o_in){
   opOverClass tempObject;
   tempObject.a = this->a + o_in.a;
   tempObject.b = this->b + o_in.b;
   return tempObject;
}

opOverClass opOverClass::operator-(const opOverClass& o_in) const{
   opOverClass tempObject;
   tempObject.a = this->a - o_in.a;
   tempObject.b = this->b - o_in.b;

   return tempObject;
}

opOverClass opOverClass::operator*(opOverClass o_in){
   opOverClass temp;
   temp.a = this->a * o_in.a;
   temp.b = this->b * o_in.b;
   return temp;
}
bool opOverClass::operator==(opOverClass o_in){
   if(this->a == o_in.a && this->b == o_in.b)
     return true;
   else
     return false;
}

opOverClass opOverClass::operator++(){
  ++(this->a);
  ++b;
  return *this;
}

opOverClass opOverClass::operator++(int u){
   opOverClass storedObject = *this;
   ++a;
   ++b;
   return storedObject;

}
#else
opOverClass operator*(opOverClass o_in1, opOverClass o_in2){
   opOverClass temp;
   temp.a = o_in1.a * o_in2.a;
   temp.b = o_in1.b * o_in2.b;
   return temp;
}
bool operator==(const opOverClass& o_in1, const opOverClass& o_in2){
   return (o_in1.a == o_in2.a && o_in1.b == o_in2.b);
}

opOverClass operator++(opOverClass & o_in){
    o_in.a ++;
    o_in.b ++;
    return o_in;
}


opOverClass operator++(opOverClass & o_in, int u){
    opOverClass tutulanNesne = o_in;
    o_in.a ++;
    o_in.b ++;
    return tutulanNesne;
}

#endif


int opOverClass::get_a(){
  return a;
}
int opOverClass::get_b(){
  return b;
}
int opOverClass::get_c(int index){
   return c[index];
}
opOverClass::~opOverClass()
{
    delete [] c;
    //dtor
}
