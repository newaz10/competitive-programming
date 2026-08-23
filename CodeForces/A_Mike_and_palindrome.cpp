#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;

    int n = s.length();
    int diff = 0;

    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            diff++;
        }
    }

    if (diff == 1 || (diff == 0 && n % 2 != 0)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    return 0;
}