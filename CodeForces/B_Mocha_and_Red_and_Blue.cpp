#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    int first = -1;
    for (int i = 0; i < n; i++) {
        if (s[i] != '?') {
            first = i;
            break;
        }
    }
    
    if (first == -1) {
        s[0] = 'R';
        first = 0;
    }
    
    for (int i = first - 1; i >= 0; i--) {
        s[i] = (s[i + 1] == 'R') ? 'B' : 'R';
    }
    
    for (int i = first + 1; i < n; i++) {
        if (s[i] == '?') {
            s[i] = (s[i - 1] == 'R') ? 'B' : 'R';
        }
    }
    
    cout << s << "\n";
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