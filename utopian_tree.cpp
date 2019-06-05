#include <bits/stdc++.h>

using namespace std;

// Complete the utopianTree function below.
int utopianTree(int n)
{
    int height = 1;
    int cycle = 1;
    while (cycle <= n)
    {
        if (cycle % 2 == 0)
        {
            height++;
        }
        else
        {
            height = height * 2;
        }
        cycle++;
    }

    return height;
}

int main()
{
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int t_itr = 0; t_itr < t; t_itr++)
    {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        int result = utopianTree(n);

        cout << result << "\n";
    }

    return 0;
}
