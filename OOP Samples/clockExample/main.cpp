#include <iostream>
#include "clockType.h"
#include <string>
using namespace std;

int main()
{
    clockType t(12,0,4); //instantiation

    t.setTime(10, 0, 0);

    { // Created a new scope
        clockType t3(12, 0, 15);
        t3.printTime();
    }

    clockType t1;
    t1.setTime(10, 0, 0);
    t1.setTime(clockType::midDay);

    t.incrementSeconds();

    if(t.compare(t1)){
      cout << "Times are equal" << endl;
      t1.printTime();
      t.printTime();
    } else {
      cout << "Times are not equal" << endl;
      t.printTime();
      t1.printTime();
    }

    t1=t;


    if(t1.compare(t)){
        cout << "Times are equal" << endl;
    }

    return 0;
}
