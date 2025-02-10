#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int k;
        cin >> k;
        cin.ignore();

        string s;
        getline(cin, s);

        bool hps = false;
        bool hp = false;

        while (k--)
        {
            string a;
            getline(cin, a);
            if (a == "pea soup")
            {
                hps = true;
            }
            if (a == "pancakes")
            {
                hp = true;
            }
        }

        if (hps && hp)
        {
            cout << s << endl;
            return 0;
        }
    }
    cout << "Anywhere is fine I guess" << endl;
}
