#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    
    long long g = 0;
    long long max_val = 0;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        g = gcd(g, x);
        max_val = max(max_val, x);
    }
    
    cout << max_val / g << "\n";
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