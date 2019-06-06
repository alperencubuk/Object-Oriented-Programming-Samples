#include <iostream>
#include <Matrix.h>
using namespace std;

int main()
{
    Matrix m1(2, 2, 1);

    Matrix m2(2, 2, 1);

    Matrix m3(2, 2);

    m1[0][0]=5;
    m1[0][1]=5;
    m1[1][0]=5;
    m1[1][1]=5;

    m2[0][0]=2;
    m2[0][1]=2;
    m2[1][0]=2;
    m2[1][1]=2;

    m3 = m2 + m1;

    double *row = m3[1];

    for(int i = 0; i < m3.getColumns(); i ++)
        cout << row[i] << "-";
    cout << "is Unit " << m1.isUnit() << endl;
    return 0;
}
