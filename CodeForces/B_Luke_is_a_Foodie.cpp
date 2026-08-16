#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    long long x;
    cin >> n >> x;

    vector<long long> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int changes = 0;
    long long cur_min = a[0];
    long long cur_max = a[0];

    for (int i = 0; i < n; i++) {
        cur_min = min(cur_min, a[i]);
        cur_max = max(cur_max, a[i]);

        if (cur_max - cur_min > 2 * x) {
            changes++;
            cur_min = a[i];
            cur_max = a[i];
        }
    }

    cout << changes << "\n";
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