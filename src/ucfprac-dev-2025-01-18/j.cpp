#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int>> vp;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int p, s;
        cin >> p >> s;
        mp[p * 1000 + s] = 1;
        vp.push_back(make_pair(p, s));
    }

    vector<pair<int, int>> vp1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            pair<int, int> p = make_pair(i, j);
            if (mp.find(1000 * i + j) == mp.end())
            {
                vp1.push_back(p);
            }
        }
    }

    if (vp1.size() >= n)
    {
        cout << "YES" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << vp1[i].first << " " << vp1[i].second << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
    }
}
