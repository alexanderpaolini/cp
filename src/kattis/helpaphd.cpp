#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    while (n--) {
        string input;
        cin >> input;
        if (input == "P=NP") {
            cout << "skipped" << endl;
        } else {
            stringstream ss(input);
            int a, b;
            char c;
            ss >> a;
            ss >> c;
            ss >> b;
            cout << a + b << endl;
        }
    }
}