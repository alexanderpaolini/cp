#include <bits/stdc++.h>
using namespace std;
int main() {
    int l, r;
    cin >> l >> r;
    if (l == 0 && r == 0) {
        cout << "Not a moose";
    } else if (l == r) {
        cout << "Even " << l + r;
    } else {
        cout << "Odd " << 2 * max(l, r);
    }
}