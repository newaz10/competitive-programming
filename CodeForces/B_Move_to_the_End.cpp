#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<long long> pref_max(n);
    pref_max[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref_max[i] = max(pref_max[i - 1], a[i]);
    }

    vector<long long> suf_sum(n + 1, 0);
    for (int i = n - 1; i >= 0; i--) {
        suf_sum[i] = suf_sum[i + 1] + a[i];
    }

    for (int k = 1; k <= n; k++) {
        if (k == n) {
            cout << suf_sum[0] << (k == n ? "" : " ");
        } else {
            int prefix_len = n - k;
            long long cur_suf_sum = suf_sum[n - k];
            long long max_pref_val = pref_max[prefix_len - 1];
            long long displaced_val = a[prefix_len];

            long long ans = cur_suf_sum + max(0LL, max_pref_val - displaced_val);
            cout << ans << (k == n ? "" : " ");
        }
    }
    cout << "\n";
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