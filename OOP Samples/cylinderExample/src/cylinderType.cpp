#include "cylinderType.h"
#include <iostream>
using namespace std;

cylinderType::cylinderType()
{
    //ctor
}

cylinderType::cylinderType(double heightIn, double radiusIn){
  radius = radiusIn;
  height = heightIn;
}

void cylinderType::setHeight(double heightIn){
  height = heightIn;
}

void cylinderType::setRadius(double radiusIn){
  height = radiusIn;
}

void cylinderType::printSurfaceArea(){
  cout <<"Surface Area is: "<< calculateSurfaceArea() << endl;
}

void cylinderType::printVolume(){
  cout <<"Volume is: "<< calculateVolume() << endl;
}

double cylinderType::calculateSurfaceArea(){
  return (2*pi*radius*radius + 2*pi*radius*height);
}

double cylinderType::calculateVolume(){
  return (pi*radius*radius*height );
}

cylinderType::~cylinderType()
{
    //dtor
}
