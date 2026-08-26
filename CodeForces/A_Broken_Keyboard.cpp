#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    set<char> working;
    int n = s.length();
    int i = 0;

    while (i < n) {
        int j = i;

        while (j < n && s[j] == s[i]) {
            j++;
        }
        
        int block_length = j - i;

        if (block_length % 2 != 0) {
            working.insert(s[i]);
        }
        
        i = j;
    }

    for (char c : working) {
        cout << c;
    }
    cout << "\n";
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