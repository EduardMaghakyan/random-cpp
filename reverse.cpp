#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a)
{
    vector<int> b;
    for (int i = a.size() - 1; i >= 0; i--)
    {
        b.push_back(a[i]);
    }

    return b;
}

int main()
{
    int arr_count;
    cin >> arr_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(arr_count);

    for (int i = 0; i < arr_count; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    vector<int> res = reverseArray(arr);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i];

        if (i != res.size() - 1)
        {
            cout << " ";
        }
    }

    cout << "\n";

    return 0;
}
