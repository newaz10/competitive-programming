#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        vector<int> b(k);
        for (int i = 0; i < k; i++) cin >> b[i];

        sort(a.rbegin(), a.rend()); 
        sort(b.begin(), b.end());  

        long long ans = 0;
        int idx = 0; 

        for (int i = 0; i < k && idx < n; i++) {
            int x = b[i];

            if (idx + x - 1 < n) {
                for (int j = 0; j < x - 1; j++) {
                    ans += a[idx++];
                }
                idx++;
            } else {
                while (idx < n) {
                    ans += a[idx++];
                }
            }
        }

        while (idx < n) {
            ans += a[idx++];
        }

        cout << ans << "\n";
    }
    
    return 0;
}
