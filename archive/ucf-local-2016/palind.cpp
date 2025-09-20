#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"

void solve(int T)
{
  cout << "Test case #" << T << ":" << endl;

  int sound_same;
  cin >> sound_same;

  unordered_map<char, char> x;
  for (int i = 0; i < sound_same; i++)
  {
    char c0, c1;
    cin >> c0 >> c1;
    x[c0] = c1;
    x[c1] = c0;
  }

  int count;
  cin >> count;

  for (int i = 0; i < count; i++)
  {
    string s;
    cin >> s;

    int L = 0, R = s.length() - 1;

    bool flag = true;
    while (L < R)
    {
      if (s.at(L) != s.at(R) && x[s.at(L)] != s.at(R))
        flag = false;

      L++;
      R--;
    }

    if (flag)
    {
      cout << s << " YES" << endl;
    }
    else
    {
      cout << s << " NO" << endl;
    }
  }
}

int main()
{
  int T;
  cin >> T;
  for (int i = 0; i < T; i++)
  {
    solve(i + 1);

    if (i != T - 1)
    {
      cout << endl;
    }
  }
}
