#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

vector<int> primes_less_than(int n)
{
    vector<bool> is_prime(n, true);
    vector<int> primes;
    if (n <= 2)
        return primes;
    is_prime[0] = is_prime[1] = false;
    for (int i = 2; i < n; ++i)
    {
        if (is_prime[i])
        {
            primes.push_back(i);
            for (int j = i * 2; j < n; j += i)
            {
                is_prime[j] = false;
            }
        }
    }
    return primes;
}

int main()
{
    int n, k;
    cin >> n >> k;

    int x = 0;
    ll z = n + 1;
    while (x < k)
    {
        int flag = 0;
        for (int i = 1; i < n; i++)
        {
            if ((z % i) != 0)
            {
                flag = 1;
                break;
            }
        }
        if (!flag)
        {
            cout << z << endl;
            x++;
        }
        z++;
    }
    cout << z << endl;
}
