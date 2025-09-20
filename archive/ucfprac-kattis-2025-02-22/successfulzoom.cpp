#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int is_valid(vector<int> vi)
{
    return is_sorted(vi.begin(), vi.end()) && unique(vi.begin(), vi.end()) == vi.end();
}

int main()
{
    int n;
    cin >> n;

    vector<int> vi;

    while (n--)
    {
        int c;
        cin >> c;
        vi.push_back(c);
    }

    for (int i = 1; i <= vi.size() / 2; i++)
    {
        vector<int> temp;
        for (int j = i - 1; j < vi.size(); j += i)
        {
            temp.push_back(vi[j]);
        }

        if (is_valid(temp))
        {
            cout << i << endl;
            return 0;
        }
    }

    cout << "ABORT!" << endl;
}
