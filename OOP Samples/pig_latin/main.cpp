#include <iostream>
#include <string>

using namespace std;



int isVowel(char inChr){
   string vowels = "aeiouyAEIOUY";

   if (vowels.find(inChr) != string::npos)
    return 1;
   else
    return 0;
}

string rotate(string inStr) {
  string retString;
  char a = inStr[0];

  retString = inStr.substr(1, inStr.size()-1);
  retString += a;
  return retString;
}

int uyduruk(int a){

  cout << a ++;

}

int main()
{
    string s;
    cout << "Please enter a string" << endl;
    cin >> s;
    int strLen = s.size();
    int counter = 0;
    cout << strLen << endl;
    int b[] = {0,3,5,7};
    int c = 20;
    int *p = &c;

    for(int i = 0; i <=4; i++ )
        b[i] = 0;

    uyduruk(b[2]);

    if (isVowel(s[0])) {
      s += "-way";
    } else {
      while (!isVowel(s[0])) {
        if((counter ++) >= strLen -1) break;
        s = rotate(s);
        cout << counter << endl;
      }

      if(isVowel(s[0]))
        s += "-way";
      else
        s += "ay";
    }
    strLen --;
    cout << s;

    return 0;
}
