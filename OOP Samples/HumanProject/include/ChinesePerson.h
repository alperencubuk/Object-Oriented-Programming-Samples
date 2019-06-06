#ifndef CHINESEPERSON_H
#define CHINESEPERSON_H

#include <Human.h>


class ChinesePerson : public Human
{
    public:
        ChinesePerson(const string &name);
        virtual void talkTo(Human &otherHuman);
        virtual ~ChinesePerson();

    protected:

    private:
};

#endif // CHINESEPERSON_H
