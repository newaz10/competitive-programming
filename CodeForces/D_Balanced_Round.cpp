#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int max_chain = 1;
        int current_chain = 1;
        int last = a[0];

        for (int i = 1; i < n; i++) {
            if (a[i] - last <= k) {
                current_chain++;
                last = a[i];
            } else {
                current_chain = 1;
                last = a[i];
            }
            if (current_chain > max_chain) {
                max_chain = current_chain;
            }
        }

        cout << n - max_chain << "\n";
    }

    return 0;
}