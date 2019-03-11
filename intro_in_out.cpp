#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

vector<string> split(const string &);

int main()
{
    string input;
    getline(cin, input);

    vector<string> inputs = split(input);

    int sum = 0;
    for (int i = 0; i < inputs.size(); i++)
    {
        sum += stoi(inputs[i]);
    }

    cout << sum << endl;

    return 0;
}

vector<string> split(const string &str)
{
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos)
    {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}
