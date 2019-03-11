#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> split(const string &str);

int main()
{
    int nArrays;
    int nQueries;
    vector<vector<int>> arr;

    cin >> nArrays;
    cin >> nQueries;

    int arrSize;
    int arrEl;
    for (int i = 0; i < nArrays; i++)
    {
        cin >> arrSize;
        vector<int> tmp;
        for (int j = 0; j < arrSize; j++)
        {
            cin >> arrEl;
            tmp.push_back(arrEl);
        }
        arr.push_back(tmp);
    }

    for (int i = 0; i < nQueries; i++)
    {
        int row;
        int column;
        cin >> row >> column;

        cout << arr[row][column] << endl;
    }

    return 0;
}
