#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    double s;
    while (n--) {
        double a, b;
        cin >> a >> b;
        s += a * b;
    }
    cout << s << endl;
}