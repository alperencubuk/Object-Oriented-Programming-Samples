#include <iostream>
#include <iomanip>
#include <cstring>
#include <cassert>
#include "newString.h"

using namespace std;

newString::newString()
{
  strLength = 1; //allocate astring with a length of only one char
  strPtr = new char[1];
  strcpy(strPtr,"");
  //ctor
}

newString::newString(const char * inStr){
  strLength = strlen(inStr);
  strPtr = new char[strLength+1]; 	//allocate
  strcpy(strPtr, inStr);  //copy string into strPtr
}

newString::newString(const newString& strToCopy)
{
	strLength = strToCopy.strLength;
	strPtr = new char[strLength + 1];
	strcpy(strPtr, strToCopy.strPtr);
}


char & newString::operator[] (int index){
   if(index >= 0 && index < strLength) {
     return strPtr[index];
   } else
     return strPtr[0];
}

//overload const [] operator
const char & newString::operator[](int index) const{

   if(index >= 0 && index <= strLength)
      return strPtr[index];
   else
      return strPtr[0];
}

bool newString::operator==(const newString& inStr) const {

   if (strLength != inStr.strLength) return false;
   else {
      /*for (int strIndex = 0; strIndex < strLength; strIndex ++)
         if(strPtr[strIndex] != inStr.strPtr[strIndex]) return false;
         */
      int strIndex = 0;
      while(strPtr[strIndex] != '\0'){
         if(strPtr[strIndex] != inStr.strPtr[strIndex]) return false;
         strIndex ++;
      }

      return true;

   }
}

//overload the assignment operator
const newString& newString::operator=(const newString& inStr){
   delete [] strPtr;
   strLength = inStr.strLength;

   strPtr = new char[strLength + 1];

   for (int index = 0; index < strLength; index ++ )
       strPtr[index] = inStr.strPtr[index];

   return *this;
}

newString::~newString()
{
    delete [] strPtr;
    //dtor
}
