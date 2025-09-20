#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"

int main()
{
    int n, d;
    cin >> n >> d;
    vector<int> x(n);

    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
        sum += x[i];
    }

    ld cpe = d / sum;
    for (auto &y : x)
    {
        cout << y * cpe << endl;
    }
}
