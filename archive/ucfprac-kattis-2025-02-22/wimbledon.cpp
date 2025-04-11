// WA
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;

    vector<int> p (n);
    vector<int> u (n);

    for (int i = 0; i < n; i++)
    {
        cin >> p[i] >> u[i];
    }

    
    ll tu = 0;
    for (int i = 0; i < n; i++)
    {
        tu += u[i];
    }

    ll tp = 0;
    for (int i = 0; i < n; i++)
    {
        tp += p[i];
    }

    ll temp = tp;
    ll p1 = 0;
    // for (int i = 0; i < n; i++) {
    //     p1 += temp;  // Add the sum of all elements in p
    //     temp -= p[i];  // Remove p[i] from totalSum for the next iteration
    // }
    for (int i = 0; i < n; i++) {
        p1 += p[i];
        for (int j = i + 1; j < n; j++) {
            p1 += p[j];
        }
    }
    

    ll p2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            p2 += tu - u[i] - u[j];
        }
    }

    cout << p1 * p2 << endl;
}
