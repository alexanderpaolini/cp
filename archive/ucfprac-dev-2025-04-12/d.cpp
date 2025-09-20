#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int next(int &a, int &b)
{
    if (a > b && a % 2 == 0)
    {
        a /= 2;
        return 1;
    }

    a++;
    return 1;
}

int main()
{
    int a, b;
    cin >> a >> b;
    int count = 0;

    while (a != b)
    {
        count += next(a, b);
    }

    cout << count << endl;
}
