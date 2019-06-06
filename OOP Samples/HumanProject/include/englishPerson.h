#ifndef ENGLISHPERSON_H
#define ENGLISHPERSON_H

#include <Human.h>


class englishPerson : public Human
{
    public:
        englishPerson(const string &name);
        virtual void talkTo(Human &);
        virtual ~englishPerson();

    protected:

    private:
};

#endif // ENGLISHPERSON_H
