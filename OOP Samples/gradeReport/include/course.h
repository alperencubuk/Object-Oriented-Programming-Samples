#include <string>
#ifndef COURSE_H
#define COURSE_H
using namespace std;

class courseType
{
    public:
        courseType(string cName = "", string cNo = "", char cGrade = '*', int cCredits = 0);
        void setCourseInfo(string, string, int, char);
        void printCourseInfo();
        int getCredit();
        string getCourseNumber();
        char getGrade();
        void print(ofstream &outp, bool isGrade);
        void print(bool isGrade);
        virtual ~courseType();


    protected:

    private:
        string courseName, courseNumber;
        int courseCredit;
        char courseGrade;
};

#endif // COURSE_H
