#include <bits/stdc++.h>
using namespace std;

bool is_palindrome(const string& s) {
    int l = 0, r = (int)s.length() - 1;

    while (l < r) {
        if (s[l] != s[r]) return false;
        l++;
        r--;
    }

    return true;
}

bool is_non_decreasing(const string& s) {
    for (size_t i = 1; i < s.length(); i++) {
        if (s[i] < s[i - 1]) return false;
    }

    return true;
}

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    for (int mask = 0; mask < (1 << n); mask++) {
        string p = "";
        string x = "";
        vector<int> p_indices;

        for (int i = 0; i < n; i++) {
            if ((mask >> i) & 1) {
                p += s[i];
                p_indices.push_back(i + 1); 
            } else {
                x += s[i];
            }
        }

        if (is_non_decreasing(p) && is_palindrome(x)) {
            cout << p_indices.size() << "\n";
            for (size_t i = 0; i < p_indices.size(); i++) {
                cout << p_indices[i] << (i + 1 == p_indices.size() ? "" : " ");
            }
            cout << "\n";

            return;
        }
    }

    cout << -1 << "\n";
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