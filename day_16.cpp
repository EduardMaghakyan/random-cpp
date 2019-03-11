#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
  string S;
  cin >> S;
  try
  {
    int i = stoi(S);
    cout << i << endl;
  }
  catch (const invalid_argument &i)
  {
    cout << "Bad String" << endl;
  }
  catch (const out_of_range &i)
  {
    cout << "Bad String" << endl;
  }
  return 0;
}
