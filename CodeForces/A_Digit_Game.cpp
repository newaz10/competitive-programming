#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    if (n % 2 != 0) {
        bool raze_win = false;
        for (int i = 0; i < n; i += 2) { 
            int digit = s[i] - '0';
            if (digit % 2 != 0) {
                raze_win = true;
                break;
            }
        }
        cout << (raze_win ? 1 : 2) << "\n";
    } else {
        bool breach_win = false;
        for (int i = 1; i < n; i += 2) { 
            int digit = s[i] - '0';
            if (digit % 2 == 0) {
                breach_win = true;
                break;
            }
        }
        cout << (breach_win ? 2 : 1) << "\n";
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