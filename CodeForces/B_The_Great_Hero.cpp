#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long A, B;
        int n;
        cin >> A >> B >> n;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        long long total_damage = 0;
        long long max_attack = 0;

        for (int i = 0; i < n; i++) {
            long long k = (b[i] + A - 1) / A;
            total_damage += k * a[i];
            if (a[i] > max_attack) max_attack = a[i];
        }

        if (B > total_damage - max_attack) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }

    return 0;
}