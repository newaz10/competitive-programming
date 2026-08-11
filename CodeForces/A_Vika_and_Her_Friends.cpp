#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;
    
    int x, y;
    cin >> x >> y;
    
    bool can_escape = true;
    for (int i = 0; i < k; i++) {
        int xi, yi;
        cin >> xi >> yi;
        
        if ((x + y) % 2 == (xi + yi) % 2) {
            can_escape = false;
        }
    }
    
    if (can_escape) {
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