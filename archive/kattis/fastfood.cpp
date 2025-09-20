#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

typedef struct
{
    vector<int> required;
    int value;
} prize;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;

        vector<prize> prizes(n);
        for (int i = 0; i < n; i++)
        {
            prize p;
            int k;
            cin >> k;
            p.required.resize(k);
            for (auto &j : p.required)
            {
                cin >> j;
                j--;
            }
            cin >> p.value;
            prizes[i] = p;
        }

        vector<int> counts(m, 0);
        for (auto &i : counts)
        {
            cin >> i;
        }

        ll total = 0;
        for (ll i = 0; i < n; i++)
        {
            int lo = counts[prizes[i].required[0]];
            for (auto j : prizes[i].required)
            {
                lo = min(lo, counts[j]);
            }

            total += lo * prizes[i].value;
        }

        cout << total << endl;
    }
}
