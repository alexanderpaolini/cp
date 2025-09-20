#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"

void solve(int t)
{
  int xnot[51] = {0};
  int ynot[51] = {0};

  int s, m;
  cin >> s >> m;

  int failed = 0;
  for (int i = 0; i < m; i++)
  {
    int x, y;
    cin >> x >> y;
    if (xnot[x] && ynot[y])
      failed++;
    xnot[x]++;
    ynot[y]++;
  }

  cout << "Strategy #" << t << ": " << failed << endl
       << endl;
}

int main()
{
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t)
  {
    solve(t);
  }
}
