#include "../include/pClass.h"

pClass::pClass()
{
    name = new char[10];
    name[0] = 'O';
    name[1] = 'b';
    name[2] = 'j';
    val1 = 0;
    //ctor
}

void pClass::setName(const char *oName){

   int i = 0;
   while(oName[i] != 0){
      name[i] = oName[i];

      i++;
   }

   name[i] = 0;

}

pClass::pClass(const char *objName){
  int i = 0;

  while(objName[i] != 0){
    i++;
  }
  name = new char[i + 1];

  i = 0;
  while(objName[i] != 0){
    name[i] = objName[i];
    i++;
  }

}

pClass::pClass(const pClass &pObj){

     name = new char[10];

     this->val1 = pObj.val1;

     for(int i=0; i<10; i++)
        this->name[i] = pObj.name[i];
}

pClass::~pClass()
{
    delete [] name;
    name = 0;
    //dtor
}
