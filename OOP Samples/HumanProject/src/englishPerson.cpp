#include "englishPerson.h"

englishPerson::englishPerson(const string &name):Human(name)
{
    //ctor
}

void englishPerson::talkTo(Human &otherHuman){
   cout << "Hello Dear " << otherHuman.getName() << endl;
}

englishPerson::~englishPerson()
{
    //dtor
}
