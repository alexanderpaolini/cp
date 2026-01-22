#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
  ll n;
  cin >> n;

  int x = 0;
  while (pow(2, x) < n)
    x++;

  ll out = 2 * (n - pow(2, x - 1));

  if (out == n)
  {
    cout << 0 << endl;
  }
  else
  {
    cout << out << endl;
  }
}
