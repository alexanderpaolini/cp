#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void solve()
{
    vector<string> numbers;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        numbers.push_back(s);
    }
    sort(numbers.begin(), numbers.end());
    bool flag = false;
    for (int i = 1; i < n; i++)
    {
        string prev = numbers[i - 1];
        string sub = numbers[i].substr(0, prev.size());
        if (sub == prev)
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
}
