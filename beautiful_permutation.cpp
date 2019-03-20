#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int beautifulPermutations(vector<int> arr)
{
    int nicePermuatations = 0;
    sort(arr.begin(), arr.end());
    int totalPermuts = 0;
    do
    {
        bool isNice = true;
        for (size_t i = 0; i < arr.size() - 1; i++)
        {
            if (arr[i] == arr[i + 1])
            {
                isNice = false;
                i = arr.size();
            }
        }

        if (isNice)
        {
            nicePermuatations++;
        }
        // totalPermuts++;
        // for (size_t i = 0; i < arr.size(); i++)
        // {
        //     cout << arr[i] << " ";
        // }
        // cout << endl;
    } while (next_permutation(arr.begin(), arr.end()));
    // cout << "Total permutations: " << totalPermuts << endl;
    double base = pow(10.0, 9.0) + 7;
    return nicePermuatations % (int)base;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int arr_count;
        cin >> arr_count;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split_string(arr_temp_temp);

        vector<int> arr(arr_count);

        for (int arr_itr = 0; arr_itr < arr_count; arr_itr++)
        {
            int arr_item = stoi(arr_temp[arr_itr]);

            arr[arr_itr] = arr_item;
        }

        int result = beautifulPermutations(arr);

        cout << result << "\n";
    }

    return 0;
}
