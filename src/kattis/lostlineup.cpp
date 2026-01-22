#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    int l[n];
    l[0] = 1;
    for (int i = 2; i < n + 1; i++)
    {
        int d;
        cin >> d;
        l[d + 1] = i;
    }
    for (int i = 0; i < n; i++)
    {
        cout << l[i] << " ";
    }
}
