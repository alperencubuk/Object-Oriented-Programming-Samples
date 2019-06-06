#include <iostream>
#include "farm.h"

using namespace std;
/* polymorphism, virtual functions, abstract class */
void voiceOfAnimal(Animal *);
void voiceOfAnimal(Animal &);
//void voiceOfAnimal(Animal );

int main()
{
    Animal * pAnimal = new Dog("Karabas"); //Up CAST

    voiceOfAnimal(pAnimal);
    voiceOfAnimal(*pAnimal);

    //What 's wrong with this delete
    //Deletele ilgili hatayi bulup duzeltin
    delete pAnimal;
    return 0;
}

void voiceOfAnimal(Animal *p)
{
    cout << p->getVoice() << endl;
}

void voiceOfAnimal(Animal &p)
{
    cout << p.getVoice() << endl;
}

/*
void voiceOfAnimal(Animal p){
    cout << p.getVoice() << endl;
}*/
