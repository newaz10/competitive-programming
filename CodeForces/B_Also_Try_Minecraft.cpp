#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<long long> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    
    // pref_R[i] = total damage from column 1 to column i
    vector<long long> pref_R(n + 1, 0);
    for (int i = 2; i <= n; i++) {
        long long drop = max(0LL, a[i - 1] - a[i]);
        pref_R[i] = pref_R[i - 1] + drop;
    }
    
    // pref_L[i] = total damage from column n down to column i
    vector<long long> pref_L(n + 1, 0);
    for (int i = n - 1; i >= 1; i--) {
        long long drop = max(0LL, a[i + 1] - a[i]);
        pref_L[i] = pref_L[i + 1] + drop;
    }
    
    while (m--) {
        int s, t;
        cin >> s >> t;
        
        if (s < t) {
            cout << pref_R[t] - pref_R[s] << "\n";
        } else {
            cout << pref_L[t] - pref_L[s] << "\n";
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    solve();
    
    return 0;
}