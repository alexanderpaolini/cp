#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void solve()
{
    int n;
    cin >> n;
    int v[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        total += v[i];
    }
    int mi = 0;
    bool tied = false;
    for (int i = 0; i < n; i++)
    {
        if ((double)v[i] > (double)total / 2)
        {
            cout << "majority winner " << i + 1 << endl;
            return;
        }
        if (v[i] == v[mi] && i != 0)
        {
            tied = true;
        }
        else if (v[i] > v[mi])
        {
            tied = false;
            mi = i;
        }
    }
    if (tied)
    {
        cout << "no winner" << endl;
    }
    else
    {
        cout << "minority winner " << mi + 1 << endl;
    }
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
