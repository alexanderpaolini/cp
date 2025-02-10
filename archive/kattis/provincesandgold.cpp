#include <bits/stdc++.h>
using namespace std;
int main () {
    int g,s,c;
    cin>>g>>s>>c;
    int bp = g * 3 + s * 2 + c * 1;
    if (bp >= 2) {
        if (bp >= 5) {
            if (bp >= 8) {
                cout << "Province";
            } else cout << "Duchy";
        } else cout << "Estate";
        cout << " or ";
    }
    if (bp >= 6) cout << "Gold";
    else if (bp >= 3) cout << "Silver";
    else cout << "Copper";
}