#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, total_triples = 0;
    cin >> n;

    for (long long b = 1; b <= n; b++) {
        long long count = n / b;
        total_triples += count * count;
    }
    
    cout << total_triples << "\n";
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