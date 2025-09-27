// solved
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int t = 0;

#define rep(i, a, b) for (int i = a; i < (b); ++i)
#define all(x) begin(x), end(x)
#define sz(x) (int)(x).size()
typedef long long ll;
typedef pair<int, int> pii;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

vector<vii> AL;
vi taken;
priority_queue<ii> pq;

void process(int u)
{
  taken[u] = 1;
  for (auto &[v, w] : AL[u])
    if (!taken[v])
      pq.emplace(-w, -v);
}

void solve()
{
  AL.clear();
  taken.clear();
  while (!pq.empty())
    pq.pop();

  t++;
  int V, E;
  cin >> V >> E;

  AL.assign(V + 1, vector<pair<int, int>>());

  for (int i = 0; i < E; ++i)
  {
    int u, v, w;
    cin >> u >> v >> w;
    AL[u].emplace_back(v, w);
    AL[v].emplace_back(u, w);
  }

  taken.assign(V + 1, 0);

  process(1);

  int mst_cost = 0, num_taken = 0;
  while (!pq.empty())
  {
    auto [w, u] = pq.top();
    pq.pop();

    w = -w;
    u = -u;

    if (taken[u])
      continue;

    mst_cost += w;

    process(u);

    ++num_taken;

    if (num_taken == V - 1)
      break;
  }

  if (num_taken < V - 1)
  {
    cout << "Campus #" << t << ": " << "I'm a programmer, not a miracle worker!" << endl;
  }
  else
  {
    cout << "Campus #" << t << ": " << mst_cost << endl;
  }
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
