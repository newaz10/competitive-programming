#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    
    string s;
    cin >> s;
    
    while (q--) {
        int l, r;
        cin >> l >> r;

        l--; r--;
        
        bool possible = false;
        
        for (int i = 0; i < l; i++) {
            if (s[i] == s[l]) {
                possible = true;
                break;
            }
        }
        
        for (int i = r + 1; i < n; i++) {
            if (s[i] == s[r]) {
                possible = true;
                break;
            }
        }
        
        if (possible) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
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