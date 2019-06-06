#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include "course.h"
#include "studentType.h"

using namespace std;

void getStudentData(ifstream& infile,
			  studentType studentList[],
  			  int numberOfStudents)
{
		//Local variable
   string fName;	//variable to store the first name
   string lName;	//variable to store the last name
   int ID;	 //variable to store the student ID
   int noOfCourses;
   char isPaid;
   bool isTuitionPaid;

   string cName;	//variable to store the course name
   string cNo;	 //variable to store the course number
   int credits; //variable to store the course credit hours
   char grade;	//variable to store the course grade

   int count;	//loop control variable
   int i;		//loop control variable
   courseType courses[6];

   for(count = 0; count < numberOfStudents; count++)
   {
	  infile>>fName>>lName>>ID>>isPaid;	//Step 1

	  if(isPaid == 'Y')				//Step 2
	     isTuitionPaid = true;
	  else
	     isTuitionPaid = false;

	  infile>>noOfCourses;				//Step 3

	  for(i = 0; i < noOfCourses; i++)		//Step 4
	  {
	     infile>>cName>>cNo>>credits>>grade;
	     courses[i].setCourseInfo(cName, cNo, credits, grade);
      }

	  studentList[count].setInfo(fName + lName, ID, noOfCourses, isTuitionPaid,    courses);
   }//end for
}

void printGradeReports(ofstream& outfile, studentType studentList[], int numberOfStudents, double tuitionRate)
{
    int count;

    for(count = 0; count < numberOfStudents; count++)
	   studentList[count].print(outfile, tuitionRate);
}



int main()
{
    studentType students[10];
    int numberOfStudents, tuitionPerHour;
    ifstream inFile("stData.txt");
    ofstream outFile("outData.txt");

    inFile >> numberOfStudents;
    inFile >> tuitionPerHour;

    getStudentData(inFile, students, numberOfStudents);
    printGradeReports(outFile, students, numberOfStudents, tuitionPerHour);

    outFile.close();

    return 0;
}
