#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;

    long long min_ops = 1e18;

    for (int k = 0; k <= 30; k++) {
        long long current_b = b + k;
        
        if (current_b < 2) {
            continue;
        }

        long long ops = k;
        long long temp_a = a;

        while (temp_a > 0) {
            temp_a /= current_b;
            ops++;
        }

        min_ops = min(min_ops, ops);
    }

    cout << min_ops << "\n";
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