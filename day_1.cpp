#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main()
{
     int i = 4;
     double d = 4.0;
     string s = "HackerRank ";
     string dummy;

     int input;
     cin >> input;

     double dinput;
     cin >> dinput;
     getline(cin, dummy);

     string sinput;
     getline(cin, sinput);

     cout << i + input << endl;
     cout << fixed << setprecision(1) << d + dinput << endl;
     cout << s + sinput << endl;

     return 0;
}
