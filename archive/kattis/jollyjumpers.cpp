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
        vector<int> d(n, 0);
        for (int i = 0; i < n; i++)
        {
            cin >> d[i];
        }

        vector<bool> expected(3001, false);
        for (int i = 0; i < n - 1; i++)
        {
            expected[abs(d[i] - d[i + 1])] = true;
        }

        int flag = false;
        for (int i = 1; i < n; i++)
        {
            if (!expected[i])
            {
                flag = true;
                break;
            }
        }

        if (flag)
        {
            cout << "Not jolly" << endl;
        }
        else
        {
            cout << "Jolly" << endl;
        }
    }
}
