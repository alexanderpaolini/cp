#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    string s;
    cin >> s;

    unordered_map<char, int> freq;

    for (auto &x : s)
    {
        freq[x]++;
    }

    vector<pair<char, int>> freq_vec(freq.begin(), freq.end());

    sort(freq_vec.begin(), freq_vec.end(), [](const pair<char, int> &a, const pair<char, int> &b)
         { 
            if (a.second == b.second) return a.first < b.first;
            return a.second > b.second; });

    for (auto &x : freq_vec)
    {
        for (int i = 0; i < x.second; i++)
        {
            cout << x.first;
        }
    }
}
