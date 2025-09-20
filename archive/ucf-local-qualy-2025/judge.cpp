#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
  int n, m;
  cin >> n >> m;

  vector<int> data(m + 1, n);

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    for (int i = 0; i < x; i++)
    {
      int a, b;
      cin >> a >> b;

      for (int j = a; j <= b; j++)
      {
        data[j]--;
      }
    }
  }

  int cnt = 0;
  for (int i = 1; i < m + 1; i++)
  {
    if (data[i] >= 3)
      cnt++;
  }

  cout << cnt << endl;
}
