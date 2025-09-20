#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;

    string prev;
    cin >> prev;
    n--;

    bool inc = true;
    bool dec = true;
    while (n--)
    {
        string s;
        cin >> s;

        if (prev.compare(s) < 0)
        {
            dec = false;
        }
        else if (prev.compare(s) > 0)
        {
            inc = false;
        }

        prev = s;
    }

    if (inc)
    {
        cout << "INCREASING" << endl;
    }
    else if (dec)
    {
        cout << "DECREASING" << endl;
    }
    else
    {
        cout << "NEITHER" << endl;
    }
}