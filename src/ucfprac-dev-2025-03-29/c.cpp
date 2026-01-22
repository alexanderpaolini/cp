/**
 * TLE. Does not pass
 */
#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

int greedy(const vector<int> &coins, int amount)
{
    int count = 0;
    for (int i = coins.size() - 1; i <= 0; --i)
    {
        while (amount >= coins[i])
        {
            amount -= coins[i];
            count++;
        }
    }
    return count;
}

int dp(const vector<int> &coins, int amount)
{
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0;

    for (int i = 1; i <= amount; ++i)
    {
        for (int coin : coins)
        {
            if (i - coin >= 0 && dp[i - coin] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return dp[amount];
}

bool is_canonical(const vector<int> &coins, int ma)
{
    for (int amount = 1; amount <= ma; ++amount)
    {
        int greedyResult = greedy(coins, amount);
        int dpResult = dp(coins, amount);
        if (greedyResult > dpResult)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    vector<int> x;
    while (n--)
    {
        int c;
        cin >> c;
        x.push_back(c);
    }

    int ma = x[x.size() - 1] + x[x.size() - 2];

    if (is_canonical(x, ma))
    {
        cout << "canonical" << endl;
    }
    else
    {
        cout << "non-canonical" << endl;
    }
}
