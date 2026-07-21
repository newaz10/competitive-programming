#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    
    long long x = a * d;
    long long y = b * c;
    
    if (x == y) {
        cout << 0 << "\n";
    } else if (x == 0 || y == 0 || x%y == 0 || y%x == 0) {
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