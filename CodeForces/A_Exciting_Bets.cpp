#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    if (a == b) {
        cout << "0 0\n";
        return;
    }
    
    long long max_gcd = abs(a - b);
    
    long long rem = a % max_gcd;
    long long min_moves = min(rem, max_gcd - rem);
    
    cout << max_gcd << " " << min_moves << "\n";
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