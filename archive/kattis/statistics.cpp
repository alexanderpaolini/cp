#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    int i = 1;
    while (cin >> n) {
        vector<int> v;
        while (n--) {
            int a;
            cin >> a;
            v.push_back(a);
        }
        int max_val = *std::max_element(v.begin(), v.end());
        int min_val = *std::min_element(v.begin(), v.end());
        int range = max_val - min_val;
        cout << "Case " << i++ << ": " << min_val << " " << max_val << " " << range << endl;
    }
}
