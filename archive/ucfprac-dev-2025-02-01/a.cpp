#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    
    int l = 0;
    int r = n - 1;
    while (l < r)
    {
        // check validity left
        int c = 0;
        bool flag = false;
        for (int i = l; i < r; i++)
        {
            if (s[i] == 'o')
                c++;
            else
                c--;

            if (c < 0)
            {
                while (s[i] == 'a' && i < r)
                {
                    i++;
                }
                l = i;
                flag = true;
                break;
            }
        }
        if (flag)
            continue;

        // check validity right
        c = 0;
        flag = false;
        for (int i = r; i >= l; i--)
        {
            if (s[i] == 'o')
                c++;
            else
                c--;

            // if a percentage > .5
            if (c < 0)
            {
                while (s[i] == 'a' && i >= l)
                {
                    i--;
                }
                r = i;
                flag = true;
                break;
            }
        }
        if (flag)
            continue;

        cout << r - l + 1 << endl;
        return 0;
    }

    if (l == r && s[l] == 'o')
    {
        cout << 1 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
}
