#include "vector.h"
#include <iostream>

using namespace std;

vector::vector()
{
  x = 0;
  y = 0;
    //ctor
}

vector::vector(double xIn, double yIn){
  x = xIn;
  y = yIn;
}

vector::~vector()
{
  //dtor
}


vector vector::operator+(const vector& vectorIn) const{
  vector localVector;

  localVector.x = this->x  + vectorIn.x;
  localVector.y = this->y  + vectorIn.y;

  return localVector;
}
double vector::getx(){
  return x;
}

double vector::gety(){
  return y;
}

void vector::setx(double xIn){
  x=xIn;
}

void vector::sety(double yIn){
  y=yIn;
}


bool vector::operator==(const vector& vectorIn) const{

  return (x == vectorIn.x)&&(y == vectorIn.y);

}

const vector& vector::operator=(const vector& vIn){

  if(this != &vIn) {
    this->x = vIn.x;
    this->y = vIn.y;
  }
  return *this;
}

vector vector::operator++(){

   x++;
   y++;

   return *this;
}

vector::vector(double xIn){
   x=xIn;
   y=0;
}


vector vector::operator++(int u){

   vector tempVector = *this;

   x++;
   y++;

   return tempVector;
}


/*
void vector::printVector(){
  cout << "(" << x << "," << y << ")" << endl;
}
*/
