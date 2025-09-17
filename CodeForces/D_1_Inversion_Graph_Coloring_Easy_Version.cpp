#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MOD = 1000000007LL;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int T;
    if (!(cin >> T)) return 0;
    while (T--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) cin >> a[i];

        // Transform to u = -a to convert "strictly decreasing" -> "strictly increasing"
        vector<int> u(n);
        for (int i = 0; i < n; ++i) u[i] = -a[i];

        // Coordinate compress u
        vector<int> vals = u;
        sort(vals.begin(), vals.end());
        vals.erase(unique(vals.begin(), vals.end()), vals.end());
        int R = (int)vals.size();
        auto getRank = [&](int x) {
            return int(lower_bound(vals.begin(), vals.end(), x) - vals.begin()) + 1; // 1..R
        };
        vector<int> r(n);
        for (int i = 0; i < n; ++i) r[i] = getRank(u[i]);
        int INF = R + 1; // sentinel for "no tail"

        // dp[t1][t2] with 1 <= t1 <= t2 <= INF
        // We store only half matrix; but for simplicity we use full (INF+1)x(INF+1)
        vector<vector<ll>> dp(INF+2, vector<ll>(INF+2, 0));
        dp[INF][INF] = 1; // empty subsequence

        for (int idx = 0; idx < n; ++idx) {
            int x = r[idx];
            vector<vector<ll>> ndp(INF+2, vector<ll>(INF+2, 0));
            for (int t1 = 1; t1 <= INF; ++t1) {
                for (int t2 = t1; t2 <= INF; ++t2) {
                    ll cur = dp[t1][t2];
                    if (!cur) continue;
                    // skip current element
                    ndp[t1][t2] += cur;
                    if (ndp[t1][t2] >= MOD) ndp[t1][t2] -= MOD;

                    // take current element -> find position using lower_bound semantics
                    // if x <= t1 -> replace t1 by x
                    if (x <= t1) {
                        ndp[x][t2] += cur;
                        if (ndp[x][t2] >= MOD) ndp[x][t2] -= MOD;
                    }
                    // else if x <= t2 -> replace t2 by x
                    else if (x <= t2) {
                        ndp[t1][x] += cur;
                        if (ndp[t1][x] >= MOD) ndp[t1][x] -= MOD;
                    }
                    // else x > t2 -> would create length 3 LIS -> disallow
                }
            }
            dp.swap(ndp);
        }

        // sum all states -> number of subsequences with LIS(u) <= 2
        ll ans = 0;
        for (int t1 = 1; t1 <= INF; ++t1) {
            for (int t2 = t1; t2 <= INF; ++t2) {
                ans += dp[t1][t2];
                if (ans >= MOD) ans -= MOD;
            }
        }
        cout << ans % MOD << "\n";
    }
    return 0;
}
