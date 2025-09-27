// solved
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

// last - index of the last bag
// cnt  - number of unions
// ma   - max number of unions
// cur  - current set
int check(const vector<ll> &bags, int last, int cnt, int ma, ll cur)
{
  // if we're at the end, just return the current count
  if (cnt == ma)
  {
    return __builtin_popcountll(cur); // checks the number of set bits in a long long
  }

  // invalid solution to be at the end and not have already returned
  if (last == bags.size())
    return -1;

  // return max of either
  // 1. take
  // 2. don't take
  return max(
      check(bags, last + 1, cnt + 1, ma, cur | bags[last] /* current set of bags OR the last picked bag */),
      check(bags, last + 1, cnt, ma, cur));
}

int t = 0;
void solve()
{
  t++;

  int b, k;
  cin >> b >> k;

  vector<ll> bags(b, 0LL);
  vector<int> taken(b);

  for (int i = 0; i < b; i++)
  {
    int m;
    cin >> m;
    bags[i] = 0;
    while (m--)
    {
      int a;
      cin >> a;
      // we want to shift 1 << (a - 1)
      // so for example if we have 5, 5, 4, 1
      // we would do
      //      10000 OR 10000 OR 1000 OR 1
      //      => 110001
      //      => 3 unique elements
      bags[i] |= (1LL << (a - 1));
    }
  }

  // base case starts at 0 with nothing taken, max unions = k
  cout << check(bags, 0, 0, k, 0LL) << endl;
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
