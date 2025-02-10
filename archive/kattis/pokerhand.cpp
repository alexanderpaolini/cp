#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    string k = "A23456789TJQK";
    int cnt[13] = {0};
    for (int i = 0; i < 5; i++)
    {
        string s;
        cin >> s;
        int d = k.find(s[0]);
        cnt[d]++;
    }
    int x = cnt[0];
    for (int i = 1; i < 13; i++)
    {
        x = max(x, cnt[i]);
    }
    cout << x << endl;
}
