#include "house.h"
#include <iostream>

using namespace std;

house::house()
{
    //ctor
    numberOfRooms = 4;
    numberOfStories = 2;
    area = 100;
    address = "";
    salesStored = 5;
    saleData = new salesData[salesStored];
    //ctor
}

house::house(int nOfRooms, int nOfStories, int sqMeter, int gardenA, string addr) {
    numberOfRooms = nOfRooms;
    numberOfStories = nOfStories;
    area = sqMeter;
    address = addr;
    gardenArea = gardenA;
    totalSales = 0;
    salesStored = 5;
    saleData = new salesData[salesStored];
}

void house::setSalesData(double amount, string date){
    if(totalSales >= salesStored ) { //keep last salesStored sales
        for(int i = 0; i < salesStored - 1; i ++)
            saleData[i] = saleData[i + 1];
        saleData[salesStored - 1].amount = amount;
        saleData[salesStored - 1].date = date;
    }else {
      saleData[totalSales].amount = amount;
      saleData[totalSales++].date = date;
    }
}

void house::printLastSales(int numberOfSales){
    for(int i = 0; i < numberOfSales; i++)
        cout << "Sales Amount:" << saleData[i].amount << ", Sales Date:" << saleData[i].date << endl;
}



house::~house()
{
    delete [] saleData;
    //dtor
}
