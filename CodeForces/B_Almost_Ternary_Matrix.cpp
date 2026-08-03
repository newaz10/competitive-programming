#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            bool row_cond = (i % 4 == 0 || i % 4 == 3);
            bool col_cond = (j % 4 == 0 || j % 4 == 3);
            
            if (row_cond == col_cond) {
                cout << 1 << (j == m - 1 ? "" : " ");
            } else {
                cout << 0 << (j == m - 1 ? "" : " ");
            }
        }
        cout << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}