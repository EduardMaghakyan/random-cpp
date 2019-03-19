#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int birthdayCakeCandles(vector<int> arr)
{
    sort(arr.begin(), arr.end());
    int count = 1;
    int i = 1;
    int maxEl = arr[arr.size() - 1];
    for (size_t i = arr.size() - 2; i >= 0; i--)
    {
        if (maxEl != arr[i])
        {
            break;
        }
        count++;
    }
    return count;
}

int main()
{
    int ar_count;
    cin >> ar_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split_string(ar_temp_temp);

    vector<int> ar(ar_count);

    for (int i = 0; i < ar_count; i++)
    {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = birthdayCakeCandles(ar);

    cout << result << "\n";

    return 0;
}
