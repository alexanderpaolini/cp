#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int l, x;
    cin >> l >> x;
    int cnt = 0;
    int cur = 0;
    while (x--)
    {
        string s;
        int n;
        cin >> s >> n;
        if (s == "enter")
        {
            if (cur + n > l)
                cnt++;
            else
                cur += n;
        }
        else
        {
            cur -= n;
        }
    }
    cout << cnt << endl;
}
