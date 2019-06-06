#include <iostream>
#include <fstream>
#include <iomanip>
#include "course.h"

using namespace std;
courseType::courseType(string cName, string cNumber, char cGrade, int  cCredit)
{
    courseName = cName;
    courseNumber = cNumber;
    courseCredit = cCredit;
    courseGrade = cGrade;
    //ctor
}

void courseType::setCourseInfo(string cName, string cNumber, int cCredit, char cGrade)
{
    courseName = cName;
    courseNumber = cNumber;
    courseCredit = cCredit;
    courseGrade = cGrade;
}

void courseType::print(bool isGrade)
{
	cout<<left;					//Step 1
	cout<<setw(8)<<courseNumber<<"   ";		//Step 2
	cout<<setw(15)<<courseName;			//Step 3
	cout.unsetf(ios::left);			//Step 4
	cout<<setw(3)<<courseCredit<<"   ";	//Step 5

	if(isGrade)					//Step 6
		cout<<setw(4)<<courseGrade<<endl;
	else
		cout<<setw(4)<<"***"<<endl;
}

void courseType::print(ofstream& outp, bool isGrade)
{
	outp<<left;					//Step 1
	outp<<setw(8)<<courseNumber<<"   ";		//Step 2
	outp<<setw(15)<<courseName;			//Step 3

	outp.unsetf(ios::left);			//Step 4
	outp<<setw(3)<<courseCredit<<"   ";	//Step 5

	if(isGrade)					//Step 6
		outp<<setw(4)<<courseGrade<<endl;
	else
		outp<<setw(4)<<"***"<<endl;
}

void courseType::printCourseInfo(){
   cout << "Course Name : " << courseName << endl;
   cout << "Course Number : " << courseNumber << endl;
   cout << "Course Credit : " << courseCredit << endl;
   cout << "Course Grade : " << courseGrade << endl;
}

int courseType::getCredit(){
   return courseCredit;
}

char courseType::getGrade(){
   return courseGrade;
}

string courseType::getCourseNumber(){
   return courseNumber;
}



courseType::~courseType()
{
    //dtor
}
