#include <iostream>
#include "parent.h"
#include "child.h"
using namespace std;

void print(parent *p){
  cout << p->print() << endl;
}

int main()
{
    parent p("Sedat");
    parent *c = new child("Ahmet Alp", "Huseyin Husnu Aker");

    print(&p);
    print(c);

    delete c;
    return 0;
}
