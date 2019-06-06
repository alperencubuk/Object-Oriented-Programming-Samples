#include "Human.h"

Human::Human(const string &name)
{
    humanName = name;
    //ctor
}

string Human::getName(){
    return humanName;
}

void Human::talkTo(Human &otherHuman){
    cout << "Hello " << otherHuman.getName() << endl;
}

void Human::setName(const string &name){
   humanName = name;
}

Human::~Human()
{
    //dtor
}
