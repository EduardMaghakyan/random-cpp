#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

// Complete the minimumBribes function below.
void minimumBribes(vector<int> q)
{
    int bribes = 0;
    for (int i = q.size() - 1; i >= 0; i--)
    {
        // Check if no more than 2 positions ahead of it's original position
        if (q[i] - (i + 1) > 2)
        {
            cout << "Too chaotic" << endl;
            return;
        }

        for (int j = max(0, q[i] - 2); j < i; j++)
        {
            // Since the bigger number is ahead of our current persons number, hence he was bribed.
            if (q[j] > q[i])
            {
                bribes++;
            }
        }
    }

    cout << bribes << endl;
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

        string q_temp_temp;
        getline(cin, q_temp_temp);

        vector<string> q_temp = split_string(q_temp_temp);

        vector<int> q(n);

        for (int i = 0; i < n; i++)
        {
            int q_item = stoi(q_temp[i]);

            q[i] = q_item;
        }

        minimumBribes(q);
    }

    return 0;
}
