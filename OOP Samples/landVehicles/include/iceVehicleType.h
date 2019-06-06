#ifndef ICEVEHICLETYPE_H
#define ICEVEHICLETYPE_H

#include <landVehicleType.h>


class iceVehicleType : public landVehicleType
{
    public:
        iceVehicleType();
        void setNumberOfCylinders(int nOfCylinders);
        int getNumberOfCylinders();
        void setCylinderVolumeInCC(int cylinderVolume);
        int getCylinderVolumeInCC();

        virtual void printProperties() = 0;

        virtual ~iceVehicleType();

    protected:
        int numberOfCylinders;
        int cylinderVolumeInCC;
        int minNumberOfCylinders = 1;
        int maxNumberOfCylinders = 16;
        int minCylinderVolume = 500;
        int maxCylinderVolume = 5000;

    private:
};

#endif // ICEVEHICLETYPE_H
