#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int ans = 1000000000;

    for (int skip = 1; skip < n - 1; skip++) {
        int max_diff = 0;
        int last = 0;

        for (int i = 1; i < n; i++) {
            if (i == skip) continue;
            max_diff = max(max_diff, a[i] - a[last]);
            last = i;
        }
        ans = min(ans, max_diff);
    }

    cout << ans << '\n';
    
    return 0;
}