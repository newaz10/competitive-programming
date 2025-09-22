#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        
        if (k == 0) {
            cout << "YES" << '\n';
            continue;
        }
        
        if (2 * k >= n) {
            cout << "NO" << '\n';
            continue;
        }
        
        bool valid = true;

        for (int i = 0; i < k; i++) {
            if (s[i] != s[n - 1 - i]) {
                valid = false;
                break;
            }
        }
        
        cout << (valid ? "YES" : "NO") << '\n';
    }
    
    return 0;
}