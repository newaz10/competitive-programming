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
    long long a, b, k;
    cin >> a >> b >> k;
    
    long long g = gcd(a, b);
    
    if (a / g <= k && b / g <= k) {
        cout << 1 << "\n";
    } else {
        cout << 2 << "\n";
    }
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