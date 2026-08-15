#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int prefix_len = 0;
    while (prefix_len < n && a[prefix_len] == a[0]) {
        prefix_len++;
    }

    if (prefix_len == n) {
        cout << 0 << "\n";
        return;
    }

    int suffix_len = 0;
    while (suffix_len < n && a[n - 1 - suffix_len] == a[n - 1]) {
        suffix_len++;
    }

    if (a[0] == a[n - 1]) {
        cout << n - prefix_len - suffix_len << "\n";
    } else {
        cout << n - max(prefix_len, suffix_len) << "\n";
    }
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