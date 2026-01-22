#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
  ld age_1, amt_1, age_2, amt_2, age_3;
  cin >> age_1 >> amt_1 >> age_2 >> amt_2 >> age_3;

  ld t1 = max(age_3 - age_1, (ld)0) * amt_1;
  ld t2 = max(age_3 - age_2, (ld)0) * amt_2;

  if (t1 >= t2)
  {
    cout << 1 << endl;
  }
  else
  {
    cout << 2 << endl;
  }
}
