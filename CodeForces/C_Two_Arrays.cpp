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

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        bool valid = true;

        for (int i = 0; i < n; i++) {
            int diff = b[i] - a[i];
            
            if (diff != 0 && diff != 1) {
                valid = false;
                break;
            }
        }

        cout << (valid ? "YES" : "NO") << '\n';
    }

    return 0;
}