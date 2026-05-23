#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> p[i];
    }
    
    for (int i = 2; i <= n - 1; i++) {
        if (p[i] > p[i - 1] && p[i] > p[i + 1]) {
            cout << "YES\n";
            cout << i - 1 << " " << i << " " << i + 1 << "\n";
            return; 
        }
    }
    
    cout << "NO\n";
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