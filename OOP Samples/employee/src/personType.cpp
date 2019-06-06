#include "personType.h"

personType::personType()
{
    //ctor
    firstName = "";
    lastName = "";
    homeAddress = "";
}

personType::personType(string firstIn, string lastIn, string addressIn)
{
    //ctor
    firstName = firstIn;
    lastName = lastIn;
    homeAddress = addressIn;
}

void personType::setName(string first, string last){
    firstName = first;
    lastName = last;
}

void personType::setAddress(string address){
    homeAddress = address;
}

void personType::printAddrress(){

   cout << "Address of the person: " << homeAddress << endl;

}

void personType::printName(){

   cout << "Name of the person: " << firstName << lastName << endl;

}



personType::~personType()
{
    //dtor
}
