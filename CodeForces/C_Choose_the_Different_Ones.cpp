#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<bool> in_a(k + 1, false);
    vector<bool> in_b(k + 1, false);

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (x <= k) {
            in_a[x] = true;
        }
    }

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;
        if (x <= k) {
            in_b[x] = true;
        }
    }

    int count_a = 0;
    int count_b = 0;
    bool possible = true;

    for (int i = 1; i <= k; i++) {
        if (!in_a[i] && !in_b[i]) {
            possible = false;
            break;
        }
        if (in_a[i]) count_a++;
        if (in_b[i]) count_b++;
    }

    if (possible && count_a >= k / 2 && count_b >= k / 2) {
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