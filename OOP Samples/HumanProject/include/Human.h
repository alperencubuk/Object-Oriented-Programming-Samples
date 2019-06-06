#include <iostream>
#ifndef HUMAN_H
#define HUMAN_H

using namespace std;

class Human
{
    private:
        string humanName;

    public:
        Human(const string &name);
        virtual void talkTo(Human &otherHuman);
        string getName();
        void setName(const string &name);
        virtual ~Human();

    protected:

};

#endif // HUMAN_H
