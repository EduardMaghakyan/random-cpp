#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the maximumToys function below.
int maximumToys(vector<int> prices, int k)
{
    int nToys = 0;
    int sum = 0;
    sort(prices.begin(), prices.end());
    for (int i = 0; i < prices.size(); i++)
    {
        sum += prices[i];
        if (sum <= k)
        {
            nToys++;
        }
        else
        {
            break;
        }
    }

    return nToys;
}

int main()
{
    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string prices_temp_temp;
    getline(cin, prices_temp_temp);

    vector<string> prices_temp = split_string(prices_temp_temp);

    vector<int> prices(n);

    for (int i = 0; i < n; i++)
    {
        int prices_item = stoi(prices_temp[i]);

        prices[i] = prices_item;
    }

    int result = maximumToys(prices, k);

    cout << result << "\n";

    return 0;
}
