#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;

        vector<int> freq(26, 0);
        for (char c : s) {
            freq[c - 'a']++;
        }

        int odd_count = 0;

        for (int count : freq) {
            if (count % 2 == 1) {
                odd_count++;
            }
        }

        int rem = n - k;

        if (k >= max(0, odd_count - 1) && (odd_count + k) % 2 == rem % 2) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }

    return 0;
}