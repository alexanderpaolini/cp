#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void solve(int ts)
{
  int p;
  cin >> p;

  vector<pair<double, double>> vdd;
  for (int i = 0; i < p; i++)
  {
    double a, b;
    cin >> a >> b;
    vdd.push_back(make_pair(a, b));
  }

  for (auto m : vdd)
  {
    for (auto a : vdd)
    {
      if (a == m)
        continue;
      if (a.second != m.second) // same y level
        continue;

      for (auto b : vdd)
      {
        if (b == a || b == m)
          continue;
        if (b.second != a.second || a.first - m.first != m.first - b.first) // same y level and same distance
          continue;

        for (auto c : vdd) {
          if (c == b || c == a || c == m) continue;

          if (c.first == m.first && )
        }
      }
    }
  }
}

int main()
{
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t)
  {
    solve(t);

    if (t != T - 1)
    {
      cout << endl;
    }
  }
}
