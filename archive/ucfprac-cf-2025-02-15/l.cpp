// WA
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int a, b, c, d, e, f;
    cin >> a >> b;
    cin >> c >> d;
    cin >> e >> f;
    double val = sqrt(a * b + c * d + e * f);
    if (val == (int)val)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}
