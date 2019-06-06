#include "../include/flat.h"
#include <iostream>
using namespace std;

flat::flat()
{
    //ctor
    numberOfRooms = 3;
    numberOfStories = 1;
    area = 100;
    address = "";
    salesStored = 5;
    saleData = new salesData[salesStored];
}

flat::flat(int nOfRooms, int nOfStories, int sqMeter, int fl, string addr) {
    numberOfRooms = nOfRooms;
    numberOfStories = nOfStories;
    area = sqMeter;
    address = addr;
    floor = fl;
    totalSales = 0;
    salesStored = 5;
    saleData = new salesData[salesStored];
}

void flat::setSalesData(double amount, string date){
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

void flat::printLastSales(int numberOfSales){
    for(int i = 0; i < numberOfSales; i++)
        cout << "Sales Amount:" << saleData[i].amount << ", Sales Date:" << saleData[i].date << endl;
}

double  flat::getLastSale(){
    return saleData[totalSales - 1].amount;

}

flat & flat::operator>(flat & otherObject){

    if (this->getLastSale() > otherObject.getLastSale()) {
        return *this;
    } else {
        return otherObject;
    }
}

bool flat::operator==(const flat & otherObject){

     if(this->numberOfRooms != otherObject.numberOfRooms)
        return false;
     else
        return true;
}

flat::~flat()
{
    delete [] saleData;
    //dtor
}
