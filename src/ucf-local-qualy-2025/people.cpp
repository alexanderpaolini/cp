#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

// this is a segment tree question

template <class T>
struct BIT
{
  vector<T> s;
  int n;
  BIT(int n) : s(n + 1), n(n) {}
  void update(int i, T v)
  {
    for (i++; i <= n; i += i & -i)
      s[i] += v;
  }
  T query(int i)
  { // EXCLUSIVE interval [0 , i )
    T ans = 0;
    for (; i; i -= i & -i)
      ans += s[i];
    return ans;
  } // INCLUSIVE=EXCLUSIVE interval [ l , r)
  T query(int l, int r) { return query(r) - query(l); }
  int kth(T k)
  { // 0=indexed , returns n i f k > sum of tree
    if (k < 0)
      return -1;
    int i = 0;
    for (int pw = 1 << __lg(n); pw; pw >>= 1)
      if (i + pw <= n && s[i + pw] <= k)
        k -= s[i += pw];
    return i;
  }
};

int main()
{
  int n;
  cin >> n;
  BIT<ll> data(n + 1);

  for (int i = 1; i < n + 1; i++)
  {
    ll c;
    cin >> c;
    data.update(i, c);
  }

  int t;
  cin >> t;

  while (t--)
  {
    char s;
    cin >> s;
    ll a, b;
    cin >> a >> b;

    if (s == 'R')
    {
      cout << data.query(a, b + 1) << endl;
    }
    else
    {
      ll uv = b;

      if (data.query(a, a + 1) + b < 0)
      {
        data.update(a, 0 - data.query(a, a + 1));
      }
      else
        data.update(a, b);
    }
  }
}
