#ifndef FLAT_H
#define FLAT_H

#include "../include/property.h"


class flat : public property
{
    public:
        flat();
        virtual ~flat();
        flat(int nOfRooms, int nOfStories, int sqMeter, int fl, string addr);
        void setSalesData(double, string);
        void printLastSales(int);
        flat & operator>(flat & otherObject);
        bool operator==(const flat &);
        double  getLastSale();

    protected:

    private:
        int floor;
        int totalSales;
};

#endif // FLAT_H
