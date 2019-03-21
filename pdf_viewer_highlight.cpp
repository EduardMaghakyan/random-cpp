#include <bits/stdc++.h>
#include "helper.h"

using namespace std;

int designerPdfViewer(vector<int> h, string word)
{
    int width = 1 * word.size();
    int maxHeight = 1;
    for (size_t i = 0; i < word.size(); i++)
    {
        int adjustedAsciiValue = (int)word[i] - 97;
        if (h[adjustedAsciiValue] > maxHeight)
        {
            maxHeight = h[adjustedAsciiValue];
        }
    }
    return width * maxHeight;
}

int main()
{
    string h_temp_temp;
    getline(cin, h_temp_temp);

    vector<string> h_temp = split_string(h_temp_temp);

    vector<int> h(26);

    for (int i = 0; i < 26; i++)
    {
        int h_item = stoi(h_temp[i]);

        h[i] = h_item;
    }

    string word;
    getline(cin, word);

    int result = designerPdfViewer(h, word);

    cout << result << "\n";

    return 0;
}
