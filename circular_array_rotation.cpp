#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries)
{
    // k is bigger than a.size()
    int arrSize = a.size();
    if (k > arrSize)
    {
        while (k > arrSize)
        {
            k = k - arrSize;
        }
    }
    vector<int> result;
    rotate(a.begin(), a.begin() + a.size() - k, a.end());
    for (size_t i = 0; i < queries.size(); i++)
    {
        result.push_back(a[queries[i]]);
    }
    return result;
}

int main()
{
    string nkq_temp;
    getline(cin, nkq_temp);

    vector<string> nkq = split_string(nkq_temp);

    int n = stoi(nkq[0]);

    int k = stoi(nkq[1]);

    int q = stoi(nkq[2]);

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    vector<int> queries(q);

    for (int i = 0; i < q; i++)
    {
        int queries_item;
        cin >> queries_item;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        queries[i] = queries_item;
    }

    vector<int> result = circularArrayRotation(a, k, queries);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << "\n";
        }
    }

    cout << "\n";
    return 0;
}
