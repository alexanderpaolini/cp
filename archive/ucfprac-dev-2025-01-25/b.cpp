#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

ld com(ld dh, ld h, ld r, ld da, ld dw)
{
    ld base = M_PI * r * r;

    ld m1 = base * dh * dw;
    ld m2 = base * (h - dh) * da;

    ld x1 = dh / 2;
    ld x2 = dh + (h - dh) / 2;

    ld m_total = m1 + m2;
    ld h_com = (m1 * x1 + m2 * x2) / m_total;

    return h_com;
}
int main()
{
    ld h, r, da, dw;
    cin >> h >> r >> da >> dw;

    ld left = 0, right = h;
    ld m_diff = 1e-6;

    while (right - left > m_diff)
    {
        ld mid1 = left + (right - left) / 3;
        ld mid2 = right - (right - left) / 3;

        if (com(mid1, h, r, da, dw) < com(mid2, h, r, da, dw))
        {
            right = mid2;
        }
        else
        {
            left = mid1;
        }
    }

    ld dh = (left + right) / 2;
    cout << setprecision(12) << dh << endl;

    return 0;
}
