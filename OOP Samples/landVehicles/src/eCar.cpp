#include "eCar.h"

eCar::eCar()
{
    //ctor
    rangeInKm = minRangeInKm;
}

void eCar::setRangeInKm(int range){
   if(range >= minRangeInKm && range <= maxRangeInKm) {
      rangeInKm = range;
   } else {
      rangeInKm = range;
   }
}

int eCar::getRangeInKm(){
   return rangeInKm;
}

void eCar::printProperties(){
   cout << "Vehicle Make = " << vehicleMake << endl;
   cout << "Vehicle Model = " << vehicleModel << endl;
   cout << "Vehicle Wheels = " << numOfWheels << endl;
   cout << "Vehicle Passenger Capacity = " << numOfPassengers << endl;
   cout << "Vehicle Cargo Capacity in Tons = " << vehicleTonnage << endl;
   cout << "Vehicle Top Speed = " << topSpeed << endl;
   cout << "Vehicle Power in KW = " << powerInKW << endl;
   switch(eType){
     case eType_Petrol:
       cout << "Vehicle Engine Type = Petrol" << endl;
       break;
     case eType_Diesel:
       cout << "Vehicle Engine Type = Diesel" << endl;
       break;
     case eType_Electric:
       cout << "Vehicle Engine Type = Electric" << endl;
       break;
     default:
        break;
   }

   switch(tType){
     case tType_Manual:
       cout << "Vehicle Transmission Type = Manual" << endl;
       break;
     case tType_Automatic:
       cout << "Vehicle Transmission Type = Automatic" << endl;
       break;
     case tType_Triptronic:
       cout << "Vehicle Transmission Type = Triptronic" << endl;
       break;
     default:
        break;
   }

   cout << "Battery Capacity" << batteryCapacityInKW << endl;
   cout << "Battery Charge Time" << batteryChargeTime << endl;
   cout << "Battery Cycles" << batteryNoOfCycles << endl;
   cout << "Electric Range is " << rangeInKm << endl;
}

eCar::~eCar()
{
    //dtor
}
