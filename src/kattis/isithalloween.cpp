#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    int a;
    cin >> s >> a;
    if ((s == "OCT" && a == 31) || (s == "DEC" && a == 25)) {
        cout << "yup";
    } else cout << "nope";
}