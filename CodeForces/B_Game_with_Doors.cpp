#include <bits/stdc++.h>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    int L, R;
    cin >> L >> R;

    int inter_l = max(l, L);
    int inter_r = min(r, R);

    if (inter_l > inter_r) {
        cout << 1 << "\n";
        return;
    }

    int ans = inter_r - inter_l;

    if (l != L) {
        ans++;
    }
    if (r != R) {
        ans++;
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