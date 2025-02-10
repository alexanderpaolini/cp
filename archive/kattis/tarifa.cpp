#include <bits/stdc++.h>
using namespace std;
int main() {
    int x;
    cin >> x;
    int n;
    cin >> n;
    int s = (n+1) * x;
    while (n--) {
        int p;
        cin >> p;
        s -= p;
    }
    cout << s << endl;
}