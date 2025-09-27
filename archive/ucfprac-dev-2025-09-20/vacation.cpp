#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;
#define endl "\n"
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int dist(ii a, ii b)
{
  return sqrt(pow(a.first - b.first, 2) + pow(a.second - b.second, 2));
}

int t = 0;
void solve()
{
  t++;

  int r, b;
  cin >> r >> b;

  vector<vector<int>> AM(r + 1, vector<int>(r + 1));
  vector<int> AL(r + 1, 0);

  vector<ii> rp(r + 1);
  for (int i = 1; i <= r; i++)
  {
    int x, y;
    cin >> x >> y;
    rp[i] = make_pair(x, y);
  }

  for (int i = 1; i < r + 1; i++)
  {
    for (int j = 1; j < r + 1; j++)
    {
      AM[i][j] = dist(rp[i], rp[j]);
    }
  }

  for (int i = 0; i < b; i++)
  {
    int x, y;
    cin >> x >> y;
    AM[x][y] = -1;
    AM[y][x] = -1;
  }

  

  // if (num_taken < r)
  // {
  //   cout << "Campus #" << t << ": " << "I'm a programmer, not a miracle worker!" << endl;
  // }
  // else
  // {
  //   cout << "Campus #" << t << ": " << mst_cost << endl;
  // }
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
