#include <bits/stdc++.h>
using namespace std;

const int MOD = 1e9 + 7;
const int MAXN = 100005;

vector<long long> fact(MAXN);

void precompute() {
    fact[0] = 1;

    for (int i = 1; i < MAXN; i++) {
        fact[i] = (fact[i - 1] * i) % MOD;
    }
}

void solve() {
    long long n;
    cin >> n;
    
    long long inversions_per_perm = (n * (n - 1)) % MOD;
    long long ans = (inversions_per_perm * fact[n]) % MOD;
    
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    precompute();
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}