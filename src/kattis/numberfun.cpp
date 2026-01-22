#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int a,b,c;
        cin >> a >> b >> c;
        if (
            a * b == c ||
            a % b == 0 && a / b == c ||
            b % a == 0 && b / a == c ||
            a - b == c ||
            b - a == c ||
            a + b == c
        ) cout << "Possible" << endl;
        else cout << "Impossible" << endl;
    }
}