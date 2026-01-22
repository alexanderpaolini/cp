#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    int minval;
    int d = 0;
    cin >> minval;
    for (int i = 1; i < n; i++) {
        int val;
        cin >> val;
        if (val < minval) {
            minval = val;
            d = i;
        }
    }
    cout << d;
}
