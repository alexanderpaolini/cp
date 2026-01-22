// upsolved
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"

int t = 0;
void solve()
{
  t++;

  int c;
  cin >> c;

  vector<int> coins(c);
  for (int i = 0; i < c; i++)
  {
    cin >> coins[i];
  }

  sort(coins.begin(), coins.end());

  int target = 1;
  for (int i = 0; i < coins.size(); i++)
  {
    if (coins[i] > target)
      break;
    target += coins[i];
  }

  cout << "Set #" << t << ": " << target << endl
       << endl;
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    solve();
  }
}
