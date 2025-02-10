#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    string s;
    cin >> s;
    bool flag = false;
    for (int i = 1; i < s.length(); i++)
    {
        if (s[i - 1] == 's' && s[i] == 's')
        {
            flag = true;
            break;
        }
    }
    if (flag)
    {
        cout << "hiss" << endl;
    }
    else
    {
        cout << "no hiss" << endl;
    }
}
