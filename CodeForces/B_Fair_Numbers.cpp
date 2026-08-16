#include <bits/stdc++.h>
using namespace std;

bool is_fair(long long x) {
    long long temp = x;

    while (temp > 0) {
        long long d = temp % 10;
        if (d != 0 && x % d != 0) {
            return false;
        }
        temp /= 10;
    }
    return true;
}

void solve() {
    long long n;
    cin >> n;

    while (!is_fair(n)) {
        n++;
    }

    cout << n << "\n";
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