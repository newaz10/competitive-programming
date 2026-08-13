#include <bits/stdc++.h>
using namespace std;

bool can_transform(const string& s, const string& T) {
    int n = s.length();
    int first_diff = -1;
    int last_diff = -1;
    int diff_count = 0;

    for (int i = 0; i < n; i++) {
        if (s[i] != T[i]) {
            if (first_diff == -1) {
                first_diff = i;
            }
            last_diff = i;
            diff_count++;
        }
    }

    if (diff_count == 0) {
        return true;
    }

    return (diff_count == last_diff - first_diff + 1);
}

void solve() {
    string s;
    cin >> s;

    int n = s.length();
    string T1 = "";
    string T2 = "";

    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            T1 += 'a';
            T2 += 'b';
        } else {
            T1 += 'b';
            T2 += 'a';
        }
    }

    if (can_transform(s, T1) || can_transform(s, T2)) {
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