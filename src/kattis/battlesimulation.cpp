#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (i < s.length())
        {
            if (
                (s[i] == 'R' && s[i + 1] == 'B' && s[i + 2] == 'L') ||
                (s[i] == 'R' && s[i + 1] == 'L' && s[i + 2] == 'B') ||
                (s[i] == 'B' && s[i + 1] == 'R' && s[i + 2] == 'L') ||
                (s[i] == 'B' && s[i + 1] == 'L' && s[i + 2] == 'R') ||
                (s[i] == 'L' && s[i + 1] == 'R' && s[i + 2] == 'B') ||
                (s[i] == 'L' && s[i + 1] == 'B' && s[i + 2] == 'R'))
            {
                i += 2;
                cout << 'C';
                continue;
            }
        }
        if (s[i] == 'R')
        {
            cout << 'S';
        }
        else if (s[i] == 'B')
        {
            cout << 'K';
        }
        else
        {
            cout << 'H';
        }
    }
    cout << endl;
}
