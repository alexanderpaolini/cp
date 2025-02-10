#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

typedef struct
{
    int time;
    char letter;
    string status;
} in;

int main()
{
    string s;
    stack<in> cd;
    bool solves[26] = {false};
    while (1)
    {
        getline(cin, s);
        stringstream ss(s);
        if (s == "-1")
            break;
        in x;
        ss >> x.time >> x.letter >> x.status;
        cd.push(x);
    }

    int t = 0;
    int ns = 0;
    while (cd.size())
    {
        in cur = cd.top();
        cd.pop();
        if (cur.status == "right")
        {
            solves['A' - cur.letter] = true;
            t += cur.time;
            ns++;
        }
        else if (solves['A' - cur.letter] == true)
        {
            t += 20;
        }
    }
    cout << ns << " " << t << endl;
}
