#include <bits/stdc++.h>
using namespace std;

bool can_form_palindrome(long long r, long long g, long long b, long long w) {
    int odd_count = (r % 2) + (g % 2) + (b % 2) + (w % 2);
    return odd_count <= 1;
}

void solve() {
    long long r, g, b, w;
    cin >> r >> g >> b >> w;

    if (can_form_palindrome(r, g, b, w)) {
        cout << "Yes\n";
        return;
    }

    if (r > 0 && g > 0 && b > 0) {
        if (can_form_palindrome(r - 1, g - 1, b - 1, w + 3)) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
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