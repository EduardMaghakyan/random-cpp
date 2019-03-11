#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

    int nInputs;
    scanf("%d", &nInputs);
    vector<int> arr;
    for (int i = 0; i < nInputs; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        arr.push_back(tmp);
    }

    string output = "";
    for (int i = nInputs - 1; i >= 0; i--)
    {
        output += to_string(arr[i]);
        if (i != 0)
        {
            output += " ";
        }
    }

    cout << output << endl;
    return 0;
}
