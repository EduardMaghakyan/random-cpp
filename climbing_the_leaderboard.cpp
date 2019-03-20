#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice)
{
    vector<int> result;
    set<int> s(scores.begin(), scores.end());
    scores.assign(s.begin(), s.end());
    sort(scores.begin(), scores.end(), greater<int>());
    int j = scores.size() - 1;
    int lastPosition = scores.size() + 1;
    int skipped = 0;
    for (size_t i = 0; i < alice.size(); i++)
    {
        if (alice[i] < scores[scores.size() - 1])
        {
            result.push_back(lastPosition);
            continue;
        }
        while (alice[i] >= scores[j] && j >= 0)
        {
            j--;
            skipped++;
        }
        result.push_back(lastPosition - skipped);
    }
    return result;
}

int main()
{
    int scores_count;
    cin >> scores_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split_string(scores_temp_temp);

    vector<int> scores(scores_count);

    for (int i = 0; i < scores_count; i++)
    {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    int alice_count;
    cin >> alice_count;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string alice_temp_temp;
    getline(cin, alice_temp_temp);

    vector<string> alice_temp = split_string(alice_temp_temp);

    vector<int> alice(alice_count);

    for (int i = 0; i < alice_count; i++)
    {
        int alice_item = stoi(alice_temp[i]);

        alice[i] = alice_item;
    }

    vector<int> result = climbingLeaderboard(scores, alice);

    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];

        if (i != result.size() - 1)
        {
            cout << "\n";
        }
    }

    cout << "\n";

    return 0;
}