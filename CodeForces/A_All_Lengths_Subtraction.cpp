#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n);
        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        bool possible = true;

        for (int k = n; k >= 1; k--) {
            int pos = -1;
            for (int i = 0; i < n; i++) {
                if (p[i] == k) {
                    pos = i;
                    break;
                }
            }

            if (pos == -1) {
                possible = false;
                break;
            }

            int l_start = max(0, pos - k + 1);
            int l_end = min(pos, n - k);

            bool found = false;
            for (int l = l_start; l <= l_end; l++) {
                bool valid = true;
                for (int j = l; j < l + k; j++) {
                    if (p[j] <= 0) {
                        valid = false;
                        break;
                    }
                }
                if (valid) {
                    for (int j = l; j < l + k; j++) {
                        p[j]--;
                    }
                    found = true;
                    break;
                }
            }

            if (!found) {
                possible = false;
                break;
            }
        }

        cout << (possible ? "YES" : "NO") << "\n";
    }

    return 0;
}