#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

double dist(int x1, int y1, int x2, int y2)
{
    return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

int main()
{
    int x, y, x1, y1, x2, y2;
    cin >> x >> y >> x1 >> y1 >> x2 >> y2;

    int mi_x = min(x1, x2), ma_x = max(x1, x2);
    int mi_y = min(y1, y2), ma_y = max(y1, y2);

    double res;
    if (x >= mi_x && x <= ma_x)
    {
        // perp x case
        res = min(
            abs(y - y1),
            abs(y - y2));
    }
    else if (y >= mi_y && y <= ma_y)
    {
        // perp y case
        res = min(
            abs(x - x1),
            abs(x - x2));
    }
    else
    {
        // min d case
        res = min(
            dist(x, y, x1, y1),
            min(
                dist(x, y, x1, y2),
                min(
                    dist(x, y, x2, y1),
                    dist(x, y, x2, y2))));
    }

    printf("%.3f", res);
}
