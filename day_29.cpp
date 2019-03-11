#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

int maximumBitwiseAnd(vector<int> possibleValues, int lowerThan)
{
    int maxBitWiseValue = 0;
    for (size_t i = 0; i < possibleValues.size() - 1; i++)
    {
        for (size_t j = i + 1; j < possibleValues.size(); j++)
        {
            int bitWiseAnd = (possibleValues[i] & possibleValues[j]);
            if (bitWiseAnd < lowerThan && maxBitWiseValue < bitWiseAnd)
            {
                maxBitWiseValue = bitWiseAnd;
            }
        }
    }
    return maxBitWiseValue;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        string nk_temp;
        getline(cin, nk_temp);

        vector<string> nk = split_string(nk_temp);

        int n = stoi(nk[0]);

        int k = stoi(nk[1]);

        vector<int> possibleValues(n);
        iota(possibleValues.begin(), possibleValues.end(), 1);
        cout << maximumBitwiseAnd(possibleValues, k) << endl;
    }

    return 0;
}

vector<string> split_string(string input_string)
{
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [](const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ')
    {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos)
    {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
