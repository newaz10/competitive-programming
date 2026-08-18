#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    long long x, y;
    cin >> n >> m >> x >> y;

    vector<string> grid(n);
    for (int i = 0; i < n; i++) {
        cin >> grid[i];
    }

    long long total_cost = 0;

    if (2 * x <= y) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '.') {
                    total_cost += x;
                }
            }
        }
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '.') {
                    if (j + 1 < m && grid[i][j + 1] == '.') {
                        total_cost += y;
                        j++; 
                    } else {
                        total_cost += x;
                    }
                }
            }
        }
    }

    cout << total_cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}