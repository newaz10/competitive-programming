#include <bits/stdc++.h>
using namespace std;

void solve() {
    string r;
    cin >> r;
    
    int n = r.length();
    int ans = 0;
    
    if (r[0] == 'u') {
        r[0] = 's';
        ans++;
    }

    if (r[n - 1] == 'u') {
        r[n - 1] = 's';
        ans++;
    }
    
    int current_u_block = 0;
    for (int i = 0; i < n; i++) {
        if (r[i] == 'u') {
            current_u_block++;
        } else {
            ans += current_u_block / 2;
            current_u_block = 0;
        }
    }
    ans += current_u_block / 2;
    
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