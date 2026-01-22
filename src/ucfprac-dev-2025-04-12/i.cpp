#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    string alphabet;
    cin >> alphabet;

    string word;
    cin >> word;

    set<string> words;

    // add any lettter anywhere in the string
    for (int i = 0; i <= word.size(); i++)
    {
        for (auto &c : alphabet)
        {
            string s = word.substr(0, i);
            s += c;
            s += word.substr(i, word.size() - i);
            words.insert(s);
        }
    }

    // remove any letter anywhere in the string
    for (int i = 0; i < word.size(); i++)
    {
        string s = word.substr(0, i);
        s += word.substr(i + 1, word.size() - i);
        words.insert(s);

        for (auto &c : alphabet)
        {
            s = word.substr(0, i);
            s += c;
            s += word.substr(i + 1, word.size() - i);
            words.insert(s);
        }
    }

    for (auto &w : words)
    {
        if (w == word) continue;
        cout << w << endl;
    }
}
