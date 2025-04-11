#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void e(string s)
{
    vector<int> u;
    for (char c : s)
    {
        if (c == ' ')
            u.push_back(0);
        else
            u.push_back(1 + c - 'a');
    }

    for (int i = 1; i < u.size(); i++)
    {
        u[i] = u[i] + u[i - 1];
    }

    for (int i = 0; i < u.size(); i++)
    {
        u[i] = u[i] % 27;
    }

    for (int x : u)
    {
        if (x == 0)
            cout << " ";
        else
            cout << (char)('a' + x - 1);
    }
    cout << endl;
}

void d(string s)
{
    vector<int> u;
    for (char c : s)
    {
        if (c == ' ')
            u.push_back(0);
        else
            u.push_back(1 + c - 'a');
    }

    for (int i = u.size() - 1; i > 0; i--)
    {
        u[i] = (u[i] - u[i - 1] + 27) % 27;
    }

    for (int x : u)
    {
        if (x == 0)
            cout << " ";
        else
            cout << (char)('a' + x - 1);
    }
    cout << endl;
}

int main()
{
    int n{};
    cin >> n;

    while (n--)
    {
        char x{};
        cin >> x;
        string s;

        getc(stdin);
        getline(cin, s);
        if (x == 'e')
        {
            e(s);
        }
        else
        {
            d(s);
        }
    }
}
