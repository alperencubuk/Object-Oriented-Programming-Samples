#include <iostream>

using namespace std;

int main()
{
    int one, two;
    double z;
    char ch;
    string name;
    one = 4;

    two = 2 * one + 6;
    z = (one + 1) / 2.0;
    ch = 'A';
    cin>>two;
    cin>>z;
    one = 2 * two + static_cast<int>(z);
    cin>>name;
    two = two + 1;
    cin>>ch;
    one = one + static_cast<int>(ch);
    z = one – z;


    return 0;
}
