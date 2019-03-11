#include <bits/stdc++.h>

using namespace std;

string oneInSecond(string base, string target)
{
    for (int i = 0; i < base.length(); i++)
    {
        if (target.find(base[i]) != -1)
        {
            return "YES";
        }
    }

    return "NO";
}

// Complete the twoStrings function below.
string twoStrings(string s1, string s2)
{

    if (s1.length() > s2.length())
    {
        return oneInSecond(s1, s2);
    }
    else
    {
        return oneInSecond(s2, s1);
    }
}

int main()
{
    // ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++)
    {
        string s1;
        getline(cin, s1);

        string s2;
        getline(cin, s2);

        string result = twoStrings(s1, s2);

        cout << result << "\n";
        // fout << result << "\n";
    }

    // fout.close();

    return 0;
}
