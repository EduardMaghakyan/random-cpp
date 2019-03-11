#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    map<int, string> lowerThanNine;
    lowerThanNine[1] = "one";
    lowerThanNine[2] = "two";
    lowerThanNine[3] = "three";
    lowerThanNine[4] = "four";
    lowerThanNine[5] = "five";
    lowerThanNine[6] = "six";
    lowerThanNine[7] = "seven";
    lowerThanNine[8] = "eight";
    lowerThanNine[9] = "nine";

    if (n >= 1 && n <= 9)
    {
        cout << lowerThanNine[n] << endl;
    }
    else
    {
        cout << "Greater than 9" << endl;
    }

    return 0;
}
