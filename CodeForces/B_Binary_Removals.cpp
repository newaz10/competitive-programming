#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    int first_11 = -1;
    int last_00 = -1;

    for (int i = 0; i < n - 1; i++) {
        if (s[i] == '1' && s[i + 1] == '1') {
            if (first_11 == -1) {
                first_11 = i;
            }
        }
        if (s[i] == '0' && s[i + 1] == '0') {
            last_00 = i;
        }
    }

    if (first_11 != -1 && last_00 != -1 && first_11 < last_00) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
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