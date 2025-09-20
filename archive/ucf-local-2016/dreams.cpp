#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"

void solve(int T)
{
  cout << "CD #" << T << ":" << endl;

  int t, k;
  vector<int> vi;

  int sumLen = 0;
  int trlen = 0;

  cin >> t >> k;

  for (int i = 0; i < t; i++)
  {
    int x;
    cin >> x;

    sumLen += x;
    if (i == k - 1)
    {
      trlen = x;
    }

    vi.push_back(x);
  }

  int days;
  cin >> days;
  for (int i = 0; i < days; i++)
  {
    ll listening_time = 0;
    int session_count;
    cin >> session_count;
    int debt = 0;
    for (int j = 0; j < session_count; j++)
    {
      int session_length;
      cin >> session_length;
      if (j % 2 == 0)
      {
        listening_time += session_length;
        if (session_length % trlen == 0)
          debt = 0;
        else
          debt = trlen - (session_length % trlen);
      }
      else
      {
        int add_time = min(session_length, debt);
        listening_time += add_time;
        session_length -= add_time;

        while (session_length > 0)
        {
          session_length -= sumLen - trlen;

          if (session_length > 0)
          {
            listening_time += min(session_length, trlen);
            session_length -= trlen;
          }
        }
      }
    }

    cout << listening_time << endl;
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
