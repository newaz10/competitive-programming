#include <bits/stdc++.h>
using namespace std;

bool can(int n, const vector<long long>& a, long long x) {
    int k = (n + 1) / 2;
    int need_less = k - 1;

    int min_less = 0, max_less = 0;

    for (int i = 1; i < n; i++) {
        long long low = min(a[i], -a[i]);
        long long high = max(a[i], -a[i]);

        if (high < x) {
            min_less++;
            max_less++;
        } 
        else if (low < x) {
            max_less++;
        }
    }

    return (need_less >= min_less && need_less <= max_less);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        long long x1 = a[0];
        long long x2 = -a[0];

        if (can(n, a, x1) || can(n, a, x2)) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }

    return 0;
}