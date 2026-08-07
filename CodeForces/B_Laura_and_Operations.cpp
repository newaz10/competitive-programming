#include <bits/stdc++.h>
using namespace std;

void solve() {
    int a, b, c;
    cin >> a >> b >> c;
    
    int can_1 = (b % 2 == c % 2) ? 1 : 0;
    int can_2 = (a % 2 == c % 2) ? 1 : 0;
    int can_3 = (a % 2 == b % 2) ? 1 : 0;
    
    cout << can_1 << " " << can_2 << " " << can_3 << "\n";
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