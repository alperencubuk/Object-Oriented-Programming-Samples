#ifndef SHORTDISTANCERUNNER_H
#define SHORTDISTANCERUNNER_H

#include <athlete.h>
#include <string>

struct performance{
            double fastestTime;
            string date;
            string city;
        };

class shortDistanceRunner : public athlete
{
    public:
        shortDistanceRunner(const string & = "", const string & = "", const int& = 10, const int& = 100);
        virtual ~shortDistanceRunner();
        void printBestPerformance();
        void printPerformanceData(int);
        void setPerformanceData(string, double, string);

    protected:

    private:
        struct performance *performanceData;
        int performanceHistoryCount;
        int numberOfRecords;
        int runningDistance;
};

#endif // SHORTDISTANCERUNNER_H
