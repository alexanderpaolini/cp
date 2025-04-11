#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    while (true)
    {
        cin >> n;

        if (n == 0)
        {
            break;
        }

        vector<int> v;
        while (n--)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }

        int res = v[0];
        int max_e = v[0];
        for (int i = 1; i < v.size(); i++)
        {
            max_e = max(max_e + v[i], v[i]);
            res = max(res, max_e);
        }
        cout << res << endl;
    }
}
