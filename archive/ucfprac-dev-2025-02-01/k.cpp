#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    while (true)
    {
        int n, m, k;
        cin >> n >> m >> k;
        if (n == 0 && m == 0 && k == 0)
        {
            break;
        }

        queue<int> pattern;
        for (int i = 0; i < k; i++)
        {
            int n;
            cin >> n;
            pattern.push(n);
        }

        // vector<int> out;
        // out.push_back(n);
        ll sum = n;
        int last = n;
        for (int i = 0; i < m - 1; i++)
        {
            int x = pattern.front();
            pattern.pop();
            pattern.push(x);
            int val = last + x;
            last = val;
            sum += val;
        }

        cout << sum << endl;
    }
}
