#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> pref_min(n);
    pref_min[0] = a[0];
    for (int i = 1; i < n; i++) {
        pref_min[i] = min(pref_min[i - 1], a[i]);
    }

    vector<int> suff_max(n);
    suff_max[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suff_max[i] = max(suff_max[i + 1], a[i]);
    }

    string ans = "";
    for (int i = 0; i < n; i++) {
        if (a[i] == pref_min[i] || a[i] == suff_max[i]) {
            ans += '1';
        } else {
            ans += '0';
        }
    }

    cout << ans << "\n";
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