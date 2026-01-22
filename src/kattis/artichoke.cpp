#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int p, a, b, c, d, n;
    cin >> p >> a >> b >> c >> d >> n;

    double mav = -1;
    double miv = -1;
    double dec = 0;
    for (int k = 1; k <= n; k++)
    {
        double cur = p * (sin(a*k+b)+cos(c*k + d) + 2);
        if (cur > mav)
        {
            mav = cur;
            miv = cur;
        }
        if (cur < miv || miv == -1)
        {
            miv = cur;
        }
        dec = max(dec, mav - miv);
    }
    cout << setprecision(12) << dec << endl;
}
