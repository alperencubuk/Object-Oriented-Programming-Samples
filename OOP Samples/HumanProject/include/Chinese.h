#ifndef CHINESE_H
#define CHINESE_H

#include <Human.h>
#include <string>
#include <iostream>

using namespace std;


class Chinese : public Human
{
    public:
        Chinese(const string& name);
        virtual void talkTo(Human &otherHuman);
        virtual ~Chinese();

    protected:

    private:
};

#endif // CHINESE_H
