#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the largestPermutation function below.
vector<int> largestPermutationSlow(int k, vector<int> arr)
{
    int n = 0;
    int swaps = 0;
    while (swaps < k && n < arr.size())
    {
        auto maxi = max_element(arr.begin() + n, arr.end());
        if ((maxi - arr.begin()) != n)
        {
            int tmp = arr[n];
            arr[n] = arr[maxi - arr.begin()];
            arr[maxi - arr.begin()] = tmp;
            swaps++;
        }
        n++;
    }
    return arr;
}

vector<int> largestPermutation(int k, vector<int> arr)
{
    int maxValue = arr.size();
    unordered_map<int, int> indexMap;

    for (size_t i = 0; i < arr.size(); i++)
    {
        indexMap[arr[i]] = i;
    }
    for (int i = 0; i < maxValue && k > 0; i++)
    {
        int nextMax = maxValue - i;
        if (arr[i] != nextMax)
        {
            auto search = indexMap.find(nextMax);
            arr[search->second] = arr[i];
            indexMap[arr[i]] = search->second;
            arr[i] = nextMax;
            k--;
        }
    }

    return arr;
}

int main()
{
    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> result = largestPermutation(k, arr);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
