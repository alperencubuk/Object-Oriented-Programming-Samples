#include "studentType.h"

studentType::studentType()
{
    //ctor
}


studentType& studentType::setFirstName(string name){

  studentName = name;

  return *this;

}
studentType& studentType::setLastName(string surname){

   studentSurname = surname;

   return *this;
}


void studentType::setAddress(string address){

   studentAddress = address;
}


studentType::~studentType()
{
    //dtor
}
