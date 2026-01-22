#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    while (1)
    {
        string s;
        cin >> s;
        if (s == "END")
            break;
        int i = 1;
        while (s != to_string(s.length())) { 
            i++;
            s = to_string(s.length());
        }
        cout << i << endl;
    }
}