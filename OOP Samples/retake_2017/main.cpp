#include <iostream>
#include "flat.h"
#include "house.h"
using namespace std;

void printSalesData(property &p) {
   p.printLastSales(5);
}

int main()
{
    flat f1(3 /*Oda*/, 1 /*katsayisi*/, 100/*metrekare*/, 5 /*bulundugu kat*/, "2. Nolu Besirli" /*Adres*/);
    f1.setSalesData(150000, "01/01/2010");
    f1.setSalesData(180000, "01/01/2012");
    f1.setSalesData(210000, "01/01/2013");
    f1.setSalesData(250000, "01/01/2014");
    f1.setSalesData(230000, "01/01/2015");
    f1.setSalesData(260000, "01/01/2017");

    house h1(4, 2, 150, 500, "Toklu mahallesi");
    h1.setSalesData(250000, "01/01/2016");
    h1.setSalesData(350000, "01/01/2017");

    printSalesData(f1);


    return 0;
}
