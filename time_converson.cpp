#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s)
{
    string hours = s.substr(0, 2);
    if (s.substr(s.length() - 2) == "PM")
    {
        hours = to_string(stoi(hours) + 12);
        if (hours == "24")
        {
            hours = "12";
        }
    }
    else if (hours == "12" && s.substr(s.length() - 2) == "AM")
    {
        hours = "00";
    }

    s.erase(0, 2);
    s = hours + s;

    return s.substr(0, s.size() - 2);
}

int main()
{
    string s;
    getline(cin, s);

    string result = timeConversion(s);

    cout << result << "\n";

    return 0;
}
