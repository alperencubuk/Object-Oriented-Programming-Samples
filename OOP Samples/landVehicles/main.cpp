#include <iostream>

#include "eCar.h"
#include "iCar.h"

using namespace std;

void printVehicleProperties(landVehicleType &lv){
   lv.printProperties();
}


int main()
{

    eCar myTesla;
    iCar myFerrari;

    myTesla.setModel("Model X");
    myTesla.setMake("Tesla");
    myTesla.setBatteryCapacity(65);
    myTesla.setBatteryChargeTimeInMins(30);
    myTesla.setEngineType(landVehicleType::eType_Electric);
    myTesla.setNumOfWheels(4);
    myTesla.setPassengerCapacity(6);
    myTesla.setRangeInKm(500);
    myTesla.setPowerInKW(200);
    myTesla.setTopSpeed(250);


    myFerrari.setModel("F511");
    myFerrari.setMake("Ferrari");
    myFerrari.setEngineType(landVehicleType::eType_Petrol);
    myFerrari.setNumOfWheels(4);
    myFerrari.setPowerInKW(400);
    myFerrari.setTopSpeed(400);

    printVehicleProperties(myTesla);
    printVehicleProperties(myFerrari);

    cout << "Hello world!" << endl;
    return 0;
}
