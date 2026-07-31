#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    string vowels = "aeiou";
    vector<int> counts(5, n / 5);
    
    for (int i = 0; i < n % 5; i++) {
        counts[i]++;
    }
    
    string ans = "";
    for (int i = 0; i < 5; i++) {
        ans += string(counts[i], vowels[i]);
    }
    
    cout << ans << "\n";
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