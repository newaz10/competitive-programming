#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;

        vector<int> freq(m + 1, 0);
        vector<vector<int>> sets(n);

        for (int i = 0; i < n; i++) {
            int l;
            cin >> l;

            sets[i].resize(l);

            for (int j = 0; j < l; j++) {
                cin >> sets[i][j];
                freq[sets[i][j]]++;
            }
        }

        bool allCovered = true;

        for (int x = 1; x <= m; x++) {
            if (freq[x] == 0) {
                allCovered = false;
                break;
            }
        }

        if (!allCovered) {
            cout << "NO\n";
            continue;
        }

        int redundantCount = 0;

        for (int i = 0; i < n; i++) {
            bool isRedundant = true;
            for (int x : sets[i]) {
                if (freq[x] == 1) {
                    isRedundant = false;
                    break;
                }
            }
            if (isRedundant) {
                redundantCount++;
            }
        }

        if (redundantCount >= 2) {
            cout << "YES\n";
        } 
        else {
            cout << "NO\n";
        }
    }

    return 0;
}