#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        sum += x;
    }
    
    long long rem = sum % n;
    long long ans = rem * (n - rem);
    
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