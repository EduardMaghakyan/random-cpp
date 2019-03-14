#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the marcsCakewalk function below.
long marcsCakewalk(vector<int> calorie)
{
    sort(calorie.begin(), calorie.end(), greater<int>());
    long cakeWalk = 0;
    for (size_t i = 0; i < calorie.size(); i++)
    {
        cakeWalk += (pow(2, i) * calorie[i]);
    }
    return cakeWalk;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string calorie_temp_temp;
    getline(cin, calorie_temp_temp);

    vector<string> calorie_temp = split_string(calorie_temp_temp);

    vector<int> calorie(n);

    for (int i = 0; i < n; i++)
    {
        int calorie_item = stoi(calorie_temp[i]);

        calorie[i] = calorie_item;
    }

    long result = marcsCakewalk(calorie);

    cout << result << "\n";

    return 0;
}
