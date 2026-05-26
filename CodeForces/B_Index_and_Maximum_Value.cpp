#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    long long current_max = -1;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        if (x > current_max) {
            current_max = x;
        }
    }
    
    for (int i = 0; i < m; i++) {
        char op;
        long long l, r;
        cin >> op >> l >> r;
        
        if (current_max >= l && current_max <= r) {
            if (op == '+') {
                current_max++;
            } else {
                current_max--;
            }
        }
        
        cout << current_max << (i == m - 1 ? "" : " ");
    }
    cout << "\n";
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