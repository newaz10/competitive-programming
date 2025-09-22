#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int x = 0, y = 0;
        bool found = false;

        for (int cycle = 0; cycle < 20; cycle++) {
            for (int i = 0; i < n; i++) {
                if (s[i] == 'N') y++;
                else if (s[i] == 'E') x++;
                else if (s[i] == 'S') y--;
                else if (s[i] == 'W') x--;

                if (x == a && y == b) {
                    found = true;
                    break;
                }
            }
            if (found) break;
        }

        cout << (found ? "YES" : "NO") << '\n';
    }
    
    return 0;
}