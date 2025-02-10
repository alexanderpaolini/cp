#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void solve()
{
    int n;
    cin >> n;
    int prev;
    cin >> prev;
    bool done = false;
    for (int i = 1; i < n; i++) {
        int val;
        cin >> val;
        if (done) continue;
        if (val - 1 != prev) {
            cout << i + 1 << endl;
            done = true;
        }
        prev = val;
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
