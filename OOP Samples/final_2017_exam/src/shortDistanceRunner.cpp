#include <iostream>
#include "shortDistanceRunner.h"

using namespace std;

shortDistanceRunner::shortDistanceRunner(const string &rName, const string &rSurname, const int &historyCount, const int &rDistance)
{
    name = rName;
    surname = rSurname;
    performanceData = new performance[historyCount];
    numberOfRecords = 0;
    runningDistance = rDistance;
    //ctor
}

shortDistanceRunner::~shortDistanceRunner()
{
    delete [] performanceData;
    //dtor
}

void shortDistanceRunner::printBestPerformance(){
    int bestPerformance = performanceData[0].fastestTime;
    int bestPerformanceIndex = 0;

    for (int index = 1; index < numberOfRecords; index ++ ) {
        if(bestPerformance > performanceData[index].fastestTime){
            bestPerformanceIndex = index;
            bestPerformance = performanceData[index].fastestTime;
        }
    }
    cout <<  "Best Performance of " << name + " " + surname << " is achieved on: " << performanceData[bestPerformanceIndex].date << "--" << performanceData[bestPerformanceIndex].city << "--" << performanceData[bestPerformanceIndex].fastestTime << " seconds" << endl;
}

void shortDistanceRunner::printPerformanceData(int printCount){
    int upperIndex;
    cout << "Name : " << name << " Surname : " <<  surname << endl;
    if(printCount <= numberOfRecords)
        upperIndex = printCount;
    else
        upperIndex = numberOfRecords;

    for (int index = 0; index < upperIndex; index ++ ) {
        cout << index + 1 << "-)" << " Date : " << performanceData[index].date << "--" << performanceData[index].city << "--" << performanceData[index].fastestTime << " seconds for " <<    runningDistance << " meters running" << endl;
    }
}

void shortDistanceRunner::setPerformanceData(string date, double time, string recordCity){
    performanceData[numberOfRecords].date = date;
    performanceData[numberOfRecords].fastestTime = time;
    performanceData[numberOfRecords ++].city = recordCity;
}
