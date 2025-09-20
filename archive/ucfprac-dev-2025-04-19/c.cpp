#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;

    vector<int> vi;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vi.push_back(x);
    }

    int count = 0;
    set<int> dates;
    for (int i = 0; i < n; i++)
    {
        int curDate = vi[i];

        int sum = 0;
        for (int x : dates)
        {
            sum += curDate - x;
        }

        if (sum >= 20)
        {
            count++;
            dates.clear();
        }

        dates.insert(vi[i]);
    }

    cout << count + 1;
}
