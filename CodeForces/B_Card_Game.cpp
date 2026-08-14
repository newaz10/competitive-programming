#include <bits/stdc++.h>
using namespace std;

int check_game(int s1, int s2, int k1, int k2) {
    int suneet_pts = 0;
    int slavic_pts = 0;

    if (s1 > k1) suneet_pts++;
    else if (s1 < k1) slavic_pts++;

    if (s2 > k2) suneet_pts++;
    else if (s2 < k2) slavic_pts++;

    return (suneet_pts > slavic_pts) ? 1 : 0;
}

void solve() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int wins = 0;

    wins += check_game(a1, a2, b1, b2);
    wins += check_game(a1, a2, b2, b1);
    wins += check_game(a2, a1, b1, b2);
    wins += check_game(a2, a1, b2, b1);

    cout << wins << "\n";
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