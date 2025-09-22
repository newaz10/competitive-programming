#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }

    return a;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long target = n - 1;
        long long a = 2, b = target - 2;

        for (long long k = 2; k < min(target, 100LL); k++) {
            long long other = target - k;
            
            if (other <= 1 || k == other) continue;

            if (gcd(k, other) == 1) {
                a = k;
                b = other;
                break;
            }
        }

        cout << a << ' ' << b << ' ' << 1 << '\n';
    }

    return 0;
}