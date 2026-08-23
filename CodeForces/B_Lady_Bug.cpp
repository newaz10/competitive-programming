#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string a, b;
    cin >> a >> b;

    int ones_p1 = 0; 
    int ones_p2 = 0; 

    for (int i = 0; i < n; i++) {
        if (i % 2 == 1) { 
            if (a[i] == '1') ones_p1++;
            if (b[i] == '1') ones_p2++;
        } else {
            if (a[i] == '1') ones_p2++;
            if (b[i] == '1') ones_p1++;
        }
    }

    int capacity_b_odd = (n + 1) / 2; 
    int capacity_b_even = n / 2;      

    if (ones_p1 <= capacity_b_odd && ones_p2 <= capacity_b_even) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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