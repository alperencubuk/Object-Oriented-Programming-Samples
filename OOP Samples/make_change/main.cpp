#include <iostream>
#include <string>

using namespace std;

int main(int argc, char * argv[])
{
    int para;
    int lira, kurus;
    string isim;

    if (argc < 1) return 0;

    cout << "Merhaba " << argv[1] << " Lutfen Kurus Degeri giriniz: " << endl;

    cin >> para >> isim;

    lira = para / 100;
    kurus = para % 100;

    cout << argv[0] << " " << argv[1] << " "  << isim << " paraniz " << lira << " TL ve " << kurus << " kurustur." << endl;

    return 0;
}
