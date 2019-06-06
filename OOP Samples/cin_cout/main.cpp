#include <iostream>

using namespace std;
int main() //cin cout examples
{
  int ch1, ch2, ch3, ch4, ch5;

  cout << "Hello ";
  cout.flush();
  cout << "world!" << endl;
  cin >> ch1;
  //cin.ignore(100, 10);
  cin >> ch2;
  cin >> ch3;
  cin >> ch4;
  cin >> ch5;

  return 0;
}
