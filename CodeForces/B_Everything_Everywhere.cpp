#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    int good_subarrays = 0;
    for (int i = 0; i < n - 1; i++) {
        int min_val = min(p[i], p[i + 1]);
        int diff = abs(p[i] - p[i + 1]);
        
        if (min_val % diff == 0) {
            good_subarrays++;
        }
    }
    
    cout << good_subarrays << "\n";
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