#include "vectorArray.h"

vectorArray::vectorArray()
{
    vSize = 100;
    vArray = new vector[vSize];
    //ctor
}

vectorArray::vectorArray(int vectorSize){
   vSize = vectorSize;
   vArray = new vector[vectorSize];
}

vector& vectorArray::operator[](int index) const{

   if(index>=0){
     return vArray[index];
   }
   return vArray[0];
}

const vectorArray& vectorArray::operator=(const vectorArray& vArrayIn){

  if(this != &vArrayIn){
    int vectorIndex, uVectorSize;

    if(vSize < vArrayIn.vSize)
      uVectorSize = vSize;
    else
      uVectorSize = vArrayIn.vSize;

    for(vectorIndex=0; vectorIndex < uVectorSize; vectorIndex ++){
      vArray[vectorIndex] = vArrayIn.vArray[vectorIndex];
    }

    vSize = uVectorSize;
  }
  return *this;
}

vectorArray::~vectorArray()
{
    delete [] vArray;
    //dtor
}
