#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

void invalid()
{
    cout << "invalid" << endl;
    exit(0);
}

void valid()
{
    cout << "valid" << endl;
    exit(0);
}

void check_diag(int x, int y, vector<string> board)
{
    // bottom right
    int i = x + 1, j = y + 1;
    while (i < 8 && j < 8)
    {
        if (board[i].at(j) == '*')
        {
            invalid();
        }
        i++;
        j++;
    }
    // bottom left
    i = x + 1, j = y - 1;
    while (i < 8 && j >= 0)
    {
        if (board[i].at(j) == '*')
        {
            invalid();
        }
        i++;
        j--;
    }
}

int main()
{
    vector<string> board(8);
    for (int i = 0; i < 8; i++)
    {
        getline(cin, board[i]);
    }

    bool cols[8] = {false};
    bool rows[8] = {false};
    int nq = 0;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (board[i].at(j) == '*')
            {
                if (rows[i] || cols[j])
                {
                    invalid();
                }

                nq++;
                rows[i] = true;
                cols[j] = true;

                check_diag(i, j, board);
            }
        }
    }

    if (nq != 8)
    {
        invalid();
    }

    valid();
}
