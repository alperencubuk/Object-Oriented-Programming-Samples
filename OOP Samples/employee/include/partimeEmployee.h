#ifndef PARTIMEEMPLOYEE_H
#define PARTIMEEMPLOYEE_H

#include <personType.h>


class partimeEmployee : public personType
{
    public:
        partimeEmployee();
        partimeEmploye(string firstIn, string lastIn, string addressIn, double rateIn, double hoursIn);
        virtual ~partimeEmployee();
        void print();
        double calculatePay();
        void setName(string firstIn, string lastIn);
        void setHours(double hoursIn);
        void setRate(double rateIn);



    protected:

    private:
        double payRate;
        double hoursWorked;
};

#endif // PARTIMEEMPLOYEE_H
