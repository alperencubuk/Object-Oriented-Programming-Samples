#include "ChinesePerson.h"

ChinesePerson::ChinesePerson(const string &name):Human(name)
{
    //ctor
}

void ChinesePerson::talkTo(Human &otherHuman){
   cout << "Ni Hao " << otherHuman.getName() << endl;
}

ChinesePerson::~ChinesePerson()
{
    //dtor
}
