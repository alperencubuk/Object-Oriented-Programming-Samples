#include "electricVehicleType.h"

electricVehicleType::electricVehicleType()
{
    batteryCapacityInKW = minBatteryCapacity;
    batteryChargeTime = minChargingTime;
    batteryNoOfCycles = minCycles;
    //ctor
}

void electricVehicleType::setBatteryCapacity(int bCapacityInKW){
   if(bCapacityInKW >= minBatteryCapacity && bCapacityInKW <= maxBatteryCapacity) {
      batteryCapacityInKW = bCapacityInKW;
   } else {
      batteryCapacityInKW = minBatteryCapacity;
   }
}
int electricVehicleType::getBatteryCapacity(){
    return batteryCapacityInKW;
}

void electricVehicleType::setBatteryChargeTimeInMins(int bChargeTime){
    if(bChargeTime >= minChargingTime && bChargeTime <= maxChargingTime){
       batteryChargeTime = bChargeTime;
    } else {
       batteryChargeTime = minChargingTime;
    }
}
int electricVehicleType::getBatteryChargeTimeInMins(){
    return batteryChargeTime;
}
void electricVehicleType::setBatteryCycles(int bCycles){
    if(bCycles >= minCycles && bCycles <= maxCycles){
       batteryNoOfCycles = bCycles;
    } else {
       batteryNoOfCycles = minCycles;
    }
}
int electricVehicleType::getBatteryCycles(){
    return batteryNoOfCycles;
}

electricVehicleType::~electricVehicleType()
{
    //dtor
}
