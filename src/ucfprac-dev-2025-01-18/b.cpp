#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ld long double

void solve()
{
    int n;
    cin >> n;
    deque<ll> q;

    while (n--)
    {
        ll a;
        cin >> a;
        q.push_back(a);
    }

    ll elsie = 0;
    ll bessie = 0;
    while (q.size() > 2)
    {
        ll mid = q.size() / 2 - 1;

        ll sum = q[mid] + q[mid + 1];

        ll lsum = accumulate(q.begin(), q.begin() + mid, 0LL);
        ll rsum = accumulate(q.begin() + mid + 2, q.end(), 0LL);

        q.erase(q.begin() + mid + 1);
        q[mid] = sum;

        if (lsum > rsum)
        {
            elsie += q.front();
            q.pop_front();
        }
        else
        {
            elsie += q.back();
            q.pop_back();
        }
    }

    while (q.size())
    {
        bessie += q.front();
        q.pop_front();
    }

    cout << bessie << " " << elsie << endl;
}

int main()
{
    int T = 1;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}
