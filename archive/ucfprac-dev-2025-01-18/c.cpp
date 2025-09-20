#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    int n3 = 0;
    int n2 = 0;
    while (n % 2 != 0) {
        n -= 3;
        n3++;
    }
    while (n > 0) {
        n -= 2;
        n2 ++;
    }
    cout << n2 + n3 << endl;
    for (int i =0 ; i < n3; i++) {
        cout << 3 << " ";
    }
    for (int i =0; i < n2; i++) {
        cout << 2 << " ";
    }
}
