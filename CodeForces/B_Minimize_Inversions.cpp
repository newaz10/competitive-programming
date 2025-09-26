#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<int> idx(n);
        iota(idx.begin(), idx.end(), 0);

        sort(idx.begin(), idx.end(), [&](int i, int j) {
            return a[i] + b[i] < a[j] + b[j];
        });

        for (int i = 0; i < n; i++) {
            cout << a[idx[i]] << " \n"[i == n-1];
        }
        
        for (int i = 0; i < n; i++) {
            cout << b[idx[i]] << " \n"[i == n-1];
        }
    }

    return 0;
}