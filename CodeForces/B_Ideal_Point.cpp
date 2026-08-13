#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    
    bool has_left_bound = false;  
    bool has_right_bound = false; 
    
    for (int i = 0; i < n; i++) {
        int l, r;
        cin >> l >> r;
        
        if (l == k) {
            has_left_bound = true;
        }
        if (r == k) {
            has_right_bound = true;
        }
    }
    
    if (has_left_bound && has_right_bound) {
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