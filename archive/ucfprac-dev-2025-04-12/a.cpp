#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int is_valid(unordered_map<int, int> &map, int val)
{
    ll s1 = 0, s2 = 0;
    for (auto &pair : map)
    {
        if (pair.first < val)
        {
            s1 += pair.first * pair.second;
        }
        else if (pair.first > val)
        {
            s2 += pair.first * pair.second;
        }
        else
        {
            s1 += pair.first * pair.second / 2;
            s2 += pair.first * pair.second / 2;
        }
    }

    if (s1 == s2)
        return 0;
    else if (s1 < s2)
        return 1;
    return -1;
}

int binary_search(int left, int right, unordered_map<int, int> &map)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        int check = is_valid(map, mid);

        switch (check)
        {
        case 0:
            return mid;
        case 1:
            left = mid + 1;
            break;
        case -1:
            right = mid - 1;
            break;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin >> n;

    unordered_map<int, int> map;

    int ma = INT_MIN;
    while (n--)
    {
        int x;
        cin >> x;
        map[x] = map[x] ? map[x] + 1 : 1;
        ma = max(ma, x);
    }

    int val = binary_search(0, ma, map);

    while (is_valid(map, val) == 0)
        val--;

    cout << val + 1 << endl;
}
