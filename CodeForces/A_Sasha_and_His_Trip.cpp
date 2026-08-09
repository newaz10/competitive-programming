#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, v;
    if (!(cin >> n >> v)) return 0;
    
    if (v >= n - 1) {
        cout << n - 1 << "\n";
        return 0;
    }
    
    int total_cost = v;
    
    for (int i = 2; i <= n - v; i++) {
        total_cost += i;
    }
    
    cout << total_cost << "\n";
    
    return 0;
}