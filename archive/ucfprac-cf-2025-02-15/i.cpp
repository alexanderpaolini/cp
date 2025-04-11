// WA
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;

    vector<int> vx;
    while (n--) {
        int e;
        cin >> e;
        vx.push_back(e);
    }
    sort(vx.begin(), vx.end());

    int l = 0;
    int r = vx.size() - 1;
    ll count = 0;
    while (l < r) {
        if (vx[l] == vx[r]) {
            count += vx[l];
            l++;
            r--;
        } else if(vx[l] < vx[r]) {
            count += vx[l];
            vx[r] -= vx[l];
            l++;
        } else {
            count += vx[r];
            vx[r] -= vx[l];
            r--;
        }
    }
    cout << count << endl;
}
