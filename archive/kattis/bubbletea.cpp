#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    vector<ll> pt;
    for (int i = 0; i < n; i++)
    {
        ll p;
        cin >> p;
        pt.push_back(p);
    }
    int m;
    cin >> m;
    vector<ll> pto;
    for (int i = 0; i < m; i++)
    {
        ll p;
        cin >> p;
        pto.push_back(p);
    }
    ll mi = (ll) 2 << 60;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        while (a--)
        {
            int k;
            cin >> k;
            mi = min(mi, pt[i] + pto[k - 1]);
        }
    }
    int money;
    cin >> money;
    cout << max((money / mi) - 1, (ll) 0);
}
