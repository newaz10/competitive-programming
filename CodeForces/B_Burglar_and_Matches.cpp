#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n;
    int m;
    cin >> n >> m;

    vector<pair<int, int>> cont(m); 

    for (int i = 0; i < m; i++) {
        cin >> cont[i].second >> cont[i].first; 
    }

    sort(cont.rbegin(), cont.rend());

    long long total_matches = 0;
    long long boxes_taken = 0;

    for (int i = 0; i < m; i++) {
        if (boxes_taken >= n) break;
        long long available = cont[i].second;
        long long remaining = n - boxes_taken;
        long long take = min(available, remaining);
        total_matches += take * cont[i].first;
        boxes_taken += take;
    }

    cout << total_matches << '\n';

    return 0;
}