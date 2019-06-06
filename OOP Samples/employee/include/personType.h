#ifndef PERSONTYPE_H
#define PERSONTYPE_H
#include <string>
#include <iostream>

using namespace std;

class personType
{
    public:
        personType();
        personType(string firsIn, string lastIn, string addressIn);
        virtual ~personType();
        void setName(string first, string last);
        void setAddress(string address);
        void printName();
        void printAddrress();

    protected:
        string firstName;
        string lastName;
        string homeAddress;

    private:


};

#endif // PERSONTYPE_H
