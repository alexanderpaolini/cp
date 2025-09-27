// solved
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int t = 0;

string shuffle(string s1, string s2)
{
  string out;
  for (int i = 0; i < s1.length(); i++)
  {
    out += s2[i];
    out += s1[i];
  }
  return out;
}

void solve()
{
  t++;
  int c;
  cin >> c;
  string s1, s2;
  cin >> s1 >> s2;
  string end;
  cin >> end;

  int x = pow(c, 2);

  int n = 1;
  while (x--)
  {
    string out = shuffle(s1, s2);
    if (out == end)
    {
      cout << t << " " << pow(c, 2) - x << endl;
      return;
    }

    s1 = out.substr(0, c);
    s2 = out.substr(c, 2 * c);

    n++;
  }

  cout << t << " " << -1 << endl;
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
