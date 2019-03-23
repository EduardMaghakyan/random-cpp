#include <bits/stdc++.h>
#include "helper.h"
using namespace std;

long getWays(long n, vector<long> c)
{
    map<long, long> possibleWays;
    possibleWays[0] = 1;
    for (int i = 0; i < c.size(); i++)
    {
        for (int j = c[i]; j <= n; j++)
        {
            possibleWays[j] += possibleWays[j - c[i]];
        }
    }

    return possibleWays[n];
}

int main()
{
    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    string c_temp_temp;
    getline(cin, c_temp_temp);

    vector<string> c_temp = split_string(c_temp_temp);

    vector<long> c(m);

    for (int i = 0; i < m; i++)
    {
        long c_item = stol(c_temp[i]);

        c[i] = c_item;
    }

    long ways = getWays(n, c);

    cout << ways;

    return 0;
}
