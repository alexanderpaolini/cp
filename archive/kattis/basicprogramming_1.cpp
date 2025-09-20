#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n, t;
    cin >> n >> t;
    vector<ll> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    if (t == 1)
    {
        cout << 7 << endl;
    }
    else if (t == 2)
    {
        if (v[0] == v[1])
        {
            cout << "Equal" << endl;
        }
        else if (v[0] > v[1])
        {
            cout << "Bigger" << endl;
        }
        else
        {
            cout << "Smaller" << endl;
        }
    }
    else if (t == 3)
    {
        vector<int> n;
        n.push_back(v[0]);
        n.push_back(v[1]);
        n.push_back(v[2]);
        sort(n.begin(), n.end());
        cout << n[1];
    }
    else if (t == 4)
    {
        unsigned long long a = 0;
        for (auto x : v)
        {
            a += x;
        }
        cout << a << endl;
    }
    else if (t == 5)
    {
        unsigned long long a = 0;
        for (auto x : v)
        {
            if (x % 2 == 0)
            {
                a += x;
            }
        }
        cout << a << endl;
    }
    else if (t == 6)
    {
        for (auto x : v)
        {
            cout << (char)('a' + (x % 26));
        }
        cout << endl;
    }
    else if (t == 7)
    {
        vector<bool> s(n, false);
        ll i = 0;
        while (true)
        {
            if (i >= n)
            {
                cout << "Out" << endl;
                break;
            }
            if (i == n - 1)
            {
                cout << "Done" << endl;
                break;
            }
            if (s[i])
            {
                cout << "Cyclic" << endl;
                break;
            }
            s[i] = true;
            i = v[i];
        }
    }
}
