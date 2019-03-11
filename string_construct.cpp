#include <bits/stdc++.h>

using namespace std;

// Complete the stringConstruction function below.
int stringConstruction(string s)
{
    string newString = "";
    int cost = 0;
    for (int i = 0; i < s.length(); i++)
    {
        size_t found = newString.find(s[i]);
        if (found == string::npos)
        {
            cost++;
        }
        newString += s[i];
    }

    return cost;
}

int main()
{
    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s;
        getline(cin, s);

        int result = stringConstruction(s);

        cout << result << "\n";
    }

    return 0;
}
