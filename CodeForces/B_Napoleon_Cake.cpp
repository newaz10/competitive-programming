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

        vector<int> diff(n + 1, 0); 

        for (int i = 0; i < n; i++) {
            if (a[i] == 0) continue;
            int start = max(0, i - a[i] + 1);
            diff[start]++;
            if (i + 1 < n) {
                diff[i + 1]--;
            }
        }

        vector<int> ans(n);
        int curr = 0;
        
        for (int i = 0; i < n; i++) {
            curr += diff[i];
            ans[i] = (curr > 0) ? 1 : 0;
        }

        for (int i = 0; i < n; i++) {
            cout << ans[i] << " \n"[i == n-1];
        }
    }

    return 0;
}