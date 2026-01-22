#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int get_morse_size(int n)
{
    int x[] = {1, 3, 3, 5, 5, 5, 7, 7, 7, 7, 7, 9, 9, 9, 9, 9, 9, 9, 9, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11, 11 };
    return x[n];
    // return (n / 3) * 4 + (n % 3 == 0 ? 1 : 3);
}

int main()
{
    string s;
    getline(cin, s);

    unordered_map<int, int> amt_map;

    for (int i = 0; i < s.size(); i++)
    {
        if (isalpha(s[i]))
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
                amt_map[s[i] - 'A'] = amt_map[s[i] - 'A'] ? amt_map[s[i] - 'A'] + 1 : 1;
            else
                amt_map[s[i] - 'a'] = amt_map[s[i] - 'a'] ? amt_map[s[i] - 'a'] + 1 : 1;
        }
    }

    vector<pair<int, int>> x;
    for (auto &pair : amt_map)
    {
        x.push_back(pair);
        // cout << pair.first << " : " << pair.second << endl;
    }

    sort(x.begin(), x.end(), [](const pair<int, int> &a, const pair<int, int> &b)
         { return a.second > b.second; });

    int res = 0;
    for (int i = 0; i < x.size(); i++)
    {
        // cout << (char)(x[i].first + 'a') << " : " << x[i].second << " : " << get_morse_size(i) << endl;
        res += get_morse_size(i) * x[i].second + ((x[i].second - 1) * 3);
        res += 3;
    }

    res -= 3;

    cout << res << endl;
}
