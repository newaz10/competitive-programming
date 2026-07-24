#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> a(n);
    int k = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];

        while (a[i] % 2 == 0) {
            a[i] /= 2;
            k++;
        }
    }
    
    sort(a.begin(), a.end());
    
    a[n - 1] <<= k;
    
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i];
    }
    
    cout << sum << "\n";
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