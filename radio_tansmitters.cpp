#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int hackerlandRadioTransmitters(vector<int> x, int k)
{
    int count = 0;
    sort(x.begin(), x.end());
    for (size_t i = 0; i < x.size(); i++)
    {
        int j = 1;
        while (i + j < x.size() && (x[i + j] - x[i] <= k))
        {
            j++;
        }
        i += max(0, j - 1); // Put trnasmitter here while it's minimum required to cover previous houses.
        // See how many more houeses we can skip.
        j = 1;
        while (i + j < x.size() && (x[i + j] - x[i] <= k))
        {
            j++;
        }
        i += max(0, j - 1);
        count++;
    }
    return count;
}

int main()
{
    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string x_temp_temp;
    getline(cin, x_temp_temp);

    vector<string> x_temp = split_string(x_temp_temp);

    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        int x_item = stoi(x_temp[i]);

        x[i] = x_item;
    }

    int result = hackerlandRadioTransmitters(x, k);

    cout << result << "\n";

    return 0;
}
