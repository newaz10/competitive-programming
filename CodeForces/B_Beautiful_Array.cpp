#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, k, b, s;
    cin >> n >> k >> b >> s;
    
    long long min_sum = b * k;
    long long max_sum = b * k + n * (k - 1);
    
    if (s < min_sum || s > max_sum) {
        cout << -1 << "\n";
        return;
    }
    
    vector<long long> a(n, 0);
    
    a[0] = b * k;
    long long rem = s - min_sum;
    
    for (int i = 0; i < n; i++) {
        long long add = min(rem, k - 1);
        a[i] += add;
        rem -= add;
    }
    
    for (int i = 0; i < n; i++) {
        cout << a[i] << (i == n - 1 ? "" : " ");
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