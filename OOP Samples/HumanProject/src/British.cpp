#include "British.h"

British::British(const string &name):Human(name)
{
    //ctor
}

void British::talkTo(Human &otherHuman){
   cout << getName() << ": Hello " << otherHuman.getName() << endl;
}

void British::talkBritish(British &otherBritish){

   cout << getName() << ": It is a pleasure to have meeting you" << otherBritish.getName() << endl;
}
British::~British()
{
    //dtor
}
