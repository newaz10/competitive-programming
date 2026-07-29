#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    long long count_ones = 0;
    long long count_zeros = 0;
    
    for (int i = 0; i < n; i++) {
        long long x;
        cin >> x;
        
        if (x == 1) {
            count_ones++;
        } else if (x == 0) {
            count_zeros++;
        }
    }
    
    long long ans = count_ones * (1LL << count_zeros);
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