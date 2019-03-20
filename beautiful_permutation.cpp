#include <bits/stdc++.h>
#include "helper.h"

using namespace std;
long factorial(int n)
{
    long factorial = 1;
    for (int i = 1; i <= n; ++i)
    {
        factorial *= i;
    }

    return factorial;
}
int beautifulPermutations(vector<int> arr)
{
    long originalSize = arr.size();
    long totalPermuations = factorial(arr.size());
    set<int> s;
    unsigned size = arr.size();
    for (unsigned i = 0; i < size; ++i)
    {
        s.insert(arr[i]);
    }
    arr.assign(s.begin(), s.end());
    int uniqueElements = arr.size();
    long uniquePermuations = totalPermuations / (long)pow(2.0, (double)(originalSize - uniqueElements));
    long beatuifulPermuations = uniquePermuations - ((originalSize - uniqueElements) * (long)pow(2.0, (double)(originalSize - uniqueElements)));
    cout << "Total permuations: " << totalPermuations << endl;
    cout << "Unique permuations: " << uniquePermuations << endl;
    cout << "Beatuiful permuations: " << beatuifulPermuations << endl;

    double base = pow(10.0, 9.0) + 7;
    return beatuifulPermuations % (int)base;
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
