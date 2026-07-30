#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    long long c1 = 0, c2 = 0; 
    
    for (char ch : s) {
        if (ch == '-') {
            c1++;
        } else if (ch == '_') {
            c2++;
        }
    }
    
    if (c1 < 2 || c2 < 1) {
        cout << 0 << "\n";
        return;
    }
    
    long long a = c1 / 2;
    long long b = c1 - a;
    
    long long ans = a * b * c2;
    cout << ans << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}