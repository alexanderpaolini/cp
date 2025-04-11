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
    vector<int> vc;
    for (int i = 0; i < n; i++)
    {
        int e;
        cin >> e;
        vc.push_back(e);
    }
    vector<int> vx;
    for (int i = 1; i < n; i++)
    {
        if (vc[i - 1] == vc[i])
        {
            vx.push_back(0);
        }
        else if (vc[i - 1] > vc[i])
        {
            // -1
            if (vx.size() == 0 || (vx.size() > 0 && vx[vx.size() - 1] != -1))
            {
                vx.push_back(-1);
            }
        }
        else
        {
            // 1
            if (vx.size() == 0 || (vx.size() > 0 && vx[vx.size() - 1] != 1))
            {
                vx.push_back(1);
            }
        }
    }

    reverse(vx.begin(), vx.end());
    vx.push_back(-1 * vx[vx.size() - 1]);

    int cur = 0;
    int max_cur = 0;
    for (int i = 0; i < vx.size(); i++) {
        if (vx[i] == 0) {
            cur = 0;
        } else {
            cur++;
        }
        max_cur = max(cur, max_cur);
    }
    cout << max_cur << endl;
}
