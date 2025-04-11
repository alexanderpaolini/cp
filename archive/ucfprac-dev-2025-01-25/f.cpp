#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        bool seen[50] = {false};

        while (n--)
        {
            for (int i = 0; i < 6; i++)
            {
                int c;
                cin >> c;
                seen[c] = true;
            }
        }

        bool not_seen = false;
        for (int i = 1; i <= 49; i++)
        {
            if (!seen[i])
            {
                not_seen = true;
                break;
            }
        }

        if (not_seen)
        {
            cout << "No" << endl;
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
}
