#ifndef HOUSE_H
#define HOUSE_H

#include "property.h"


class house : public property
{
    public:
        house();
        virtual ~house();
        house(int nOfRooms, int nOfStories, int sqMeter, int gardenA, string addr);
        void setSalesData(double, string);
        void printLastSales(int);

    protected:

    private:
        int gardenArea;
        int totalSales;
};

#endif // HOUSE_H
