#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        long long k;
        cin >> n >> k;

        vector<long long> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        vector<long long> b(n);

        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }

        vector<pair<long long, int>> days;

        for (int i = 0; i < n; i++) {
            days.push_back({a[i], i});
        }

        sort(days.begin(), days.end());
        sort(b.begin(), b.end());

        vector<long long> ans(n);
        int j = 0;

        for (int i = 0; i < n; i++) {
            long long forecast = days[i].first;
            int idx = days[i].second;
            ans[idx] = b[j];
            j++;
        }

        for (int i = 0; i < n; i++) {
            if (i > 0) cout << " ";
            cout << ans[i];
        }
        cout << '\n';
    }

    return 0;
}