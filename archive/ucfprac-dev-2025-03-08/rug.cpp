#include <bits/stdc++.h>

using ll = long long;
using ld = long double;
using namespace std;

#define endl "\n";

vector<vector<int> > prefix_sum(const vector<vector<int> > &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();

    vector<vector<int> > prefix(m, vector<int>(n, 0));

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            prefix[i][j] = matrix[i][j];

            if (i > 0)
                prefix[i][j] += prefix[i - 1][j];

            if (j > 0)
                prefix[i][j] += prefix[i][j - 1];

            if (i > 0 && j > 0)
                prefix[i][j] -= prefix[i - 1][j - 1];
        }
    }

    return prefix;
}

void print_matrix(const vector<vector<int> >& matrix) {
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int get_submatrix_sum(const vector<vector<int> >& prefix, int r1, int c1, int r2, int c2) {
    int sum = prefix[r2][c2];
    
    if (r1 > 0) sum -= prefix[r1 - 1][c2];
    if (c1 > 0) sum -= prefix[r2][c1 - 1];
    if (r1 > 0 && c1 > 0) sum += prefix[r1 - 1][c1 - 1];
    
    return sum;
}

int main()
{
    int n, s;
    cin >> n >> s;

    vector<vector<int> > vvi;

    for (int i = 0; i < n; i++)
    {
        vector<int> vi;
        for (int i = 0; i < n; i++)
        {
            char s;
            cin >> s;
            if (s == 'D')
                vi.push_back(1);
            else
                vi.push_back(0);
        }
        vvi.push_back(vi);
    }

    vvi = prefix_sum(vvi);

    map<int, int> sum_count;

    for (int i = 0; i <= n - s; i++) {
        for (int j = 0; j <= n - s; j++) {
            int r1 = i, c1 = j;
            int r2 = i + s - 1, c2 = j + s - 1;
            
            int submatrix_sum = get_submatrix_sum(vvi, r1, c1, r2, c2);
            
            sum_count[submatrix_sum]++;
        }
    }

    for (const auto& entry : sum_count) {
        cout << entry.first << " " << entry.second << endl;
    }

    return 0;
}
