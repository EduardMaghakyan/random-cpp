#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the minimumAbsoluteDifference function below.
int minimumAbsoluteDifferenceSlow(vector<int> arr)
{
    int minDiff = abs(arr[0] - arr[1]);
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            int tmp = abs(arr[i] - arr[j]);
            if (minDiff > tmp)
            {
                minDiff = tmp;
            }
        }
    }

    return minDiff;
}

int minimumAbsoluteDifference(vector<int> arr)
{
    int minDiff = INT_MAX;
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        int tmp = abs(arr[i] - arr[i + 1]);
        if (minDiff > tmp)
        {
            minDiff = tmp;
        }
    }
    return minDiff;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = minimumAbsoluteDifference(arr);

    cout << result << "\n";

    return 0;
}
