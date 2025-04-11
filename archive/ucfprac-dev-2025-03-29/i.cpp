#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int solve()
{
    int n;
    cin >> n;
    vector<int> x(n);

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    for (int i = 1; i < n - 1; i++)
    {
        if (x[i - 1] + 1 != x[i])
        {
            return i + 1;
        }
    }

    return 0;
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        cout << solve() << endl;
    }
}
