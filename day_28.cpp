#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    list<string> firstNamesToSort;

    regex e(".*@gmail.com$");
    for (int N_itr = 0; N_itr < N; N_itr++)
    {
        string firstNameEmailID_temp;
        getline(cin, firstNameEmailID_temp);

        vector<string> firstNameEmailID = split_string(firstNameEmailID_temp);

        string firstName = firstNameEmailID[0];

        string emailID = firstNameEmailID[1];
        if (regex_match(emailID, e))
        {
            firstNamesToSort.push_back(firstName);
        }
    }

    firstNamesToSort.sort();

    list<string>::iterator it;
    for (it = firstNamesToSort.begin(); it != firstNamesToSort.end(); it++)
    {
        cout << *it << endl;
    }

    return 0;
}
