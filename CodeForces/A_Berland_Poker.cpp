#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    int cards_per_player = n / k;
    
    int j1 = min(m, cards_per_player);
    
    int remaining_jokers = m - j1;
    int j2 = (remaining_jokers + k - 2) / (k - 1);

    cout << j1 - j2 << "\n";
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