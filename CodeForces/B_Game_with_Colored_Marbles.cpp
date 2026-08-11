#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    map<int, int> freq;
    for (int i = 0; i < n; i++) {
        int color;
        cin >> color;
        freq[color]++;
    }
    
    int cnt1 = 0;
    int cnt_ge2 = 0;
    
    for (const auto& p : freq) {
        if (p.second == 1) {
            cnt1++;
        } else {
            cnt_ge2++;
        }
    }
    
    int alice_cnt1 = (cnt1 + 1) / 2;
    
    int score = (alice_cnt1 * 2) + (cnt_ge2 * 1);
    
    cout << score << "\n";
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