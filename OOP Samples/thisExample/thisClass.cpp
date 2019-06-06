#include "thisClass.h"

thisClass::thisClass()
{
    a = 0;
}

thisClass thisClass::increament(){
   a ++;
   return *this;
}

thisClass thisClass::copyClass(){
     a = a + 2;
     return *this;
}

thisClass::~thisClass()
{
    //dtor
}
