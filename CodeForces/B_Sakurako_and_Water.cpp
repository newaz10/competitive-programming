#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<vector<int>> a(n, vector<int>(n));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> a[i][j];
            }
        }

        long long ans = 0;

        for (int d = -(n-1); d <= n-1; d++) {
            int min_val = 0;
            for (int i = 0; i < n; i++) {
                int j = i + d;
                if (j >= 0 && j < n) {
                    min_val = min(min_val, a[i][j]);
                }
            }
            
            if (min_val < 0) {
                ans += -min_val;
            }
        }

        cout << ans << '\n';
    }

    return 0;
}