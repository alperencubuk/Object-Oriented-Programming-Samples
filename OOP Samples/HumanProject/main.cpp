#include <iostream>
#include "Human.h"
#include "ChinesePerson.h"
#include "englishPerson.h"
using namespace std;

void introduceHuman(Human &human1, Human &human2){
    human1.talkTo(human2);
    human2.talkTo(human1);
}

int main()
{
    englishPerson joe("Joe");
    ChinesePerson yang("Yang");

    introduceHuman(joe, yang);
    return 0;
}
