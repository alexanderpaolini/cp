#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    int n_odds = n / 2;
    if (n_odds % 2 == 0)
    {
        cout << 2 << endl;
        return 0;
    }

    cout << 1 << endl;

    return 0;
}
