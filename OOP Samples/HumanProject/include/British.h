#ifndef BRITISH_H
#define BRITISH_H

#include <Human.h>
#include <string>
#include <iostream>

using namespace std;

class British : public Human
{
    public:
        British(const string &name);
        virtual ~British();
        virtual void talkTo(Human &otherHuman);
        void talkBritish(British &otherBritish);


    protected:

    private:
};

#endif // BRITISH_H
