#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    int max_sits = 0;
    for (int i = 1; i <= n; i++) {
        int p_i;
        cin >> p_i;
        
        if (p_i <= i) {
            max_sits++;
        }
    }
    cout << max_sits << "\n";
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