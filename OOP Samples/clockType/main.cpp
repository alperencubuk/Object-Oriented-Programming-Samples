#include <iostream>
#include "clockType.h"
using namespace std;

int main()
{
    clockType myClock(10, 20, 22);
    clockType yourClock;
    yourClock.setTime(11,29,22);

    cout << "Time prior to assignment is : " ;
    myClock.printTime();
    cout << endl;
    {
       clockType scopeClock;
    }
    myClock = yourClock;

    cout << "Now time is : " ;
    myClock.printTime();
    cout << endl;
    return 0;
}
