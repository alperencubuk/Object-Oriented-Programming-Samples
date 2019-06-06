#include "iceVehicleType.h"

iceVehicleType::iceVehicleType()
{
    cylinderVolumeInCC = 1500;
    numberOfCylinders = 4;
    //ctor
}

void iceVehicleType::setCylinderVolumeInCC(int cylinderVolume){
   if(cylinderVolume >= minCylinderVolume && cylinderVolume <= maxCylinderVolume){
      cylinderVolumeInCC = cylinderVolume;
   } else {
      cout << "Please enter correct cylinder volume between " << minCylinderVolume << " and " << maxCylinderVolume << endl;
      numberOfCylinders = minNumberOfCylinders;
   }
}

int iceVehicleType::getCylinderVolumeInCC(){
   return cylinderVolumeInCC;
}

void iceVehicleType::setNumberOfCylinders(int nOfCylinders){
   if(nOfCylinders >= minNumberOfCylinders && nOfCylinders <= maxNumberOfCylinders){
      numberOfCylinders = nOfCylinders;
   } else {
      cout << "Please enter correct number of cylinders between " << minNumberOfCylinders << " and " << maxNumberOfCylinders << endl;
      numberOfCylinders = minNumberOfCylinders;
   }
}

int iceVehicleType::getNumberOfCylinders(){
   return numberOfCylinders;
}


iceVehicleType::~iceVehicleType()
{
    //dtor
}
