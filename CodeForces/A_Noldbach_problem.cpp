#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    if (!(cin >> n >> k)) return 0;

    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= n; i += p) {
                is_prime[i] = false;
            }
        }
    }

    vector<int> primes;

    for (int i = 2; i <= n; i++) {
        if (is_prime[i]) {
            primes.push_back(i);
        }
    }

    int count = 0;
    
    for (size_t i = 0; i + 1 < primes.size(); i++) {
        int candidate = 1 + primes[i] + primes[i + 1];
        if (candidate <= n && is_prime[candidate]) {
            count++;
        }
    }

    if (count >= k) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}