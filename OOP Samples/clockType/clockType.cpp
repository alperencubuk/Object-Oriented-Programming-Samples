#include "clockType.h"
#include <iostream>

using namespace std;

clockType::clockType(int hour, int minute, int second)
{
    hr = hour;
    min = minute;
    sec = second;
    //ctor
}

void clockType::setTime(int hour, int minute, int second){
    hr = hour;
    min = minute;
    sec = second;
}

void clockType::printTime(){
   cout << hr << ":" << min <<":" << sec << endl;
}

clockType::~clockType()
{
    cout << "we are at destructor" << endl;
    //dtor
}
