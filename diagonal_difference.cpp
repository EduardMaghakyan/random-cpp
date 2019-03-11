#include <bits/stdc++.h>

using namespace std;

// Complete the diagonalDifference function below.
int diagonalDifference(vector<vector<int>> arr)
{
    int mainSum = 0;
    int secondSum = 0;
    int arrSize = arr.size();
    for (int i = 0; i < arrSize; i++)
    {
        mainSum += arr[i][i];
        secondSum += arr[i][arrSize - i - 1];
    }

    return abs(mainSum + secondSum);
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> arr(n);
    for (int i = 0; i < n; i++)
    {
        arr[i].resize(n);

        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = diagonalDifference(arr);

    cout << result << "\n";

    return 0;
}
