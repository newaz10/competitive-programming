#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;
    
    long long total_sum = 0, max_beauty = 0;
    
    for (int i = 0; i < n; i++) {
        long long val;
        cin >> val;
        
        total_sum += val;
        max_beauty += (val + x - 1) / x;
    }
    
    long long min_beauty = (total_sum + x - 1) / x;
    
    cout << min_beauty << " " << max_beauty << "\n";
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