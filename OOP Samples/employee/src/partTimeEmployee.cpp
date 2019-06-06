#include "partTimeEmployee.h"

partTimeEmployee::partTimeEmployee()
{
    //ctor
    payRate = 0;
    hoursWorked = 0;
}

partTimeEmployee::partTimeEmployee(string firstIn, string lastIn, string addressIn, double rateIn, double hoursIn):personType(firstIn, lastIn, addressIn){
   payRate = rateIn;
   hoursWorked = hoursIn;
}


void partTimeEmployee::print(){

   personType::printName();
   personType::printAddrress();
   cout << "Pay of the employee: " << calculatePay() << endl;
}

double partTimeEmployee::calculatePay(){
   return payRate * hoursWorked;
}

void partTimeEmployee::setRate(double inRate){
    payRate = inRate;
}

void partTimeEmployee::setHours(double inHours){
    hoursWorked = inHours;
}

partTimeEmployee::~partTimeEmployee()
{
    //dtor
}
