#ifndef ECAR_H
#define ECAR_H

#include <electricVehicleType.h>


class eCar : public electricVehicleType
{
    public:
        eCar();
        void setRangeInKm(int range);
        int getRangeInKm();
        virtual void printProperties();
        virtual ~eCar();

    protected:
        int rangeInKm;
        int minRangeInKm = 60;
        int maxRangeInKm = 600;

    private:
};

#endif // ECAR_H
