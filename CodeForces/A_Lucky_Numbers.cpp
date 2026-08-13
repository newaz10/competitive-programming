#include <bits/stdc++.h>
using namespace std;

int get_luckiness(int x) {
    int max_d = 0;
    int min_d = 9;

    while (x > 0) {
        int d = x % 10;
        if (d > max_d) max_d = d;
        if (d < min_d) min_d = d;
        x /= 10;
    }

    return max_d - min_d;
}

void solve() {
    int l, r;
    cin >> l >> r;
    
    int best_x = l;
    int max_luck = -1;
    
    int limit = min(r, l + 100);
    for (int i = l; i <= limit; i++) {
        int luck = get_luckiness(i);
        if (luck > max_luck) {
            max_luck = luck;
            best_x = i;
        }
        if (max_luck == 9) {
            break; 
        }
    }
    
    cout << best_x << "\n";
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