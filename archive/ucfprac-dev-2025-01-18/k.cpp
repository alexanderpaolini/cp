#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

ll solve(ll n, ll p)
{
    if ((n % p) == 0) return 0;
    return (n - p) % (p * 2);
}

int main()
{
    long long n, p;
    cin >> n >> p;
    cout << solve(n, p) << endl;
}
