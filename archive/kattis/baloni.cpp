#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    std::cin >> n;
    int x[n];

    int hist[1000001] = {0};
    for (int i = 0; i < n; i++)
    {
        int z;
        cin >> z;
        if (hist[z] > 0)
        {
            hist[z]--;
        }
        hist[z - 1]++;
    }

    int count = 0;
    for (int i = 0; i < 1000000; i++)
    {
        count += hist[i];
    }
    cout << count << endl;
}