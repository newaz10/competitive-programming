#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> evens, odds;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 == 0) {
            evens.push_back(x);
        } else {
            odds.push_back(x);
        }
    }
    
    vector<int> rearranged;
    for (int x : evens) rearranged.push_back(x);
    for (int x : odds) rearranged.push_back(x);
    
    int good_pairs = 0;
    
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (__gcd(rearranged[i], 2 * rearranged[j]) > 1) {
                good_pairs++;
            }
        }
    }
    
    cout << good_pairs << "\n";
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