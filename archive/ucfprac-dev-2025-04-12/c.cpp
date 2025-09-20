#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

bool test(int x, int y, vector<int> &xs, vector<int> &ys)
{
    x += 1;
    y += 1;

    int a = 0;
    while (x > 0)
    {
        x -= xs[a];
        a += 1;
    }

    int b = 0;
    while (y > 0)
    {
        y -= ys[b];
        b += 1;
    }

    bool res = (a + b) % 2 == 0;

    // cout << a + b << endl;

    return res;
}

int main()
{
    int r, c, v, h;
    cin >> r >> c >> v >> h;

    vector<int> ys(v);
    for (int i = 0; i < v; i++)
    {
        cin >> ys[i];
    }

    vector<int> xs(h);
    for (int i = 0; i < h; i++)
    {
        cin >> xs[i];
    }

    for (int y = 0; y < r; y++)
    {
        for (int x = 0; x < c; x++)
        {
            cout << (test(x, y, xs, ys) ? "B" : "W");
        }
        cout << endl;
    }
}
