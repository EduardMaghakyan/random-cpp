#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string binary = bitset<20>(n).to_string(); // to binary
    int consec = 0;
    int maxconsec = 0;
    for (int i = 0; i < 20; i++)
    {
        if (binary[i] == '1')
        {
            consec++;
        }
        else
        {
            maxconsec = consec > maxconsec ? consec : maxconsec;
            consec = 0;
        }
    }

    // only if the last digit was 1 as well
    maxconsec = consec > maxconsec ? consec : maxconsec;

    cout << maxconsec << endl;
    return 0;
}
