#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n, f;
    cin >> n >> f;
    string s;
    cin >> s;

    unordered_map<string, int> m;
    cout << s << endl;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != s[i] && s[i] == s[i + 1])
        {
            string a = s.substr(i, 3);
            cout << a << endl;
            if (m.find(a) == m.end())
            {
                m[a] = 1;
            }
            else
            {
                m[a]++;
            }
        }
    }
}
