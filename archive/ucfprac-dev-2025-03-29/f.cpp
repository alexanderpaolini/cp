#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

bool test(vector<int> rules, int x, int y)
{
    int direction = 0;
    int ex = 0, ey = 0;
    for (int x : rules)
    {
        if (x == 0)
        {
            direction = (direction + 1) % 4;
        }
        else if (x == 1)
        {
            direction = (direction + 3) % 4;
        }
        else if (x == 2)
        {
            switch (direction)
            {
            case 0:
                ey++;
                break;
            case 1:
                ex++;
                break;
            case 2:
                ey--;
                break;
            case 3:
                ex--;
                break;
            }
        }
    }

    if (ex == x && ey == y)
        return true;

    return false;
}

int main()
{
    int x, y;
    cin >> x >> y;

    int n;
    cin >> n;

    vector<int> rules;

    while (n--)
    {
        string inst;
        cin >> inst;
        if (inst == "Right")
        {
            rules.push_back(0);
        }
        else if (inst == "Left")
        {
            rules.push_back(1);
        }
        else if (inst == "Forward")
        {
            rules.push_back(2);
        }
    }

    for (int i = 0; i < rules.size(); i++)
    {
        for (int j = 1; j < 4; j++)
        {
            rules[i] = (rules[i] + 1) % 3;
            if (test(rules, x, y))
            {
                cout << i + 1 << " ";
                if (rules[i] == 0)
                {
                    cout << "Right" << endl;
                }
                else if (rules[i] == 1)
                {
                    cout << "Left" << endl;
                }
                else if (rules[i] == 2)
                {
                    cout << "Forward" << endl;
                }
                return 0;
            }
        }
    }

    exit(1);
}
