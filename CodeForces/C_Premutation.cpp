#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> a(n, vector<int>(n - 1));
    vector<int> count_first(n + 1, 0);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - 1; j++) {
            cin >> a[i][j];
        }
        count_first[a[i][0]]++;
    }

    int p1 = -1;

    for (int val = 1; val <= n; val++) {
        if (count_first[val] > 1) {
            p1 = val;
            break;
        }
    }

    cout << p1 << " ";

    for (int i = 0; i < n; i++) {
        if (a[i][0] != p1) {
            for (int j = 0; j < n - 1; j++) {
                cout << a[i][j] << (j == n - 2 ? "" : " ");
            }
            cout << "\n";
            break;
        }
    }
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