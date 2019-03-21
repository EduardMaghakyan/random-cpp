#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int getMoneySpent(vector<int> keyboards, vector<int> drives, int b)
{
    vector<int> possibleResult;
    for (size_t i = 0; i < keyboards.size(); i++)
    {
        for (size_t j = 0; j < drives.size(); j++)
        {
            if (keyboards[i] + drives[j] <= b)
            {
                possibleResult.push_back(keyboards[i] + drives[j]);
            }
        }
    }
    if (possibleResult.empty())
    {
        return -1;
    }
    return *max_element(possibleResult.begin(), possibleResult.end());
}

int main()
{
    string bnm_temp;
    getline(cin, bnm_temp);

    vector<string> bnm = split_string(bnm_temp);

    int b = stoi(bnm[0]);

    int n = stoi(bnm[1]);

    int m = stoi(bnm[2]);

    string keyboards_temp_temp;
    getline(cin, keyboards_temp_temp);

    vector<string> keyboards_temp = split_string(keyboards_temp_temp);

    vector<int> keyboards(n);

    for (int keyboards_itr = 0; keyboards_itr < n; keyboards_itr++)
    {
        int keyboards_item = stoi(keyboards_temp[keyboards_itr]);

        keyboards[keyboards_itr] = keyboards_item;
    }

    string drives_temp_temp;
    getline(cin, drives_temp_temp);

    vector<string> drives_temp = split_string(drives_temp_temp);

    vector<int> drives(m);

    for (int drives_itr = 0; drives_itr < m; drives_itr++)
    {
        int drives_item = stoi(drives_temp[drives_itr]);

        drives[drives_itr] = drives_item;
    }

    int moneySpent = getMoneySpent(keyboards, drives, b);

    cout << moneySpent << "\n";

    return 0;
}
