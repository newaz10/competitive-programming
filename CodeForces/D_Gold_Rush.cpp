#include <bits/stdc++.h>
using namespace std;

bool can_make(int n, int m) {
    if (n == m) {
        return true;
    }
    if (n < m || n % 3 != 0) {
        return false;
    }
    
    return can_make(n / 3, m) || can_make(2 * (n / 3), m);
}

void solve() {
    int n, m;
    cin >> n >> m;

    if (can_make(n, m)) {
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