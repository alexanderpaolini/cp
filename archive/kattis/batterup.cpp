#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    int total = 0;
    int num = 0;
    while (n--) {
        int v;
        cin >> v;
        if (v == -1) continue;
        total += v;
        num++;
    }
    cout << setprecision(17) << (double) total / num << endl;
}
