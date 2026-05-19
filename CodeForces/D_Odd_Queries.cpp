#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    vector<long long> pref(n + 1, 0);
    
    for (int i = 1; i <= n; i++) {
        long long x;
        cin >> x;
        pref[i] = pref[i - 1] + x;
    }

    while (q--) {
        long long l, r, k;
        cin >> l >> r >> k;

        long long total_sum = pref[n];

        long long range_sum = pref[r] - pref[l - 1];

        long long new_range_sum = (r - l + 1LL) * k;

        long long new_total = total_sum - range_sum + new_range_sum;

        if (new_total % 2 != 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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