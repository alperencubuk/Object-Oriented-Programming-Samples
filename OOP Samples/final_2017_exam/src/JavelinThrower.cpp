#include <iostream>
#include <string>
#include "JavelinThrower.h"
using namespace std;

JavelinThrower::JavelinThrower(const string &jName, const string &jSurname, int performanceHistory)
{
    //ctor
    name = jName;
    surname = jSurname;
    performanceHistory = performanceHistory;
    performanceData = new performanceJT[performanceHistory];
    numberOfRecords = 0;
}

void JavelinThrower::printPerformanceData(int printCount){
    int upperIndex;
    cout << "Name : " << name << " Surname : " <<  surname << endl;
    if(printCount <= numberOfRecords)
        upperIndex = printCount;
    else
        upperIndex = numberOfRecords;

    for (int index = 0; index < upperIndex; index ++ ) {
        cout << index + 1 << "-)" << " Date : " << performanceData[index].date << "--" << performanceData[index].city << "--" << performanceData[index].longestThrow << " meters for javelin throwing" << endl;
    }
}

JavelinThrower JavelinThrower::operator=(const JavelinThrower& otherObject){


    if(this != &otherObject) {
        this->DoB = otherObject.DoB;
        this->numberOfRecords = otherObject.numberOfRecords;
        this->performanceHistoryCount = otherObject.performanceHistoryCount;

        for(int index = 0; index < otherObject.numberOfRecords; index ++){
            this->performanceData[index].city = otherObject.performanceData[index].city;
            this->performanceData[index].date = otherObject.performanceData[index].date;
            this->performanceData[index].longestThrow = otherObject.performanceData[index].longestThrow;
        }
    }

    return *this;

}

void JavelinThrower::printBestPerformance(){
    int bestPerformance = performanceData[0].longestThrow;
    int bestPerformanceIndex = 0;

    for (int index = 1; index < numberOfRecords; index ++ ) {
        if(bestPerformance < performanceData[index].longestThrow){
            bestPerformanceIndex = index;
            bestPerformance = performanceData[index].longestThrow;
        }
    }

    cout <<  "Best Performance of " << name + " " + surname << " is achieved on: " << performanceData[bestPerformanceIndex].date << "--" << performanceData[bestPerformanceIndex].city << "--" << performanceData[bestPerformanceIndex].longestThrow << " meters" << endl;
}


struct performanceJT JavelinThrower::operator[](int index){
    if(index>=0 && index <= numberOfRecords)
        return performanceData[index];
    return performanceData[0];
}
void JavelinThrower::setPerformanceData(string date, double distance, string recordCity){
   performanceData[numberOfRecords].date = date;
   performanceData[numberOfRecords].longestThrow = distance;
   performanceData[numberOfRecords ++].city = recordCity;
}

JavelinThrower::~JavelinThrower()
{
    delete [] performanceData;
    //dtor
}
