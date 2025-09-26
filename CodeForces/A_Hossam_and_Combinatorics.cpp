#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        int min_val = *min_element(a.begin(), a.end());
        int max_val = *max_element(a.begin(), a.end());

        if (min_val == max_val) {
            cout << 1LL * n * (n - 1) << '\n';
        } 
        else {
            long long cnt_min = count(a.begin(), a.end(), min_val);
            long long cnt_max = count(a.begin(), a.end(), max_val);
            cout << 2LL * cnt_min * cnt_max << '\n';
        }
    }

    return 0;
}