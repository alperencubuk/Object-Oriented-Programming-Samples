#ifndef PROPERTY_H
#define PROPERTY_H
#include<string>
using namespace std;
struct salesData{
    double amount;
    string date;
};

class property
{
    public:
        property();
        virtual ~property();
        virtual void printLastSales(int) = 0;
        virtual void setSalesData(double, string) = 0;

    protected:
        int    numberOfRooms;
        int    numberOfStories;
        int    area;
        string address;
        struct salesData *saleData;
        int salesStored;
    private:
};

#endif // PROPERTY_H
