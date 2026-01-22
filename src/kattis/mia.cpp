#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int score(int hi, int lo)
{
    if (lo > hi)
    {
        swap(lo, hi);
    }

    if (hi == 2 && lo == 1)
    {
        return 99999;
    }

    if (hi == lo)
    {
        return hi * 100;
    }

    return hi * 10 + lo;
}

int main()
{
    int s0, s1, r0, r1;
    while (cin >> s0 >> s1 >> r0 >> r1)
    {
        if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0)
            break;

        int p1 = score(s0, s1);
        int p2 = score(r0, r1);

        if (p1 > p2)
        {
            cout << "Player 1 wins." << endl;
        }
        else if (p2 > p1)
        {
            cout << "Player 2 wins." << endl;
        }
        else if (p1 == p2)
        {
            cout << "Tie." << endl;
        }
    }
}
