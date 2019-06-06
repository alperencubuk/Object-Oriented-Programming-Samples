#include "landVehicleType.h"

landVehicleType::landVehicleType()
{
     numOfWheels = 0;
     powerInKW = 0;
     topSpeed = 0;
     numOfPassengers = 0;
     vehicleTonnage = 0;
     vehicleMake = "";
     vehicleModel = "";
     eType = eType_Petrol;
     tType = tType_Manual;
    //ctor
}


void landVehicleType::setNumOfWheels(int nOfWheels){
   if(nOfWheels < minWheels || nOfWheels > maxWheels){
      cout << "Incorrect wheel number input" << endl;
   } else {
      numOfWheels = nOfWheels;
   }
}

int landVehicleType::getNumOfWheels(){
   return numOfWheels;
}

void landVehicleType::setPowerInKW(double pInKW){
   if(pInKW < 0){
      cout << "Incorrect Engine Power Input" << endl;
   } else {
      powerInKW = pInKW;
   }
}

double landVehicleType::getPowerInKW(){
   return powerInKW;
}


void landVehicleType::setTopSpeed(int tSpeed){
   if(tSpeed < 0){
      cout << "Incorrect Engine Power Input" << endl;
   } else {
      topSpeed = tSpeed;
   }
}

int landVehicleType::getTopSpeed(){
   return topSpeed;
}

void landVehicleType::setPassengerCapacity(int nOfPassengers){
   if(nOfPassengers < 0){
      cout << "Incorrect Passenger Capacity" << endl;
   } else {
      numOfPassengers = nOfPassengers;
   }
}

int landVehicleType::getPassengerCapacity(){
   return numOfPassengers;
}

void landVehicleType::setTonnage(double tonnage){
   if(tonnage < 0){
      cout << "Incorrect Cargo Capacity" << endl;
   } else {
      vehicleTonnage = tonnage;
   }
}

double landVehicleType::getTonnage(){
   return vehicleTonnage;
}

void landVehicleType::setMake(const string vMake){
    vehicleMake = vMake;
}

string landVehicleType::getMake()const{
    return vehicleMake;
}

void landVehicleType::setModel(const string vModel){
   vehicleModel = vModel;
}

string landVehicleType::getModel()const{
   return vehicleModel;
}

void landVehicleType::setEngineType(enum engineType eT){
   eType = eT;
}

enum landVehicleType::engineType landVehicleType::getEngineType(){
   return eType;
}

void landVehicleType::setTransmissionType(enum transmissionType tT){
    tType = tT;
}

enum landVehicleType::transmissionType landVehicleType::getTransmissionType(){
    return tType;
}


landVehicleType::~landVehicleType()
{
    //dtor
}
