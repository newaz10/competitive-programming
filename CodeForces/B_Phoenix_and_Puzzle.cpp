#include <bits/stdc++.h>
using namespace std;

bool is_square(long long x) {
    if (x < 1) return false;
    long long r = round(sqrt(x));
    return r * r == x;
}

void solve() {
    long long n;
    cin >> n;

    if ((n % 2 == 0 && is_square(n / 2)) || (n % 4 == 0 && is_square(n / 4))) {
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