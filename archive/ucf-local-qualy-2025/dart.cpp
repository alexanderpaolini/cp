#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
  int n, r, c;
  cin >> n >> r >> c;

  int mid = n / 2 + 1;

  int dist = max(abs(r - mid), abs(c - mid));

  cout << max(0, 100 - dist * 10) << endl;
}
