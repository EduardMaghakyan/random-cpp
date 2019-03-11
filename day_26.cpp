#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <ctime>
using namespace std;

time_t convertToEpoch(int day, int month, int year)
{
    time_t rawtime;
    struct tm *timeinfo;
    time(&rawtime);
    timeinfo = localtime(&rawtime);
    timeinfo->tm_year = year - 1900;
    timeinfo->tm_mon = month - 1;
    timeinfo->tm_mday = day;
    timeinfo->tm_hour = 0;
    timeinfo->tm_min = 0;
    timeinfo->tm_sec = 0;
    return mktime(timeinfo);
}

bool isOnTime(vector<int> actual, vector<int> expected)
{
    time_t actualTime = convertToEpoch(actual[0], actual[1], actual[2]);
    time_t expectedTime = convertToEpoch(expected[0], expected[1], expected[2]);
    return (actualTime <= expectedTime);
}

bool withinMonth(vector<int> actual, vector<int> expected)
{
    return (actual[1] == expected[1] && actual[2] == expected[2]);
}

bool withinYear(vector<int> actual, vector<int> expected)
{
    return (actual[2] <= expected[2]);
}

int calculateFine(vector<int> actual, vector<int> expected)
{
    int finePerDay = 15;
    int finePerMonth = 500;
    int fixedFine = 10000;
    if (isOnTime(actual, expected))
    {
        return 0;
    }

    if (withinMonth(actual, expected))
    {
        return abs(actual[0] - expected[0]) * finePerDay;
    }

    if (withinYear(actual, expected))
    {
        return abs(actual[1] - expected[1]) * finePerMonth;
    }

    return fixedFine;
}

int main()
{
    vector<int> actual;   // day, month and year, e.g 9 6 2015
    vector<int> expected; // day, month and year, e.g 6 6 2015
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        actual.push_back(input);
    }
    for (int i = 0; i < 3; i++)
    {
        int input;
        cin >> input;
        expected.push_back(input);
    }

    cout << calculateFine(actual, expected) << endl;
    return 0;
}
