#include <iostream>
#include <fstream>
#include <iomanip>
#include "studentType.h"

using namespace std;

studentType::studentType(string name, int number, int courses, char paidTuition)
{
    Name = name;
    studentID = number;
    numberOfCourses = courses;
    hasPaidTuition = paidTuition;
    //ctor
}

void studentType::setInfo(string name, int number, int courses, int paidTuition, courseType * courseList)
{
    Name = name;
    studentID = number;
    numberOfCourses = courses;
    hasPaidTuition = paidTuition;

    for(int i = 0; i < numberOfCourses; i++) //set the array
       coursesEnrolled[i] = courseList[i]; //coursesEnrolled

    //ctor
}
int studentType::getHoursEnrolled()
{
	int totalCredits = 0;
	int i;

	for(i = 0; i < numberOfCourses; i++)
	   totalCredits += coursesEnrolled[i].getCredit();

	return totalCredits;
}

void studentType::print(ofstream &outp, double tuitionRate){

    int i;
	string first;
	string last;

	outp<<"Student Name: "<<first<<" "<<last<<endl;

	outp<<"Student ID: "<<studentID<<endl;

	outp<<"Number of courses enrolled: "
	    <<numberOfCourses<<endl;
	outp<<endl;

	outp<<left;
	outp<<"Course No"<<setw(15)<<"  Course Name"
	    <<setw(8)<<"Credits"
	    <<setw(6)<<"Grade"<<endl;

	outp.unsetf(ios::left);

	for(i = 0; i < numberOfCourses; i++)
	    coursesEnrolled[i].print(outp, hasPaidTuition);
	outp<<endl;

	outp<<"Total number of credit hours: "
	    <<getHoursEnrolled()<<endl;

	outp<<fixed<<showpoint<<setprecision(2);

	if(hasPaidTuition)
	    outp<<"Mid-Semester GPA: "<<calculateGPA()<<endl;
	else
	{
	    outp<<"*** Grades are being held for not paying "
              <<"the tuition. ***"<<endl;
	    outp<<"Amount Due: "<<calculateBilling(tuitionRate)
  		  <<endl;
	}

	outp<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
          <<"-*-*-*-*-"<<endl<<endl;


}
void studentType::printStudentInfo(double tuitionRate)
{
	int i;

	cout<<"Student Name: " << Name;				//Step 1
	cout<<endl;

	cout<<"Student ID: "<<studentID<<endl;		//Step 2

	cout<<"Number of courses enrolled: "
	    <<numberOfCourses<<endl;			//Step 3
	cout<<endl;

	cout<<left;	   //set output left-justified
    cout<<"Course No"<<setw(15)<<"  Course Name"
	    <<setw(8)<<"Credits"
	    <<setw(6)<<"Grade"<<endl;			//Step 4

	cout.unsetf(ios::left);

	for(i = 0; i < numberOfCourses; i++)	//Step 5
	    coursesEnrolled[i].print(hasPaidTuition);
	cout<<endl;

	cout<<"Total number of credit hours: "
	    <<getHoursEnrolled()<<endl;		//Step 6

	cout<<fixed<<showpoint<<setprecision(2);	//Step 7

	if(hasPaidTuition)					//Step 8
	   cout<<"Mid-Semester GPA: "<<calculateGPA()<<endl;
	else
	{
	    cout<<"*** Grades are being held for not paying "
             <<"the tuition. ***"<<endl;
	    cout<<"Amount Due: "<<calculateBilling(tuitionRate)
    		  <<endl;
	}
	cout<<"-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*"
          <<"-*-*-*-*-*-*-"<<endl<<endl;
}
/*
void studentType::printStudentInfo(){
   cout << "Student Name = " << Name << endl;
   cout << "Student ID = " << studentID << endl;
   cout << "Number of Courses Enrolled = " << courseEnrolled << endl;
   cout << "Tuition Paid ? = " << hasPaidTuition << endl;
}*/

int studentType::calculateHours() {
   int totalCredits = 0;
   for(int i=0; i < numberOfCourses; i ++ )
     totalCredits += coursesEnrolled[i].getCredit();
   return totalCredits;
}

double studentType::calculateGPA(){

    double sum = 0.0;

    for(int i = 0; i < numberOfCourses; i ++)
    {
        switch(coursesEnrolled[i].getGrade()){
        case 'A' :
            sum += coursesEnrolled[i].getCredit()*4;
            break;
        case 'B' :
            sum += coursesEnrolled[i].getCredit()*3;
            break;
        case 'C' :
            sum += coursesEnrolled[i].getCredit()*2;
            break;
        case 'D' :
            sum += coursesEnrolled[i].getCredit()*1;
            break;
        case 'F' :
            sum += coursesEnrolled[i].getCredit()*0;
            break;
        default:
            break;
        }
    }

    return sum/calculateHours();
}

double studentType::calculateBilling(int tuitionRate){
    return tuitionRate * calculateHours();
}

studentType::~studentType()
{
    //dtor
}
