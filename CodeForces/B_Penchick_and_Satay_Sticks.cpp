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

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> suffix_min(n);
        suffix_min[n-1] = p[n-1];

        for (int i = n-2; i >= 0; i--) {
            suffix_min[i] = min(p[i], suffix_min[i+1]);
        }
        
        bool possible = true;
        
        for (int i = 0; i < n-1; i++) {
            if (p[i] > suffix_min[i+1] && p[i] - suffix_min[i+1] > 1) {
                possible = false;
                break;
            }
        }
        
        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}