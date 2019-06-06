#ifndef ICAR_H
#define ICAR_H

#include <iceVehicleType.h>


class iCar : public iceVehicleType
{
    public:
        iCar();

        void setNumberOfAirBags(int nAirBags);
        int  getNumberOfAirBags();

        virtual void printProperties();

        virtual ~iCar();

    protected:
        int numberOfAirBags;
        int minNumberOfAirBags = 2;
        int maxNumberOfAirBags = 20;
    private:
};

#endif // ICAR_H
