#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void inc(vector<int> arr, int steps, int k)
{
  for (int i = arr.size() - 1; i >= 0; i--)
  {
    if (i != arr.size() - 1)
    {
    }
    else
    {
      int change = min(26 - arr[i], steps * k);
      arr[i] += change;
      steps -= change;
    }
  }
}

void solve()
{
  int k, n, r;
  cin >> k >> n >> r;

  vector<int> arr(n);
  arr[0] = 1;
  for (int i = 1; i < n; i++)
  {
    arr[i] = arr[i - 1] + k + 1;
  }

  inc(arr, r, k);

  for (int i = 0; i < n; i++)
  {
    cout << (char)('a' + arr[i] - 1);
  }
  cout << endl;
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
