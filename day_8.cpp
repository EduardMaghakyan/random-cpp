#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

string rtrim(const string &);
vector<string> split(const string &);

int main()
{
	map<string, string> phoneBook;
	map<string, string>::iterator it;

	string dummy;

	string inputs;
	getline(cin, inputs);

	int inputCout = stoi(inputs);

	for (int i = 0; i < inputCout; i++)
	{
		string sinput;
		getline(cin, sinput);
		vector<string> entry = split(rtrim(sinput));
		phoneBook[entry[0]] = entry[1];
	}

	string sinput;
	while (getline(cin, sinput))
	{
		it = phoneBook.find(sinput);
		if (it != phoneBook.end())
		{
			cout << it->first << "=" << it->second << endl;
		}
		else
		{
			cout << "Not found" << endl;
		}
	}
	return 0;
}

string rtrim(const string &str)
{
	string s(str);

	s.erase(
		find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
		s.end());

	return s;
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
