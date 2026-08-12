#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    if (n % 2 != 0) {
        cout << "NO\n";
        return;
    }
    
    string st = "";
    for (int i = 0; i < n; i++) {
        if (!st.empty() && st.back() == s[i]) {
            st.pop_back();
        } else {
            st.push_back(s[i]);
        }
    }
    
    if (st.empty()) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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