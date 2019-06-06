#ifndef LANDVEHICLETYPE_H
#define LANDVEHICLETYPE_H

#include <string>
#include <iostream>

using namespace std;

class landVehicleType
{

    public:
         enum engineType{eType_Diesel, eType_Petrol, eType_Electric};
         enum transmissionType{tType_Manual, tType_Automatic, tType_Triptronic};

    protected:
         const int maxWheels = 50;
         const int minWheels = 2;

         int numOfWheels;
         double powerInKW;
         int topSpeed;
         int numOfPassengers;
         double vehicleTonnage;
         string vehicleMake;
         string vehicleModel;
         engineType eType;
         transmissionType tType;

    public:
        landVehicleType();

        virtual void printProperties() = 0;

        void setNumOfWheels(int nOfWheels);
        int getNumOfWheels();
        void setPowerInKW(double pInKW);
        double getPowerInKW();
        void setTopSpeed(int tSpeed);
        int getTopSpeed();
        void setPassengerCapacity(int nOfPassengers);
        int getPassengerCapacity();
        void setTonnage(double tonnage);
        double getTonnage();
        void setMake(const string vMake);
        string getMake()const;
        void setModel(const string vModel);
        string getModel()const;
        void setEngineType(enum engineType eT);
        enum engineType getEngineType();
        void setTransmissionType(enum transmissionType tT);
        enum transmissionType getTransmissionType();

        virtual ~landVehicleType();

    private:


};

#endif // LANDVEHICLETYPE_H
