#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int maximumBitwiseAnd(vector<int> possibleValues, int lowerThan)
{
    int maxBitWiseValue = 0;
    for (size_t i = 0; i < possibleValues.size() - 1; i++)
    {
        for (size_t j = i + 1; j < possibleValues.size(); j++)
        {
            int bitWiseAnd = (possibleValues[i] & possibleValues[j]);
            if (bitWiseAnd < lowerThan && maxBitWiseValue < bitWiseAnd)
            {
                maxBitWiseValue = bitWiseAnd;
            }
        }
    }
    return maxBitWiseValue;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);

        vector<int> possibleValues(n);
        iota(possibleValues.begin(), possibleValues.end(), 1);
        cout << maximumBitwiseAnd(possibleValues, k) << endl;
    }

    return 0;
}
