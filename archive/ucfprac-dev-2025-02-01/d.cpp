#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n"

int find_candidate(int *arr, int len)
{
    int res = 0;
    int count = 1;

    for (int i = 1; i < len; i++)
    {
        if (arr[i] == arr[res])
        {
            count++;
        }
        else
        {
            count--;
        }

        if (count == 0)
        {
            res = i;
            count = 1;
        }
    }

    return arr[res];
}

bool is_majority(int *arr, int candidate, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (arr[i] == candidate)
        {
            count++;
        }
    }
    return count > len / 2;
}

int main()
{
    int n, m;
    cin >> n >> m;

    int p[n];
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        int candidate = find_candidate(p + a - 1, b - a + 1);

        if (is_majority(p + a - 1, candidate, b - a + 1))
        {
            cout << candidate << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }

    return 0;
}
