#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        bool bad = false;
        int cnt = 0;

        for (char c : s) {
            if (c == '1') {
                cnt++;
                if (cnt >= k) {
                    bad = true;
                }
            } 
            else {
                cnt = 0;
            }
        }

        if (bad) {
            cout << "NO\n";
            continue;
        }

        cout << "YES\n";

        vector<int> p(n);
        int large = n;
        int small = 1;

        for (int i = 0; i < n; i++) {
            if (s[i] == '0') {
                p[i] = large--;
            }
        }
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                p[i] = small++;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << p[i] << " \n"[i == n-1];
        }
    }

    return 0;
}