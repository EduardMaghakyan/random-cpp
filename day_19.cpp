#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class AdvancedArithmetic
{
  public:
    virtual int divisorSum(int n) = 0;
};
class Calculator : public AdvancedArithmetic
{
  public:
    int divisorSum(int n)
    {
        vector<int> divisors;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                if (n / i == i)
                {
                    divisors.push_back(i);
                }
                else
                {
                    divisors.push_back(i);
                    divisors.push_back(n / i);
                }
            }
        }
        int sumOfDivisors = 0;
        for (int i = 0; i < divisors.size(); i++)
        {
            sumOfDivisors += divisors[i];
        }
        return sumOfDivisors;
    }
};

int main()
{
    int n;
    cin >> n;
    AdvancedArithmetic *myCalculator = new Calculator();
    int sum = myCalculator->divisorSum(n);
    cout << "I implemented: AdvancedArithmetic\n"
         << sum;
    return 0;
}
