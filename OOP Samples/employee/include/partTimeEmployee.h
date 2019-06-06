#ifndef PARTTIMEEMPLOYEE_H
#define PARTTIMEEMPLOYEE_H
#include "personType.h"

class partTimeEmployee:public personType
{
    public:
        partTimeEmployee();
        virtual ~partTimeEmployee();
        void print();
        double calculatePay();
        void setRate(double inRate);
        void setHours(double inHours);
        partTimeEmployee(string firstIn, string lastIn, string addressIn, double inRate, double inHours);

    protected:

    private:
        double payRate;
        double hoursWorked;
};

#endif // PARTTIMEEMPLOYEE_H
