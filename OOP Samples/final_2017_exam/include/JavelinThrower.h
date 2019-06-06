#ifndef JAVELINTHROWER_H
#define JAVELINTHROWER_H
#include <string>
#include <athlete.h>

using namespace std;

struct performanceJT{
            double longestThrow;
            string date;
            string city;
        };

class JavelinThrower : public athlete
{
    public:
        JavelinThrower(const string & = "", const string & = "", int = 10);
        virtual ~JavelinThrower();
        void printBestPerformance();
        void printPerformanceData(int);
        void setPerformanceData(string, double, string);
        JavelinThrower operator=(const JavelinThrower &);
        struct performanceJT operator[](int index);

    protected:


    private:
        struct performanceJT *performanceData;
        int performanceHistoryCount;
        int numberOfRecords;
};

#endif // JAVELINTHROWER_H
