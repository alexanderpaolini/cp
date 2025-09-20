#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    int n;
    cin >> n;

    int last = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if (s == "mumble")
        {
            last++;
        }
        else
        {
            int x = stoi(s);
            if (x != last + 1)
            {
                cout << "something is fishy" << endl;
                exit(EXIT_SUCCESS);
            }

            last++;
        }
    }

    cout << "makes sense" << endl;
}
