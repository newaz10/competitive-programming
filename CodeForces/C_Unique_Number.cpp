#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int x;
        cin >> x;

        if (x > 45) {
            cout << "-1\n";
            continue;
        }

        string ans = "";
        int digit = 9;

        while (x > 0 && digit >= 1) {
            if (x >= digit) {
                ans = char('0' + digit) + ans;
                x -= digit;
            }
            digit--;
        }

        if (x > 0) {
            cout << "-1\n";
        } 
        else {
            cout << ans << '\n';
        }
    }

    return 0;
}