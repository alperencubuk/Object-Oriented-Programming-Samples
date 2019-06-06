#include <string>

#ifndef ATHLETE_H
#define ATHLETE_H
using namespace std;
class athlete
{
    public:
        //athlete();
        virtual void printPerformanceData(int) = 0;
        virtual void  printBestPerformance() = 0;
        virtual ~athlete();

    protected:
        string name;
        string surname;
        string DoB;

    private:
};

#endif // ATHLETE_H
