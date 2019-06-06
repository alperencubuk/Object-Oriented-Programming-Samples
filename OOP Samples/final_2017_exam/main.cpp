#include <iostream>
#include "athlete.h"
#include "JavelinThrower.h"
#include "shortDistanceRunner.h"

using namespace std;

void printPerformanceData(athlete &ath) {

   ath.printPerformanceData(10);
   ath.printBestPerformance();

}

int main()
{
    JavelinThrower jt("Sedat", "Gormus", 15);
    shortDistanceRunner sr("Mehmet", "Gormus", 15, 100);

    JavelinThrower jt1("Hebe", "Hube", 15);

    jt.setPerformanceData("1/1/2018", 125, "Trabzon");
    sr.setPerformanceData("1/1/2018", 9.95, "Trabzon");

    printPerformanceData(jt);
    printPerformanceData(sr);

    struct performanceJT p = jt[0];
    jt1 = jt;

    return 0;
}
