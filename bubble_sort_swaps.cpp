#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

void swap(int *a, int *b)
{
    int tmp = (*a);
    *a = (*b);
    *b = tmp;
}

// Complete the countSwaps function below.
void countSwaps(vector<int> a)
{
    int swaps = 0;
    for (int i = 0; i < a.size(); i++)
    {

        for (int j = 0; j < a.size() - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swaps++;
                swap(&a[j], &a[j + 1]);
            }
        }
    }
    printf("Array is sorted in %d swaps.\n", swaps);
    printf("First Element: %d\n", a.front());
    printf("Last Element: %d\n", a.back());
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string a_temp_temp;
    getline(cin, a_temp_temp);

    vector<string> a_temp = split_string(a_temp_temp);

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int a_item = stoi(a_temp[i]);

        a[i] = a_item;
    }

    countSwaps(a);

    return 0;
}
