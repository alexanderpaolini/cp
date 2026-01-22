#include <bits/stdc++.h>
using namespace std;
int main () {
    double x;
    cin >> x;
    double res = x * 1000.0 * 5280.0 / 4854.0;
    cout << (int) (res + .5);
}