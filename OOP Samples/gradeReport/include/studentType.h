#include "course.h"

#ifndef STUDENTTYPE_H
#define STUDENTTYPE_H

class studentType
{
    public:
        studentType(string name = "", int number=0, int courses=0, char paidTuition=0);
        void setInfo(string name, int number, int courses, int paidTuition, courseType *);
        void printStudentInfo(double tuition);
        void print(ofstream &outFile, double tuition);
        int calculateHours();
        double calculateGPA();
        double calculateBilling(int tuitionRate);
        int getHoursEnrolled();
        virtual ~studentType();

    protected:

    private:
        void sortCourses();
        string Name;
        int studentID;
        courseType coursesEnrolled[6];
        int hasPaidTuition;
        int numberOfCourses;
};

#endif // STUDENTTYPE_H
