#include <bits/stdc++.h>
using namespace std;

void solve() {
    string s;
    cin >> s;
    
    char start_char = s[0];
    char end_char = s[s.length() - 1];
    
    int min_cost = abs(start_char - end_char);
    
    char min_allowed = min(start_char, end_char);
    char max_allowed = max(start_char, end_char);
    
    vector<pair<char, int>> middle_tiles;

    for (int i = 1; i < s.length() - 1; i++) {
        if (s[i] >= min_allowed && s[i] <= max_allowed) {
            middle_tiles.push_back({s[i], i + 1});
        }
    }
    
    if (start_char <= end_char) {
        sort(middle_tiles.begin(), middle_tiles.end());
    } else {
        sort(middle_tiles.begin(), middle_tiles.end(), [](const pair<char, int>& a, const pair<char, int>& b) {
            return a.first > b.first;
        });
    }
    
    int total_tiles = middle_tiles.size() + 2;
    
    cout << min_cost << " " << total_tiles << "\n";
    
    cout << 1 << " ";
    for (auto& tile : middle_tiles) {
        cout << tile.second << " ";
    }
    cout << s.length() << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while (t--) {
        solve();
    }
    
    return 0;
}