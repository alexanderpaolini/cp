#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        cout << a;
        if (a % 2 == 0) {
            cout << " is even\n";
        } else {
            cout << " is odd\n";
        }
    }
}