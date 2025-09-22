#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long a, b, n;
        cin >> a >> b >> n;

        vector<long long> x(n);

        for (int i = 0; i < n; i++) {
            cin >> x[i];
        }

        long long current = b, total_time = 0, extra = 0;

        for (int i = 0; i < n; i++) {
            extra += min(x[i], a - 1);
        }

        cout << b + extra << '\n';
    }

    return 0;
}