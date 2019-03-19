#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the miniMaxSum function below.
void miniMaxSum(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    long minSum = 0;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        minSum += arr[i];
    }
    long maxSum = 0;
    for (int i = 1; i < arr.size(); i++)
    {
        maxSum += arr[i];
    }

    cout << minSum << ' ' << maxSum << endl;
}

int main()
{
    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(5);

    for (int i = 0; i < 5; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    miniMaxSum(arr);

    return 0;
}
