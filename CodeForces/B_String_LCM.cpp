#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

void solve() {
    string s, t;
    cin >> s >> t;

    int n = s.length();
    int m = t.length();

    int target_len = lcm(n, m);

    string z1 = "";
    string z2 = "";

    for (int i = 0; i < target_len / n; i++) {
        z1 += s;
    }

    for (int i = 0; i < target_len / m; i++) {
        z2 += t;
    }

    if (z1 == z2) {
        cout << z1 << "\n";
    } else {
        cout << -1 << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    cin >> q;
    
    while (q--) {
        solve();
    }

    return 0;
}