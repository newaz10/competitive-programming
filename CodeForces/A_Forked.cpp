#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long a, b;
    cin >> a >> b;
    
    long long xK, yK;
    cin >> xK >> yK;
    
    long long xQ, yQ;
    cin >> xQ >> yQ;
    
    vector<pair<long long, long long>> moves = {
        {a, b}, {a, -b}, {-a, b}, {-a, -b},
        {b, a}, {b, -a}, {-b, a}, {-b, -a}
    };
    
    set<pair<long long, long long>> king_attacks;
    for (size_t i = 0; i < moves.size(); i++) {
        long long nx = xK + moves[i].first;
        long long ny = yK + moves[i].second;
        king_attacks.insert(make_pair(nx, ny));
    }
    
    set<pair<long long, long long>> queen_attacks;
    for (size_t i = 0; i < moves.size(); i++) {
        long long nx = xQ + moves[i].first;
        long long ny = yQ + moves[i].second;
        queen_attacks.insert(make_pair(nx, ny));
    }
    
    int ans = 0;
    for (const auto& pos : king_attacks) {
        if (queen_attacks.count(pos)) {
            ans++;
        }
    }
    
    cout << ans << "\n";
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