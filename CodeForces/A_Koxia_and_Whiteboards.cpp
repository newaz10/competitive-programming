#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    priority_queue<long long, vector<long long>, greater<long long>> pq;

    for (int i = 0; i < n; i++) {
        long long a;
        cin >> a;
        pq.push(a);
    }

    for (int j = 0; j < m; j++) {
        long long b;
        cin >> b;
        pq.pop();  
        pq.push(b);
    }

    long long total_sum = 0;
    while (!pq.empty()) {
        total_sum += pq.top();
        pq.pop();
    }

    cout << total_sum << "\n";
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