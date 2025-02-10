#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int x, y, n;
    cin >> x >> y >> n;
    for (int i = 1; i <= n; i++) {
        string s;
        if (i % x == 0) s += "Fizz";
        if (i % y == 0) s += "Buzz";

        if (s.length()) {
            cout << s << endl;
        } else {
            cout << i << endl;
        }
    }
}
