#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{

	vector<string> inputStrings;
	string dummy;

	string inputs;
	getline(cin, inputs);

	int inputCout = stoi(inputs);

	for (int i = 0; i < inputCout; i++)
	{
		string sinput;
		getline(cin, sinput);
		inputStrings.push_back(sinput);
	}

	string odds = "";
	string evens = "";

	for (int i = 0; i < inputCout; i++)
	{
		for (int j = 0; j < inputStrings[i].size(); j++)
		{
			if (j % 2 == 0)
			{
				evens += inputStrings[i][j];
			}
			else
			{
				odds += inputStrings[i][j];
			}
		}
		cout << evens << " " << odds << endl;
		evens = "";
		odds = "";
	}

	return 0;
}
