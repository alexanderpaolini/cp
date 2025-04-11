#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n, s;
    cin >> n >> s;

    int ma = 0, cur;
    while (n--) {
        cin >> cur;
        ma = max(ma, cur);
    }

    cout << ceil((double) ma * (double) s / (double) 1000) << endl;
}
