#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

bool is_palindrome(vector<int> num)
{
    for (int i = 0; i < num.size() / 2; i++)
    {
        if (num[i] != num[num.size() - 1 - i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    while (true)
    {
        string line;
        cin >> line;
        if (line == "0")
        {
            break;
        }

        vector<int> num;
        for (int i = 0; i < line.size(); i++)
        {
            num.push_back(line[i] - '0');
        }

        int cur = num.size() - 1;
        int ans = 0;

        while (!is_palindrome(num))
        {
            while (num[cur] == 9)
            {
                for (int i = cur; i < num.size(); i++)
                {
                    num[i] = 0;
                }
                cur--;
            }
            num[cur] += 1;
            cur = num.size() - 1;
            ans++;
        }

        cout << ans << endl;
    }
    return 0;
}