#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, m;
    cin >> a >> b >> m;
    
    long long ans = (m / a) + (m / b) + 2;
    
    cout << ans << "\n";
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