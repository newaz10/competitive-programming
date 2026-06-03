#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> p(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    
    if (n == 1) {
        cout << -1 << "\n";
        return;
    }
    
    vector<int> q(n);
    iota(q.begin(), q.end(), 1);
    
    for (int i = 0; i < n - 1; i++) {
        if (q[i] == p[i]) {
            swap(q[i], q[i + 1]);
        }
    }
    
    if (q[n - 1] == p[n - 1]) {
        swap(q[n - 2], q[n - 1]);
    }
    
    for (int i = 0; i < n; i++) {
        cout << q[i] << (i == n - 1 ? "" : " ");
    }
    cout << "\n";
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