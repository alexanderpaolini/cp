#include <bits/stdc++.h>
using namespace std;
int main () {
    int a, b;
    while (cin >> a >> b) {
        if (a == 0 && b == 0) return 0;
        if (a + b == 13) cout << "Never speak again." << endl;
        else if (a == b) cout << "Undecided." << endl;
        else if (b > a) cout << "Left beehind." << endl;
        else cout << "To the convention." << endl;
    }
}