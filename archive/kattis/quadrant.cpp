#include <bits/stdc++.h>
using namespace std;
int main() {
    int x, y;
    cin >> x >> y;
    if (x > 0 && y > 0) {
        cout << "1";
    } else if (y > 0 && x < 0) {
        cout << "2";
    } else if (y < 0 && x < 0) {
        cout << "3";
    } else {
        cout << "4";
    }
}