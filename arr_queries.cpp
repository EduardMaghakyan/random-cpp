#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the arrayManipulation function below.
long arrayManipulation(int n, vector<vector<int>> queries)
{
    vector<long> starterVector(n, 0);
    for (int i = 0; i < queries.size(); i++)
    {
        // Current manipulation
        long valueToAdd = queries[i].back();
        int firstIndex = queries[i][queries[i].size() - 3] - 1;
        int lastIndex = queries[i][queries[i].size() - 2] - 1;
        starterVector[firstIndex] += valueToAdd;
        starterVector[lastIndex + 1] -= valueToAdd;
    }
    long long sum = 0;
    long long max = 0;
    for (int i = 0; i < n; ++i)
    {
        sum = sum + starterVector[i];
        if (max < sum)
        {
            max = sum;
        }
    }
    return max;
}

int main()
{
    string nm_temp;
    getline(cin, nm_temp);

    vector<string> nm = split_string(nm_temp);

    int n = stoi(nm[0]);

    int m = stoi(nm[1]);

    vector<vector<int>> queries(m);
    for (int i = 0; i < m; i++)
    {
        queries[i].resize(3);

        for (int j = 0; j < 3; j++)
        {
            cin >> queries[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    long result = arrayManipulation(n, queries);

    cout << result << "\n";

    return 0;
}
