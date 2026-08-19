#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> c(3, 0);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        c[x % 3]++;
    }

    int target = n / 3;
    int moves = 0;

    for (int i = 0; i < 6; i++) {
        int cur = i % 3;
        int next_rem = (cur + 1) % 3;

        if (c[cur] > target) {
            int excess = c[cur] - target;
            moves += excess;
            c[next_rem] += excess;
            c[cur] = target;
        }
    }

    cout << moves << "\n";
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