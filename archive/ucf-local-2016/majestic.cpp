#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void solve()
{
  int a, b, c;
  cin >> a >> b >> c;

  int count = 0;

  if (a >= 10)
    count++;
  if (b >= 10)
    count++;
  if (c >= 10)
    count++;

  cout << a << " " << b << " " << c << endl;

  if (count == 0)
  {
    cout << "zilch" << endl;
  }
  else if (count == 1)
  {
    cout << "double" << endl;
  }
  else if (count == 2)
  {
    cout << "double-double" << endl;
  }
  else
  {
    cout << "triple-double" << endl;
  }
}

int main()
{
  int T;
  cin >> T;
  while (T--)
  {
    solve();

    if (T != 0)
    {
      cout << endl;
    }
  }
}
