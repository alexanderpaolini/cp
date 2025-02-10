#include <bits/stdc++.h>
using namespace std;
int main() {
    int X, Y;
    cin >> X >> Y;
    if (Y == 1 && X == 0) {
        cout << "ALL GOOD";
    } else if (Y == 1) {
        cout << "IMPOSSIBLE";
    } else {
        std::cout.precision(9);
        cout << X / (1.0 - Y);
    }
}