#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;

    int a = 0, b = 0;

    for (char c : s) {
        if (c == '1') {
            a++;
        } else {
            b++;
        }
    }

    int min_count = min(a, b);

    if (min_count % 2 == 1) {
        cout << "DA" << '\n';
    } else {
        cout << "NET" << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;

    while(n--) {
        solve();
    }
    
    return 0;
}