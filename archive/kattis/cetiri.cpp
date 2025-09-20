#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    vector<int> v;
    int a, b, c;
    cin >> a >> b >> c;
    v.push_back(a);
    v.push_back(b);
    v.push_back(c);
    sort(v.begin(), v.end());

    if (v[1] - v[0] == 2 * (v[2] - v[1]))
    {
        cout << v[0] + (v[2] - v[1]) << endl;
    }
    else if (v[2] - v[1] == 2 * (v[1] - v[0]))
    {
        cout << v[1] + (v[1] - v[0]);
    }
    else
    {
        cout << v[2] + (v[2] - v[1]);
    }
}
