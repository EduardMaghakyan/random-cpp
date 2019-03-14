#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the minimumSwaps function below.
int minimumSwaps(vector<int> arr)
{
    int swaps = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        while (arr[i] != i + 1)
        {
            int tmp = arr[i];
            int swapWith = arr[i] - 1;
            arr[i] = arr[swapWith];
            arr[swapWith] = tmp;
            swaps++;
        }
    }

    return swaps;
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

    int res = minimumSwaps(arr);

    cout << res << "\n";

    return 0;
}
