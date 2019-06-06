#include <iostream>
#include "vector.h"
#include "studentType.h"
#include "vectorArray.h"

using namespace std;

string setName(studentType &studentObject){
  studentObject.studentName = "Ali";
  return studentObject.studentName;
}

/*vector operator+(const vector& leftVector, const vector& rightVector){
  vector localVector;

  localVector.x = leftVector.x + rightVector.x;
  localVector.y = leftVector.y + rightVector.y;

  return localVector;
}*/

ostream& operator<<(ostream& osObject, const vector& vectorIn){

  osObject << "(" << vectorIn.x << "," << vectorIn.y << ")" << endl;

  return osObject;
}

istream& operator>>(istream& isObject, vector& vectorIn){
  isObject >> vectorIn.x >> vectorIn.y;
  return isObject;
}

istream& operator>>(istream & isObject, vectorArray& vAIn){
  double x, y;
  for(int i = 0; i < vAIn.vSize; i ++){
    isObject >> x >> y;
    vAIn.vArray[i].setx(x);
    vAIn.vArray[i].sety(y);
  }
  return isObject;
}


int main()
{
  vector v1(1,2), v2(2,4), v3;

  cout << "v1 Value" << v1 ;
  cout << "pre Increment" << ++v1;
  cout << "post Increment" << v1++;
  cout << "Next statement after post Increment " << v1;

  v3 = v1 + v2;

  v3 = v3 + 1;





  cout << v3;

  cout<< "Enter the vector value in the form x y ";
  cin >> v1;

  cout << v1 + v3;

  if(v1 == 1)
    cout <<"Vectors are equal" << endl;
  else
    cout <<"Vectors are not equal" << endl;


  vectorArray vA1(3);
  vectorArray vA2(2);

  cin>>vA1;
  cin>>vA2;


  vA2 = vA1;





  return 0;
}
