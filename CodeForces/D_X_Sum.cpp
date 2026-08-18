#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    vector<vector<int>> a(n, vector<int>(m));
    vector<int> diag1(n + m, 0); 
    vector<int> diag2(n + m, 0); 

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
            diag1[i - j + m] += a[i][j];
            diag2[i + j] += a[i][j];
        }
    }

    int max_sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int current_sum = diag1[i - j + m] + diag2[i + j] - a[i][j];
            max_sum = max(max_sum, current_sum);
        }
    }

    cout << max_sum << "\n";
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