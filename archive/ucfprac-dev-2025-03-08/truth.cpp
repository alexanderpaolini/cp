#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    vector<int> vi (n + 1, 0);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;

        for (int i = a; i <= b; i++) {
            vi[i] += 1;
        }
    }

    // for (auto i : vi) {
    //     cout << i << " ";
    // }
    // cout << endl;

    int amt = -1;
    for (int i = 1; i <= n; i++) {
        // cout << i << " - " << vi[i] << endl;
        if (vi[i] == i) {
            amt = i;
        }
    }

    cout << amt << " ";
}
