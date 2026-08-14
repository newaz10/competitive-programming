#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string s;
    cin >> s;
    
    vector<int> pref(n, 0);
    vector<int> suff(n, 0);
    
    unordered_set<char> seen_pref;
    for (int i = 0; i < n; i++) {
        seen_pref.insert(s[i]);
        pref[i] = seen_pref.size();
    }
    
    unordered_set<char> seen_suff;
    for (int i = n - 1; i >= 0; i--) {
        seen_suff.insert(s[i]);
        suff[i] = seen_suff.size();
    }
    
    int max_score = 0;
    for (int i = 0; i < n - 1; i++) {
        int score = pref[i] + suff[i + 1];
        max_score = max(max_score, score);
    }
    
    cout << max_score << "\n";
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