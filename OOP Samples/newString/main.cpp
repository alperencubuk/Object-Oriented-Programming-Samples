#include <iostream>
#include "newString.h"

using namespace std;

int main()
{
    newString a("My name is juno");
    newString b(a);
    const newString c("This is a const string");

    a = "My name is Ahmet";

    if (a == b) cout << "they are equal" << endl;
    else cout << "they are not equal" << endl;

    cout << "Hello world! 9th char of the String is : " << a[8] << endl;
    cout << "1st char of the const String is : " << c[0] << endl;
    return 0;
}
