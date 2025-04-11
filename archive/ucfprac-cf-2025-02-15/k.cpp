#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    vector<int> p1;
    vector<int> p2;
    for (int i = 0; i < 6; i++)
    {
        int e;
        cin >> e;
        p1.push_back(e);
    }
    for (int i = 0; i < 6; i++)
    {
        int e;
        cin >> e;
        p2.push_back(e);
    }
    sort(p1.begin(), p1.end());
    sort(p2.begin(), p2.end());
    double rolls = 0;
    double wins = 0;
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (p1[i] != p2[j])
                rolls++;

            if (p1[i] > p2[j])
                wins++;
        }
    }
    printf("%.5lf\n", wins / rolls);
}
