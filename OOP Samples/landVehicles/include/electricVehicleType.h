#ifndef ELECTRICVEHICLETYPE_H
#define ELECTRICVEHICLETYPE_H

#include <landVehicleType.h>


class electricVehicleType : public landVehicleType
{
    public:
        electricVehicleType();
        void setBatteryCapacity(int bCapacityInKW);
        int getBatteryCapacity();
        void setBatteryChargeTimeInMins(int bChargeTime);
        int getBatteryChargeTimeInMins();
        void setBatteryCycles(int bCycles);
        int getBatteryCycles();

        virtual void printProperties() = 0;

        virtual ~electricVehicleType();

    protected:
        int batteryCapacityInKW;
        int batteryChargeTime;
        int batteryNoOfCycles;
        int minBatteryCapacity = 30;
        int maxBatteryCapacity = 1000;
        int minChargingTime = 10;
        int maxChargingTime = 600;
        int minCycles = 1000;
        int maxCycles = 50000;


    private:
};

#endif // ELECTRICVEHICLETYPE_H
