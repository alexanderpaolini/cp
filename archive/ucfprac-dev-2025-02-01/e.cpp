#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int main()
{
    while (true)
    {
        int r, c;
        cin >> r >> c;
        if (r == 0 && c == 0)
        {
            break;
        }

        vector<vector<char>> vc;
        for (int i = 0; i < r; i++)
        {
            vector<char> vci(c);
            for (int j = 0; j < c; j++)
            {
                cin >> vci[j];
            }
            vc.push_back(vci);
        }

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (vc[i][j] == '*')
                {
                    cout << '*';
                    continue;
                }
                // cout << "HERE" << endl;

                int count = 0;

                // top
                if (i > 0)
                {
                    // top left
                    if (j > 0)
                    {
                        if (vc[i - 1][j - 1] == '*')
                        {
                            count++;
                        }
                    }

                    // top
                    if (vc[i - 1][j] == '*')
                    {
                        count++;
                    }

                    // top right
                    if (j < c - 1)
                    {
                        if (vc[i - 1][j + 1] == '*')
                        {
                            count++;
                        }
                    }
                }

                // left
                if (j > 0)
                {
                    if (vc[i][j - 1] == '*')
                    {
                        count++;
                    }
                }
                // right
                if (j < c - 1)
                {
                    if (vc[i][j + 1] == '*')
                    {
                        count++;
                    }
                }

                // bottom
                if (i < r - 1)
                {
                    // bottom left
                    if (j > 0)
                    {
                        if (vc[i + 1][j - 1] == '*')
                        {
                            count++;
                        }
                    }
                    // bottom
                    if (vc[i + 1][j] == '*')
                    {
                        count++;
                    }

                    // bottom right
                    if (j < c - 1)
                    {
                        if (vc[i + 1][j + 1] == '*')
                        {
                            count++;
                        }
                    }
                }
                cout << count;
            }
            cout << endl;
        }
    }
}
