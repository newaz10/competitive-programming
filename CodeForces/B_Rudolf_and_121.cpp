#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n - 2; i++) {
        if (a[i] == 0) continue;

        int k = a[i];

        if (a[i + 1] < 2 * k || a[i + 2] < k) {
            cout << "NO\n";
            return;
        }

        a[i] = 0;
        a[i + 1] -= 2 * k;
        a[i + 2] -= k;
    }

    if (a[n - 2] == 0 && a[n - 1] == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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