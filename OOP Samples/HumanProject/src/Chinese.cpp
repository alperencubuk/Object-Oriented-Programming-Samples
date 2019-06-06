#include "Chinese.h"

Chinese::Chinese(const string& name):Human(name)
{
    //ctor
}

void Chinese::talkTo(Human &otherHuman){

  cout << getName() << ": NiHao " << otherHuman.getName() << endl;

}

Chinese::~Chinese()
{
    //dtor
}
