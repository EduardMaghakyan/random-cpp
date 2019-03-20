#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int pickingNumbers(vector<int> a)
{
    vector<int> arr;
    sort(a.begin(), a.end());
    int j;
    int maxSize = 0;
    for (size_t i = 0; i < a.size(); i++)
    {
        j = 0;
        while (j < a.size() && (abs(a[i] - a[i + j]) <= 1))
        {
            arr.push_back(a[i + j]);
            j++;
        }
        if (arr.size() > maxSize)
        {
            maxSize = arr.size();
        }
        arr.clear();
        i += j - 1;
    }
    return maxSize;
}

int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split(rtrim(a_temp_temp));

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    int result = pickingNumbers(a);

    cout << result << "\n";

    return 0;
}
