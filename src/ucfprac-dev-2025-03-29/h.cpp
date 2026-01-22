#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

ld calc_distance(vector<vector<int>> vvi)
{
    ld sum = 0;
    for (int i = 1; i < vvi.size(); i++)
    {
        vector<int> last = vvi[i - 1];
        vector<int> cur = vvi[i];

        sum += sqrt(pow(cur[0] - last[0], 2) + pow(cur[1] - last[1], 2));
    }
    return sum;
}

int main()
{
    int n, t;
    cin >> n >> t;

    vector<vector<int>> vvi;
    for (int i = 0; i < n; i++)
    {
        vector<int> vi(3);
        for (int i = 0; i < 3; i++)
        {
            cin >> vi[i];
        }
        vvi.push_back(vi);
    }

    vector<vector<int>> result;

    int ct = 0;
    for (int i = 0; i < vvi.size() - 1; ++i)
    {
        int x1 = vvi[i][0], y1 = vvi[i][1], t1 = vvi[i][2];
        int x2 = vvi[i + 1][0], y2 = vvi[i + 1][1], t2 = vvi[i + 1][2];

        for (; ct < t2; ct += t)
        {
            double ratio = (double)(ct - t1) / (t2 - t1);
            int x = x1 + ratio * (x2 - x1);
            int y = y1 + ratio * (y2 - y1);
            result.push_back({x, y, ct});
        }
    }
    result.push_back(vvi.back());

    double expected = calc_distance(vvi);
    double got = calc_distance(result);

    cout << setprecision(12) << 100.0 * (expected - got) / expected << endl;
}
