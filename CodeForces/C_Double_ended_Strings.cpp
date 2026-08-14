#include <bits/stdc++.h>
using namespace std;

void solve() {
    string a, b;
    cin >> a >> b;

    int n = a.length();
    int m = b.length();

    int max_len = 0;

    for (int len = 1; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            string sub = a.substr(i, len);
            
            if (b.find(sub) != string::npos) {
                max_len = max(max_len, len);
            }
        }
    }

    int min_ops = n + m - 2 * max_len;
    cout << min_ops << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }

    return 0;
}