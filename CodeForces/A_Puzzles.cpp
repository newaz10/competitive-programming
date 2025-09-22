#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> puzzles(m);

    for (int i = 0; i < m; i++) {
        cin >> puzzles[i];
    }

    sort(puzzles.begin(), puzzles.end());

    int min_diff = INT_MAX;

    for (int i = 0; i <= m - n; i++) {
        int diff = puzzles[i + n - 1] - puzzles[i];
        
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    cout << min_diff << "\n";

    return 0;
}