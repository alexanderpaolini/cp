#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n, k;
    cin >> n >> k;
    priority_queue<int, vector<int>, greater<int> > pq;
    for (int i = 0; i < k; i++) {
        int e;
        cin >> e;
        pq.push(e);
    }

    ll count = 0;
    int last = 0;
    for (int i = k; i < n; i++) {
        last += pq.top();
        count += last;
        pq.pop();
        int e;
        cin >> e;
        pq.push(e);
    }

    while (!pq.empty()) {
        last += pq.top();
        count += last;
        pq.pop();
    }

    cout << count << endl;
}
