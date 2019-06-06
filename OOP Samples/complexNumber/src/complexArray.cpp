#include "complexArray.h"


/*COPY CONSTRUCTOR*/
complexArray::complexArray(const complexArray& otherComplexArray){

   this->aSize = otherComplexArray.aSize; //get the size of the array to be copied over

   this->cArray = new complexClass[this->aSize]; //allocate the complex number array

   for(int i = 0; i < aSize; i ++) //Deep copy everything
        this->cArray[i] = otherComplexArray.cArray[i];
}

/*CONVERT CONSTRUCTOR*/
int complexArray::findOccurancesInString(const string &str, const char ch){
   int charCount = 0;
   for(int searchIndex = 0; searchIndex < str.size(); searchIndex ++){
      if(str[searchIndex] == ch) charCount ++;
   }
   return charCount;
}

complexArray::complexArray(const string &complexArrayString){
   int inSize = 0;
   string complexNumberString = complexArrayString;
   string complexNumber;
   cArray = new complexClass[findOccurancesInString(complexNumberString, '|') + 1]; //allocate the complex number array
   for(int seperatorIndex = 0; seperatorIndex < complexArrayString.size(); seperatorIndex ++){
      if(complexArrayString[seperatorIndex] == '|'){
        complexNumber = complexNumberString.substr(0,  5);
        complexNumberString = complexNumberString.substr(6, complexArrayString.size() - 5);
        cArray[inSize ++] = complexNumber.c_str();
      }
   }
   cArray[inSize ++] = complexNumberString;
}

complexArray::complexArray(int arraySize)
{
    //ctor
    cArray = new complexClass[arraySize];
    aSize = arraySize;
}

complexClass& complexArray::operator[](int index){
    if(index <= 0) index = 0;
    else if(index >= aSize) index = aSize - 1;

    return this->cArray[index];
}

const complexArray& complexArray::operator=(const complexArray& objIn){
    int complexIndex;

    if(this != &objIn) {
        if (this->aSize > objIn.aSize)
        {
            this->aSize = objIn.aSize;
        }

        for (complexIndex = 0; complexIndex < this->aSize; complexIndex ++)
        {
            this->cArray[complexIndex] = objIn.cArray[complexIndex];
        }
    }
    return *this;
}


complexArray::~complexArray()
{

    //dtor
    delete []cArray;
}
