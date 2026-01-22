#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

bool check(vector<vector<int> > vii, int c, int r) {
    if (
        (c > 0 && vii[c-1][r] > vii[c][r]) &&
        (c < vii.size() - 1 && vii[c+1][r] > vii[c][r]) &&
        (r > 0 && vii[c][r-1] > vii[c][r]) &&
        (r < vii[c].size() - 1 && vii[c][r+1] > vii[c][r])
    ) return true;
    else return false;
}

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int> > vvi;

    for (int i = 0; i < r; i++)
    {
        vector<int> vi;

        for (int j = 0; j < c; j++)
        {
            int cur;
            cin >> cur;
            vi.push_back(cur);
        }

        vvi.push_back(vi);
    }

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            if (check(vvi, i, j)) {
                cout << 1 << " ";
            } else {
                cout << 0 << " ";
            }
        }
        cout << endl;
    }
}
