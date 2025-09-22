#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> p(n);

        for (int i = 0; i < n; i++) {
            cin >> p[i];
        }

        vector<int> wrong;

        for (int i = 0; i < n; i++) {
            if ((p[i] - 1) % k != i % k) {
                wrong.push_back(i);
            }
        }

        if (wrong.empty()) {
            cout << 0 << '\n';
        } 
        else if (wrong.size() == 2) {
            cout << 1 << '\n';
        } 
        else {
            cout << -1 << '\n';
        }
    }
    
    return 0;
}