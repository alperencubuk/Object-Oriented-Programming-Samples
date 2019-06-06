#include "clockType.h"
#include <iostream>

using namespace std;

clockType::clockType()
{
    //ctor
    cout << "I am created" << endl;
    hours = 0;
    minutes = 0;
    seconds = 0;
}



clockType::clockType(int hour, int minute, int second)
{
    //ctor
    cout << "I am created" << endl;
    hours = hour;
    minutes = minute;
    seconds = second;
}


void clockType::setTime(int h, int m, int s){

   if(h >= 0 && h <= 23)
    hours = h;

   if(m >= 0 && m <= 59)
    minutes = m;

   if(s >= 0 && s <= 59)
    seconds = s;

}

void clockType::returnTime(int &h, int &m, int &s){
   h = hours;
   m = minutes;
   s = seconds;
}

void clockType::printTime(){

  cout << "Time is : " << hours << ":" << minutes << ":" << seconds << endl;

}

void clockType::incrementSeconds(){
   if(seconds < 59){
     seconds ++;
   } else {
     seconds = 0;
     incrementMinutes();
   }
}

void clockType::setTime(timeOfDay tOfD){
   if(tOfD == midDay) {
      setTime(12,0,0);
   }
   if(tOfD == midNight){
      setTime(0,0,0);
   }
}
void clockType::incrementMinutes(){
   if(minutes < 59){
     minutes ++;
   } else {
     minutes = 0;
     incrementHours();
   }
}

void clockType::incrementHours(){
   if(hours < 23){
     hours ++;
   } else {
     hours = 0;
   }
}

int clockType::compare(const clockType &t_in){

   if(t_in.hours == this->hours && t_in.minutes == this->minutes && t_in.seconds == this->seconds )
     return 1;

   return 0;
}

clockType::~clockType()
{
    //dtor
    cout << "I am deleted" << endl;
}
