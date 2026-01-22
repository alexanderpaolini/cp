#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int check(vector<string> vs, string s, int x, int y);

void solve(int t)
{
  cout << "Word search puzzle #" << t << ":" << endl;

  vector<string> vs;

  int y, x;
  cin >> y >> x;

  for (int i = 0; i < y; i++)
  {
    string s;
    cin >> s;
    vs.push_back(s);
  }

  int T;
  cin >> T;

  for (int i = 0; i < T; i++)
  {
    string w;
    cin >> w;

    char c0 = w.at(0);

    int flag = 0;
    for (int a = 0; a < y; a++)
    {
      for (int b = 0; b < vs[a].length(); b++)
      {
        char c1 = vs[a][b];

        if (c1 == c0)
        {
          flag = check(vs, w, b, a);
          if (flag)
            break;
        }
      }

      if (flag)
        break;
    }
  }
}

int check(vector<string> vs, string s, int x, int y)
{
  int len = s.length();
  int n = vs.size();
  int m = vs[0].size();

  {
    int i = 0;
    while (i < len && vs[((y + i) % n + n) % n][x] == s[i])
      i++;
    if (i == len)
    {
      cout << "D " << y + 1 << " " << x + 1 << " " << s << endl;
      return 1;
    }
  }

  {
    int i = 0;
    while (i < len && vs[((y - i) % n + n) % n][x] == s[i])
    {
      i++;
    }
    if (i == len)
    {
      cout << "U " << y + 1 << " " << x + 1 << " " << s << endl;
      return 1;
    }
  }

  {
    int i = 0;
    while (i < len && vs[y][((x + i) % m + m) % m] == s[i])
      i++;
    if (i == len)
    {
      cout << "R " << y + 1 << " " << x + 1 << " " << s << endl;
      return 1;
    }
  }

  {
    int i = 0;
    while (i < len && vs[y][((x - i) % m + m) % m] == s[i])
      i++;
    if (i == len)
    {
      cout << "L " << y + 1 << " " << x + 1 << " " << s << endl;
      return 1;
    }
  }

  return 0;
}

int main()
{
  int T;
  cin >> T;
  for (int t = 1; t <= T; ++t)
  {
    solve(t);

    if (t == T - 1)
    {
      cout << endl;
    }
  }
}
