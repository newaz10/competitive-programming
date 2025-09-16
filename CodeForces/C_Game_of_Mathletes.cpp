#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        map<int, int> freq;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }

        set<int> visited;
        long long score = 0;

        for (int x : a) {
            if (visited.count(x)) continue;

            int y = k - x;

            if (x == y) {
                score += freq[x] / 2;
                visited.insert(x);
            } else if (freq.count(y)) {
                score += min(freq[x], freq[y]);
                visited.insert(x);
                visited.insert(y);
            } else {
                visited.insert(x);
            }
        }

        cout << score << "\n";
    }

    return 0;
}