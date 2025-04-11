#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    string ma, fa;
    cin >> ma >> fa;
    
    int same = 0;
    for (int i = 0; i < fa.size(); i++) {
        if (fa[i] == ma[i]) same++;
    }
    int diff = fa.size() - same;

    int same_right = min(same, n);
    int same_wrong = min(fa.size() - same, fa.size() - n);

    cout << same_right + same_wrong;
}
