#include <iostream>
#include "fifo.h"
using namespace std;

int main()
{
    fifo<int> f(10);
    fifo<int> f1(10);
    cout << "Hello world!" << endl;
    int b = 5;
    for (int i = 0; i < 10; i ++){
        if(f.write(b) == BUFFER_FULL)
            cout << "Buffer is full" << endl;

        b ++;
    }
    f.write(b);
    f.write(++b);
    int d = f[9];

    f.read ();
    f.read ();
    f.write(++b);
    f.write(++b);
    for (int i = 0; i < 10; i ++){
      f.read ();
    }

    f1 = f;
    return 0;
}
