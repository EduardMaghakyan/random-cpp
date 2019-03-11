#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

bool isPrime(int n)
{
    if (n == 2 || n == 3)
    {
        return true;
    }

    if (n % 2 == 0 || n % 3 == 0 || n == 1)
    {
        return false;
    }

    int i = 5;
    int w = 2;
    while (i * i <= n)
    {
        if (n % i == 0 || (n % (i + 2)) == 0)
        {
            return false;
        }
        else
        {
            i += w;
            w = 6 - w;
        }
    }
    return true;
}

void checkPrime(int n)
{
    if (isPrime(n))
    {
        cout << "Prime" << endl;
    }
    else
    {
        cout << "Not prime" << endl;
    }
}

int main()
{
    int n;

    cin >> n;
    vector<int> int_vector(n);
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        int_vector[i] = value;
    }

    for (int i = 0; i < int_vector.size(); i++)
    {
        checkPrime(int_vector[i]);
    }

    return 0;
}
