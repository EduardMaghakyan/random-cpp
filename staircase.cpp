#include <bits/stdc++.h>

using namespace std;

string repeat(string s, int n)
{
    string result = "";
    for (int i = 0; i < n; i++)
    {
        result += s;
    }

    return result;
}

// Complete the staircase function below.
void staircase(int n)
{

    for (int i = 0; i < n; i++)
    {
        string line = repeat(" ", n - i - 1);
        line += repeat("#", i + 1);
        printf("%s\n", line.c_str());
    }
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
