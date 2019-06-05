#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);

// Complete the dayOfProgrammer function below.
string dayOfProgrammer(int year)
{
    char buffer[11];
    // calculate day in month if not leap year.
    int day = 256 - 243;
    if (year < 1918)
    {
        if (year % 4 == 0)
        {
            day--;
        }
    }
    else
    {
        if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
        {
            day--;
        }
    }
    // Calucalte special year when transition from Julian to Gregorian calendar happened
    if (year == 1918)
    {
        day += 13;
    }
    snprintf(buffer, sizeof(buffer), "%d.0%d.%d", day, 9, year);
    string buffAsStdStr = buffer;
    return buffAsStdStr;
}

int main()
{
    string year_temp;
    getline(cin, year_temp);

    int year = stoi(ltrim(rtrim(year_temp)));

    string result = dayOfProgrammer(year);

    cout << result << "\n";

    return 0;
}

string ltrim(const string &str)
{
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace))));

    return s;
}

string rtrim(const string &str)
{
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end());

    return s;
}
