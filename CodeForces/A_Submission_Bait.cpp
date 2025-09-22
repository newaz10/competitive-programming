#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        map<int, int> freq;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            freq[x]++;
        }

        bool has_odd = false;
        
        for (auto &p : freq) {
            if (p.second % 2 == 1) {
                has_odd = true;
                break;
            }
        }

        cout << (has_odd ? "YES" : "NO") << '\n';
    }

    return 0;
}