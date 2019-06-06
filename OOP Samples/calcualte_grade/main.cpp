#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream inData;
    ofstream outData;
    char sID;
    int  grades[5];
    double mean;

    inData.open("inData.dat");
    outData.open("outData.dat");
    outData.precision(4);
    cout.precision(4);
    while(!inData.eof()){
       inData >> sID;

       if(inData.eof()) break;

       outData << sID << "\t";

       mean = 0;
       for(int i=0; i<5; i++){
         inData >> grades[i];
         outData << grades[i] << "\t";
         cout << grades[i] << "\t";
         mean += grades[i];
       }

       outData << mean/5 << endl;
       cout << mean/5 << endl;
    }
    return 0;
}
